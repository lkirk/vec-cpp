
// Generated from VecCpp.g4 by ANTLR 4.11.1


#include "VecCppListener.h"

#include "VecCppParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct VecCppParserStaticData final {
  VecCppParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VecCppParserStaticData(const VecCppParserStaticData&) = delete;
  VecCppParserStaticData(VecCppParserStaticData&&) = delete;
  VecCppParserStaticData& operator=(const VecCppParserStaticData&) = delete;
  VecCppParserStaticData& operator=(VecCppParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag veccppParserOnceFlag;
VecCppParserStaticData *veccppParserStaticData = nullptr;

void veccppParserInitialize() {
  assert(veccppParserStaticData == nullptr);
  auto staticData = std::make_unique<VecCppParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "value", "expression", "list", "type", "array", 
      "funcdef", "funccall"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "'int'", "'float'", "'str'", "'byte'", "'bool'", 
      "'@'", "','", "'{'", "'}'", "'return'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Identifier", 
      "Whitespace", "Integer", "Float", "Boolean"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,18,123,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,5,0,20,8,0,10,0,12,0,23,9,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,3,1,33,8,1,1,2,1,2,1,2,1,2,1,2,3,2,40,8,2,1,3,1,3,1,3,3,3,45,
  	8,3,1,4,1,4,4,4,49,8,4,11,4,12,4,50,1,4,1,4,1,4,1,4,3,4,57,8,4,1,5,1,
  	5,1,6,1,6,1,6,1,6,1,6,1,6,4,6,67,8,6,11,6,12,6,68,3,6,71,8,6,1,6,1,6,
  	3,6,75,8,6,1,7,1,7,1,7,4,7,80,8,7,11,7,12,7,81,1,7,1,7,1,7,5,7,87,8,7,
  	10,7,12,7,90,9,7,1,7,1,7,1,7,1,7,4,7,96,8,7,11,7,12,7,97,1,7,1,7,1,7,
  	5,7,103,8,7,10,7,12,7,106,9,7,1,7,1,7,1,7,1,7,3,7,112,8,7,1,8,1,8,1,8,
  	4,8,117,8,8,11,8,12,8,118,1,8,1,8,1,8,0,0,9,0,2,4,6,8,10,12,14,16,0,1,
  	1,0,4,8,134,0,21,1,0,0,0,2,32,1,0,0,0,4,39,1,0,0,0,6,44,1,0,0,0,8,56,
  	1,0,0,0,10,58,1,0,0,0,12,60,1,0,0,0,14,111,1,0,0,0,16,113,1,0,0,0,18,
  	20,3,2,1,0,19,18,1,0,0,0,20,23,1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,
  	24,1,0,0,0,23,21,1,0,0,0,24,25,5,0,0,1,25,1,1,0,0,0,26,27,5,14,0,0,27,
  	28,5,1,0,0,28,33,3,6,3,0,29,33,3,6,3,0,30,33,3,14,7,0,31,33,3,16,8,0,
  	32,26,1,0,0,0,32,29,1,0,0,0,32,30,1,0,0,0,32,31,1,0,0,0,33,3,1,0,0,0,
  	34,40,5,16,0,0,35,40,5,17,0,0,36,40,5,18,0,0,37,40,5,14,0,0,38,40,3,8,
  	4,0,39,34,1,0,0,0,39,35,1,0,0,0,39,36,1,0,0,0,39,37,1,0,0,0,39,38,1,0,
  	0,0,40,5,1,0,0,0,41,45,5,14,0,0,42,45,3,4,2,0,43,45,3,12,6,0,44,41,1,
  	0,0,0,44,42,1,0,0,0,44,43,1,0,0,0,45,7,1,0,0,0,46,48,5,2,0,0,47,49,3,
  	4,2,0,48,47,1,0,0,0,49,50,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,52,1,
  	0,0,0,52,53,5,3,0,0,53,57,1,0,0,0,54,55,5,2,0,0,55,57,5,3,0,0,56,46,1,
  	0,0,0,56,54,1,0,0,0,57,9,1,0,0,0,58,59,7,0,0,0,59,11,1,0,0,0,60,61,3,
  	10,5,0,61,62,5,14,0,0,62,63,5,9,0,0,63,70,5,16,0,0,64,65,5,10,0,0,65,
  	67,5,16,0,0,66,64,1,0,0,0,67,68,1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,
  	71,1,0,0,0,70,66,1,0,0,0,70,71,1,0,0,0,71,74,1,0,0,0,72,73,5,1,0,0,73,
  	75,3,8,4,0,74,72,1,0,0,0,74,75,1,0,0,0,75,13,1,0,0,0,76,77,5,14,0,0,77,
  	79,5,2,0,0,78,80,5,14,0,0,79,78,1,0,0,0,80,81,1,0,0,0,81,79,1,0,0,0,81,
  	82,1,0,0,0,82,83,1,0,0,0,83,84,5,3,0,0,84,88,5,11,0,0,85,87,3,2,1,0,86,
  	85,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,91,1,0,0,0,90,
  	88,1,0,0,0,91,112,5,12,0,0,92,93,5,14,0,0,93,95,5,2,0,0,94,96,5,14,0,
  	0,95,94,1,0,0,0,96,97,1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,98,99,1,0,0,
  	0,99,100,5,3,0,0,100,104,5,11,0,0,101,103,3,2,1,0,102,101,1,0,0,0,103,
  	106,1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,0,105,107,1,0,0,0,106,104,1,
  	0,0,0,107,108,5,13,0,0,108,109,3,4,2,0,109,110,5,12,0,0,110,112,1,0,0,
  	0,111,76,1,0,0,0,111,92,1,0,0,0,112,15,1,0,0,0,113,114,5,14,0,0,114,116,
  	5,2,0,0,115,117,3,4,2,0,116,115,1,0,0,0,117,118,1,0,0,0,118,116,1,0,0,
  	0,118,119,1,0,0,0,119,120,1,0,0,0,120,121,5,3,0,0,121,17,1,0,0,0,15,21,
  	32,39,44,50,56,68,70,74,81,88,97,104,111,118
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  veccppParserStaticData = staticData.release();
}

}

