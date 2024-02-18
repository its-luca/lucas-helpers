project('lucas-helpers', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

lucas_helpers_lib = library('lucas-helpers',
           'helpers.c',
           'proc_iomem_parser.c')

lucas_helpers_dep = declare_dependency(link_with: lucas_helpers_lib, include_directories: 'include')
