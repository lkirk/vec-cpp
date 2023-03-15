project('vec', 'cpp', version : '0.0.1')

java = find_program('java')

# parser_input = files('VecCpp.g4')
# parser_outputs = [
#   'VecCpp.interp',
#   'VecCpp.tokens',
#   'VecCppBaseListener.cpp',
#   'VecCppBaseListener.h',
#   'VecCppLexer.cpp',
#   'VecCppLexer.h',
#   'VecCppLexer.interp',
#   'VecCppLexer.tokens',
#   'VecCppListener.cpp',
#   'VecCppListener.h',
#   'VecCppParser.cpp',
#   'VecCppParser.h'
# ]
# parser_dir = 'parser'

# parser = custom_target(
#   'gen-parser',
#   input: parser_input,
#   output: parser_outputs,
#   command: [
#     java, '-jar', '/home/lkirk/repo/vec-cpp/antlr-4.11.1-complete.jar',
#     '@INPUT@',
#     '-o', '@OUTDIR@',
#     '-Dlanguage=Cpp',
#   ]
# )
# parser_sources = [
#   'VecCppBaseListener.cpp',
#   'VecCppLexer.cpp',
#   'VecCppListener.cpp',
#   'VecCppParser.cpp'
# ]

parser_sources = [
  'parser/VecCppBaseListener.cpp',
  'parser/VecCppLexer.cpp',
  'parser/VecCppListener.cpp',
  'parser/VecCppParser.cpp'
]

eigen3 = dependency('eigen3')
cmake = import('cmake')
antlr4_subproj = cmake.subproject('antlr')
# message('CMake targets:\n - ' + '\n - '.join(antlr4_subproj.target_list()))
antlr4 = antlr4_subproj.dependency('antlr4_static')

# parser_lib = library('parser', parser, include_directories: [antlr_inc], dependencies: [antlr_dep])
# parser_dep = declare_dependency(sources: parser_sources, link_with: [parser_lib])

vec_sources = ['main.cpp'] + parser_sources

# executable('vec', vec_sources, dependencies: [eigen3, antlr4])
executable('vec', vec_sources, dependencies: [eigen3, antlr4], include_directories: ['parser'])
