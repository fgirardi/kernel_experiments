#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#include <linux/msdos_fs.h>
#include <linux/fs.h>

int main(int argc, char **argv)
{
	int ret, fd;
	struct fat_boot_sector fbs;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <path to disk>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		perror("open");
		exit(EXIT_FAILURE);
	}

	ret = read(fd, &fbs, sizeof(fbs));
	if (ret != sizeof(fbs)) {
		perror("read");
		exit(EXIT_FAILURE);
	}

	if (fbs.fats == 32)
		printf("%.11s\n", fbs.fat32.vol_label);
	else
		printf("%.11s\n", fbs.fat16.vol_label);

	if (close(fd)) {
		perror("close");
		exit(EXIT_FAILURE);
	}

	return EXIT_SUCCESS;
}