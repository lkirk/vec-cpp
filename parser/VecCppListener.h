
// Generated from VecCpp.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "VecCppParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by VecCppParser.
 */
class  VecCppListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(VecCppParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(VecCppParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(VecCppParser::StatementContext *ctx) = 0;
  virtual void exitStatement(VecCppParser::StatementContext *ctx) = 0;

  virtual void enterValue(VecCppParser::ValueContext *ctx) = 0;
  virtual void exitValue(VecCppParser::ValueContext *ctx) = 0;

  virtual void enterExpression(VecCppParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(VecCppParser::ExpressionContext *ctx) = 0;

  virtual void enterList(VecCppParser::ListContext *ctx) = 0;
  virtual void exitList(VecCppParser::ListContext *ctx) = 0;

  virtual void enterType(VecCppParser::TypeContext *ctx) = 0;
  virtual void exitType(VecCppParser::TypeContext *ctx) = 0;

  virtual void enterArray(VecCppParser::ArrayContext *ctx) = 0;
  virtual void exitArray(VecCppParser::ArrayContext *ctx) = 0;

  virtual void enterFuncdef(VecCppParser::FuncdefContext *ctx) = 0;
  virtual void exitFuncdef(VecCppParser::FuncdefContext *ctx) = 0;

  virtual void enterFunccall(VecCppParser::FunccallContext *ctx) = 0;
  virtual void exitFunccall(VecCppParser::FunccallContext *ctx) = 0;


};

