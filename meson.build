project('my-meson-test', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

#the string arg of dependency must match the
#identifier in the [provides] section of the dependency
json_c_dep  = dependency('json-c')

deps = [json_c_dep ]
executable('main',
           'main.c',
           dependencies: deps,
           install : true)
