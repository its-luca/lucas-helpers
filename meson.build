project('lucas-helpers', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

library('lucas-helpers',
           'helpers.c',
           'proc_iomem_parser.c')

lucas_helpers_dep = declare_dependency(include_directories: 'include')
