project('Toof Example',
	'cpp',
	version: '0.1',
	default_options: ['warning_level=3', 'cpp_std=c++17']
)

project_source_files = [
	'src/main.cpp',
	'src/game.cpp'
]

sdl_dependencies = [dependency('sdl2'), dependency('sdl2_image')]
toof_dependency = dependency('Toof', fallback: ['Toof', 'project_dep'])

project_dependencies = [
	sdl_dependencies,
	toof_dependency
]

build_args = [
]

if toof_dependency.get_variable('double') == 'true'
	build_args += ['-D REAL_T_IS_DOUBLE']
endif

if toof_dependency.get_variable('int64') == 'true'
	build_args += ['-D INT_IS_64BIT']
endif

build_args += [
	'-DPROJECT_NAME=' + meson.project_name(),
	'-DPROJECT_VERSION=' + meson.project_version(),
]

project_target = executable(meson.project_name(),
	project_source_files,
	dependencies: project_dependencies,
	install: false,
	cpp_args: build_args
)
