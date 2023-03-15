#include <iostream>

#include "CommonTokenStream.h"
#include "ParseTree.h"
#include "VecCppLexer.h"
#include "VecCppParser.h"
#include <Eigen/Core>
#include <antlr4-runtime.h>
#include <unsupported/Eigen/CXX11/Tensor>

int main() {
  std::string line;
  std::ifstream progFile("test.v");
  if (progFile.is_open()) {
    antlr4::ANTLRInputStream input(progFile);
    VecCppLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
      std::cout << token->toString() << std::endl;
    }

    VecCppParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.program();

    std::cout << tree->toStringTree(&parser) << std::endl;
  }
  progFile.close();

  // Eigen::MatrixXd m(2, 2);
  // m(0, 0) = 3;
  // m(1, 0) = 2.5;
  // m(0, 1) = -1;
  // m(1, 1) = m(1, 0) + m(0, 1);
  // std::cout << m << std::endl;
  // Eigen::Tensor<float, 3> t(1, 2, 3);
  // std::cout << t.dimensions() << std::endl;
}
