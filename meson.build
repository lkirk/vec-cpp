project('vec', 'cpp', version : '0.0.1')

java = find_program('java')

parser_sources = [
  'parser/VecCppBaseListener.cpp',
  'parser/VecCppLexer.cpp',
  'parser/VecCppListener.cpp',
  'parser/VecCppParser.cpp'
]

eigen3 = dependency('eigen3')
cmake = import('cmake')
antlr4_subproj = cmake.subproject('antlr')
antlr4 = antlr4_subproj.dependency('antlr4_static')

vec_sources = ['main.cpp'] + parser_sources

executable('vec', vec_sources, dependencies: [eigen3, antlr4], include_directories: ['parser'])
