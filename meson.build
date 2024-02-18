project('lucas-helpers', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

library('lucas-helpers',
           'helpers.c',
           'proc_iomem_parser.c')

pub_headers = ['helpers.h', 'proc_iomem_parser.h']
install_headers(pub_headers, subdir: 'lucas-helpers')
