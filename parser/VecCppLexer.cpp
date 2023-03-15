
// Generated from VecCpp.g4 by ANTLR 4.11.1


#include "VecCppLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct VecCppLexerStaticData final {
  VecCppLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VecCppLexerStaticData(const VecCppLexerStaticData&) = delete;
  VecCppLexerStaticData(VecCppLexerStaticData&&) = delete;
  VecCppLexerStaticData& operator=(const VecCppLexerStaticData&) = delete;
  VecCppLexerStaticData& operator=(VecCppLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag veccpplexerLexerOnceFlag;
VecCppLexerStaticData *veccpplexerLexerStaticData = nullptr;

void veccpplexerLexerInitialize() {
  assert(veccpplexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<VecCppLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "Identifier", "Whitespace", "Digit", 
      "Integer", "Fractional", "Float", "Boolean"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,18,145,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,
  	11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,5,13,89,8,13,10,13,12,
  	13,92,9,13,1,14,4,14,95,8,14,11,14,12,14,96,1,14,1,14,1,15,1,15,1,16,
  	4,16,104,8,16,11,16,12,16,105,1,17,3,17,109,8,17,1,17,1,17,1,17,1,17,
  	1,17,3,17,116,8,17,1,18,1,18,1,18,3,18,121,8,18,1,18,3,18,124,8,18,1,
  	18,1,18,1,18,3,18,129,8,18,1,18,1,18,3,18,133,8,18,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,19,3,19,144,8,19,0,0,20,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,0,33,16,35,0,
  	37,17,39,18,1,0,6,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,
  	3,0,9,10,12,13,32,32,1,0,48,57,2,0,69,69,101,101,2,0,43,43,45,45,152,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,33,1,0,0,0,0,37,
  	1,0,0,0,0,39,1,0,0,0,1,41,1,0,0,0,3,43,1,0,0,0,5,45,1,0,0,0,7,47,1,0,
  	0,0,9,51,1,0,0,0,11,57,1,0,0,0,13,61,1,0,0,0,15,66,1,0,0,0,17,71,1,0,
  	0,0,19,73,1,0,0,0,21,75,1,0,0,0,23,77,1,0,0,0,25,79,1,0,0,0,27,86,1,0,
  	0,0,29,94,1,0,0,0,31,100,1,0,0,0,33,103,1,0,0,0,35,115,1,0,0,0,37,132,
  	1,0,0,0,39,143,1,0,0,0,41,42,5,61,0,0,42,2,1,0,0,0,43,44,5,40,0,0,44,
  	4,1,0,0,0,45,46,5,41,0,0,46,6,1,0,0,0,47,48,5,105,0,0,48,49,5,110,0,0,
  	49,50,5,116,0,0,50,8,1,0,0,0,51,52,5,102,0,0,52,53,5,108,0,0,53,54,5,
  	111,0,0,54,55,5,97,0,0,55,56,5,116,0,0,56,10,1,0,0,0,57,58,5,115,0,0,
  	58,59,5,116,0,0,59,60,5,114,0,0,60,12,1,0,0,0,61,62,5,98,0,0,62,63,5,
  	121,0,0,63,64,5,116,0,0,64,65,5,101,0,0,65,14,1,0,0,0,66,67,5,98,0,0,
  	67,68,5,111,0,0,68,69,5,111,0,0,69,70,5,108,0,0,70,16,1,0,0,0,71,72,5,
  	64,0,0,72,18,1,0,0,0,73,74,5,44,0,0,74,20,1,0,0,0,75,76,5,123,0,0,76,
  	22,1,0,0,0,77,78,5,125,0,0,78,24,1,0,0,0,79,80,5,114,0,0,80,81,5,101,
  	0,0,81,82,5,116,0,0,82,83,5,117,0,0,83,84,5,114,0,0,84,85,5,110,0,0,85,
  	26,1,0,0,0,86,90,7,0,0,0,87,89,7,1,0,0,88,87,1,0,0,0,89,92,1,0,0,0,90,
  	88,1,0,0,0,90,91,1,0,0,0,91,28,1,0,0,0,92,90,1,0,0,0,93,95,7,2,0,0,94,
  	93,1,0,0,0,95,96,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,98,1,0,0,0,98,
  	99,6,14,0,0,99,30,1,0,0,0,100,101,7,3,0,0,101,32,1,0,0,0,102,104,3,31,
  	15,0,103,102,1,0,0,0,104,105,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,
  	106,34,1,0,0,0,107,109,3,33,16,0,108,107,1,0,0,0,108,109,1,0,0,0,109,
  	110,1,0,0,0,110,111,5,46,0,0,111,116,3,33,16,0,112,113,3,33,16,0,113,
  	114,5,46,0,0,114,116,1,0,0,0,115,108,1,0,0,0,115,112,1,0,0,0,116,36,1,
  	0,0,0,117,123,3,35,17,0,118,120,7,4,0,0,119,121,7,5,0,0,120,119,1,0,0,
  	0,120,121,1,0,0,0,121,122,1,0,0,0,122,124,3,33,16,0,123,118,1,0,0,0,123,
  	124,1,0,0,0,124,133,1,0,0,0,125,126,3,33,16,0,126,128,7,4,0,0,127,129,
  	7,5,0,0,128,127,1,0,0,0,128,129,1,0,0,0,129,130,1,0,0,0,130,131,3,33,
  	16,0,131,133,1,0,0,0,132,117,1,0,0,0,132,125,1,0,0,0,133,38,1,0,0,0,134,
  	135,5,116,0,0,135,136,5,114,0,0,136,137,5,117,0,0,137,144,5,101,0,0,138,
  	139,5,102,0,0,139,140,5,97,0,0,140,141,5,108,0,0,141,142,5,115,0,0,142,
  	144,5,101,0,0,143,134,1,0,0,0,143,138,1,0,0,0,144,40,1,0,0,0,11,0,90,
  	96,105,108,115,120,123,128,132,143,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  veccpplexerLexerStaticData = staticData.release();
}

}

VecCppLexer::VecCppLexer(CharStream *input) : Lexer(input) {
  VecCppLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *veccpplexerLexerStaticData->atn, veccpplexerLexerStaticData->decisionToDFA, veccpplexerLexerStaticData->sharedContextCache);
}

VecCppLexer::~VecCppLexer() {
  delete _interpreter;
}

std::string VecCppLexer::getGrammarFileName() const {
  return "VecCpp.g4";
}

const std::vector<std::string>& VecCppLexer::getRuleNames() const {
  return veccpplexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& VecCppLexer::getChannelNames() const {
  return veccpplexerLexerStaticData->channelNames;
}

const std::vector<std::string>& VecCppLexer::getModeNames() const {
  return veccpplexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& VecCppLexer::getVocabulary() const {
  return veccpplexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VecCppLexer::getSerializedATN() const {
  return veccpplexerLexerStaticData->serializedATN;
}

const atn::ATN& VecCppLexer::getATN() const {
  return *veccpplexerLexerStaticData->atn;
}




void VecCppLexer::initialize() {
  ::antlr4::internal::call_once(veccpplexerLexerOnceFlag, veccpplexerLexerInitialize);
}
