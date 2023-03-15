
// Generated from VecCpp.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "VecCppListener.h"


/**
 * This class provides an empty implementation of VecCppListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  VecCppBaseListener : public VecCppListener {
public:

  virtual void enterProgram(VecCppParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(VecCppParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(VecCppParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(VecCppParser::StatementContext * /*ctx*/) override { }

  virtual void enterValue(VecCppParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(VecCppParser::ValueContext * /*ctx*/) override { }

  virtual void enterExpression(VecCppParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(VecCppParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterList(VecCppParser::ListContext * /*ctx*/) override { }
  virtual void exitList(VecCppParser::ListContext * /*ctx*/) override { }

  virtual void enterType(VecCppParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(VecCppParser::TypeContext * /*ctx*/) override { }

  virtual void enterArray(VecCppParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(VecCppParser::ArrayContext * /*ctx*/) override { }

  virtual void enterFuncdef(VecCppParser::FuncdefContext * /*ctx*/) override { }
  virtual void exitFuncdef(VecCppParser::FuncdefContext * /*ctx*/) override { }

  virtual void enterFunccall(VecCppParser::FunccallContext * /*ctx*/) override { }
  virtual void exitFunccall(VecCppParser::FunccallContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

