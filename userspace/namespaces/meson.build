executable('caps_setuid', 'caps_setuid.c'
	, dependencies: [dep_libcap]
	, include_directories: incdir)
executable('clone_caps', 'clone_caps.c'
	, dependencies: [dep_libcap]
	, include_directories: incdir)
executable('ns_clone_uts', 'ns_clone_uts.c'
	, include_directories: incdir)
executable('clone_pidns_proc', 'clone_pidns_proc.c'
	, include_directories: incdir)
executable('ns_exec', 'ns_exec.c'
	, install: true
	, dependencies: [dep_libcap]
	, include_directories: incdir)

#conf = configuration_data()
#configure_file(input: 'completions/bash/ns_exec'
#	, output: 'ns_exec'
#	, install_dir: completiondir
#	, configuration: conf)