VecCppParser::VecCppParser(TokenStream *input) : VecCppParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

VecCppParser::VecCppParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  VecCppParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *veccppParserStaticData->atn, veccppParserStaticData->decisionToDFA, veccppParserStaticData->sharedContextCache, options);
}

VecCppParser::~VecCppParser() {
  delete _interpreter;
}

const atn::ATN& VecCppParser::getATN() const {
  return *veccppParserStaticData->atn;
}

std::string VecCppParser::getGrammarFileName() const {
  return "VecCpp.g4";
}

const std::vector<std::string>& VecCppParser::getRuleNames() const {
  return veccppParserStaticData->ruleNames;
}

const dfa::Vocabulary& VecCppParser::getVocabulary() const {
  return veccppParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VecCppParser::getSerializedATN() const {
  return veccppParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

VecCppParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VecCppParser::ProgramContext::EOF() {
  return getToken(VecCppParser::EOF, 0);
}

std::vector<VecCppParser::StatementContext *> VecCppParser::ProgramContext::statement() {
  return getRuleContexts<VecCppParser::StatementContext>();
}

VecCppParser::StatementContext* VecCppParser::ProgramContext::statement(size_t i) {
  return getRuleContext<VecCppParser::StatementContext>(i);
}


size_t VecCppParser::ProgramContext::getRuleIndex() const {
  return VecCppParser::RuleProgram;
}

void VecCppParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void VecCppParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

VecCppParser::ProgramContext* VecCppParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, VecCppParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 475636) != 0) {
      setState(18);
      statement();
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(24);
    match(VecCppParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

VecCppParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VecCppParser::StatementContext::Identifier() {
  return getToken(VecCppParser::Identifier, 0);
}

VecCppParser::ExpressionContext* VecCppParser::StatementContext::expression() {
  return getRuleContext<VecCppParser::ExpressionContext>(0);
}

VecCppParser::FuncdefContext* VecCppParser::StatementContext::funcdef() {
  return getRuleContext<VecCppParser::FuncdefContext>(0);
}

VecCppParser::FunccallContext* VecCppParser::StatementContext::funccall() {
  return getRuleContext<VecCppParser::FunccallContext>(0);
}


size_t VecCppParser::StatementContext::getRuleIndex() const {
  return VecCppParser::RuleStatement;
}

void VecCppParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void VecCppParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

VecCppParser::StatementContext* VecCppParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, VecCppParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(32);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(26);
      match(VecCppParser::Identifier);
      setState(27);
      match(VecCppParser::T__0);
      setState(28);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(29);
      expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(30);
      funcdef();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(31);
      funccall();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

VecCppParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VecCppParser::ValueContext::Integer() {
  return getToken(VecCppParser::Integer, 0);
}

tree::TerminalNode* VecCppParser::ValueContext::Float() {
  return getToken(VecCppParser::Float, 0);
}

tree::TerminalNode* VecCppParser::ValueContext::Boolean() {
  return getToken(VecCppParser::Boolean, 0);
}

tree::TerminalNode* VecCppParser::ValueContext::Identifier() {
  return getToken(VecCppParser::Identifier, 0);
}

VecCppParser::ListContext* VecCppParser::ValueContext::list() {
  return getRuleContext<VecCppParser::ListContext>(0);
}


size_t VecCppParser::ValueContext::getRuleIndex() const {
  return VecCppParser::RuleValue;
}

void VecCppParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void VecCppParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

VecCppParser::ValueContext* VecCppParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 4, VecCppParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VecCppParser::Integer: {
        enterOuterAlt(_localctx, 1);
        setState(34);
        match(VecCppParser::Integer);
        break;
      }

      case VecCppParser::Float: {
        enterOuterAlt(_localctx, 2);
        setState(35);
        match(VecCppParser::Float);
        break;
      }

      case VecCppParser::Boolean: {
        enterOuterAlt(_localctx, 3);
        setState(36);
        match(VecCppParser::Boolean);
        break;
      }

      case VecCppParser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(37);
        match(VecCppParser::Identifier);
        break;
      }

      case VecCppParser::T__1: {
        enterOuterAlt(_localctx, 5);
        setState(38);
        list();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

VecCppParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VecCppParser::ExpressionContext::Identifier() {
  return getToken(VecCppParser::Identifier, 0);
}

VecCppParser::ValueContext* VecCppParser::ExpressionContext::value() {
  return getRuleContext<VecCppParser::ValueContext>(0);
}

VecCppParser::ArrayContext* VecCppParser::ExpressionContext::array() {
  return getRuleContext<VecCppParser::ArrayContext>(0);
}


size_t VecCppParser::ExpressionContext::getRuleIndex() const {
  return VecCppParser::RuleExpression;
}

void VecCppParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void VecCppParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

VecCppParser::ExpressionContext* VecCppParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, VecCppParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(41);
      match(VecCppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(42);
      value();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(43);
      array();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

VecCppParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VecCppParser::ValueContext *> VecCppParser::ListContext::value() {
  return getRuleContexts<VecCppParser::ValueContext>();
}

VecCppParser::ValueContext* VecCppParser::ListContext::value(size_t i) {
  return getRuleContext<VecCppParser::ValueContext>(i);
}


size_t VecCppParser::ListContext::getRuleIndex() const {
  return VecCppParser::RuleList;
}

void VecCppParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void VecCppParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}

VecCppParser::ListContext* VecCppParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 8, VecCppParser::RuleList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(46);
      match(VecCppParser::T__1);

      setState(48); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(47);
        value();
        setState(50); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 475140) != 0);
      setState(52);
      match(VecCppParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(54);
      match(VecCppParser::T__1);
      setState(55);
      match(VecCppParser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

VecCppParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t VecCppParser::TypeContext::getRuleIndex() const {
  return VecCppParser::RuleType;
}

void VecCppParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void VecCppParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

VecCppParser::TypeContext* VecCppParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, VecCppParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 496) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

VecCppParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VecCppParser::TypeContext* VecCppParser::ArrayContext::type() {
  return getRuleContext<VecCppParser::TypeContext>(0);
}

tree::TerminalNode* VecCppParser::ArrayContext::Identifier() {
  return getToken(VecCppParser::Identifier, 0);
}

std::vector<tree::TerminalNode *> VecCppParser::ArrayContext::Integer() {
  return getTokens(VecCppParser::Integer);
}

tree::TerminalNode* VecCppParser::ArrayContext::Integer(size_t i) {
  return getToken(VecCppParser::Integer, i);
}

VecCppParser::ListContext* VecCppParser::ArrayContext::list() {
  return getRuleContext<VecCppParser::ListContext>(0);
}


size_t VecCppParser::ArrayContext::getRuleIndex() const {
  return VecCppParser::RuleArray;
}

void VecCppParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}

void VecCppParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
}

VecCppParser::ArrayContext* VecCppParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 12, VecCppParser::RuleArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    type();
    setState(61);
    match(VecCppParser::Identifier);
    setState(62);
    match(VecCppParser::T__8);
    setState(63);
    match(VecCppParser::Integer);
    setState(70);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VecCppParser::T__9) {
      setState(66); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(64);
        match(VecCppParser::T__9);
        setState(65);
        match(VecCppParser::Integer);
        setState(68); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == VecCppParser::T__9);
    }
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VecCppParser::T__0) {
      setState(72);
      match(VecCppParser::T__0);
      setState(73);
      list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefContext ------------------------------------------------------------------

VecCppParser::FuncdefContext::FuncdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VecCppParser::FuncdefContext::Identifier() {
  return getTokens(VecCppParser::Identifier);
}

tree::TerminalNode* VecCppParser::FuncdefContext::Identifier(size_t i) {
  return getToken(VecCppParser::Identifier, i);
}

std::vector<VecCppParser::StatementContext *> VecCppParser::FuncdefContext::statement() {
  return getRuleContexts<VecCppParser::StatementContext>();
}

VecCppParser::StatementContext* VecCppParser::FuncdefContext::statement(size_t i) {
  return getRuleContext<VecCppParser::StatementContext>(i);
}

VecCppParser::ValueContext* VecCppParser::FuncdefContext::value() {
  return getRuleContext<VecCppParser::ValueContext>(0);
}


size_t VecCppParser::FuncdefContext::getRuleIndex() const {
  return VecCppParser::RuleFuncdef;
}

void VecCppParser::FuncdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncdef(this);
}

