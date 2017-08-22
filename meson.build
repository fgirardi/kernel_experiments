project('kernel_experiments', 'c')
add_project_arguments(['-Wall', '-Werror', '-Wextra', '-I/usr/include/libevdev-1.0'], language: 'c')
dep_libevdev = dependency('libevdev')
dep_udev = dependency('libudev')
dep_libinput = dependency('libinput')

executable('uinput_kb', 'userspace/uinput/uinput_kb.c')
executable('uinput_mouse', 'userspace/uinput/uinput_mouse.c')
executable('event_dev_info', 'userspace/uinput/event_dev_info.c')
executable('hid_dev_info', 'userspace/uinput/hid_dev_info.c')
executable('uinput_old_style', 'userspace/uinput/uinput_old_style.c')
executable('joystick_interface', 'userspace/uinput/joystick_interface.c')
executable('evdev', 'userspace/uinput/evdev.c'
	, dependencies: dep_libevdev)
executable('evdev_libudev', 'userspace/uinput/evdev_libudev.c'
	, dependencies: [dep_libevdev, dep_udev])

executable('ibinput_debug_events', 'userspace/libinput/debug_events.c'
	, dependencies: [dep_udev, dep_libinput])

executable('syscall_getcpu', 'userspace/misc/syscall_getcpu.c')
executable('seccomp', 'userspace/misc/seccomp.c')
executable('fs_fat', 'userspace/misc/fs_fat.c')