void VecCppParser::FuncdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncdef(this);
}

VecCppParser::FuncdefContext* VecCppParser::funcdef() {
  FuncdefContext *_localctx = _tracker.createInstance<FuncdefContext>(_ctx, getState());
  enterRule(_localctx, 14, VecCppParser::RuleFuncdef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(76);
      match(VecCppParser::Identifier);
      setState(77);
      match(VecCppParser::T__1);
      setState(79); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(78);
        match(VecCppParser::Identifier);
        setState(81); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == VecCppParser::Identifier);
      setState(83);
      match(VecCppParser::T__2);
      setState(84);
      match(VecCppParser::T__10);
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 475636) != 0) {
        setState(85);
        statement();
        setState(90);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(91);
      match(VecCppParser::T__11);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(92);
      match(VecCppParser::Identifier);
      setState(93);
      match(VecCppParser::T__1);
      setState(95); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(94);
        match(VecCppParser::Identifier);
        setState(97); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == VecCppParser::Identifier);
      setState(99);
      match(VecCppParser::T__2);
      setState(100);
      match(VecCppParser::T__10);
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 475636) != 0) {
        setState(101);
        statement();
        setState(106);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(107);
      match(VecCppParser::T__12);
      setState(108);
      value();
      setState(109);
      match(VecCppParser::T__11);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunccallContext ------------------------------------------------------------------

VecCppParser::FunccallContext::FunccallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VecCppParser::FunccallContext::Identifier() {
  return getToken(VecCppParser::Identifier, 0);
}

std::vector<VecCppParser::ValueContext *> VecCppParser::FunccallContext::value() {
  return getRuleContexts<VecCppParser::ValueContext>();
}

VecCppParser::ValueContext* VecCppParser::FunccallContext::value(size_t i) {
  return getRuleContext<VecCppParser::ValueContext>(i);
}


size_t VecCppParser::FunccallContext::getRuleIndex() const {
  return VecCppParser::RuleFunccall;
}

void VecCppParser::FunccallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunccall(this);
}

void VecCppParser::FunccallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<VecCppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunccall(this);
}

VecCppParser::FunccallContext* VecCppParser::funccall() {
  FunccallContext *_localctx = _tracker.createInstance<FunccallContext>(_ctx, getState());
  enterRule(_localctx, 16, VecCppParser::RuleFunccall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(VecCppParser::Identifier);
    setState(114);
    match(VecCppParser::T__1);
    setState(116); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(115);
      value();
      setState(118); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 475140) != 0);
    setState(120);
    match(VecCppParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void VecCppParser::initialize() {
  ::antlr4::internal::call_once(veccppParserOnceFlag, veccppParserInitialize);
}
