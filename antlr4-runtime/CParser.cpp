
// Generated from CC.g4 by ANTLR 4.7.2


#include "CListener.h"
#include "CVisitor.h"

#include "CParser.h"


using namespace antlrcpp;
using namespace antlr4;

CParser::CParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CParser::~CParser() {
  delete _interpreter;
}

std::string CParser::getGrammarFileName() const {
  return "CC.g4";
}

const std::vector<std::string>& CParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TranslationunitContext ------------------------------------------------------------------

CParser::TranslationunitContext::TranslationunitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TranslationunitContext::EOF() {
  return getToken(CParser::EOF, 0);
}

CParser::DeclarationseqContext* CParser::TranslationunitContext::declarationseq() {
  return getRuleContext<CParser::DeclarationseqContext>(0);
}


size_t CParser::TranslationunitContext::getRuleIndex() const {
  return CParser::RuleTranslationunit;
}

void CParser::TranslationunitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationunit(this);
}

void CParser::TranslationunitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationunit(this);
}


antlrcpp::Any CParser::TranslationunitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTranslationunit(this);
  else
    return visitor->visitChildren(this);
}

CParser::TranslationunitContext* CParser::translationunit() {
  TranslationunitContext *_localctx = _tracker.createInstance<TranslationunitContext>(_ctx, getState());
  enterRule(_localctx, 0, CParser::RuleTranslationunit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__2)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Asm)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Char16)
      | (1ULL << CParser::Char32)
      | (1ULL << CParser::Class)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Constexpr)
      | (1ULL << CParser::Decltype)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Explicit)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Friend)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Mutable)
      | (1ULL << CParser::Namespace)
      | (1ULL << CParser::Operator)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CParser::Struct - 65))
      | (1ULL << (CParser::Template - 65))
      | (1ULL << (CParser::Thread_local - 65))
      | (1ULL << (CParser::Typedef - 65))
      | (1ULL << (CParser::Typename_ - 65))
      | (1ULL << (CParser::Union - 65))
      | (1ULL << (CParser::Unsigned - 65))
      | (1ULL << (CParser::Using - 65))
      | (1ULL << (CParser::Virtual - 65))
      | (1ULL << (CParser::Void - 65))
      | (1ULL << (CParser::Volatile - 65))
      | (1ULL << (CParser::Wchar - 65))
      | (1ULL << (CParser::LeftParen - 65))
      | (1ULL << (CParser::LeftBracket - 65))
      | (1ULL << (CParser::Star - 65))
      | (1ULL << (CParser::And - 65))
      | (1ULL << (CParser::Tilde - 65))
      | (1ULL << (CParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (CParser::Semi - 129))
      | (1ULL << (CParser::Ellipsis - 129))
      | (1ULL << (CParser::Identifier - 129)))) != 0)) {
      setState(400);
      declarationseq(0);
    }
    setState(403);
    match(CParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryexpressionContext ------------------------------------------------------------------

CParser::PrimaryexpressionContext::PrimaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::LiteralContext* CParser::PrimaryexpressionContext::literal() {
  return getRuleContext<CParser::LiteralContext>(0);
}

tree::TerminalNode* CParser::PrimaryexpressionContext::This() {
  return getToken(CParser::This, 0);
}

tree::TerminalNode* CParser::PrimaryexpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionContext* CParser::PrimaryexpressionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::PrimaryexpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::IdexpressionContext* CParser::PrimaryexpressionContext::idexpression() {
  return getRuleContext<CParser::IdexpressionContext>(0);
}

CParser::LambdaexpressionContext* CParser::PrimaryexpressionContext::lambdaexpression() {
  return getRuleContext<CParser::LambdaexpressionContext>(0);
}


size_t CParser::PrimaryexpressionContext::getRuleIndex() const {
  return CParser::RulePrimaryexpression;
}

void CParser::PrimaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryexpression(this);
}

void CParser::PrimaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryexpression(this);
}


antlrcpp::Any CParser::PrimaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPrimaryexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::PrimaryexpressionContext* CParser::primaryexpression() {
  PrimaryexpressionContext *_localctx = _tracker.createInstance<PrimaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, CParser::RulePrimaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(413);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::False:
      case CParser::Nullptr:
      case CParser::True:
      case CParser::Integerliteral:
      case CParser::Characterliteral:
      case CParser::Floatingliteral:
      case CParser::Stringliteral:
      case CParser::Userdefinedintegerliteral:
      case CParser::Userdefinedfloatingliteral:
      case CParser::Userdefinedstringliteral:
      case CParser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(405);
        literal();
        break;
      }

      case CParser::This: {
        enterOuterAlt(_localctx, 2);
        setState(406);
        match(CParser::This);
        break;
      }

      case CParser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(407);
        match(CParser::LeftParen);
        setState(408);
        expression(0);
        setState(409);
        match(CParser::RightParen);
        break;
      }

      case CParser::Decltype:
      case CParser::Operator:
      case CParser::Tilde:
      case CParser::Doublecolon:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(411);
        idexpression();
        break;
      }

      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 5);
        setState(412);
        lambdaexpression();
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

//----------------- IdexpressionContext ------------------------------------------------------------------

CParser::IdexpressionContext::IdexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::UnqualifiedidContext* CParser::IdexpressionContext::unqualifiedid() {
  return getRuleContext<CParser::UnqualifiedidContext>(0);
}

CParser::QualifiedidContext* CParser::IdexpressionContext::qualifiedid() {
  return getRuleContext<CParser::QualifiedidContext>(0);
}


size_t CParser::IdexpressionContext::getRuleIndex() const {
  return CParser::RuleIdexpression;
}

void CParser::IdexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdexpression(this);
}

void CParser::IdexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdexpression(this);
}


antlrcpp::Any CParser::IdexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIdexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::IdexpressionContext* CParser::idexpression() {
  IdexpressionContext *_localctx = _tracker.createInstance<IdexpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, CParser::RuleIdexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(417);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(415);
      unqualifiedid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(416);
      qualifiedid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnqualifiedidContext ------------------------------------------------------------------

CParser::UnqualifiedidContext::UnqualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::UnqualifiedidContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::OperatorfunctionidContext* CParser::UnqualifiedidContext::operatorfunctionid() {
  return getRuleContext<CParser::OperatorfunctionidContext>(0);
}

CParser::ConversionfunctionidContext* CParser::UnqualifiedidContext::conversionfunctionid() {
  return getRuleContext<CParser::ConversionfunctionidContext>(0);
}

CParser::LiteraloperatoridContext* CParser::UnqualifiedidContext::literaloperatorid() {
  return getRuleContext<CParser::LiteraloperatoridContext>(0);
}

tree::TerminalNode* CParser::UnqualifiedidContext::Tilde() {
  return getToken(CParser::Tilde, 0);
}

CParser::ClassnameContext* CParser::UnqualifiedidContext::classname() {
  return getRuleContext<CParser::ClassnameContext>(0);
}

CParser::DecltypespecifierContext* CParser::UnqualifiedidContext::decltypespecifier() {
  return getRuleContext<CParser::DecltypespecifierContext>(0);
}

CParser::TemplateidContext* CParser::UnqualifiedidContext::templateid() {
  return getRuleContext<CParser::TemplateidContext>(0);
}


size_t CParser::UnqualifiedidContext::getRuleIndex() const {
  return CParser::RuleUnqualifiedid;
}

void CParser::UnqualifiedidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnqualifiedid(this);
}

void CParser::UnqualifiedidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnqualifiedid(this);
}


antlrcpp::Any CParser::UnqualifiedidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnqualifiedid(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnqualifiedidContext* CParser::unqualifiedid() {
  UnqualifiedidContext *_localctx = _tracker.createInstance<UnqualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 6, CParser::RuleUnqualifiedid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(428);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(419);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(420);
      operatorfunctionid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(421);
      conversionfunctionid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(422);
      literaloperatorid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(423);
      match(CParser::Tilde);
      setState(424);
      classname();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(425);
      match(CParser::Tilde);
      setState(426);
      decltypespecifier();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(427);
      templateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedidContext ------------------------------------------------------------------

CParser::QualifiedidContext::QualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::NestednamespecifierContext* CParser::QualifiedidContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}

CParser::UnqualifiedidContext* CParser::QualifiedidContext::unqualifiedid() {
  return getRuleContext<CParser::UnqualifiedidContext>(0);
}

tree::TerminalNode* CParser::QualifiedidContext::Template() {
  return getToken(CParser::Template, 0);
}


size_t CParser::QualifiedidContext::getRuleIndex() const {
  return CParser::RuleQualifiedid;
}

void CParser::QualifiedidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedid(this);
}

void CParser::QualifiedidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedid(this);
}


antlrcpp::Any CParser::QualifiedidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitQualifiedid(this);
  else
    return visitor->visitChildren(this);
}

CParser::QualifiedidContext* CParser::qualifiedid() {
  QualifiedidContext *_localctx = _tracker.createInstance<QualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 8, CParser::RuleQualifiedid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    nestednamespecifier(0);
    setState(432);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Template) {
      setState(431);
      match(CParser::Template);
    }
    setState(434);
    unqualifiedid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestednamespecifierContext ------------------------------------------------------------------

CParser::NestednamespecifierContext::NestednamespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NestednamespecifierContext::Doublecolon() {
  return getToken(CParser::Doublecolon, 0);
}

CParser::ThetypenameContext* CParser::NestednamespecifierContext::thetypename() {
  return getRuleContext<CParser::ThetypenameContext>(0);
}

CParser::NamespacenameContext* CParser::NestednamespecifierContext::namespacename() {
  return getRuleContext<CParser::NamespacenameContext>(0);
}

CParser::DecltypespecifierContext* CParser::NestednamespecifierContext::decltypespecifier() {
  return getRuleContext<CParser::DecltypespecifierContext>(0);
}

CParser::NestednamespecifierContext* CParser::NestednamespecifierContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}

tree::TerminalNode* CParser::NestednamespecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::SimpletemplateidContext* CParser::NestednamespecifierContext::simpletemplateid() {
  return getRuleContext<CParser::SimpletemplateidContext>(0);
}

tree::TerminalNode* CParser::NestednamespecifierContext::Template() {
  return getToken(CParser::Template, 0);
}


size_t CParser::NestednamespecifierContext::getRuleIndex() const {
  return CParser::RuleNestednamespecifier;
}

void CParser::NestednamespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestednamespecifier(this);
}

void CParser::NestednamespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestednamespecifier(this);
}


antlrcpp::Any CParser::NestednamespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNestednamespecifier(this);
  else
    return visitor->visitChildren(this);
}


CParser::NestednamespecifierContext* CParser::nestednamespecifier() {
   return nestednamespecifier(0);
}

CParser::NestednamespecifierContext* CParser::nestednamespecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::NestednamespecifierContext *_localctx = _tracker.createInstance<NestednamespecifierContext>(_ctx, parentState);
  CParser::NestednamespecifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, CParser::RuleNestednamespecifier, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(437);
      match(CParser::Doublecolon);
      break;
    }

    case 2: {
      setState(438);
      thetypename();
      setState(439);
      match(CParser::Doublecolon);
      break;
    }

    case 3: {
      setState(441);
      namespacename();
      setState(442);
      match(CParser::Doublecolon);
      break;
    }

    case 4: {
      setState(444);
      decltypespecifier();
      setState(445);
      match(CParser::Doublecolon);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(461);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(459);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(449);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(450);
          match(CParser::Identifier);
          setState(451);
          match(CParser::Doublecolon);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(452);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(454);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CParser::Template) {
            setState(453);
            match(CParser::Template);
          }
          setState(456);
          simpletemplateid();
          setState(457);
          match(CParser::Doublecolon);
          break;
        }

        } 
      }
      setState(463);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaexpressionContext ------------------------------------------------------------------

CParser::LambdaexpressionContext::LambdaexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::LambdaintroducerContext* CParser::LambdaexpressionContext::lambdaintroducer() {
  return getRuleContext<CParser::LambdaintroducerContext>(0);
}

CParser::CompoundstatementContext* CParser::LambdaexpressionContext::compoundstatement() {
  return getRuleContext<CParser::CompoundstatementContext>(0);
}

CParser::LambdadeclaratorContext* CParser::LambdaexpressionContext::lambdadeclarator() {
  return getRuleContext<CParser::LambdadeclaratorContext>(0);
}


size_t CParser::LambdaexpressionContext::getRuleIndex() const {
  return CParser::RuleLambdaexpression;
}

void CParser::LambdaexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaexpression(this);
}

void CParser::LambdaexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaexpression(this);
}


antlrcpp::Any CParser::LambdaexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLambdaexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::LambdaexpressionContext* CParser::lambdaexpression() {
  LambdaexpressionContext *_localctx = _tracker.createInstance<LambdaexpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, CParser::RuleLambdaexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    lambdaintroducer();
    setState(466);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::LeftParen) {
      setState(465);
      lambdadeclarator();
    }
    setState(468);
    compoundstatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaintroducerContext ------------------------------------------------------------------

CParser::LambdaintroducerContext::LambdaintroducerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::LambdaintroducerContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::LambdaintroducerContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

CParser::LambdacaptureContext* CParser::LambdaintroducerContext::lambdacapture() {
  return getRuleContext<CParser::LambdacaptureContext>(0);
}


size_t CParser::LambdaintroducerContext::getRuleIndex() const {
  return CParser::RuleLambdaintroducer;
}

void CParser::LambdaintroducerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaintroducer(this);
}

void CParser::LambdaintroducerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaintroducer(this);
}


antlrcpp::Any CParser::LambdaintroducerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLambdaintroducer(this);
  else
    return visitor->visitChildren(this);
}

CParser::LambdaintroducerContext* CParser::lambdaintroducer() {
  LambdaintroducerContext *_localctx = _tracker.createInstance<LambdaintroducerContext>(_ctx, getState());
  enterRule(_localctx, 14, CParser::RuleLambdaintroducer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(CParser::LeftBracket);
    setState(472);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CParser::This - 68))
      | (1ULL << (CParser::And - 68))
      | (1ULL << (CParser::Assign - 68)))) != 0) || _la == CParser::Identifier) {
      setState(471);
      lambdacapture();
    }
    setState(474);
    match(CParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdacaptureContext ------------------------------------------------------------------

CParser::LambdacaptureContext::LambdacaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::CapturedefaultContext* CParser::LambdacaptureContext::capturedefault() {
  return getRuleContext<CParser::CapturedefaultContext>(0);
}

CParser::CapturelistContext* CParser::LambdacaptureContext::capturelist() {
  return getRuleContext<CParser::CapturelistContext>(0);
}

tree::TerminalNode* CParser::LambdacaptureContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::LambdacaptureContext::getRuleIndex() const {
  return CParser::RuleLambdacapture;
}

void CParser::LambdacaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdacapture(this);
}

void CParser::LambdacaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdacapture(this);
}


antlrcpp::Any CParser::LambdacaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLambdacapture(this);
  else
    return visitor->visitChildren(this);
}

CParser::LambdacaptureContext* CParser::lambdacapture() {
  LambdacaptureContext *_localctx = _tracker.createInstance<LambdacaptureContext>(_ctx, getState());
  enterRule(_localctx, 16, CParser::RuleLambdacapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(482);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(476);
      capturedefault();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(477);
      capturelist(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(478);
      capturedefault();
      setState(479);
      match(CParser::Comma);
      setState(480);
      capturelist(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapturedefaultContext ------------------------------------------------------------------

CParser::CapturedefaultContext::CapturedefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CapturedefaultContext::And() {
  return getToken(CParser::And, 0);
}

tree::TerminalNode* CParser::CapturedefaultContext::Assign() {
  return getToken(CParser::Assign, 0);
}


size_t CParser::CapturedefaultContext::getRuleIndex() const {
  return CParser::RuleCapturedefault;
}

void CParser::CapturedefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapturedefault(this);
}

void CParser::CapturedefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapturedefault(this);
}


antlrcpp::Any CParser::CapturedefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCapturedefault(this);
  else
    return visitor->visitChildren(this);
}

CParser::CapturedefaultContext* CParser::capturedefault() {
  CapturedefaultContext *_localctx = _tracker.createInstance<CapturedefaultContext>(_ctx, getState());
  enterRule(_localctx, 18, CParser::RuleCapturedefault);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(484);
    _la = _input->LA(1);
    if (!(_la == CParser::And

    || _la == CParser::Assign)) {
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

//----------------- CapturelistContext ------------------------------------------------------------------

CParser::CapturelistContext::CapturelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::CaptureContext* CParser::CapturelistContext::capture() {
  return getRuleContext<CParser::CaptureContext>(0);
}

tree::TerminalNode* CParser::CapturelistContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

CParser::CapturelistContext* CParser::CapturelistContext::capturelist() {
  return getRuleContext<CParser::CapturelistContext>(0);
}

tree::TerminalNode* CParser::CapturelistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::CapturelistContext::getRuleIndex() const {
  return CParser::RuleCapturelist;
}

void CParser::CapturelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapturelist(this);
}

void CParser::CapturelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapturelist(this);
}


antlrcpp::Any CParser::CapturelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCapturelist(this);
  else
    return visitor->visitChildren(this);
}


CParser::CapturelistContext* CParser::capturelist() {
   return capturelist(0);
}

CParser::CapturelistContext* CParser::capturelist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::CapturelistContext *_localctx = _tracker.createInstance<CapturelistContext>(_ctx, parentState);
  CParser::CapturelistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, CParser::RuleCapturelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(487);
    capture();
    setState(489);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(488);
      match(CParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(499);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<CapturelistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleCapturelist);
        setState(491);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(492);
        match(CParser::Comma);
        setState(493);
        capture();
        setState(495);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(494);
          match(CParser::Ellipsis);
          break;
        }

        } 
      }
      setState(501);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CaptureContext ------------------------------------------------------------------

CParser::CaptureContext::CaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::SimplecaptureContext* CParser::CaptureContext::simplecapture() {
  return getRuleContext<CParser::SimplecaptureContext>(0);
}

CParser::InitcaptureContext* CParser::CaptureContext::initcapture() {
  return getRuleContext<CParser::InitcaptureContext>(0);
}


size_t CParser::CaptureContext::getRuleIndex() const {
  return CParser::RuleCapture;
}

void CParser::CaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapture(this);
}

void CParser::CaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapture(this);
}


antlrcpp::Any CParser::CaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCapture(this);
  else
    return visitor->visitChildren(this);
}

CParser::CaptureContext* CParser::capture() {
  CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
  enterRule(_localctx, 22, CParser::RuleCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(502);
      simplecapture();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(503);
      initcapture();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimplecaptureContext ------------------------------------------------------------------

CParser::SimplecaptureContext::SimplecaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::SimplecaptureContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::SimplecaptureContext::And() {
  return getToken(CParser::And, 0);
}

tree::TerminalNode* CParser::SimplecaptureContext::This() {
  return getToken(CParser::This, 0);
}


size_t CParser::SimplecaptureContext::getRuleIndex() const {
  return CParser::RuleSimplecapture;
}

void CParser::SimplecaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimplecapture(this);
}

void CParser::SimplecaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimplecapture(this);
}


antlrcpp::Any CParser::SimplecaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSimplecapture(this);
  else
    return visitor->visitChildren(this);
}

CParser::SimplecaptureContext* CParser::simplecapture() {
  SimplecaptureContext *_localctx = _tracker.createInstance<SimplecaptureContext>(_ctx, getState());
  enterRule(_localctx, 24, CParser::RuleSimplecapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(510);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(506);
        match(CParser::Identifier);
        break;
      }

      case CParser::And: {
        enterOuterAlt(_localctx, 2);
        setState(507);
        match(CParser::And);
        setState(508);
        match(CParser::Identifier);
        break;
      }

      case CParser::This: {
        enterOuterAlt(_localctx, 3);
        setState(509);
        match(CParser::This);
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

//----------------- InitcaptureContext ------------------------------------------------------------------

CParser::InitcaptureContext::InitcaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::InitcaptureContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::InitializerContext* CParser::InitcaptureContext::initializer() {
  return getRuleContext<CParser::InitializerContext>(0);
}

tree::TerminalNode* CParser::InitcaptureContext::And() {
  return getToken(CParser::And, 0);
}


size_t CParser::InitcaptureContext::getRuleIndex() const {
  return CParser::RuleInitcapture;
}

void CParser::InitcaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitcapture(this);
}

void CParser::InitcaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitcapture(this);
}


antlrcpp::Any CParser::InitcaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitcapture(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitcaptureContext* CParser::initcapture() {
  InitcaptureContext *_localctx = _tracker.createInstance<InitcaptureContext>(_ctx, getState());
  enterRule(_localctx, 26, CParser::RuleInitcapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(517);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(512);
        match(CParser::Identifier);
        setState(513);
        initializer();
        break;
      }

      case CParser::And: {
        enterOuterAlt(_localctx, 2);
        setState(514);
        match(CParser::And);
        setState(515);
        match(CParser::Identifier);
        setState(516);
        initializer();
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

//----------------- LambdadeclaratorContext ------------------------------------------------------------------

CParser::LambdadeclaratorContext::LambdadeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::LambdadeclaratorContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ParameterdeclarationclauseContext* CParser::LambdadeclaratorContext::parameterdeclarationclause() {
  return getRuleContext<CParser::ParameterdeclarationclauseContext>(0);
}

tree::TerminalNode* CParser::LambdadeclaratorContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::LambdadeclaratorContext::Mutable() {
  return getToken(CParser::Mutable, 0);
}

CParser::ExceptionspecificationContext* CParser::LambdadeclaratorContext::exceptionspecification() {
  return getRuleContext<CParser::ExceptionspecificationContext>(0);
}

CParser::AttributespecifierseqContext* CParser::LambdadeclaratorContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::TrailingreturntypeContext* CParser::LambdadeclaratorContext::trailingreturntype() {
  return getRuleContext<CParser::TrailingreturntypeContext>(0);
}


size_t CParser::LambdadeclaratorContext::getRuleIndex() const {
  return CParser::RuleLambdadeclarator;
}

void CParser::LambdadeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdadeclarator(this);
}

void CParser::LambdadeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdadeclarator(this);
}


antlrcpp::Any CParser::LambdadeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLambdadeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::LambdadeclaratorContext* CParser::lambdadeclarator() {
  LambdadeclaratorContext *_localctx = _tracker.createInstance<LambdadeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 28, CParser::RuleLambdadeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(519);
    match(CParser::LeftParen);
    setState(520);
    parameterdeclarationclause();
    setState(521);
    match(CParser::RightParen);
    setState(523);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Mutable) {
      setState(522);
      match(CParser::Mutable);
    }
    setState(526);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Noexcept

    || _la == CParser::Throw) {
      setState(525);
      exceptionspecification();
    }
    setState(529);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
      setState(528);
      attributespecifierseq(0);
    }
    setState(532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Arrow) {
      setState(531);
      trailingreturntype();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixexpressionContext ------------------------------------------------------------------

CParser::PostfixexpressionContext::PostfixexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PrimaryexpressionContext* CParser::PostfixexpressionContext::primaryexpression() {
  return getRuleContext<CParser::PrimaryexpressionContext>(0);
}

CParser::SimpletypespecifierContext* CParser::PostfixexpressionContext::simpletypespecifier() {
  return getRuleContext<CParser::SimpletypespecifierContext>(0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::ExpressionlistContext* CParser::PostfixexpressionContext::expressionlist() {
  return getRuleContext<CParser::ExpressionlistContext>(0);
}

CParser::TypenamespecifierContext* CParser::PostfixexpressionContext::typenamespecifier() {
  return getRuleContext<CParser::TypenamespecifierContext>(0);
}

CParser::BracedinitlistContext* CParser::PostfixexpressionContext::bracedinitlist() {
  return getRuleContext<CParser::BracedinitlistContext>(0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::Dynamic_cast() {
  return getToken(CParser::Dynamic_cast, 0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::Less() {
  return getToken(CParser::Less, 0);
}

CParser::ThetypeidContext* CParser::PostfixexpressionContext::thetypeid() {
  return getRuleContext<CParser::ThetypeidContext>(0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::Greater() {
  return getToken(CParser::Greater, 0);
}

CParser::ExpressionContext* CParser::PostfixexpressionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::Static_cast() {
  return getToken(CParser::Static_cast, 0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::Reinterpret_cast() {
  return getToken(CParser::Reinterpret_cast, 0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::Const_cast() {
  return getToken(CParser::Const_cast, 0);
}

CParser::TypeidofthetypeidContext* CParser::PostfixexpressionContext::typeidofthetypeid() {
  return getRuleContext<CParser::TypeidofthetypeidContext>(0);
}

CParser::PostfixexpressionContext* CParser::PostfixexpressionContext::postfixexpression() {
  return getRuleContext<CParser::PostfixexpressionContext>(0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::Dot() {
  return getToken(CParser::Dot, 0);
}

CParser::IdexpressionContext* CParser::PostfixexpressionContext::idexpression() {
  return getRuleContext<CParser::IdexpressionContext>(0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::Template() {
  return getToken(CParser::Template, 0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::Arrow() {
  return getToken(CParser::Arrow, 0);
}

CParser::PseudodestructornameContext* CParser::PostfixexpressionContext::pseudodestructorname() {
  return getRuleContext<CParser::PseudodestructornameContext>(0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::PlusPlus() {
  return getToken(CParser::PlusPlus, 0);
}

tree::TerminalNode* CParser::PostfixexpressionContext::MinusMinus() {
  return getToken(CParser::MinusMinus, 0);
}


size_t CParser::PostfixexpressionContext::getRuleIndex() const {
  return CParser::RulePostfixexpression;
}

void CParser::PostfixexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixexpression(this);
}

void CParser::PostfixexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixexpression(this);
}


antlrcpp::Any CParser::PostfixexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPostfixexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::PostfixexpressionContext* CParser::postfixexpression() {
   return postfixexpression(0);
}

CParser::PostfixexpressionContext* CParser::postfixexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::PostfixexpressionContext *_localctx = _tracker.createInstance<PostfixexpressionContext>(_ctx, parentState);
  CParser::PostfixexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, CParser::RulePostfixexpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(598);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(535);
      primaryexpression();
      break;
    }

    case 2: {
      setState(536);
      simpletypespecifier();
      setState(537);
      match(CParser::LeftParen);
      setState(539);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Const_cast)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Delete)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Dynamic_cast)
        | (1ULL << CParser::False)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::New)
        | (1ULL << CParser::Noexcept)
        | (1ULL << CParser::Nullptr)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Reinterpret_cast)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
        | (1ULL << (CParser::This - 64))
        | (1ULL << (CParser::Throw - 64))
        | (1ULL << (CParser::True - 64))
        | (1ULL << (CParser::Typeid_ - 64))
        | (1ULL << (CParser::Typename_ - 64))
        | (1ULL << (CParser::Unsigned - 64))
        | (1ULL << (CParser::Void - 64))
        | (1ULL << (CParser::Wchar - 64))
        | (1ULL << (CParser::LeftParen - 64))
        | (1ULL << (CParser::LeftBracket - 64))
        | (1ULL << (CParser::LeftBrace - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
        | (1ULL << (CParser::Identifier - 128))
        | (1ULL << (CParser::Integerliteral - 128))
        | (1ULL << (CParser::Characterliteral - 128))
        | (1ULL << (CParser::Floatingliteral - 128))
        | (1ULL << (CParser::Stringliteral - 128))
        | (1ULL << (CParser::Userdefinedintegerliteral - 128))
        | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (CParser::Userdefinedstringliteral - 128))
        | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(538);
        expressionlist();
      }
      setState(541);
      match(CParser::RightParen);
      break;
    }

    case 3: {
      setState(543);
      typenamespecifier();
      setState(544);
      match(CParser::LeftParen);
      setState(546);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Const_cast)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Delete)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Dynamic_cast)
        | (1ULL << CParser::False)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::New)
        | (1ULL << CParser::Noexcept)
        | (1ULL << CParser::Nullptr)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Reinterpret_cast)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
        | (1ULL << (CParser::This - 64))
        | (1ULL << (CParser::Throw - 64))
        | (1ULL << (CParser::True - 64))
        | (1ULL << (CParser::Typeid_ - 64))
        | (1ULL << (CParser::Typename_ - 64))
        | (1ULL << (CParser::Unsigned - 64))
        | (1ULL << (CParser::Void - 64))
        | (1ULL << (CParser::Wchar - 64))
        | (1ULL << (CParser::LeftParen - 64))
        | (1ULL << (CParser::LeftBracket - 64))
        | (1ULL << (CParser::LeftBrace - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
        | (1ULL << (CParser::Identifier - 128))
        | (1ULL << (CParser::Integerliteral - 128))
        | (1ULL << (CParser::Characterliteral - 128))
        | (1ULL << (CParser::Floatingliteral - 128))
        | (1ULL << (CParser::Stringliteral - 128))
        | (1ULL << (CParser::Userdefinedintegerliteral - 128))
        | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (CParser::Userdefinedstringliteral - 128))
        | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(545);
        expressionlist();
      }
      setState(548);
      match(CParser::RightParen);
      break;
    }

    case 4: {
      setState(550);
      simpletypespecifier();
      setState(551);
      bracedinitlist();
      break;
    }

    case 5: {
      setState(553);
      typenamespecifier();
      setState(554);
      bracedinitlist();
      break;
    }

    case 6: {
      setState(556);
      match(CParser::Dynamic_cast);
      setState(557);
      match(CParser::Less);
      setState(558);
      thetypeid();
      setState(559);
      match(CParser::Greater);
      setState(560);
      match(CParser::LeftParen);
      setState(561);
      expression(0);
      setState(562);
      match(CParser::RightParen);
      break;
    }

    case 7: {
      setState(564);
      match(CParser::Static_cast);
      setState(565);
      match(CParser::Less);
      setState(566);
      thetypeid();
      setState(567);
      match(CParser::Greater);
      setState(568);
      match(CParser::LeftParen);
      setState(569);
      expression(0);
      setState(570);
      match(CParser::RightParen);
      break;
    }

    case 8: {
      setState(572);
      match(CParser::Reinterpret_cast);
      setState(573);
      match(CParser::Less);
      setState(574);
      thetypeid();
      setState(575);
      match(CParser::Greater);
      setState(576);
      match(CParser::LeftParen);
      setState(577);
      expression(0);
      setState(578);
      match(CParser::RightParen);
      break;
    }

    case 9: {
      setState(580);
      match(CParser::Const_cast);
      setState(581);
      match(CParser::Less);
      setState(582);
      thetypeid();
      setState(583);
      match(CParser::Greater);
      setState(584);
      match(CParser::LeftParen);
      setState(585);
      expression(0);
      setState(586);
      match(CParser::RightParen);
      break;
    }

    case 10: {
      setState(588);
      typeidofthetypeid();
      setState(589);
      match(CParser::LeftParen);
      setState(590);
      expression(0);
      setState(591);
      match(CParser::RightParen);
      break;
    }

    case 11: {
      setState(593);
      typeidofthetypeid();
      setState(594);
      match(CParser::LeftParen);
      setState(595);
      thetypeid();
      setState(596);
      match(CParser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(640);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(638);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(600);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(601);
          match(CParser::LeftBracket);
          setState(602);
          expression(0);
          setState(603);
          match(CParser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(605);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(606);
          match(CParser::LeftBracket);
          setState(607);
          bracedinitlist();
          setState(608);
          match(CParser::RightBracket);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(610);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(611);
          match(CParser::LeftParen);
          setState(613);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Auto)
            | (1ULL << CParser::Bool)
            | (1ULL << CParser::Char)
            | (1ULL << CParser::Char16)
            | (1ULL << CParser::Char32)
            | (1ULL << CParser::Const_cast)
            | (1ULL << CParser::Decltype)
            | (1ULL << CParser::Delete)
            | (1ULL << CParser::Double)
            | (1ULL << CParser::Dynamic_cast)
            | (1ULL << CParser::False)
            | (1ULL << CParser::Float)
            | (1ULL << CParser::Int)
            | (1ULL << CParser::Long)
            | (1ULL << CParser::New)
            | (1ULL << CParser::Noexcept)
            | (1ULL << CParser::Nullptr)
            | (1ULL << CParser::Operator)
            | (1ULL << CParser::Reinterpret_cast)
            | (1ULL << CParser::Short)
            | (1ULL << CParser::Signed)
            | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
            | (1ULL << (CParser::This - 64))
            | (1ULL << (CParser::Throw - 64))
            | (1ULL << (CParser::True - 64))
            | (1ULL << (CParser::Typeid_ - 64))
            | (1ULL << (CParser::Typename_ - 64))
            | (1ULL << (CParser::Unsigned - 64))
            | (1ULL << (CParser::Void - 64))
            | (1ULL << (CParser::Wchar - 64))
            | (1ULL << (CParser::LeftParen - 64))
            | (1ULL << (CParser::LeftBracket - 64))
            | (1ULL << (CParser::LeftBrace - 64))
            | (1ULL << (CParser::Plus - 64))
            | (1ULL << (CParser::Minus - 64))
            | (1ULL << (CParser::Star - 64))
            | (1ULL << (CParser::And - 64))
            | (1ULL << (CParser::Or - 64))
            | (1ULL << (CParser::Tilde - 64))
            | (1ULL << (CParser::PlusPlus - 64))
            | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
            | (1ULL << (CParser::Identifier - 128))
            | (1ULL << (CParser::Integerliteral - 128))
            | (1ULL << (CParser::Characterliteral - 128))
            | (1ULL << (CParser::Floatingliteral - 128))
            | (1ULL << (CParser::Stringliteral - 128))
            | (1ULL << (CParser::Userdefinedintegerliteral - 128))
            | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
            | (1ULL << (CParser::Userdefinedstringliteral - 128))
            | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
            setState(612);
            expressionlist();
          }
          setState(615);
          match(CParser::RightParen);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(616);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(617);
          match(CParser::Dot);
          setState(619);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CParser::Template) {
            setState(618);
            match(CParser::Template);
          }
          setState(621);
          idexpression();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(622);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(623);
          match(CParser::Arrow);
          setState(625);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CParser::Template) {
            setState(624);
            match(CParser::Template);
          }
          setState(627);
          idexpression();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(628);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(629);
          match(CParser::Dot);
          setState(630);
          pseudodestructorname();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(631);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(632);
          match(CParser::Arrow);
          setState(633);
          pseudodestructorname();
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(634);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(635);
          match(CParser::PlusPlus);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(636);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(637);
          match(CParser::MinusMinus);
          break;
        }

        } 
      }
      setState(642);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeidofexprContext ------------------------------------------------------------------

CParser::TypeidofexprContext::TypeidofexprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypeidofexprContext::Typeid_() {
  return getToken(CParser::Typeid_, 0);
}


size_t CParser::TypeidofexprContext::getRuleIndex() const {
  return CParser::RuleTypeidofexpr;
}

void CParser::TypeidofexprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeidofexpr(this);
}

void CParser::TypeidofexprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeidofexpr(this);
}


antlrcpp::Any CParser::TypeidofexprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeidofexpr(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeidofexprContext* CParser::typeidofexpr() {
  TypeidofexprContext *_localctx = _tracker.createInstance<TypeidofexprContext>(_ctx, getState());
  enterRule(_localctx, 32, CParser::RuleTypeidofexpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(643);
    match(CParser::Typeid_);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeidofthetypeidContext ------------------------------------------------------------------

CParser::TypeidofthetypeidContext::TypeidofthetypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypeidofthetypeidContext::Typeid_() {
  return getToken(CParser::Typeid_, 0);
}


size_t CParser::TypeidofthetypeidContext::getRuleIndex() const {
  return CParser::RuleTypeidofthetypeid;
}

void CParser::TypeidofthetypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeidofthetypeid(this);
}

void CParser::TypeidofthetypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeidofthetypeid(this);
}


antlrcpp::Any CParser::TypeidofthetypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeidofthetypeid(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeidofthetypeidContext* CParser::typeidofthetypeid() {
  TypeidofthetypeidContext *_localctx = _tracker.createInstance<TypeidofthetypeidContext>(_ctx, getState());
  enterRule(_localctx, 34, CParser::RuleTypeidofthetypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(645);
    match(CParser::Typeid_);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionlistContext ------------------------------------------------------------------

CParser::ExpressionlistContext::ExpressionlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::InitializerlistContext* CParser::ExpressionlistContext::initializerlist() {
  return getRuleContext<CParser::InitializerlistContext>(0);
}


size_t CParser::ExpressionlistContext::getRuleIndex() const {
  return CParser::RuleExpressionlist;
}

void CParser::ExpressionlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionlist(this);
}

void CParser::ExpressionlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionlist(this);
}


antlrcpp::Any CParser::ExpressionlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExpressionlist(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExpressionlistContext* CParser::expressionlist() {
  ExpressionlistContext *_localctx = _tracker.createInstance<ExpressionlistContext>(_ctx, getState());
  enterRule(_localctx, 36, CParser::RuleExpressionlist);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(647);
    initializerlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudodestructornameContext ------------------------------------------------------------------

CParser::PseudodestructornameContext::PseudodestructornameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ThetypenameContext *> CParser::PseudodestructornameContext::thetypename() {
  return getRuleContexts<CParser::ThetypenameContext>();
}

CParser::ThetypenameContext* CParser::PseudodestructornameContext::thetypename(size_t i) {
  return getRuleContext<CParser::ThetypenameContext>(i);
}

tree::TerminalNode* CParser::PseudodestructornameContext::Doublecolon() {
  return getToken(CParser::Doublecolon, 0);
}

tree::TerminalNode* CParser::PseudodestructornameContext::Tilde() {
  return getToken(CParser::Tilde, 0);
}

CParser::NestednamespecifierContext* CParser::PseudodestructornameContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}

tree::TerminalNode* CParser::PseudodestructornameContext::Template() {
  return getToken(CParser::Template, 0);
}

CParser::SimpletemplateidContext* CParser::PseudodestructornameContext::simpletemplateid() {
  return getRuleContext<CParser::SimpletemplateidContext>(0);
}

CParser::DecltypespecifierContext* CParser::PseudodestructornameContext::decltypespecifier() {
  return getRuleContext<CParser::DecltypespecifierContext>(0);
}


size_t CParser::PseudodestructornameContext::getRuleIndex() const {
  return CParser::RulePseudodestructorname;
}

void CParser::PseudodestructornameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPseudodestructorname(this);
}

void CParser::PseudodestructornameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPseudodestructorname(this);
}


antlrcpp::Any CParser::PseudodestructornameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPseudodestructorname(this);
  else
    return visitor->visitChildren(this);
}

CParser::PseudodestructornameContext* CParser::pseudodestructorname() {
  PseudodestructornameContext *_localctx = _tracker.createInstance<PseudodestructornameContext>(_ctx, getState());
  enterRule(_localctx, 38, CParser::RulePseudodestructorname);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(671);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(650);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(649);
        nestednamespecifier(0);
        break;
      }

      }
      setState(652);
      thetypename();
      setState(653);
      match(CParser::Doublecolon);
      setState(654);
      match(CParser::Tilde);
      setState(655);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(657);
      nestednamespecifier(0);
      setState(658);
      match(CParser::Template);
      setState(659);
      simpletemplateid();
      setState(660);
      match(CParser::Doublecolon);
      setState(661);
      match(CParser::Tilde);
      setState(662);
      thetypename();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(665);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Decltype || _la == CParser::Doublecolon

      || _la == CParser::Identifier) {
        setState(664);
        nestednamespecifier(0);
      }
      setState(667);
      match(CParser::Tilde);
      setState(668);
      thetypename();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(669);
      match(CParser::Tilde);
      setState(670);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryexpressionContext ------------------------------------------------------------------

CParser::UnaryexpressionContext::UnaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PostfixexpressionContext* CParser::UnaryexpressionContext::postfixexpression() {
  return getRuleContext<CParser::PostfixexpressionContext>(0);
}

tree::TerminalNode* CParser::UnaryexpressionContext::PlusPlus() {
  return getToken(CParser::PlusPlus, 0);
}

CParser::CastexpressionContext* CParser::UnaryexpressionContext::castexpression() {
  return getRuleContext<CParser::CastexpressionContext>(0);
}

tree::TerminalNode* CParser::UnaryexpressionContext::MinusMinus() {
  return getToken(CParser::MinusMinus, 0);
}

CParser::UnaryoperatorContext* CParser::UnaryexpressionContext::unaryoperator() {
  return getRuleContext<CParser::UnaryoperatorContext>(0);
}

tree::TerminalNode* CParser::UnaryexpressionContext::Sizeof() {
  return getToken(CParser::Sizeof, 0);
}

CParser::UnaryexpressionContext* CParser::UnaryexpressionContext::unaryexpression() {
  return getRuleContext<CParser::UnaryexpressionContext>(0);
}

tree::TerminalNode* CParser::UnaryexpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ThetypeidContext* CParser::UnaryexpressionContext::thetypeid() {
  return getRuleContext<CParser::ThetypeidContext>(0);
}

tree::TerminalNode* CParser::UnaryexpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::UnaryexpressionContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

tree::TerminalNode* CParser::UnaryexpressionContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::UnaryexpressionContext::Alignof() {
  return getToken(CParser::Alignof, 0);
}

CParser::NoexceptexpressionContext* CParser::UnaryexpressionContext::noexceptexpression() {
  return getRuleContext<CParser::NoexceptexpressionContext>(0);
}

CParser::NewexpressionContext* CParser::UnaryexpressionContext::newexpression() {
  return getRuleContext<CParser::NewexpressionContext>(0);
}

CParser::DeleteexpressionContext* CParser::UnaryexpressionContext::deleteexpression() {
  return getRuleContext<CParser::DeleteexpressionContext>(0);
}


size_t CParser::UnaryexpressionContext::getRuleIndex() const {
  return CParser::RuleUnaryexpression;
}

void CParser::UnaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryexpression(this);
}

void CParser::UnaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryexpression(this);
}


antlrcpp::Any CParser::UnaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnaryexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnaryexpressionContext* CParser::unaryexpression() {
  UnaryexpressionContext *_localctx = _tracker.createInstance<UnaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, CParser::RuleUnaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(701);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(673);
      postfixexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(674);
      match(CParser::PlusPlus);
      setState(675);
      castexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(676);
      match(CParser::MinusMinus);
      setState(677);
      castexpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(678);
      unaryoperator();
      setState(679);
      castexpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(681);
      match(CParser::Sizeof);
      setState(682);
      unaryexpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(683);
      match(CParser::Sizeof);
      setState(684);
      match(CParser::LeftParen);
      setState(685);
      thetypeid();
      setState(686);
      match(CParser::RightParen);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(688);
      match(CParser::Sizeof);
      setState(689);
      match(CParser::Ellipsis);
      setState(690);
      match(CParser::LeftParen);
      setState(691);
      match(CParser::Identifier);
      setState(692);
      match(CParser::RightParen);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(693);
      match(CParser::Alignof);
      setState(694);
      match(CParser::LeftParen);
      setState(695);
      thetypeid();
      setState(696);
      match(CParser::RightParen);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(698);
      noexceptexpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(699);
      newexpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(700);
      deleteexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryoperatorContext ------------------------------------------------------------------

CParser::UnaryoperatorContext::UnaryoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::UnaryoperatorContext::Or() {
  return getToken(CParser::Or, 0);
}

tree::TerminalNode* CParser::UnaryoperatorContext::Star() {
  return getToken(CParser::Star, 0);
}

tree::TerminalNode* CParser::UnaryoperatorContext::And() {
  return getToken(CParser::And, 0);
}

tree::TerminalNode* CParser::UnaryoperatorContext::Plus() {
  return getToken(CParser::Plus, 0);
}

tree::TerminalNode* CParser::UnaryoperatorContext::Tilde() {
  return getToken(CParser::Tilde, 0);
}

tree::TerminalNode* CParser::UnaryoperatorContext::Minus() {
  return getToken(CParser::Minus, 0);
}


size_t CParser::UnaryoperatorContext::getRuleIndex() const {
  return CParser::RuleUnaryoperator;
}

void CParser::UnaryoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryoperator(this);
}

void CParser::UnaryoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryoperator(this);
}


antlrcpp::Any CParser::UnaryoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnaryoperator(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnaryoperatorContext* CParser::unaryoperator() {
  UnaryoperatorContext *_localctx = _tracker.createInstance<UnaryoperatorContext>(_ctx, getState());
  enterRule(_localctx, 42, CParser::RuleUnaryoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(703);
    _la = _input->LA(1);
    if (!(_la == CParser::T__0

    || _la == CParser::T__1 || ((((_la - 90) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 90)) & ((1ULL << (CParser::Plus - 90))
      | (1ULL << (CParser::Minus - 90))
      | (1ULL << (CParser::Star - 90))
      | (1ULL << (CParser::And - 90))
      | (1ULL << (CParser::Or - 90))
      | (1ULL << (CParser::Tilde - 90)))) != 0))) {
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

//----------------- NewexpressionContext ------------------------------------------------------------------

CParser::NewexpressionContext::NewexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NewexpressionContext::New() {
  return getToken(CParser::New, 0);
}

CParser::NewtypeidContext* CParser::NewexpressionContext::newtypeid() {
  return getRuleContext<CParser::NewtypeidContext>(0);
}

tree::TerminalNode* CParser::NewexpressionContext::Doublecolon() {
  return getToken(CParser::Doublecolon, 0);
}

CParser::NewplacementContext* CParser::NewexpressionContext::newplacement() {
  return getRuleContext<CParser::NewplacementContext>(0);
}

CParser::NewinitializerContext* CParser::NewexpressionContext::newinitializer() {
  return getRuleContext<CParser::NewinitializerContext>(0);
}

tree::TerminalNode* CParser::NewexpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ThetypeidContext* CParser::NewexpressionContext::thetypeid() {
  return getRuleContext<CParser::ThetypeidContext>(0);
}

tree::TerminalNode* CParser::NewexpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::NewexpressionContext::getRuleIndex() const {
  return CParser::RuleNewexpression;
}

void CParser::NewexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewexpression(this);
}

void CParser::NewexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewexpression(this);
}


antlrcpp::Any CParser::NewexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNewexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::NewexpressionContext* CParser::newexpression() {
  NewexpressionContext *_localctx = _tracker.createInstance<NewexpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, CParser::RuleNewexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(729);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(706);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Doublecolon) {
        setState(705);
        match(CParser::Doublecolon);
      }
      setState(708);
      match(CParser::New);
      setState(710);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::LeftParen) {
        setState(709);
        newplacement();
      }
      setState(712);
      newtypeid();
      setState(714);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(713);
        newinitializer();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(717);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Doublecolon) {
        setState(716);
        match(CParser::Doublecolon);
      }
      setState(719);
      match(CParser::New);
      setState(721);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(720);
        newplacement();
        break;
      }

      }
      setState(723);
      match(CParser::LeftParen);
      setState(724);
      thetypeid();
      setState(725);
      match(CParser::RightParen);
      setState(727);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(726);
        newinitializer();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewplacementContext ------------------------------------------------------------------

CParser::NewplacementContext::NewplacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NewplacementContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionlistContext* CParser::NewplacementContext::expressionlist() {
  return getRuleContext<CParser::ExpressionlistContext>(0);
}

tree::TerminalNode* CParser::NewplacementContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::NewplacementContext::getRuleIndex() const {
  return CParser::RuleNewplacement;
}

void CParser::NewplacementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewplacement(this);
}

void CParser::NewplacementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewplacement(this);
}


antlrcpp::Any CParser::NewplacementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNewplacement(this);
  else
    return visitor->visitChildren(this);
}

CParser::NewplacementContext* CParser::newplacement() {
  NewplacementContext *_localctx = _tracker.createInstance<NewplacementContext>(_ctx, getState());
  enterRule(_localctx, 46, CParser::RuleNewplacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(731);
    match(CParser::LeftParen);
    setState(732);
    expressionlist();
    setState(733);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewtypeidContext ------------------------------------------------------------------

CParser::NewtypeidContext::NewtypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TypespecifierseqContext* CParser::NewtypeidContext::typespecifierseq() {
  return getRuleContext<CParser::TypespecifierseqContext>(0);
}

CParser::NewdeclaratorContext* CParser::NewtypeidContext::newdeclarator() {
  return getRuleContext<CParser::NewdeclaratorContext>(0);
}


size_t CParser::NewtypeidContext::getRuleIndex() const {
  return CParser::RuleNewtypeid;
}

void CParser::NewtypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewtypeid(this);
}

void CParser::NewtypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewtypeid(this);
}


antlrcpp::Any CParser::NewtypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNewtypeid(this);
  else
    return visitor->visitChildren(this);
}

CParser::NewtypeidContext* CParser::newtypeid() {
  NewtypeidContext *_localctx = _tracker.createInstance<NewtypeidContext>(_ctx, getState());
  enterRule(_localctx, 48, CParser::RuleNewtypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(735);
    typespecifierseq();
    setState(737);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(736);
      newdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewdeclaratorContext ------------------------------------------------------------------

CParser::NewdeclaratorContext::NewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PtroperatorContext* CParser::NewdeclaratorContext::ptroperator() {
  return getRuleContext<CParser::PtroperatorContext>(0);
}

CParser::NewdeclaratorContext* CParser::NewdeclaratorContext::newdeclarator() {
  return getRuleContext<CParser::NewdeclaratorContext>(0);
}

CParser::NoptrnewdeclaratorContext* CParser::NewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<CParser::NoptrnewdeclaratorContext>(0);
}


size_t CParser::NewdeclaratorContext::getRuleIndex() const {
  return CParser::RuleNewdeclarator;
}

void CParser::NewdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewdeclarator(this);
}

void CParser::NewdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewdeclarator(this);
}


antlrcpp::Any CParser::NewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNewdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::NewdeclaratorContext* CParser::newdeclarator() {
  NewdeclaratorContext *_localctx = _tracker.createInstance<NewdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 50, CParser::RuleNewdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(744);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__2:
      case CParser::Decltype:
      case CParser::Star:
      case CParser::And:
      case CParser::Doublecolon:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(739);
        ptroperator();
        setState(741);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          setState(740);
          newdeclarator();
          break;
        }

        }
        break;
      }

      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(743);
        noptrnewdeclarator(0);
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

//----------------- NoptrnewdeclaratorContext ------------------------------------------------------------------

CParser::NoptrnewdeclaratorContext::NoptrnewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NoptrnewdeclaratorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

CParser::ExpressionContext* CParser::NoptrnewdeclaratorContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::NoptrnewdeclaratorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

CParser::AttributespecifierseqContext* CParser::NoptrnewdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::NoptrnewdeclaratorContext* CParser::NoptrnewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<CParser::NoptrnewdeclaratorContext>(0);
}

CParser::ConstantexpressionContext* CParser::NoptrnewdeclaratorContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}


size_t CParser::NoptrnewdeclaratorContext::getRuleIndex() const {
  return CParser::RuleNoptrnewdeclarator;
}

void CParser::NoptrnewdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrnewdeclarator(this);
}

void CParser::NoptrnewdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrnewdeclarator(this);
}


antlrcpp::Any CParser::NoptrnewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNoptrnewdeclarator(this);
  else
    return visitor->visitChildren(this);
}


CParser::NoptrnewdeclaratorContext* CParser::noptrnewdeclarator() {
   return noptrnewdeclarator(0);
}

CParser::NoptrnewdeclaratorContext* CParser::noptrnewdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::NoptrnewdeclaratorContext *_localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(_ctx, parentState);
  CParser::NoptrnewdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, CParser::RuleNoptrnewdeclarator, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(747);
    match(CParser::LeftBracket);
    setState(748);
    expression(0);
    setState(749);
    match(CParser::RightBracket);
    setState(751);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(750);
      attributespecifierseq(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(762);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoptrnewdeclarator);
        setState(753);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(754);
        match(CParser::LeftBracket);
        setState(755);
        constantexpression();
        setState(756);
        match(CParser::RightBracket);
        setState(758);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
        case 1: {
          setState(757);
          attributespecifierseq(0);
          break;
        }

        } 
      }
      setState(764);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NewinitializerContext ------------------------------------------------------------------

CParser::NewinitializerContext::NewinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NewinitializerContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::NewinitializerContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::ExpressionlistContext* CParser::NewinitializerContext::expressionlist() {
  return getRuleContext<CParser::ExpressionlistContext>(0);
}

CParser::BracedinitlistContext* CParser::NewinitializerContext::bracedinitlist() {
  return getRuleContext<CParser::BracedinitlistContext>(0);
}


size_t CParser::NewinitializerContext::getRuleIndex() const {
  return CParser::RuleNewinitializer;
}

void CParser::NewinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewinitializer(this);
}

void CParser::NewinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewinitializer(this);
}


antlrcpp::Any CParser::NewinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNewinitializer(this);
  else
    return visitor->visitChildren(this);
}

CParser::NewinitializerContext* CParser::newinitializer() {
  NewinitializerContext *_localctx = _tracker.createInstance<NewinitializerContext>(_ctx, getState());
  enterRule(_localctx, 54, CParser::RuleNewinitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(771);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(765);
        match(CParser::LeftParen);
        setState(767);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__0)
          | (1ULL << CParser::T__1)
          | (1ULL << CParser::Alignof)
          | (1ULL << CParser::Auto)
          | (1ULL << CParser::Bool)
          | (1ULL << CParser::Char)
          | (1ULL << CParser::Char16)
          | (1ULL << CParser::Char32)
          | (1ULL << CParser::Const_cast)
          | (1ULL << CParser::Decltype)
          | (1ULL << CParser::Delete)
          | (1ULL << CParser::Double)
          | (1ULL << CParser::Dynamic_cast)
          | (1ULL << CParser::False)
          | (1ULL << CParser::Float)
          | (1ULL << CParser::Int)
          | (1ULL << CParser::Long)
          | (1ULL << CParser::New)
          | (1ULL << CParser::Noexcept)
          | (1ULL << CParser::Nullptr)
          | (1ULL << CParser::Operator)
          | (1ULL << CParser::Reinterpret_cast)
          | (1ULL << CParser::Short)
          | (1ULL << CParser::Signed)
          | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
          | (1ULL << (CParser::This - 64))
          | (1ULL << (CParser::Throw - 64))
          | (1ULL << (CParser::True - 64))
          | (1ULL << (CParser::Typeid_ - 64))
          | (1ULL << (CParser::Typename_ - 64))
          | (1ULL << (CParser::Unsigned - 64))
          | (1ULL << (CParser::Void - 64))
          | (1ULL << (CParser::Wchar - 64))
          | (1ULL << (CParser::LeftParen - 64))
          | (1ULL << (CParser::LeftBracket - 64))
          | (1ULL << (CParser::LeftBrace - 64))
          | (1ULL << (CParser::Plus - 64))
          | (1ULL << (CParser::Minus - 64))
          | (1ULL << (CParser::Star - 64))
          | (1ULL << (CParser::And - 64))
          | (1ULL << (CParser::Or - 64))
          | (1ULL << (CParser::Tilde - 64))
          | (1ULL << (CParser::PlusPlus - 64))
          | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
          | (1ULL << (CParser::Identifier - 128))
          | (1ULL << (CParser::Integerliteral - 128))
          | (1ULL << (CParser::Characterliteral - 128))
          | (1ULL << (CParser::Floatingliteral - 128))
          | (1ULL << (CParser::Stringliteral - 128))
          | (1ULL << (CParser::Userdefinedintegerliteral - 128))
          | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
          | (1ULL << (CParser::Userdefinedstringliteral - 128))
          | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
          setState(766);
          expressionlist();
        }
        setState(769);
        match(CParser::RightParen);
        break;
      }

      case CParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(770);
        bracedinitlist();
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

//----------------- DeleteexpressionContext ------------------------------------------------------------------

CParser::DeleteexpressionContext::DeleteexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::DeleteexpressionContext::Delete() {
  return getToken(CParser::Delete, 0);
}

CParser::CastexpressionContext* CParser::DeleteexpressionContext::castexpression() {
  return getRuleContext<CParser::CastexpressionContext>(0);
}

tree::TerminalNode* CParser::DeleteexpressionContext::Doublecolon() {
  return getToken(CParser::Doublecolon, 0);
}

tree::TerminalNode* CParser::DeleteexpressionContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::DeleteexpressionContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}


size_t CParser::DeleteexpressionContext::getRuleIndex() const {
  return CParser::RuleDeleteexpression;
}

void CParser::DeleteexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteexpression(this);
}

void CParser::DeleteexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteexpression(this);
}


antlrcpp::Any CParser::DeleteexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeleteexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeleteexpressionContext* CParser::deleteexpression() {
  DeleteexpressionContext *_localctx = _tracker.createInstance<DeleteexpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, CParser::RuleDeleteexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(785);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(774);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Doublecolon) {
        setState(773);
        match(CParser::Doublecolon);
      }
      setState(776);
      match(CParser::Delete);
      setState(777);
      castexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(779);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Doublecolon) {
        setState(778);
        match(CParser::Doublecolon);
      }
      setState(781);
      match(CParser::Delete);
      setState(782);
      match(CParser::LeftBracket);
      setState(783);
      match(CParser::RightBracket);
      setState(784);
      castexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoexceptexpressionContext ------------------------------------------------------------------

CParser::NoexceptexpressionContext::NoexceptexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NoexceptexpressionContext::Noexcept() {
  return getToken(CParser::Noexcept, 0);
}

tree::TerminalNode* CParser::NoexceptexpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionContext* CParser::NoexceptexpressionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::NoexceptexpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::NoexceptexpressionContext::getRuleIndex() const {
  return CParser::RuleNoexceptexpression;
}

void CParser::NoexceptexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoexceptexpression(this);
}

void CParser::NoexceptexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoexceptexpression(this);
}


antlrcpp::Any CParser::NoexceptexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNoexceptexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::NoexceptexpressionContext* CParser::noexceptexpression() {
  NoexceptexpressionContext *_localctx = _tracker.createInstance<NoexceptexpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, CParser::RuleNoexceptexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(787);
    match(CParser::Noexcept);
    setState(788);
    match(CParser::LeftParen);
    setState(789);
    expression(0);
    setState(790);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastexpressionContext ------------------------------------------------------------------

CParser::CastexpressionContext::CastexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::UnaryexpressionContext* CParser::CastexpressionContext::unaryexpression() {
  return getRuleContext<CParser::UnaryexpressionContext>(0);
}

tree::TerminalNode* CParser::CastexpressionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ThetypeidContext* CParser::CastexpressionContext::thetypeid() {
  return getRuleContext<CParser::ThetypeidContext>(0);
}

tree::TerminalNode* CParser::CastexpressionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::CastexpressionContext* CParser::CastexpressionContext::castexpression() {
  return getRuleContext<CParser::CastexpressionContext>(0);
}


size_t CParser::CastexpressionContext::getRuleIndex() const {
  return CParser::RuleCastexpression;
}

void CParser::CastexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastexpression(this);
}

void CParser::CastexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastexpression(this);
}


antlrcpp::Any CParser::CastexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCastexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::CastexpressionContext* CParser::castexpression() {
  CastexpressionContext *_localctx = _tracker.createInstance<CastexpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, CParser::RuleCastexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(798);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(792);
      unaryexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(793);
      match(CParser::LeftParen);
      setState(794);
      thetypeid();
      setState(795);
      match(CParser::RightParen);
      setState(796);
      castexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PmexpressionContext ------------------------------------------------------------------

CParser::PmexpressionContext::PmexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::CastexpressionContext* CParser::PmexpressionContext::castexpression() {
  return getRuleContext<CParser::CastexpressionContext>(0);
}

CParser::PmexpressionContext* CParser::PmexpressionContext::pmexpression() {
  return getRuleContext<CParser::PmexpressionContext>(0);
}

tree::TerminalNode* CParser::PmexpressionContext::DotStar() {
  return getToken(CParser::DotStar, 0);
}

tree::TerminalNode* CParser::PmexpressionContext::ArrowStar() {
  return getToken(CParser::ArrowStar, 0);
}


size_t CParser::PmexpressionContext::getRuleIndex() const {
  return CParser::RulePmexpression;
}

void CParser::PmexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPmexpression(this);
}

void CParser::PmexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPmexpression(this);
}


antlrcpp::Any CParser::PmexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPmexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::PmexpressionContext* CParser::pmexpression() {
   return pmexpression(0);
}

CParser::PmexpressionContext* CParser::pmexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::PmexpressionContext *_localctx = _tracker.createInstance<PmexpressionContext>(_ctx, parentState);
  CParser::PmexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, CParser::RulePmexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(801);
    castexpression();
    _ctx->stop = _input->LT(-1);
    setState(811);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(809);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(803);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(804);
          match(CParser::DotStar);
          setState(805);
          castexpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(806);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(807);
          match(CParser::ArrowStar);
          setState(808);
          castexpression();
          break;
        }

        } 
      }
      setState(813);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeexpressionContext ------------------------------------------------------------------

CParser::MultiplicativeexpressionContext::MultiplicativeexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PmexpressionContext* CParser::MultiplicativeexpressionContext::pmexpression() {
  return getRuleContext<CParser::PmexpressionContext>(0);
}

CParser::MultiplicativeexpressionContext* CParser::MultiplicativeexpressionContext::multiplicativeexpression() {
  return getRuleContext<CParser::MultiplicativeexpressionContext>(0);
}

tree::TerminalNode* CParser::MultiplicativeexpressionContext::Star() {
  return getToken(CParser::Star, 0);
}

tree::TerminalNode* CParser::MultiplicativeexpressionContext::Div() {
  return getToken(CParser::Div, 0);
}

tree::TerminalNode* CParser::MultiplicativeexpressionContext::Mod() {
  return getToken(CParser::Mod, 0);
}


size_t CParser::MultiplicativeexpressionContext::getRuleIndex() const {
  return CParser::RuleMultiplicativeexpression;
}

void CParser::MultiplicativeexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeexpression(this);
}

void CParser::MultiplicativeexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeexpression(this);
}


antlrcpp::Any CParser::MultiplicativeexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::MultiplicativeexpressionContext* CParser::multiplicativeexpression() {
   return multiplicativeexpression(0);
}

CParser::MultiplicativeexpressionContext* CParser::multiplicativeexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::MultiplicativeexpressionContext *_localctx = _tracker.createInstance<MultiplicativeexpressionContext>(_ctx, parentState);
  CParser::MultiplicativeexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, CParser::RuleMultiplicativeexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(815);
    pmexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(828);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(826);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(817);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(818);
          match(CParser::Star);
          setState(819);
          pmexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(820);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(821);
          match(CParser::Div);
          setState(822);
          pmexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(823);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(824);
          match(CParser::Mod);
          setState(825);
          pmexpression(0);
          break;
        }

        } 
      }
      setState(830);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveexpressionContext ------------------------------------------------------------------

CParser::AdditiveexpressionContext::AdditiveexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::MultiplicativeexpressionContext* CParser::AdditiveexpressionContext::multiplicativeexpression() {
  return getRuleContext<CParser::MultiplicativeexpressionContext>(0);
}

CParser::AdditiveexpressionContext* CParser::AdditiveexpressionContext::additiveexpression() {
  return getRuleContext<CParser::AdditiveexpressionContext>(0);
}

tree::TerminalNode* CParser::AdditiveexpressionContext::Plus() {
  return getToken(CParser::Plus, 0);
}

tree::TerminalNode* CParser::AdditiveexpressionContext::Minus() {
  return getToken(CParser::Minus, 0);
}


size_t CParser::AdditiveexpressionContext::getRuleIndex() const {
  return CParser::RuleAdditiveexpression;
}

void CParser::AdditiveexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveexpression(this);
}

void CParser::AdditiveexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveexpression(this);
}


antlrcpp::Any CParser::AdditiveexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAdditiveexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::AdditiveexpressionContext* CParser::additiveexpression() {
   return additiveexpression(0);
}

CParser::AdditiveexpressionContext* CParser::additiveexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::AdditiveexpressionContext *_localctx = _tracker.createInstance<AdditiveexpressionContext>(_ctx, parentState);
  CParser::AdditiveexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 66;
  enterRecursionRule(_localctx, 66, CParser::RuleAdditiveexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(832);
    multiplicativeexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(842);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(840);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(834);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(835);
          match(CParser::Plus);
          setState(836);
          multiplicativeexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(837);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(838);
          match(CParser::Minus);
          setState(839);
          multiplicativeexpression(0);
          break;
        }

        } 
      }
      setState(844);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftexpressionContext ------------------------------------------------------------------

CParser::ShiftexpressionContext::ShiftexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AdditiveexpressionContext* CParser::ShiftexpressionContext::additiveexpression() {
  return getRuleContext<CParser::AdditiveexpressionContext>(0);
}

CParser::ShiftexpressionContext* CParser::ShiftexpressionContext::shiftexpression() {
  return getRuleContext<CParser::ShiftexpressionContext>(0);
}

CParser::ShiftoperatorContext* CParser::ShiftexpressionContext::shiftoperator() {
  return getRuleContext<CParser::ShiftoperatorContext>(0);
}


size_t CParser::ShiftexpressionContext::getRuleIndex() const {
  return CParser::RuleShiftexpression;
}

void CParser::ShiftexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftexpression(this);
}

void CParser::ShiftexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftexpression(this);
}


antlrcpp::Any CParser::ShiftexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitShiftexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::ShiftexpressionContext* CParser::shiftexpression() {
   return shiftexpression(0);
}

CParser::ShiftexpressionContext* CParser::shiftexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::ShiftexpressionContext *_localctx = _tracker.createInstance<ShiftexpressionContext>(_ctx, parentState);
  CParser::ShiftexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, CParser::RuleShiftexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(846);
    additiveexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(854);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
        setState(848);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(849);
        shiftoperator();
        setState(850);
        additiveexpression(0); 
      }
      setState(856);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftoperatorContext ------------------------------------------------------------------

CParser::ShiftoperatorContext::ShiftoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ShiftoperatorContext::RightShift() {
  return getToken(CParser::RightShift, 0);
}

tree::TerminalNode* CParser::ShiftoperatorContext::LeftShift() {
  return getToken(CParser::LeftShift, 0);
}


size_t CParser::ShiftoperatorContext::getRuleIndex() const {
  return CParser::RuleShiftoperator;
}

void CParser::ShiftoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftoperator(this);
}

void CParser::ShiftoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftoperator(this);
}


antlrcpp::Any CParser::ShiftoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitShiftoperator(this);
  else
    return visitor->visitChildren(this);
}

CParser::ShiftoperatorContext* CParser::shiftoperator() {
  ShiftoperatorContext *_localctx = _tracker.createInstance<ShiftoperatorContext>(_ctx, getState());
  enterRule(_localctx, 70, CParser::RuleShiftoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(857);
    _la = _input->LA(1);
    if (!(_la == CParser::LeftShift

    || _la == CParser::RightShift)) {
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

//----------------- RelationalexpressionContext ------------------------------------------------------------------

CParser::RelationalexpressionContext::RelationalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ShiftexpressionContext* CParser::RelationalexpressionContext::shiftexpression() {
  return getRuleContext<CParser::ShiftexpressionContext>(0);
}

CParser::RelationalexpressionContext* CParser::RelationalexpressionContext::relationalexpression() {
  return getRuleContext<CParser::RelationalexpressionContext>(0);
}

tree::TerminalNode* CParser::RelationalexpressionContext::Less() {
  return getToken(CParser::Less, 0);
}

tree::TerminalNode* CParser::RelationalexpressionContext::Greater() {
  return getToken(CParser::Greater, 0);
}

tree::TerminalNode* CParser::RelationalexpressionContext::LessEqual() {
  return getToken(CParser::LessEqual, 0);
}

tree::TerminalNode* CParser::RelationalexpressionContext::GreaterEqual() {
  return getToken(CParser::GreaterEqual, 0);
}


size_t CParser::RelationalexpressionContext::getRuleIndex() const {
  return CParser::RuleRelationalexpression;
}

void CParser::RelationalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalexpression(this);
}

void CParser::RelationalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalexpression(this);
}


antlrcpp::Any CParser::RelationalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitRelationalexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::RelationalexpressionContext* CParser::relationalexpression() {
   return relationalexpression(0);
}

CParser::RelationalexpressionContext* CParser::relationalexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::RelationalexpressionContext *_localctx = _tracker.createInstance<RelationalexpressionContext>(_ctx, parentState);
  CParser::RelationalexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 72;
  enterRecursionRule(_localctx, 72, CParser::RuleRelationalexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(860);
    shiftexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(876);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(874);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(862);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(863);
          match(CParser::Less);
          setState(864);
          shiftexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(865);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(866);
          match(CParser::Greater);
          setState(867);
          shiftexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(868);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(869);
          match(CParser::LessEqual);
          setState(870);
          shiftexpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(871);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(872);
          match(CParser::GreaterEqual);
          setState(873);
          shiftexpression(0);
          break;
        }

        } 
      }
      setState(878);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityexpressionContext ------------------------------------------------------------------

CParser::EqualityexpressionContext::EqualityexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::RelationalexpressionContext* CParser::EqualityexpressionContext::relationalexpression() {
  return getRuleContext<CParser::RelationalexpressionContext>(0);
}

CParser::EqualityexpressionContext* CParser::EqualityexpressionContext::equalityexpression() {
  return getRuleContext<CParser::EqualityexpressionContext>(0);
}

tree::TerminalNode* CParser::EqualityexpressionContext::Equal() {
  return getToken(CParser::Equal, 0);
}

tree::TerminalNode* CParser::EqualityexpressionContext::NotEqual() {
  return getToken(CParser::NotEqual, 0);
}


size_t CParser::EqualityexpressionContext::getRuleIndex() const {
  return CParser::RuleEqualityexpression;
}

void CParser::EqualityexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityexpression(this);
}

void CParser::EqualityexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityexpression(this);
}


antlrcpp::Any CParser::EqualityexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEqualityexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::EqualityexpressionContext* CParser::equalityexpression() {
   return equalityexpression(0);
}

CParser::EqualityexpressionContext* CParser::equalityexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::EqualityexpressionContext *_localctx = _tracker.createInstance<EqualityexpressionContext>(_ctx, parentState);
  CParser::EqualityexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, CParser::RuleEqualityexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(880);
    relationalexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(890);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(888);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(882);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(883);
          match(CParser::Equal);
          setState(884);
          relationalexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(885);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(886);
          match(CParser::NotEqual);
          setState(887);
          relationalexpression(0);
          break;
        }

        } 
      }
      setState(892);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndexpressionContext ------------------------------------------------------------------

CParser::AndexpressionContext::AndexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::EqualityexpressionContext* CParser::AndexpressionContext::equalityexpression() {
  return getRuleContext<CParser::EqualityexpressionContext>(0);
}

CParser::AndexpressionContext* CParser::AndexpressionContext::andexpression() {
  return getRuleContext<CParser::AndexpressionContext>(0);
}

tree::TerminalNode* CParser::AndexpressionContext::And() {
  return getToken(CParser::And, 0);
}


size_t CParser::AndexpressionContext::getRuleIndex() const {
  return CParser::RuleAndexpression;
}

void CParser::AndexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndexpression(this);
}

void CParser::AndexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndexpression(this);
}


antlrcpp::Any CParser::AndexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAndexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::AndexpressionContext* CParser::andexpression() {
   return andexpression(0);
}

CParser::AndexpressionContext* CParser::andexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::AndexpressionContext *_localctx = _tracker.createInstance<AndexpressionContext>(_ctx, parentState);
  CParser::AndexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, CParser::RuleAndexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(894);
    equalityexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(901);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndexpression);
        setState(896);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(897);
        match(CParser::And);
        setState(898);
        equalityexpression(0); 
      }
      setState(903);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveorexpressionContext ------------------------------------------------------------------

CParser::ExclusiveorexpressionContext::ExclusiveorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AndexpressionContext* CParser::ExclusiveorexpressionContext::andexpression() {
  return getRuleContext<CParser::AndexpressionContext>(0);
}

CParser::ExclusiveorexpressionContext* CParser::ExclusiveorexpressionContext::exclusiveorexpression() {
  return getRuleContext<CParser::ExclusiveorexpressionContext>(0);
}

tree::TerminalNode* CParser::ExclusiveorexpressionContext::Caret() {
  return getToken(CParser::Caret, 0);
}


size_t CParser::ExclusiveorexpressionContext::getRuleIndex() const {
  return CParser::RuleExclusiveorexpression;
}

void CParser::ExclusiveorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveorexpression(this);
}

void CParser::ExclusiveorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveorexpression(this);
}


antlrcpp::Any CParser::ExclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExclusiveorexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::ExclusiveorexpressionContext* CParser::exclusiveorexpression() {
   return exclusiveorexpression(0);
}

CParser::ExclusiveorexpressionContext* CParser::exclusiveorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::ExclusiveorexpressionContext *_localctx = _tracker.createInstance<ExclusiveorexpressionContext>(_ctx, parentState);
  CParser::ExclusiveorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, CParser::RuleExclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(905);
    andexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(912);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveorexpression);
        setState(907);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(908);
        match(CParser::Caret);
        setState(909);
        andexpression(0); 
      }
      setState(914);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveorexpressionContext ------------------------------------------------------------------

CParser::InclusiveorexpressionContext::InclusiveorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ExclusiveorexpressionContext* CParser::InclusiveorexpressionContext::exclusiveorexpression() {
  return getRuleContext<CParser::ExclusiveorexpressionContext>(0);
}

CParser::InclusiveorexpressionContext* CParser::InclusiveorexpressionContext::inclusiveorexpression() {
  return getRuleContext<CParser::InclusiveorexpressionContext>(0);
}

tree::TerminalNode* CParser::InclusiveorexpressionContext::Or() {
  return getToken(CParser::Or, 0);
}


size_t CParser::InclusiveorexpressionContext::getRuleIndex() const {
  return CParser::RuleInclusiveorexpression;
}

void CParser::InclusiveorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveorexpression(this);
}

void CParser::InclusiveorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveorexpression(this);
}


antlrcpp::Any CParser::InclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInclusiveorexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::InclusiveorexpressionContext* CParser::inclusiveorexpression() {
   return inclusiveorexpression(0);
}

CParser::InclusiveorexpressionContext* CParser::inclusiveorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::InclusiveorexpressionContext *_localctx = _tracker.createInstance<InclusiveorexpressionContext>(_ctx, parentState);
  CParser::InclusiveorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, CParser::RuleInclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(916);
    exclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(923);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveorexpression);
        setState(918);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(919);
        match(CParser::Or);
        setState(920);
        exclusiveorexpression(0); 
      }
      setState(925);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalandexpressionContext ------------------------------------------------------------------

CParser::LogicalandexpressionContext::LogicalandexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::InclusiveorexpressionContext* CParser::LogicalandexpressionContext::inclusiveorexpression() {
  return getRuleContext<CParser::InclusiveorexpressionContext>(0);
}

CParser::LogicalandexpressionContext* CParser::LogicalandexpressionContext::logicalandexpression() {
  return getRuleContext<CParser::LogicalandexpressionContext>(0);
}


size_t CParser::LogicalandexpressionContext::getRuleIndex() const {
  return CParser::RuleLogicalandexpression;
}

void CParser::LogicalandexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalandexpression(this);
}

void CParser::LogicalandexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalandexpression(this);
}


antlrcpp::Any CParser::LogicalandexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLogicalandexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::LogicalandexpressionContext* CParser::logicalandexpression() {
   return logicalandexpression(0);
}

CParser::LogicalandexpressionContext* CParser::logicalandexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::LogicalandexpressionContext *_localctx = _tracker.createInstance<LogicalandexpressionContext>(_ctx, parentState);
  CParser::LogicalandexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 82;
  enterRecursionRule(_localctx, 82, CParser::RuleLogicalandexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(927);
    inclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(937);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(935);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
          setState(929);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(930);
          match(CParser::T__2);
          setState(931);
          inclusiveorexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
          setState(932);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(933);
          match(CParser::T__3);
          setState(934);
          inclusiveorexpression(0);
          break;
        }

        } 
      }
      setState(939);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalorexpressionContext ------------------------------------------------------------------

CParser::LogicalorexpressionContext::LogicalorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::LogicalandexpressionContext* CParser::LogicalorexpressionContext::logicalandexpression() {
  return getRuleContext<CParser::LogicalandexpressionContext>(0);
}

CParser::LogicalorexpressionContext* CParser::LogicalorexpressionContext::logicalorexpression() {
  return getRuleContext<CParser::LogicalorexpressionContext>(0);
}


size_t CParser::LogicalorexpressionContext::getRuleIndex() const {
  return CParser::RuleLogicalorexpression;
}

void CParser::LogicalorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalorexpression(this);
}

void CParser::LogicalorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalorexpression(this);
}


antlrcpp::Any CParser::LogicalorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLogicalorexpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::LogicalorexpressionContext* CParser::logicalorexpression() {
   return logicalorexpression(0);
}

CParser::LogicalorexpressionContext* CParser::logicalorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::LogicalorexpressionContext *_localctx = _tracker.createInstance<LogicalorexpressionContext>(_ctx, parentState);
  CParser::LogicalorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 84;
  enterRecursionRule(_localctx, 84, CParser::RuleLogicalorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(941);
    logicalandexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(951);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(949);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
          setState(943);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(944);
          match(CParser::T__4);
          setState(945);
          logicalandexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
          setState(946);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(947);
          match(CParser::T__5);
          setState(948);
          logicalandexpression(0);
          break;
        }

        } 
      }
      setState(953);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalexpressionContext ------------------------------------------------------------------

CParser::ConditionalexpressionContext::ConditionalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::LogicalorexpressionContext* CParser::ConditionalexpressionContext::logicalorexpression() {
  return getRuleContext<CParser::LogicalorexpressionContext>(0);
}

tree::TerminalNode* CParser::ConditionalexpressionContext::Question() {
  return getToken(CParser::Question, 0);
}

CParser::ExpressionContext* CParser::ConditionalexpressionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::ConditionalexpressionContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::AssignmentexpressionContext* CParser::ConditionalexpressionContext::assignmentexpression() {
  return getRuleContext<CParser::AssignmentexpressionContext>(0);
}


size_t CParser::ConditionalexpressionContext::getRuleIndex() const {
  return CParser::RuleConditionalexpression;
}

void CParser::ConditionalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalexpression(this);
}

void CParser::ConditionalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalexpression(this);
}


antlrcpp::Any CParser::ConditionalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitConditionalexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConditionalexpressionContext* CParser::conditionalexpression() {
  ConditionalexpressionContext *_localctx = _tracker.createInstance<ConditionalexpressionContext>(_ctx, getState());
  enterRule(_localctx, 86, CParser::RuleConditionalexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(961);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(954);
      logicalorexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(955);
      logicalorexpression(0);
      setState(956);
      match(CParser::Question);
      setState(957);
      expression(0);
      setState(958);
      match(CParser::Colon);
      setState(959);
      assignmentexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentexpressionContext ------------------------------------------------------------------

CParser::AssignmentexpressionContext::AssignmentexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ConditionalexpressionContext* CParser::AssignmentexpressionContext::conditionalexpression() {
  return getRuleContext<CParser::ConditionalexpressionContext>(0);
}

CParser::LogicalorexpressionContext* CParser::AssignmentexpressionContext::logicalorexpression() {
  return getRuleContext<CParser::LogicalorexpressionContext>(0);
}

CParser::AssignmentoperatorContext* CParser::AssignmentexpressionContext::assignmentoperator() {
  return getRuleContext<CParser::AssignmentoperatorContext>(0);
}

CParser::InitializerclauseContext* CParser::AssignmentexpressionContext::initializerclause() {
  return getRuleContext<CParser::InitializerclauseContext>(0);
}

CParser::ThrowexpressionContext* CParser::AssignmentexpressionContext::throwexpression() {
  return getRuleContext<CParser::ThrowexpressionContext>(0);
}


size_t CParser::AssignmentexpressionContext::getRuleIndex() const {
  return CParser::RuleAssignmentexpression;
}

void CParser::AssignmentexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentexpression(this);
}

void CParser::AssignmentexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentexpression(this);
}


antlrcpp::Any CParser::AssignmentexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAssignmentexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::AssignmentexpressionContext* CParser::assignmentexpression() {
  AssignmentexpressionContext *_localctx = _tracker.createInstance<AssignmentexpressionContext>(_ctx, getState());
  enterRule(_localctx, 88, CParser::RuleAssignmentexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(969);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(963);
      conditionalexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(964);
      logicalorexpression(0);
      setState(965);
      assignmentoperator();
      setState(966);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(968);
      throwexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentoperatorContext ------------------------------------------------------------------

CParser::AssignmentoperatorContext::AssignmentoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AssignmentoperatorContext::Assign() {
  return getToken(CParser::Assign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::StarAssign() {
  return getToken(CParser::StarAssign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::DivAssign() {
  return getToken(CParser::DivAssign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::ModAssign() {
  return getToken(CParser::ModAssign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::PlusAssign() {
  return getToken(CParser::PlusAssign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::MinusAssign() {
  return getToken(CParser::MinusAssign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::RightShiftAssign() {
  return getToken(CParser::RightShiftAssign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::LeftShiftAssign() {
  return getToken(CParser::LeftShiftAssign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::AndAssign() {
  return getToken(CParser::AndAssign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::XorAssign() {
  return getToken(CParser::XorAssign, 0);
}

tree::TerminalNode* CParser::AssignmentoperatorContext::OrAssign() {
  return getToken(CParser::OrAssign, 0);
}


size_t CParser::AssignmentoperatorContext::getRuleIndex() const {
  return CParser::RuleAssignmentoperator;
}

void CParser::AssignmentoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentoperator(this);
}

void CParser::AssignmentoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentoperator(this);
}


antlrcpp::Any CParser::AssignmentoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAssignmentoperator(this);
  else
    return visitor->visitChildren(this);
}

CParser::AssignmentoperatorContext* CParser::assignmentoperator() {
  AssignmentoperatorContext *_localctx = _tracker.createInstance<AssignmentoperatorContext>(_ctx, getState());
  enterRule(_localctx, 90, CParser::RuleAssignmentoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(971);
    _la = _input->LA(1);
    if (!(((((_la - 100) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 100)) & ((1ULL << (CParser::Assign - 100))
      | (1ULL << (CParser::PlusAssign - 100))
      | (1ULL << (CParser::MinusAssign - 100))
      | (1ULL << (CParser::StarAssign - 100))
      | (1ULL << (CParser::DivAssign - 100))
      | (1ULL << (CParser::ModAssign - 100))
      | (1ULL << (CParser::XorAssign - 100))
      | (1ULL << (CParser::AndAssign - 100))
      | (1ULL << (CParser::OrAssign - 100))
      | (1ULL << (CParser::LeftShiftAssign - 100))
      | (1ULL << (CParser::RightShiftAssign - 100)))) != 0))) {
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

//----------------- ExpressionContext ------------------------------------------------------------------

CParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AssignmentexpressionContext* CParser::ExpressionContext::assignmentexpression() {
  return getRuleContext<CParser::AssignmentexpressionContext>(0);
}

CParser::ExpressionContext* CParser::ExpressionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::ExpressionContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::ExpressionContext::getRuleIndex() const {
  return CParser::RuleExpression;
}

void CParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any CParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


CParser::ExpressionContext* CParser::expression() {
   return expression(0);
}

CParser::ExpressionContext* CParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  CParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 92;
  enterRecursionRule(_localctx, 92, CParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(974);
    assignmentexpression();
    _ctx->stop = _input->LT(-1);
    setState(981);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(976);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(977);
        match(CParser::Comma);
        setState(978);
        assignmentexpression(); 
      }
      setState(983);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantexpressionContext ------------------------------------------------------------------

CParser::ConstantexpressionContext::ConstantexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ConditionalexpressionContext* CParser::ConstantexpressionContext::conditionalexpression() {
  return getRuleContext<CParser::ConditionalexpressionContext>(0);
}


size_t CParser::ConstantexpressionContext::getRuleIndex() const {
  return CParser::RuleConstantexpression;
}

void CParser::ConstantexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantexpression(this);
}

void CParser::ConstantexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantexpression(this);
}


antlrcpp::Any CParser::ConstantexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitConstantexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConstantexpressionContext* CParser::constantexpression() {
  ConstantexpressionContext *_localctx = _tracker.createInstance<ConstantexpressionContext>(_ctx, getState());
  enterRule(_localctx, 94, CParser::RuleConstantexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(984);
    conditionalexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::LabeledstatementContext* CParser::StatementContext::labeledstatement() {
  return getRuleContext<CParser::LabeledstatementContext>(0);
}

CParser::ExpressionstatementContext* CParser::StatementContext::expressionstatement() {
  return getRuleContext<CParser::ExpressionstatementContext>(0);
}

CParser::AttributespecifierseqContext* CParser::StatementContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::CompoundstatementContext* CParser::StatementContext::compoundstatement() {
  return getRuleContext<CParser::CompoundstatementContext>(0);
}

CParser::SelectionstatementContext* CParser::StatementContext::selectionstatement() {
  return getRuleContext<CParser::SelectionstatementContext>(0);
}

CParser::IterationstatementContext* CParser::StatementContext::iterationstatement() {
  return getRuleContext<CParser::IterationstatementContext>(0);
}

CParser::JumpstatementContext* CParser::StatementContext::jumpstatement() {
  return getRuleContext<CParser::JumpstatementContext>(0);
}

CParser::DeclarationstatementContext* CParser::StatementContext::declarationstatement() {
  return getRuleContext<CParser::DeclarationstatementContext>(0);
}

CParser::TryblockContext* CParser::StatementContext::tryblock() {
  return getRuleContext<CParser::TryblockContext>(0);
}


size_t CParser::StatementContext::getRuleIndex() const {
  return CParser::RuleStatement;
}

void CParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any CParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::StatementContext* CParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 96, CParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1012);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(986);
      labeledstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(988);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(987);
        attributespecifierseq(0);
        break;
      }

      }
      setState(990);
      expressionstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(992);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(991);
        attributespecifierseq(0);
      }
      setState(994);
      compoundstatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(996);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(995);
        attributespecifierseq(0);
      }
      setState(998);
      selectionstatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1000);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(999);
        attributespecifierseq(0);
      }
      setState(1002);
      iterationstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1004);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1003);
        attributespecifierseq(0);
      }
      setState(1006);
      jumpstatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1007);
      declarationstatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1009);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1008);
        attributespecifierseq(0);
      }
      setState(1011);
      tryblock();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledstatementContext ------------------------------------------------------------------

CParser::LabeledstatementContext::LabeledstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::LabeledstatementContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::LabeledstatementContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::StatementContext* CParser::LabeledstatementContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

CParser::AttributespecifierseqContext* CParser::LabeledstatementContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CParser::LabeledstatementContext::Case() {
  return getToken(CParser::Case, 0);
}

CParser::ConstantexpressionContext* CParser::LabeledstatementContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* CParser::LabeledstatementContext::Default() {
  return getToken(CParser::Default, 0);
}


size_t CParser::LabeledstatementContext::getRuleIndex() const {
  return CParser::RuleLabeledstatement;
}

void CParser::LabeledstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledstatement(this);
}

void CParser::LabeledstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledstatement(this);
}


antlrcpp::Any CParser::LabeledstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLabeledstatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::LabeledstatementContext* CParser::labeledstatement() {
  LabeledstatementContext *_localctx = _tracker.createInstance<LabeledstatementContext>(_ctx, getState());
  enterRule(_localctx, 98, CParser::RuleLabeledstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1034);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1015);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1014);
        attributespecifierseq(0);
      }
      setState(1017);
      match(CParser::Identifier);
      setState(1018);
      match(CParser::Colon);
      setState(1019);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1021);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1020);
        attributespecifierseq(0);
      }
      setState(1023);
      match(CParser::Case);
      setState(1024);
      constantexpression();
      setState(1025);
      match(CParser::Colon);
      setState(1026);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1029);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1028);
        attributespecifierseq(0);
      }
      setState(1031);
      match(CParser::Default);
      setState(1032);
      match(CParser::Colon);
      setState(1033);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionstatementContext ------------------------------------------------------------------

CParser::ExpressionstatementContext::ExpressionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ExpressionstatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::ExpressionContext* CParser::ExpressionstatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}


size_t CParser::ExpressionstatementContext::getRuleIndex() const {
  return CParser::RuleExpressionstatement;
}

void CParser::ExpressionstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionstatement(this);
}

void CParser::ExpressionstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionstatement(this);
}


antlrcpp::Any CParser::ExpressionstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExpressionstatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExpressionstatementContext* CParser::expressionstatement() {
  ExpressionstatementContext *_localctx = _tracker.createInstance<ExpressionstatementContext>(_ctx, getState());
  enterRule(_localctx, 100, CParser::RuleExpressionstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1037);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Char16)
      | (1ULL << CParser::Char32)
      | (1ULL << CParser::Const_cast)
      | (1ULL << CParser::Decltype)
      | (1ULL << CParser::Delete)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Dynamic_cast)
      | (1ULL << CParser::False)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::New)
      | (1ULL << CParser::Noexcept)
      | (1ULL << CParser::Nullptr)
      | (1ULL << CParser::Operator)
      | (1ULL << CParser::Reinterpret_cast)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
      | (1ULL << (CParser::This - 64))
      | (1ULL << (CParser::Throw - 64))
      | (1ULL << (CParser::True - 64))
      | (1ULL << (CParser::Typeid_ - 64))
      | (1ULL << (CParser::Typename_ - 64))
      | (1ULL << (CParser::Unsigned - 64))
      | (1ULL << (CParser::Void - 64))
      | (1ULL << (CParser::Wchar - 64))
      | (1ULL << (CParser::LeftParen - 64))
      | (1ULL << (CParser::LeftBracket - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::Or - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
      | (1ULL << (CParser::Identifier - 128))
      | (1ULL << (CParser::Integerliteral - 128))
      | (1ULL << (CParser::Characterliteral - 128))
      | (1ULL << (CParser::Floatingliteral - 128))
      | (1ULL << (CParser::Stringliteral - 128))
      | (1ULL << (CParser::Userdefinedintegerliteral - 128))
      | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
      | (1ULL << (CParser::Userdefinedstringliteral - 128))
      | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
      setState(1036);
      expression(0);
    }
    setState(1039);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundstatementContext ------------------------------------------------------------------

CParser::CompoundstatementContext::CompoundstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CompoundstatementContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

tree::TerminalNode* CParser::CompoundstatementContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

CParser::StatementseqContext* CParser::CompoundstatementContext::statementseq() {
  return getRuleContext<CParser::StatementseqContext>(0);
}


size_t CParser::CompoundstatementContext::getRuleIndex() const {
  return CParser::RuleCompoundstatement;
}

void CParser::CompoundstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundstatement(this);
}

void CParser::CompoundstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundstatement(this);
}


antlrcpp::Any CParser::CompoundstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCompoundstatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::CompoundstatementContext* CParser::compoundstatement() {
  CompoundstatementContext *_localctx = _tracker.createInstance<CompoundstatementContext>(_ctx, getState());
  enterRule(_localctx, 102, CParser::RuleCompoundstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1041);
    match(CParser::LeftBrace);
    setState(1043);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Asm)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Char16)
      | (1ULL << CParser::Char32)
      | (1ULL << CParser::Class)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Constexpr)
      | (1ULL << CParser::Const_cast)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Decltype)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Delete)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Dynamic_cast)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Explicit)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::False)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Friend)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Mutable)
      | (1ULL << CParser::Namespace)
      | (1ULL << CParser::New)
      | (1ULL << CParser::Noexcept)
      | (1ULL << CParser::Nullptr)
      | (1ULL << CParser::Operator)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Reinterpret_cast)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Static_assert))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
      | (1ULL << (CParser::Struct - 64))
      | (1ULL << (CParser::Switch - 64))
      | (1ULL << (CParser::This - 64))
      | (1ULL << (CParser::Thread_local - 64))
      | (1ULL << (CParser::Throw - 64))
      | (1ULL << (CParser::True - 64))
      | (1ULL << (CParser::Try - 64))
      | (1ULL << (CParser::Typedef - 64))
      | (1ULL << (CParser::Typeid_ - 64))
      | (1ULL << (CParser::Typename_ - 64))
      | (1ULL << (CParser::Union - 64))
      | (1ULL << (CParser::Unsigned - 64))
      | (1ULL << (CParser::Using - 64))
      | (1ULL << (CParser::Virtual - 64))
      | (1ULL << (CParser::Void - 64))
      | (1ULL << (CParser::Volatile - 64))
      | (1ULL << (CParser::Wchar - 64))
      | (1ULL << (CParser::While - 64))
      | (1ULL << (CParser::LeftParen - 64))
      | (1ULL << (CParser::LeftBracket - 64))
      | (1ULL << (CParser::LeftBrace - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::Or - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
      | (1ULL << (CParser::Semi - 128))
      | (1ULL << (CParser::Ellipsis - 128))
      | (1ULL << (CParser::Identifier - 128))
      | (1ULL << (CParser::Integerliteral - 128))
      | (1ULL << (CParser::Characterliteral - 128))
      | (1ULL << (CParser::Floatingliteral - 128))
      | (1ULL << (CParser::Stringliteral - 128))
      | (1ULL << (CParser::Userdefinedintegerliteral - 128))
      | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
      | (1ULL << (CParser::Userdefinedstringliteral - 128))
      | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
      setState(1042);
      statementseq(0);
    }
    setState(1045);
    match(CParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementseqContext ------------------------------------------------------------------

CParser::StatementseqContext::StatementseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::StatementContext* CParser::StatementseqContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

CParser::StatementseqContext* CParser::StatementseqContext::statementseq() {
  return getRuleContext<CParser::StatementseqContext>(0);
}


size_t CParser::StatementseqContext::getRuleIndex() const {
  return CParser::RuleStatementseq;
}

void CParser::StatementseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementseq(this);
}

void CParser::StatementseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementseq(this);
}


antlrcpp::Any CParser::StatementseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStatementseq(this);
  else
    return visitor->visitChildren(this);
}


CParser::StatementseqContext* CParser::statementseq() {
   return statementseq(0);
}

CParser::StatementseqContext* CParser::statementseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::StatementseqContext *_localctx = _tracker.createInstance<StatementseqContext>(_ctx, parentState);
  CParser::StatementseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 104;
  enterRecursionRule(_localctx, 104, CParser::RuleStatementseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1048);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(1054);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementseq);
        setState(1050);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1051);
        statement(); 
      }
      setState(1056);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SelectionstatementContext ------------------------------------------------------------------

CParser::SelectionstatementContext::SelectionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::SelectionstatementContext::If() {
  return getToken(CParser::If, 0);
}

tree::TerminalNode* CParser::SelectionstatementContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ConditionContext* CParser::SelectionstatementContext::condition() {
  return getRuleContext<CParser::ConditionContext>(0);
}

tree::TerminalNode* CParser::SelectionstatementContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

std::vector<CParser::StatementContext *> CParser::SelectionstatementContext::statement() {
  return getRuleContexts<CParser::StatementContext>();
}

CParser::StatementContext* CParser::SelectionstatementContext::statement(size_t i) {
  return getRuleContext<CParser::StatementContext>(i);
}

tree::TerminalNode* CParser::SelectionstatementContext::Else() {
  return getToken(CParser::Else, 0);
}

tree::TerminalNode* CParser::SelectionstatementContext::Switch() {
  return getToken(CParser::Switch, 0);
}


size_t CParser::SelectionstatementContext::getRuleIndex() const {
  return CParser::RuleSelectionstatement;
}

void CParser::SelectionstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionstatement(this);
}

void CParser::SelectionstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionstatement(this);
}


antlrcpp::Any CParser::SelectionstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSelectionstatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::SelectionstatementContext* CParser::selectionstatement() {
  SelectionstatementContext *_localctx = _tracker.createInstance<SelectionstatementContext>(_ctx, getState());
  enterRule(_localctx, 106, CParser::RuleSelectionstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1077);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1057);
      match(CParser::If);
      setState(1058);
      match(CParser::LeftParen);
      setState(1059);
      condition();
      setState(1060);
      match(CParser::RightParen);
      setState(1061);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1063);
      match(CParser::If);
      setState(1064);
      match(CParser::LeftParen);
      setState(1065);
      condition();
      setState(1066);
      match(CParser::RightParen);
      setState(1067);
      statement();
      setState(1068);
      match(CParser::Else);
      setState(1069);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1071);
      match(CParser::Switch);
      setState(1072);
      match(CParser::LeftParen);
      setState(1073);
      condition();
      setState(1074);
      match(CParser::RightParen);
      setState(1075);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

CParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ExpressionContext* CParser::ConditionContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

CParser::DeclspecifierseqContext* CParser::ConditionContext::declspecifierseq() {
  return getRuleContext<CParser::DeclspecifierseqContext>(0);
}

CParser::DeclaratorContext* CParser::ConditionContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

tree::TerminalNode* CParser::ConditionContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::InitializerclauseContext* CParser::ConditionContext::initializerclause() {
  return getRuleContext<CParser::InitializerclauseContext>(0);
}

CParser::AttributespecifierseqContext* CParser::ConditionContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::BracedinitlistContext* CParser::ConditionContext::bracedinitlist() {
  return getRuleContext<CParser::BracedinitlistContext>(0);
}


size_t CParser::ConditionContext::getRuleIndex() const {
  return CParser::RuleCondition;
}

void CParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void CParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any CParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConditionContext* CParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 108, CParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1095);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1079);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1081);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1080);
        attributespecifierseq(0);
      }
      setState(1083);
      declspecifierseq();
      setState(1084);
      declarator();
      setState(1085);
      match(CParser::Assign);
      setState(1086);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1089);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1088);
        attributespecifierseq(0);
      }
      setState(1091);
      declspecifierseq();
      setState(1092);
      declarator();
      setState(1093);
      bracedinitlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationstatementContext ------------------------------------------------------------------

CParser::IterationstatementContext::IterationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::IterationstatementContext::While() {
  return getToken(CParser::While, 0);
}

tree::TerminalNode* CParser::IterationstatementContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ConditionContext* CParser::IterationstatementContext::condition() {
  return getRuleContext<CParser::ConditionContext>(0);
}

tree::TerminalNode* CParser::IterationstatementContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::StatementContext* CParser::IterationstatementContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

tree::TerminalNode* CParser::IterationstatementContext::Do() {
  return getToken(CParser::Do, 0);
}

CParser::ExpressionContext* CParser::IterationstatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::IterationstatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::IterationstatementContext::For() {
  return getToken(CParser::For, 0);
}

CParser::ForinitstatementContext* CParser::IterationstatementContext::forinitstatement() {
  return getRuleContext<CParser::ForinitstatementContext>(0);
}

CParser::ForrangedeclarationContext* CParser::IterationstatementContext::forrangedeclaration() {
  return getRuleContext<CParser::ForrangedeclarationContext>(0);
}

tree::TerminalNode* CParser::IterationstatementContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::ForrangeinitializerContext* CParser::IterationstatementContext::forrangeinitializer() {
  return getRuleContext<CParser::ForrangeinitializerContext>(0);
}


size_t CParser::IterationstatementContext::getRuleIndex() const {
  return CParser::RuleIterationstatement;
}

void CParser::IterationstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationstatement(this);
}

void CParser::IterationstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationstatement(this);
}


antlrcpp::Any CParser::IterationstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIterationstatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::IterationstatementContext* CParser::iterationstatement() {
  IterationstatementContext *_localctx = _tracker.createInstance<IterationstatementContext>(_ctx, getState());
  enterRule(_localctx, 110, CParser::RuleIterationstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1132);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1097);
      match(CParser::While);
      setState(1098);
      match(CParser::LeftParen);
      setState(1099);
      condition();
      setState(1100);
      match(CParser::RightParen);
      setState(1101);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1103);
      match(CParser::Do);
      setState(1104);
      statement();
      setState(1105);
      match(CParser::While);
      setState(1106);
      match(CParser::LeftParen);
      setState(1107);
      expression(0);
      setState(1108);
      match(CParser::RightParen);
      setState(1109);
      match(CParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1111);
      match(CParser::For);
      setState(1112);
      match(CParser::LeftParen);
      setState(1113);
      forinitstatement();
      setState(1115);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::Alignas)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Class)
        | (1ULL << CParser::Const)
        | (1ULL << CParser::Constexpr)
        | (1ULL << CParser::Const_cast)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Delete)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Dynamic_cast)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::Explicit)
        | (1ULL << CParser::Extern)
        | (1ULL << CParser::False)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Friend)
        | (1ULL << CParser::Inline)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::Mutable)
        | (1ULL << CParser::New)
        | (1ULL << CParser::Noexcept)
        | (1ULL << CParser::Nullptr)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Register)
        | (1ULL << CParser::Reinterpret_cast)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof)
        | (1ULL << CParser::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
        | (1ULL << (CParser::Struct - 64))
        | (1ULL << (CParser::This - 64))
        | (1ULL << (CParser::Thread_local - 64))
        | (1ULL << (CParser::Throw - 64))
        | (1ULL << (CParser::True - 64))
        | (1ULL << (CParser::Typedef - 64))
        | (1ULL << (CParser::Typeid_ - 64))
        | (1ULL << (CParser::Typename_ - 64))
        | (1ULL << (CParser::Union - 64))
        | (1ULL << (CParser::Unsigned - 64))
        | (1ULL << (CParser::Virtual - 64))
        | (1ULL << (CParser::Void - 64))
        | (1ULL << (CParser::Volatile - 64))
        | (1ULL << (CParser::Wchar - 64))
        | (1ULL << (CParser::LeftParen - 64))
        | (1ULL << (CParser::LeftBracket - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
        | (1ULL << (CParser::Identifier - 128))
        | (1ULL << (CParser::Integerliteral - 128))
        | (1ULL << (CParser::Characterliteral - 128))
        | (1ULL << (CParser::Floatingliteral - 128))
        | (1ULL << (CParser::Stringliteral - 128))
        | (1ULL << (CParser::Userdefinedintegerliteral - 128))
        | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (CParser::Userdefinedstringliteral - 128))
        | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(1114);
        condition();
      }
      setState(1117);
      match(CParser::Semi);
      setState(1119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Const_cast)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Delete)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Dynamic_cast)
        | (1ULL << CParser::False)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::New)
        | (1ULL << CParser::Noexcept)
        | (1ULL << CParser::Nullptr)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Reinterpret_cast)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
        | (1ULL << (CParser::This - 64))
        | (1ULL << (CParser::Throw - 64))
        | (1ULL << (CParser::True - 64))
        | (1ULL << (CParser::Typeid_ - 64))
        | (1ULL << (CParser::Typename_ - 64))
        | (1ULL << (CParser::Unsigned - 64))
        | (1ULL << (CParser::Void - 64))
        | (1ULL << (CParser::Wchar - 64))
        | (1ULL << (CParser::LeftParen - 64))
        | (1ULL << (CParser::LeftBracket - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
        | (1ULL << (CParser::Identifier - 128))
        | (1ULL << (CParser::Integerliteral - 128))
        | (1ULL << (CParser::Characterliteral - 128))
        | (1ULL << (CParser::Floatingliteral - 128))
        | (1ULL << (CParser::Stringliteral - 128))
        | (1ULL << (CParser::Userdefinedintegerliteral - 128))
        | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (CParser::Userdefinedstringliteral - 128))
        | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(1118);
        expression(0);
      }
      setState(1121);
      match(CParser::RightParen);
      setState(1122);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1124);
      match(CParser::For);
      setState(1125);
      match(CParser::LeftParen);
      setState(1126);
      forrangedeclaration();
      setState(1127);
      match(CParser::Colon);
      setState(1128);
      forrangeinitializer();
      setState(1129);
      match(CParser::RightParen);
      setState(1130);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForinitstatementContext ------------------------------------------------------------------

CParser::ForinitstatementContext::ForinitstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ExpressionstatementContext* CParser::ForinitstatementContext::expressionstatement() {
  return getRuleContext<CParser::ExpressionstatementContext>(0);
}

CParser::SimpledeclarationContext* CParser::ForinitstatementContext::simpledeclaration() {
  return getRuleContext<CParser::SimpledeclarationContext>(0);
}


size_t CParser::ForinitstatementContext::getRuleIndex() const {
  return CParser::RuleForinitstatement;
}

void CParser::ForinitstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForinitstatement(this);
}

void CParser::ForinitstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForinitstatement(this);
}


antlrcpp::Any CParser::ForinitstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitForinitstatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::ForinitstatementContext* CParser::forinitstatement() {
  ForinitstatementContext *_localctx = _tracker.createInstance<ForinitstatementContext>(_ctx, getState());
  enterRule(_localctx, 112, CParser::RuleForinitstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1134);
      expressionstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1135);
      simpledeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForrangedeclarationContext ------------------------------------------------------------------

CParser::ForrangedeclarationContext::ForrangedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclspecifierseqContext* CParser::ForrangedeclarationContext::declspecifierseq() {
  return getRuleContext<CParser::DeclspecifierseqContext>(0);
}

CParser::DeclaratorContext* CParser::ForrangedeclarationContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::AttributespecifierseqContext* CParser::ForrangedeclarationContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}


size_t CParser::ForrangedeclarationContext::getRuleIndex() const {
  return CParser::RuleForrangedeclaration;
}

void CParser::ForrangedeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForrangedeclaration(this);
}

void CParser::ForrangedeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForrangedeclaration(this);
}


antlrcpp::Any CParser::ForrangedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitForrangedeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::ForrangedeclarationContext* CParser::forrangedeclaration() {
  ForrangedeclarationContext *_localctx = _tracker.createInstance<ForrangedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 114, CParser::RuleForrangedeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
      setState(1138);
      attributespecifierseq(0);
    }
    setState(1141);
    declspecifierseq();
    setState(1142);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForrangeinitializerContext ------------------------------------------------------------------

CParser::ForrangeinitializerContext::ForrangeinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ExpressionContext* CParser::ForrangeinitializerContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

CParser::BracedinitlistContext* CParser::ForrangeinitializerContext::bracedinitlist() {
  return getRuleContext<CParser::BracedinitlistContext>(0);
}


size_t CParser::ForrangeinitializerContext::getRuleIndex() const {
  return CParser::RuleForrangeinitializer;
}

void CParser::ForrangeinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForrangeinitializer(this);
}

void CParser::ForrangeinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForrangeinitializer(this);
}


antlrcpp::Any CParser::ForrangeinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitForrangeinitializer(this);
  else
    return visitor->visitChildren(this);
}

CParser::ForrangeinitializerContext* CParser::forrangeinitializer() {
  ForrangeinitializerContext *_localctx = _tracker.createInstance<ForrangeinitializerContext>(_ctx, getState());
  enterRule(_localctx, 116, CParser::RuleForrangeinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__1:
      case CParser::Alignof:
      case CParser::Auto:
      case CParser::Bool:
      case CParser::Char:
      case CParser::Char16:
      case CParser::Char32:
      case CParser::Const_cast:
      case CParser::Decltype:
      case CParser::Delete:
      case CParser::Double:
      case CParser::Dynamic_cast:
      case CParser::False:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::New:
      case CParser::Noexcept:
      case CParser::Nullptr:
      case CParser::Operator:
      case CParser::Reinterpret_cast:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Sizeof:
      case CParser::Static_cast:
      case CParser::This:
      case CParser::Throw:
      case CParser::True:
      case CParser::Typeid_:
      case CParser::Typename_:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Wchar:
      case CParser::LeftParen:
      case CParser::LeftBracket:
      case CParser::Plus:
      case CParser::Minus:
      case CParser::Star:
      case CParser::And:
      case CParser::Or:
      case CParser::Tilde:
      case CParser::PlusPlus:
      case CParser::MinusMinus:
      case CParser::Doublecolon:
      case CParser::Identifier:
      case CParser::Integerliteral:
      case CParser::Characterliteral:
      case CParser::Floatingliteral:
      case CParser::Stringliteral:
      case CParser::Userdefinedintegerliteral:
      case CParser::Userdefinedfloatingliteral:
      case CParser::Userdefinedstringliteral:
      case CParser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(1144);
        expression(0);
        break;
      }

      case CParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1145);
        bracedinitlist();
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

//----------------- JumpstatementContext ------------------------------------------------------------------

CParser::JumpstatementContext::JumpstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::JumpstatementContext::Break() {
  return getToken(CParser::Break, 0);
}

tree::TerminalNode* CParser::JumpstatementContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::JumpstatementContext::Continue() {
  return getToken(CParser::Continue, 0);
}

tree::TerminalNode* CParser::JumpstatementContext::Return() {
  return getToken(CParser::Return, 0);
}

CParser::ExpressionContext* CParser::JumpstatementContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

CParser::BracedinitlistContext* CParser::JumpstatementContext::bracedinitlist() {
  return getRuleContext<CParser::BracedinitlistContext>(0);
}

tree::TerminalNode* CParser::JumpstatementContext::Goto() {
  return getToken(CParser::Goto, 0);
}

tree::TerminalNode* CParser::JumpstatementContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::JumpstatementContext::getRuleIndex() const {
  return CParser::RuleJumpstatement;
}

void CParser::JumpstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpstatement(this);
}

void CParser::JumpstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpstatement(this);
}


antlrcpp::Any CParser::JumpstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitJumpstatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::JumpstatementContext* CParser::jumpstatement() {
  JumpstatementContext *_localctx = _tracker.createInstance<JumpstatementContext>(_ctx, getState());
  enterRule(_localctx, 118, CParser::RuleJumpstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1148);
      match(CParser::Break);
      setState(1149);
      match(CParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1150);
      match(CParser::Continue);
      setState(1151);
      match(CParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1152);
      match(CParser::Return);
      setState(1154);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Const_cast)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Delete)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Dynamic_cast)
        | (1ULL << CParser::False)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::New)
        | (1ULL << CParser::Noexcept)
        | (1ULL << CParser::Nullptr)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Reinterpret_cast)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
        | (1ULL << (CParser::This - 64))
        | (1ULL << (CParser::Throw - 64))
        | (1ULL << (CParser::True - 64))
        | (1ULL << (CParser::Typeid_ - 64))
        | (1ULL << (CParser::Typename_ - 64))
        | (1ULL << (CParser::Unsigned - 64))
        | (1ULL << (CParser::Void - 64))
        | (1ULL << (CParser::Wchar - 64))
        | (1ULL << (CParser::LeftParen - 64))
        | (1ULL << (CParser::LeftBracket - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
        | (1ULL << (CParser::Identifier - 128))
        | (1ULL << (CParser::Integerliteral - 128))
        | (1ULL << (CParser::Characterliteral - 128))
        | (1ULL << (CParser::Floatingliteral - 128))
        | (1ULL << (CParser::Stringliteral - 128))
        | (1ULL << (CParser::Userdefinedintegerliteral - 128))
        | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (CParser::Userdefinedstringliteral - 128))
        | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(1153);
        expression(0);
      }
      setState(1156);
      match(CParser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1157);
      match(CParser::Return);
      setState(1158);
      bracedinitlist();
      setState(1159);
      match(CParser::Semi);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1161);
      match(CParser::Goto);
      setState(1162);
      match(CParser::Identifier);
      setState(1163);
      match(CParser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationstatementContext ------------------------------------------------------------------

CParser::DeclarationstatementContext::DeclarationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::BlockdeclarationContext* CParser::DeclarationstatementContext::blockdeclaration() {
  return getRuleContext<CParser::BlockdeclarationContext>(0);
}


size_t CParser::DeclarationstatementContext::getRuleIndex() const {
  return CParser::RuleDeclarationstatement;
}

void CParser::DeclarationstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationstatement(this);
}

void CParser::DeclarationstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationstatement(this);
}


antlrcpp::Any CParser::DeclarationstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarationstatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationstatementContext* CParser::declarationstatement() {
  DeclarationstatementContext *_localctx = _tracker.createInstance<DeclarationstatementContext>(_ctx, getState());
  enterRule(_localctx, 120, CParser::RuleDeclarationstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1166);
    blockdeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationseqContext ------------------------------------------------------------------

CParser::DeclarationseqContext::DeclarationseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclarationContext* CParser::DeclarationseqContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}

CParser::DeclarationseqContext* CParser::DeclarationseqContext::declarationseq() {
  return getRuleContext<CParser::DeclarationseqContext>(0);
}


size_t CParser::DeclarationseqContext::getRuleIndex() const {
  return CParser::RuleDeclarationseq;
}

void CParser::DeclarationseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationseq(this);
}

void CParser::DeclarationseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationseq(this);
}


antlrcpp::Any CParser::DeclarationseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarationseq(this);
  else
    return visitor->visitChildren(this);
}


CParser::DeclarationseqContext* CParser::declarationseq() {
   return declarationseq(0);
}

CParser::DeclarationseqContext* CParser::declarationseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::DeclarationseqContext *_localctx = _tracker.createInstance<DeclarationseqContext>(_ctx, parentState);
  CParser::DeclarationseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 122;
  enterRecursionRule(_localctx, 122, CParser::RuleDeclarationseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1169);
    declaration();
    _ctx->stop = _input->LT(-1);
    setState(1175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclarationseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclarationseq);
        setState(1171);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1172);
        declaration(); 
      }
      setState(1177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::BlockdeclarationContext* CParser::DeclarationContext::blockdeclaration() {
  return getRuleContext<CParser::BlockdeclarationContext>(0);
}

CParser::FunctiondefinitionContext* CParser::DeclarationContext::functiondefinition() {
  return getRuleContext<CParser::FunctiondefinitionContext>(0);
}

CParser::TemplatedeclarationContext* CParser::DeclarationContext::templatedeclaration() {
  return getRuleContext<CParser::TemplatedeclarationContext>(0);
}

CParser::ExplicitinstantiationContext* CParser::DeclarationContext::explicitinstantiation() {
  return getRuleContext<CParser::ExplicitinstantiationContext>(0);
}

CParser::ExplicitspecializationContext* CParser::DeclarationContext::explicitspecialization() {
  return getRuleContext<CParser::ExplicitspecializationContext>(0);
}

CParser::LinkagespecificationContext* CParser::DeclarationContext::linkagespecification() {
  return getRuleContext<CParser::LinkagespecificationContext>(0);
}

CParser::NamespacedefinitionContext* CParser::DeclarationContext::namespacedefinition() {
  return getRuleContext<CParser::NamespacedefinitionContext>(0);
}

CParser::EmptydeclarationContext* CParser::DeclarationContext::emptydeclaration() {
  return getRuleContext<CParser::EmptydeclarationContext>(0);
}

CParser::AttributedeclarationContext* CParser::DeclarationContext::attributedeclaration() {
  return getRuleContext<CParser::AttributedeclarationContext>(0);
}


size_t CParser::DeclarationContext::getRuleIndex() const {
  return CParser::RuleDeclaration;
}

void CParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any CParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationContext* CParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 124, CParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1178);
      blockdeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1179);
      functiondefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1180);
      templatedeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1181);
      explicitinstantiation();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1182);
      explicitspecialization();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1183);
      linkagespecification();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1184);
      namespacedefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1185);
      emptydeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1186);
      attributedeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockdeclarationContext ------------------------------------------------------------------

CParser::BlockdeclarationContext::BlockdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::SimpledeclarationContext* CParser::BlockdeclarationContext::simpledeclaration() {
  return getRuleContext<CParser::SimpledeclarationContext>(0);
}

CParser::AsmdefinitionContext* CParser::BlockdeclarationContext::asmdefinition() {
  return getRuleContext<CParser::AsmdefinitionContext>(0);
}

CParser::NamespacealiasdefinitionContext* CParser::BlockdeclarationContext::namespacealiasdefinition() {
  return getRuleContext<CParser::NamespacealiasdefinitionContext>(0);
}

CParser::UsingdeclarationContext* CParser::BlockdeclarationContext::usingdeclaration() {
  return getRuleContext<CParser::UsingdeclarationContext>(0);
}

CParser::UsingdirectiveContext* CParser::BlockdeclarationContext::usingdirective() {
  return getRuleContext<CParser::UsingdirectiveContext>(0);
}

CParser::Static_assertdeclarationContext* CParser::BlockdeclarationContext::static_assertdeclaration() {
  return getRuleContext<CParser::Static_assertdeclarationContext>(0);
}

CParser::AliasdeclarationContext* CParser::BlockdeclarationContext::aliasdeclaration() {
  return getRuleContext<CParser::AliasdeclarationContext>(0);
}

CParser::OpaqueenumdeclarationContext* CParser::BlockdeclarationContext::opaqueenumdeclaration() {
  return getRuleContext<CParser::OpaqueenumdeclarationContext>(0);
}


size_t CParser::BlockdeclarationContext::getRuleIndex() const {
  return CParser::RuleBlockdeclaration;
}

void CParser::BlockdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockdeclaration(this);
}

void CParser::BlockdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockdeclaration(this);
}


antlrcpp::Any CParser::BlockdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBlockdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::BlockdeclarationContext* CParser::blockdeclaration() {
  BlockdeclarationContext *_localctx = _tracker.createInstance<BlockdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 126, CParser::RuleBlockdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1189);
      simpledeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1190);
      asmdefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1191);
      namespacealiasdefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1192);
      usingdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1193);
      usingdirective();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1194);
      static_assertdeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1195);
      aliasdeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1196);
      opaqueenumdeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasdeclarationContext ------------------------------------------------------------------

CParser::AliasdeclarationContext::AliasdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AliasdeclarationContext::Using() {
  return getToken(CParser::Using, 0);
}

tree::TerminalNode* CParser::AliasdeclarationContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::AliasdeclarationContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::ThetypeidContext* CParser::AliasdeclarationContext::thetypeid() {
  return getRuleContext<CParser::ThetypeidContext>(0);
}

tree::TerminalNode* CParser::AliasdeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::AttributespecifierseqContext* CParser::AliasdeclarationContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}


size_t CParser::AliasdeclarationContext::getRuleIndex() const {
  return CParser::RuleAliasdeclaration;
}

void CParser::AliasdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasdeclaration(this);
}

void CParser::AliasdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasdeclaration(this);
}


antlrcpp::Any CParser::AliasdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAliasdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::AliasdeclarationContext* CParser::aliasdeclaration() {
  AliasdeclarationContext *_localctx = _tracker.createInstance<AliasdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 128, CParser::RuleAliasdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1199);
    match(CParser::Using);
    setState(1200);
    match(CParser::Identifier);
    setState(1202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
      setState(1201);
      attributespecifierseq(0);
    }
    setState(1204);
    match(CParser::Assign);
    setState(1205);
    thetypeid();
    setState(1206);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpledeclarationContext ------------------------------------------------------------------

CParser::SimpledeclarationContext::SimpledeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::SimpledeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::DeclspecifierseqContext* CParser::SimpledeclarationContext::declspecifierseq() {
  return getRuleContext<CParser::DeclspecifierseqContext>(0);
}

CParser::InitdeclaratorlistContext* CParser::SimpledeclarationContext::initdeclaratorlist() {
  return getRuleContext<CParser::InitdeclaratorlistContext>(0);
}

CParser::AttributespecifierseqContext* CParser::SimpledeclarationContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}


size_t CParser::SimpledeclarationContext::getRuleIndex() const {
  return CParser::RuleSimpledeclaration;
}

void CParser::SimpledeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpledeclaration(this);
}

void CParser::SimpledeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpledeclaration(this);
}


antlrcpp::Any CParser::SimpledeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSimpledeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::SimpledeclarationContext* CParser::simpledeclaration() {
  SimpledeclarationContext *_localctx = _tracker.createInstance<SimpledeclarationContext>(_ctx, getState());
  enterRule(_localctx, 130, CParser::RuleSimpledeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1222);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__2:
      case CParser::Auto:
      case CParser::Bool:
      case CParser::Char:
      case CParser::Char16:
      case CParser::Char32:
      case CParser::Class:
      case CParser::Const:
      case CParser::Constexpr:
      case CParser::Decltype:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Explicit:
      case CParser::Extern:
      case CParser::Float:
      case CParser::Friend:
      case CParser::Inline:
      case CParser::Int:
      case CParser::Long:
      case CParser::Mutable:
      case CParser::Operator:
      case CParser::Register:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Static:
      case CParser::Struct:
      case CParser::Thread_local:
      case CParser::Typedef:
      case CParser::Typename_:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Virtual:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Wchar:
      case CParser::LeftParen:
      case CParser::Star:
      case CParser::And:
      case CParser::Tilde:
      case CParser::Doublecolon:
      case CParser::Semi:
      case CParser::Ellipsis:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1209);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
        case 1: {
          setState(1208);
          declspecifierseq();
          break;
        }

        }
        setState(1212);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__2)
          | (1ULL << CParser::Decltype)
          | (1ULL << CParser::Operator))) != 0) || ((((_la - 84) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 84)) & ((1ULL << (CParser::LeftParen - 84))
          | (1ULL << (CParser::Star - 84))
          | (1ULL << (CParser::And - 84))
          | (1ULL << (CParser::Tilde - 84))
          | (1ULL << (CParser::Doublecolon - 84))
          | (1ULL << (CParser::Ellipsis - 84))
          | (1ULL << (CParser::Identifier - 84)))) != 0)) {
          setState(1211);
          initdeclaratorlist(0);
        }
        setState(1214);
        match(CParser::Semi);
        break;
      }

      case CParser::Alignas:
      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1215);
        attributespecifierseq(0);
        setState(1217);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
        case 1: {
          setState(1216);
          declspecifierseq();
          break;
        }

        }
        setState(1219);
        initdeclaratorlist(0);
        setState(1220);
        match(CParser::Semi);
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

//----------------- Static_assertdeclarationContext ------------------------------------------------------------------

CParser::Static_assertdeclarationContext::Static_assertdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::Static_assertdeclarationContext::Static_assert() {
  return getToken(CParser::Static_assert, 0);
}

tree::TerminalNode* CParser::Static_assertdeclarationContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ConstantexpressionContext* CParser::Static_assertdeclarationContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* CParser::Static_assertdeclarationContext::Comma() {
  return getToken(CParser::Comma, 0);
}

tree::TerminalNode* CParser::Static_assertdeclarationContext::Stringliteral() {
  return getToken(CParser::Stringliteral, 0);
}

tree::TerminalNode* CParser::Static_assertdeclarationContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::Static_assertdeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}


size_t CParser::Static_assertdeclarationContext::getRuleIndex() const {
  return CParser::RuleStatic_assertdeclaration;
}

void CParser::Static_assertdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatic_assertdeclaration(this);
}

void CParser::Static_assertdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatic_assertdeclaration(this);
}


antlrcpp::Any CParser::Static_assertdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStatic_assertdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::Static_assertdeclarationContext* CParser::static_assertdeclaration() {
  Static_assertdeclarationContext *_localctx = _tracker.createInstance<Static_assertdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 132, CParser::RuleStatic_assertdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1224);
    match(CParser::Static_assert);
    setState(1225);
    match(CParser::LeftParen);
    setState(1226);
    constantexpression();
    setState(1227);
    match(CParser::Comma);
    setState(1228);
    match(CParser::Stringliteral);
    setState(1229);
    match(CParser::RightParen);
    setState(1230);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptydeclarationContext ------------------------------------------------------------------

CParser::EmptydeclarationContext::EmptydeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::EmptydeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}


size_t CParser::EmptydeclarationContext::getRuleIndex() const {
  return CParser::RuleEmptydeclaration;
}

void CParser::EmptydeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptydeclaration(this);
}

void CParser::EmptydeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptydeclaration(this);
}


antlrcpp::Any CParser::EmptydeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEmptydeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::EmptydeclarationContext* CParser::emptydeclaration() {
  EmptydeclarationContext *_localctx = _tracker.createInstance<EmptydeclarationContext>(_ctx, getState());
  enterRule(_localctx, 134, CParser::RuleEmptydeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1232);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributedeclarationContext ------------------------------------------------------------------

CParser::AttributedeclarationContext::AttributedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AttributespecifierseqContext* CParser::AttributedeclarationContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CParser::AttributedeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}


size_t CParser::AttributedeclarationContext::getRuleIndex() const {
  return CParser::RuleAttributedeclaration;
}

void CParser::AttributedeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributedeclaration(this);
}

void CParser::AttributedeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributedeclaration(this);
}


antlrcpp::Any CParser::AttributedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAttributedeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::AttributedeclarationContext* CParser::attributedeclaration() {
  AttributedeclarationContext *_localctx = _tracker.createInstance<AttributedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 136, CParser::RuleAttributedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1234);
    attributespecifierseq(0);
    setState(1235);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclspecifierContext ------------------------------------------------------------------

CParser::DeclspecifierContext::DeclspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::StorageclassspecifierContext* CParser::DeclspecifierContext::storageclassspecifier() {
  return getRuleContext<CParser::StorageclassspecifierContext>(0);
}

CParser::TypespecifierContext* CParser::DeclspecifierContext::typespecifier() {
  return getRuleContext<CParser::TypespecifierContext>(0);
}

CParser::FunctionspecifierContext* CParser::DeclspecifierContext::functionspecifier() {
  return getRuleContext<CParser::FunctionspecifierContext>(0);
}

tree::TerminalNode* CParser::DeclspecifierContext::Friend() {
  return getToken(CParser::Friend, 0);
}

tree::TerminalNode* CParser::DeclspecifierContext::Typedef() {
  return getToken(CParser::Typedef, 0);
}

tree::TerminalNode* CParser::DeclspecifierContext::Constexpr() {
  return getToken(CParser::Constexpr, 0);
}


size_t CParser::DeclspecifierContext::getRuleIndex() const {
  return CParser::RuleDeclspecifier;
}

void CParser::DeclspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclspecifier(this);
}

void CParser::DeclspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclspecifier(this);
}


antlrcpp::Any CParser::DeclspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclspecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclspecifierContext* CParser::declspecifier() {
  DeclspecifierContext *_localctx = _tracker.createInstance<DeclspecifierContext>(_ctx, getState());
  enterRule(_localctx, 138, CParser::RuleDeclspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Extern:
      case CParser::Mutable:
      case CParser::Register:
      case CParser::Static:
      case CParser::Thread_local: {
        enterOuterAlt(_localctx, 1);
        setState(1237);
        storageclassspecifier();
        break;
      }

      case CParser::Auto:
      case CParser::Bool:
      case CParser::Char:
      case CParser::Char16:
      case CParser::Char32:
      case CParser::Class:
      case CParser::Const:
      case CParser::Decltype:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Struct:
      case CParser::Typename_:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Wchar:
      case CParser::Doublecolon:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1238);
        typespecifier();
        break;
      }

      case CParser::Explicit:
      case CParser::Inline:
      case CParser::Virtual: {
        enterOuterAlt(_localctx, 3);
        setState(1239);
        functionspecifier();
        break;
      }

      case CParser::Friend: {
        enterOuterAlt(_localctx, 4);
        setState(1240);
        match(CParser::Friend);
        break;
      }

      case CParser::Typedef: {
        enterOuterAlt(_localctx, 5);
        setState(1241);
        match(CParser::Typedef);
        break;
      }

      case CParser::Constexpr: {
        enterOuterAlt(_localctx, 6);
        setState(1242);
        match(CParser::Constexpr);
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

//----------------- DeclspecifierseqContext ------------------------------------------------------------------

CParser::DeclspecifierseqContext::DeclspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclspecifierContext* CParser::DeclspecifierseqContext::declspecifier() {
  return getRuleContext<CParser::DeclspecifierContext>(0);
}

CParser::AttributespecifierseqContext* CParser::DeclspecifierseqContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::DeclspecifierseqContext* CParser::DeclspecifierseqContext::declspecifierseq() {
  return getRuleContext<CParser::DeclspecifierseqContext>(0);
}


size_t CParser::DeclspecifierseqContext::getRuleIndex() const {
  return CParser::RuleDeclspecifierseq;
}

void CParser::DeclspecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclspecifierseq(this);
}

void CParser::DeclspecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclspecifierseq(this);
}


antlrcpp::Any CParser::DeclspecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclspecifierseq(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclspecifierseqContext* CParser::declspecifierseq() {
  DeclspecifierseqContext *_localctx = _tracker.createInstance<DeclspecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 140, CParser::RuleDeclspecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1245);
      declspecifier();
      setState(1247);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
      case 1: {
        setState(1246);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1249);
      declspecifier();
      setState(1250);
      declspecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageclassspecifierContext ------------------------------------------------------------------

CParser::StorageclassspecifierContext::StorageclassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::StorageclassspecifierContext::Register() {
  return getToken(CParser::Register, 0);
}

tree::TerminalNode* CParser::StorageclassspecifierContext::Static() {
  return getToken(CParser::Static, 0);
}

tree::TerminalNode* CParser::StorageclassspecifierContext::Thread_local() {
  return getToken(CParser::Thread_local, 0);
}

tree::TerminalNode* CParser::StorageclassspecifierContext::Extern() {
  return getToken(CParser::Extern, 0);
}

tree::TerminalNode* CParser::StorageclassspecifierContext::Mutable() {
  return getToken(CParser::Mutable, 0);
}


size_t CParser::StorageclassspecifierContext::getRuleIndex() const {
  return CParser::RuleStorageclassspecifier;
}

void CParser::StorageclassspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageclassspecifier(this);
}

void CParser::StorageclassspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageclassspecifier(this);
}


antlrcpp::Any CParser::StorageclassspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStorageclassspecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::StorageclassspecifierContext* CParser::storageclassspecifier() {
  StorageclassspecifierContext *_localctx = _tracker.createInstance<StorageclassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 142, CParser::RuleStorageclassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1254);
    _la = _input->LA(1);
    if (!(((((_la - 35) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 35)) & ((1ULL << (CParser::Extern - 35))
      | (1ULL << (CParser::Mutable - 35))
      | (1ULL << (CParser::Register - 35))
      | (1ULL << (CParser::Static - 35))
      | (1ULL << (CParser::Thread_local - 35)))) != 0))) {
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

//----------------- FunctionspecifierContext ------------------------------------------------------------------

CParser::FunctionspecifierContext::FunctionspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::FunctionspecifierContext::Inline() {
  return getToken(CParser::Inline, 0);
}

tree::TerminalNode* CParser::FunctionspecifierContext::Virtual() {
  return getToken(CParser::Virtual, 0);
}

tree::TerminalNode* CParser::FunctionspecifierContext::Explicit() {
  return getToken(CParser::Explicit, 0);
}


size_t CParser::FunctionspecifierContext::getRuleIndex() const {
  return CParser::RuleFunctionspecifier;
}

void CParser::FunctionspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionspecifier(this);
}

void CParser::FunctionspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionspecifier(this);
}


antlrcpp::Any CParser::FunctionspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunctionspecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::FunctionspecifierContext* CParser::functionspecifier() {
  FunctionspecifierContext *_localctx = _tracker.createInstance<FunctionspecifierContext>(_ctx, getState());
  enterRule(_localctx, 144, CParser::RuleFunctionspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1256);
    _la = _input->LA(1);
    if (!(((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & ((1ULL << (CParser::Explicit - 33))
      | (1ULL << (CParser::Inline - 33))
      | (1ULL << (CParser::Virtual - 33)))) != 0))) {
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

//----------------- TypedefnameContext ------------------------------------------------------------------

CParser::TypedefnameContext::TypedefnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypedefnameContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::TypedefnameContext::getRuleIndex() const {
  return CParser::RuleTypedefname;
}

void CParser::TypedefnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefname(this);
}

void CParser::TypedefnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefname(this);
}


antlrcpp::Any CParser::TypedefnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypedefname(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypedefnameContext* CParser::typedefname() {
  TypedefnameContext *_localctx = _tracker.createInstance<TypedefnameContext>(_ctx, getState());
  enterRule(_localctx, 146, CParser::RuleTypedefname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1258);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypespecifierContext ------------------------------------------------------------------

CParser::TypespecifierContext::TypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TrailingtypespecifierContext* CParser::TypespecifierContext::trailingtypespecifier() {
  return getRuleContext<CParser::TrailingtypespecifierContext>(0);
}

CParser::ClassspecifierContext* CParser::TypespecifierContext::classspecifier() {
  return getRuleContext<CParser::ClassspecifierContext>(0);
}

CParser::EnumspecifierContext* CParser::TypespecifierContext::enumspecifier() {
  return getRuleContext<CParser::EnumspecifierContext>(0);
}


size_t CParser::TypespecifierContext::getRuleIndex() const {
  return CParser::RuleTypespecifier;
}

void CParser::TypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypespecifier(this);
}

void CParser::TypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypespecifier(this);
}


antlrcpp::Any CParser::TypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypespecifierContext* CParser::typespecifier() {
  TypespecifierContext *_localctx = _tracker.createInstance<TypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 148, CParser::RuleTypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1263);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1260);
      trailingtypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1261);
      classspecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1262);
      enumspecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierContext ------------------------------------------------------------------

CParser::TrailingtypespecifierContext::TrailingtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::SimpletypespecifierContext* CParser::TrailingtypespecifierContext::simpletypespecifier() {
  return getRuleContext<CParser::SimpletypespecifierContext>(0);
}

CParser::ElaboratedtypespecifierContext* CParser::TrailingtypespecifierContext::elaboratedtypespecifier() {
  return getRuleContext<CParser::ElaboratedtypespecifierContext>(0);
}

CParser::TypenamespecifierContext* CParser::TrailingtypespecifierContext::typenamespecifier() {
  return getRuleContext<CParser::TypenamespecifierContext>(0);
}

CParser::CvqualifierContext* CParser::TrailingtypespecifierContext::cvqualifier() {
  return getRuleContext<CParser::CvqualifierContext>(0);
}


size_t CParser::TrailingtypespecifierContext::getRuleIndex() const {
  return CParser::RuleTrailingtypespecifier;
}

void CParser::TrailingtypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingtypespecifier(this);
}

void CParser::TrailingtypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingtypespecifier(this);
}


antlrcpp::Any CParser::TrailingtypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTrailingtypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::TrailingtypespecifierContext* CParser::trailingtypespecifier() {
  TrailingtypespecifierContext *_localctx = _tracker.createInstance<TrailingtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 150, CParser::RuleTrailingtypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1269);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Auto:
      case CParser::Bool:
      case CParser::Char:
      case CParser::Char16:
      case CParser::Char32:
      case CParser::Decltype:
      case CParser::Double:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Wchar:
      case CParser::Doublecolon:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1265);
        simpletypespecifier();
        break;
      }

      case CParser::Class:
      case CParser::Enum:
      case CParser::Struct:
      case CParser::Union: {
        enterOuterAlt(_localctx, 2);
        setState(1266);
        elaboratedtypespecifier();
        break;
      }

      case CParser::Typename_: {
        enterOuterAlt(_localctx, 3);
        setState(1267);
        typenamespecifier();
        break;
      }

      case CParser::Const:
      case CParser::Volatile: {
        enterOuterAlt(_localctx, 4);
        setState(1268);
        cvqualifier();
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

//----------------- TypespecifierseqContext ------------------------------------------------------------------

CParser::TypespecifierseqContext::TypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TypespecifierContext* CParser::TypespecifierseqContext::typespecifier() {
  return getRuleContext<CParser::TypespecifierContext>(0);
}

CParser::AttributespecifierseqContext* CParser::TypespecifierseqContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::TypespecifierseqContext* CParser::TypespecifierseqContext::typespecifierseq() {
  return getRuleContext<CParser::TypespecifierseqContext>(0);
}


size_t CParser::TypespecifierseqContext::getRuleIndex() const {
  return CParser::RuleTypespecifierseq;
}

void CParser::TypespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypespecifierseq(this);
}

void CParser::TypespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypespecifierseq(this);
}


antlrcpp::Any CParser::TypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypespecifierseq(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypespecifierseqContext* CParser::typespecifierseq() {
  TypespecifierseqContext *_localctx = _tracker.createInstance<TypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 152, CParser::RuleTypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1278);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1271);
      typespecifier();
      setState(1273);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
      case 1: {
        setState(1272);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1275);
      typespecifier();
      setState(1276);
      typespecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierseqContext ------------------------------------------------------------------

CParser::TrailingtypespecifierseqContext::TrailingtypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TrailingtypespecifierContext* CParser::TrailingtypespecifierseqContext::trailingtypespecifier() {
  return getRuleContext<CParser::TrailingtypespecifierContext>(0);
}

CParser::AttributespecifierseqContext* CParser::TrailingtypespecifierseqContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::TrailingtypespecifierseqContext* CParser::TrailingtypespecifierseqContext::trailingtypespecifierseq() {
  return getRuleContext<CParser::TrailingtypespecifierseqContext>(0);
}


size_t CParser::TrailingtypespecifierseqContext::getRuleIndex() const {
  return CParser::RuleTrailingtypespecifierseq;
}

void CParser::TrailingtypespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingtypespecifierseq(this);
}

void CParser::TrailingtypespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingtypespecifierseq(this);
}


antlrcpp::Any CParser::TrailingtypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTrailingtypespecifierseq(this);
  else
    return visitor->visitChildren(this);
}

CParser::TrailingtypespecifierseqContext* CParser::trailingtypespecifierseq() {
  TrailingtypespecifierseqContext *_localctx = _tracker.createInstance<TrailingtypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 154, CParser::RuleTrailingtypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1287);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1280);
      trailingtypespecifier();
      setState(1282);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
      case 1: {
        setState(1281);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1284);
      trailingtypespecifier();
      setState(1285);
      trailingtypespecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletypespecifierContext ------------------------------------------------------------------

CParser::SimpletypespecifierContext::SimpletypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ThetypenameContext* CParser::SimpletypespecifierContext::thetypename() {
  return getRuleContext<CParser::ThetypenameContext>(0);
}

CParser::NestednamespecifierContext* CParser::SimpletypespecifierContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Template() {
  return getToken(CParser::Template, 0);
}

CParser::SimpletemplateidContext* CParser::SimpletypespecifierContext::simpletemplateid() {
  return getRuleContext<CParser::SimpletemplateidContext>(0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Char() {
  return getToken(CParser::Char, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Char16() {
  return getToken(CParser::Char16, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Char32() {
  return getToken(CParser::Char32, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Wchar() {
  return getToken(CParser::Wchar, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Bool() {
  return getToken(CParser::Bool, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Short() {
  return getToken(CParser::Short, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Int() {
  return getToken(CParser::Int, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Long() {
  return getToken(CParser::Long, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Signed() {
  return getToken(CParser::Signed, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Unsigned() {
  return getToken(CParser::Unsigned, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Float() {
  return getToken(CParser::Float, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Double() {
  return getToken(CParser::Double, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Void() {
  return getToken(CParser::Void, 0);
}

tree::TerminalNode* CParser::SimpletypespecifierContext::Auto() {
  return getToken(CParser::Auto, 0);
}

CParser::DecltypespecifierContext* CParser::SimpletypespecifierContext::decltypespecifier() {
  return getRuleContext<CParser::DecltypespecifierContext>(0);
}


size_t CParser::SimpletypespecifierContext::getRuleIndex() const {
  return CParser::RuleSimpletypespecifier;
}

void CParser::SimpletypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpletypespecifier(this);
}

void CParser::SimpletypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpletypespecifier(this);
}


antlrcpp::Any CParser::SimpletypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSimpletypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::SimpletypespecifierContext* CParser::simpletypespecifier() {
  SimpletypespecifierContext *_localctx = _tracker.createInstance<SimpletypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 156, CParser::RuleSimpletypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1312);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1290);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
      case 1: {
        setState(1289);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1292);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1293);
      nestednamespecifier(0);
      setState(1294);
      match(CParser::Template);
      setState(1295);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1297);
      match(CParser::Char);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1298);
      match(CParser::Char16);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1299);
      match(CParser::Char32);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1300);
      match(CParser::Wchar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1301);
      match(CParser::Bool);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1302);
      match(CParser::Short);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1303);
      match(CParser::Int);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1304);
      match(CParser::Long);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1305);
      match(CParser::Signed);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1306);
      match(CParser::Unsigned);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1307);
      match(CParser::Float);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1308);
      match(CParser::Double);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1309);
      match(CParser::Void);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1310);
      match(CParser::Auto);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1311);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypenameContext ------------------------------------------------------------------

CParser::ThetypenameContext::ThetypenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ClassnameContext* CParser::ThetypenameContext::classname() {
  return getRuleContext<CParser::ClassnameContext>(0);
}

CParser::EnumnameContext* CParser::ThetypenameContext::enumname() {
  return getRuleContext<CParser::EnumnameContext>(0);
}

CParser::TypedefnameContext* CParser::ThetypenameContext::typedefname() {
  return getRuleContext<CParser::TypedefnameContext>(0);
}

CParser::SimpletemplateidContext* CParser::ThetypenameContext::simpletemplateid() {
  return getRuleContext<CParser::SimpletemplateidContext>(0);
}


size_t CParser::ThetypenameContext::getRuleIndex() const {
  return CParser::RuleThetypename;
}

void CParser::ThetypenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThetypename(this);
}

void CParser::ThetypenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThetypename(this);
}


antlrcpp::Any CParser::ThetypenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitThetypename(this);
  else
    return visitor->visitChildren(this);
}

CParser::ThetypenameContext* CParser::thetypename() {
  ThetypenameContext *_localctx = _tracker.createInstance<ThetypenameContext>(_ctx, getState());
  enterRule(_localctx, 158, CParser::RuleThetypename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1318);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1314);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1315);
      enumname();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1316);
      typedefname();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1317);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecltypespecifierContext ------------------------------------------------------------------

CParser::DecltypespecifierContext::DecltypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::DecltypespecifierContext::Decltype() {
  return getToken(CParser::Decltype, 0);
}

tree::TerminalNode* CParser::DecltypespecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionContext* CParser::DecltypespecifierContext::expression() {
  return getRuleContext<CParser::ExpressionContext>(0);
}

tree::TerminalNode* CParser::DecltypespecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::DecltypespecifierContext::Auto() {
  return getToken(CParser::Auto, 0);
}


size_t CParser::DecltypespecifierContext::getRuleIndex() const {
  return CParser::RuleDecltypespecifier;
}

void CParser::DecltypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecltypespecifier(this);
}

void CParser::DecltypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecltypespecifier(this);
}


antlrcpp::Any CParser::DecltypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDecltypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::DecltypespecifierContext* CParser::decltypespecifier() {
  DecltypespecifierContext *_localctx = _tracker.createInstance<DecltypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 160, CParser::RuleDecltypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1320);
      match(CParser::Decltype);
      setState(1321);
      match(CParser::LeftParen);
      setState(1322);
      expression(0);
      setState(1323);
      match(CParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1325);
      match(CParser::Decltype);
      setState(1326);
      match(CParser::LeftParen);
      setState(1327);
      match(CParser::Auto);
      setState(1328);
      match(CParser::RightParen);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElaboratedtypespecifierContext ------------------------------------------------------------------

CParser::ElaboratedtypespecifierContext::ElaboratedtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ClasskeyContext* CParser::ElaboratedtypespecifierContext::classkey() {
  return getRuleContext<CParser::ClasskeyContext>(0);
}

tree::TerminalNode* CParser::ElaboratedtypespecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::AttributespecifierseqContext* CParser::ElaboratedtypespecifierContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::NestednamespecifierContext* CParser::ElaboratedtypespecifierContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}

CParser::SimpletemplateidContext* CParser::ElaboratedtypespecifierContext::simpletemplateid() {
  return getRuleContext<CParser::SimpletemplateidContext>(0);
}

tree::TerminalNode* CParser::ElaboratedtypespecifierContext::Template() {
  return getToken(CParser::Template, 0);
}

tree::TerminalNode* CParser::ElaboratedtypespecifierContext::Enum() {
  return getToken(CParser::Enum, 0);
}


size_t CParser::ElaboratedtypespecifierContext::getRuleIndex() const {
  return CParser::RuleElaboratedtypespecifier;
}

void CParser::ElaboratedtypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElaboratedtypespecifier(this);
}

void CParser::ElaboratedtypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElaboratedtypespecifier(this);
}


antlrcpp::Any CParser::ElaboratedtypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitElaboratedtypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::ElaboratedtypespecifierContext* CParser::elaboratedtypespecifier() {
  ElaboratedtypespecifierContext *_localctx = _tracker.createInstance<ElaboratedtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 162, CParser::RuleElaboratedtypespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1355);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1331);
      classkey();
      setState(1333);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1332);
        attributespecifierseq(0);
      }
      setState(1336);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
      case 1: {
        setState(1335);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1338);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1340);
      classkey();
      setState(1341);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1343);
      classkey();
      setState(1344);
      nestednamespecifier(0);
      setState(1346);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Template) {
        setState(1345);
        match(CParser::Template);
      }
      setState(1348);
      simpletemplateid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1350);
      match(CParser::Enum);
      setState(1352);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
      case 1: {
        setState(1351);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1354);
      match(CParser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumnameContext ------------------------------------------------------------------

CParser::EnumnameContext::EnumnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::EnumnameContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::EnumnameContext::getRuleIndex() const {
  return CParser::RuleEnumname;
}

void CParser::EnumnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumname(this);
}

void CParser::EnumnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumname(this);
}


antlrcpp::Any CParser::EnumnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumname(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumnameContext* CParser::enumname() {
  EnumnameContext *_localctx = _tracker.createInstance<EnumnameContext>(_ctx, getState());
  enterRule(_localctx, 164, CParser::RuleEnumname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1357);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumspecifierContext ------------------------------------------------------------------

CParser::EnumspecifierContext::EnumspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::EnumheadContext* CParser::EnumspecifierContext::enumhead() {
  return getRuleContext<CParser::EnumheadContext>(0);
}

tree::TerminalNode* CParser::EnumspecifierContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

tree::TerminalNode* CParser::EnumspecifierContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

CParser::EnumeratorlistContext* CParser::EnumspecifierContext::enumeratorlist() {
  return getRuleContext<CParser::EnumeratorlistContext>(0);
}

tree::TerminalNode* CParser::EnumspecifierContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::EnumspecifierContext::getRuleIndex() const {
  return CParser::RuleEnumspecifier;
}

void CParser::EnumspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumspecifier(this);
}

void CParser::EnumspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumspecifier(this);
}


antlrcpp::Any CParser::EnumspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumspecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumspecifierContext* CParser::enumspecifier() {
  EnumspecifierContext *_localctx = _tracker.createInstance<EnumspecifierContext>(_ctx, getState());
  enterRule(_localctx, 166, CParser::RuleEnumspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1372);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1359);
      enumhead();
      setState(1360);
      match(CParser::LeftBrace);
      setState(1362);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(1361);
        enumeratorlist(0);
      }
      setState(1364);
      match(CParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1366);
      enumhead();
      setState(1367);
      match(CParser::LeftBrace);
      setState(1368);
      enumeratorlist(0);
      setState(1369);
      match(CParser::Comma);
      setState(1370);
      match(CParser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumheadContext ------------------------------------------------------------------

CParser::EnumheadContext::EnumheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::EnumkeyContext* CParser::EnumheadContext::enumkey() {
  return getRuleContext<CParser::EnumkeyContext>(0);
}

CParser::AttributespecifierseqContext* CParser::EnumheadContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CParser::EnumheadContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::EnumbaseContext* CParser::EnumheadContext::enumbase() {
  return getRuleContext<CParser::EnumbaseContext>(0);
}

CParser::NestednamespecifierContext* CParser::EnumheadContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}


size_t CParser::EnumheadContext::getRuleIndex() const {
  return CParser::RuleEnumhead;
}

void CParser::EnumheadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumhead(this);
}

void CParser::EnumheadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumhead(this);
}


antlrcpp::Any CParser::EnumheadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumhead(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumheadContext* CParser::enumhead() {
  EnumheadContext *_localctx = _tracker.createInstance<EnumheadContext>(_ctx, getState());
  enterRule(_localctx, 168, CParser::RuleEnumhead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1393);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1374);
      enumkey();
      setState(1376);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1375);
        attributespecifierseq(0);
      }
      setState(1379);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(1378);
        match(CParser::Identifier);
      }
      setState(1382);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Colon) {
        setState(1381);
        enumbase();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1384);
      enumkey();
      setState(1386);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1385);
        attributespecifierseq(0);
      }
      setState(1388);
      nestednamespecifier(0);
      setState(1389);
      match(CParser::Identifier);
      setState(1391);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Colon) {
        setState(1390);
        enumbase();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaqueenumdeclarationContext ------------------------------------------------------------------

CParser::OpaqueenumdeclarationContext::OpaqueenumdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::EnumkeyContext* CParser::OpaqueenumdeclarationContext::enumkey() {
  return getRuleContext<CParser::EnumkeyContext>(0);
}

tree::TerminalNode* CParser::OpaqueenumdeclarationContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::OpaqueenumdeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::AttributespecifierseqContext* CParser::OpaqueenumdeclarationContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::EnumbaseContext* CParser::OpaqueenumdeclarationContext::enumbase() {
  return getRuleContext<CParser::EnumbaseContext>(0);
}


size_t CParser::OpaqueenumdeclarationContext::getRuleIndex() const {
  return CParser::RuleOpaqueenumdeclaration;
}

void CParser::OpaqueenumdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpaqueenumdeclaration(this);
}

void CParser::OpaqueenumdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpaqueenumdeclaration(this);
}


antlrcpp::Any CParser::OpaqueenumdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitOpaqueenumdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::OpaqueenumdeclarationContext* CParser::opaqueenumdeclaration() {
  OpaqueenumdeclarationContext *_localctx = _tracker.createInstance<OpaqueenumdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 170, CParser::RuleOpaqueenumdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1395);
    enumkey();
    setState(1397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
      setState(1396);
      attributespecifierseq(0);
    }
    setState(1399);
    match(CParser::Identifier);
    setState(1401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Colon) {
      setState(1400);
      enumbase();
    }
    setState(1403);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumkeyContext ------------------------------------------------------------------

CParser::EnumkeyContext::EnumkeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::EnumkeyContext::Enum() {
  return getToken(CParser::Enum, 0);
}

tree::TerminalNode* CParser::EnumkeyContext::Class() {
  return getToken(CParser::Class, 0);
}

tree::TerminalNode* CParser::EnumkeyContext::Struct() {
  return getToken(CParser::Struct, 0);
}


size_t CParser::EnumkeyContext::getRuleIndex() const {
  return CParser::RuleEnumkey;
}

void CParser::EnumkeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumkey(this);
}

void CParser::EnumkeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumkey(this);
}


antlrcpp::Any CParser::EnumkeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumkey(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumkeyContext* CParser::enumkey() {
  EnumkeyContext *_localctx = _tracker.createInstance<EnumkeyContext>(_ctx, getState());
  enterRule(_localctx, 172, CParser::RuleEnumkey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1410);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1405);
      match(CParser::Enum);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1406);
      match(CParser::Enum);
      setState(1407);
      match(CParser::Class);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1408);
      match(CParser::Enum);
      setState(1409);
      match(CParser::Struct);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumbaseContext ------------------------------------------------------------------

CParser::EnumbaseContext::EnumbaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::EnumbaseContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::TypespecifierseqContext* CParser::EnumbaseContext::typespecifierseq() {
  return getRuleContext<CParser::TypespecifierseqContext>(0);
}


size_t CParser::EnumbaseContext::getRuleIndex() const {
  return CParser::RuleEnumbase;
}

void CParser::EnumbaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumbase(this);
}

void CParser::EnumbaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumbase(this);
}


antlrcpp::Any CParser::EnumbaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumbase(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumbaseContext* CParser::enumbase() {
  EnumbaseContext *_localctx = _tracker.createInstance<EnumbaseContext>(_ctx, getState());
  enterRule(_localctx, 174, CParser::RuleEnumbase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1412);
    match(CParser::Colon);
    setState(1413);
    typespecifierseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorlistContext ------------------------------------------------------------------

CParser::EnumeratorlistContext::EnumeratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::EnumeratordefinitionContext* CParser::EnumeratorlistContext::enumeratordefinition() {
  return getRuleContext<CParser::EnumeratordefinitionContext>(0);
}

CParser::EnumeratorlistContext* CParser::EnumeratorlistContext::enumeratorlist() {
  return getRuleContext<CParser::EnumeratorlistContext>(0);
}

tree::TerminalNode* CParser::EnumeratorlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::EnumeratorlistContext::getRuleIndex() const {
  return CParser::RuleEnumeratorlist;
}

void CParser::EnumeratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorlist(this);
}

void CParser::EnumeratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorlist(this);
}


antlrcpp::Any CParser::EnumeratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumeratorlist(this);
  else
    return visitor->visitChildren(this);
}


CParser::EnumeratorlistContext* CParser::enumeratorlist() {
   return enumeratorlist(0);
}

CParser::EnumeratorlistContext* CParser::enumeratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::EnumeratorlistContext *_localctx = _tracker.createInstance<EnumeratorlistContext>(_ctx, parentState);
  CParser::EnumeratorlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 176;
  enterRecursionRule(_localctx, 176, CParser::RuleEnumeratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1416);
    enumeratordefinition();
    _ctx->stop = _input->LT(-1);
    setState(1423);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EnumeratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEnumeratorlist);
        setState(1418);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1419);
        match(CParser::Comma);
        setState(1420);
        enumeratordefinition(); 
      }
      setState(1425);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EnumeratordefinitionContext ------------------------------------------------------------------

CParser::EnumeratordefinitionContext::EnumeratordefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::EnumeratorContext* CParser::EnumeratordefinitionContext::enumerator() {
  return getRuleContext<CParser::EnumeratorContext>(0);
}

tree::TerminalNode* CParser::EnumeratordefinitionContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::ConstantexpressionContext* CParser::EnumeratordefinitionContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}


size_t CParser::EnumeratordefinitionContext::getRuleIndex() const {
  return CParser::RuleEnumeratordefinition;
}

void CParser::EnumeratordefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratordefinition(this);
}

void CParser::EnumeratordefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratordefinition(this);
}


antlrcpp::Any CParser::EnumeratordefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumeratordefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumeratordefinitionContext* CParser::enumeratordefinition() {
  EnumeratordefinitionContext *_localctx = _tracker.createInstance<EnumeratordefinitionContext>(_ctx, getState());
  enterRule(_localctx, 178, CParser::RuleEnumeratordefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1431);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1426);
      enumerator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1427);
      enumerator();
      setState(1428);
      match(CParser::Assign);
      setState(1429);
      constantexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

CParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::EnumeratorContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::EnumeratorContext::getRuleIndex() const {
  return CParser::RuleEnumerator;
}

void CParser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void CParser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}


antlrcpp::Any CParser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumeratorContext* CParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 180, CParser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1433);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacenameContext ------------------------------------------------------------------

CParser::NamespacenameContext::NamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::OriginalnamespacenameContext* CParser::NamespacenameContext::originalnamespacename() {
  return getRuleContext<CParser::OriginalnamespacenameContext>(0);
}

CParser::NamespacealiasContext* CParser::NamespacenameContext::namespacealias() {
  return getRuleContext<CParser::NamespacealiasContext>(0);
}


size_t CParser::NamespacenameContext::getRuleIndex() const {
  return CParser::RuleNamespacename;
}

void CParser::NamespacenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacename(this);
}

void CParser::NamespacenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacename(this);
}


antlrcpp::Any CParser::NamespacenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNamespacename(this);
  else
    return visitor->visitChildren(this);
}

CParser::NamespacenameContext* CParser::namespacename() {
  NamespacenameContext *_localctx = _tracker.createInstance<NamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 182, CParser::RuleNamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1435);
      originalnamespacename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1436);
      namespacealias();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacenameContext ------------------------------------------------------------------

CParser::OriginalnamespacenameContext::OriginalnamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::OriginalnamespacenameContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::OriginalnamespacenameContext::getRuleIndex() const {
  return CParser::RuleOriginalnamespacename;
}

void CParser::OriginalnamespacenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalnamespacename(this);
}

void CParser::OriginalnamespacenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalnamespacename(this);
}


antlrcpp::Any CParser::OriginalnamespacenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitOriginalnamespacename(this);
  else
    return visitor->visitChildren(this);
}

CParser::OriginalnamespacenameContext* CParser::originalnamespacename() {
  OriginalnamespacenameContext *_localctx = _tracker.createInstance<OriginalnamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 184, CParser::RuleOriginalnamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1439);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacedefinitionContext ------------------------------------------------------------------

CParser::NamespacedefinitionContext::NamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::NamednamespacedefinitionContext* CParser::NamespacedefinitionContext::namednamespacedefinition() {
  return getRuleContext<CParser::NamednamespacedefinitionContext>(0);
}

CParser::UnnamednamespacedefinitionContext* CParser::NamespacedefinitionContext::unnamednamespacedefinition() {
  return getRuleContext<CParser::UnnamednamespacedefinitionContext>(0);
}


size_t CParser::NamespacedefinitionContext::getRuleIndex() const {
  return CParser::RuleNamespacedefinition;
}

void CParser::NamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacedefinition(this);
}

void CParser::NamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacedefinition(this);
}


antlrcpp::Any CParser::NamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::NamespacedefinitionContext* CParser::namespacedefinition() {
  NamespacedefinitionContext *_localctx = _tracker.createInstance<NamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 186, CParser::RuleNamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1443);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1441);
      namednamespacedefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1442);
      unnamednamespacedefinition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamednamespacedefinitionContext ------------------------------------------------------------------

CParser::NamednamespacedefinitionContext::NamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::OriginalnamespacedefinitionContext* CParser::NamednamespacedefinitionContext::originalnamespacedefinition() {
  return getRuleContext<CParser::OriginalnamespacedefinitionContext>(0);
}

CParser::ExtensionnamespacedefinitionContext* CParser::NamednamespacedefinitionContext::extensionnamespacedefinition() {
  return getRuleContext<CParser::ExtensionnamespacedefinitionContext>(0);
}


size_t CParser::NamednamespacedefinitionContext::getRuleIndex() const {
  return CParser::RuleNamednamespacedefinition;
}

void CParser::NamednamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamednamespacedefinition(this);
}

void CParser::NamednamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamednamespacedefinition(this);
}


antlrcpp::Any CParser::NamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNamednamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::NamednamespacedefinitionContext* CParser::namednamespacedefinition() {
  NamednamespacedefinitionContext *_localctx = _tracker.createInstance<NamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 188, CParser::RuleNamednamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1445);
      originalnamespacedefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1446);
      extensionnamespacedefinition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacedefinitionContext ------------------------------------------------------------------

CParser::OriginalnamespacedefinitionContext::OriginalnamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::OriginalnamespacedefinitionContext::Namespace() {
  return getToken(CParser::Namespace, 0);
}

tree::TerminalNode* CParser::OriginalnamespacedefinitionContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::OriginalnamespacedefinitionContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::NamespacebodyContext* CParser::OriginalnamespacedefinitionContext::namespacebody() {
  return getRuleContext<CParser::NamespacebodyContext>(0);
}

tree::TerminalNode* CParser::OriginalnamespacedefinitionContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::OriginalnamespacedefinitionContext::Inline() {
  return getToken(CParser::Inline, 0);
}


size_t CParser::OriginalnamespacedefinitionContext::getRuleIndex() const {
  return CParser::RuleOriginalnamespacedefinition;
}

void CParser::OriginalnamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalnamespacedefinition(this);
}

void CParser::OriginalnamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalnamespacedefinition(this);
}


antlrcpp::Any CParser::OriginalnamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitOriginalnamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::OriginalnamespacedefinitionContext* CParser::originalnamespacedefinition() {
  OriginalnamespacedefinitionContext *_localctx = _tracker.createInstance<OriginalnamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 190, CParser::RuleOriginalnamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Inline) {
      setState(1449);
      match(CParser::Inline);
    }
    setState(1452);
    match(CParser::Namespace);
    setState(1453);
    match(CParser::Identifier);
    setState(1454);
    match(CParser::LeftBrace);
    setState(1455);
    namespacebody();
    setState(1456);
    match(CParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtensionnamespacedefinitionContext ------------------------------------------------------------------

CParser::ExtensionnamespacedefinitionContext::ExtensionnamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ExtensionnamespacedefinitionContext::Namespace() {
  return getToken(CParser::Namespace, 0);
}

CParser::OriginalnamespacenameContext* CParser::ExtensionnamespacedefinitionContext::originalnamespacename() {
  return getRuleContext<CParser::OriginalnamespacenameContext>(0);
}

tree::TerminalNode* CParser::ExtensionnamespacedefinitionContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::NamespacebodyContext* CParser::ExtensionnamespacedefinitionContext::namespacebody() {
  return getRuleContext<CParser::NamespacebodyContext>(0);
}

tree::TerminalNode* CParser::ExtensionnamespacedefinitionContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::ExtensionnamespacedefinitionContext::Inline() {
  return getToken(CParser::Inline, 0);
}


size_t CParser::ExtensionnamespacedefinitionContext::getRuleIndex() const {
  return CParser::RuleExtensionnamespacedefinition;
}

void CParser::ExtensionnamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtensionnamespacedefinition(this);
}

void CParser::ExtensionnamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtensionnamespacedefinition(this);
}


antlrcpp::Any CParser::ExtensionnamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExtensionnamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExtensionnamespacedefinitionContext* CParser::extensionnamespacedefinition() {
  ExtensionnamespacedefinitionContext *_localctx = _tracker.createInstance<ExtensionnamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 192, CParser::RuleExtensionnamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1459);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Inline) {
      setState(1458);
      match(CParser::Inline);
    }
    setState(1461);
    match(CParser::Namespace);
    setState(1462);
    originalnamespacename();
    setState(1463);
    match(CParser::LeftBrace);
    setState(1464);
    namespacebody();
    setState(1465);
    match(CParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnnamednamespacedefinitionContext ------------------------------------------------------------------

CParser::UnnamednamespacedefinitionContext::UnnamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::UnnamednamespacedefinitionContext::Namespace() {
  return getToken(CParser::Namespace, 0);
}

tree::TerminalNode* CParser::UnnamednamespacedefinitionContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::NamespacebodyContext* CParser::UnnamednamespacedefinitionContext::namespacebody() {
  return getRuleContext<CParser::NamespacebodyContext>(0);
}

tree::TerminalNode* CParser::UnnamednamespacedefinitionContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::UnnamednamespacedefinitionContext::Inline() {
  return getToken(CParser::Inline, 0);
}


size_t CParser::UnnamednamespacedefinitionContext::getRuleIndex() const {
  return CParser::RuleUnnamednamespacedefinition;
}

void CParser::UnnamednamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnnamednamespacedefinition(this);
}

void CParser::UnnamednamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnnamednamespacedefinition(this);
}


antlrcpp::Any CParser::UnnamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnnamednamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnnamednamespacedefinitionContext* CParser::unnamednamespacedefinition() {
  UnnamednamespacedefinitionContext *_localctx = _tracker.createInstance<UnnamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 194, CParser::RuleUnnamednamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Inline) {
      setState(1467);
      match(CParser::Inline);
    }
    setState(1470);
    match(CParser::Namespace);
    setState(1471);
    match(CParser::LeftBrace);
    setState(1472);
    namespacebody();
    setState(1473);
    match(CParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacebodyContext ------------------------------------------------------------------

CParser::NamespacebodyContext::NamespacebodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclarationseqContext* CParser::NamespacebodyContext::declarationseq() {
  return getRuleContext<CParser::DeclarationseqContext>(0);
}


size_t CParser::NamespacebodyContext::getRuleIndex() const {
  return CParser::RuleNamespacebody;
}

void CParser::NamespacebodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacebody(this);
}

void CParser::NamespacebodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacebody(this);
}


antlrcpp::Any CParser::NamespacebodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNamespacebody(this);
  else
    return visitor->visitChildren(this);
}

CParser::NamespacebodyContext* CParser::namespacebody() {
  NamespacebodyContext *_localctx = _tracker.createInstance<NamespacebodyContext>(_ctx, getState());
  enterRule(_localctx, 196, CParser::RuleNamespacebody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1476);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__2)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Asm)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Char16)
      | (1ULL << CParser::Char32)
      | (1ULL << CParser::Class)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Constexpr)
      | (1ULL << CParser::Decltype)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Explicit)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Friend)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Mutable)
      | (1ULL << CParser::Namespace)
      | (1ULL << CParser::Operator)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CParser::Struct - 65))
      | (1ULL << (CParser::Template - 65))
      | (1ULL << (CParser::Thread_local - 65))
      | (1ULL << (CParser::Typedef - 65))
      | (1ULL << (CParser::Typename_ - 65))
      | (1ULL << (CParser::Union - 65))
      | (1ULL << (CParser::Unsigned - 65))
      | (1ULL << (CParser::Using - 65))
      | (1ULL << (CParser::Virtual - 65))
      | (1ULL << (CParser::Void - 65))
      | (1ULL << (CParser::Volatile - 65))
      | (1ULL << (CParser::Wchar - 65))
      | (1ULL << (CParser::LeftParen - 65))
      | (1ULL << (CParser::LeftBracket - 65))
      | (1ULL << (CParser::Star - 65))
      | (1ULL << (CParser::And - 65))
      | (1ULL << (CParser::Tilde - 65))
      | (1ULL << (CParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (CParser::Semi - 129))
      | (1ULL << (CParser::Ellipsis - 129))
      | (1ULL << (CParser::Identifier - 129)))) != 0)) {
      setState(1475);
      declarationseq(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacealiasContext ------------------------------------------------------------------

CParser::NamespacealiasContext::NamespacealiasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NamespacealiasContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::NamespacealiasContext::getRuleIndex() const {
  return CParser::RuleNamespacealias;
}

void CParser::NamespacealiasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacealias(this);
}

void CParser::NamespacealiasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacealias(this);
}


antlrcpp::Any CParser::NamespacealiasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNamespacealias(this);
  else
    return visitor->visitChildren(this);
}

CParser::NamespacealiasContext* CParser::namespacealias() {
  NamespacealiasContext *_localctx = _tracker.createInstance<NamespacealiasContext>(_ctx, getState());
  enterRule(_localctx, 198, CParser::RuleNamespacealias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1478);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacealiasdefinitionContext ------------------------------------------------------------------

CParser::NamespacealiasdefinitionContext::NamespacealiasdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NamespacealiasdefinitionContext::Namespace() {
  return getToken(CParser::Namespace, 0);
}

tree::TerminalNode* CParser::NamespacealiasdefinitionContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::NamespacealiasdefinitionContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::QualifiednamespacespecifierContext* CParser::NamespacealiasdefinitionContext::qualifiednamespacespecifier() {
  return getRuleContext<CParser::QualifiednamespacespecifierContext>(0);
}

tree::TerminalNode* CParser::NamespacealiasdefinitionContext::Semi() {
  return getToken(CParser::Semi, 0);
}


size_t CParser::NamespacealiasdefinitionContext::getRuleIndex() const {
  return CParser::RuleNamespacealiasdefinition;
}

void CParser::NamespacealiasdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacealiasdefinition(this);
}

void CParser::NamespacealiasdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacealiasdefinition(this);
}


antlrcpp::Any CParser::NamespacealiasdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNamespacealiasdefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::NamespacealiasdefinitionContext* CParser::namespacealiasdefinition() {
  NamespacealiasdefinitionContext *_localctx = _tracker.createInstance<NamespacealiasdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 200, CParser::RuleNamespacealiasdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1480);
    match(CParser::Namespace);
    setState(1481);
    match(CParser::Identifier);
    setState(1482);
    match(CParser::Assign);
    setState(1483);
    qualifiednamespacespecifier();
    setState(1484);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiednamespacespecifierContext ------------------------------------------------------------------

CParser::QualifiednamespacespecifierContext::QualifiednamespacespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::NamespacenameContext* CParser::QualifiednamespacespecifierContext::namespacename() {
  return getRuleContext<CParser::NamespacenameContext>(0);
}

CParser::NestednamespecifierContext* CParser::QualifiednamespacespecifierContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}


size_t CParser::QualifiednamespacespecifierContext::getRuleIndex() const {
  return CParser::RuleQualifiednamespacespecifier;
}

void CParser::QualifiednamespacespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiednamespacespecifier(this);
}

void CParser::QualifiednamespacespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiednamespacespecifier(this);
}


antlrcpp::Any CParser::QualifiednamespacespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitQualifiednamespacespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::QualifiednamespacespecifierContext* CParser::qualifiednamespacespecifier() {
  QualifiednamespacespecifierContext *_localctx = _tracker.createInstance<QualifiednamespacespecifierContext>(_ctx, getState());
  enterRule(_localctx, 202, CParser::RuleQualifiednamespacespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1487);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx)) {
    case 1: {
      setState(1486);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1489);
    namespacename();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingdeclarationContext ------------------------------------------------------------------

CParser::UsingdeclarationContext::UsingdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::UsingdeclarationContext::Using() {
  return getToken(CParser::Using, 0);
}

CParser::NestednamespecifierContext* CParser::UsingdeclarationContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}

CParser::UnqualifiedidContext* CParser::UsingdeclarationContext::unqualifiedid() {
  return getRuleContext<CParser::UnqualifiedidContext>(0);
}

tree::TerminalNode* CParser::UsingdeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::UsingdeclarationContext::Typename_() {
  return getToken(CParser::Typename_, 0);
}

tree::TerminalNode* CParser::UsingdeclarationContext::Doublecolon() {
  return getToken(CParser::Doublecolon, 0);
}


size_t CParser::UsingdeclarationContext::getRuleIndex() const {
  return CParser::RuleUsingdeclaration;
}

void CParser::UsingdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingdeclaration(this);
}

void CParser::UsingdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingdeclaration(this);
}


antlrcpp::Any CParser::UsingdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUsingdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::UsingdeclarationContext* CParser::usingdeclaration() {
  UsingdeclarationContext *_localctx = _tracker.createInstance<UsingdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 204, CParser::RuleUsingdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1491);
      match(CParser::Using);
      setState(1493);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Typename_) {
        setState(1492);
        match(CParser::Typename_);
      }
      setState(1495);
      nestednamespecifier(0);
      setState(1496);
      unqualifiedid();
      setState(1497);
      match(CParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1499);
      match(CParser::Using);
      setState(1500);
      match(CParser::Doublecolon);
      setState(1501);
      unqualifiedid();
      setState(1502);
      match(CParser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingdirectiveContext ------------------------------------------------------------------

CParser::UsingdirectiveContext::UsingdirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::UsingdirectiveContext::Using() {
  return getToken(CParser::Using, 0);
}

tree::TerminalNode* CParser::UsingdirectiveContext::Namespace() {
  return getToken(CParser::Namespace, 0);
}

CParser::NamespacenameContext* CParser::UsingdirectiveContext::namespacename() {
  return getRuleContext<CParser::NamespacenameContext>(0);
}

tree::TerminalNode* CParser::UsingdirectiveContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::AttributespecifierseqContext* CParser::UsingdirectiveContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::NestednamespecifierContext* CParser::UsingdirectiveContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}


size_t CParser::UsingdirectiveContext::getRuleIndex() const {
  return CParser::RuleUsingdirective;
}

void CParser::UsingdirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingdirective(this);
}

void CParser::UsingdirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingdirective(this);
}


antlrcpp::Any CParser::UsingdirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUsingdirective(this);
  else
    return visitor->visitChildren(this);
}

CParser::UsingdirectiveContext* CParser::usingdirective() {
  UsingdirectiveContext *_localctx = _tracker.createInstance<UsingdirectiveContext>(_ctx, getState());
  enterRule(_localctx, 206, CParser::RuleUsingdirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1507);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
      setState(1506);
      attributespecifierseq(0);
    }
    setState(1509);
    match(CParser::Using);
    setState(1510);
    match(CParser::Namespace);
    setState(1512);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx)) {
    case 1: {
      setState(1511);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1514);
    namespacename();
    setState(1515);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmdefinitionContext ------------------------------------------------------------------

CParser::AsmdefinitionContext::AsmdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AsmdefinitionContext::Asm() {
  return getToken(CParser::Asm, 0);
}

tree::TerminalNode* CParser::AsmdefinitionContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::AsmdefinitionContext::Stringliteral() {
  return getToken(CParser::Stringliteral, 0);
}

tree::TerminalNode* CParser::AsmdefinitionContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::AsmdefinitionContext::Semi() {
  return getToken(CParser::Semi, 0);
}


size_t CParser::AsmdefinitionContext::getRuleIndex() const {
  return CParser::RuleAsmdefinition;
}

void CParser::AsmdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsmdefinition(this);
}

void CParser::AsmdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsmdefinition(this);
}


antlrcpp::Any CParser::AsmdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAsmdefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::AsmdefinitionContext* CParser::asmdefinition() {
  AsmdefinitionContext *_localctx = _tracker.createInstance<AsmdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 208, CParser::RuleAsmdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1517);
    match(CParser::Asm);
    setState(1518);
    match(CParser::LeftParen);
    setState(1519);
    match(CParser::Stringliteral);
    setState(1520);
    match(CParser::RightParen);
    setState(1521);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkagespecificationContext ------------------------------------------------------------------

CParser::LinkagespecificationContext::LinkagespecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::LinkagespecificationContext::Extern() {
  return getToken(CParser::Extern, 0);
}

tree::TerminalNode* CParser::LinkagespecificationContext::Stringliteral() {
  return getToken(CParser::Stringliteral, 0);
}

tree::TerminalNode* CParser::LinkagespecificationContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

tree::TerminalNode* CParser::LinkagespecificationContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

CParser::DeclarationseqContext* CParser::LinkagespecificationContext::declarationseq() {
  return getRuleContext<CParser::DeclarationseqContext>(0);
}

CParser::DeclarationContext* CParser::LinkagespecificationContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}


size_t CParser::LinkagespecificationContext::getRuleIndex() const {
  return CParser::RuleLinkagespecification;
}

void CParser::LinkagespecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLinkagespecification(this);
}

void CParser::LinkagespecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLinkagespecification(this);
}


antlrcpp::Any CParser::LinkagespecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLinkagespecification(this);
  else
    return visitor->visitChildren(this);
}

CParser::LinkagespecificationContext* CParser::linkagespecification() {
  LinkagespecificationContext *_localctx = _tracker.createInstance<LinkagespecificationContext>(_ctx, getState());
  enterRule(_localctx, 210, CParser::RuleLinkagespecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1533);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1523);
      match(CParser::Extern);
      setState(1524);
      match(CParser::Stringliteral);
      setState(1525);
      match(CParser::LeftBrace);
      setState(1527);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__2)
        | (1ULL << CParser::Alignas)
        | (1ULL << CParser::Asm)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Class)
        | (1ULL << CParser::Const)
        | (1ULL << CParser::Constexpr)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::Explicit)
        | (1ULL << CParser::Extern)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Friend)
        | (1ULL << CParser::Inline)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::Mutable)
        | (1ULL << CParser::Namespace)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Register)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Static)
        | (1ULL << CParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CParser::Struct - 65))
        | (1ULL << (CParser::Template - 65))
        | (1ULL << (CParser::Thread_local - 65))
        | (1ULL << (CParser::Typedef - 65))
        | (1ULL << (CParser::Typename_ - 65))
        | (1ULL << (CParser::Union - 65))
        | (1ULL << (CParser::Unsigned - 65))
        | (1ULL << (CParser::Using - 65))
        | (1ULL << (CParser::Virtual - 65))
        | (1ULL << (CParser::Void - 65))
        | (1ULL << (CParser::Volatile - 65))
        | (1ULL << (CParser::Wchar - 65))
        | (1ULL << (CParser::LeftParen - 65))
        | (1ULL << (CParser::LeftBracket - 65))
        | (1ULL << (CParser::Star - 65))
        | (1ULL << (CParser::And - 65))
        | (1ULL << (CParser::Tilde - 65))
        | (1ULL << (CParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (CParser::Semi - 129))
        | (1ULL << (CParser::Ellipsis - 129))
        | (1ULL << (CParser::Identifier - 129)))) != 0)) {
        setState(1526);
        declarationseq(0);
      }
      setState(1529);
      match(CParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1530);
      match(CParser::Extern);
      setState(1531);
      match(CParser::Stringliteral);
      setState(1532);
      declaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributespecifierseqContext ------------------------------------------------------------------

CParser::AttributespecifierseqContext::AttributespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AttributespecifierContext* CParser::AttributespecifierseqContext::attributespecifier() {
  return getRuleContext<CParser::AttributespecifierContext>(0);
}

CParser::AttributespecifierseqContext* CParser::AttributespecifierseqContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}


size_t CParser::AttributespecifierseqContext::getRuleIndex() const {
  return CParser::RuleAttributespecifierseq;
}

void CParser::AttributespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributespecifierseq(this);
}

void CParser::AttributespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributespecifierseq(this);
}


antlrcpp::Any CParser::AttributespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAttributespecifierseq(this);
  else
    return visitor->visitChildren(this);
}


CParser::AttributespecifierseqContext* CParser::attributespecifierseq() {
   return attributespecifierseq(0);
}

CParser::AttributespecifierseqContext* CParser::attributespecifierseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::AttributespecifierseqContext *_localctx = _tracker.createInstance<AttributespecifierseqContext>(_ctx, parentState);
  CParser::AttributespecifierseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 212;
  enterRecursionRule(_localctx, 212, CParser::RuleAttributespecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1536);
    attributespecifier();
    _ctx->stop = _input->LT(-1);
    setState(1542);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AttributespecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAttributespecifierseq);
        setState(1538);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1539);
        attributespecifier(); 
      }
      setState(1544);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributespecifierContext ------------------------------------------------------------------

CParser::AttributespecifierContext::AttributespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::AttributespecifierContext::LeftBracket() {
  return getTokens(CParser::LeftBracket);
}

tree::TerminalNode* CParser::AttributespecifierContext::LeftBracket(size_t i) {
  return getToken(CParser::LeftBracket, i);
}

CParser::AttributelistContext* CParser::AttributespecifierContext::attributelist() {
  return getRuleContext<CParser::AttributelistContext>(0);
}

std::vector<tree::TerminalNode *> CParser::AttributespecifierContext::RightBracket() {
  return getTokens(CParser::RightBracket);
}

tree::TerminalNode* CParser::AttributespecifierContext::RightBracket(size_t i) {
  return getToken(CParser::RightBracket, i);
}

CParser::AlignmentspecifierContext* CParser::AttributespecifierContext::alignmentspecifier() {
  return getRuleContext<CParser::AlignmentspecifierContext>(0);
}


size_t CParser::AttributespecifierContext::getRuleIndex() const {
  return CParser::RuleAttributespecifier;
}

void CParser::AttributespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributespecifier(this);
}

void CParser::AttributespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributespecifier(this);
}


antlrcpp::Any CParser::AttributespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAttributespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::AttributespecifierContext* CParser::attributespecifier() {
  AttributespecifierContext *_localctx = _tracker.createInstance<AttributespecifierContext>(_ctx, getState());
  enterRule(_localctx, 214, CParser::RuleAttributespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1552);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1545);
        match(CParser::LeftBracket);
        setState(1546);
        match(CParser::LeftBracket);
        setState(1547);
        attributelist(0);
        setState(1548);
        match(CParser::RightBracket);
        setState(1549);
        match(CParser::RightBracket);
        break;
      }

      case CParser::Alignas: {
        enterOuterAlt(_localctx, 2);
        setState(1551);
        alignmentspecifier();
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

//----------------- AlignmentspecifierContext ------------------------------------------------------------------

CParser::AlignmentspecifierContext::AlignmentspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AlignmentspecifierContext::Alignas() {
  return getToken(CParser::Alignas, 0);
}

tree::TerminalNode* CParser::AlignmentspecifierContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ThetypeidContext* CParser::AlignmentspecifierContext::thetypeid() {
  return getRuleContext<CParser::ThetypeidContext>(0);
}

tree::TerminalNode* CParser::AlignmentspecifierContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::AlignmentspecifierContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

CParser::ConstantexpressionContext* CParser::AlignmentspecifierContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}


size_t CParser::AlignmentspecifierContext::getRuleIndex() const {
  return CParser::RuleAlignmentspecifier;
}

void CParser::AlignmentspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlignmentspecifier(this);
}

void CParser::AlignmentspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlignmentspecifier(this);
}


antlrcpp::Any CParser::AlignmentspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAlignmentspecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::AlignmentspecifierContext* CParser::alignmentspecifier() {
  AlignmentspecifierContext *_localctx = _tracker.createInstance<AlignmentspecifierContext>(_ctx, getState());
  enterRule(_localctx, 216, CParser::RuleAlignmentspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1570);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1554);
      match(CParser::Alignas);
      setState(1555);
      match(CParser::LeftParen);
      setState(1556);
      thetypeid();
      setState(1558);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Ellipsis) {
        setState(1557);
        match(CParser::Ellipsis);
      }
      setState(1560);
      match(CParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1562);
      match(CParser::Alignas);
      setState(1563);
      match(CParser::LeftParen);
      setState(1564);
      constantexpression();
      setState(1566);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Ellipsis) {
        setState(1565);
        match(CParser::Ellipsis);
      }
      setState(1568);
      match(CParser::RightParen);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributelistContext ------------------------------------------------------------------

CParser::AttributelistContext::AttributelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AttributeContext* CParser::AttributelistContext::attribute() {
  return getRuleContext<CParser::AttributeContext>(0);
}

tree::TerminalNode* CParser::AttributelistContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

CParser::AttributelistContext* CParser::AttributelistContext::attributelist() {
  return getRuleContext<CParser::AttributelistContext>(0);
}

tree::TerminalNode* CParser::AttributelistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::AttributelistContext::getRuleIndex() const {
  return CParser::RuleAttributelist;
}

void CParser::AttributelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributelist(this);
}

void CParser::AttributelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributelist(this);
}


antlrcpp::Any CParser::AttributelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAttributelist(this);
  else
    return visitor->visitChildren(this);
}


CParser::AttributelistContext* CParser::attributelist() {
   return attributelist(0);
}

CParser::AttributelistContext* CParser::attributelist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::AttributelistContext *_localctx = _tracker.createInstance<AttributelistContext>(_ctx, parentState);
  CParser::AttributelistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 218;
  enterRecursionRule(_localctx, 218, CParser::RuleAttributelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1579);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      setState(1574);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
      case 1: {
        setState(1573);
        attribute();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1576);
      attribute();
      setState(1577);
      match(CParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1593);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1591);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1581);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1582);
          match(CParser::Comma);
          setState(1584);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx)) {
          case 1: {
            setState(1583);
            attribute();
            break;
          }

          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1586);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1587);
          match(CParser::Comma);
          setState(1588);
          attribute();
          setState(1589);
          match(CParser::Ellipsis);
          break;
        }

        } 
      }
      setState(1595);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

CParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AttributetokenContext* CParser::AttributeContext::attributetoken() {
  return getRuleContext<CParser::AttributetokenContext>(0);
}

CParser::AttributeargumentclauseContext* CParser::AttributeContext::attributeargumentclause() {
  return getRuleContext<CParser::AttributeargumentclauseContext>(0);
}


size_t CParser::AttributeContext::getRuleIndex() const {
  return CParser::RuleAttribute;
}

void CParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void CParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}


antlrcpp::Any CParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

CParser::AttributeContext* CParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 220, CParser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1596);
    attributetoken();
    setState(1598);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      setState(1597);
      attributeargumentclause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributetokenContext ------------------------------------------------------------------

CParser::AttributetokenContext::AttributetokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AttributetokenContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::AttributescopedtokenContext* CParser::AttributetokenContext::attributescopedtoken() {
  return getRuleContext<CParser::AttributescopedtokenContext>(0);
}


size_t CParser::AttributetokenContext::getRuleIndex() const {
  return CParser::RuleAttributetoken;
}

void CParser::AttributetokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributetoken(this);
}

void CParser::AttributetokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributetoken(this);
}


antlrcpp::Any CParser::AttributetokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAttributetoken(this);
  else
    return visitor->visitChildren(this);
}

CParser::AttributetokenContext* CParser::attributetoken() {
  AttributetokenContext *_localctx = _tracker.createInstance<AttributetokenContext>(_ctx, getState());
  enterRule(_localctx, 222, CParser::RuleAttributetoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1602);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1600);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1601);
      attributescopedtoken();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributescopedtokenContext ------------------------------------------------------------------

CParser::AttributescopedtokenContext::AttributescopedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AttributenamespaceContext* CParser::AttributescopedtokenContext::attributenamespace() {
  return getRuleContext<CParser::AttributenamespaceContext>(0);
}

tree::TerminalNode* CParser::AttributescopedtokenContext::Doublecolon() {
  return getToken(CParser::Doublecolon, 0);
}

tree::TerminalNode* CParser::AttributescopedtokenContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::AttributescopedtokenContext::getRuleIndex() const {
  return CParser::RuleAttributescopedtoken;
}

void CParser::AttributescopedtokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributescopedtoken(this);
}

void CParser::AttributescopedtokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributescopedtoken(this);
}


antlrcpp::Any CParser::AttributescopedtokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAttributescopedtoken(this);
  else
    return visitor->visitChildren(this);
}

CParser::AttributescopedtokenContext* CParser::attributescopedtoken() {
  AttributescopedtokenContext *_localctx = _tracker.createInstance<AttributescopedtokenContext>(_ctx, getState());
  enterRule(_localctx, 224, CParser::RuleAttributescopedtoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1604);
    attributenamespace();
    setState(1605);
    match(CParser::Doublecolon);
    setState(1606);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributenamespaceContext ------------------------------------------------------------------

CParser::AttributenamespaceContext::AttributenamespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AttributenamespaceContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::AttributenamespaceContext::getRuleIndex() const {
  return CParser::RuleAttributenamespace;
}

void CParser::AttributenamespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributenamespace(this);
}

void CParser::AttributenamespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributenamespace(this);
}


antlrcpp::Any CParser::AttributenamespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAttributenamespace(this);
  else
    return visitor->visitChildren(this);
}

CParser::AttributenamespaceContext* CParser::attributenamespace() {
  AttributenamespaceContext *_localctx = _tracker.createInstance<AttributenamespaceContext>(_ctx, getState());
  enterRule(_localctx, 226, CParser::RuleAttributenamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1608);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeargumentclauseContext ------------------------------------------------------------------

CParser::AttributeargumentclauseContext::AttributeargumentclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AttributeargumentclauseContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::BalancedtokenseqContext* CParser::AttributeargumentclauseContext::balancedtokenseq() {
  return getRuleContext<CParser::BalancedtokenseqContext>(0);
}

tree::TerminalNode* CParser::AttributeargumentclauseContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::AttributeargumentclauseContext::getRuleIndex() const {
  return CParser::RuleAttributeargumentclause;
}

void CParser::AttributeargumentclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeargumentclause(this);
}

void CParser::AttributeargumentclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeargumentclause(this);
}


antlrcpp::Any CParser::AttributeargumentclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAttributeargumentclause(this);
  else
    return visitor->visitChildren(this);
}

CParser::AttributeargumentclauseContext* CParser::attributeargumentclause() {
  AttributeargumentclauseContext *_localctx = _tracker.createInstance<AttributeargumentclauseContext>(_ctx, getState());
  enterRule(_localctx, 228, CParser::RuleAttributeargumentclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1610);
    match(CParser::LeftParen);
    setState(1611);
    balancedtokenseq(0);
    setState(1612);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedtokenseqContext ------------------------------------------------------------------

CParser::BalancedtokenseqContext::BalancedtokenseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::BalancedtokenContext* CParser::BalancedtokenseqContext::balancedtoken() {
  return getRuleContext<CParser::BalancedtokenContext>(0);
}

CParser::BalancedtokenseqContext* CParser::BalancedtokenseqContext::balancedtokenseq() {
  return getRuleContext<CParser::BalancedtokenseqContext>(0);
}


size_t CParser::BalancedtokenseqContext::getRuleIndex() const {
  return CParser::RuleBalancedtokenseq;
}

void CParser::BalancedtokenseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedtokenseq(this);
}

void CParser::BalancedtokenseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedtokenseq(this);
}


antlrcpp::Any CParser::BalancedtokenseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBalancedtokenseq(this);
  else
    return visitor->visitChildren(this);
}


CParser::BalancedtokenseqContext* CParser::balancedtokenseq() {
   return balancedtokenseq(0);
}

CParser::BalancedtokenseqContext* CParser::balancedtokenseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::BalancedtokenseqContext *_localctx = _tracker.createInstance<BalancedtokenseqContext>(_ctx, parentState);
  CParser::BalancedtokenseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 230;
  enterRecursionRule(_localctx, 230, CParser::RuleBalancedtokenseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1616);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      setState(1615);
      balancedtoken();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1622);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BalancedtokenseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBalancedtokenseq);
        setState(1618);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1619);
        balancedtoken(); 
      }
      setState(1624);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BalancedtokenContext ------------------------------------------------------------------

CParser::BalancedtokenContext::BalancedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::BalancedtokenContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::BalancedtokenseqContext* CParser::BalancedtokenContext::balancedtokenseq() {
  return getRuleContext<CParser::BalancedtokenseqContext>(0);
}

tree::TerminalNode* CParser::BalancedtokenContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

tree::TerminalNode* CParser::BalancedtokenContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::BalancedtokenContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

tree::TerminalNode* CParser::BalancedtokenContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

tree::TerminalNode* CParser::BalancedtokenContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}


size_t CParser::BalancedtokenContext::getRuleIndex() const {
  return CParser::RuleBalancedtoken;
}

void CParser::BalancedtokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedtoken(this);
}

void CParser::BalancedtokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedtoken(this);
}


antlrcpp::Any CParser::BalancedtokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBalancedtoken(this);
  else
    return visitor->visitChildren(this);
}

CParser::BalancedtokenContext* CParser::balancedtoken() {
  BalancedtokenContext *_localctx = _tracker.createInstance<BalancedtokenContext>(_ctx, getState());
  enterRule(_localctx, 232, CParser::RuleBalancedtoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1637);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(1625);
        match(CParser::LeftParen);
        setState(1626);
        balancedtokenseq(0);
        setState(1627);
        match(CParser::RightParen);
        break;
      }

      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1629);
        match(CParser::LeftBracket);
        setState(1630);
        balancedtokenseq(0);
        setState(1631);
        match(CParser::RightBracket);
        break;
      }

      case CParser::LeftBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1633);
        match(CParser::LeftBrace);
        setState(1634);
        balancedtokenseq(0);
        setState(1635);
        match(CParser::RightBrace);
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

//----------------- InitdeclaratorlistContext ------------------------------------------------------------------

CParser::InitdeclaratorlistContext::InitdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::InitdeclaratorContext* CParser::InitdeclaratorlistContext::initdeclarator() {
  return getRuleContext<CParser::InitdeclaratorContext>(0);
}

CParser::InitdeclaratorlistContext* CParser::InitdeclaratorlistContext::initdeclaratorlist() {
  return getRuleContext<CParser::InitdeclaratorlistContext>(0);
}

tree::TerminalNode* CParser::InitdeclaratorlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::InitdeclaratorlistContext::getRuleIndex() const {
  return CParser::RuleInitdeclaratorlist;
}

void CParser::InitdeclaratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitdeclaratorlist(this);
}

void CParser::InitdeclaratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitdeclaratorlist(this);
}


antlrcpp::Any CParser::InitdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitdeclaratorlist(this);
  else
    return visitor->visitChildren(this);
}


CParser::InitdeclaratorlistContext* CParser::initdeclaratorlist() {
   return initdeclaratorlist(0);
}

CParser::InitdeclaratorlistContext* CParser::initdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::InitdeclaratorlistContext *_localctx = _tracker.createInstance<InitdeclaratorlistContext>(_ctx, parentState);
  CParser::InitdeclaratorlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 234;
  enterRecursionRule(_localctx, 234, CParser::RuleInitdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1640);
    initdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(1647);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitdeclaratorlist);
        setState(1642);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1643);
        match(CParser::Comma);
        setState(1644);
        initdeclarator(); 
      }
      setState(1649);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InitdeclaratorContext ------------------------------------------------------------------

CParser::InitdeclaratorContext::InitdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::InitdeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::InitializerContext* CParser::InitdeclaratorContext::initializer() {
  return getRuleContext<CParser::InitializerContext>(0);
}


size_t CParser::InitdeclaratorContext::getRuleIndex() const {
  return CParser::RuleInitdeclarator;
}

void CParser::InitdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitdeclarator(this);
}

void CParser::InitdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitdeclarator(this);
}


antlrcpp::Any CParser::InitdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitdeclaratorContext* CParser::initdeclarator() {
  InitdeclaratorContext *_localctx = _tracker.createInstance<InitdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 236, CParser::RuleInitdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1650);
    declarator();
    setState(1652);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx)) {
    case 1: {
      setState(1651);
      initializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

CParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PtrdeclaratorContext* CParser::DeclaratorContext::ptrdeclarator() {
  return getRuleContext<CParser::PtrdeclaratorContext>(0);
}

CParser::NoptrdeclaratorContext* CParser::DeclaratorContext::noptrdeclarator() {
  return getRuleContext<CParser::NoptrdeclaratorContext>(0);
}

CParser::ParametersandqualifiersContext* CParser::DeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CParser::ParametersandqualifiersContext>(0);
}

CParser::TrailingreturntypeContext* CParser::DeclaratorContext::trailingreturntype() {
  return getRuleContext<CParser::TrailingreturntypeContext>(0);
}


size_t CParser::DeclaratorContext::getRuleIndex() const {
  return CParser::RuleDeclarator;
}

void CParser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void CParser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}


antlrcpp::Any CParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclaratorContext* CParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 238, CParser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1659);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1654);
      ptrdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1655);
      noptrdeclarator(0);
      setState(1656);
      parametersandqualifiers();
      setState(1657);
      trailingreturntype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrdeclaratorContext ------------------------------------------------------------------

CParser::PtrdeclaratorContext::PtrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::NoptrdeclaratorContext* CParser::PtrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<CParser::NoptrdeclaratorContext>(0);
}

CParser::PtroperatorContext* CParser::PtrdeclaratorContext::ptroperator() {
  return getRuleContext<CParser::PtroperatorContext>(0);
}

CParser::PtrdeclaratorContext* CParser::PtrdeclaratorContext::ptrdeclarator() {
  return getRuleContext<CParser::PtrdeclaratorContext>(0);
}


size_t CParser::PtrdeclaratorContext::getRuleIndex() const {
  return CParser::RulePtrdeclarator;
}

void CParser::PtrdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrdeclarator(this);
}

void CParser::PtrdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrdeclarator(this);
}


antlrcpp::Any CParser::PtrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPtrdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::PtrdeclaratorContext* CParser::ptrdeclarator() {
  PtrdeclaratorContext *_localctx = _tracker.createInstance<PtrdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 240, CParser::RulePtrdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1665);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1661);
      noptrdeclarator(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1662);
      ptroperator();
      setState(1663);
      ptrdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrdeclaratorContext ------------------------------------------------------------------

CParser::NoptrdeclaratorContext::NoptrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratoridContext* CParser::NoptrdeclaratorContext::declaratorid() {
  return getRuleContext<CParser::DeclaratoridContext>(0);
}

CParser::AttributespecifierseqContext* CParser::NoptrdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CParser::NoptrdeclaratorContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::PtrdeclaratorContext* CParser::NoptrdeclaratorContext::ptrdeclarator() {
  return getRuleContext<CParser::PtrdeclaratorContext>(0);
}

tree::TerminalNode* CParser::NoptrdeclaratorContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::NoptrdeclaratorContext* CParser::NoptrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<CParser::NoptrdeclaratorContext>(0);
}

CParser::ParametersandqualifiersContext* CParser::NoptrdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CParser::ParametersandqualifiersContext>(0);
}

tree::TerminalNode* CParser::NoptrdeclaratorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::NoptrdeclaratorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

CParser::ConstantexpressionContext* CParser::NoptrdeclaratorContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}


size_t CParser::NoptrdeclaratorContext::getRuleIndex() const {
  return CParser::RuleNoptrdeclarator;
}

void CParser::NoptrdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrdeclarator(this);
}

void CParser::NoptrdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrdeclarator(this);
}


antlrcpp::Any CParser::NoptrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNoptrdeclarator(this);
  else
    return visitor->visitChildren(this);
}


CParser::NoptrdeclaratorContext* CParser::noptrdeclarator() {
   return noptrdeclarator(0);
}

CParser::NoptrdeclaratorContext* CParser::noptrdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::NoptrdeclaratorContext *_localctx = _tracker.createInstance<NoptrdeclaratorContext>(_ctx, parentState);
  CParser::NoptrdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 242;
  enterRecursionRule(_localctx, 242, CParser::RuleNoptrdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1676);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Decltype:
      case CParser::Operator:
      case CParser::Tilde:
      case CParser::Doublecolon:
      case CParser::Ellipsis:
      case CParser::Identifier: {
        setState(1668);
        declaratorid();
        setState(1670);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
        case 1: {
          setState(1669);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case CParser::LeftParen: {
        setState(1672);
        match(CParser::LeftParen);
        setState(1673);
        ptrdeclarator();
        setState(1674);
        match(CParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1691);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1689);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1678);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1679);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1680);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1681);
          match(CParser::LeftBracket);
          setState(1683);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Auto)
            | (1ULL << CParser::Bool)
            | (1ULL << CParser::Char)
            | (1ULL << CParser::Char16)
            | (1ULL << CParser::Char32)
            | (1ULL << CParser::Const_cast)
            | (1ULL << CParser::Decltype)
            | (1ULL << CParser::Delete)
            | (1ULL << CParser::Double)
            | (1ULL << CParser::Dynamic_cast)
            | (1ULL << CParser::False)
            | (1ULL << CParser::Float)
            | (1ULL << CParser::Int)
            | (1ULL << CParser::Long)
            | (1ULL << CParser::New)
            | (1ULL << CParser::Noexcept)
            | (1ULL << CParser::Nullptr)
            | (1ULL << CParser::Operator)
            | (1ULL << CParser::Reinterpret_cast)
            | (1ULL << CParser::Short)
            | (1ULL << CParser::Signed)
            | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
            | (1ULL << (CParser::This - 64))
            | (1ULL << (CParser::True - 64))
            | (1ULL << (CParser::Typeid_ - 64))
            | (1ULL << (CParser::Typename_ - 64))
            | (1ULL << (CParser::Unsigned - 64))
            | (1ULL << (CParser::Void - 64))
            | (1ULL << (CParser::Wchar - 64))
            | (1ULL << (CParser::LeftParen - 64))
            | (1ULL << (CParser::LeftBracket - 64))
            | (1ULL << (CParser::Plus - 64))
            | (1ULL << (CParser::Minus - 64))
            | (1ULL << (CParser::Star - 64))
            | (1ULL << (CParser::And - 64))
            | (1ULL << (CParser::Or - 64))
            | (1ULL << (CParser::Tilde - 64))
            | (1ULL << (CParser::PlusPlus - 64))
            | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
            | (1ULL << (CParser::Identifier - 128))
            | (1ULL << (CParser::Integerliteral - 128))
            | (1ULL << (CParser::Characterliteral - 128))
            | (1ULL << (CParser::Floatingliteral - 128))
            | (1ULL << (CParser::Stringliteral - 128))
            | (1ULL << (CParser::Userdefinedintegerliteral - 128))
            | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
            | (1ULL << (CParser::Userdefinedstringliteral - 128))
            | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
            setState(1682);
            constantexpression();
          }
          setState(1685);
          match(CParser::RightBracket);
          setState(1687);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
          case 1: {
            setState(1686);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1693);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParametersandqualifiersContext ------------------------------------------------------------------

CParser::ParametersandqualifiersContext::ParametersandqualifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ParametersandqualifiersContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ParameterdeclarationclauseContext* CParser::ParametersandqualifiersContext::parameterdeclarationclause() {
  return getRuleContext<CParser::ParameterdeclarationclauseContext>(0);
}

tree::TerminalNode* CParser::ParametersandqualifiersContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::CvqualifierseqContext* CParser::ParametersandqualifiersContext::cvqualifierseq() {
  return getRuleContext<CParser::CvqualifierseqContext>(0);
}

CParser::RefqualifierContext* CParser::ParametersandqualifiersContext::refqualifier() {
  return getRuleContext<CParser::RefqualifierContext>(0);
}

CParser::ExceptionspecificationContext* CParser::ParametersandqualifiersContext::exceptionspecification() {
  return getRuleContext<CParser::ExceptionspecificationContext>(0);
}

CParser::AttributespecifierseqContext* CParser::ParametersandqualifiersContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}


size_t CParser::ParametersandqualifiersContext::getRuleIndex() const {
  return CParser::RuleParametersandqualifiers;
}

void CParser::ParametersandqualifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersandqualifiers(this);
}

void CParser::ParametersandqualifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersandqualifiers(this);
}


antlrcpp::Any CParser::ParametersandqualifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParametersandqualifiers(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParametersandqualifiersContext* CParser::parametersandqualifiers() {
  ParametersandqualifiersContext *_localctx = _tracker.createInstance<ParametersandqualifiersContext>(_ctx, getState());
  enterRule(_localctx, 244, CParser::RuleParametersandqualifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1694);
    match(CParser::LeftParen);
    setState(1695);
    parameterdeclarationclause();
    setState(1696);
    match(CParser::RightParen);
    setState(1698);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx)) {
    case 1: {
      setState(1697);
      cvqualifierseq();
      break;
    }

    }
    setState(1701);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, _ctx)) {
    case 1: {
      setState(1700);
      refqualifier();
      break;
    }

    }
    setState(1704);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
    case 1: {
      setState(1703);
      exceptionspecification();
      break;
    }

    }
    setState(1707);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
    case 1: {
      setState(1706);
      attributespecifierseq(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingreturntypeContext ------------------------------------------------------------------

CParser::TrailingreturntypeContext::TrailingreturntypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TrailingreturntypeContext::Arrow() {
  return getToken(CParser::Arrow, 0);
}

CParser::TrailingtypespecifierseqContext* CParser::TrailingreturntypeContext::trailingtypespecifierseq() {
  return getRuleContext<CParser::TrailingtypespecifierseqContext>(0);
}

CParser::AbstractdeclaratorContext* CParser::TrailingreturntypeContext::abstractdeclarator() {
  return getRuleContext<CParser::AbstractdeclaratorContext>(0);
}


size_t CParser::TrailingreturntypeContext::getRuleIndex() const {
  return CParser::RuleTrailingreturntype;
}

void CParser::TrailingreturntypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingreturntype(this);
}

void CParser::TrailingreturntypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingreturntype(this);
}


antlrcpp::Any CParser::TrailingreturntypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTrailingreturntype(this);
  else
    return visitor->visitChildren(this);
}

CParser::TrailingreturntypeContext* CParser::trailingreturntype() {
  TrailingreturntypeContext *_localctx = _tracker.createInstance<TrailingreturntypeContext>(_ctx, getState());
  enterRule(_localctx, 246, CParser::RuleTrailingreturntype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1709);
    match(CParser::Arrow);
    setState(1710);
    trailingtypespecifierseq();
    setState(1712);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx)) {
    case 1: {
      setState(1711);
      abstractdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtroperatorContext ------------------------------------------------------------------

CParser::PtroperatorContext::PtroperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::PtroperatorContext::Star() {
  return getToken(CParser::Star, 0);
}

CParser::AttributespecifierseqContext* CParser::PtroperatorContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::CvqualifierseqContext* CParser::PtroperatorContext::cvqualifierseq() {
  return getRuleContext<CParser::CvqualifierseqContext>(0);
}

tree::TerminalNode* CParser::PtroperatorContext::And() {
  return getToken(CParser::And, 0);
}

CParser::NestednamespecifierContext* CParser::PtroperatorContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}


size_t CParser::PtroperatorContext::getRuleIndex() const {
  return CParser::RulePtroperator;
}

void CParser::PtroperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtroperator(this);
}

void CParser::PtroperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtroperator(this);
}


antlrcpp::Any CParser::PtroperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPtroperator(this);
  else
    return visitor->visitChildren(this);
}

CParser::PtroperatorContext* CParser::ptroperator() {
  PtroperatorContext *_localctx = _tracker.createInstance<PtroperatorContext>(_ctx, getState());
  enterRule(_localctx, 248, CParser::RulePtroperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1737);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Star: {
        enterOuterAlt(_localctx, 1);
        setState(1714);
        match(CParser::Star);
        setState(1716);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx)) {
        case 1: {
          setState(1715);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1719);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx)) {
        case 1: {
          setState(1718);
          cvqualifierseq();
          break;
        }

        }
        break;
      }

      case CParser::And: {
        enterOuterAlt(_localctx, 2);
        setState(1721);
        match(CParser::And);
        setState(1723);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
        case 1: {
          setState(1722);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case CParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(1725);
        match(CParser::T__2);
        setState(1727);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
        case 1: {
          setState(1726);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case CParser::Decltype:
      case CParser::Doublecolon:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(1729);
        nestednamespecifier(0);
        setState(1730);
        match(CParser::Star);
        setState(1732);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
        case 1: {
          setState(1731);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1735);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx)) {
        case 1: {
          setState(1734);
          cvqualifierseq();
          break;
        }

        }
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

//----------------- CvqualifierseqContext ------------------------------------------------------------------

CParser::CvqualifierseqContext::CvqualifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::CvqualifierContext* CParser::CvqualifierseqContext::cvqualifier() {
  return getRuleContext<CParser::CvqualifierContext>(0);
}

CParser::CvqualifierseqContext* CParser::CvqualifierseqContext::cvqualifierseq() {
  return getRuleContext<CParser::CvqualifierseqContext>(0);
}


size_t CParser::CvqualifierseqContext::getRuleIndex() const {
  return CParser::RuleCvqualifierseq;
}

void CParser::CvqualifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvqualifierseq(this);
}

void CParser::CvqualifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvqualifierseq(this);
}


antlrcpp::Any CParser::CvqualifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCvqualifierseq(this);
  else
    return visitor->visitChildren(this);
}

CParser::CvqualifierseqContext* CParser::cvqualifierseq() {
  CvqualifierseqContext *_localctx = _tracker.createInstance<CvqualifierseqContext>(_ctx, getState());
  enterRule(_localctx, 250, CParser::RuleCvqualifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1739);
    cvqualifier();
    setState(1741);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
    case 1: {
      setState(1740);
      cvqualifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierContext ------------------------------------------------------------------

CParser::CvqualifierContext::CvqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CvqualifierContext::Const() {
  return getToken(CParser::Const, 0);
}

tree::TerminalNode* CParser::CvqualifierContext::Volatile() {
  return getToken(CParser::Volatile, 0);
}


size_t CParser::CvqualifierContext::getRuleIndex() const {
  return CParser::RuleCvqualifier;
}

void CParser::CvqualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvqualifier(this);
}

void CParser::CvqualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvqualifier(this);
}


antlrcpp::Any CParser::CvqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCvqualifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::CvqualifierContext* CParser::cvqualifier() {
  CvqualifierContext *_localctx = _tracker.createInstance<CvqualifierContext>(_ctx, getState());
  enterRule(_localctx, 252, CParser::RuleCvqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1743);
    _la = _input->LA(1);
    if (!(_la == CParser::Const

    || _la == CParser::Volatile)) {
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

//----------------- RefqualifierContext ------------------------------------------------------------------

CParser::RefqualifierContext::RefqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::RefqualifierContext::And() {
  return getToken(CParser::And, 0);
}


size_t CParser::RefqualifierContext::getRuleIndex() const {
  return CParser::RuleRefqualifier;
}

void CParser::RefqualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRefqualifier(this);
}

void CParser::RefqualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRefqualifier(this);
}


antlrcpp::Any CParser::RefqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitRefqualifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::RefqualifierContext* CParser::refqualifier() {
  RefqualifierContext *_localctx = _tracker.createInstance<RefqualifierContext>(_ctx, getState());
  enterRule(_localctx, 254, CParser::RuleRefqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1745);
    _la = _input->LA(1);
    if (!(_la == CParser::T__2 || _la == CParser::And)) {
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

//----------------- DeclaratoridContext ------------------------------------------------------------------

CParser::DeclaratoridContext::DeclaratoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::IdexpressionContext* CParser::DeclaratoridContext::idexpression() {
  return getRuleContext<CParser::IdexpressionContext>(0);
}

tree::TerminalNode* CParser::DeclaratoridContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}


size_t CParser::DeclaratoridContext::getRuleIndex() const {
  return CParser::RuleDeclaratorid;
}

void CParser::DeclaratoridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaratorid(this);
}

void CParser::DeclaratoridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaratorid(this);
}


antlrcpp::Any CParser::DeclaratoridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclaratorid(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclaratoridContext* CParser::declaratorid() {
  DeclaratoridContext *_localctx = _tracker.createInstance<DeclaratoridContext>(_ctx, getState());
  enterRule(_localctx, 256, CParser::RuleDeclaratorid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1748);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Ellipsis) {
      setState(1747);
      match(CParser::Ellipsis);
    }
    setState(1750);
    idexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypeidContext ------------------------------------------------------------------

CParser::ThetypeidContext::ThetypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TypespecifierseqContext* CParser::ThetypeidContext::typespecifierseq() {
  return getRuleContext<CParser::TypespecifierseqContext>(0);
}

CParser::AbstractdeclaratorContext* CParser::ThetypeidContext::abstractdeclarator() {
  return getRuleContext<CParser::AbstractdeclaratorContext>(0);
}


size_t CParser::ThetypeidContext::getRuleIndex() const {
  return CParser::RuleThetypeid;
}

void CParser::ThetypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThetypeid(this);
}

void CParser::ThetypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThetypeid(this);
}


antlrcpp::Any CParser::ThetypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitThetypeid(this);
  else
    return visitor->visitChildren(this);
}

CParser::ThetypeidContext* CParser::thetypeid() {
  ThetypeidContext *_localctx = _tracker.createInstance<ThetypeidContext>(_ctx, getState());
  enterRule(_localctx, 258, CParser::RuleThetypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1752);
    typespecifierseq();
    setState(1754);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
    case 1: {
      setState(1753);
      abstractdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractdeclaratorContext ------------------------------------------------------------------

CParser::AbstractdeclaratorContext::AbstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PtrabstractdeclaratorContext* CParser::AbstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<CParser::PtrabstractdeclaratorContext>(0);
}

CParser::ParametersandqualifiersContext* CParser::AbstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CParser::ParametersandqualifiersContext>(0);
}

CParser::TrailingreturntypeContext* CParser::AbstractdeclaratorContext::trailingreturntype() {
  return getRuleContext<CParser::TrailingreturntypeContext>(0);
}

CParser::NoptrabstractdeclaratorContext* CParser::AbstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<CParser::NoptrabstractdeclaratorContext>(0);
}

CParser::AbstractpackdeclaratorContext* CParser::AbstractdeclaratorContext::abstractpackdeclarator() {
  return getRuleContext<CParser::AbstractpackdeclaratorContext>(0);
}


size_t CParser::AbstractdeclaratorContext::getRuleIndex() const {
  return CParser::RuleAbstractdeclarator;
}

void CParser::AbstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractdeclarator(this);
}

void CParser::AbstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractdeclarator(this);
}


antlrcpp::Any CParser::AbstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAbstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::AbstractdeclaratorContext* CParser::abstractdeclarator() {
  AbstractdeclaratorContext *_localctx = _tracker.createInstance<AbstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 260, CParser::RuleAbstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1764);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1756);
      ptrabstractdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1758);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
      case 1: {
        setState(1757);
        noptrabstractdeclarator(0);
        break;
      }

      }
      setState(1760);
      parametersandqualifiers();
      setState(1761);
      trailingreturntype();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1763);
      abstractpackdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrabstractdeclaratorContext ------------------------------------------------------------------

CParser::PtrabstractdeclaratorContext::PtrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::NoptrabstractdeclaratorContext* CParser::PtrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<CParser::NoptrabstractdeclaratorContext>(0);
}

CParser::PtroperatorContext* CParser::PtrabstractdeclaratorContext::ptroperator() {
  return getRuleContext<CParser::PtroperatorContext>(0);
}

CParser::PtrabstractdeclaratorContext* CParser::PtrabstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<CParser::PtrabstractdeclaratorContext>(0);
}


size_t CParser::PtrabstractdeclaratorContext::getRuleIndex() const {
  return CParser::RulePtrabstractdeclarator;
}

void CParser::PtrabstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrabstractdeclarator(this);
}

void CParser::PtrabstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrabstractdeclarator(this);
}


antlrcpp::Any CParser::PtrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPtrabstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::PtrabstractdeclaratorContext* CParser::ptrabstractdeclarator() {
  PtrabstractdeclaratorContext *_localctx = _tracker.createInstance<PtrabstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 262, CParser::RulePtrabstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1771);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftParen:
      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1766);
        noptrabstractdeclarator(0);
        break;
      }

      case CParser::T__2:
      case CParser::Decltype:
      case CParser::Star:
      case CParser::And:
      case CParser::Doublecolon:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1767);
        ptroperator();
        setState(1769);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
        case 1: {
          setState(1768);
          ptrabstractdeclarator();
          break;
        }

        }
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

//----------------- NoptrabstractdeclaratorContext ------------------------------------------------------------------

CParser::NoptrabstractdeclaratorContext::NoptrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ParametersandqualifiersContext* CParser::NoptrabstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CParser::ParametersandqualifiersContext>(0);
}

tree::TerminalNode* CParser::NoptrabstractdeclaratorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::NoptrabstractdeclaratorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

CParser::ConstantexpressionContext* CParser::NoptrabstractdeclaratorContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}

CParser::AttributespecifierseqContext* CParser::NoptrabstractdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CParser::NoptrabstractdeclaratorContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::PtrabstractdeclaratorContext* CParser::NoptrabstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<CParser::PtrabstractdeclaratorContext>(0);
}

tree::TerminalNode* CParser::NoptrabstractdeclaratorContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::NoptrabstractdeclaratorContext* CParser::NoptrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<CParser::NoptrabstractdeclaratorContext>(0);
}


size_t CParser::NoptrabstractdeclaratorContext::getRuleIndex() const {
  return CParser::RuleNoptrabstractdeclarator;
}

void CParser::NoptrabstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrabstractdeclarator(this);
}

void CParser::NoptrabstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrabstractdeclarator(this);
}


antlrcpp::Any CParser::NoptrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNoptrabstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}


CParser::NoptrabstractdeclaratorContext* CParser::noptrabstractdeclarator() {
   return noptrabstractdeclarator(0);
}

CParser::NoptrabstractdeclaratorContext* CParser::noptrabstractdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::NoptrabstractdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(_ctx, parentState);
  CParser::NoptrabstractdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 264;
  enterRecursionRule(_localctx, 264, CParser::RuleNoptrabstractdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1787);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
    case 1: {
      setState(1774);
      parametersandqualifiers();
      break;
    }

    case 2: {
      setState(1775);
      match(CParser::LeftBracket);
      setState(1777);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Const_cast)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Delete)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Dynamic_cast)
        | (1ULL << CParser::False)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::New)
        | (1ULL << CParser::Noexcept)
        | (1ULL << CParser::Nullptr)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Reinterpret_cast)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
        | (1ULL << (CParser::This - 64))
        | (1ULL << (CParser::True - 64))
        | (1ULL << (CParser::Typeid_ - 64))
        | (1ULL << (CParser::Typename_ - 64))
        | (1ULL << (CParser::Unsigned - 64))
        | (1ULL << (CParser::Void - 64))
        | (1ULL << (CParser::Wchar - 64))
        | (1ULL << (CParser::LeftParen - 64))
        | (1ULL << (CParser::LeftBracket - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
        | (1ULL << (CParser::Identifier - 128))
        | (1ULL << (CParser::Integerliteral - 128))
        | (1ULL << (CParser::Characterliteral - 128))
        | (1ULL << (CParser::Floatingliteral - 128))
        | (1ULL << (CParser::Stringliteral - 128))
        | (1ULL << (CParser::Userdefinedintegerliteral - 128))
        | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (CParser::Userdefinedstringliteral - 128))
        | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(1776);
        constantexpression();
      }
      setState(1779);
      match(CParser::RightBracket);
      setState(1781);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 198, _ctx)) {
      case 1: {
        setState(1780);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 3: {
      setState(1783);
      match(CParser::LeftParen);
      setState(1784);
      ptrabstractdeclarator();
      setState(1785);
      match(CParser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1802);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1800);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1789);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1790);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1791);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1792);
          match(CParser::LeftBracket);
          setState(1794);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Auto)
            | (1ULL << CParser::Bool)
            | (1ULL << CParser::Char)
            | (1ULL << CParser::Char16)
            | (1ULL << CParser::Char32)
            | (1ULL << CParser::Const_cast)
            | (1ULL << CParser::Decltype)
            | (1ULL << CParser::Delete)
            | (1ULL << CParser::Double)
            | (1ULL << CParser::Dynamic_cast)
            | (1ULL << CParser::False)
            | (1ULL << CParser::Float)
            | (1ULL << CParser::Int)
            | (1ULL << CParser::Long)
            | (1ULL << CParser::New)
            | (1ULL << CParser::Noexcept)
            | (1ULL << CParser::Nullptr)
            | (1ULL << CParser::Operator)
            | (1ULL << CParser::Reinterpret_cast)
            | (1ULL << CParser::Short)
            | (1ULL << CParser::Signed)
            | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
            | (1ULL << (CParser::This - 64))
            | (1ULL << (CParser::True - 64))
            | (1ULL << (CParser::Typeid_ - 64))
            | (1ULL << (CParser::Typename_ - 64))
            | (1ULL << (CParser::Unsigned - 64))
            | (1ULL << (CParser::Void - 64))
            | (1ULL << (CParser::Wchar - 64))
            | (1ULL << (CParser::LeftParen - 64))
            | (1ULL << (CParser::LeftBracket - 64))
            | (1ULL << (CParser::Plus - 64))
            | (1ULL << (CParser::Minus - 64))
            | (1ULL << (CParser::Star - 64))
            | (1ULL << (CParser::And - 64))
            | (1ULL << (CParser::Or - 64))
            | (1ULL << (CParser::Tilde - 64))
            | (1ULL << (CParser::PlusPlus - 64))
            | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
            | (1ULL << (CParser::Identifier - 128))
            | (1ULL << (CParser::Integerliteral - 128))
            | (1ULL << (CParser::Characterliteral - 128))
            | (1ULL << (CParser::Floatingliteral - 128))
            | (1ULL << (CParser::Stringliteral - 128))
            | (1ULL << (CParser::Userdefinedintegerliteral - 128))
            | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
            | (1ULL << (CParser::Userdefinedstringliteral - 128))
            | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
            setState(1793);
            constantexpression();
          }
          setState(1796);
          match(CParser::RightBracket);
          setState(1798);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
          case 1: {
            setState(1797);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1804);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AbstractpackdeclaratorContext ------------------------------------------------------------------

CParser::AbstractpackdeclaratorContext::AbstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::NoptrabstractpackdeclaratorContext* CParser::AbstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<CParser::NoptrabstractpackdeclaratorContext>(0);
}

CParser::PtroperatorContext* CParser::AbstractpackdeclaratorContext::ptroperator() {
  return getRuleContext<CParser::PtroperatorContext>(0);
}

CParser::AbstractpackdeclaratorContext* CParser::AbstractpackdeclaratorContext::abstractpackdeclarator() {
  return getRuleContext<CParser::AbstractpackdeclaratorContext>(0);
}


size_t CParser::AbstractpackdeclaratorContext::getRuleIndex() const {
  return CParser::RuleAbstractpackdeclarator;
}

void CParser::AbstractpackdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractpackdeclarator(this);
}

void CParser::AbstractpackdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractpackdeclarator(this);
}


antlrcpp::Any CParser::AbstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAbstractpackdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::AbstractpackdeclaratorContext* CParser::abstractpackdeclarator() {
  AbstractpackdeclaratorContext *_localctx = _tracker.createInstance<AbstractpackdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 266, CParser::RuleAbstractpackdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1809);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Ellipsis: {
        enterOuterAlt(_localctx, 1);
        setState(1805);
        noptrabstractpackdeclarator(0);
        break;
      }

      case CParser::T__2:
      case CParser::Decltype:
      case CParser::Star:
      case CParser::And:
      case CParser::Doublecolon:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1806);
        ptroperator();
        setState(1807);
        abstractpackdeclarator();
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

//----------------- NoptrabstractpackdeclaratorContext ------------------------------------------------------------------

CParser::NoptrabstractpackdeclaratorContext::NoptrabstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NoptrabstractpackdeclaratorContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

CParser::NoptrabstractpackdeclaratorContext* CParser::NoptrabstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<CParser::NoptrabstractpackdeclaratorContext>(0);
}

CParser::ParametersandqualifiersContext* CParser::NoptrabstractpackdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CParser::ParametersandqualifiersContext>(0);
}

tree::TerminalNode* CParser::NoptrabstractpackdeclaratorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::NoptrabstractpackdeclaratorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

CParser::ConstantexpressionContext* CParser::NoptrabstractpackdeclaratorContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}

CParser::AttributespecifierseqContext* CParser::NoptrabstractpackdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}


size_t CParser::NoptrabstractpackdeclaratorContext::getRuleIndex() const {
  return CParser::RuleNoptrabstractpackdeclarator;
}

void CParser::NoptrabstractpackdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrabstractpackdeclarator(this);
}

void CParser::NoptrabstractpackdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrabstractpackdeclarator(this);
}


antlrcpp::Any CParser::NoptrabstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNoptrabstractpackdeclarator(this);
  else
    return visitor->visitChildren(this);
}


CParser::NoptrabstractpackdeclaratorContext* CParser::noptrabstractpackdeclarator() {
   return noptrabstractpackdeclarator(0);
}

CParser::NoptrabstractpackdeclaratorContext* CParser::noptrabstractpackdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::NoptrabstractpackdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(_ctx, parentState);
  CParser::NoptrabstractpackdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 268;
  enterRecursionRule(_localctx, 268, CParser::RuleNoptrabstractpackdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1812);
    match(CParser::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1827);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1825);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1814);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1815);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1816);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1817);
          match(CParser::LeftBracket);
          setState(1819);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CParser::T__0)
            | (1ULL << CParser::T__1)
            | (1ULL << CParser::Alignof)
            | (1ULL << CParser::Auto)
            | (1ULL << CParser::Bool)
            | (1ULL << CParser::Char)
            | (1ULL << CParser::Char16)
            | (1ULL << CParser::Char32)
            | (1ULL << CParser::Const_cast)
            | (1ULL << CParser::Decltype)
            | (1ULL << CParser::Delete)
            | (1ULL << CParser::Double)
            | (1ULL << CParser::Dynamic_cast)
            | (1ULL << CParser::False)
            | (1ULL << CParser::Float)
            | (1ULL << CParser::Int)
            | (1ULL << CParser::Long)
            | (1ULL << CParser::New)
            | (1ULL << CParser::Noexcept)
            | (1ULL << CParser::Nullptr)
            | (1ULL << CParser::Operator)
            | (1ULL << CParser::Reinterpret_cast)
            | (1ULL << CParser::Short)
            | (1ULL << CParser::Signed)
            | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
            | (1ULL << (CParser::This - 64))
            | (1ULL << (CParser::True - 64))
            | (1ULL << (CParser::Typeid_ - 64))
            | (1ULL << (CParser::Typename_ - 64))
            | (1ULL << (CParser::Unsigned - 64))
            | (1ULL << (CParser::Void - 64))
            | (1ULL << (CParser::Wchar - 64))
            | (1ULL << (CParser::LeftParen - 64))
            | (1ULL << (CParser::LeftBracket - 64))
            | (1ULL << (CParser::Plus - 64))
            | (1ULL << (CParser::Minus - 64))
            | (1ULL << (CParser::Star - 64))
            | (1ULL << (CParser::And - 64))
            | (1ULL << (CParser::Or - 64))
            | (1ULL << (CParser::Tilde - 64))
            | (1ULL << (CParser::PlusPlus - 64))
            | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
            | (1ULL << (CParser::Identifier - 128))
            | (1ULL << (CParser::Integerliteral - 128))
            | (1ULL << (CParser::Characterliteral - 128))
            | (1ULL << (CParser::Floatingliteral - 128))
            | (1ULL << (CParser::Stringliteral - 128))
            | (1ULL << (CParser::Userdefinedintegerliteral - 128))
            | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
            | (1ULL << (CParser::Userdefinedstringliteral - 128))
            | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
            setState(1818);
            constantexpression();
          }
          setState(1821);
          match(CParser::RightBracket);
          setState(1823);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
          case 1: {
            setState(1822);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1829);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterdeclarationclauseContext ------------------------------------------------------------------

CParser::ParameterdeclarationclauseContext::ParameterdeclarationclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ParameterdeclarationlistContext* CParser::ParameterdeclarationclauseContext::parameterdeclarationlist() {
  return getRuleContext<CParser::ParameterdeclarationlistContext>(0);
}

tree::TerminalNode* CParser::ParameterdeclarationclauseContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

tree::TerminalNode* CParser::ParameterdeclarationclauseContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::ParameterdeclarationclauseContext::getRuleIndex() const {
  return CParser::RuleParameterdeclarationclause;
}

void CParser::ParameterdeclarationclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclarationclause(this);
}

void CParser::ParameterdeclarationclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclarationclause(this);
}


antlrcpp::Any CParser::ParameterdeclarationclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParameterdeclarationclause(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParameterdeclarationclauseContext* CParser::parameterdeclarationclause() {
  ParameterdeclarationclauseContext *_localctx = _tracker.createInstance<ParameterdeclarationclauseContext>(_ctx, getState());
  enterRule(_localctx, 270, CParser::RuleParameterdeclarationclause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1840);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 211, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1831);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 9) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 9)) & ((1ULL << (CParser::Alignas - 9))
        | (1ULL << (CParser::Auto - 9))
        | (1ULL << (CParser::Bool - 9))
        | (1ULL << (CParser::Char - 9))
        | (1ULL << (CParser::Char16 - 9))
        | (1ULL << (CParser::Char32 - 9))
        | (1ULL << (CParser::Class - 9))
        | (1ULL << (CParser::Const - 9))
        | (1ULL << (CParser::Constexpr - 9))
        | (1ULL << (CParser::Decltype - 9))
        | (1ULL << (CParser::Double - 9))
        | (1ULL << (CParser::Enum - 9))
        | (1ULL << (CParser::Explicit - 9))
        | (1ULL << (CParser::Extern - 9))
        | (1ULL << (CParser::Float - 9))
        | (1ULL << (CParser::Friend - 9))
        | (1ULL << (CParser::Inline - 9))
        | (1ULL << (CParser::Int - 9))
        | (1ULL << (CParser::Long - 9))
        | (1ULL << (CParser::Mutable - 9))
        | (1ULL << (CParser::Register - 9))
        | (1ULL << (CParser::Short - 9))
        | (1ULL << (CParser::Signed - 9))
        | (1ULL << (CParser::Static - 9))
        | (1ULL << (CParser::Struct - 9))
        | (1ULL << (CParser::Thread_local - 9)))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (CParser::Typedef - 73))
        | (1ULL << (CParser::Typename_ - 73))
        | (1ULL << (CParser::Union - 73))
        | (1ULL << (CParser::Unsigned - 73))
        | (1ULL << (CParser::Virtual - 73))
        | (1ULL << (CParser::Void - 73))
        | (1ULL << (CParser::Volatile - 73))
        | (1ULL << (CParser::Wchar - 73))
        | (1ULL << (CParser::LeftBracket - 73))
        | (1ULL << (CParser::Doublecolon - 73))
        | (1ULL << (CParser::Identifier - 73)))) != 0)) {
        setState(1830);
        parameterdeclarationlist(0);
      }
      setState(1834);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Ellipsis) {
        setState(1833);
        match(CParser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1836);
      parameterdeclarationlist(0);
      setState(1837);
      match(CParser::Comma);
      setState(1838);
      match(CParser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterdeclarationlistContext ------------------------------------------------------------------

CParser::ParameterdeclarationlistContext::ParameterdeclarationlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ParameterdeclarationContext* CParser::ParameterdeclarationlistContext::parameterdeclaration() {
  return getRuleContext<CParser::ParameterdeclarationContext>(0);
}

CParser::ParameterdeclarationlistContext* CParser::ParameterdeclarationlistContext::parameterdeclarationlist() {
  return getRuleContext<CParser::ParameterdeclarationlistContext>(0);
}

tree::TerminalNode* CParser::ParameterdeclarationlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::ParameterdeclarationlistContext::getRuleIndex() const {
  return CParser::RuleParameterdeclarationlist;
}

void CParser::ParameterdeclarationlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclarationlist(this);
}

void CParser::ParameterdeclarationlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclarationlist(this);
}


antlrcpp::Any CParser::ParameterdeclarationlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParameterdeclarationlist(this);
  else
    return visitor->visitChildren(this);
}


CParser::ParameterdeclarationlistContext* CParser::parameterdeclarationlist() {
   return parameterdeclarationlist(0);
}

CParser::ParameterdeclarationlistContext* CParser::parameterdeclarationlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::ParameterdeclarationlistContext *_localctx = _tracker.createInstance<ParameterdeclarationlistContext>(_ctx, parentState);
  CParser::ParameterdeclarationlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 272;
  enterRecursionRule(_localctx, 272, CParser::RuleParameterdeclarationlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1843);
    parameterdeclaration();
    _ctx->stop = _input->LT(-1);
    setState(1850);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterdeclarationlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterdeclarationlist);
        setState(1845);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1846);
        match(CParser::Comma);
        setState(1847);
        parameterdeclaration(); 
      }
      setState(1852);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterdeclarationContext ------------------------------------------------------------------

CParser::ParameterdeclarationContext::ParameterdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclspecifierseqContext* CParser::ParameterdeclarationContext::declspecifierseq() {
  return getRuleContext<CParser::DeclspecifierseqContext>(0);
}

CParser::DeclaratorContext* CParser::ParameterdeclarationContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::AttributespecifierseqContext* CParser::ParameterdeclarationContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CParser::ParameterdeclarationContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::InitializerclauseContext* CParser::ParameterdeclarationContext::initializerclause() {
  return getRuleContext<CParser::InitializerclauseContext>(0);
}

CParser::AbstractdeclaratorContext* CParser::ParameterdeclarationContext::abstractdeclarator() {
  return getRuleContext<CParser::AbstractdeclaratorContext>(0);
}


size_t CParser::ParameterdeclarationContext::getRuleIndex() const {
  return CParser::RuleParameterdeclaration;
}

void CParser::ParameterdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclaration(this);
}

void CParser::ParameterdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclaration(this);
}


antlrcpp::Any CParser::ParameterdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParameterdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParameterdeclarationContext* CParser::parameterdeclaration() {
  ParameterdeclarationContext *_localctx = _tracker.createInstance<ParameterdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 274, CParser::RuleParameterdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1884);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 219, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1854);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1853);
        attributespecifierseq(0);
      }
      setState(1856);
      declspecifierseq();
      setState(1857);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1860);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1859);
        attributespecifierseq(0);
      }
      setState(1862);
      declspecifierseq();
      setState(1863);
      declarator();
      setState(1864);
      match(CParser::Assign);
      setState(1865);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1868);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1867);
        attributespecifierseq(0);
      }
      setState(1870);
      declspecifierseq();
      setState(1872);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 216, _ctx)) {
      case 1: {
        setState(1871);
        abstractdeclarator();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1875);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1874);
        attributespecifierseq(0);
      }
      setState(1877);
      declspecifierseq();
      setState(1879);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::T__2

      || _la == CParser::Decltype || ((((_la - 84) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 84)) & ((1ULL << (CParser::LeftParen - 84))
        | (1ULL << (CParser::LeftBracket - 84))
        | (1ULL << (CParser::Star - 84))
        | (1ULL << (CParser::And - 84))
        | (1ULL << (CParser::Doublecolon - 84))
        | (1ULL << (CParser::Ellipsis - 84))
        | (1ULL << (CParser::Identifier - 84)))) != 0)) {
        setState(1878);
        abstractdeclarator();
      }
      setState(1881);
      match(CParser::Assign);
      setState(1882);
      initializerclause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefinitionContext ------------------------------------------------------------------

CParser::FunctiondefinitionContext::FunctiondefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::FunctiondefinitionContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::FunctionbodyContext* CParser::FunctiondefinitionContext::functionbody() {
  return getRuleContext<CParser::FunctionbodyContext>(0);
}

CParser::AttributespecifierseqContext* CParser::FunctiondefinitionContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::DeclspecifierseqContext* CParser::FunctiondefinitionContext::declspecifierseq() {
  return getRuleContext<CParser::DeclspecifierseqContext>(0);
}

CParser::VirtspecifierseqContext* CParser::FunctiondefinitionContext::virtspecifierseq() {
  return getRuleContext<CParser::VirtspecifierseqContext>(0);
}


size_t CParser::FunctiondefinitionContext::getRuleIndex() const {
  return CParser::RuleFunctiondefinition;
}

void CParser::FunctiondefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiondefinition(this);
}

void CParser::FunctiondefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiondefinition(this);
}


antlrcpp::Any CParser::FunctiondefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunctiondefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::FunctiondefinitionContext* CParser::functiondefinition() {
  FunctiondefinitionContext *_localctx = _tracker.createInstance<FunctiondefinitionContext>(_ctx, getState());
  enterRule(_localctx, 276, CParser::RuleFunctiondefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1887);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
      setState(1886);
      attributespecifierseq(0);
    }
    setState(1890);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 221, _ctx)) {
    case 1: {
      setState(1889);
      declspecifierseq();
      break;
    }

    }
    setState(1892);
    declarator();
    setState(1894);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Final

    || _la == CParser::Override) {
      setState(1893);
      virtspecifierseq(0);
    }
    setState(1896);
    functionbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionbodyContext ------------------------------------------------------------------

CParser::FunctionbodyContext::FunctionbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::CompoundstatementContext* CParser::FunctionbodyContext::compoundstatement() {
  return getRuleContext<CParser::CompoundstatementContext>(0);
}

CParser::CtorinitializerContext* CParser::FunctionbodyContext::ctorinitializer() {
  return getRuleContext<CParser::CtorinitializerContext>(0);
}

CParser::FunctiontryblockContext* CParser::FunctionbodyContext::functiontryblock() {
  return getRuleContext<CParser::FunctiontryblockContext>(0);
}

tree::TerminalNode* CParser::FunctionbodyContext::Assign() {
  return getToken(CParser::Assign, 0);
}

tree::TerminalNode* CParser::FunctionbodyContext::Default() {
  return getToken(CParser::Default, 0);
}

tree::TerminalNode* CParser::FunctionbodyContext::Semi() {
  return getToken(CParser::Semi, 0);
}

tree::TerminalNode* CParser::FunctionbodyContext::Delete() {
  return getToken(CParser::Delete, 0);
}


size_t CParser::FunctionbodyContext::getRuleIndex() const {
  return CParser::RuleFunctionbody;
}

void CParser::FunctionbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionbody(this);
}

void CParser::FunctionbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionbody(this);
}


antlrcpp::Any CParser::FunctionbodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunctionbody(this);
  else
    return visitor->visitChildren(this);
}

CParser::FunctionbodyContext* CParser::functionbody() {
  FunctionbodyContext *_localctx = _tracker.createInstance<FunctionbodyContext>(_ctx, getState());
  enterRule(_localctx, 278, CParser::RuleFunctionbody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1909);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 224, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1899);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Colon) {
        setState(1898);
        ctorinitializer();
      }
      setState(1901);
      compoundstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1902);
      functiontryblock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1903);
      match(CParser::Assign);
      setState(1904);
      match(CParser::Default);
      setState(1905);
      match(CParser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1906);
      match(CParser::Assign);
      setState(1907);
      match(CParser::Delete);
      setState(1908);
      match(CParser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

CParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::BraceorequalinitializerContext* CParser::InitializerContext::braceorequalinitializer() {
  return getRuleContext<CParser::BraceorequalinitializerContext>(0);
}

tree::TerminalNode* CParser::InitializerContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExpressionlistContext* CParser::InitializerContext::expressionlist() {
  return getRuleContext<CParser::ExpressionlistContext>(0);
}

tree::TerminalNode* CParser::InitializerContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::InitializerContext::getRuleIndex() const {
  return CParser::RuleInitializer;
}

void CParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void CParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any CParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitializerContext* CParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 280, CParser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1916);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftBrace:
      case CParser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1911);
        braceorequalinitializer();
        break;
      }

      case CParser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(1912);
        match(CParser::LeftParen);
        setState(1913);
        expressionlist();
        setState(1914);
        match(CParser::RightParen);
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

//----------------- BraceorequalinitializerContext ------------------------------------------------------------------

CParser::BraceorequalinitializerContext::BraceorequalinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::BraceorequalinitializerContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::InitializerclauseContext* CParser::BraceorequalinitializerContext::initializerclause() {
  return getRuleContext<CParser::InitializerclauseContext>(0);
}

CParser::BracedinitlistContext* CParser::BraceorequalinitializerContext::bracedinitlist() {
  return getRuleContext<CParser::BracedinitlistContext>(0);
}


size_t CParser::BraceorequalinitializerContext::getRuleIndex() const {
  return CParser::RuleBraceorequalinitializer;
}

void CParser::BraceorequalinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraceorequalinitializer(this);
}

void CParser::BraceorequalinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraceorequalinitializer(this);
}


antlrcpp::Any CParser::BraceorequalinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBraceorequalinitializer(this);
  else
    return visitor->visitChildren(this);
}

CParser::BraceorequalinitializerContext* CParser::braceorequalinitializer() {
  BraceorequalinitializerContext *_localctx = _tracker.createInstance<BraceorequalinitializerContext>(_ctx, getState());
  enterRule(_localctx, 282, CParser::RuleBraceorequalinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1921);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1918);
        match(CParser::Assign);
        setState(1919);
        initializerclause();
        break;
      }

      case CParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1920);
        bracedinitlist();
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

//----------------- InitializerclauseContext ------------------------------------------------------------------

CParser::InitializerclauseContext::InitializerclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::AssignmentexpressionContext* CParser::InitializerclauseContext::assignmentexpression() {
  return getRuleContext<CParser::AssignmentexpressionContext>(0);
}

CParser::BracedinitlistContext* CParser::InitializerclauseContext::bracedinitlist() {
  return getRuleContext<CParser::BracedinitlistContext>(0);
}


size_t CParser::InitializerclauseContext::getRuleIndex() const {
  return CParser::RuleInitializerclause;
}

void CParser::InitializerclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerclause(this);
}

void CParser::InitializerclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerclause(this);
}


antlrcpp::Any CParser::InitializerclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitializerclause(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitializerclauseContext* CParser::initializerclause() {
  InitializerclauseContext *_localctx = _tracker.createInstance<InitializerclauseContext>(_ctx, getState());
  enterRule(_localctx, 284, CParser::RuleInitializerclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1925);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__1:
      case CParser::Alignof:
      case CParser::Auto:
      case CParser::Bool:
      case CParser::Char:
      case CParser::Char16:
      case CParser::Char32:
      case CParser::Const_cast:
      case CParser::Decltype:
      case CParser::Delete:
      case CParser::Double:
      case CParser::Dynamic_cast:
      case CParser::False:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::New:
      case CParser::Noexcept:
      case CParser::Nullptr:
      case CParser::Operator:
      case CParser::Reinterpret_cast:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Sizeof:
      case CParser::Static_cast:
      case CParser::This:
      case CParser::Throw:
      case CParser::True:
      case CParser::Typeid_:
      case CParser::Typename_:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Wchar:
      case CParser::LeftParen:
      case CParser::LeftBracket:
      case CParser::Plus:
      case CParser::Minus:
      case CParser::Star:
      case CParser::And:
      case CParser::Or:
      case CParser::Tilde:
      case CParser::PlusPlus:
      case CParser::MinusMinus:
      case CParser::Doublecolon:
      case CParser::Identifier:
      case CParser::Integerliteral:
      case CParser::Characterliteral:
      case CParser::Floatingliteral:
      case CParser::Stringliteral:
      case CParser::Userdefinedintegerliteral:
      case CParser::Userdefinedfloatingliteral:
      case CParser::Userdefinedstringliteral:
      case CParser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(1923);
        assignmentexpression();
        break;
      }

      case CParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1924);
        bracedinitlist();
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

//----------------- InitializerlistContext ------------------------------------------------------------------

CParser::InitializerlistContext::InitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::InitializerclauseContext* CParser::InitializerlistContext::initializerclause() {
  return getRuleContext<CParser::InitializerclauseContext>(0);
}

tree::TerminalNode* CParser::InitializerlistContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

CParser::InitializerlistContext* CParser::InitializerlistContext::initializerlist() {
  return getRuleContext<CParser::InitializerlistContext>(0);
}

tree::TerminalNode* CParser::InitializerlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::InitializerlistContext::getRuleIndex() const {
  return CParser::RuleInitializerlist;
}

void CParser::InitializerlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerlist(this);
}

void CParser::InitializerlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerlist(this);
}


antlrcpp::Any CParser::InitializerlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitializerlist(this);
  else
    return visitor->visitChildren(this);
}


CParser::InitializerlistContext* CParser::initializerlist() {
   return initializerlist(0);
}

CParser::InitializerlistContext* CParser::initializerlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::InitializerlistContext *_localctx = _tracker.createInstance<InitializerlistContext>(_ctx, parentState);
  CParser::InitializerlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 286;
  enterRecursionRule(_localctx, 286, CParser::RuleInitializerlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1928);
    initializerclause();
    setState(1930);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 228, _ctx)) {
    case 1: {
      setState(1929);
      match(CParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1940);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerlist);
        setState(1932);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1933);
        match(CParser::Comma);
        setState(1934);
        initializerclause();
        setState(1936);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 229, _ctx)) {
        case 1: {
          setState(1935);
          match(CParser::Ellipsis);
          break;
        }

        } 
      }
      setState(1942);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BracedinitlistContext ------------------------------------------------------------------

CParser::BracedinitlistContext::BracedinitlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::BracedinitlistContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

CParser::InitializerlistContext* CParser::BracedinitlistContext::initializerlist() {
  return getRuleContext<CParser::InitializerlistContext>(0);
}

tree::TerminalNode* CParser::BracedinitlistContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

tree::TerminalNode* CParser::BracedinitlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::BracedinitlistContext::getRuleIndex() const {
  return CParser::RuleBracedinitlist;
}

void CParser::BracedinitlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracedinitlist(this);
}

void CParser::BracedinitlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracedinitlist(this);
}


antlrcpp::Any CParser::BracedinitlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBracedinitlist(this);
  else
    return visitor->visitChildren(this);
}

CParser::BracedinitlistContext* CParser::bracedinitlist() {
  BracedinitlistContext *_localctx = _tracker.createInstance<BracedinitlistContext>(_ctx, getState());
  enterRule(_localctx, 288, CParser::RuleBracedinitlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1952);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 232, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1943);
      match(CParser::LeftBrace);
      setState(1944);
      initializerlist(0);
      setState(1946);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Comma) {
        setState(1945);
        match(CParser::Comma);
      }
      setState(1948);
      match(CParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1950);
      match(CParser::LeftBrace);
      setState(1951);
      match(CParser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassnameContext ------------------------------------------------------------------

CParser::ClassnameContext::ClassnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ClassnameContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::SimpletemplateidContext* CParser::ClassnameContext::simpletemplateid() {
  return getRuleContext<CParser::SimpletemplateidContext>(0);
}


size_t CParser::ClassnameContext::getRuleIndex() const {
  return CParser::RuleClassname;
}

void CParser::ClassnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassname(this);
}

void CParser::ClassnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassname(this);
}


antlrcpp::Any CParser::ClassnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitClassname(this);
  else
    return visitor->visitChildren(this);
}

CParser::ClassnameContext* CParser::classname() {
  ClassnameContext *_localctx = _tracker.createInstance<ClassnameContext>(_ctx, getState());
  enterRule(_localctx, 290, CParser::RuleClassname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1956);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1954);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1955);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassspecifierContext ------------------------------------------------------------------

CParser::ClassspecifierContext::ClassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ClassheadContext* CParser::ClassspecifierContext::classhead() {
  return getRuleContext<CParser::ClassheadContext>(0);
}

tree::TerminalNode* CParser::ClassspecifierContext::LeftBrace() {
  return getToken(CParser::LeftBrace, 0);
}

tree::TerminalNode* CParser::ClassspecifierContext::RightBrace() {
  return getToken(CParser::RightBrace, 0);
}

CParser::MemberspecificationContext* CParser::ClassspecifierContext::memberspecification() {
  return getRuleContext<CParser::MemberspecificationContext>(0);
}


size_t CParser::ClassspecifierContext::getRuleIndex() const {
  return CParser::RuleClassspecifier;
}

void CParser::ClassspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassspecifier(this);
}

void CParser::ClassspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassspecifier(this);
}


antlrcpp::Any CParser::ClassspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitClassspecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::ClassspecifierContext* CParser::classspecifier() {
  ClassspecifierContext *_localctx = _tracker.createInstance<ClassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 292, CParser::RuleClassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1958);
    classhead();
    setState(1959);
    match(CParser::LeftBrace);
    setState(1961);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__2)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Char16)
      | (1ULL << CParser::Char32)
      | (1ULL << CParser::Class)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Constexpr)
      | (1ULL << CParser::Decltype)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Explicit)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Friend)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Mutable)
      | (1ULL << CParser::Operator)
      | (1ULL << CParser::Private)
      | (1ULL << CParser::Protected)
      | (1ULL << CParser::Public)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CParser::Struct - 65))
      | (1ULL << (CParser::Template - 65))
      | (1ULL << (CParser::Thread_local - 65))
      | (1ULL << (CParser::Typedef - 65))
      | (1ULL << (CParser::Typename_ - 65))
      | (1ULL << (CParser::Union - 65))
      | (1ULL << (CParser::Unsigned - 65))
      | (1ULL << (CParser::Using - 65))
      | (1ULL << (CParser::Virtual - 65))
      | (1ULL << (CParser::Void - 65))
      | (1ULL << (CParser::Volatile - 65))
      | (1ULL << (CParser::Wchar - 65))
      | (1ULL << (CParser::LeftParen - 65))
      | (1ULL << (CParser::LeftBracket - 65))
      | (1ULL << (CParser::Star - 65))
      | (1ULL << (CParser::And - 65))
      | (1ULL << (CParser::Tilde - 65))
      | (1ULL << (CParser::Colon - 65))
      | (1ULL << (CParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (CParser::Semi - 129))
      | (1ULL << (CParser::Ellipsis - 129))
      | (1ULL << (CParser::Identifier - 129)))) != 0)) {
      setState(1960);
      memberspecification();
    }
    setState(1963);
    match(CParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadContext ------------------------------------------------------------------

CParser::ClassheadContext::ClassheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ClasskeyContext* CParser::ClassheadContext::classkey() {
  return getRuleContext<CParser::ClasskeyContext>(0);
}

CParser::ClassheadnameContext* CParser::ClassheadContext::classheadname() {
  return getRuleContext<CParser::ClassheadnameContext>(0);
}

CParser::AttributespecifierseqContext* CParser::ClassheadContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::ClassvirtspecifierContext* CParser::ClassheadContext::classvirtspecifier() {
  return getRuleContext<CParser::ClassvirtspecifierContext>(0);
}

CParser::BaseclauseContext* CParser::ClassheadContext::baseclause() {
  return getRuleContext<CParser::BaseclauseContext>(0);
}


size_t CParser::ClassheadContext::getRuleIndex() const {
  return CParser::RuleClasshead;
}

void CParser::ClassheadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClasshead(this);
}

void CParser::ClassheadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClasshead(this);
}


antlrcpp::Any CParser::ClassheadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitClasshead(this);
  else
    return visitor->visitChildren(this);
}

CParser::ClassheadContext* CParser::classhead() {
  ClassheadContext *_localctx = _tracker.createInstance<ClassheadContext>(_ctx, getState());
  enterRule(_localctx, 294, CParser::RuleClasshead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1983);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 240, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1965);
      classkey();
      setState(1967);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1966);
        attributespecifierseq(0);
      }
      setState(1969);
      classheadname();
      setState(1971);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Final) {
        setState(1970);
        classvirtspecifier();
      }
      setState(1974);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Colon) {
        setState(1973);
        baseclause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1976);
      classkey();
      setState(1978);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(1977);
        attributespecifierseq(0);
      }
      setState(1981);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Colon) {
        setState(1980);
        baseclause();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadnameContext ------------------------------------------------------------------

CParser::ClassheadnameContext::ClassheadnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ClassnameContext* CParser::ClassheadnameContext::classname() {
  return getRuleContext<CParser::ClassnameContext>(0);
}

CParser::NestednamespecifierContext* CParser::ClassheadnameContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}


size_t CParser::ClassheadnameContext::getRuleIndex() const {
  return CParser::RuleClassheadname;
}

void CParser::ClassheadnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassheadname(this);
}

void CParser::ClassheadnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassheadname(this);
}


antlrcpp::Any CParser::ClassheadnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitClassheadname(this);
  else
    return visitor->visitChildren(this);
}

CParser::ClassheadnameContext* CParser::classheadname() {
  ClassheadnameContext *_localctx = _tracker.createInstance<ClassheadnameContext>(_ctx, getState());
  enterRule(_localctx, 296, CParser::RuleClassheadname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1986);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      setState(1985);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1988);
    classname();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassvirtspecifierContext ------------------------------------------------------------------

CParser::ClassvirtspecifierContext::ClassvirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ClassvirtspecifierContext::Final() {
  return getToken(CParser::Final, 0);
}


size_t CParser::ClassvirtspecifierContext::getRuleIndex() const {
  return CParser::RuleClassvirtspecifier;
}

void CParser::ClassvirtspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassvirtspecifier(this);
}

void CParser::ClassvirtspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassvirtspecifier(this);
}


antlrcpp::Any CParser::ClassvirtspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitClassvirtspecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::ClassvirtspecifierContext* CParser::classvirtspecifier() {
  ClassvirtspecifierContext *_localctx = _tracker.createInstance<ClassvirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 298, CParser::RuleClassvirtspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1990);
    match(CParser::Final);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClasskeyContext ------------------------------------------------------------------

CParser::ClasskeyContext::ClasskeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ClasskeyContext::Class() {
  return getToken(CParser::Class, 0);
}

tree::TerminalNode* CParser::ClasskeyContext::Struct() {
  return getToken(CParser::Struct, 0);
}

tree::TerminalNode* CParser::ClasskeyContext::Union() {
  return getToken(CParser::Union, 0);
}


size_t CParser::ClasskeyContext::getRuleIndex() const {
  return CParser::RuleClasskey;
}

void CParser::ClasskeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClasskey(this);
}

void CParser::ClasskeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClasskey(this);
}


antlrcpp::Any CParser::ClasskeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitClasskey(this);
  else
    return visitor->visitChildren(this);
}

CParser::ClasskeyContext* CParser::classkey() {
  ClasskeyContext *_localctx = _tracker.createInstance<ClasskeyContext>(_ctx, getState());
  enterRule(_localctx, 300, CParser::RuleClasskey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1992);
    _la = _input->LA(1);
    if (!(((((_la - 20) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 20)) & ((1ULL << (CParser::Class - 20))
      | (1ULL << (CParser::Struct - 20))
      | (1ULL << (CParser::Union - 20)))) != 0))) {
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

//----------------- MemberspecificationContext ------------------------------------------------------------------

CParser::MemberspecificationContext::MemberspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::MemberdeclarationContext* CParser::MemberspecificationContext::memberdeclaration() {
  return getRuleContext<CParser::MemberdeclarationContext>(0);
}

CParser::MemberspecificationContext* CParser::MemberspecificationContext::memberspecification() {
  return getRuleContext<CParser::MemberspecificationContext>(0);
}

CParser::AccessspecifierContext* CParser::MemberspecificationContext::accessspecifier() {
  return getRuleContext<CParser::AccessspecifierContext>(0);
}

tree::TerminalNode* CParser::MemberspecificationContext::Colon() {
  return getToken(CParser::Colon, 0);
}


size_t CParser::MemberspecificationContext::getRuleIndex() const {
  return CParser::RuleMemberspecification;
}

void CParser::MemberspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberspecification(this);
}

void CParser::MemberspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberspecification(this);
}


antlrcpp::Any CParser::MemberspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMemberspecification(this);
  else
    return visitor->visitChildren(this);
}

CParser::MemberspecificationContext* CParser::memberspecification() {
  MemberspecificationContext *_localctx = _tracker.createInstance<MemberspecificationContext>(_ctx, getState());
  enterRule(_localctx, 302, CParser::RuleMemberspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2003);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__2:
      case CParser::Alignas:
      case CParser::Auto:
      case CParser::Bool:
      case CParser::Char:
      case CParser::Char16:
      case CParser::Char32:
      case CParser::Class:
      case CParser::Const:
      case CParser::Constexpr:
      case CParser::Decltype:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Explicit:
      case CParser::Extern:
      case CParser::Float:
      case CParser::Friend:
      case CParser::Inline:
      case CParser::Int:
      case CParser::Long:
      case CParser::Mutable:
      case CParser::Operator:
      case CParser::Register:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Static:
      case CParser::Static_assert:
      case CParser::Struct:
      case CParser::Template:
      case CParser::Thread_local:
      case CParser::Typedef:
      case CParser::Typename_:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Using:
      case CParser::Virtual:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Wchar:
      case CParser::LeftParen:
      case CParser::LeftBracket:
      case CParser::Star:
      case CParser::And:
      case CParser::Tilde:
      case CParser::Colon:
      case CParser::Doublecolon:
      case CParser::Semi:
      case CParser::Ellipsis:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1994);
        memberdeclaration();
        setState(1996);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__2)
          | (1ULL << CParser::Alignas)
          | (1ULL << CParser::Auto)
          | (1ULL << CParser::Bool)
          | (1ULL << CParser::Char)
          | (1ULL << CParser::Char16)
          | (1ULL << CParser::Char32)
          | (1ULL << CParser::Class)
          | (1ULL << CParser::Const)
          | (1ULL << CParser::Constexpr)
          | (1ULL << CParser::Decltype)
          | (1ULL << CParser::Double)
          | (1ULL << CParser::Enum)
          | (1ULL << CParser::Explicit)
          | (1ULL << CParser::Extern)
          | (1ULL << CParser::Float)
          | (1ULL << CParser::Friend)
          | (1ULL << CParser::Inline)
          | (1ULL << CParser::Int)
          | (1ULL << CParser::Long)
          | (1ULL << CParser::Mutable)
          | (1ULL << CParser::Operator)
          | (1ULL << CParser::Private)
          | (1ULL << CParser::Protected)
          | (1ULL << CParser::Public)
          | (1ULL << CParser::Register)
          | (1ULL << CParser::Short)
          | (1ULL << CParser::Signed)
          | (1ULL << CParser::Static)
          | (1ULL << CParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (CParser::Struct - 65))
          | (1ULL << (CParser::Template - 65))
          | (1ULL << (CParser::Thread_local - 65))
          | (1ULL << (CParser::Typedef - 65))
          | (1ULL << (CParser::Typename_ - 65))
          | (1ULL << (CParser::Union - 65))
          | (1ULL << (CParser::Unsigned - 65))
          | (1ULL << (CParser::Using - 65))
          | (1ULL << (CParser::Virtual - 65))
          | (1ULL << (CParser::Void - 65))
          | (1ULL << (CParser::Volatile - 65))
          | (1ULL << (CParser::Wchar - 65))
          | (1ULL << (CParser::LeftParen - 65))
          | (1ULL << (CParser::LeftBracket - 65))
          | (1ULL << (CParser::Star - 65))
          | (1ULL << (CParser::And - 65))
          | (1ULL << (CParser::Tilde - 65))
          | (1ULL << (CParser::Colon - 65))
          | (1ULL << (CParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 129)) & ((1ULL << (CParser::Semi - 129))
          | (1ULL << (CParser::Ellipsis - 129))
          | (1ULL << (CParser::Identifier - 129)))) != 0)) {
          setState(1995);
          memberspecification();
        }
        break;
      }

      case CParser::Private:
      case CParser::Protected:
      case CParser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(1998);
        accessspecifier();
        setState(1999);
        match(CParser::Colon);
        setState(2001);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CParser::T__2)
          | (1ULL << CParser::Alignas)
          | (1ULL << CParser::Auto)
          | (1ULL << CParser::Bool)
          | (1ULL << CParser::Char)
          | (1ULL << CParser::Char16)
          | (1ULL << CParser::Char32)
          | (1ULL << CParser::Class)
          | (1ULL << CParser::Const)
          | (1ULL << CParser::Constexpr)
          | (1ULL << CParser::Decltype)
          | (1ULL << CParser::Double)
          | (1ULL << CParser::Enum)
          | (1ULL << CParser::Explicit)
          | (1ULL << CParser::Extern)
          | (1ULL << CParser::Float)
          | (1ULL << CParser::Friend)
          | (1ULL << CParser::Inline)
          | (1ULL << CParser::Int)
          | (1ULL << CParser::Long)
          | (1ULL << CParser::Mutable)
          | (1ULL << CParser::Operator)
          | (1ULL << CParser::Private)
          | (1ULL << CParser::Protected)
          | (1ULL << CParser::Public)
          | (1ULL << CParser::Register)
          | (1ULL << CParser::Short)
          | (1ULL << CParser::Signed)
          | (1ULL << CParser::Static)
          | (1ULL << CParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (CParser::Struct - 65))
          | (1ULL << (CParser::Template - 65))
          | (1ULL << (CParser::Thread_local - 65))
          | (1ULL << (CParser::Typedef - 65))
          | (1ULL << (CParser::Typename_ - 65))
          | (1ULL << (CParser::Union - 65))
          | (1ULL << (CParser::Unsigned - 65))
          | (1ULL << (CParser::Using - 65))
          | (1ULL << (CParser::Virtual - 65))
          | (1ULL << (CParser::Void - 65))
          | (1ULL << (CParser::Volatile - 65))
          | (1ULL << (CParser::Wchar - 65))
          | (1ULL << (CParser::LeftParen - 65))
          | (1ULL << (CParser::LeftBracket - 65))
          | (1ULL << (CParser::Star - 65))
          | (1ULL << (CParser::And - 65))
          | (1ULL << (CParser::Tilde - 65))
          | (1ULL << (CParser::Colon - 65))
          | (1ULL << (CParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 129)) & ((1ULL << (CParser::Semi - 129))
          | (1ULL << (CParser::Ellipsis - 129))
          | (1ULL << (CParser::Identifier - 129)))) != 0)) {
          setState(2000);
          memberspecification();
        }
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

//----------------- MemberdeclarationContext ------------------------------------------------------------------

CParser::MemberdeclarationContext::MemberdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::MemberdeclarationContext::Semi() {
  return getToken(CParser::Semi, 0);
}

CParser::AttributespecifierseqContext* CParser::MemberdeclarationContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::DeclspecifierseqContext* CParser::MemberdeclarationContext::declspecifierseq() {
  return getRuleContext<CParser::DeclspecifierseqContext>(0);
}

CParser::MemberdeclaratorlistContext* CParser::MemberdeclarationContext::memberdeclaratorlist() {
  return getRuleContext<CParser::MemberdeclaratorlistContext>(0);
}

CParser::FunctiondefinitionContext* CParser::MemberdeclarationContext::functiondefinition() {
  return getRuleContext<CParser::FunctiondefinitionContext>(0);
}

CParser::UsingdeclarationContext* CParser::MemberdeclarationContext::usingdeclaration() {
  return getRuleContext<CParser::UsingdeclarationContext>(0);
}

CParser::Static_assertdeclarationContext* CParser::MemberdeclarationContext::static_assertdeclaration() {
  return getRuleContext<CParser::Static_assertdeclarationContext>(0);
}

CParser::TemplatedeclarationContext* CParser::MemberdeclarationContext::templatedeclaration() {
  return getRuleContext<CParser::TemplatedeclarationContext>(0);
}

CParser::AliasdeclarationContext* CParser::MemberdeclarationContext::aliasdeclaration() {
  return getRuleContext<CParser::AliasdeclarationContext>(0);
}

CParser::EmptydeclarationContext* CParser::MemberdeclarationContext::emptydeclaration() {
  return getRuleContext<CParser::EmptydeclarationContext>(0);
}


size_t CParser::MemberdeclarationContext::getRuleIndex() const {
  return CParser::RuleMemberdeclaration;
}

void CParser::MemberdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclaration(this);
}

void CParser::MemberdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclaration(this);
}


antlrcpp::Any CParser::MemberdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMemberdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::MemberdeclarationContext* CParser::memberdeclaration() {
  MemberdeclarationContext *_localctx = _tracker.createInstance<MemberdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 304, CParser::RuleMemberdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2021);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 248, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2006);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx)) {
      case 1: {
        setState(2005);
        attributespecifierseq(0);
        break;
      }

      }
      setState(2009);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx)) {
      case 1: {
        setState(2008);
        declspecifierseq();
        break;
      }

      }
      setState(2012);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__2)
        | (1ULL << CParser::Alignas)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Operator))) != 0) || ((((_la - 84) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 84)) & ((1ULL << (CParser::LeftParen - 84))
        | (1ULL << (CParser::LeftBracket - 84))
        | (1ULL << (CParser::Star - 84))
        | (1ULL << (CParser::And - 84))
        | (1ULL << (CParser::Tilde - 84))
        | (1ULL << (CParser::Colon - 84))
        | (1ULL << (CParser::Doublecolon - 84))
        | (1ULL << (CParser::Ellipsis - 84))
        | (1ULL << (CParser::Identifier - 84)))) != 0)) {
        setState(2011);
        memberdeclaratorlist(0);
      }
      setState(2014);
      match(CParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2015);
      functiondefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2016);
      usingdeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2017);
      static_assertdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2018);
      templatedeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2019);
      aliasdeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2020);
      emptydeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclaratorlistContext ------------------------------------------------------------------

CParser::MemberdeclaratorlistContext::MemberdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::MemberdeclaratorContext* CParser::MemberdeclaratorlistContext::memberdeclarator() {
  return getRuleContext<CParser::MemberdeclaratorContext>(0);
}

CParser::MemberdeclaratorlistContext* CParser::MemberdeclaratorlistContext::memberdeclaratorlist() {
  return getRuleContext<CParser::MemberdeclaratorlistContext>(0);
}

tree::TerminalNode* CParser::MemberdeclaratorlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::MemberdeclaratorlistContext::getRuleIndex() const {
  return CParser::RuleMemberdeclaratorlist;
}

void CParser::MemberdeclaratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclaratorlist(this);
}

void CParser::MemberdeclaratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclaratorlist(this);
}


antlrcpp::Any CParser::MemberdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMemberdeclaratorlist(this);
  else
    return visitor->visitChildren(this);
}


CParser::MemberdeclaratorlistContext* CParser::memberdeclaratorlist() {
   return memberdeclaratorlist(0);
}

CParser::MemberdeclaratorlistContext* CParser::memberdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::MemberdeclaratorlistContext *_localctx = _tracker.createInstance<MemberdeclaratorlistContext>(_ctx, parentState);
  CParser::MemberdeclaratorlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 306;
  enterRecursionRule(_localctx, 306, CParser::RuleMemberdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2024);
    memberdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(2031);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberdeclaratorlist);
        setState(2026);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2027);
        match(CParser::Comma);
        setState(2028);
        memberdeclarator(); 
      }
      setState(2033);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MemberdeclaratorContext ------------------------------------------------------------------

CParser::MemberdeclaratorContext::MemberdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::MemberdeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::VirtspecifierseqContext* CParser::MemberdeclaratorContext::virtspecifierseq() {
  return getRuleContext<CParser::VirtspecifierseqContext>(0);
}

CParser::PurespecifierContext* CParser::MemberdeclaratorContext::purespecifier() {
  return getRuleContext<CParser::PurespecifierContext>(0);
}

CParser::BraceorequalinitializerContext* CParser::MemberdeclaratorContext::braceorequalinitializer() {
  return getRuleContext<CParser::BraceorequalinitializerContext>(0);
}

tree::TerminalNode* CParser::MemberdeclaratorContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::ConstantexpressionContext* CParser::MemberdeclaratorContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* CParser::MemberdeclaratorContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::AttributespecifierseqContext* CParser::MemberdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}


size_t CParser::MemberdeclaratorContext::getRuleIndex() const {
  return CParser::RuleMemberdeclarator;
}

void CParser::MemberdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclarator(this);
}

void CParser::MemberdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclarator(this);
}


antlrcpp::Any CParser::MemberdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMemberdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::MemberdeclaratorContext* CParser::memberdeclarator() {
  MemberdeclaratorContext *_localctx = _tracker.createInstance<MemberdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 308, CParser::RuleMemberdeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2053);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 255, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2034);
      declarator();
      setState(2036);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx)) {
      case 1: {
        setState(2035);
        virtspecifierseq(0);
        break;
      }

      }
      setState(2039);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, _ctx)) {
      case 1: {
        setState(2038);
        purespecifier();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2041);
      declarator();
      setState(2043);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 252, _ctx)) {
      case 1: {
        setState(2042);
        braceorequalinitializer();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2046);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(2045);
        match(CParser::Identifier);
      }
      setState(2049);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(2048);
        attributespecifierseq(0);
      }
      setState(2051);
      match(CParser::Colon);
      setState(2052);
      constantexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtspecifierseqContext ------------------------------------------------------------------

CParser::VirtspecifierseqContext::VirtspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::VirtspecifierContext* CParser::VirtspecifierseqContext::virtspecifier() {
  return getRuleContext<CParser::VirtspecifierContext>(0);
}

CParser::VirtspecifierseqContext* CParser::VirtspecifierseqContext::virtspecifierseq() {
  return getRuleContext<CParser::VirtspecifierseqContext>(0);
}


size_t CParser::VirtspecifierseqContext::getRuleIndex() const {
  return CParser::RuleVirtspecifierseq;
}

void CParser::VirtspecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtspecifierseq(this);
}

void CParser::VirtspecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtspecifierseq(this);
}


antlrcpp::Any CParser::VirtspecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitVirtspecifierseq(this);
  else
    return visitor->visitChildren(this);
}


CParser::VirtspecifierseqContext* CParser::virtspecifierseq() {
   return virtspecifierseq(0);
}

CParser::VirtspecifierseqContext* CParser::virtspecifierseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::VirtspecifierseqContext *_localctx = _tracker.createInstance<VirtspecifierseqContext>(_ctx, parentState);
  CParser::VirtspecifierseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 310;
  enterRecursionRule(_localctx, 310, CParser::RuleVirtspecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2056);
    virtspecifier();
    _ctx->stop = _input->LT(-1);
    setState(2062);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VirtspecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVirtspecifierseq);
        setState(2058);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2059);
        virtspecifier(); 
      }
      setState(2064);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VirtspecifierContext ------------------------------------------------------------------

CParser::VirtspecifierContext::VirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::VirtspecifierContext::Override() {
  return getToken(CParser::Override, 0);
}

tree::TerminalNode* CParser::VirtspecifierContext::Final() {
  return getToken(CParser::Final, 0);
}


size_t CParser::VirtspecifierContext::getRuleIndex() const {
  return CParser::RuleVirtspecifier;
}

void CParser::VirtspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtspecifier(this);
}

void CParser::VirtspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtspecifier(this);
}


antlrcpp::Any CParser::VirtspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitVirtspecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::VirtspecifierContext* CParser::virtspecifier() {
  VirtspecifierContext *_localctx = _tracker.createInstance<VirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 312, CParser::RuleVirtspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2065);
    _la = _input->LA(1);
    if (!(_la == CParser::Final

    || _la == CParser::Override)) {
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

//----------------- PurespecifierContext ------------------------------------------------------------------

CParser::PurespecifierContext::PurespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::PurespecifierContext::Assign() {
  return getToken(CParser::Assign, 0);
}

tree::TerminalNode* CParser::PurespecifierContext::Octalliteral() {
  return getToken(CParser::Octalliteral, 0);
}


size_t CParser::PurespecifierContext::getRuleIndex() const {
  return CParser::RulePurespecifier;
}

void CParser::PurespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPurespecifier(this);
}

void CParser::PurespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPurespecifier(this);
}


antlrcpp::Any CParser::PurespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPurespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::PurespecifierContext* CParser::purespecifier() {
  PurespecifierContext *_localctx = _tracker.createInstance<PurespecifierContext>(_ctx, getState());
  enterRule(_localctx, 314, CParser::RulePurespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2067);
    match(CParser::Assign);
    setState(2068);
    dynamic_cast<PurespecifierContext *>(_localctx)->val = match(CParser::Octalliteral);
    if((dynamic_cast<PurespecifierContext *>(_localctx)->val != nullptr ? dynamic_cast<PurespecifierContext *>(_localctx)->val->getText() : "")!="0") throw new InputMismatchException(this);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseclauseContext ------------------------------------------------------------------

CParser::BaseclauseContext::BaseclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::BaseclauseContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::BasespecifierlistContext* CParser::BaseclauseContext::basespecifierlist() {
  return getRuleContext<CParser::BasespecifierlistContext>(0);
}


size_t CParser::BaseclauseContext::getRuleIndex() const {
  return CParser::RuleBaseclause;
}

void CParser::BaseclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseclause(this);
}

void CParser::BaseclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseclause(this);
}


antlrcpp::Any CParser::BaseclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBaseclause(this);
  else
    return visitor->visitChildren(this);
}

CParser::BaseclauseContext* CParser::baseclause() {
  BaseclauseContext *_localctx = _tracker.createInstance<BaseclauseContext>(_ctx, getState());
  enterRule(_localctx, 316, CParser::RuleBaseclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2071);
    match(CParser::Colon);
    setState(2072);
    basespecifierlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasespecifierlistContext ------------------------------------------------------------------

CParser::BasespecifierlistContext::BasespecifierlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::BasespecifierContext* CParser::BasespecifierlistContext::basespecifier() {
  return getRuleContext<CParser::BasespecifierContext>(0);
}

tree::TerminalNode* CParser::BasespecifierlistContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

CParser::BasespecifierlistContext* CParser::BasespecifierlistContext::basespecifierlist() {
  return getRuleContext<CParser::BasespecifierlistContext>(0);
}

tree::TerminalNode* CParser::BasespecifierlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::BasespecifierlistContext::getRuleIndex() const {
  return CParser::RuleBasespecifierlist;
}

void CParser::BasespecifierlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasespecifierlist(this);
}

void CParser::BasespecifierlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasespecifierlist(this);
}


antlrcpp::Any CParser::BasespecifierlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBasespecifierlist(this);
  else
    return visitor->visitChildren(this);
}


CParser::BasespecifierlistContext* CParser::basespecifierlist() {
   return basespecifierlist(0);
}

CParser::BasespecifierlistContext* CParser::basespecifierlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::BasespecifierlistContext *_localctx = _tracker.createInstance<BasespecifierlistContext>(_ctx, parentState);
  CParser::BasespecifierlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 318;
  enterRecursionRule(_localctx, 318, CParser::RuleBasespecifierlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2075);
    basespecifier();
    setState(2077);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, _ctx)) {
    case 1: {
      setState(2076);
      match(CParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2087);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BasespecifierlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBasespecifierlist);
        setState(2079);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2080);
        match(CParser::Comma);
        setState(2081);
        basespecifier();
        setState(2083);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 258, _ctx)) {
        case 1: {
          setState(2082);
          match(CParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2089);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BasespecifierContext ------------------------------------------------------------------

CParser::BasespecifierContext::BasespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::BasetypespecifierContext* CParser::BasespecifierContext::basetypespecifier() {
  return getRuleContext<CParser::BasetypespecifierContext>(0);
}

CParser::AttributespecifierseqContext* CParser::BasespecifierContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CParser::BasespecifierContext::Virtual() {
  return getToken(CParser::Virtual, 0);
}

CParser::AccessspecifierContext* CParser::BasespecifierContext::accessspecifier() {
  return getRuleContext<CParser::AccessspecifierContext>(0);
}


size_t CParser::BasespecifierContext::getRuleIndex() const {
  return CParser::RuleBasespecifier;
}

void CParser::BasespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasespecifier(this);
}

void CParser::BasespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasespecifier(this);
}


antlrcpp::Any CParser::BasespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBasespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::BasespecifierContext* CParser::basespecifier() {
  BasespecifierContext *_localctx = _tracker.createInstance<BasespecifierContext>(_ctx, getState());
  enterRule(_localctx, 320, CParser::RuleBasespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 265, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2091);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(2090);
        attributespecifierseq(0);
      }
      setState(2093);
      basetypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2095);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(2094);
        attributespecifierseq(0);
      }
      setState(2097);
      match(CParser::Virtual);
      setState(2099);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::Private)
        | (1ULL << CParser::Protected)
        | (1ULL << CParser::Public))) != 0)) {
        setState(2098);
        accessspecifier();
      }
      setState(2101);
      basetypespecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2103);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(2102);
        attributespecifierseq(0);
      }
      setState(2105);
      accessspecifier();
      setState(2107);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Virtual) {
        setState(2106);
        match(CParser::Virtual);
      }
      setState(2109);
      basetypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassordecltypeContext ------------------------------------------------------------------

CParser::ClassordecltypeContext::ClassordecltypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ClassnameContext* CParser::ClassordecltypeContext::classname() {
  return getRuleContext<CParser::ClassnameContext>(0);
}

CParser::NestednamespecifierContext* CParser::ClassordecltypeContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}

CParser::DecltypespecifierContext* CParser::ClassordecltypeContext::decltypespecifier() {
  return getRuleContext<CParser::DecltypespecifierContext>(0);
}


size_t CParser::ClassordecltypeContext::getRuleIndex() const {
  return CParser::RuleClassordecltype;
}

void CParser::ClassordecltypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassordecltype(this);
}

void CParser::ClassordecltypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassordecltype(this);
}


antlrcpp::Any CParser::ClassordecltypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitClassordecltype(this);
  else
    return visitor->visitChildren(this);
}

CParser::ClassordecltypeContext* CParser::classordecltype() {
  ClassordecltypeContext *_localctx = _tracker.createInstance<ClassordecltypeContext>(_ctx, getState());
  enterRule(_localctx, 322, CParser::RuleClassordecltype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2114);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 266, _ctx)) {
      case 1: {
        setState(2113);
        nestednamespecifier(0);
        break;
      }

      }
      setState(2116);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2117);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasetypespecifierContext ------------------------------------------------------------------

CParser::BasetypespecifierContext::BasetypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ClassordecltypeContext* CParser::BasetypespecifierContext::classordecltype() {
  return getRuleContext<CParser::ClassordecltypeContext>(0);
}


size_t CParser::BasetypespecifierContext::getRuleIndex() const {
  return CParser::RuleBasetypespecifier;
}

void CParser::BasetypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasetypespecifier(this);
}

void CParser::BasetypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasetypespecifier(this);
}


antlrcpp::Any CParser::BasetypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBasetypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::BasetypespecifierContext* CParser::basetypespecifier() {
  BasetypespecifierContext *_localctx = _tracker.createInstance<BasetypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 324, CParser::RuleBasetypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2120);
    classordecltype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessspecifierContext ------------------------------------------------------------------

CParser::AccessspecifierContext::AccessspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::AccessspecifierContext::Private() {
  return getToken(CParser::Private, 0);
}

tree::TerminalNode* CParser::AccessspecifierContext::Protected() {
  return getToken(CParser::Protected, 0);
}

tree::TerminalNode* CParser::AccessspecifierContext::Public() {
  return getToken(CParser::Public, 0);
}


size_t CParser::AccessspecifierContext::getRuleIndex() const {
  return CParser::RuleAccessspecifier;
}

void CParser::AccessspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessspecifier(this);
}

void CParser::AccessspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessspecifier(this);
}


antlrcpp::Any CParser::AccessspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAccessspecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::AccessspecifierContext* CParser::accessspecifier() {
  AccessspecifierContext *_localctx = _tracker.createInstance<AccessspecifierContext>(_ctx, getState());
  enterRule(_localctx, 326, CParser::RuleAccessspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2122);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::Private)
      | (1ULL << CParser::Protected)
      | (1ULL << CParser::Public))) != 0))) {
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

//----------------- ConversionfunctionidContext ------------------------------------------------------------------

CParser::ConversionfunctionidContext::ConversionfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ConversionfunctionidContext::Operator() {
  return getToken(CParser::Operator, 0);
}

CParser::ConversiontypeidContext* CParser::ConversionfunctionidContext::conversiontypeid() {
  return getRuleContext<CParser::ConversiontypeidContext>(0);
}


size_t CParser::ConversionfunctionidContext::getRuleIndex() const {
  return CParser::RuleConversionfunctionid;
}

void CParser::ConversionfunctionidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionfunctionid(this);
}

void CParser::ConversionfunctionidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionfunctionid(this);
}


antlrcpp::Any CParser::ConversionfunctionidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitConversionfunctionid(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConversionfunctionidContext* CParser::conversionfunctionid() {
  ConversionfunctionidContext *_localctx = _tracker.createInstance<ConversionfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 328, CParser::RuleConversionfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2124);
    match(CParser::Operator);
    setState(2125);
    conversiontypeid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversiontypeidContext ------------------------------------------------------------------

CParser::ConversiontypeidContext::ConversiontypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TypespecifierseqContext* CParser::ConversiontypeidContext::typespecifierseq() {
  return getRuleContext<CParser::TypespecifierseqContext>(0);
}

CParser::ConversiondeclaratorContext* CParser::ConversiontypeidContext::conversiondeclarator() {
  return getRuleContext<CParser::ConversiondeclaratorContext>(0);
}


size_t CParser::ConversiontypeidContext::getRuleIndex() const {
  return CParser::RuleConversiontypeid;
}

void CParser::ConversiontypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversiontypeid(this);
}

void CParser::ConversiontypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversiontypeid(this);
}


antlrcpp::Any CParser::ConversiontypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitConversiontypeid(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConversiontypeidContext* CParser::conversiontypeid() {
  ConversiontypeidContext *_localctx = _tracker.createInstance<ConversiontypeidContext>(_ctx, getState());
  enterRule(_localctx, 330, CParser::RuleConversiontypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2127);
    typespecifierseq();
    setState(2129);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx)) {
    case 1: {
      setState(2128);
      conversiondeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversiondeclaratorContext ------------------------------------------------------------------

CParser::ConversiondeclaratorContext::ConversiondeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::PtroperatorContext* CParser::ConversiondeclaratorContext::ptroperator() {
  return getRuleContext<CParser::PtroperatorContext>(0);
}

CParser::ConversiondeclaratorContext* CParser::ConversiondeclaratorContext::conversiondeclarator() {
  return getRuleContext<CParser::ConversiondeclaratorContext>(0);
}


size_t CParser::ConversiondeclaratorContext::getRuleIndex() const {
  return CParser::RuleConversiondeclarator;
}

void CParser::ConversiondeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversiondeclarator(this);
}

void CParser::ConversiondeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversiondeclarator(this);
}


antlrcpp::Any CParser::ConversiondeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitConversiondeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConversiondeclaratorContext* CParser::conversiondeclarator() {
  ConversiondeclaratorContext *_localctx = _tracker.createInstance<ConversiondeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 332, CParser::RuleConversiondeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2131);
    ptroperator();
    setState(2133);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 269, _ctx)) {
    case 1: {
      setState(2132);
      conversiondeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CtorinitializerContext ------------------------------------------------------------------

CParser::CtorinitializerContext::CtorinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::CtorinitializerContext::Colon() {
  return getToken(CParser::Colon, 0);
}

CParser::MeminitializerlistContext* CParser::CtorinitializerContext::meminitializerlist() {
  return getRuleContext<CParser::MeminitializerlistContext>(0);
}


size_t CParser::CtorinitializerContext::getRuleIndex() const {
  return CParser::RuleCtorinitializer;
}

void CParser::CtorinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCtorinitializer(this);
}

void CParser::CtorinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCtorinitializer(this);
}


antlrcpp::Any CParser::CtorinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCtorinitializer(this);
  else
    return visitor->visitChildren(this);
}

CParser::CtorinitializerContext* CParser::ctorinitializer() {
  CtorinitializerContext *_localctx = _tracker.createInstance<CtorinitializerContext>(_ctx, getState());
  enterRule(_localctx, 334, CParser::RuleCtorinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2135);
    match(CParser::Colon);
    setState(2136);
    meminitializerlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerlistContext ------------------------------------------------------------------

CParser::MeminitializerlistContext::MeminitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::MeminitializerContext* CParser::MeminitializerlistContext::meminitializer() {
  return getRuleContext<CParser::MeminitializerContext>(0);
}

tree::TerminalNode* CParser::MeminitializerlistContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

tree::TerminalNode* CParser::MeminitializerlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}

CParser::MeminitializerlistContext* CParser::MeminitializerlistContext::meminitializerlist() {
  return getRuleContext<CParser::MeminitializerlistContext>(0);
}


size_t CParser::MeminitializerlistContext::getRuleIndex() const {
  return CParser::RuleMeminitializerlist;
}

void CParser::MeminitializerlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializerlist(this);
}

void CParser::MeminitializerlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializerlist(this);
}


antlrcpp::Any CParser::MeminitializerlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMeminitializerlist(this);
  else
    return visitor->visitChildren(this);
}

CParser::MeminitializerlistContext* CParser::meminitializerlist() {
  MeminitializerlistContext *_localctx = _tracker.createInstance<MeminitializerlistContext>(_ctx, getState());
  enterRule(_localctx, 336, CParser::RuleMeminitializerlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 272, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2138);
      meminitializer();
      setState(2140);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Ellipsis) {
        setState(2139);
        match(CParser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2142);
      meminitializer();
      setState(2144);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Ellipsis) {
        setState(2143);
        match(CParser::Ellipsis);
      }
      setState(2146);
      match(CParser::Comma);
      setState(2147);
      meminitializerlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerContext ------------------------------------------------------------------

CParser::MeminitializerContext::MeminitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::MeminitializeridContext* CParser::MeminitializerContext::meminitializerid() {
  return getRuleContext<CParser::MeminitializeridContext>(0);
}

tree::TerminalNode* CParser::MeminitializerContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::MeminitializerContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::ExpressionlistContext* CParser::MeminitializerContext::expressionlist() {
  return getRuleContext<CParser::ExpressionlistContext>(0);
}

CParser::BracedinitlistContext* CParser::MeminitializerContext::bracedinitlist() {
  return getRuleContext<CParser::BracedinitlistContext>(0);
}


size_t CParser::MeminitializerContext::getRuleIndex() const {
  return CParser::RuleMeminitializer;
}

void CParser::MeminitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializer(this);
}

void CParser::MeminitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializer(this);
}


antlrcpp::Any CParser::MeminitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMeminitializer(this);
  else
    return visitor->visitChildren(this);
}

CParser::MeminitializerContext* CParser::meminitializer() {
  MeminitializerContext *_localctx = _tracker.createInstance<MeminitializerContext>(_ctx, getState());
  enterRule(_localctx, 338, CParser::RuleMeminitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 274, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2151);
      meminitializerid();
      setState(2152);
      match(CParser::LeftParen);
      setState(2154);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Const_cast)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Delete)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Dynamic_cast)
        | (1ULL << CParser::False)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::New)
        | (1ULL << CParser::Noexcept)
        | (1ULL << CParser::Nullptr)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Reinterpret_cast)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
        | (1ULL << (CParser::This - 64))
        | (1ULL << (CParser::Throw - 64))
        | (1ULL << (CParser::True - 64))
        | (1ULL << (CParser::Typeid_ - 64))
        | (1ULL << (CParser::Typename_ - 64))
        | (1ULL << (CParser::Unsigned - 64))
        | (1ULL << (CParser::Void - 64))
        | (1ULL << (CParser::Wchar - 64))
        | (1ULL << (CParser::LeftParen - 64))
        | (1ULL << (CParser::LeftBracket - 64))
        | (1ULL << (CParser::LeftBrace - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
        | (1ULL << (CParser::Identifier - 128))
        | (1ULL << (CParser::Integerliteral - 128))
        | (1ULL << (CParser::Characterliteral - 128))
        | (1ULL << (CParser::Floatingliteral - 128))
        | (1ULL << (CParser::Stringliteral - 128))
        | (1ULL << (CParser::Userdefinedintegerliteral - 128))
        | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (CParser::Userdefinedstringliteral - 128))
        | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(2153);
        expressionlist();
      }
      setState(2156);
      match(CParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2158);
      meminitializerid();
      setState(2159);
      bracedinitlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializeridContext ------------------------------------------------------------------

CParser::MeminitializeridContext::MeminitializeridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ClassordecltypeContext* CParser::MeminitializeridContext::classordecltype() {
  return getRuleContext<CParser::ClassordecltypeContext>(0);
}

tree::TerminalNode* CParser::MeminitializeridContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::MeminitializeridContext::getRuleIndex() const {
  return CParser::RuleMeminitializerid;
}

void CParser::MeminitializeridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializerid(this);
}

void CParser::MeminitializeridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializerid(this);
}


antlrcpp::Any CParser::MeminitializeridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMeminitializerid(this);
  else
    return visitor->visitChildren(this);
}

CParser::MeminitializeridContext* CParser::meminitializerid() {
  MeminitializeridContext *_localctx = _tracker.createInstance<MeminitializeridContext>(_ctx, getState());
  enterRule(_localctx, 340, CParser::RuleMeminitializerid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 275, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2163);
      classordecltype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2164);
      match(CParser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorfunctionidContext ------------------------------------------------------------------

CParser::OperatorfunctionidContext::OperatorfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::OperatorfunctionidContext::Operator() {
  return getToken(CParser::Operator, 0);
}

CParser::TheoperatorContext* CParser::OperatorfunctionidContext::theoperator() {
  return getRuleContext<CParser::TheoperatorContext>(0);
}


size_t CParser::OperatorfunctionidContext::getRuleIndex() const {
  return CParser::RuleOperatorfunctionid;
}

void CParser::OperatorfunctionidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorfunctionid(this);
}

void CParser::OperatorfunctionidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorfunctionid(this);
}


antlrcpp::Any CParser::OperatorfunctionidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitOperatorfunctionid(this);
  else
    return visitor->visitChildren(this);
}

CParser::OperatorfunctionidContext* CParser::operatorfunctionid() {
  OperatorfunctionidContext *_localctx = _tracker.createInstance<OperatorfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 342, CParser::RuleOperatorfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2167);
    match(CParser::Operator);
    setState(2168);
    theoperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteraloperatoridContext ------------------------------------------------------------------

CParser::LiteraloperatoridContext::LiteraloperatoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::LiteraloperatoridContext::Operator() {
  return getToken(CParser::Operator, 0);
}

tree::TerminalNode* CParser::LiteraloperatoridContext::Stringliteral() {
  return getToken(CParser::Stringliteral, 0);
}

tree::TerminalNode* CParser::LiteraloperatoridContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::LiteraloperatoridContext::Userdefinedstringliteral() {
  return getToken(CParser::Userdefinedstringliteral, 0);
}


size_t CParser::LiteraloperatoridContext::getRuleIndex() const {
  return CParser::RuleLiteraloperatorid;
}

void CParser::LiteraloperatoridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteraloperatorid(this);
}

void CParser::LiteraloperatoridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteraloperatorid(this);
}


antlrcpp::Any CParser::LiteraloperatoridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLiteraloperatorid(this);
  else
    return visitor->visitChildren(this);
}

CParser::LiteraloperatoridContext* CParser::literaloperatorid() {
  LiteraloperatoridContext *_localctx = _tracker.createInstance<LiteraloperatoridContext>(_ctx, getState());
  enterRule(_localctx, 344, CParser::RuleLiteraloperatorid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 276, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2170);
      match(CParser::Operator);
      setState(2171);
      match(CParser::Stringliteral);
      setState(2172);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2173);
      match(CParser::Operator);
      setState(2174);
      match(CParser::Userdefinedstringliteral);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplatedeclarationContext ------------------------------------------------------------------

CParser::TemplatedeclarationContext::TemplatedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TemplatedeclarationContext::Template() {
  return getToken(CParser::Template, 0);
}

tree::TerminalNode* CParser::TemplatedeclarationContext::Less() {
  return getToken(CParser::Less, 0);
}

CParser::TemplateparameterlistContext* CParser::TemplatedeclarationContext::templateparameterlist() {
  return getRuleContext<CParser::TemplateparameterlistContext>(0);
}

tree::TerminalNode* CParser::TemplatedeclarationContext::Greater() {
  return getToken(CParser::Greater, 0);
}

CParser::DeclarationContext* CParser::TemplatedeclarationContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}


size_t CParser::TemplatedeclarationContext::getRuleIndex() const {
  return CParser::RuleTemplatedeclaration;
}

void CParser::TemplatedeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplatedeclaration(this);
}

void CParser::TemplatedeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplatedeclaration(this);
}


antlrcpp::Any CParser::TemplatedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTemplatedeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::TemplatedeclarationContext* CParser::templatedeclaration() {
  TemplatedeclarationContext *_localctx = _tracker.createInstance<TemplatedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 346, CParser::RuleTemplatedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2177);
    match(CParser::Template);
    setState(2178);
    match(CParser::Less);
    setState(2179);
    templateparameterlist(0);
    setState(2180);
    match(CParser::Greater);
    setState(2181);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateparameterlistContext ------------------------------------------------------------------

CParser::TemplateparameterlistContext::TemplateparameterlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TemplateparameterContext* CParser::TemplateparameterlistContext::templateparameter() {
  return getRuleContext<CParser::TemplateparameterContext>(0);
}

CParser::TemplateparameterlistContext* CParser::TemplateparameterlistContext::templateparameterlist() {
  return getRuleContext<CParser::TemplateparameterlistContext>(0);
}

tree::TerminalNode* CParser::TemplateparameterlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::TemplateparameterlistContext::getRuleIndex() const {
  return CParser::RuleTemplateparameterlist;
}

void CParser::TemplateparameterlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateparameterlist(this);
}

void CParser::TemplateparameterlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateparameterlist(this);
}


antlrcpp::Any CParser::TemplateparameterlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTemplateparameterlist(this);
  else
    return visitor->visitChildren(this);
}


CParser::TemplateparameterlistContext* CParser::templateparameterlist() {
   return templateparameterlist(0);
}

CParser::TemplateparameterlistContext* CParser::templateparameterlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::TemplateparameterlistContext *_localctx = _tracker.createInstance<TemplateparameterlistContext>(_ctx, parentState);
  CParser::TemplateparameterlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 348;
  enterRecursionRule(_localctx, 348, CParser::RuleTemplateparameterlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2184);
    templateparameter();
    _ctx->stop = _input->LT(-1);
    setState(2191);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateparameterlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateparameterlist);
        setState(2186);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2187);
        match(CParser::Comma);
        setState(2188);
        templateparameter(); 
      }
      setState(2193);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateparameterContext ------------------------------------------------------------------

CParser::TemplateparameterContext::TemplateparameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TypeparameterContext* CParser::TemplateparameterContext::typeparameter() {
  return getRuleContext<CParser::TypeparameterContext>(0);
}

CParser::ParameterdeclarationContext* CParser::TemplateparameterContext::parameterdeclaration() {
  return getRuleContext<CParser::ParameterdeclarationContext>(0);
}


size_t CParser::TemplateparameterContext::getRuleIndex() const {
  return CParser::RuleTemplateparameter;
}

void CParser::TemplateparameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateparameter(this);
}

void CParser::TemplateparameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateparameter(this);
}


antlrcpp::Any CParser::TemplateparameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTemplateparameter(this);
  else
    return visitor->visitChildren(this);
}

CParser::TemplateparameterContext* CParser::templateparameter() {
  TemplateparameterContext *_localctx = _tracker.createInstance<TemplateparameterContext>(_ctx, getState());
  enterRule(_localctx, 350, CParser::RuleTemplateparameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2196);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2194);
      typeparameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2195);
      parameterdeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeparameterContext ------------------------------------------------------------------

CParser::TypeparameterContext::TypeparameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypeparameterContext::Class() {
  return getToken(CParser::Class, 0);
}

tree::TerminalNode* CParser::TypeparameterContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

tree::TerminalNode* CParser::TypeparameterContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::TypeparameterContext::Assign() {
  return getToken(CParser::Assign, 0);
}

CParser::ThetypeidContext* CParser::TypeparameterContext::thetypeid() {
  return getRuleContext<CParser::ThetypeidContext>(0);
}

tree::TerminalNode* CParser::TypeparameterContext::Typename_() {
  return getToken(CParser::Typename_, 0);
}

tree::TerminalNode* CParser::TypeparameterContext::Template() {
  return getToken(CParser::Template, 0);
}

tree::TerminalNode* CParser::TypeparameterContext::Less() {
  return getToken(CParser::Less, 0);
}

CParser::TemplateparameterlistContext* CParser::TypeparameterContext::templateparameterlist() {
  return getRuleContext<CParser::TemplateparameterlistContext>(0);
}

tree::TerminalNode* CParser::TypeparameterContext::Greater() {
  return getToken(CParser::Greater, 0);
}

CParser::IdexpressionContext* CParser::TypeparameterContext::idexpression() {
  return getRuleContext<CParser::IdexpressionContext>(0);
}


size_t CParser::TypeparameterContext::getRuleIndex() const {
  return CParser::RuleTypeparameter;
}

void CParser::TypeparameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeparameter(this);
}

void CParser::TypeparameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeparameter(this);
}


antlrcpp::Any CParser::TypeparameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeparameter(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeparameterContext* CParser::typeparameter() {
  TypeparameterContext *_localctx = _tracker.createInstance<TypeparameterContext>(_ctx, getState());
  enterRule(_localctx, 352, CParser::RuleTypeparameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2198);
      match(CParser::Class);
      setState(2200);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, _ctx)) {
      case 1: {
        setState(2199);
        match(CParser::Ellipsis);
        break;
      }

      }
      setState(2203);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 280, _ctx)) {
      case 1: {
        setState(2202);
        match(CParser::Identifier);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2205);
      match(CParser::Class);
      setState(2207);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(2206);
        match(CParser::Identifier);
      }
      setState(2209);
      match(CParser::Assign);
      setState(2210);
      thetypeid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2211);
      match(CParser::Typename_);
      setState(2213);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 282, _ctx)) {
      case 1: {
        setState(2212);
        match(CParser::Ellipsis);
        break;
      }

      }
      setState(2216);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, _ctx)) {
      case 1: {
        setState(2215);
        match(CParser::Identifier);
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2218);
      match(CParser::Typename_);
      setState(2220);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(2219);
        match(CParser::Identifier);
      }
      setState(2222);
      match(CParser::Assign);
      setState(2223);
      thetypeid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2224);
      match(CParser::Template);
      setState(2225);
      match(CParser::Less);
      setState(2226);
      templateparameterlist(0);
      setState(2227);
      match(CParser::Greater);
      setState(2228);
      match(CParser::Class);
      setState(2230);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 285, _ctx)) {
      case 1: {
        setState(2229);
        match(CParser::Ellipsis);
        break;
      }

      }
      setState(2233);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
      case 1: {
        setState(2232);
        match(CParser::Identifier);
        break;
      }

      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2235);
      match(CParser::Template);
      setState(2236);
      match(CParser::Less);
      setState(2237);
      templateparameterlist(0);
      setState(2238);
      match(CParser::Greater);
      setState(2239);
      match(CParser::Class);
      setState(2241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Identifier) {
        setState(2240);
        match(CParser::Identifier);
      }
      setState(2243);
      match(CParser::Assign);
      setState(2244);
      idexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletemplateidContext ------------------------------------------------------------------

CParser::SimpletemplateidContext::SimpletemplateidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TemplatenameContext* CParser::SimpletemplateidContext::templatename() {
  return getRuleContext<CParser::TemplatenameContext>(0);
}

tree::TerminalNode* CParser::SimpletemplateidContext::Less() {
  return getToken(CParser::Less, 0);
}

tree::TerminalNode* CParser::SimpletemplateidContext::Greater() {
  return getToken(CParser::Greater, 0);
}

CParser::TemplateargumentlistContext* CParser::SimpletemplateidContext::templateargumentlist() {
  return getRuleContext<CParser::TemplateargumentlistContext>(0);
}


size_t CParser::SimpletemplateidContext::getRuleIndex() const {
  return CParser::RuleSimpletemplateid;
}

void CParser::SimpletemplateidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpletemplateid(this);
}

void CParser::SimpletemplateidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpletemplateid(this);
}


antlrcpp::Any CParser::SimpletemplateidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSimpletemplateid(this);
  else
    return visitor->visitChildren(this);
}

CParser::SimpletemplateidContext* CParser::simpletemplateid() {
  SimpletemplateidContext *_localctx = _tracker.createInstance<SimpletemplateidContext>(_ctx, getState());
  enterRule(_localctx, 354, CParser::RuleSimpletemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2248);
    templatename();
    setState(2249);
    match(CParser::Less);
    setState(2251);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Char16)
      | (1ULL << CParser::Char32)
      | (1ULL << CParser::Class)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Const_cast)
      | (1ULL << CParser::Decltype)
      | (1ULL << CParser::Delete)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Dynamic_cast)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::False)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::New)
      | (1ULL << CParser::Noexcept)
      | (1ULL << CParser::Nullptr)
      | (1ULL << CParser::Operator)
      | (1ULL << CParser::Reinterpret_cast)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
      | (1ULL << (CParser::Struct - 64))
      | (1ULL << (CParser::This - 64))
      | (1ULL << (CParser::True - 64))
      | (1ULL << (CParser::Typeid_ - 64))
      | (1ULL << (CParser::Typename_ - 64))
      | (1ULL << (CParser::Union - 64))
      | (1ULL << (CParser::Unsigned - 64))
      | (1ULL << (CParser::Void - 64))
      | (1ULL << (CParser::Volatile - 64))
      | (1ULL << (CParser::Wchar - 64))
      | (1ULL << (CParser::LeftParen - 64))
      | (1ULL << (CParser::LeftBracket - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::Or - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
      | (1ULL << (CParser::Identifier - 128))
      | (1ULL << (CParser::Integerliteral - 128))
      | (1ULL << (CParser::Characterliteral - 128))
      | (1ULL << (CParser::Floatingliteral - 128))
      | (1ULL << (CParser::Stringliteral - 128))
      | (1ULL << (CParser::Userdefinedintegerliteral - 128))
      | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
      | (1ULL << (CParser::Userdefinedstringliteral - 128))
      | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
      setState(2250);
      templateargumentlist(0);
    }
    setState(2253);
    match(CParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateidContext ------------------------------------------------------------------

CParser::TemplateidContext::TemplateidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::SimpletemplateidContext* CParser::TemplateidContext::simpletemplateid() {
  return getRuleContext<CParser::SimpletemplateidContext>(0);
}

CParser::OperatorfunctionidContext* CParser::TemplateidContext::operatorfunctionid() {
  return getRuleContext<CParser::OperatorfunctionidContext>(0);
}

tree::TerminalNode* CParser::TemplateidContext::Less() {
  return getToken(CParser::Less, 0);
}

tree::TerminalNode* CParser::TemplateidContext::Greater() {
  return getToken(CParser::Greater, 0);
}

CParser::TemplateargumentlistContext* CParser::TemplateidContext::templateargumentlist() {
  return getRuleContext<CParser::TemplateargumentlistContext>(0);
}

CParser::LiteraloperatoridContext* CParser::TemplateidContext::literaloperatorid() {
  return getRuleContext<CParser::LiteraloperatoridContext>(0);
}


size_t CParser::TemplateidContext::getRuleIndex() const {
  return CParser::RuleTemplateid;
}

void CParser::TemplateidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateid(this);
}

void CParser::TemplateidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateid(this);
}


antlrcpp::Any CParser::TemplateidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTemplateid(this);
  else
    return visitor->visitChildren(this);
}

CParser::TemplateidContext* CParser::templateid() {
  TemplateidContext *_localctx = _tracker.createInstance<TemplateidContext>(_ctx, getState());
  enterRule(_localctx, 356, CParser::RuleTemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2270);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 292, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2255);
      simpletemplateid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2256);
      operatorfunctionid();
      setState(2257);
      match(CParser::Less);
      setState(2259);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Class)
        | (1ULL << CParser::Const)
        | (1ULL << CParser::Const_cast)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Delete)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Dynamic_cast)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::False)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::New)
        | (1ULL << CParser::Noexcept)
        | (1ULL << CParser::Nullptr)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Reinterpret_cast)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
        | (1ULL << (CParser::Struct - 64))
        | (1ULL << (CParser::This - 64))
        | (1ULL << (CParser::True - 64))
        | (1ULL << (CParser::Typeid_ - 64))
        | (1ULL << (CParser::Typename_ - 64))
        | (1ULL << (CParser::Union - 64))
        | (1ULL << (CParser::Unsigned - 64))
        | (1ULL << (CParser::Void - 64))
        | (1ULL << (CParser::Volatile - 64))
        | (1ULL << (CParser::Wchar - 64))
        | (1ULL << (CParser::LeftParen - 64))
        | (1ULL << (CParser::LeftBracket - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
        | (1ULL << (CParser::Identifier - 128))
        | (1ULL << (CParser::Integerliteral - 128))
        | (1ULL << (CParser::Characterliteral - 128))
        | (1ULL << (CParser::Floatingliteral - 128))
        | (1ULL << (CParser::Stringliteral - 128))
        | (1ULL << (CParser::Userdefinedintegerliteral - 128))
        | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (CParser::Userdefinedstringliteral - 128))
        | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(2258);
        templateargumentlist(0);
      }
      setState(2261);
      match(CParser::Greater);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2263);
      literaloperatorid();
      setState(2264);
      match(CParser::Less);
      setState(2266);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CParser::T__0)
        | (1ULL << CParser::T__1)
        | (1ULL << CParser::Alignof)
        | (1ULL << CParser::Auto)
        | (1ULL << CParser::Bool)
        | (1ULL << CParser::Char)
        | (1ULL << CParser::Char16)
        | (1ULL << CParser::Char32)
        | (1ULL << CParser::Class)
        | (1ULL << CParser::Const)
        | (1ULL << CParser::Const_cast)
        | (1ULL << CParser::Decltype)
        | (1ULL << CParser::Delete)
        | (1ULL << CParser::Double)
        | (1ULL << CParser::Dynamic_cast)
        | (1ULL << CParser::Enum)
        | (1ULL << CParser::False)
        | (1ULL << CParser::Float)
        | (1ULL << CParser::Int)
        | (1ULL << CParser::Long)
        | (1ULL << CParser::New)
        | (1ULL << CParser::Noexcept)
        | (1ULL << CParser::Nullptr)
        | (1ULL << CParser::Operator)
        | (1ULL << CParser::Reinterpret_cast)
        | (1ULL << CParser::Short)
        | (1ULL << CParser::Signed)
        | (1ULL << CParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CParser::Static_cast - 64))
        | (1ULL << (CParser::Struct - 64))
        | (1ULL << (CParser::This - 64))
        | (1ULL << (CParser::True - 64))
        | (1ULL << (CParser::Typeid_ - 64))
        | (1ULL << (CParser::Typename_ - 64))
        | (1ULL << (CParser::Union - 64))
        | (1ULL << (CParser::Unsigned - 64))
        | (1ULL << (CParser::Void - 64))
        | (1ULL << (CParser::Volatile - 64))
        | (1ULL << (CParser::Wchar - 64))
        | (1ULL << (CParser::LeftParen - 64))
        | (1ULL << (CParser::LeftBracket - 64))
        | (1ULL << (CParser::Plus - 64))
        | (1ULL << (CParser::Minus - 64))
        | (1ULL << (CParser::Star - 64))
        | (1ULL << (CParser::And - 64))
        | (1ULL << (CParser::Or - 64))
        | (1ULL << (CParser::Tilde - 64))
        | (1ULL << (CParser::PlusPlus - 64))
        | (1ULL << (CParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (CParser::Doublecolon - 128))
        | (1ULL << (CParser::Identifier - 128))
        | (1ULL << (CParser::Integerliteral - 128))
        | (1ULL << (CParser::Characterliteral - 128))
        | (1ULL << (CParser::Floatingliteral - 128))
        | (1ULL << (CParser::Stringliteral - 128))
        | (1ULL << (CParser::Userdefinedintegerliteral - 128))
        | (1ULL << (CParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (CParser::Userdefinedstringliteral - 128))
        | (1ULL << (CParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(2265);
        templateargumentlist(0);
      }
      setState(2268);
      match(CParser::Greater);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplatenameContext ------------------------------------------------------------------

CParser::TemplatenameContext::TemplatenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TemplatenameContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::TemplatenameContext::getRuleIndex() const {
  return CParser::RuleTemplatename;
}

void CParser::TemplatenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplatename(this);
}

void CParser::TemplatenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplatename(this);
}


antlrcpp::Any CParser::TemplatenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTemplatename(this);
  else
    return visitor->visitChildren(this);
}

CParser::TemplatenameContext* CParser::templatename() {
  TemplatenameContext *_localctx = _tracker.createInstance<TemplatenameContext>(_ctx, getState());
  enterRule(_localctx, 358, CParser::RuleTemplatename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2272);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateargumentlistContext ------------------------------------------------------------------

CParser::TemplateargumentlistContext::TemplateargumentlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TemplateargumentContext* CParser::TemplateargumentlistContext::templateargument() {
  return getRuleContext<CParser::TemplateargumentContext>(0);
}

tree::TerminalNode* CParser::TemplateargumentlistContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

CParser::TemplateargumentlistContext* CParser::TemplateargumentlistContext::templateargumentlist() {
  return getRuleContext<CParser::TemplateargumentlistContext>(0);
}

tree::TerminalNode* CParser::TemplateargumentlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::TemplateargumentlistContext::getRuleIndex() const {
  return CParser::RuleTemplateargumentlist;
}

void CParser::TemplateargumentlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateargumentlist(this);
}

void CParser::TemplateargumentlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateargumentlist(this);
}


antlrcpp::Any CParser::TemplateargumentlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTemplateargumentlist(this);
  else
    return visitor->visitChildren(this);
}


CParser::TemplateargumentlistContext* CParser::templateargumentlist() {
   return templateargumentlist(0);
}

CParser::TemplateargumentlistContext* CParser::templateargumentlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::TemplateargumentlistContext *_localctx = _tracker.createInstance<TemplateargumentlistContext>(_ctx, parentState);
  CParser::TemplateargumentlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 360;
  enterRecursionRule(_localctx, 360, CParser::RuleTemplateargumentlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2275);
    templateargument();
    setState(2277);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx)) {
    case 1: {
      setState(2276);
      match(CParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2287);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateargumentlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateargumentlist);
        setState(2279);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2280);
        match(CParser::Comma);
        setState(2281);
        templateargument();
        setState(2283);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
        case 1: {
          setState(2282);
          match(CParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2289);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateargumentContext ------------------------------------------------------------------

CParser::TemplateargumentContext::TemplateargumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ThetypeidContext* CParser::TemplateargumentContext::thetypeid() {
  return getRuleContext<CParser::ThetypeidContext>(0);
}

CParser::ConstantexpressionContext* CParser::TemplateargumentContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}

CParser::IdexpressionContext* CParser::TemplateargumentContext::idexpression() {
  return getRuleContext<CParser::IdexpressionContext>(0);
}


size_t CParser::TemplateargumentContext::getRuleIndex() const {
  return CParser::RuleTemplateargument;
}

void CParser::TemplateargumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateargument(this);
}

void CParser::TemplateargumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateargument(this);
}


antlrcpp::Any CParser::TemplateargumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTemplateargument(this);
  else
    return visitor->visitChildren(this);
}

CParser::TemplateargumentContext* CParser::templateargument() {
  TemplateargumentContext *_localctx = _tracker.createInstance<TemplateargumentContext>(_ctx, getState());
  enterRule(_localctx, 362, CParser::RuleTemplateargument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2290);
      thetypeid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2291);
      constantexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2292);
      idexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypenamespecifierContext ------------------------------------------------------------------

CParser::TypenamespecifierContext::TypenamespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TypenamespecifierContext::Typename_() {
  return getToken(CParser::Typename_, 0);
}

CParser::NestednamespecifierContext* CParser::TypenamespecifierContext::nestednamespecifier() {
  return getRuleContext<CParser::NestednamespecifierContext>(0);
}

tree::TerminalNode* CParser::TypenamespecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::SimpletemplateidContext* CParser::TypenamespecifierContext::simpletemplateid() {
  return getRuleContext<CParser::SimpletemplateidContext>(0);
}

tree::TerminalNode* CParser::TypenamespecifierContext::Template() {
  return getToken(CParser::Template, 0);
}


size_t CParser::TypenamespecifierContext::getRuleIndex() const {
  return CParser::RuleTypenamespecifier;
}

void CParser::TypenamespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypenamespecifier(this);
}

void CParser::TypenamespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypenamespecifier(this);
}


antlrcpp::Any CParser::TypenamespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypenamespecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypenamespecifierContext* CParser::typenamespecifier() {
  TypenamespecifierContext *_localctx = _tracker.createInstance<TypenamespecifierContext>(_ctx, getState());
  enterRule(_localctx, 364, CParser::RuleTypenamespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2306);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2295);
      match(CParser::Typename_);
      setState(2296);
      nestednamespecifier(0);
      setState(2297);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2299);
      match(CParser::Typename_);
      setState(2300);
      nestednamespecifier(0);
      setState(2302);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Template) {
        setState(2301);
        match(CParser::Template);
      }
      setState(2304);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitinstantiationContext ------------------------------------------------------------------

CParser::ExplicitinstantiationContext::ExplicitinstantiationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ExplicitinstantiationContext::Template() {
  return getToken(CParser::Template, 0);
}

CParser::DeclarationContext* CParser::ExplicitinstantiationContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}

tree::TerminalNode* CParser::ExplicitinstantiationContext::Extern() {
  return getToken(CParser::Extern, 0);
}


size_t CParser::ExplicitinstantiationContext::getRuleIndex() const {
  return CParser::RuleExplicitinstantiation;
}

void CParser::ExplicitinstantiationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitinstantiation(this);
}

void CParser::ExplicitinstantiationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitinstantiation(this);
}


antlrcpp::Any CParser::ExplicitinstantiationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExplicitinstantiation(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExplicitinstantiationContext* CParser::explicitinstantiation() {
  ExplicitinstantiationContext *_localctx = _tracker.createInstance<ExplicitinstantiationContext>(_ctx, getState());
  enterRule(_localctx, 366, CParser::RuleExplicitinstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2309);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Extern) {
      setState(2308);
      match(CParser::Extern);
    }
    setState(2311);
    match(CParser::Template);
    setState(2312);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitspecializationContext ------------------------------------------------------------------

CParser::ExplicitspecializationContext::ExplicitspecializationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ExplicitspecializationContext::Template() {
  return getToken(CParser::Template, 0);
}

tree::TerminalNode* CParser::ExplicitspecializationContext::Less() {
  return getToken(CParser::Less, 0);
}

tree::TerminalNode* CParser::ExplicitspecializationContext::Greater() {
  return getToken(CParser::Greater, 0);
}

CParser::DeclarationContext* CParser::ExplicitspecializationContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}


size_t CParser::ExplicitspecializationContext::getRuleIndex() const {
  return CParser::RuleExplicitspecialization;
}

void CParser::ExplicitspecializationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitspecialization(this);
}

void CParser::ExplicitspecializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitspecialization(this);
}


antlrcpp::Any CParser::ExplicitspecializationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExplicitspecialization(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExplicitspecializationContext* CParser::explicitspecialization() {
  ExplicitspecializationContext *_localctx = _tracker.createInstance<ExplicitspecializationContext>(_ctx, getState());
  enterRule(_localctx, 368, CParser::RuleExplicitspecialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2314);
    match(CParser::Template);
    setState(2315);
    match(CParser::Less);
    setState(2316);
    match(CParser::Greater);
    setState(2317);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryblockContext ------------------------------------------------------------------

CParser::TryblockContext::TryblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TryblockContext::Try() {
  return getToken(CParser::Try, 0);
}

CParser::CompoundstatementContext* CParser::TryblockContext::compoundstatement() {
  return getRuleContext<CParser::CompoundstatementContext>(0);
}

CParser::HandlerseqContext* CParser::TryblockContext::handlerseq() {
  return getRuleContext<CParser::HandlerseqContext>(0);
}


size_t CParser::TryblockContext::getRuleIndex() const {
  return CParser::RuleTryblock;
}

void CParser::TryblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryblock(this);
}

void CParser::TryblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryblock(this);
}


antlrcpp::Any CParser::TryblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTryblock(this);
  else
    return visitor->visitChildren(this);
}

CParser::TryblockContext* CParser::tryblock() {
  TryblockContext *_localctx = _tracker.createInstance<TryblockContext>(_ctx, getState());
  enterRule(_localctx, 370, CParser::RuleTryblock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2319);
    match(CParser::Try);
    setState(2320);
    compoundstatement();
    setState(2321);
    handlerseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiontryblockContext ------------------------------------------------------------------

CParser::FunctiontryblockContext::FunctiontryblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::FunctiontryblockContext::Try() {
  return getToken(CParser::Try, 0);
}

CParser::CompoundstatementContext* CParser::FunctiontryblockContext::compoundstatement() {
  return getRuleContext<CParser::CompoundstatementContext>(0);
}

CParser::HandlerseqContext* CParser::FunctiontryblockContext::handlerseq() {
  return getRuleContext<CParser::HandlerseqContext>(0);
}

CParser::CtorinitializerContext* CParser::FunctiontryblockContext::ctorinitializer() {
  return getRuleContext<CParser::CtorinitializerContext>(0);
}


size_t CParser::FunctiontryblockContext::getRuleIndex() const {
  return CParser::RuleFunctiontryblock;
}

void CParser::FunctiontryblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiontryblock(this);
}

void CParser::FunctiontryblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiontryblock(this);
}


antlrcpp::Any CParser::FunctiontryblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunctiontryblock(this);
  else
    return visitor->visitChildren(this);
}

CParser::FunctiontryblockContext* CParser::functiontryblock() {
  FunctiontryblockContext *_localctx = _tracker.createInstance<FunctiontryblockContext>(_ctx, getState());
  enterRule(_localctx, 372, CParser::RuleFunctiontryblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2323);
    match(CParser::Try);
    setState(2325);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Colon) {
      setState(2324);
      ctorinitializer();
    }
    setState(2327);
    compoundstatement();
    setState(2328);
    handlerseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerseqContext ------------------------------------------------------------------

CParser::HandlerseqContext::HandlerseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::HandlerContext* CParser::HandlerseqContext::handler() {
  return getRuleContext<CParser::HandlerContext>(0);
}

CParser::HandlerseqContext* CParser::HandlerseqContext::handlerseq() {
  return getRuleContext<CParser::HandlerseqContext>(0);
}


size_t CParser::HandlerseqContext::getRuleIndex() const {
  return CParser::RuleHandlerseq;
}

void CParser::HandlerseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandlerseq(this);
}

void CParser::HandlerseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandlerseq(this);
}


antlrcpp::Any CParser::HandlerseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitHandlerseq(this);
  else
    return visitor->visitChildren(this);
}

CParser::HandlerseqContext* CParser::handlerseq() {
  HandlerseqContext *_localctx = _tracker.createInstance<HandlerseqContext>(_ctx, getState());
  enterRule(_localctx, 374, CParser::RuleHandlerseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2330);
    handler();
    setState(2332);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx)) {
    case 1: {
      setState(2331);
      handlerseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerContext ------------------------------------------------------------------

CParser::HandlerContext::HandlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::HandlerContext::Catch() {
  return getToken(CParser::Catch, 0);
}

tree::TerminalNode* CParser::HandlerContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ExceptiondeclarationContext* CParser::HandlerContext::exceptiondeclaration() {
  return getRuleContext<CParser::ExceptiondeclarationContext>(0);
}

tree::TerminalNode* CParser::HandlerContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::CompoundstatementContext* CParser::HandlerContext::compoundstatement() {
  return getRuleContext<CParser::CompoundstatementContext>(0);
}


size_t CParser::HandlerContext::getRuleIndex() const {
  return CParser::RuleHandler;
}

void CParser::HandlerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandler(this);
}

void CParser::HandlerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandler(this);
}


antlrcpp::Any CParser::HandlerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitHandler(this);
  else
    return visitor->visitChildren(this);
}

CParser::HandlerContext* CParser::handler() {
  HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
  enterRule(_localctx, 376, CParser::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2334);
    match(CParser::Catch);
    setState(2335);
    match(CParser::LeftParen);
    setState(2336);
    exceptiondeclaration();
    setState(2337);
    match(CParser::RightParen);
    setState(2338);
    compoundstatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptiondeclarationContext ------------------------------------------------------------------

CParser::ExceptiondeclarationContext::ExceptiondeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TypespecifierseqContext* CParser::ExceptiondeclarationContext::typespecifierseq() {
  return getRuleContext<CParser::TypespecifierseqContext>(0);
}

CParser::DeclaratorContext* CParser::ExceptiondeclarationContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::AttributespecifierseqContext* CParser::ExceptiondeclarationContext::attributespecifierseq() {
  return getRuleContext<CParser::AttributespecifierseqContext>(0);
}

CParser::AbstractdeclaratorContext* CParser::ExceptiondeclarationContext::abstractdeclarator() {
  return getRuleContext<CParser::AbstractdeclaratorContext>(0);
}

tree::TerminalNode* CParser::ExceptiondeclarationContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}


size_t CParser::ExceptiondeclarationContext::getRuleIndex() const {
  return CParser::RuleExceptiondeclaration;
}

void CParser::ExceptiondeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptiondeclaration(this);
}

void CParser::ExceptiondeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptiondeclaration(this);
}


antlrcpp::Any CParser::ExceptiondeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExceptiondeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExceptiondeclarationContext* CParser::exceptiondeclaration() {
  ExceptiondeclarationContext *_localctx = _tracker.createInstance<ExceptiondeclarationContext>(_ctx, getState());
  enterRule(_localctx, 378, CParser::RuleExceptiondeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2354);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2341);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(2340);
        attributespecifierseq(0);
      }
      setState(2343);
      typespecifierseq();
      setState(2344);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2347);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::Alignas || _la == CParser::LeftBracket) {
        setState(2346);
        attributespecifierseq(0);
      }
      setState(2349);
      typespecifierseq();
      setState(2351);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CParser::T__2

      || _la == CParser::Decltype || ((((_la - 84) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 84)) & ((1ULL << (CParser::LeftParen - 84))
        | (1ULL << (CParser::LeftBracket - 84))
        | (1ULL << (CParser::Star - 84))
        | (1ULL << (CParser::And - 84))
        | (1ULL << (CParser::Doublecolon - 84))
        | (1ULL << (CParser::Ellipsis - 84))
        | (1ULL << (CParser::Identifier - 84)))) != 0)) {
        setState(2350);
        abstractdeclarator();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2353);
      match(CParser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowexpressionContext ------------------------------------------------------------------

CParser::ThrowexpressionContext::ThrowexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::ThrowexpressionContext::Throw() {
  return getToken(CParser::Throw, 0);
}

CParser::AssignmentexpressionContext* CParser::ThrowexpressionContext::assignmentexpression() {
  return getRuleContext<CParser::AssignmentexpressionContext>(0);
}


size_t CParser::ThrowexpressionContext::getRuleIndex() const {
  return CParser::RuleThrowexpression;
}

void CParser::ThrowexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowexpression(this);
}

void CParser::ThrowexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowexpression(this);
}


antlrcpp::Any CParser::ThrowexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitThrowexpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ThrowexpressionContext* CParser::throwexpression() {
  ThrowexpressionContext *_localctx = _tracker.createInstance<ThrowexpressionContext>(_ctx, getState());
  enterRule(_localctx, 380, CParser::RuleThrowexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2356);
    match(CParser::Throw);
    setState(2358);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx)) {
    case 1: {
      setState(2357);
      assignmentexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionspecificationContext ------------------------------------------------------------------

CParser::ExceptionspecificationContext::ExceptionspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::DynamicexceptionspecificationContext* CParser::ExceptionspecificationContext::dynamicexceptionspecification() {
  return getRuleContext<CParser::DynamicexceptionspecificationContext>(0);
}

CParser::NoexceptspecificationContext* CParser::ExceptionspecificationContext::noexceptspecification() {
  return getRuleContext<CParser::NoexceptspecificationContext>(0);
}


size_t CParser::ExceptionspecificationContext::getRuleIndex() const {
  return CParser::RuleExceptionspecification;
}

void CParser::ExceptionspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionspecification(this);
}

void CParser::ExceptionspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionspecification(this);
}


antlrcpp::Any CParser::ExceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExceptionspecification(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExceptionspecificationContext* CParser::exceptionspecification() {
  ExceptionspecificationContext *_localctx = _tracker.createInstance<ExceptionspecificationContext>(_ctx, getState());
  enterRule(_localctx, 382, CParser::RuleExceptionspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2362);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Throw: {
        enterOuterAlt(_localctx, 1);
        setState(2360);
        dynamicexceptionspecification();
        break;
      }

      case CParser::Noexcept: {
        enterOuterAlt(_localctx, 2);
        setState(2361);
        noexceptspecification();
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

//----------------- DynamicexceptionspecificationContext ------------------------------------------------------------------

CParser::DynamicexceptionspecificationContext::DynamicexceptionspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::DynamicexceptionspecificationContext::Throw() {
  return getToken(CParser::Throw, 0);
}

tree::TerminalNode* CParser::DynamicexceptionspecificationContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::DynamicexceptionspecificationContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}

CParser::TypeidlistContext* CParser::DynamicexceptionspecificationContext::typeidlist() {
  return getRuleContext<CParser::TypeidlistContext>(0);
}


size_t CParser::DynamicexceptionspecificationContext::getRuleIndex() const {
  return CParser::RuleDynamicexceptionspecification;
}

void CParser::DynamicexceptionspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDynamicexceptionspecification(this);
}

void CParser::DynamicexceptionspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDynamicexceptionspecification(this);
}


antlrcpp::Any CParser::DynamicexceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDynamicexceptionspecification(this);
  else
    return visitor->visitChildren(this);
}

CParser::DynamicexceptionspecificationContext* CParser::dynamicexceptionspecification() {
  DynamicexceptionspecificationContext *_localctx = _tracker.createInstance<DynamicexceptionspecificationContext>(_ctx, getState());
  enterRule(_localctx, 384, CParser::RuleDynamicexceptionspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2364);
    match(CParser::Throw);
    setState(2365);
    match(CParser::LeftParen);
    setState(2367);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 12) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 12)) & ((1ULL << (CParser::Auto - 12))
      | (1ULL << (CParser::Bool - 12))
      | (1ULL << (CParser::Char - 12))
      | (1ULL << (CParser::Char16 - 12))
      | (1ULL << (CParser::Char32 - 12))
      | (1ULL << (CParser::Class - 12))
      | (1ULL << (CParser::Const - 12))
      | (1ULL << (CParser::Decltype - 12))
      | (1ULL << (CParser::Double - 12))
      | (1ULL << (CParser::Enum - 12))
      | (1ULL << (CParser::Float - 12))
      | (1ULL << (CParser::Int - 12))
      | (1ULL << (CParser::Long - 12))
      | (1ULL << (CParser::Short - 12))
      | (1ULL << (CParser::Signed - 12))
      | (1ULL << (CParser::Struct - 12))
      | (1ULL << (CParser::Typename_ - 12)))) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (CParser::Union - 76))
      | (1ULL << (CParser::Unsigned - 76))
      | (1ULL << (CParser::Void - 76))
      | (1ULL << (CParser::Volatile - 76))
      | (1ULL << (CParser::Wchar - 76))
      | (1ULL << (CParser::Doublecolon - 76))
      | (1ULL << (CParser::Identifier - 76)))) != 0)) {
      setState(2366);
      typeidlist(0);
    }
    setState(2369);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeidlistContext ------------------------------------------------------------------

CParser::TypeidlistContext::TypeidlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ThetypeidContext* CParser::TypeidlistContext::thetypeid() {
  return getRuleContext<CParser::ThetypeidContext>(0);
}

tree::TerminalNode* CParser::TypeidlistContext::Ellipsis() {
  return getToken(CParser::Ellipsis, 0);
}

CParser::TypeidlistContext* CParser::TypeidlistContext::typeidlist() {
  return getRuleContext<CParser::TypeidlistContext>(0);
}

tree::TerminalNode* CParser::TypeidlistContext::Comma() {
  return getToken(CParser::Comma, 0);
}


size_t CParser::TypeidlistContext::getRuleIndex() const {
  return CParser::RuleTypeidlist;
}

void CParser::TypeidlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeidlist(this);
}

void CParser::TypeidlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeidlist(this);
}


antlrcpp::Any CParser::TypeidlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeidlist(this);
  else
    return visitor->visitChildren(this);
}


CParser::TypeidlistContext* CParser::typeidlist() {
   return typeidlist(0);
}

CParser::TypeidlistContext* CParser::typeidlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::TypeidlistContext *_localctx = _tracker.createInstance<TypeidlistContext>(_ctx, parentState);
  CParser::TypeidlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 386;
  enterRecursionRule(_localctx, 386, CParser::RuleTypeidlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2372);
    thetypeid();
    setState(2374);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx)) {
    case 1: {
      setState(2373);
      match(CParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2384);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeidlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeidlist);
        setState(2376);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2377);
        match(CParser::Comma);
        setState(2378);
        thetypeid();
        setState(2380);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx)) {
        case 1: {
          setState(2379);
          match(CParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2386);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NoexceptspecificationContext ------------------------------------------------------------------

CParser::NoexceptspecificationContext::NoexceptspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::NoexceptspecificationContext::Noexcept() {
  return getToken(CParser::Noexcept, 0);
}

tree::TerminalNode* CParser::NoexceptspecificationContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

CParser::ConstantexpressionContext* CParser::NoexceptspecificationContext::constantexpression() {
  return getRuleContext<CParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* CParser::NoexceptspecificationContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::NoexceptspecificationContext::getRuleIndex() const {
  return CParser::RuleNoexceptspecification;
}

void CParser::NoexceptspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoexceptspecification(this);
}

void CParser::NoexceptspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoexceptspecification(this);
}


antlrcpp::Any CParser::NoexceptspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitNoexceptspecification(this);
  else
    return visitor->visitChildren(this);
}

CParser::NoexceptspecificationContext* CParser::noexceptspecification() {
  NoexceptspecificationContext *_localctx = _tracker.createInstance<NoexceptspecificationContext>(_ctx, getState());
  enterRule(_localctx, 388, CParser::RuleNoexceptspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2393);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2387);
      match(CParser::Noexcept);
      setState(2388);
      match(CParser::LeftParen);
      setState(2389);
      constantexpression();
      setState(2390);
      match(CParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2392);
      match(CParser::Noexcept);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheoperatorContext ------------------------------------------------------------------

CParser::TheoperatorContext::TheoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::TheoperatorContext::New() {
  return getToken(CParser::New, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Delete() {
  return getToken(CParser::Delete, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::LeftBracket() {
  return getToken(CParser::LeftBracket, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::RightBracket() {
  return getToken(CParser::RightBracket, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Plus() {
  return getToken(CParser::Plus, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Minus() {
  return getToken(CParser::Minus, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Star() {
  return getToken(CParser::Star, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Div() {
  return getToken(CParser::Div, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Mod() {
  return getToken(CParser::Mod, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Caret() {
  return getToken(CParser::Caret, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::And() {
  return getToken(CParser::And, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Or() {
  return getToken(CParser::Or, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Tilde() {
  return getToken(CParser::Tilde, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Assign() {
  return getToken(CParser::Assign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Less() {
  return getToken(CParser::Less, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Greater() {
  return getToken(CParser::Greater, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::PlusAssign() {
  return getToken(CParser::PlusAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::MinusAssign() {
  return getToken(CParser::MinusAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::StarAssign() {
  return getToken(CParser::StarAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::DivAssign() {
  return getToken(CParser::DivAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::ModAssign() {
  return getToken(CParser::ModAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::XorAssign() {
  return getToken(CParser::XorAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::AndAssign() {
  return getToken(CParser::AndAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::OrAssign() {
  return getToken(CParser::OrAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::LeftShift() {
  return getToken(CParser::LeftShift, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::RightShift() {
  return getToken(CParser::RightShift, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::RightShiftAssign() {
  return getToken(CParser::RightShiftAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::LeftShiftAssign() {
  return getToken(CParser::LeftShiftAssign, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Equal() {
  return getToken(CParser::Equal, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::NotEqual() {
  return getToken(CParser::NotEqual, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::LessEqual() {
  return getToken(CParser::LessEqual, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::GreaterEqual() {
  return getToken(CParser::GreaterEqual, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::PlusPlus() {
  return getToken(CParser::PlusPlus, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::MinusMinus() {
  return getToken(CParser::MinusMinus, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Comma() {
  return getToken(CParser::Comma, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::ArrowStar() {
  return getToken(CParser::ArrowStar, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::Arrow() {
  return getToken(CParser::Arrow, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::LeftParen() {
  return getToken(CParser::LeftParen, 0);
}

tree::TerminalNode* CParser::TheoperatorContext::RightParen() {
  return getToken(CParser::RightParen, 0);
}


size_t CParser::TheoperatorContext::getRuleIndex() const {
  return CParser::RuleTheoperator;
}

void CParser::TheoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheoperator(this);
}

void CParser::TheoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheoperator(this);
}


antlrcpp::Any CParser::TheoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTheoperator(this);
  else
    return visitor->visitChildren(this);
}

CParser::TheoperatorContext* CParser::theoperator() {
  TheoperatorContext *_localctx = _tracker.createInstance<TheoperatorContext>(_ctx, getState());
  enterRule(_localctx, 390, CParser::RuleTheoperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2446);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2395);
      match(CParser::New);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2396);
      match(CParser::Delete);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2397);
      match(CParser::New);
      setState(2398);
      match(CParser::LeftBracket);
      setState(2399);
      match(CParser::RightBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2400);
      match(CParser::Delete);
      setState(2401);
      match(CParser::LeftBracket);
      setState(2402);
      match(CParser::RightBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2403);
      match(CParser::Plus);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2404);
      match(CParser::Minus);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2405);
      match(CParser::Star);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2406);
      match(CParser::Div);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2407);
      match(CParser::Mod);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2408);
      match(CParser::Caret);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2409);
      match(CParser::And);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2410);
      match(CParser::Or);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2411);
      match(CParser::Tilde);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2412);
      match(CParser::T__0);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2413);
      match(CParser::T__1);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2414);
      match(CParser::Assign);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2415);
      match(CParser::Less);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2416);
      match(CParser::Greater);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2417);
      match(CParser::PlusAssign);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2418);
      match(CParser::MinusAssign);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2419);
      match(CParser::StarAssign);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2420);
      match(CParser::DivAssign);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2421);
      match(CParser::ModAssign);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2422);
      match(CParser::XorAssign);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2423);
      match(CParser::AndAssign);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2424);
      match(CParser::OrAssign);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2425);
      match(CParser::LeftShift);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2426);
      match(CParser::RightShift);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2427);
      match(CParser::RightShiftAssign);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2428);
      match(CParser::LeftShiftAssign);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2429);
      match(CParser::Equal);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2430);
      match(CParser::NotEqual);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2431);
      match(CParser::LessEqual);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2432);
      match(CParser::GreaterEqual);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2433);
      match(CParser::T__2);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2434);
      match(CParser::T__3);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2435);
      match(CParser::T__4);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2436);
      match(CParser::T__5);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2437);
      match(CParser::PlusPlus);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2438);
      match(CParser::MinusMinus);
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(2439);
      match(CParser::Comma);
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(2440);
      match(CParser::ArrowStar);
      break;
    }

    case 43: {
      enterOuterAlt(_localctx, 43);
      setState(2441);
      match(CParser::Arrow);
      break;
    }

    case 44: {
      enterOuterAlt(_localctx, 44);
      setState(2442);
      match(CParser::LeftParen);
      setState(2443);
      match(CParser::RightParen);
      break;
    }

    case 45: {
      enterOuterAlt(_localctx, 45);
      setState(2444);
      match(CParser::LeftBracket);
      setState(2445);
      match(CParser::RightBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

CParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::LiteralContext::Integerliteral() {
  return getToken(CParser::Integerliteral, 0);
}

tree::TerminalNode* CParser::LiteralContext::Characterliteral() {
  return getToken(CParser::Characterliteral, 0);
}

tree::TerminalNode* CParser::LiteralContext::Floatingliteral() {
  return getToken(CParser::Floatingliteral, 0);
}

tree::TerminalNode* CParser::LiteralContext::Stringliteral() {
  return getToken(CParser::Stringliteral, 0);
}

CParser::BooleanliteralContext* CParser::LiteralContext::booleanliteral() {
  return getRuleContext<CParser::BooleanliteralContext>(0);
}

CParser::PointerliteralContext* CParser::LiteralContext::pointerliteral() {
  return getRuleContext<CParser::PointerliteralContext>(0);
}

CParser::UserdefinedliteralContext* CParser::LiteralContext::userdefinedliteral() {
  return getRuleContext<CParser::UserdefinedliteralContext>(0);
}


size_t CParser::LiteralContext::getRuleIndex() const {
  return CParser::RuleLiteral;
}

void CParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void CParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any CParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

CParser::LiteralContext* CParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 392, CParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2455);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Integerliteral: {
        enterOuterAlt(_localctx, 1);
        setState(2448);
        match(CParser::Integerliteral);
        break;
      }

      case CParser::Characterliteral: {
        enterOuterAlt(_localctx, 2);
        setState(2449);
        match(CParser::Characterliteral);
        break;
      }

      case CParser::Floatingliteral: {
        enterOuterAlt(_localctx, 3);
        setState(2450);
        match(CParser::Floatingliteral);
        break;
      }

      case CParser::Stringliteral: {
        enterOuterAlt(_localctx, 4);
        setState(2451);
        match(CParser::Stringliteral);
        break;
      }

      case CParser::False:
      case CParser::True: {
        enterOuterAlt(_localctx, 5);
        setState(2452);
        booleanliteral();
        break;
      }

      case CParser::Nullptr: {
        enterOuterAlt(_localctx, 6);
        setState(2453);
        pointerliteral();
        break;
      }

      case CParser::Userdefinedintegerliteral:
      case CParser::Userdefinedfloatingliteral:
      case CParser::Userdefinedstringliteral:
      case CParser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 7);
        setState(2454);
        userdefinedliteral();
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

//----------------- BooleanliteralContext ------------------------------------------------------------------

CParser::BooleanliteralContext::BooleanliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::BooleanliteralContext::False() {
  return getToken(CParser::False, 0);
}

tree::TerminalNode* CParser::BooleanliteralContext::True() {
  return getToken(CParser::True, 0);
}


size_t CParser::BooleanliteralContext::getRuleIndex() const {
  return CParser::RuleBooleanliteral;
}

void CParser::BooleanliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanliteral(this);
}

void CParser::BooleanliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanliteral(this);
}


antlrcpp::Any CParser::BooleanliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBooleanliteral(this);
  else
    return visitor->visitChildren(this);
}

CParser::BooleanliteralContext* CParser::booleanliteral() {
  BooleanliteralContext *_localctx = _tracker.createInstance<BooleanliteralContext>(_ctx, getState());
  enterRule(_localctx, 394, CParser::RuleBooleanliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2457);
    _la = _input->LA(1);
    if (!(_la == CParser::False

    || _la == CParser::True)) {
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

//----------------- PointerliteralContext ------------------------------------------------------------------

CParser::PointerliteralContext::PointerliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::PointerliteralContext::Nullptr() {
  return getToken(CParser::Nullptr, 0);
}


size_t CParser::PointerliteralContext::getRuleIndex() const {
  return CParser::RulePointerliteral;
}

void CParser::PointerliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerliteral(this);
}

void CParser::PointerliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerliteral(this);
}


antlrcpp::Any CParser::PointerliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPointerliteral(this);
  else
    return visitor->visitChildren(this);
}

CParser::PointerliteralContext* CParser::pointerliteral() {
  PointerliteralContext *_localctx = _tracker.createInstance<PointerliteralContext>(_ctx, getState());
  enterRule(_localctx, 396, CParser::RulePointerliteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2459);
    match(CParser::Nullptr);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserdefinedliteralContext ------------------------------------------------------------------

CParser::UserdefinedliteralContext::UserdefinedliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::UserdefinedliteralContext::Userdefinedintegerliteral() {
  return getToken(CParser::Userdefinedintegerliteral, 0);
}

tree::TerminalNode* CParser::UserdefinedliteralContext::Userdefinedfloatingliteral() {
  return getToken(CParser::Userdefinedfloatingliteral, 0);
}

tree::TerminalNode* CParser::UserdefinedliteralContext::Userdefinedstringliteral() {
  return getToken(CParser::Userdefinedstringliteral, 0);
}

tree::TerminalNode* CParser::UserdefinedliteralContext::Userdefinedcharacterliteral() {
  return getToken(CParser::Userdefinedcharacterliteral, 0);
}


size_t CParser::UserdefinedliteralContext::getRuleIndex() const {
  return CParser::RuleUserdefinedliteral;
}

void CParser::UserdefinedliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserdefinedliteral(this);
}

void CParser::UserdefinedliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserdefinedliteral(this);
}


antlrcpp::Any CParser::UserdefinedliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUserdefinedliteral(this);
  else
    return visitor->visitChildren(this);
}

CParser::UserdefinedliteralContext* CParser::userdefinedliteral() {
  UserdefinedliteralContext *_localctx = _tracker.createInstance<UserdefinedliteralContext>(_ctx, getState());
  enterRule(_localctx, 398, CParser::RuleUserdefinedliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2461);
    _la = _input->LA(1);
    if (!(((((_la - 143) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 143)) & ((1ULL << (CParser::Userdefinedintegerliteral - 143))
      | (1ULL << (CParser::Userdefinedfloatingliteral - 143))
      | (1ULL << (CParser::Userdefinedstringliteral - 143))
      | (1ULL << (CParser::Userdefinedcharacterliteral - 143)))) != 0))) {
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

bool CParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return nestednamespecifierSempred(dynamic_cast<NestednamespecifierContext *>(context), predicateIndex);
    case 10: return capturelistSempred(dynamic_cast<CapturelistContext *>(context), predicateIndex);
    case 15: return postfixexpressionSempred(dynamic_cast<PostfixexpressionContext *>(context), predicateIndex);
    case 26: return noptrnewdeclaratorSempred(dynamic_cast<NoptrnewdeclaratorContext *>(context), predicateIndex);
    case 31: return pmexpressionSempred(dynamic_cast<PmexpressionContext *>(context), predicateIndex);
    case 32: return multiplicativeexpressionSempred(dynamic_cast<MultiplicativeexpressionContext *>(context), predicateIndex);
    case 33: return additiveexpressionSempred(dynamic_cast<AdditiveexpressionContext *>(context), predicateIndex);
    case 34: return shiftexpressionSempred(dynamic_cast<ShiftexpressionContext *>(context), predicateIndex);
    case 36: return relationalexpressionSempred(dynamic_cast<RelationalexpressionContext *>(context), predicateIndex);
    case 37: return equalityexpressionSempred(dynamic_cast<EqualityexpressionContext *>(context), predicateIndex);
    case 38: return andexpressionSempred(dynamic_cast<AndexpressionContext *>(context), predicateIndex);
    case 39: return exclusiveorexpressionSempred(dynamic_cast<ExclusiveorexpressionContext *>(context), predicateIndex);
    case 40: return inclusiveorexpressionSempred(dynamic_cast<InclusiveorexpressionContext *>(context), predicateIndex);
    case 41: return logicalandexpressionSempred(dynamic_cast<LogicalandexpressionContext *>(context), predicateIndex);
    case 42: return logicalorexpressionSempred(dynamic_cast<LogicalorexpressionContext *>(context), predicateIndex);
    case 46: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 52: return statementseqSempred(dynamic_cast<StatementseqContext *>(context), predicateIndex);
    case 61: return declarationseqSempred(dynamic_cast<DeclarationseqContext *>(context), predicateIndex);
    case 88: return enumeratorlistSempred(dynamic_cast<EnumeratorlistContext *>(context), predicateIndex);
    case 106: return attributespecifierseqSempred(dynamic_cast<AttributespecifierseqContext *>(context), predicateIndex);
    case 109: return attributelistSempred(dynamic_cast<AttributelistContext *>(context), predicateIndex);
    case 115: return balancedtokenseqSempred(dynamic_cast<BalancedtokenseqContext *>(context), predicateIndex);
    case 117: return initdeclaratorlistSempred(dynamic_cast<InitdeclaratorlistContext *>(context), predicateIndex);
    case 121: return noptrdeclaratorSempred(dynamic_cast<NoptrdeclaratorContext *>(context), predicateIndex);
    case 132: return noptrabstractdeclaratorSempred(dynamic_cast<NoptrabstractdeclaratorContext *>(context), predicateIndex);
    case 134: return noptrabstractpackdeclaratorSempred(dynamic_cast<NoptrabstractpackdeclaratorContext *>(context), predicateIndex);
    case 136: return parameterdeclarationlistSempred(dynamic_cast<ParameterdeclarationlistContext *>(context), predicateIndex);
    case 143: return initializerlistSempred(dynamic_cast<InitializerlistContext *>(context), predicateIndex);
    case 153: return memberdeclaratorlistSempred(dynamic_cast<MemberdeclaratorlistContext *>(context), predicateIndex);
    case 155: return virtspecifierseqSempred(dynamic_cast<VirtspecifierseqContext *>(context), predicateIndex);
    case 159: return basespecifierlistSempred(dynamic_cast<BasespecifierlistContext *>(context), predicateIndex);
    case 174: return templateparameterlistSempred(dynamic_cast<TemplateparameterlistContext *>(context), predicateIndex);
    case 180: return templateargumentlistSempred(dynamic_cast<TemplateargumentlistContext *>(context), predicateIndex);
    case 193: return typeidlistSempred(dynamic_cast<TypeidlistContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CParser::nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 19);
    case 4: return precpred(_ctx, 18);
    case 5: return precpred(_ctx, 17);
    case 6: return precpred(_ctx, 12);
    case 7: return precpred(_ctx, 11);
    case 8: return precpred(_ctx, 10);
    case 9: return precpred(_ctx, 9);
    case 10: return precpred(_ctx, 8);
    case 11: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

bool CParser::noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::pmexpressionSempred(PmexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 2);
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 21: return precpred(_ctx, 4);
    case 22: return precpred(_ctx, 3);
    case 23: return precpred(_ctx, 2);
    case 24: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 25: return precpred(_ctx, 2);
    case 26: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 27: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 28: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::inclusiveorexpressionSempred(InclusiveorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 29: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 30: return precpred(_ctx, 2);
    case 31: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 2);
    case 33: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 34: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 36: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 37: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::attributespecifierseqSempred(AttributespecifierseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 38: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::attributelistSempred(AttributelistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 39: return precpred(_ctx, 3);
    case 40: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 41: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 42: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 43: return precpred(_ctx, 3);
    case 44: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CParser::noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 45: return precpred(_ctx, 5);
    case 46: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CParser::noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 47: return precpred(_ctx, 3);
    case 48: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CParser::parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 49: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 50: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 51: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 52: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 53: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::templateparameterlistSempred(TemplateparameterlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 54: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::templateargumentlistSempred(TemplateargumentlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 55: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CParser::typeidlistSempred(TypeidlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 56: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CParser::_decisionToDFA;
atn::PredictionContextCache CParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CParser::_atn;
std::vector<uint16_t> CParser::_serializedATN;

std::vector<std::string> CParser::_ruleNames = {
  "translationunit", "primaryexpression", "idexpression", "unqualifiedid", 
  "qualifiedid", "nestednamespecifier", "lambdaexpression", "lambdaintroducer", 
  "lambdacapture", "capturedefault", "capturelist", "capture", "simplecapture", 
  "initcapture", "lambdadeclarator", "postfixexpression", "typeidofexpr", 
  "typeidofthetypeid", "expressionlist", "pseudodestructorname", "unaryexpression", 
  "unaryoperator", "newexpression", "newplacement", "newtypeid", "newdeclarator", 
  "noptrnewdeclarator", "newinitializer", "deleteexpression", "noexceptexpression", 
  "castexpression", "pmexpression", "multiplicativeexpression", "additiveexpression", 
  "shiftexpression", "shiftoperator", "relationalexpression", "equalityexpression", 
  "andexpression", "exclusiveorexpression", "inclusiveorexpression", "logicalandexpression", 
  "logicalorexpression", "conditionalexpression", "assignmentexpression", 
  "assignmentoperator", "expression", "constantexpression", "statement", 
  "labeledstatement", "expressionstatement", "compoundstatement", "statementseq", 
  "selectionstatement", "condition", "iterationstatement", "forinitstatement", 
  "forrangedeclaration", "forrangeinitializer", "jumpstatement", "declarationstatement", 
  "declarationseq", "declaration", "blockdeclaration", "aliasdeclaration", 
  "simpledeclaration", "static_assertdeclaration", "emptydeclaration", "attributedeclaration", 
  "declspecifier", "declspecifierseq", "storageclassspecifier", "functionspecifier", 
  "typedefname", "typespecifier", "trailingtypespecifier", "typespecifierseq", 
  "trailingtypespecifierseq", "simpletypespecifier", "thetypename", "decltypespecifier", 
  "elaboratedtypespecifier", "enumname", "enumspecifier", "enumhead", "opaqueenumdeclaration", 
  "enumkey", "enumbase", "enumeratorlist", "enumeratordefinition", "enumerator", 
  "namespacename", "originalnamespacename", "namespacedefinition", "namednamespacedefinition", 
  "originalnamespacedefinition", "extensionnamespacedefinition", "unnamednamespacedefinition", 
  "namespacebody", "namespacealias", "namespacealiasdefinition", "qualifiednamespacespecifier", 
  "usingdeclaration", "usingdirective", "asmdefinition", "linkagespecification", 
  "attributespecifierseq", "attributespecifier", "alignmentspecifier", "attributelist", 
  "attribute", "attributetoken", "attributescopedtoken", "attributenamespace", 
  "attributeargumentclause", "balancedtokenseq", "balancedtoken", "initdeclaratorlist", 
  "initdeclarator", "declarator", "ptrdeclarator", "noptrdeclarator", "parametersandqualifiers", 
  "trailingreturntype", "ptroperator", "cvqualifierseq", "cvqualifier", 
  "refqualifier", "declaratorid", "thetypeid", "abstractdeclarator", "ptrabstractdeclarator", 
  "noptrabstractdeclarator", "abstractpackdeclarator", "noptrabstractpackdeclarator", 
  "parameterdeclarationclause", "parameterdeclarationlist", "parameterdeclaration", 
  "functiondefinition", "functionbody", "initializer", "braceorequalinitializer", 
  "initializerclause", "initializerlist", "bracedinitlist", "classname", 
  "classspecifier", "classhead", "classheadname", "classvirtspecifier", 
  "classkey", "memberspecification", "memberdeclaration", "memberdeclaratorlist", 
  "memberdeclarator", "virtspecifierseq", "virtspecifier", "purespecifier", 
  "baseclause", "basespecifierlist", "basespecifier", "classordecltype", 
  "basetypespecifier", "accessspecifier", "conversionfunctionid", "conversiontypeid", 
  "conversiondeclarator", "ctorinitializer", "meminitializerlist", "meminitializer", 
  "meminitializerid", "operatorfunctionid", "literaloperatorid", "templatedeclaration", 
  "templateparameterlist", "templateparameter", "typeparameter", "simpletemplateid", 
  "templateid", "templatename", "templateargumentlist", "templateargument", 
  "typenamespecifier", "explicitinstantiation", "explicitspecialization", 
  "tryblock", "functiontryblock", "handlerseq", "handler", "exceptiondeclaration", 
  "throwexpression", "exceptionspecification", "dynamicexceptionspecification", 
  "typeidlist", "noexceptspecification", "theoperator", "literal", "booleanliteral", 
  "pointerliteral", "userdefinedliteral"
};

std::vector<std::string> CParser::_literalNames = {
  "", "'!'", "'not'", "'&&'", "'and'", "'||'", "'or'", "", "", "'alignas'", 
  "'alignof'", "'asm'", "'auto'", "'bool'", "'break'", "'case'", "'catch'", 
  "'char'", "'char16_t'", "'char32_t'", "'class'", "'const'", "'constexpr'", 
  "'const_cast'", "'continue'", "'decltype'", "'default'", "'delete'", "'do'", 
  "'double'", "'dynamic_cast'", "'else'", "'enum'", "'explicit'", "'export'", 
  "'extern'", "'false'", "'final'", "'float'", "'for'", "'friend'", "'goto'", 
  "'if'", "'inline'", "'int'", "'long'", "'mutable'", "'namespace'", "'new'", 
  "'noexcept'", "'nullptr'", "'operator'", "'override'", "'private'", "'protected'", 
  "'public'", "'register'", "'reinterpret_cast'", "'return'", "'short'", 
  "'signed'", "'sizeof'", "'static'", "'static_assert'", "'static_cast'", 
  "'struct'", "'switch'", "'template'", "'this'", "'thread_local'", "'throw'", 
  "'true'", "'try'", "'typedef'", "'typeid'", "'typename'", "'union'", "'unsigned'", 
  "'using'", "'virtual'", "'void'", "'volatile'", "'wchar_t'", "'while'", 
  "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", 
  "'%'", "'^'", "'&'", "'|'", "'~'", "", "'='", "'<'", "'>'", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<'", "'>>'", "'<<='", 
  "'>>='", "'=='", "'!='", "'<='", "'>='", "", "", "'++'", "'--'", "','", 
  "'->*'", "'->'", "'?'", "':'", "'::'", "';'", "'.'", "'.*'", "'...'"
};

std::vector<std::string> CParser::_symbolicNames = {
  "", "", "", "", "", "", "", "MultiLineMacro", "Directive", "Alignas", 
  "Alignof", "Asm", "Auto", "Bool", "Break", "Case", "Catch", "Char", "Char16", 
  "Char32", "Class", "Const", "Constexpr", "Const_cast", "Continue", "Decltype", 
  "Default", "Delete", "Do", "Double", "Dynamic_cast", "Else", "Enum", "Explicit", 
  "Export", "Extern", "False", "Final", "Float", "For", "Friend", "Goto", 
  "If", "Inline", "Int", "Long", "Mutable", "Namespace", "New", "Noexcept", 
  "Nullptr", "Operator", "Override", "Private", "Protected", "Public", "Register", 
  "Reinterpret_cast", "Return", "Short", "Signed", "Sizeof", "Static", "Static_assert", 
  "Static_cast", "Struct", "Switch", "Template", "This", "Thread_local", 
  "Throw", "True", "Try", "Typedef", "Typeid_", "Typename_", "Union", "Unsigned", 
  "Using", "Virtual", "Void", "Volatile", "Wchar", "While", "LeftParen", 
  "RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
  "Plus", "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Tilde", 
  "Not", "Assign", "Less", "Greater", "PlusAssign", "MinusAssign", "StarAssign", 
  "DivAssign", "ModAssign", "XorAssign", "AndAssign", "OrAssign", "LeftShift", 
  "RightShift", "LeftShiftAssign", "RightShiftAssign", "Equal", "NotEqual", 
  "LessEqual", "GreaterEqual", "AndAnd", "OrOr", "PlusPlus", "MinusMinus", 
  "Comma", "ArrowStar", "Arrow", "Question", "Colon", "Doublecolon", "Semi", 
  "Dot", "DotStar", "Ellipsis", "Identifier", "Integerliteral", "Decimalliteral", 
  "Octalliteral", "Hexadecimalliteral", "Binaryliteral", "Integersuffix", 
  "Characterliteral", "Floatingliteral", "Stringliteral", "Userdefinedintegerliteral", 
  "Userdefinedfloatingliteral", "Userdefinedstringliteral", "Userdefinedcharacterliteral", 
  "Whitespace", "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary CParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CParser::_tokenNames;

CParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x98, 0x9a2, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x3, 0x2, 0x5, 0x2, 0x194, 0xa, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1a0, 0xa, 0x3, 
       0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1a4, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x5, 0x5, 0x1af, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x1b3, 
       0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x5, 0x7, 0x1c2, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1c9, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x7, 0x7, 0x1ce, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x1d1, 0xb, 
       0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1d5, 0xa, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x1db, 0xa, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x5, 0xa, 0x1e5, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x5, 0xc, 0x1ec, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x5, 0xc, 0x1f2, 0xa, 0xc, 0x7, 0xc, 0x1f4, 0xa, 0xc, 0xc, 
       0xc, 0xe, 0xc, 0x1f7, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1fb, 
       0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x201, 
       0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
       0xf, 0x208, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x5, 0x10, 0x20e, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x211, 0xa, 0x10, 
       0x3, 0x10, 0x5, 0x10, 0x214, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x217, 
       0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x5, 0x11, 0x21e, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x5, 0x11, 0x225, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x5, 0x11, 0x259, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x268, 0xa, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x26e, 0xa, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x274, 
       0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x7, 0x11, 0x281, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x284, 0xb, 0x11, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x15, 0x5, 0x15, 0x28d, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x29c, 
       0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
       0x2a2, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 
       0x16, 0x2c0, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x5, 0x18, 
       0x2c5, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2c9, 0xa, 0x18, 
       0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2cd, 0xa, 0x18, 0x3, 0x18, 0x5, 
       0x18, 0x2d0, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2d4, 0xa, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2da, 
       0xa, 0x18, 0x5, 0x18, 0x2dc, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x2e4, 0xa, 0x1a, 
       0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x2e8, 0xa, 0x1b, 0x3, 0x1b, 0x5, 
       0x1b, 0x2eb, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x5, 0x1c, 0x2f2, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x2f9, 0xa, 0x1c, 0x7, 0x1c, 
       0x2fb, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x2fe, 0xb, 0x1c, 0x3, 0x1d, 
       0x3, 0x1d, 0x5, 0x1d, 0x302, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 
       0x1d, 0x306, 0xa, 0x1d, 0x3, 0x1e, 0x5, 0x1e, 0x309, 0xa, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x30e, 0xa, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x314, 0xa, 0x1e, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x321, 
       0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x32c, 0xa, 
       0x21, 0xc, 0x21, 0xe, 0x21, 0x32f, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x33d, 0xa, 
       0x22, 0xc, 0x22, 0xe, 0x22, 0x340, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x7, 0x23, 0x34b, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x34e, 
       0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x357, 0xa, 0x24, 0xc, 0x24, 0xe, 
       0x24, 0x35a, 0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x7, 0x26, 0x36d, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x370, 
       0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x37b, 0xa, 
       0x27, 0xc, 0x27, 0xe, 0x27, 0x37e, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x386, 0xa, 
       0x28, 0xc, 0x28, 0xe, 0x28, 0x389, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x391, 0xa, 
       0x29, 0xc, 0x29, 0xe, 0x29, 0x394, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x39c, 0xa, 
       0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x39f, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x7, 0x2b, 0x3aa, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x3ad, 
       0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x3b8, 0xa, 
       0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x3bb, 0xb, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 
       0x3c4, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x3cc, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x7, 0x30, 0x3d6, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x3d9, 0xb, 0x30, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3df, 0xa, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3e3, 0xa, 0x32, 0x3, 0x32, 
       0x3, 0x32, 0x5, 0x32, 0x3e7, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 
       0x32, 0x3eb, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3ef, 0xa, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3f4, 0xa, 0x32, 
       0x3, 0x32, 0x5, 0x32, 0x3f7, 0xa, 0x32, 0x3, 0x33, 0x5, 0x33, 0x3fa, 
       0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 
       0x400, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x5, 0x33, 0x408, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x5, 0x33, 0x40d, 0xa, 0x33, 0x3, 0x34, 0x5, 0x34, 0x410, 
       0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 
       0x416, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x41f, 0xa, 0x36, 0xc, 0x36, 
       0xe, 0x36, 0x422, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x438, 
       0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x43c, 0xa, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 
       0x38, 0x444, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x5, 0x38, 0x44a, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x45e, 0xa, 0x39, 0x3, 0x39, 
       0x3, 0x39, 0x5, 0x39, 0x462, 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x46f, 0xa, 0x39, 0x3, 0x3a, 
       0x3, 0x3a, 0x5, 0x3a, 0x473, 0xa, 0x3a, 0x3, 0x3b, 0x5, 0x3b, 0x476, 
       0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
       0x5, 0x3c, 0x47d, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x485, 0xa, 0x3d, 0x3, 0x3d, 
       0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
       0x3, 0x3d, 0x5, 0x3d, 0x48f, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x498, 
       0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x49b, 0xb, 0x3f, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x5, 0x40, 0x4a6, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x5, 0x41, 0x4b0, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 
       0x42, 0x4b5, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
       0x3, 0x43, 0x5, 0x43, 0x4bc, 0xa, 0x43, 0x3, 0x43, 0x5, 0x43, 0x4bf, 
       0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x4c4, 0xa, 
       0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x4c9, 0xa, 0x43, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x3, 0x47, 0x5, 0x47, 0x4de, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x5, 
       0x48, 0x4e2, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 
       0x4e7, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x4f2, 
       0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 
       0x4f8, 0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x4fc, 0xa, 0x4e, 
       0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x501, 0xa, 0x4e, 0x3, 
       0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x505, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x5, 0x4f, 0x50a, 0xa, 0x4f, 0x3, 0x50, 0x5, 0x50, 0x50d, 
       0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x523, 0xa, 0x50, 0x3, 
       0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x529, 0xa, 0x51, 
       0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
       0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x534, 0xa, 0x52, 0x3, 
       0x53, 0x3, 0x53, 0x5, 0x53, 0x538, 0xa, 0x53, 0x3, 0x53, 0x5, 0x53, 
       0x53b, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
       0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x545, 0xa, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x54b, 0xa, 
       0x53, 0x3, 0x53, 0x5, 0x53, 0x54e, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 
       0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x555, 0xa, 0x55, 0x3, 
       0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
       0x55, 0x3, 0x55, 0x5, 0x55, 0x55f, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 
       0x5, 0x56, 0x563, 0xa, 0x56, 0x3, 0x56, 0x5, 0x56, 0x566, 0xa, 0x56, 
       0x3, 0x56, 0x5, 0x56, 0x569, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 
       0x56, 0x56d, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 
       0x572, 0xa, 0x56, 0x5, 0x56, 0x574, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 
       0x5, 0x57, 0x578, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x57c, 
       0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
       0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x585, 0xa, 0x58, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x7, 0x5a, 0x590, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 
       0x593, 0xb, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
       0x5b, 0x5, 0x5b, 0x59a, 0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 
       0x3, 0x5d, 0x5, 0x5d, 0x5a0, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
       0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x5a6, 0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 
       0x5, 0x60, 0x5aa, 0xa, 0x60, 0x3, 0x61, 0x5, 0x61, 0x5ad, 0xa, 0x61, 
       0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 
       0x3, 0x62, 0x5, 0x62, 0x5b6, 0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
       0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x5, 0x63, 0x5bf, 
       0xa, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
       0x3, 0x64, 0x5, 0x64, 0x5c7, 0xa, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 
       0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
       0x67, 0x5, 0x67, 0x5d2, 0xa, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 
       0x3, 0x68, 0x5, 0x68, 0x5d8, 0xa, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
       0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
       0x68, 0x5, 0x68, 0x5e3, 0xa, 0x68, 0x3, 0x69, 0x5, 0x69, 0x5e6, 0xa, 
       0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x5eb, 0xa, 0x69, 
       0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
       0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6b, 0x5, 0x6b, 0x5fa, 0xa, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
       0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x600, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 
       0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x7, 0x6c, 0x607, 0xa, 0x6c, 0xc, 
       0x6c, 0xe, 0x6c, 0x60a, 0xb, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 
       0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x613, 0xa, 
       0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x619, 
       0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
       0x3, 0x6e, 0x5, 0x6e, 0x621, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 
       0x6e, 0x625, 0xa, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x629, 0xa, 
       0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x62e, 0xa, 0x6f, 
       0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x633, 0xa, 0x6f, 0x3, 
       0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x7, 0x6f, 0x63a, 
       0xa, 0x6f, 0xc, 0x6f, 0xe, 0x6f, 0x63d, 0xb, 0x6f, 0x3, 0x70, 0x3, 
       0x70, 0x5, 0x70, 0x641, 0xa, 0x70, 0x3, 0x71, 0x3, 0x71, 0x5, 0x71, 
       0x645, 0xa, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
       0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
       0x75, 0x3, 0x75, 0x5, 0x75, 0x653, 0xa, 0x75, 0x3, 0x75, 0x3, 0x75, 
       0x7, 0x75, 0x657, 0xa, 0x75, 0xc, 0x75, 0xe, 0x75, 0x65a, 0xb, 0x75, 
       0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 
       0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 
       0x5, 0x76, 0x668, 0xa, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 
       0x77, 0x3, 0x77, 0x3, 0x77, 0x7, 0x77, 0x670, 0xa, 0x77, 0xc, 0x77, 
       0xe, 0x77, 0x673, 0xb, 0x77, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x677, 
       0xa, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 
       0x5, 0x79, 0x67e, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 
       0x7a, 0x5, 0x7a, 0x684, 0xa, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
       0x5, 0x7b, 0x689, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 
       0x7b, 0x5, 0x7b, 0x68f, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
       0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x696, 0xa, 0x7b, 0x3, 0x7b, 0x3, 
       0x7b, 0x5, 0x7b, 0x69a, 0xa, 0x7b, 0x7, 0x7b, 0x69c, 0xa, 0x7b, 0xc, 
       0x7b, 0xe, 0x7b, 0x69f, 0xb, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
       0x3, 0x7c, 0x5, 0x7c, 0x6a5, 0xa, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x6a8, 
       0xa, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x6ab, 0xa, 0x7c, 0x3, 0x7c, 0x5, 
       0x7c, 0x6ae, 0xa, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 
       0x6b3, 0xa, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x6b7, 0xa, 0x7e, 
       0x3, 0x7e, 0x5, 0x7e, 0x6ba, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 
       0x7e, 0x6be, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x6c2, 0xa, 
       0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x6c7, 0xa, 0x7e, 
       0x3, 0x7e, 0x5, 0x7e, 0x6ca, 0xa, 0x7e, 0x5, 0x7e, 0x6cc, 0xa, 0x7e, 
       0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x6d0, 0xa, 0x7f, 0x3, 0x80, 0x3, 
       0x80, 0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x5, 0x82, 0x6d7, 0xa, 0x82, 
       0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x6dd, 0xa, 
       0x83, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x6e1, 0xa, 0x84, 0x3, 0x84, 
       0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x6e7, 0xa, 0x84, 0x3, 
       0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x6ec, 0xa, 0x85, 0x5, 0x85, 
       0x6ee, 0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 
       0x86, 0x6f4, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x6f8, 0xa, 
       0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x6fe, 
       0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 
       0x5, 0x86, 0x705, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x709, 
       0xa, 0x86, 0x7, 0x86, 0x70b, 0xa, 0x86, 0xc, 0x86, 0xe, 0x86, 0x70e, 
       0xb, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 
       0x714, 0xa, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 
       0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x71e, 0xa, 0x88, 
       0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x722, 0xa, 0x88, 0x7, 0x88, 0x724, 
       0xa, 0x88, 0xc, 0x88, 0xe, 0x88, 0x727, 0xb, 0x88, 0x3, 0x89, 0x5, 
       0x89, 0x72a, 0xa, 0x89, 0x3, 0x89, 0x5, 0x89, 0x72d, 0xa, 0x89, 0x3, 
       0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 0x733, 0xa, 0x89, 
       0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 
       0x7, 0x8a, 0x73b, 0xa, 0x8a, 0xc, 0x8a, 0xe, 0x8a, 0x73e, 0xb, 0x8a, 
       0x3, 0x8b, 0x5, 0x8b, 0x741, 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 
       0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x747, 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 
       0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x74f, 0xa, 
       0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x753, 0xa, 0x8b, 0x3, 0x8b, 
       0x5, 0x8b, 0x756, 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x75a, 
       0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x75f, 0xa, 
       0x8b, 0x3, 0x8c, 0x5, 0x8c, 0x762, 0xa, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 
       0x765, 0xa, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x769, 0xa, 0x8c, 
       0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x5, 0x8d, 0x76e, 0xa, 0x8d, 0x3, 
       0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
       0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x778, 0xa, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 
       0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x5, 0x8e, 0x77f, 0xa, 0x8e, 0x3, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x784, 0xa, 0x8f, 0x3, 0x90, 
       0x3, 0x90, 0x5, 0x90, 0x788, 0xa, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 
       0x91, 0x5, 0x91, 0x78d, 0xa, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
       0x3, 0x91, 0x5, 0x91, 0x793, 0xa, 0x91, 0x7, 0x91, 0x795, 0xa, 0x91, 
       0xc, 0x91, 0xe, 0x91, 0x798, 0xb, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 
       0x92, 0x5, 0x92, 0x79d, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 
       0x3, 0x92, 0x5, 0x92, 0x7a3, 0xa, 0x92, 0x3, 0x93, 0x3, 0x93, 0x5, 
       0x93, 0x7a7, 0xa, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 
       0x7ac, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x95, 0x3, 0x95, 0x5, 
       0x95, 0x7b2, 0xa, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7b6, 0xa, 
       0x95, 0x3, 0x95, 0x5, 0x95, 0x7b9, 0xa, 0x95, 0x3, 0x95, 0x3, 0x95, 
       0x5, 0x95, 0x7bd, 0xa, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7c0, 0xa, 0x95, 
       0x5, 0x95, 0x7c2, 0xa, 0x95, 0x3, 0x96, 0x5, 0x96, 0x7c5, 0xa, 0x96, 
       0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x98, 0x3, 0x98, 
       0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x7cf, 0xa, 0x99, 0x3, 0x99, 0x3, 
       0x99, 0x3, 0x99, 0x5, 0x99, 0x7d4, 0xa, 0x99, 0x5, 0x99, 0x7d6, 0xa, 
       0x99, 0x3, 0x9a, 0x5, 0x9a, 0x7d9, 0xa, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 
       0x7dc, 0xa, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 0x7df, 0xa, 0x9a, 0x3, 0x9a, 
       0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 
       0x5, 0x9a, 0x7e8, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 
       0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x7, 0x9b, 0x7f0, 0xa, 0x9b, 0xc, 0x9b, 
       0xe, 0x9b, 0x7f3, 0xb, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7f7, 
       0xa, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7fa, 0xa, 0x9c, 0x3, 0x9c, 0x3, 
       0x9c, 0x5, 0x9c, 0x7fe, 0xa, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x801, 0xa, 
       0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x804, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 
       0x5, 0x9c, 0x808, 0xa, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 
       0x9d, 0x3, 0x9d, 0x7, 0x9d, 0x80f, 0xa, 0x9d, 0xc, 0x9d, 0xe, 0x9d, 
       0x812, 0xb, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x3, 
       0x9f, 0x3, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa1, 0x3, 
       0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x820, 0xa, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x826, 0xa, 0xa1, 0x7, 0xa1, 0x828, 
       0xa, 0xa1, 0xc, 0xa1, 0xe, 0xa1, 0x82b, 0xb, 0xa1, 0x3, 0xa2, 0x5, 
       0xa2, 0x82e, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x832, 0xa, 
       0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x836, 0xa, 0xa2, 0x3, 0xa2, 
       0x3, 0xa2, 0x5, 0xa2, 0x83a, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 
       0xa2, 0x83e, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x842, 0xa, 
       0xa2, 0x3, 0xa3, 0x5, 0xa3, 0x845, 0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 
       0x5, 0xa3, 0x849, 0xa, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa5, 0x3, 
       0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x5, 
       0xa7, 0x854, 0xa, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x858, 0xa, 
       0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x5, 
       0xaa, 0x85f, 0xa, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x863, 0xa, 
       0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x868, 0xa, 0xaa, 
       0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x86d, 0xa, 0xab, 0x3, 
       0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x874, 
       0xa, 0xab, 0x3, 0xac, 0x3, 0xac, 0x5, 0xac, 0x878, 0xa, 0xac, 0x3, 
       0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 
       0xae, 0x3, 0xae, 0x5, 0xae, 0x882, 0xa, 0xae, 0x3, 0xaf, 0x3, 0xaf, 
       0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 
       0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x7, 0xb0, 0x890, 0xa, 
       0xb0, 0xc, 0xb0, 0xe, 0xb0, 0x893, 0xb, 0xb0, 0x3, 0xb1, 0x3, 0xb1, 
       0x5, 0xb1, 0x897, 0xa, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x89b, 
       0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x89e, 0xa, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x5, 0xb2, 0x8a2, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
       0x3, 0xb2, 0x5, 0xb2, 0x8a8, 0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8ab, 
       0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8af, 0xa, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8b9, 0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 
       0x8bc, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8c4, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
       0x3, 0xb2, 0x5, 0xb2, 0x8c9, 0xa, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 
       0xb3, 0x5, 0xb3, 0x8ce, 0xa, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb4, 
       0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8d6, 0xa, 0xb4, 0x3, 
       0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8dd, 
       0xa, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8e1, 0xa, 0xb4, 0x3, 
       0xb5, 0x3, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 0x8e8, 
       0xa, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 
       0x8ee, 0xa, 0xb6, 0x7, 0xb6, 0x8f0, 0xa, 0xb6, 0xc, 0xb6, 0xe, 0xb6, 
       0x8f3, 0xb, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x8f8, 
       0xa, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 
       0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x901, 0xa, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x5, 0xb8, 0x905, 0xa, 0xb8, 0x3, 0xb9, 0x5, 0xb9, 0x908, 0xa, 
       0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 
       0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x918, 0xa, 0xbc, 0x3, 0xbc, 
       0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x91f, 0xa, 
       0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
       0xbe, 0x3, 0xbf, 0x5, 0xbf, 0x928, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x92e, 0xa, 0xbf, 0x3, 0xbf, 0x3, 
       0xbf, 0x5, 0xbf, 0x932, 0xa, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x935, 0xa, 
       0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x939, 0xa, 0xc0, 0x3, 0xc1, 
       0x3, 0xc1, 0x5, 0xc1, 0x93d, 0xa, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 
       0xc2, 0x5, 0xc2, 0x942, 0xa, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc3, 
       0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x949, 0xa, 0xc3, 0x3, 0xc3, 0x3, 
       0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x94f, 0xa, 0xc3, 0x7, 0xc3, 
       0x951, 0xa, 0xc3, 0xc, 0xc3, 0xe, 0xc3, 0x954, 0xb, 0xc3, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 
       0x95c, 0xa, 0xc4, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x991, 
       0xa, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x99a, 0xa, 0xc6, 0x3, 0xc7, 0x3, 
       0xc7, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x2, 
       0x24, 0xc, 0x16, 0x20, 0x36, 0x40, 0x42, 0x44, 0x46, 0x4a, 0x4c, 
       0x4e, 0x50, 0x52, 0x54, 0x56, 0x5e, 0x6a, 0x7c, 0xb2, 0xd6, 0xdc, 
       0xe8, 0xec, 0xf4, 0x10a, 0x10e, 0x112, 0x120, 0x134, 0x138, 0x140, 
       0x15e, 0x16a, 0x184, 0xca, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
       0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
       0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
       0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
       0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 
       0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 
       0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 
       0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 
       0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 
       0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 
       0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 
       0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 
       0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 
       0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 
       0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 
       0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 
       0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 
       0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 
       0x17c, 0x17e, 0x180, 0x182, 0x184, 0x186, 0x188, 0x18a, 0x18c, 0x18e, 
       0x190, 0x2, 0xf, 0x4, 0x2, 0x62, 0x62, 0x66, 0x66, 0x5, 0x2, 0x3, 
       0x4, 0x5c, 0x5e, 0x62, 0x64, 0x3, 0x2, 0x71, 0x72, 0x5, 0x2, 0x66, 
       0x66, 0x69, 0x70, 0x73, 0x74, 0x7, 0x2, 0x25, 0x25, 0x30, 0x30, 0x3a, 
       0x3a, 0x40, 0x40, 0x47, 0x47, 0x5, 0x2, 0x23, 0x23, 0x2d, 0x2d, 0x51, 
       0x51, 0x4, 0x2, 0x17, 0x17, 0x53, 0x53, 0x4, 0x2, 0x5, 0x5, 0x62, 
       0x62, 0x5, 0x2, 0x16, 0x16, 0x43, 0x43, 0x4e, 0x4e, 0x4, 0x2, 0x27, 
       0x27, 0x36, 0x36, 0x3, 0x2, 0x37, 0x39, 0x4, 0x2, 0x26, 0x26, 0x49, 
       0x49, 0x3, 0x2, 0x91, 0x94, 0x2, 0xabc, 0x2, 0x193, 0x3, 0x2, 0x2, 
       0x2, 0x4, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
       0x8, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0xc, 
       0x1c1, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x10, 
       0x1d8, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0x1e6, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x200, 0x3, 0x2, 0x2, 0x2, 0x1c, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x258, 0x3, 0x2, 0x2, 0x2, 0x22, 0x285, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0x287, 0x3, 0x2, 0x2, 0x2, 0x26, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x30, 
       0x2dd, 0x3, 0x2, 0x2, 0x2, 0x32, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x2ea, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x305, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x313, 0x3, 0x2, 0x2, 0x2, 0x3c, 
       0x315, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x320, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x322, 0x3, 0x2, 0x2, 0x2, 0x42, 0x330, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x341, 0x3, 0x2, 0x2, 0x2, 0x46, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0x35b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x371, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x50, 
       0x38a, 0x3, 0x2, 0x2, 0x2, 0x52, 0x395, 0x3, 0x2, 0x2, 0x2, 0x54, 
       0x3a0, 0x3, 0x2, 0x2, 0x2, 0x56, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x3c3, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x5c, 
       0x3cd, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x60, 
       0x3da, 0x3, 0x2, 0x2, 0x2, 0x62, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x64, 
       0x40c, 0x3, 0x2, 0x2, 0x2, 0x66, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x68, 
       0x413, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x419, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x437, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x449, 0x3, 0x2, 0x2, 0x2, 0x70, 
       0x46e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x472, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x475, 0x3, 0x2, 0x2, 0x2, 0x76, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x78, 
       0x48e, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x490, 0x3, 0x2, 0x2, 0x2, 0x7c, 
       0x492, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x4af, 0x3, 0x2, 0x2, 0x2, 0x82, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x84, 
       0x4c8, 0x3, 0x2, 0x2, 0x2, 0x86, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x88, 
       0x4d2, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x8c, 
       0x4dd, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x90, 
       0x4e8, 0x3, 0x2, 0x2, 0x2, 0x92, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x94, 
       0x4ec, 0x3, 0x2, 0x2, 0x2, 0x96, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x98, 
       0x4f7, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x500, 0x3, 0x2, 0x2, 0x2, 0x9c, 
       0x509, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x522, 0x3, 0x2, 0x2, 0x2, 0xa0, 
       0x528, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x533, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0x54d, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x54f, 0x3, 0x2, 0x2, 0x2, 0xa8, 
       0x55e, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x573, 0x3, 0x2, 0x2, 0x2, 0xac, 
       0x575, 0x3, 0x2, 0x2, 0x2, 0xae, 0x584, 0x3, 0x2, 0x2, 0x2, 0xb0, 
       0x586, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x589, 0x3, 0x2, 0x2, 0x2, 0xb4, 
       0x599, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x59b, 0x3, 0x2, 0x2, 0x2, 0xb8, 
       0x59f, 0x3, 0x2, 0x2, 0x2, 0xba, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0xbc, 
       0x5a5, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0xc0, 
       0x5ac, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0xc4, 
       0x5be, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0xc8, 
       0x5c8, 0x3, 0x2, 0x2, 0x2, 0xca, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0xcc, 
       0x5d1, 0x3, 0x2, 0x2, 0x2, 0xce, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0xd0, 
       0x5e5, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x5ef, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0x5ff, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x601, 0x3, 0x2, 0x2, 0x2, 0xd8, 
       0x612, 0x3, 0x2, 0x2, 0x2, 0xda, 0x624, 0x3, 0x2, 0x2, 0x2, 0xdc, 
       0x62d, 0x3, 0x2, 0x2, 0x2, 0xde, 0x63e, 0x3, 0x2, 0x2, 0x2, 0xe0, 
       0x644, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x646, 0x3, 0x2, 0x2, 0x2, 0xe4, 
       0x64a, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x64c, 0x3, 0x2, 0x2, 0x2, 0xe8, 
       0x650, 0x3, 0x2, 0x2, 0x2, 0xea, 0x667, 0x3, 0x2, 0x2, 0x2, 0xec, 
       0x669, 0x3, 0x2, 0x2, 0x2, 0xee, 0x674, 0x3, 0x2, 0x2, 0x2, 0xf0, 
       0x67d, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x683, 0x3, 0x2, 0x2, 0x2, 0xf4, 
       0x68e, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0xf8, 
       0x6af, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x6cb, 0x3, 0x2, 0x2, 0x2, 0xfc, 
       0x6cd, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x6d1, 0x3, 0x2, 0x2, 0x2, 0x100, 
       0x6d3, 0x3, 0x2, 0x2, 0x2, 0x102, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x104, 
       0x6da, 0x3, 0x2, 0x2, 0x2, 0x106, 0x6e6, 0x3, 0x2, 0x2, 0x2, 0x108, 
       0x6ed, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x10c, 
       0x713, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x715, 0x3, 0x2, 0x2, 0x2, 0x110, 
       0x732, 0x3, 0x2, 0x2, 0x2, 0x112, 0x734, 0x3, 0x2, 0x2, 0x2, 0x114, 
       0x75e, 0x3, 0x2, 0x2, 0x2, 0x116, 0x761, 0x3, 0x2, 0x2, 0x2, 0x118, 
       0x777, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x77e, 0x3, 0x2, 0x2, 0x2, 0x11c, 
       0x783, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x787, 0x3, 0x2, 0x2, 0x2, 0x120, 
       0x789, 0x3, 0x2, 0x2, 0x2, 0x122, 0x7a2, 0x3, 0x2, 0x2, 0x2, 0x124, 
       0x7a6, 0x3, 0x2, 0x2, 0x2, 0x126, 0x7a8, 0x3, 0x2, 0x2, 0x2, 0x128, 
       0x7c1, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x7c4, 0x3, 0x2, 0x2, 0x2, 0x12c, 
       0x7c8, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x7ca, 0x3, 0x2, 0x2, 0x2, 0x130, 
       0x7d5, 0x3, 0x2, 0x2, 0x2, 0x132, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x134, 
       0x7e9, 0x3, 0x2, 0x2, 0x2, 0x136, 0x807, 0x3, 0x2, 0x2, 0x2, 0x138, 
       0x809, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x813, 0x3, 0x2, 0x2, 0x2, 0x13c, 
       0x815, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x819, 0x3, 0x2, 0x2, 0x2, 0x140, 
       0x81c, 0x3, 0x2, 0x2, 0x2, 0x142, 0x841, 0x3, 0x2, 0x2, 0x2, 0x144, 
       0x848, 0x3, 0x2, 0x2, 0x2, 0x146, 0x84a, 0x3, 0x2, 0x2, 0x2, 0x148, 
       0x84c, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x14c, 
       0x851, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x855, 0x3, 0x2, 0x2, 0x2, 0x150, 
       0x859, 0x3, 0x2, 0x2, 0x2, 0x152, 0x867, 0x3, 0x2, 0x2, 0x2, 0x154, 
       0x873, 0x3, 0x2, 0x2, 0x2, 0x156, 0x877, 0x3, 0x2, 0x2, 0x2, 0x158, 
       0x879, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x881, 0x3, 0x2, 0x2, 0x2, 0x15c, 
       0x883, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x889, 0x3, 0x2, 0x2, 0x2, 0x160, 
       0x896, 0x3, 0x2, 0x2, 0x2, 0x162, 0x8c8, 0x3, 0x2, 0x2, 0x2, 0x164, 
       0x8ca, 0x3, 0x2, 0x2, 0x2, 0x166, 0x8e0, 0x3, 0x2, 0x2, 0x2, 0x168, 
       0x8e2, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x8e4, 0x3, 0x2, 0x2, 0x2, 0x16c, 
       0x8f7, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x904, 0x3, 0x2, 0x2, 0x2, 0x170, 
       0x907, 0x3, 0x2, 0x2, 0x2, 0x172, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x174, 
       0x911, 0x3, 0x2, 0x2, 0x2, 0x176, 0x915, 0x3, 0x2, 0x2, 0x2, 0x178, 
       0x91c, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x920, 0x3, 0x2, 0x2, 0x2, 0x17c, 
       0x934, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x936, 0x3, 0x2, 0x2, 0x2, 0x180, 
       0x93c, 0x3, 0x2, 0x2, 0x2, 0x182, 0x93e, 0x3, 0x2, 0x2, 0x2, 0x184, 
       0x945, 0x3, 0x2, 0x2, 0x2, 0x186, 0x95b, 0x3, 0x2, 0x2, 0x2, 0x188, 
       0x990, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x999, 0x3, 0x2, 0x2, 0x2, 0x18c, 
       0x99b, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x99d, 0x3, 0x2, 0x2, 0x2, 0x190, 
       0x99f, 0x3, 0x2, 0x2, 0x2, 0x192, 0x194, 0x5, 0x7c, 0x3f, 0x2, 0x193, 
       0x192, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 
       0x195, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 0x2, 0x2, 0x3, 0x196, 
       0x3, 0x3, 0x2, 0x2, 0x2, 0x197, 0x1a0, 0x5, 0x18a, 0xc6, 0x2, 0x198, 
       0x1a0, 0x7, 0x46, 0x2, 0x2, 0x199, 0x19a, 0x7, 0x56, 0x2, 0x2, 0x19a, 
       0x19b, 0x5, 0x5e, 0x30, 0x2, 0x19b, 0x19c, 0x7, 0x57, 0x2, 0x2, 0x19c, 
       0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x1a0, 0x5, 0x6, 0x4, 0x2, 0x19e, 
       0x1a0, 0x5, 0xe, 0x8, 0x2, 0x19f, 0x197, 0x3, 0x2, 0x2, 0x2, 0x19f, 
       0x198, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19f, 
       0x19d, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 
       0x5, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a4, 0x5, 0x8, 0x5, 0x2, 0x1a2, 
       0x1a4, 0x5, 0xa, 0x6, 0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 
       0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1a5, 
       0x1af, 0x7, 0x87, 0x2, 0x2, 0x1a6, 0x1af, 0x5, 0x158, 0xad, 0x2, 
       0x1a7, 0x1af, 0x5, 0x14a, 0xa6, 0x2, 0x1a8, 0x1af, 0x5, 0x15a, 0xae, 
       0x2, 0x1a9, 0x1aa, 0x7, 0x64, 0x2, 0x2, 0x1aa, 0x1af, 0x5, 0x124, 
       0x93, 0x2, 0x1ab, 0x1ac, 0x7, 0x64, 0x2, 0x2, 0x1ac, 0x1af, 0x5, 
       0xa2, 0x52, 0x2, 0x1ad, 0x1af, 0x5, 0x166, 0xb4, 0x2, 0x1ae, 0x1a5, 
       0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1a7, 
       0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1a9, 
       0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ad, 
       0x3, 0x2, 0x2, 0x2, 0x1af, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b2, 
       0x5, 0xc, 0x7, 0x2, 0x1b1, 0x1b3, 0x7, 0x45, 0x2, 0x2, 0x1b2, 0x1b1, 
       0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 
       0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x5, 0x8, 0x5, 0x2, 0x1b5, 0xb, 
       0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x8, 0x7, 0x1, 0x2, 0x1b7, 0x1c2, 
       0x7, 0x82, 0x2, 0x2, 0x1b8, 0x1b9, 0x5, 0xa0, 0x51, 0x2, 0x1b9, 0x1ba, 
       0x7, 0x82, 0x2, 0x2, 0x1ba, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 
       0x5, 0xb8, 0x5d, 0x2, 0x1bc, 0x1bd, 0x7, 0x82, 0x2, 0x2, 0x1bd, 0x1c2, 
       0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x5, 0xa2, 0x52, 0x2, 0x1bf, 0x1c0, 
       0x7, 0x82, 0x2, 0x2, 0x1c0, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1b6, 
       0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1bb, 
       0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1cf, 
       0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0xc, 0x4, 0x2, 0x2, 0x1c4, 0x1c5, 
       0x7, 0x87, 0x2, 0x2, 0x1c5, 0x1ce, 0x7, 0x82, 0x2, 0x2, 0x1c6, 0x1c8, 
       0xc, 0x3, 0x2, 0x2, 0x1c7, 0x1c9, 0x7, 0x45, 0x2, 0x2, 0x1c8, 0x1c7, 
       0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 
       0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x5, 0x164, 0xb3, 0x2, 0x1cb, 0x1cc, 
       0x7, 0x82, 0x2, 0x2, 0x1cc, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1c3, 
       0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1d1, 
       0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 
       0x3, 0x2, 0x2, 0x2, 0x1d0, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 
       0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d4, 0x5, 0x10, 0x9, 0x2, 0x1d3, 0x1d5, 
       0x5, 0x1e, 0x10, 0x2, 0x1d4, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 
       0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 
       0x5, 0x68, 0x35, 0x2, 0x1d7, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1da, 
       0x7, 0x58, 0x2, 0x2, 0x1d9, 0x1db, 0x5, 0x12, 0xa, 0x2, 0x1da, 0x1d9, 
       0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 
       0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x59, 0x2, 0x2, 0x1dd, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e5, 0x5, 0x14, 0xb, 0x2, 0x1df, 0x1e5, 
       0x5, 0x16, 0xc, 0x2, 0x1e0, 0x1e1, 0x5, 0x14, 0xb, 0x2, 0x1e1, 0x1e2, 
       0x7, 0x7d, 0x2, 0x2, 0x1e2, 0x1e3, 0x5, 0x16, 0xc, 0x2, 0x1e3, 0x1e5, 
       0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1df, 
       0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x9, 0x2, 0x2, 0x2, 0x1e7, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x8, 0xc, 0x1, 0x2, 0x1e9, 0x1eb, 
       0x5, 0x18, 0xd, 0x2, 0x1ea, 0x1ec, 0x7, 0x86, 0x2, 0x2, 0x1eb, 0x1ea, 
       0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1f5, 
       0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0xc, 0x3, 0x2, 0x2, 0x1ee, 0x1ef, 
       0x7, 0x7d, 0x2, 0x2, 0x1ef, 0x1f1, 0x5, 0x18, 0xd, 0x2, 0x1f0, 0x1f2, 
       0x7, 0x86, 0x2, 0x2, 0x1f1, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 
       0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1ed, 
       0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f3, 
       0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1fb, 
       0x5, 0x1a, 0xe, 0x2, 0x1f9, 0x1fb, 0x5, 0x1c, 0xf, 0x2, 0x1fa, 0x1f8, 
       0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x19, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x201, 0x7, 0x87, 0x2, 0x2, 0x1fd, 0x1fe, 
       0x7, 0x62, 0x2, 0x2, 0x1fe, 0x201, 0x7, 0x87, 0x2, 0x2, 0x1ff, 0x201, 
       0x7, 0x46, 0x2, 0x2, 0x200, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1fd, 
       0x3, 0x2, 0x2, 0x2, 0x200, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x7, 0x87, 0x2, 0x2, 0x203, 0x208, 
       0x5, 0x11a, 0x8e, 0x2, 0x204, 0x205, 0x7, 0x62, 0x2, 0x2, 0x205, 
       0x206, 0x7, 0x87, 0x2, 0x2, 0x206, 0x208, 0x5, 0x11a, 0x8e, 0x2, 
       0x207, 0x202, 0x3, 0x2, 0x2, 0x2, 0x207, 0x204, 0x3, 0x2, 0x2, 0x2, 
       0x208, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x7, 0x56, 0x2, 0x2, 
       0x20a, 0x20b, 0x5, 0x110, 0x89, 0x2, 0x20b, 0x20d, 0x7, 0x57, 0x2, 
       0x2, 0x20c, 0x20e, 0x7, 0x30, 0x2, 0x2, 0x20d, 0x20c, 0x3, 0x2, 0x2, 
       0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 
       0x2, 0x20f, 0x211, 0x5, 0x180, 0xc1, 0x2, 0x210, 0x20f, 0x3, 0x2, 
       0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 0x2, 0x2, 0x211, 0x213, 0x3, 0x2, 
       0x2, 0x2, 0x212, 0x214, 0x5, 0xd6, 0x6c, 0x2, 0x213, 0x212, 0x3, 
       0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x3, 
       0x2, 0x2, 0x2, 0x215, 0x217, 0x5, 0xf8, 0x7d, 0x2, 0x216, 0x215, 
       0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 0x2, 0x2, 0x217, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x8, 0x11, 0x1, 0x2, 0x219, 0x259, 
       0x5, 0x4, 0x3, 0x2, 0x21a, 0x21b, 0x5, 0x9e, 0x50, 0x2, 0x21b, 0x21d, 
       0x7, 0x56, 0x2, 0x2, 0x21c, 0x21e, 0x5, 0x26, 0x14, 0x2, 0x21d, 0x21c, 
       0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 
       0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x7, 0x57, 0x2, 0x2, 0x220, 0x259, 
       0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x5, 0x16e, 0xb8, 0x2, 0x222, 0x224, 
       0x7, 0x56, 0x2, 0x2, 0x223, 0x225, 0x5, 0x26, 0x14, 0x2, 0x224, 0x223, 
       0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x7, 0x57, 0x2, 0x2, 0x227, 0x259, 
       0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x5, 0x9e, 0x50, 0x2, 0x229, 0x22a, 
       0x5, 0x122, 0x92, 0x2, 0x22a, 0x259, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 
       0x5, 0x16e, 0xb8, 0x2, 0x22c, 0x22d, 0x5, 0x122, 0x92, 0x2, 0x22d, 
       0x259, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x7, 0x20, 0x2, 0x2, 0x22f, 
       0x230, 0x7, 0x67, 0x2, 0x2, 0x230, 0x231, 0x5, 0x104, 0x83, 0x2, 
       0x231, 0x232, 0x7, 0x68, 0x2, 0x2, 0x232, 0x233, 0x7, 0x56, 0x2, 
       0x2, 0x233, 0x234, 0x5, 0x5e, 0x30, 0x2, 0x234, 0x235, 0x7, 0x57, 
       0x2, 0x2, 0x235, 0x259, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x7, 0x42, 
       0x2, 0x2, 0x237, 0x238, 0x7, 0x67, 0x2, 0x2, 0x238, 0x239, 0x5, 0x104, 
       0x83, 0x2, 0x239, 0x23a, 0x7, 0x68, 0x2, 0x2, 0x23a, 0x23b, 0x7, 
       0x56, 0x2, 0x2, 0x23b, 0x23c, 0x5, 0x5e, 0x30, 0x2, 0x23c, 0x23d, 
       0x7, 0x57, 0x2, 0x2, 0x23d, 0x259, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 
       0x7, 0x3b, 0x2, 0x2, 0x23f, 0x240, 0x7, 0x67, 0x2, 0x2, 0x240, 0x241, 
       0x5, 0x104, 0x83, 0x2, 0x241, 0x242, 0x7, 0x68, 0x2, 0x2, 0x242, 
       0x243, 0x7, 0x56, 0x2, 0x2, 0x243, 0x244, 0x5, 0x5e, 0x30, 0x2, 0x244, 
       0x245, 0x7, 0x57, 0x2, 0x2, 0x245, 0x259, 0x3, 0x2, 0x2, 0x2, 0x246, 
       0x247, 0x7, 0x19, 0x2, 0x2, 0x247, 0x248, 0x7, 0x67, 0x2, 0x2, 0x248, 
       0x249, 0x5, 0x104, 0x83, 0x2, 0x249, 0x24a, 0x7, 0x68, 0x2, 0x2, 
       0x24a, 0x24b, 0x7, 0x56, 0x2, 0x2, 0x24b, 0x24c, 0x5, 0x5e, 0x30, 
       0x2, 0x24c, 0x24d, 0x7, 0x57, 0x2, 0x2, 0x24d, 0x259, 0x3, 0x2, 0x2, 
       0x2, 0x24e, 0x24f, 0x5, 0x24, 0x13, 0x2, 0x24f, 0x250, 0x7, 0x56, 
       0x2, 0x2, 0x250, 0x251, 0x5, 0x5e, 0x30, 0x2, 0x251, 0x252, 0x7, 
       0x57, 0x2, 0x2, 0x252, 0x259, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x5, 
       0x24, 0x13, 0x2, 0x254, 0x255, 0x7, 0x56, 0x2, 0x2, 0x255, 0x256, 
       0x5, 0x104, 0x83, 0x2, 0x256, 0x257, 0x7, 0x57, 0x2, 0x2, 0x257, 
       0x259, 0x3, 0x2, 0x2, 0x2, 0x258, 0x218, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x21a, 0x3, 0x2, 0x2, 0x2, 0x258, 0x221, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x228, 0x3, 0x2, 0x2, 0x2, 0x258, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x22e, 0x3, 0x2, 0x2, 0x2, 0x258, 0x236, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x23e, 0x3, 0x2, 0x2, 0x2, 0x258, 0x246, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x24e, 0x3, 0x2, 0x2, 0x2, 0x258, 0x253, 0x3, 0x2, 0x2, 0x2, 0x259, 
       0x282, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0xc, 0x15, 0x2, 0x2, 0x25b, 
       0x25c, 0x7, 0x58, 0x2, 0x2, 0x25c, 0x25d, 0x5, 0x5e, 0x30, 0x2, 0x25d, 
       0x25e, 0x7, 0x59, 0x2, 0x2, 0x25e, 0x281, 0x3, 0x2, 0x2, 0x2, 0x25f, 
       0x260, 0xc, 0x14, 0x2, 0x2, 0x260, 0x261, 0x7, 0x58, 0x2, 0x2, 0x261, 
       0x262, 0x5, 0x122, 0x92, 0x2, 0x262, 0x263, 0x7, 0x59, 0x2, 0x2, 
       0x263, 0x281, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 0xc, 0x13, 0x2, 0x2, 
       0x265, 0x267, 0x7, 0x56, 0x2, 0x2, 0x266, 0x268, 0x5, 0x26, 0x14, 
       0x2, 0x267, 0x266, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 
       0x2, 0x268, 0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x281, 0x7, 0x57, 0x2, 
       0x2, 0x26a, 0x26b, 0xc, 0xe, 0x2, 0x2, 0x26b, 0x26d, 0x7, 0x84, 0x2, 
       0x2, 0x26c, 0x26e, 0x7, 0x45, 0x2, 0x2, 0x26d, 0x26c, 0x3, 0x2, 0x2, 
       0x2, 0x26d, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 
       0x2, 0x26f, 0x281, 0x5, 0x6, 0x4, 0x2, 0x270, 0x271, 0xc, 0xd, 0x2, 
       0x2, 0x271, 0x273, 0x7, 0x7f, 0x2, 0x2, 0x272, 0x274, 0x7, 0x45, 
       0x2, 0x2, 0x273, 0x272, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x3, 0x2, 
       0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 0x2, 0x2, 0x275, 0x281, 0x5, 0x6, 
       0x4, 0x2, 0x276, 0x277, 0xc, 0xc, 0x2, 0x2, 0x277, 0x278, 0x7, 0x84, 
       0x2, 0x2, 0x278, 0x281, 0x5, 0x28, 0x15, 0x2, 0x279, 0x27a, 0xc, 
       0xb, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x7f, 0x2, 0x2, 0x27b, 0x281, 0x5, 
       0x28, 0x15, 0x2, 0x27c, 0x27d, 0xc, 0xa, 0x2, 0x2, 0x27d, 0x281, 
       0x7, 0x7b, 0x2, 0x2, 0x27e, 0x27f, 0xc, 0x9, 0x2, 0x2, 0x27f, 0x281, 
       0x7, 0x7c, 0x2, 0x2, 0x280, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x280, 0x25f, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x264, 0x3, 0x2, 0x2, 0x2, 0x280, 0x26a, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x270, 0x3, 0x2, 0x2, 0x2, 0x280, 0x276, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x279, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27c, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x281, 0x284, 
       0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 
       0x3, 0x2, 0x2, 0x2, 0x283, 0x21, 0x3, 0x2, 0x2, 0x2, 0x284, 0x282, 
       0x3, 0x2, 0x2, 0x2, 0x285, 0x286, 0x7, 0x4c, 0x2, 0x2, 0x286, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x7, 0x4c, 0x2, 0x2, 0x288, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x5, 0x120, 0x91, 0x2, 0x28a, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x28b, 0x28d, 0x5, 0xc, 0x7, 0x2, 0x28c, 0x28b, 
       0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 
       0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x5, 0xa0, 0x51, 0x2, 0x28f, 0x290, 
       0x7, 0x82, 0x2, 0x2, 0x290, 0x291, 0x7, 0x64, 0x2, 0x2, 0x291, 0x292, 
       0x5, 0xa0, 0x51, 0x2, 0x292, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 
       0x5, 0xc, 0x7, 0x2, 0x294, 0x295, 0x7, 0x45, 0x2, 0x2, 0x295, 0x296, 
       0x5, 0x164, 0xb3, 0x2, 0x296, 0x297, 0x7, 0x82, 0x2, 0x2, 0x297, 
       0x298, 0x7, 0x64, 0x2, 0x2, 0x298, 0x299, 0x5, 0xa0, 0x51, 0x2, 0x299, 
       0x2a2, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29c, 0x5, 0xc, 0x7, 0x2, 0x29b, 
       0x29a, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29c, 
       0x29d, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x7, 0x64, 0x2, 0x2, 0x29e, 
       0x2a2, 0x5, 0xa0, 0x51, 0x2, 0x29f, 0x2a0, 0x7, 0x64, 0x2, 0x2, 0x2a0, 
       0x2a2, 0x5, 0xa2, 0x52, 0x2, 0x2a1, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x2a1, 
       0x293, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x2a1, 
       0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
       0x2c0, 0x5, 0x20, 0x11, 0x2, 0x2a4, 0x2a5, 0x7, 0x7b, 0x2, 0x2, 0x2a5, 
       0x2c0, 0x5, 0x3e, 0x20, 0x2, 0x2a6, 0x2a7, 0x7, 0x7c, 0x2, 0x2, 0x2a7, 
       0x2c0, 0x5, 0x3e, 0x20, 0x2, 0x2a8, 0x2a9, 0x5, 0x2c, 0x17, 0x2, 
       0x2a9, 0x2aa, 0x5, 0x3e, 0x20, 0x2, 0x2aa, 0x2c0, 0x3, 0x2, 0x2, 
       0x2, 0x2ab, 0x2ac, 0x7, 0x3f, 0x2, 0x2, 0x2ac, 0x2c0, 0x5, 0x2a, 
       0x16, 0x2, 0x2ad, 0x2ae, 0x7, 0x3f, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 
       0x56, 0x2, 0x2, 0x2af, 0x2b0, 0x5, 0x104, 0x83, 0x2, 0x2b0, 0x2b1, 
       0x7, 0x57, 0x2, 0x2, 0x2b1, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 
       0x7, 0x3f, 0x2, 0x2, 0x2b3, 0x2b4, 0x7, 0x86, 0x2, 0x2, 0x2b4, 0x2b5, 
       0x7, 0x56, 0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x87, 0x2, 0x2, 0x2b6, 0x2c0, 
       0x7, 0x57, 0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0xc, 0x2, 0x2, 0x2b8, 0x2b9, 
       0x7, 0x56, 0x2, 0x2, 0x2b9, 0x2ba, 0x5, 0x104, 0x83, 0x2, 0x2ba, 
       0x2bb, 0x7, 0x57, 0x2, 0x2, 0x2bb, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
       0x2c0, 0x5, 0x3c, 0x1f, 0x2, 0x2bd, 0x2c0, 0x5, 0x2e, 0x18, 0x2, 
       0x2be, 0x2c0, 0x5, 0x3a, 0x1e, 0x2, 0x2bf, 0x2a3, 0x3, 0x2, 0x2, 
       0x2, 0x2bf, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2a6, 0x3, 0x2, 0x2, 
       0x2, 0x2bf, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2ab, 0x3, 0x2, 0x2, 
       0x2, 0x2bf, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2b2, 0x3, 0x2, 0x2, 
       0x2, 0x2bf, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bc, 0x3, 0x2, 0x2, 
       0x2, 0x2bf, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2be, 0x3, 0x2, 0x2, 
       0x2, 0x2c0, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 0x9, 0x3, 0x2, 
       0x2, 0x2c2, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c5, 0x7, 0x82, 0x2, 
       0x2, 0x2c4, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 0x3, 0x2, 0x2, 
       0x2, 0x2c5, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c8, 0x7, 0x32, 0x2, 
       0x2, 0x2c7, 0x2c9, 0x5, 0x30, 0x19, 0x2, 0x2c8, 0x2c7, 0x3, 0x2, 
       0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x3, 0x2, 
       0x2, 0x2, 0x2ca, 0x2cc, 0x5, 0x32, 0x1a, 0x2, 0x2cb, 0x2cd, 0x5, 
       0x38, 0x1d, 0x2, 0x2cc, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 
       0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d0, 
       0x7, 0x82, 0x2, 0x2, 0x2cf, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 
       0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d3, 
       0x7, 0x32, 0x2, 0x2, 0x2d2, 0x2d4, 0x5, 0x30, 0x19, 0x2, 0x2d3, 0x2d2, 
       0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 
       0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x7, 0x56, 0x2, 0x2, 0x2d6, 0x2d7, 
       0x5, 0x104, 0x83, 0x2, 0x2d7, 0x2d9, 0x7, 0x57, 0x2, 0x2, 0x2d8, 
       0x2da, 0x5, 0x38, 0x1d, 0x2, 0x2d9, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d9, 
       0x2da, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2db, 
       0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2dc, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 0x7, 0x56, 0x2, 0x2, 0x2de, 
       0x2df, 0x5, 0x26, 0x14, 0x2, 0x2df, 0x2e0, 0x7, 0x57, 0x2, 0x2, 0x2e0, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e3, 0x5, 0x9a, 0x4e, 0x2, 0x2e2, 
       0x2e4, 0x5, 0x34, 0x1b, 0x2, 0x2e3, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e3, 
       0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2e5, 
       0x2e7, 0x5, 0xfa, 0x7e, 0x2, 0x2e6, 0x2e8, 0x5, 0x34, 0x1b, 0x2, 
       0x2e7, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x3, 0x2, 0x2, 0x2, 
       0x2e8, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2eb, 0x5, 0x36, 0x1c, 
       0x2, 0x2ea, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2e9, 0x3, 0x2, 0x2, 
       0x2, 0x2eb, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 0x8, 0x1c, 0x1, 
       0x2, 0x2ed, 0x2ee, 0x7, 0x58, 0x2, 0x2, 0x2ee, 0x2ef, 0x5, 0x5e, 
       0x30, 0x2, 0x2ef, 0x2f1, 0x7, 0x59, 0x2, 0x2, 0x2f0, 0x2f2, 0x5, 
       0xd6, 0x6c, 0x2, 0x2f1, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 
       0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 
       0xc, 0x3, 0x2, 0x2, 0x2f4, 0x2f5, 0x7, 0x58, 0x2, 0x2, 0x2f5, 0x2f6, 
       0x5, 0x60, 0x31, 0x2, 0x2f6, 0x2f8, 0x7, 0x59, 0x2, 0x2, 0x2f7, 0x2f9, 
       0x5, 0xd6, 0x6c, 0x2, 0x2f8, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 
       0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f3, 
       0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fa, 
       0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x37, 
       0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x301, 
       0x7, 0x56, 0x2, 0x2, 0x300, 0x302, 0x5, 0x26, 0x14, 0x2, 0x301, 0x300, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 
       0x3, 0x2, 0x2, 0x2, 0x303, 0x306, 0x7, 0x57, 0x2, 0x2, 0x304, 0x306, 
       0x5, 0x122, 0x92, 0x2, 0x305, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x305, 0x304, 
       0x3, 0x2, 0x2, 0x2, 0x306, 0x39, 0x3, 0x2, 0x2, 0x2, 0x307, 0x309, 
       0x7, 0x82, 0x2, 0x2, 0x308, 0x307, 0x3, 0x2, 0x2, 0x2, 0x308, 0x309, 
       0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30b, 
       0x7, 0x1d, 0x2, 0x2, 0x30b, 0x314, 0x5, 0x3e, 0x20, 0x2, 0x30c, 0x30e, 
       0x7, 0x82, 0x2, 0x2, 0x30d, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 
       0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 
       0x7, 0x1d, 0x2, 0x2, 0x310, 0x311, 0x7, 0x58, 0x2, 0x2, 0x311, 0x312, 
       0x7, 0x59, 0x2, 0x2, 0x312, 0x314, 0x5, 0x3e, 0x20, 0x2, 0x313, 0x308, 
       0x3, 0x2, 0x2, 0x2, 0x313, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x314, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x7, 0x33, 0x2, 0x2, 0x316, 0x317, 
       0x7, 0x56, 0x2, 0x2, 0x317, 0x318, 0x5, 0x5e, 0x30, 0x2, 0x318, 0x319, 
       0x7, 0x57, 0x2, 0x2, 0x319, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x321, 
       0x5, 0x2a, 0x16, 0x2, 0x31b, 0x31c, 0x7, 0x56, 0x2, 0x2, 0x31c, 0x31d, 
       0x5, 0x104, 0x83, 0x2, 0x31d, 0x31e, 0x7, 0x57, 0x2, 0x2, 0x31e, 
       0x31f, 0x5, 0x3e, 0x20, 0x2, 0x31f, 0x321, 0x3, 0x2, 0x2, 0x2, 0x320, 
       0x31a, 0x3, 0x2, 0x2, 0x2, 0x320, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x321, 
       0x3f, 0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x8, 0x21, 0x1, 0x2, 0x323, 
       0x324, 0x5, 0x3e, 0x20, 0x2, 0x324, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x325, 
       0x326, 0xc, 0x4, 0x2, 0x2, 0x326, 0x327, 0x7, 0x85, 0x2, 0x2, 0x327, 
       0x32c, 0x5, 0x3e, 0x20, 0x2, 0x328, 0x329, 0xc, 0x3, 0x2, 0x2, 0x329, 
       0x32a, 0x7, 0x7e, 0x2, 0x2, 0x32a, 0x32c, 0x5, 0x3e, 0x20, 0x2, 0x32b, 
       0x325, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x328, 0x3, 0x2, 0x2, 0x2, 0x32c, 
       0x32f, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32d, 
       0x32e, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x32f, 
       0x32d, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 0x8, 0x22, 0x1, 0x2, 0x331, 
       0x332, 0x5, 0x40, 0x21, 0x2, 0x332, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x333, 
       0x334, 0xc, 0x5, 0x2, 0x2, 0x334, 0x335, 0x7, 0x5e, 0x2, 0x2, 0x335, 
       0x33d, 0x5, 0x40, 0x21, 0x2, 0x336, 0x337, 0xc, 0x4, 0x2, 0x2, 0x337, 
       0x338, 0x7, 0x5f, 0x2, 0x2, 0x338, 0x33d, 0x5, 0x40, 0x21, 0x2, 0x339, 
       0x33a, 0xc, 0x3, 0x2, 0x2, 0x33a, 0x33b, 0x7, 0x60, 0x2, 0x2, 0x33b, 
       0x33d, 0x5, 0x40, 0x21, 0x2, 0x33c, 0x333, 0x3, 0x2, 0x2, 0x2, 0x33c, 
       0x336, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33d, 
       0x340, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x33f, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x43, 0x3, 0x2, 0x2, 0x2, 0x340, 
       0x33e, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 0x8, 0x23, 0x1, 0x2, 0x342, 
       0x343, 0x5, 0x42, 0x22, 0x2, 0x343, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x344, 
       0x345, 0xc, 0x4, 0x2, 0x2, 0x345, 0x346, 0x7, 0x5c, 0x2, 0x2, 0x346, 
       0x34b, 0x5, 0x42, 0x22, 0x2, 0x347, 0x348, 0xc, 0x3, 0x2, 0x2, 0x348, 
       0x349, 0x7, 0x5d, 0x2, 0x2, 0x349, 0x34b, 0x5, 0x42, 0x22, 0x2, 0x34a, 
       0x344, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x347, 0x3, 0x2, 0x2, 0x2, 0x34b, 
       0x34e, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34c, 
       0x34d, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x45, 0x3, 0x2, 0x2, 0x2, 0x34e, 
       0x34c, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 0x8, 0x24, 0x1, 0x2, 0x350, 
       0x351, 0x5, 0x44, 0x23, 0x2, 0x351, 0x358, 0x3, 0x2, 0x2, 0x2, 0x352, 
       0x353, 0xc, 0x3, 0x2, 0x2, 0x353, 0x354, 0x5, 0x48, 0x25, 0x2, 0x354, 
       0x355, 0x5, 0x44, 0x23, 0x2, 0x355, 0x357, 0x3, 0x2, 0x2, 0x2, 0x356, 
       0x352, 0x3, 0x2, 0x2, 0x2, 0x357, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x358, 
       0x356, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x3, 0x2, 0x2, 0x2, 0x359, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x358, 0x3, 0x2, 0x2, 0x2, 0x35b, 
       0x35c, 0x9, 0x4, 0x2, 0x2, 0x35c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x35d, 
       0x35e, 0x8, 0x26, 0x1, 0x2, 0x35e, 0x35f, 0x5, 0x46, 0x24, 0x2, 0x35f, 
       0x36e, 0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0xc, 0x6, 0x2, 0x2, 0x361, 
       0x362, 0x7, 0x67, 0x2, 0x2, 0x362, 0x36d, 0x5, 0x46, 0x24, 0x2, 0x363, 
       0x364, 0xc, 0x5, 0x2, 0x2, 0x364, 0x365, 0x7, 0x68, 0x2, 0x2, 0x365, 
       0x36d, 0x5, 0x46, 0x24, 0x2, 0x366, 0x367, 0xc, 0x4, 0x2, 0x2, 0x367, 
       0x368, 0x7, 0x77, 0x2, 0x2, 0x368, 0x36d, 0x5, 0x46, 0x24, 0x2, 0x369, 
       0x36a, 0xc, 0x3, 0x2, 0x2, 0x36a, 0x36b, 0x7, 0x78, 0x2, 0x2, 0x36b, 
       0x36d, 0x5, 0x46, 0x24, 0x2, 0x36c, 0x360, 0x3, 0x2, 0x2, 0x2, 0x36c, 
       0x363, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x366, 0x3, 0x2, 0x2, 0x2, 0x36c, 
       0x369, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x370, 0x3, 0x2, 0x2, 0x2, 0x36e, 
       0x36c, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x36f, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x370, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x371, 
       0x372, 0x8, 0x27, 0x1, 0x2, 0x372, 0x373, 0x5, 0x4a, 0x26, 0x2, 0x373, 
       0x37c, 0x3, 0x2, 0x2, 0x2, 0x374, 0x375, 0xc, 0x4, 0x2, 0x2, 0x375, 
       0x376, 0x7, 0x75, 0x2, 0x2, 0x376, 0x37b, 0x5, 0x4a, 0x26, 0x2, 0x377, 
       0x378, 0xc, 0x3, 0x2, 0x2, 0x378, 0x379, 0x7, 0x76, 0x2, 0x2, 0x379, 
       0x37b, 0x5, 0x4a, 0x26, 0x2, 0x37a, 0x374, 0x3, 0x2, 0x2, 0x2, 0x37a, 
       0x377, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x37a, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x37d, 
       0x4d, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37f, 
       0x380, 0x8, 0x28, 0x1, 0x2, 0x380, 0x381, 0x5, 0x4c, 0x27, 0x2, 0x381, 
       0x387, 0x3, 0x2, 0x2, 0x2, 0x382, 0x383, 0xc, 0x3, 0x2, 0x2, 0x383, 
       0x384, 0x7, 0x62, 0x2, 0x2, 0x384, 0x386, 0x5, 0x4c, 0x27, 0x2, 0x385, 
       0x382, 0x3, 0x2, 0x2, 0x2, 0x386, 0x389, 0x3, 0x2, 0x2, 0x2, 0x387, 
       0x385, 0x3, 0x2, 0x2, 0x2, 0x387, 0x388, 0x3, 0x2, 0x2, 0x2, 0x388, 
       0x4f, 0x3, 0x2, 0x2, 0x2, 0x389, 0x387, 0x3, 0x2, 0x2, 0x2, 0x38a, 
       0x38b, 0x8, 0x29, 0x1, 0x2, 0x38b, 0x38c, 0x5, 0x4e, 0x28, 0x2, 0x38c, 
       0x392, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 0xc, 0x3, 0x2, 0x2, 0x38e, 
       0x38f, 0x7, 0x61, 0x2, 0x2, 0x38f, 0x391, 0x5, 0x4e, 0x28, 0x2, 0x390, 
       0x38d, 0x3, 0x2, 0x2, 0x2, 0x391, 0x394, 0x3, 0x2, 0x2, 0x2, 0x392, 
       0x390, 0x3, 0x2, 0x2, 0x2, 0x392, 0x393, 0x3, 0x2, 0x2, 0x2, 0x393, 
       0x51, 0x3, 0x2, 0x2, 0x2, 0x394, 0x392, 0x3, 0x2, 0x2, 0x2, 0x395, 
       0x396, 0x8, 0x2a, 0x1, 0x2, 0x396, 0x397, 0x5, 0x50, 0x29, 0x2, 0x397, 
       0x39d, 0x3, 0x2, 0x2, 0x2, 0x398, 0x399, 0xc, 0x3, 0x2, 0x2, 0x399, 
       0x39a, 0x7, 0x63, 0x2, 0x2, 0x39a, 0x39c, 0x5, 0x50, 0x29, 0x2, 0x39b, 
       0x398, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39d, 
       0x39b, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x39e, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x3a0, 
       0x3a1, 0x8, 0x2b, 0x1, 0x2, 0x3a1, 0x3a2, 0x5, 0x52, 0x2a, 0x2, 0x3a2, 
       0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 0xc, 0x4, 0x2, 0x2, 0x3a4, 
       0x3a5, 0x7, 0x5, 0x2, 0x2, 0x3a5, 0x3aa, 0x5, 0x52, 0x2a, 0x2, 0x3a6, 
       0x3a7, 0xc, 0x3, 0x2, 0x2, 0x3a7, 0x3a8, 0x7, 0x6, 0x2, 0x2, 0x3a8, 
       0x3aa, 0x5, 0x52, 0x2a, 0x2, 0x3a9, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a9, 
       0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
       0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ac, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ae, 
       0x3af, 0x8, 0x2c, 0x1, 0x2, 0x3af, 0x3b0, 0x5, 0x54, 0x2b, 0x2, 0x3b0, 
       0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 0xc, 0x4, 0x2, 0x2, 0x3b2, 
       0x3b3, 0x7, 0x7, 0x2, 0x2, 0x3b3, 0x3b8, 0x5, 0x54, 0x2b, 0x2, 0x3b4, 
       0x3b5, 0xc, 0x3, 0x2, 0x2, 0x3b5, 0x3b6, 0x7, 0x8, 0x2, 0x2, 0x3b6, 
       0x3b8, 0x5, 0x54, 0x2b, 0x2, 0x3b7, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b7, 
       0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
       0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 
       0x57, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bc, 
       0x3c4, 0x5, 0x56, 0x2c, 0x2, 0x3bd, 0x3be, 0x5, 0x56, 0x2c, 0x2, 
       0x3be, 0x3bf, 0x7, 0x80, 0x2, 0x2, 0x3bf, 0x3c0, 0x5, 0x5e, 0x30, 
       0x2, 0x3c0, 0x3c1, 0x7, 0x81, 0x2, 0x2, 0x3c1, 0x3c2, 0x5, 0x5a, 
       0x2e, 0x2, 0x3c2, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3bc, 0x3, 0x2, 
       0x2, 0x2, 0x3c3, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x59, 0x3, 0x2, 
       0x2, 0x2, 0x3c5, 0x3cc, 0x5, 0x58, 0x2d, 0x2, 0x3c6, 0x3c7, 0x5, 
       0x56, 0x2c, 0x2, 0x3c7, 0x3c8, 0x5, 0x5c, 0x2f, 0x2, 0x3c8, 0x3c9, 
       0x5, 0x11e, 0x90, 0x2, 0x3c9, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cc, 
       0x5, 0x17e, 0xc0, 0x2, 0x3cb, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3c6, 
       0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 0x9, 0x5, 0x2, 0x2, 0x3ce, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x8, 0x30, 0x1, 0x2, 0x3d0, 0x3d1, 
       0x5, 0x5a, 0x2e, 0x2, 0x3d1, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 
       0xc, 0x3, 0x2, 0x2, 0x3d3, 0x3d4, 0x7, 0x7d, 0x2, 0x2, 0x3d4, 0x3d6, 
       0x5, 0x5a, 0x2e, 0x2, 0x3d5, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d9, 
       0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 
       0x3, 0x2, 0x2, 0x2, 0x3d8, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3d7, 
       0x3, 0x2, 0x2, 0x2, 0x3da, 0x3db, 0x5, 0x58, 0x2d, 0x2, 0x3db, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3f7, 0x5, 0x64, 0x33, 0x2, 0x3dd, 0x3df, 
       0x5, 0xd6, 0x6c, 0x2, 0x3de, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 
       0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3f7, 
       0x5, 0x66, 0x34, 0x2, 0x3e1, 0x3e3, 0x5, 0xd6, 0x6c, 0x2, 0x3e2, 
       0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
       0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3f7, 0x5, 0x68, 0x35, 0x2, 0x3e5, 
       0x3e7, 0x5, 0xd6, 0x6c, 0x2, 0x3e6, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e6, 
       0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e8, 
       0x3f7, 0x5, 0x6c, 0x37, 0x2, 0x3e9, 0x3eb, 0x5, 0xd6, 0x6c, 0x2, 
       0x3ea, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 
       0x3eb, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3f7, 0x5, 0x70, 0x39, 
       0x2, 0x3ed, 0x3ef, 0x5, 0xd6, 0x6c, 0x2, 0x3ee, 0x3ed, 0x3, 0x2, 
       0x2, 0x2, 0x3ee, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x3, 0x2, 
       0x2, 0x2, 0x3f0, 0x3f7, 0x5, 0x78, 0x3d, 0x2, 0x3f1, 0x3f7, 0x5, 
       0x7a, 0x3e, 0x2, 0x3f2, 0x3f4, 0x5, 0xd6, 0x6c, 0x2, 0x3f3, 0x3f2, 
       0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 
       0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f7, 0x5, 0x174, 0xbb, 0x2, 0x3f6, 0x3dc, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3e2, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3ea, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f1, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3fa, 0x5, 0xd6, 0x6c, 0x2, 0x3f9, 0x3f8, 
       0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 
       0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x87, 0x2, 0x2, 0x3fc, 0x3fd, 
       0x7, 0x81, 0x2, 0x2, 0x3fd, 0x40d, 0x5, 0x62, 0x32, 0x2, 0x3fe, 0x400, 
       0x5, 0xd6, 0x6c, 0x2, 0x3ff, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 
       0x3, 0x2, 0x2, 0x2, 0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 
       0x7, 0x11, 0x2, 0x2, 0x402, 0x403, 0x5, 0x60, 0x31, 0x2, 0x403, 0x404, 
       0x7, 0x81, 0x2, 0x2, 0x404, 0x405, 0x5, 0x62, 0x32, 0x2, 0x405, 0x40d, 
       0x3, 0x2, 0x2, 0x2, 0x406, 0x408, 0x5, 0xd6, 0x6c, 0x2, 0x407, 0x406, 
       0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 
       0x3, 0x2, 0x2, 0x2, 0x409, 0x40a, 0x7, 0x1c, 0x2, 0x2, 0x40a, 0x40b, 
       0x7, 0x81, 0x2, 0x2, 0x40b, 0x40d, 0x5, 0x62, 0x32, 0x2, 0x40c, 0x3f9, 
       0x3, 0x2, 0x2, 0x2, 0x40c, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x407, 
       0x3, 0x2, 0x2, 0x2, 0x40d, 0x65, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x410, 
       0x5, 0x5e, 0x30, 0x2, 0x40f, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x410, 
       0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 
       0x7, 0x83, 0x2, 0x2, 0x412, 0x67, 0x3, 0x2, 0x2, 0x2, 0x413, 0x415, 
       0x7, 0x5a, 0x2, 0x2, 0x414, 0x416, 0x5, 0x6a, 0x36, 0x2, 0x415, 0x414, 
       0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 
       0x3, 0x2, 0x2, 0x2, 0x417, 0x418, 0x7, 0x5b, 0x2, 0x2, 0x418, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 0x8, 0x36, 0x1, 0x2, 0x41a, 0x41b, 
       0x5, 0x62, 0x32, 0x2, 0x41b, 0x420, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41d, 
       0xc, 0x3, 0x2, 0x2, 0x41d, 0x41f, 0x5, 0x62, 0x32, 0x2, 0x41e, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x422, 0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 
       0x3, 0x2, 0x2, 0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 0x2, 0x421, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 
       0x7, 0x2c, 0x2, 0x2, 0x424, 0x425, 0x7, 0x56, 0x2, 0x2, 0x425, 0x426, 
       0x5, 0x6e, 0x38, 0x2, 0x426, 0x427, 0x7, 0x57, 0x2, 0x2, 0x427, 0x428, 
       0x5, 0x62, 0x32, 0x2, 0x428, 0x438, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 
       0x7, 0x2c, 0x2, 0x2, 0x42a, 0x42b, 0x7, 0x56, 0x2, 0x2, 0x42b, 0x42c, 
       0x5, 0x6e, 0x38, 0x2, 0x42c, 0x42d, 0x7, 0x57, 0x2, 0x2, 0x42d, 0x42e, 
       0x5, 0x62, 0x32, 0x2, 0x42e, 0x42f, 0x7, 0x21, 0x2, 0x2, 0x42f, 0x430, 
       0x5, 0x62, 0x32, 0x2, 0x430, 0x438, 0x3, 0x2, 0x2, 0x2, 0x431, 0x432, 
       0x7, 0x44, 0x2, 0x2, 0x432, 0x433, 0x7, 0x56, 0x2, 0x2, 0x433, 0x434, 
       0x5, 0x6e, 0x38, 0x2, 0x434, 0x435, 0x7, 0x57, 0x2, 0x2, 0x435, 0x436, 
       0x5, 0x62, 0x32, 0x2, 0x436, 0x438, 0x3, 0x2, 0x2, 0x2, 0x437, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x437, 0x429, 0x3, 0x2, 0x2, 0x2, 0x437, 0x431, 
       0x3, 0x2, 0x2, 0x2, 0x438, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x439, 0x44a, 
       0x5, 0x5e, 0x30, 0x2, 0x43a, 0x43c, 0x5, 0xd6, 0x6c, 0x2, 0x43b, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43c, 
       0x43d, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x5, 0x8e, 0x48, 0x2, 0x43e, 
       0x43f, 0x5, 0xf0, 0x79, 0x2, 0x43f, 0x440, 0x7, 0x66, 0x2, 0x2, 0x440, 
       0x441, 0x5, 0x11e, 0x90, 0x2, 0x441, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x442, 
       0x444, 0x5, 0xd6, 0x6c, 0x2, 0x443, 0x442, 0x3, 0x2, 0x2, 0x2, 0x443, 
       0x444, 0x3, 0x2, 0x2, 0x2, 0x444, 0x445, 0x3, 0x2, 0x2, 0x2, 0x445, 
       0x446, 0x5, 0x8e, 0x48, 0x2, 0x446, 0x447, 0x5, 0xf0, 0x79, 0x2, 
       0x447, 0x448, 0x5, 0x122, 0x92, 0x2, 0x448, 0x44a, 0x3, 0x2, 0x2, 
       0x2, 0x449, 0x439, 0x3, 0x2, 0x2, 0x2, 0x449, 0x43b, 0x3, 0x2, 0x2, 
       0x2, 0x449, 0x443, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x6f, 0x3, 0x2, 0x2, 
       0x2, 0x44b, 0x44c, 0x7, 0x55, 0x2, 0x2, 0x44c, 0x44d, 0x7, 0x56, 
       0x2, 0x2, 0x44d, 0x44e, 0x5, 0x6e, 0x38, 0x2, 0x44e, 0x44f, 0x7, 
       0x57, 0x2, 0x2, 0x44f, 0x450, 0x5, 0x62, 0x32, 0x2, 0x450, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x7, 0x1e, 0x2, 0x2, 0x452, 0x453, 
       0x5, 0x62, 0x32, 0x2, 0x453, 0x454, 0x7, 0x55, 0x2, 0x2, 0x454, 0x455, 
       0x7, 0x56, 0x2, 0x2, 0x455, 0x456, 0x5, 0x5e, 0x30, 0x2, 0x456, 0x457, 
       0x7, 0x57, 0x2, 0x2, 0x457, 0x458, 0x7, 0x83, 0x2, 0x2, 0x458, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x459, 0x45a, 0x7, 0x29, 0x2, 0x2, 0x45a, 0x45b, 
       0x7, 0x56, 0x2, 0x2, 0x45b, 0x45d, 0x5, 0x72, 0x3a, 0x2, 0x45c, 0x45e, 
       0x5, 0x6e, 0x38, 0x2, 0x45d, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45e, 
       0x3, 0x2, 0x2, 0x2, 0x45e, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x461, 
       0x7, 0x83, 0x2, 0x2, 0x460, 0x462, 0x5, 0x5e, 0x30, 0x2, 0x461, 0x460, 
       0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 
       0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 0x7, 0x57, 0x2, 0x2, 0x464, 0x465, 
       0x5, 0x62, 0x32, 0x2, 0x465, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x466, 0x467, 
       0x7, 0x29, 0x2, 0x2, 0x467, 0x468, 0x7, 0x56, 0x2, 0x2, 0x468, 0x469, 
       0x5, 0x74, 0x3b, 0x2, 0x469, 0x46a, 0x7, 0x81, 0x2, 0x2, 0x46a, 0x46b, 
       0x5, 0x76, 0x3c, 0x2, 0x46b, 0x46c, 0x7, 0x57, 0x2, 0x2, 0x46c, 0x46d, 
       0x5, 0x62, 0x32, 0x2, 0x46d, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x44b, 
       0x3, 0x2, 0x2, 0x2, 0x46e, 0x451, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x459, 
       0x3, 0x2, 0x2, 0x2, 0x46e, 0x466, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x71, 
       0x3, 0x2, 0x2, 0x2, 0x470, 0x473, 0x5, 0x66, 0x34, 0x2, 0x471, 0x473, 
       0x5, 0x84, 0x43, 0x2, 0x472, 0x470, 0x3, 0x2, 0x2, 0x2, 0x472, 0x471, 
       0x3, 0x2, 0x2, 0x2, 0x473, 0x73, 0x3, 0x2, 0x2, 0x2, 0x474, 0x476, 
       0x5, 0xd6, 0x6c, 0x2, 0x475, 0x474, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 
       0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 
       0x5, 0x8e, 0x48, 0x2, 0x478, 0x479, 0x5, 0xf0, 0x79, 0x2, 0x479, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x47d, 0x5, 0x5e, 0x30, 0x2, 0x47b, 
       0x47d, 0x5, 0x122, 0x92, 0x2, 0x47c, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x47c, 
       0x47b, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x77, 0x3, 0x2, 0x2, 0x2, 0x47e, 
       0x47f, 0x7, 0x10, 0x2, 0x2, 0x47f, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x480, 
       0x481, 0x7, 0x1a, 0x2, 0x2, 0x481, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x482, 
       0x484, 0x7, 0x3c, 0x2, 0x2, 0x483, 0x485, 0x5, 0x5e, 0x30, 0x2, 0x484, 
       0x483, 0x3, 0x2, 0x2, 0x2, 0x484, 0x485, 0x3, 0x2, 0x2, 0x2, 0x485, 
       0x486, 0x3, 0x2, 0x2, 0x2, 0x486, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x487, 
       0x488, 0x7, 0x3c, 0x2, 0x2, 0x488, 0x489, 0x5, 0x122, 0x92, 0x2, 
       0x489, 0x48a, 0x7, 0x83, 0x2, 0x2, 0x48a, 0x48f, 0x3, 0x2, 0x2, 0x2, 
       0x48b, 0x48c, 0x7, 0x2b, 0x2, 0x2, 0x48c, 0x48d, 0x7, 0x87, 0x2, 
       0x2, 0x48d, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x48e, 0x47e, 0x3, 0x2, 0x2, 
       0x2, 0x48e, 0x480, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x482, 0x3, 0x2, 0x2, 
       0x2, 0x48e, 0x487, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x48b, 0x3, 0x2, 0x2, 
       0x2, 0x48f, 0x79, 0x3, 0x2, 0x2, 0x2, 0x490, 0x491, 0x5, 0x80, 0x41, 
       0x2, 0x491, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x492, 0x493, 0x8, 0x3f, 0x1, 
       0x2, 0x493, 0x494, 0x5, 0x7e, 0x40, 0x2, 0x494, 0x499, 0x3, 0x2, 
       0x2, 0x2, 0x495, 0x496, 0xc, 0x3, 0x2, 0x2, 0x496, 0x498, 0x5, 0x7e, 
       0x40, 0x2, 0x497, 0x495, 0x3, 0x2, 0x2, 0x2, 0x498, 0x49b, 0x3, 0x2, 
       0x2, 0x2, 0x499, 0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x3, 0x2, 
       0x2, 0x2, 0x49a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x499, 0x3, 0x2, 
       0x2, 0x2, 0x49c, 0x4a6, 0x5, 0x80, 0x41, 0x2, 0x49d, 0x4a6, 0x5, 
       0x116, 0x8c, 0x2, 0x49e, 0x4a6, 0x5, 0x15c, 0xaf, 0x2, 0x49f, 0x4a6, 
       0x5, 0x170, 0xb9, 0x2, 0x4a0, 0x4a6, 0x5, 0x172, 0xba, 0x2, 0x4a1, 
       0x4a6, 0x5, 0xd4, 0x6b, 0x2, 0x4a2, 0x4a6, 0x5, 0xbc, 0x5f, 0x2, 
       0x4a3, 0x4a6, 0x5, 0x88, 0x45, 0x2, 0x4a4, 0x4a6, 0x5, 0x8a, 0x46, 
       0x2, 0x4a5, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x49d, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x49f, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a1, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a3, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x7f, 0x3, 0x2, 0x2, 
       0x2, 0x4a7, 0x4b0, 0x5, 0x84, 0x43, 0x2, 0x4a8, 0x4b0, 0x5, 0xd2, 
       0x6a, 0x2, 0x4a9, 0x4b0, 0x5, 0xca, 0x66, 0x2, 0x4aa, 0x4b0, 0x5, 
       0xce, 0x68, 0x2, 0x4ab, 0x4b0, 0x5, 0xd0, 0x69, 0x2, 0x4ac, 0x4b0, 
       0x5, 0x86, 0x44, 0x2, 0x4ad, 0x4b0, 0x5, 0x82, 0x42, 0x2, 0x4ae, 
       0x4b0, 0x5, 0xac, 0x57, 0x2, 0x4af, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x81, 0x3, 0x2, 0x2, 0x2, 0x4b1, 
       0x4b2, 0x7, 0x50, 0x2, 0x2, 0x4b2, 0x4b4, 0x7, 0x87, 0x2, 0x2, 0x4b3, 
       0x4b5, 0x5, 0xd6, 0x6c, 0x2, 0x4b4, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b4, 
       0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b6, 
       0x4b7, 0x7, 0x66, 0x2, 0x2, 0x4b7, 0x4b8, 0x5, 0x104, 0x83, 0x2, 
       0x4b8, 0x4b9, 0x7, 0x83, 0x2, 0x2, 0x4b9, 0x83, 0x3, 0x2, 0x2, 0x2, 
       0x4ba, 0x4bc, 0x5, 0x8e, 0x48, 0x2, 0x4bb, 0x4ba, 0x3, 0x2, 0x2, 
       0x2, 0x4bb, 0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4be, 0x3, 0x2, 0x2, 
       0x2, 0x4bd, 0x4bf, 0x5, 0xec, 0x77, 0x2, 0x4be, 0x4bd, 0x3, 0x2, 
       0x2, 0x2, 0x4be, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 0x3, 0x2, 
       0x2, 0x2, 0x4c0, 0x4c9, 0x7, 0x83, 0x2, 0x2, 0x4c1, 0x4c3, 0x5, 0xd6, 
       0x6c, 0x2, 0x4c2, 0x4c4, 0x5, 0x8e, 0x48, 0x2, 0x4c3, 0x4c2, 0x3, 
       0x2, 0x2, 0x2, 0x4c3, 0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c5, 0x3, 
       0x2, 0x2, 0x2, 0x4c5, 0x4c6, 0x5, 0xec, 0x77, 0x2, 0x4c6, 0x4c7, 
       0x7, 0x83, 0x2, 0x2, 0x4c7, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4bb, 
       0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x7, 0x41, 0x2, 0x2, 0x4cb, 0x4cc, 
       0x7, 0x56, 0x2, 0x2, 0x4cc, 0x4cd, 0x5, 0x60, 0x31, 0x2, 0x4cd, 0x4ce, 
       0x7, 0x7d, 0x2, 0x2, 0x4ce, 0x4cf, 0x7, 0x90, 0x2, 0x2, 0x4cf, 0x4d0, 
       0x7, 0x57, 0x2, 0x2, 0x4d0, 0x4d1, 0x7, 0x83, 0x2, 0x2, 0x4d1, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d3, 0x7, 0x83, 0x2, 0x2, 0x4d3, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d5, 0x5, 0xd6, 0x6c, 0x2, 0x4d5, 0x4d6, 
       0x7, 0x83, 0x2, 0x2, 0x4d6, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4de, 
       0x5, 0x90, 0x49, 0x2, 0x4d8, 0x4de, 0x5, 0x96, 0x4c, 0x2, 0x4d9, 
       0x4de, 0x5, 0x92, 0x4a, 0x2, 0x4da, 0x4de, 0x7, 0x2a, 0x2, 0x2, 0x4db, 
       0x4de, 0x7, 0x4b, 0x2, 0x2, 0x4dc, 0x4de, 0x7, 0x18, 0x2, 0x2, 0x4dd, 
       0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4dd, 
       0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dd, 
       0x4db, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4de, 
       0x8d, 0x3, 0x2, 0x2, 0x2, 0x4df, 0x4e1, 0x5, 0x8c, 0x47, 0x2, 0x4e0, 
       0x4e2, 0x5, 0xd6, 0x6c, 0x2, 0x4e1, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e1, 
       0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e3, 
       0x4e4, 0x5, 0x8c, 0x47, 0x2, 0x4e4, 0x4e5, 0x5, 0x8e, 0x48, 0x2, 
       0x4e5, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4df, 0x3, 0x2, 0x2, 0x2, 
       0x4e6, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x8f, 0x3, 0x2, 0x2, 0x2, 
       0x4e8, 0x4e9, 0x9, 0x6, 0x2, 0x2, 0x4e9, 0x91, 0x3, 0x2, 0x2, 0x2, 
       0x4ea, 0x4eb, 0x9, 0x7, 0x2, 0x2, 0x4eb, 0x93, 0x3, 0x2, 0x2, 0x2, 
       0x4ec, 0x4ed, 0x7, 0x87, 0x2, 0x2, 0x4ed, 0x95, 0x3, 0x2, 0x2, 0x2, 
       0x4ee, 0x4f2, 0x5, 0x98, 0x4d, 0x2, 0x4ef, 0x4f2, 0x5, 0x126, 0x94, 
       0x2, 0x4f0, 0x4f2, 0x5, 0xa8, 0x55, 0x2, 0x4f1, 0x4ee, 0x3, 0x2, 
       0x2, 0x2, 0x4f1, 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f0, 0x3, 0x2, 
       0x2, 0x2, 0x4f2, 0x97, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f8, 0x5, 0x9e, 
       0x50, 0x2, 0x4f4, 0x4f8, 0x5, 0xa4, 0x53, 0x2, 0x4f5, 0x4f8, 0x5, 
       0x16e, 0xb8, 0x2, 0x4f6, 0x4f8, 0x5, 0xfe, 0x80, 0x2, 0x4f7, 0x4f3, 
       0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f5, 
       0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x99, 
       0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4fb, 0x5, 0x96, 0x4c, 0x2, 0x4fa, 0x4fc, 
       0x5, 0xd6, 0x6c, 0x2, 0x4fb, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fc, 
       0x3, 0x2, 0x2, 0x2, 0x4fc, 0x501, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fe, 
       0x5, 0x96, 0x4c, 0x2, 0x4fe, 0x4ff, 0x5, 0x9a, 0x4e, 0x2, 0x4ff, 
       0x501, 0x3, 0x2, 0x2, 0x2, 0x500, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x500, 
       0x4fd, 0x3, 0x2, 0x2, 0x2, 0x501, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x502, 
       0x504, 0x5, 0x98, 0x4d, 0x2, 0x503, 0x505, 0x5, 0xd6, 0x6c, 0x2, 
       0x504, 0x503, 0x3, 0x2, 0x2, 0x2, 0x504, 0x505, 0x3, 0x2, 0x2, 0x2, 
       0x505, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x506, 0x507, 0x5, 0x98, 0x4d, 
       0x2, 0x507, 0x508, 0x5, 0x9c, 0x4f, 0x2, 0x508, 0x50a, 0x3, 0x2, 
       0x2, 0x2, 0x509, 0x502, 0x3, 0x2, 0x2, 0x2, 0x509, 0x506, 0x3, 0x2, 
       0x2, 0x2, 0x50a, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x50d, 0x5, 0xc, 
       0x7, 0x2, 0x50c, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50d, 0x3, 0x2, 
       0x2, 0x2, 0x50d, 0x50e, 0x3, 0x2, 0x2, 0x2, 0x50e, 0x523, 0x5, 0xa0, 
       0x51, 0x2, 0x50f, 0x510, 0x5, 0xc, 0x7, 0x2, 0x510, 0x511, 0x7, 0x45, 
       0x2, 0x2, 0x511, 0x512, 0x5, 0x164, 0xb3, 0x2, 0x512, 0x523, 0x3, 
       0x2, 0x2, 0x2, 0x513, 0x523, 0x7, 0x13, 0x2, 0x2, 0x514, 0x523, 0x7, 
       0x14, 0x2, 0x2, 0x515, 0x523, 0x7, 0x15, 0x2, 0x2, 0x516, 0x523, 
       0x7, 0x54, 0x2, 0x2, 0x517, 0x523, 0x7, 0xf, 0x2, 0x2, 0x518, 0x523, 
       0x7, 0x3d, 0x2, 0x2, 0x519, 0x523, 0x7, 0x2e, 0x2, 0x2, 0x51a, 0x523, 
       0x7, 0x2f, 0x2, 0x2, 0x51b, 0x523, 0x7, 0x3e, 0x2, 0x2, 0x51c, 0x523, 
       0x7, 0x4f, 0x2, 0x2, 0x51d, 0x523, 0x7, 0x28, 0x2, 0x2, 0x51e, 0x523, 
       0x7, 0x1f, 0x2, 0x2, 0x51f, 0x523, 0x7, 0x52, 0x2, 0x2, 0x520, 0x523, 
       0x7, 0xe, 0x2, 0x2, 0x521, 0x523, 0x5, 0xa2, 0x52, 0x2, 0x522, 0x50c, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x522, 0x513, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x514, 0x3, 0x2, 0x2, 0x2, 0x522, 0x515, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x516, 0x3, 0x2, 0x2, 0x2, 0x522, 0x517, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x518, 0x3, 0x2, 0x2, 0x2, 0x522, 0x519, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x51a, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51b, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51d, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51f, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x520, 0x3, 0x2, 0x2, 0x2, 0x522, 0x521, 
       0x3, 0x2, 0x2, 0x2, 0x523, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x524, 0x529, 
       0x5, 0x124, 0x93, 0x2, 0x525, 0x529, 0x5, 0xa6, 0x54, 0x2, 0x526, 
       0x529, 0x5, 0x94, 0x4b, 0x2, 0x527, 0x529, 0x5, 0x164, 0xb3, 0x2, 
       0x528, 0x524, 0x3, 0x2, 0x2, 0x2, 0x528, 0x525, 0x3, 0x2, 0x2, 0x2, 
       0x528, 0x526, 0x3, 0x2, 0x2, 0x2, 0x528, 0x527, 0x3, 0x2, 0x2, 0x2, 
       0x529, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x52a, 0x52b, 0x7, 0x1b, 0x2, 0x2, 
       0x52b, 0x52c, 0x7, 0x56, 0x2, 0x2, 0x52c, 0x52d, 0x5, 0x5e, 0x30, 
       0x2, 0x52d, 0x52e, 0x7, 0x57, 0x2, 0x2, 0x52e, 0x534, 0x3, 0x2, 0x2, 
       0x2, 0x52f, 0x530, 0x7, 0x1b, 0x2, 0x2, 0x530, 0x531, 0x7, 0x56, 
       0x2, 0x2, 0x531, 0x532, 0x7, 0xe, 0x2, 0x2, 0x532, 0x534, 0x7, 0x57, 
       0x2, 0x2, 0x533, 0x52a, 0x3, 0x2, 0x2, 0x2, 0x533, 0x52f, 0x3, 0x2, 
       0x2, 0x2, 0x534, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x535, 0x537, 0x5, 0x12e, 
       0x98, 0x2, 0x536, 0x538, 0x5, 0xd6, 0x6c, 0x2, 0x537, 0x536, 0x3, 
       0x2, 0x2, 0x2, 0x537, 0x538, 0x3, 0x2, 0x2, 0x2, 0x538, 0x53a, 0x3, 
       0x2, 0x2, 0x2, 0x539, 0x53b, 0x5, 0xc, 0x7, 0x2, 0x53a, 0x539, 0x3, 
       0x2, 0x2, 0x2, 0x53a, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x53c, 0x3, 
       0x2, 0x2, 0x2, 0x53c, 0x53d, 0x7, 0x87, 0x2, 0x2, 0x53d, 0x54e, 0x3, 
       0x2, 0x2, 0x2, 0x53e, 0x53f, 0x5, 0x12e, 0x98, 0x2, 0x53f, 0x540, 
       0x5, 0x164, 0xb3, 0x2, 0x540, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x541, 0x542, 
       0x5, 0x12e, 0x98, 0x2, 0x542, 0x544, 0x5, 0xc, 0x7, 0x2, 0x543, 0x545, 
       0x7, 0x45, 0x2, 0x2, 0x544, 0x543, 0x3, 0x2, 0x2, 0x2, 0x544, 0x545, 
       0x3, 0x2, 0x2, 0x2, 0x545, 0x546, 0x3, 0x2, 0x2, 0x2, 0x546, 0x547, 
       0x5, 0x164, 0xb3, 0x2, 0x547, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x548, 0x54a, 
       0x7, 0x22, 0x2, 0x2, 0x549, 0x54b, 0x5, 0xc, 0x7, 0x2, 0x54a, 0x549, 
       0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54b, 0x54c, 
       0x3, 0x2, 0x2, 0x2, 0x54c, 0x54e, 0x7, 0x87, 0x2, 0x2, 0x54d, 0x535, 
       0x3, 0x2, 0x2, 0x2, 0x54d, 0x53e, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x541, 
       0x3, 0x2, 0x2, 0x2, 0x54d, 0x548, 0x3, 0x2, 0x2, 0x2, 0x54e, 0xa5, 
       0x3, 0x2, 0x2, 0x2, 0x54f, 0x550, 0x7, 0x87, 0x2, 0x2, 0x550, 0xa7, 
       0x3, 0x2, 0x2, 0x2, 0x551, 0x552, 0x5, 0xaa, 0x56, 0x2, 0x552, 0x554, 
       0x7, 0x5a, 0x2, 0x2, 0x553, 0x555, 0x5, 0xb2, 0x5a, 0x2, 0x554, 0x553, 
       0x3, 0x2, 0x2, 0x2, 0x554, 0x555, 0x3, 0x2, 0x2, 0x2, 0x555, 0x556, 
       0x3, 0x2, 0x2, 0x2, 0x556, 0x557, 0x7, 0x5b, 0x2, 0x2, 0x557, 0x55f, 
       0x3, 0x2, 0x2, 0x2, 0x558, 0x559, 0x5, 0xaa, 0x56, 0x2, 0x559, 0x55a, 
       0x7, 0x5a, 0x2, 0x2, 0x55a, 0x55b, 0x5, 0xb2, 0x5a, 0x2, 0x55b, 0x55c, 
       0x7, 0x7d, 0x2, 0x2, 0x55c, 0x55d, 0x7, 0x5b, 0x2, 0x2, 0x55d, 0x55f, 
       0x3, 0x2, 0x2, 0x2, 0x55e, 0x551, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x558, 
       0x3, 0x2, 0x2, 0x2, 0x55f, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x560, 0x562, 
       0x5, 0xae, 0x58, 0x2, 0x561, 0x563, 0x5, 0xd6, 0x6c, 0x2, 0x562, 
       0x561, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 0x3, 0x2, 0x2, 0x2, 0x563, 
       0x565, 0x3, 0x2, 0x2, 0x2, 0x564, 0x566, 0x7, 0x87, 0x2, 0x2, 0x565, 
       0x564, 0x3, 0x2, 0x2, 0x2, 0x565, 0x566, 0x3, 0x2, 0x2, 0x2, 0x566, 
       0x568, 0x3, 0x2, 0x2, 0x2, 0x567, 0x569, 0x5, 0xb0, 0x59, 0x2, 0x568, 
       0x567, 0x3, 0x2, 0x2, 0x2, 0x568, 0x569, 0x3, 0x2, 0x2, 0x2, 0x569, 
       0x574, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x56c, 0x5, 0xae, 0x58, 0x2, 0x56b, 
       0x56d, 0x5, 0xd6, 0x6c, 0x2, 0x56c, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x56c, 
       0x56d, 0x3, 0x2, 0x2, 0x2, 0x56d, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x56e, 
       0x56f, 0x5, 0xc, 0x7, 0x2, 0x56f, 0x571, 0x7, 0x87, 0x2, 0x2, 0x570, 
       0x572, 0x5, 0xb0, 0x59, 0x2, 0x571, 0x570, 0x3, 0x2, 0x2, 0x2, 0x571, 
       0x572, 0x3, 0x2, 0x2, 0x2, 0x572, 0x574, 0x3, 0x2, 0x2, 0x2, 0x573, 
       0x560, 0x3, 0x2, 0x2, 0x2, 0x573, 0x56a, 0x3, 0x2, 0x2, 0x2, 0x574, 
       0xab, 0x3, 0x2, 0x2, 0x2, 0x575, 0x577, 0x5, 0xae, 0x58, 0x2, 0x576, 
       0x578, 0x5, 0xd6, 0x6c, 0x2, 0x577, 0x576, 0x3, 0x2, 0x2, 0x2, 0x577, 
       0x578, 0x3, 0x2, 0x2, 0x2, 0x578, 0x579, 0x3, 0x2, 0x2, 0x2, 0x579, 
       0x57b, 0x7, 0x87, 0x2, 0x2, 0x57a, 0x57c, 0x5, 0xb0, 0x59, 0x2, 0x57b, 
       0x57a, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x57c, 
       0x57d, 0x3, 0x2, 0x2, 0x2, 0x57d, 0x57e, 0x7, 0x83, 0x2, 0x2, 0x57e, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x585, 0x7, 0x22, 0x2, 0x2, 0x580, 
       0x581, 0x7, 0x22, 0x2, 0x2, 0x581, 0x585, 0x7, 0x16, 0x2, 0x2, 0x582, 
       0x583, 0x7, 0x22, 0x2, 0x2, 0x583, 0x585, 0x7, 0x43, 0x2, 0x2, 0x584, 
       0x57f, 0x3, 0x2, 0x2, 0x2, 0x584, 0x580, 0x3, 0x2, 0x2, 0x2, 0x584, 
       0x582, 0x3, 0x2, 0x2, 0x2, 0x585, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x586, 
       0x587, 0x7, 0x81, 0x2, 0x2, 0x587, 0x588, 0x5, 0x9a, 0x4e, 0x2, 0x588, 
       0xb1, 0x3, 0x2, 0x2, 0x2, 0x589, 0x58a, 0x8, 0x5a, 0x1, 0x2, 0x58a, 
       0x58b, 0x5, 0xb4, 0x5b, 0x2, 0x58b, 0x591, 0x3, 0x2, 0x2, 0x2, 0x58c, 
       0x58d, 0xc, 0x3, 0x2, 0x2, 0x58d, 0x58e, 0x7, 0x7d, 0x2, 0x2, 0x58e, 
       0x590, 0x5, 0xb4, 0x5b, 0x2, 0x58f, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x590, 
       0x593, 0x3, 0x2, 0x2, 0x2, 0x591, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x591, 
       0x592, 0x3, 0x2, 0x2, 0x2, 0x592, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x593, 
       0x591, 0x3, 0x2, 0x2, 0x2, 0x594, 0x59a, 0x5, 0xb6, 0x5c, 0x2, 0x595, 
       0x596, 0x5, 0xb6, 0x5c, 0x2, 0x596, 0x597, 0x7, 0x66, 0x2, 0x2, 0x597, 
       0x598, 0x5, 0x60, 0x31, 0x2, 0x598, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x599, 
       0x594, 0x3, 0x2, 0x2, 0x2, 0x599, 0x595, 0x3, 0x2, 0x2, 0x2, 0x59a, 
       0xb5, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x59c, 0x7, 0x87, 0x2, 0x2, 0x59c, 
       0xb7, 0x3, 0x2, 0x2, 0x2, 0x59d, 0x5a0, 0x5, 0xba, 0x5e, 0x2, 0x59e, 
       0x5a0, 0x5, 0xc8, 0x65, 0x2, 0x59f, 0x59d, 0x3, 0x2, 0x2, 0x2, 0x59f, 
       0x59e, 0x3, 0x2, 0x2, 0x2, 0x5a0, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x5a1, 
       0x5a2, 0x7, 0x87, 0x2, 0x2, 0x5a2, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x5a3, 
       0x5a6, 0x5, 0xbe, 0x60, 0x2, 0x5a4, 0x5a6, 0x5, 0xc4, 0x63, 0x2, 
       0x5a5, 0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a4, 0x3, 0x2, 0x2, 0x2, 
       0x5a6, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5aa, 0x5, 0xc0, 0x61, 0x2, 
       0x5a8, 0x5aa, 0x5, 0xc2, 0x62, 0x2, 0x5a9, 0x5a7, 0x3, 0x2, 0x2, 
       0x2, 0x5a9, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0xbf, 0x3, 0x2, 0x2, 
       0x2, 0x5ab, 0x5ad, 0x7, 0x2d, 0x2, 0x2, 0x5ac, 0x5ab, 0x3, 0x2, 0x2, 
       0x2, 0x5ac, 0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ae, 0x3, 0x2, 0x2, 
       0x2, 0x5ae, 0x5af, 0x7, 0x31, 0x2, 0x2, 0x5af, 0x5b0, 0x7, 0x87, 
       0x2, 0x2, 0x5b0, 0x5b1, 0x7, 0x5a, 0x2, 0x2, 0x5b1, 0x5b2, 0x5, 0xc6, 
       0x64, 0x2, 0x5b2, 0x5b3, 0x7, 0x5b, 0x2, 0x2, 0x5b3, 0xc1, 0x3, 0x2, 
       0x2, 0x2, 0x5b4, 0x5b6, 0x7, 0x2d, 0x2, 0x2, 0x5b5, 0x5b4, 0x3, 0x2, 
       0x2, 0x2, 0x5b5, 0x5b6, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b7, 0x3, 0x2, 
       0x2, 0x2, 0x5b7, 0x5b8, 0x7, 0x31, 0x2, 0x2, 0x5b8, 0x5b9, 0x5, 0xba, 
       0x5e, 0x2, 0x5b9, 0x5ba, 0x7, 0x5a, 0x2, 0x2, 0x5ba, 0x5bb, 0x5, 
       0xc6, 0x64, 0x2, 0x5bb, 0x5bc, 0x7, 0x5b, 0x2, 0x2, 0x5bc, 0xc3, 
       0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5bf, 0x7, 0x2d, 0x2, 0x2, 0x5be, 0x5bd, 
       0x3, 0x2, 0x2, 0x2, 0x5be, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c0, 
       0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c1, 0x7, 0x31, 0x2, 0x2, 0x5c1, 0x5c2, 
       0x7, 0x5a, 0x2, 0x2, 0x5c2, 0x5c3, 0x5, 0xc6, 0x64, 0x2, 0x5c3, 0x5c4, 
       0x7, 0x5b, 0x2, 0x2, 0x5c4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c7, 
       0x5, 0x7c, 0x3f, 0x2, 0x5c6, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c7, 
       0x3, 0x2, 0x2, 0x2, 0x5c7, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c9, 
       0x7, 0x87, 0x2, 0x2, 0x5c9, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5cb, 
       0x7, 0x31, 0x2, 0x2, 0x5cb, 0x5cc, 0x7, 0x87, 0x2, 0x2, 0x5cc, 0x5cd, 
       0x7, 0x66, 0x2, 0x2, 0x5cd, 0x5ce, 0x5, 0xcc, 0x67, 0x2, 0x5ce, 0x5cf, 
       0x7, 0x83, 0x2, 0x2, 0x5cf, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d2, 
       0x5, 0xc, 0x7, 0x2, 0x5d1, 0x5d0, 0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5d2, 
       0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5d4, 
       0x5, 0xb8, 0x5d, 0x2, 0x5d4, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d7, 
       0x7, 0x50, 0x2, 0x2, 0x5d6, 0x5d8, 0x7, 0x4d, 0x2, 0x2, 0x5d7, 0x5d6, 
       0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d9, 
       0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5da, 0x5, 0xc, 0x7, 0x2, 0x5da, 0x5db, 
       0x5, 0x8, 0x5, 0x2, 0x5db, 0x5dc, 0x7, 0x83, 0x2, 0x2, 0x5dc, 0x5e3, 
       0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 0x7, 0x50, 0x2, 0x2, 0x5de, 0x5df, 
       0x7, 0x82, 0x2, 0x2, 0x5df, 0x5e0, 0x5, 0x8, 0x5, 0x2, 0x5e0, 0x5e1, 
       0x7, 0x83, 0x2, 0x2, 0x5e1, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5d5, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5e6, 0x5, 0xd6, 0x6c, 0x2, 0x5e5, 0x5e4, 
       0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e6, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e7, 
       0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5e8, 0x7, 0x50, 0x2, 0x2, 0x5e8, 0x5ea, 
       0x7, 0x31, 0x2, 0x2, 0x5e9, 0x5eb, 0x5, 0xc, 0x7, 0x2, 0x5ea, 0x5e9, 
       0x3, 0x2, 0x2, 0x2, 0x5ea, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5ec, 
       0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ed, 0x5, 0xb8, 0x5d, 0x2, 0x5ed, 0x5ee, 
       0x7, 0x83, 0x2, 0x2, 0x5ee, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f0, 
       0x7, 0xd, 0x2, 0x2, 0x5f0, 0x5f1, 0x7, 0x56, 0x2, 0x2, 0x5f1, 0x5f2, 
       0x7, 0x90, 0x2, 0x2, 0x5f2, 0x5f3, 0x7, 0x57, 0x2, 0x2, 0x5f3, 0x5f4, 
       0x7, 0x83, 0x2, 0x2, 0x5f4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x5f5, 0x5f6, 
       0x7, 0x25, 0x2, 0x2, 0x5f6, 0x5f7, 0x7, 0x90, 0x2, 0x2, 0x5f7, 0x5f9, 
       0x7, 0x5a, 0x2, 0x2, 0x5f8, 0x5fa, 0x5, 0x7c, 0x3f, 0x2, 0x5f9, 0x5f8, 
       0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fb, 
       0x3, 0x2, 0x2, 0x2, 0x5fb, 0x600, 0x7, 0x5b, 0x2, 0x2, 0x5fc, 0x5fd, 
       0x7, 0x25, 0x2, 0x2, 0x5fd, 0x5fe, 0x7, 0x90, 0x2, 0x2, 0x5fe, 0x600, 
       0x5, 0x7e, 0x40, 0x2, 0x5ff, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5ff, 0x5fc, 
       0x3, 0x2, 0x2, 0x2, 0x600, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x601, 0x602, 
       0x8, 0x6c, 0x1, 0x2, 0x602, 0x603, 0x5, 0xd8, 0x6d, 0x2, 0x603, 0x608, 
       0x3, 0x2, 0x2, 0x2, 0x604, 0x605, 0xc, 0x3, 0x2, 0x2, 0x605, 0x607, 
       0x5, 0xd8, 0x6d, 0x2, 0x606, 0x604, 0x3, 0x2, 0x2, 0x2, 0x607, 0x60a, 
       0x3, 0x2, 0x2, 0x2, 0x608, 0x606, 0x3, 0x2, 0x2, 0x2, 0x608, 0x609, 
       0x3, 0x2, 0x2, 0x2, 0x609, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x60a, 0x608, 
       0x3, 0x2, 0x2, 0x2, 0x60b, 0x60c, 0x7, 0x58, 0x2, 0x2, 0x60c, 0x60d, 
       0x7, 0x58, 0x2, 0x2, 0x60d, 0x60e, 0x5, 0xdc, 0x6f, 0x2, 0x60e, 0x60f, 
       0x7, 0x59, 0x2, 0x2, 0x60f, 0x610, 0x7, 0x59, 0x2, 0x2, 0x610, 0x613, 
       0x3, 0x2, 0x2, 0x2, 0x611, 0x613, 0x5, 0xda, 0x6e, 0x2, 0x612, 0x60b, 
       0x3, 0x2, 0x2, 0x2, 0x612, 0x611, 0x3, 0x2, 0x2, 0x2, 0x613, 0xd9, 
       0x3, 0x2, 0x2, 0x2, 0x614, 0x615, 0x7, 0xb, 0x2, 0x2, 0x615, 0x616, 
       0x7, 0x56, 0x2, 0x2, 0x616, 0x618, 0x5, 0x104, 0x83, 0x2, 0x617, 
       0x619, 0x7, 0x86, 0x2, 0x2, 0x618, 0x617, 0x3, 0x2, 0x2, 0x2, 0x618, 
       0x619, 0x3, 0x2, 0x2, 0x2, 0x619, 0x61a, 0x3, 0x2, 0x2, 0x2, 0x61a, 
       0x61b, 0x7, 0x57, 0x2, 0x2, 0x61b, 0x625, 0x3, 0x2, 0x2, 0x2, 0x61c, 
       0x61d, 0x7, 0xb, 0x2, 0x2, 0x61d, 0x61e, 0x7, 0x56, 0x2, 0x2, 0x61e, 
       0x620, 0x5, 0x60, 0x31, 0x2, 0x61f, 0x621, 0x7, 0x86, 0x2, 0x2, 0x620, 
       0x61f, 0x3, 0x2, 0x2, 0x2, 0x620, 0x621, 0x3, 0x2, 0x2, 0x2, 0x621, 
       0x622, 0x3, 0x2, 0x2, 0x2, 0x622, 0x623, 0x7, 0x57, 0x2, 0x2, 0x623, 
       0x625, 0x3, 0x2, 0x2, 0x2, 0x624, 0x614, 0x3, 0x2, 0x2, 0x2, 0x624, 
       0x61c, 0x3, 0x2, 0x2, 0x2, 0x625, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x626, 
       0x628, 0x8, 0x6f, 0x1, 0x2, 0x627, 0x629, 0x5, 0xde, 0x70, 0x2, 0x628, 
       0x627, 0x3, 0x2, 0x2, 0x2, 0x628, 0x629, 0x3, 0x2, 0x2, 0x2, 0x629, 
       0x62e, 0x3, 0x2, 0x2, 0x2, 0x62a, 0x62b, 0x5, 0xde, 0x70, 0x2, 0x62b, 
       0x62c, 0x7, 0x86, 0x2, 0x2, 0x62c, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x62d, 
       0x626, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x62a, 0x3, 0x2, 0x2, 0x2, 0x62e, 
       0x63b, 0x3, 0x2, 0x2, 0x2, 0x62f, 0x630, 0xc, 0x5, 0x2, 0x2, 0x630, 
       0x632, 0x7, 0x7d, 0x2, 0x2, 0x631, 0x633, 0x5, 0xde, 0x70, 0x2, 0x632, 
       0x631, 0x3, 0x2, 0x2, 0x2, 0x632, 0x633, 0x3, 0x2, 0x2, 0x2, 0x633, 
       0x63a, 0x3, 0x2, 0x2, 0x2, 0x634, 0x635, 0xc, 0x3, 0x2, 0x2, 0x635, 
       0x636, 0x7, 0x7d, 0x2, 0x2, 0x636, 0x637, 0x5, 0xde, 0x70, 0x2, 0x637, 
       0x638, 0x7, 0x86, 0x2, 0x2, 0x638, 0x63a, 0x3, 0x2, 0x2, 0x2, 0x639, 
       0x62f, 0x3, 0x2, 0x2, 0x2, 0x639, 0x634, 0x3, 0x2, 0x2, 0x2, 0x63a, 
       0x63d, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x639, 0x3, 0x2, 0x2, 0x2, 0x63b, 
       0x63c, 0x3, 0x2, 0x2, 0x2, 0x63c, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x63d, 
       0x63b, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x640, 0x5, 0xe0, 0x71, 0x2, 0x63f, 
       0x641, 0x5, 0xe6, 0x74, 0x2, 0x640, 0x63f, 0x3, 0x2, 0x2, 0x2, 0x640, 
       0x641, 0x3, 0x2, 0x2, 0x2, 0x641, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x642, 
       0x645, 0x7, 0x87, 0x2, 0x2, 0x643, 0x645, 0x5, 0xe2, 0x72, 0x2, 0x644, 
       0x642, 0x3, 0x2, 0x2, 0x2, 0x644, 0x643, 0x3, 0x2, 0x2, 0x2, 0x645, 
       0xe1, 0x3, 0x2, 0x2, 0x2, 0x646, 0x647, 0x5, 0xe4, 0x73, 0x2, 0x647, 
       0x648, 0x7, 0x82, 0x2, 0x2, 0x648, 0x649, 0x7, 0x87, 0x2, 0x2, 0x649, 
       0xe3, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x64b, 0x7, 0x87, 0x2, 0x2, 0x64b, 
       0xe5, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x64d, 0x7, 0x56, 0x2, 0x2, 0x64d, 
       0x64e, 0x5, 0xe8, 0x75, 0x2, 0x64e, 0x64f, 0x7, 0x57, 0x2, 0x2, 0x64f, 
       0xe7, 0x3, 0x2, 0x2, 0x2, 0x650, 0x652, 0x8, 0x75, 0x1, 0x2, 0x651, 
       0x653, 0x5, 0xea, 0x76, 0x2, 0x652, 0x651, 0x3, 0x2, 0x2, 0x2, 0x652, 
       0x653, 0x3, 0x2, 0x2, 0x2, 0x653, 0x658, 0x3, 0x2, 0x2, 0x2, 0x654, 
       0x655, 0xc, 0x3, 0x2, 0x2, 0x655, 0x657, 0x5, 0xea, 0x76, 0x2, 0x656, 
       0x654, 0x3, 0x2, 0x2, 0x2, 0x657, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x658, 
       0x656, 0x3, 0x2, 0x2, 0x2, 0x658, 0x659, 0x3, 0x2, 0x2, 0x2, 0x659, 
       0xe9, 0x3, 0x2, 0x2, 0x2, 0x65a, 0x658, 0x3, 0x2, 0x2, 0x2, 0x65b, 
       0x65c, 0x7, 0x56, 0x2, 0x2, 0x65c, 0x65d, 0x5, 0xe8, 0x75, 0x2, 0x65d, 
       0x65e, 0x7, 0x57, 0x2, 0x2, 0x65e, 0x668, 0x3, 0x2, 0x2, 0x2, 0x65f, 
       0x660, 0x7, 0x58, 0x2, 0x2, 0x660, 0x661, 0x5, 0xe8, 0x75, 0x2, 0x661, 
       0x662, 0x7, 0x59, 0x2, 0x2, 0x662, 0x668, 0x3, 0x2, 0x2, 0x2, 0x663, 
       0x664, 0x7, 0x5a, 0x2, 0x2, 0x664, 0x665, 0x5, 0xe8, 0x75, 0x2, 0x665, 
       0x666, 0x7, 0x5b, 0x2, 0x2, 0x666, 0x668, 0x3, 0x2, 0x2, 0x2, 0x667, 
       0x65b, 0x3, 0x2, 0x2, 0x2, 0x667, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x667, 
       0x663, 0x3, 0x2, 0x2, 0x2, 0x668, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x669, 
       0x66a, 0x8, 0x77, 0x1, 0x2, 0x66a, 0x66b, 0x5, 0xee, 0x78, 0x2, 0x66b, 
       0x671, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x66d, 0xc, 0x3, 0x2, 0x2, 0x66d, 
       0x66e, 0x7, 0x7d, 0x2, 0x2, 0x66e, 0x670, 0x5, 0xee, 0x78, 0x2, 0x66f, 
       0x66c, 0x3, 0x2, 0x2, 0x2, 0x670, 0x673, 0x3, 0x2, 0x2, 0x2, 0x671, 
       0x66f, 0x3, 0x2, 0x2, 0x2, 0x671, 0x672, 0x3, 0x2, 0x2, 0x2, 0x672, 
       0xed, 0x3, 0x2, 0x2, 0x2, 0x673, 0x671, 0x3, 0x2, 0x2, 0x2, 0x674, 
       0x676, 0x5, 0xf0, 0x79, 0x2, 0x675, 0x677, 0x5, 0x11a, 0x8e, 0x2, 
       0x676, 0x675, 0x3, 0x2, 0x2, 0x2, 0x676, 0x677, 0x3, 0x2, 0x2, 0x2, 
       0x677, 0xef, 0x3, 0x2, 0x2, 0x2, 0x678, 0x67e, 0x5, 0xf2, 0x7a, 0x2, 
       0x679, 0x67a, 0x5, 0xf4, 0x7b, 0x2, 0x67a, 0x67b, 0x5, 0xf6, 0x7c, 
       0x2, 0x67b, 0x67c, 0x5, 0xf8, 0x7d, 0x2, 0x67c, 0x67e, 0x3, 0x2, 
       0x2, 0x2, 0x67d, 0x678, 0x3, 0x2, 0x2, 0x2, 0x67d, 0x679, 0x3, 0x2, 
       0x2, 0x2, 0x67e, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x67f, 0x684, 0x5, 0xf4, 
       0x7b, 0x2, 0x680, 0x681, 0x5, 0xfa, 0x7e, 0x2, 0x681, 0x682, 0x5, 
       0xf2, 0x7a, 0x2, 0x682, 0x684, 0x3, 0x2, 0x2, 0x2, 0x683, 0x67f, 
       0x3, 0x2, 0x2, 0x2, 0x683, 0x680, 0x3, 0x2, 0x2, 0x2, 0x684, 0xf3, 
       0x3, 0x2, 0x2, 0x2, 0x685, 0x686, 0x8, 0x7b, 0x1, 0x2, 0x686, 0x688, 
       0x5, 0x102, 0x82, 0x2, 0x687, 0x689, 0x5, 0xd6, 0x6c, 0x2, 0x688, 
       0x687, 0x3, 0x2, 0x2, 0x2, 0x688, 0x689, 0x3, 0x2, 0x2, 0x2, 0x689, 
       0x68f, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x68b, 0x7, 0x56, 0x2, 0x2, 0x68b, 
       0x68c, 0x5, 0xf2, 0x7a, 0x2, 0x68c, 0x68d, 0x7, 0x57, 0x2, 0x2, 0x68d, 
       0x68f, 0x3, 0x2, 0x2, 0x2, 0x68e, 0x685, 0x3, 0x2, 0x2, 0x2, 0x68e, 
       0x68a, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x690, 
       0x691, 0xc, 0x5, 0x2, 0x2, 0x691, 0x69c, 0x5, 0xf6, 0x7c, 0x2, 0x692, 
       0x693, 0xc, 0x4, 0x2, 0x2, 0x693, 0x695, 0x7, 0x58, 0x2, 0x2, 0x694, 
       0x696, 0x5, 0x60, 0x31, 0x2, 0x695, 0x694, 0x3, 0x2, 0x2, 0x2, 0x695, 
       0x696, 0x3, 0x2, 0x2, 0x2, 0x696, 0x697, 0x3, 0x2, 0x2, 0x2, 0x697, 
       0x699, 0x7, 0x59, 0x2, 0x2, 0x698, 0x69a, 0x5, 0xd6, 0x6c, 0x2, 0x699, 
       0x698, 0x3, 0x2, 0x2, 0x2, 0x699, 0x69a, 0x3, 0x2, 0x2, 0x2, 0x69a, 
       0x69c, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x690, 0x3, 0x2, 0x2, 0x2, 0x69b, 
       0x692, 0x3, 0x2, 0x2, 0x2, 0x69c, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x69d, 
       0x69b, 0x3, 0x2, 0x2, 0x2, 0x69d, 0x69e, 0x3, 0x2, 0x2, 0x2, 0x69e, 
       0xf5, 0x3, 0x2, 0x2, 0x2, 0x69f, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x6a0, 
       0x6a1, 0x7, 0x56, 0x2, 0x2, 0x6a1, 0x6a2, 0x5, 0x110, 0x89, 0x2, 
       0x6a2, 0x6a4, 0x7, 0x57, 0x2, 0x2, 0x6a3, 0x6a5, 0x5, 0xfc, 0x7f, 
       0x2, 0x6a4, 0x6a3, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a5, 0x3, 0x2, 0x2, 
       0x2, 0x6a5, 0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6a8, 0x5, 0x100, 
       0x81, 0x2, 0x6a7, 0x6a6, 0x3, 0x2, 0x2, 0x2, 0x6a7, 0x6a8, 0x3, 0x2, 
       0x2, 0x2, 0x6a8, 0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6a9, 0x6ab, 0x5, 0x180, 
       0xc1, 0x2, 0x6aa, 0x6a9, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6ab, 0x3, 0x2, 
       0x2, 0x2, 0x6ab, 0x6ad, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6ae, 0x5, 0xd6, 
       0x6c, 0x2, 0x6ad, 0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x6ae, 0x3, 0x2, 
       0x2, 0x2, 0x6ae, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x6b0, 0x7, 0x7f, 
       0x2, 0x2, 0x6b0, 0x6b2, 0x5, 0x9c, 0x4f, 0x2, 0x6b1, 0x6b3, 0x5, 
       0x106, 0x84, 0x2, 0x6b2, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b2, 0x6b3, 
       0x3, 0x2, 0x2, 0x2, 0x6b3, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b6, 
       0x7, 0x5e, 0x2, 0x2, 0x6b5, 0x6b7, 0x5, 0xd6, 0x6c, 0x2, 0x6b6, 0x6b5, 
       0x3, 0x2, 0x2, 0x2, 0x6b6, 0x6b7, 0x3, 0x2, 0x2, 0x2, 0x6b7, 0x6b9, 
       0x3, 0x2, 0x2, 0x2, 0x6b8, 0x6ba, 0x5, 0xfc, 0x7f, 0x2, 0x6b9, 0x6b8, 
       0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6ba, 0x6cc, 
       0x3, 0x2, 0x2, 0x2, 0x6bb, 0x6bd, 0x7, 0x62, 0x2, 0x2, 0x6bc, 0x6be, 
       0x5, 0xd6, 0x6c, 0x2, 0x6bd, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6be, 
       0x3, 0x2, 0x2, 0x2, 0x6be, 0x6cc, 0x3, 0x2, 0x2, 0x2, 0x6bf, 0x6c1, 
       0x7, 0x5, 0x2, 0x2, 0x6c0, 0x6c2, 0x5, 0xd6, 0x6c, 0x2, 0x6c1, 0x6c0, 
       0x3, 0x2, 0x2, 0x2, 0x6c1, 0x6c2, 0x3, 0x2, 0x2, 0x2, 0x6c2, 0x6cc, 
       0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6c4, 0x5, 0xc, 0x7, 0x2, 0x6c4, 0x6c6, 
       0x7, 0x5e, 0x2, 0x2, 0x6c5, 0x6c7, 0x5, 0xd6, 0x6c, 0x2, 0x6c6, 0x6c5, 
       0x3, 0x2, 0x2, 0x2, 0x6c6, 0x6c7, 0x3, 0x2, 0x2, 0x2, 0x6c7, 0x6c9, 
       0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6ca, 0x5, 0xfc, 0x7f, 0x2, 0x6c9, 0x6c8, 
       0x3, 0x2, 0x2, 0x2, 0x6c9, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6ca, 0x6cc, 
       0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6b4, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6bb, 
       0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6c3, 
       0x3, 0x2, 0x2, 0x2, 0x6cc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x6cd, 0x6cf, 
       0x5, 0xfe, 0x80, 0x2, 0x6ce, 0x6d0, 0x5, 0xfc, 0x7f, 0x2, 0x6cf, 
       0x6ce, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6d0, 
       0xfd, 0x3, 0x2, 0x2, 0x2, 0x6d1, 0x6d2, 0x9, 0x8, 0x2, 0x2, 0x6d2, 
       0xff, 0x3, 0x2, 0x2, 0x2, 0x6d3, 0x6d4, 0x9, 0x9, 0x2, 0x2, 0x6d4, 
       0x101, 0x3, 0x2, 0x2, 0x2, 0x6d5, 0x6d7, 0x7, 0x86, 0x2, 0x2, 0x6d6, 
       0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d7, 0x3, 0x2, 0x2, 0x2, 0x6d7, 
       0x6d8, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6d9, 0x5, 0x6, 0x4, 0x2, 0x6d9, 
       0x103, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6dc, 0x5, 0x9a, 0x4e, 0x2, 0x6db, 
       0x6dd, 0x5, 0x106, 0x84, 0x2, 0x6dc, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6dc, 
       0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0x105, 0x3, 0x2, 0x2, 0x2, 0x6de, 
       0x6e7, 0x5, 0x108, 0x85, 0x2, 0x6df, 0x6e1, 0x5, 0x10a, 0x86, 0x2, 
       0x6e0, 0x6df, 0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6e1, 0x3, 0x2, 0x2, 0x2, 
       0x6e1, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x6e2, 0x6e3, 0x5, 0xf6, 0x7c, 
       0x2, 0x6e3, 0x6e4, 0x5, 0xf8, 0x7d, 0x2, 0x6e4, 0x6e7, 0x3, 0x2, 
       0x2, 0x2, 0x6e5, 0x6e7, 0x5, 0x10c, 0x87, 0x2, 0x6e6, 0x6de, 0x3, 
       0x2, 0x2, 0x2, 0x6e6, 0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6e5, 0x3, 
       0x2, 0x2, 0x2, 0x6e7, 0x107, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6ee, 0x5, 
       0x10a, 0x86, 0x2, 0x6e9, 0x6eb, 0x5, 0xfa, 0x7e, 0x2, 0x6ea, 0x6ec, 
       0x5, 0x108, 0x85, 0x2, 0x6eb, 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6ec, 
       0x3, 0x2, 0x2, 0x2, 0x6ec, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6e8, 
       0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6e9, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0x6ef, 0x6f0, 0x8, 0x86, 0x1, 0x2, 0x6f0, 0x6fe, 
       0x5, 0xf6, 0x7c, 0x2, 0x6f1, 0x6f3, 0x7, 0x58, 0x2, 0x2, 0x6f2, 0x6f4, 
       0x5, 0x60, 0x31, 0x2, 0x6f3, 0x6f2, 0x3, 0x2, 0x2, 0x2, 0x6f3, 0x6f4, 
       0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x6f5, 0x6f7, 
       0x7, 0x59, 0x2, 0x2, 0x6f6, 0x6f8, 0x5, 0xd6, 0x6c, 0x2, 0x6f7, 0x6f6, 
       0x3, 0x2, 0x2, 0x2, 0x6f7, 0x6f8, 0x3, 0x2, 0x2, 0x2, 0x6f8, 0x6fe, 
       0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fa, 0x7, 0x56, 0x2, 0x2, 0x6fa, 0x6fb, 
       0x5, 0x108, 0x85, 0x2, 0x6fb, 0x6fc, 0x7, 0x57, 0x2, 0x2, 0x6fc, 
       0x6fe, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6ef, 0x3, 0x2, 0x2, 0x2, 0x6fd, 
       0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6fe, 
       0x70c, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x700, 0xc, 0x7, 0x2, 0x2, 0x700, 
       0x70b, 0x5, 0xf6, 0x7c, 0x2, 0x701, 0x702, 0xc, 0x5, 0x2, 0x2, 0x702, 
       0x704, 0x7, 0x58, 0x2, 0x2, 0x703, 0x705, 0x5, 0x60, 0x31, 0x2, 0x704, 
       0x703, 0x3, 0x2, 0x2, 0x2, 0x704, 0x705, 0x3, 0x2, 0x2, 0x2, 0x705, 
       0x706, 0x3, 0x2, 0x2, 0x2, 0x706, 0x708, 0x7, 0x59, 0x2, 0x2, 0x707, 
       0x709, 0x5, 0xd6, 0x6c, 0x2, 0x708, 0x707, 0x3, 0x2, 0x2, 0x2, 0x708, 
       0x709, 0x3, 0x2, 0x2, 0x2, 0x709, 0x70b, 0x3, 0x2, 0x2, 0x2, 0x70a, 
       0x6ff, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x701, 0x3, 0x2, 0x2, 0x2, 0x70b, 
       0x70e, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x70a, 0x3, 0x2, 0x2, 0x2, 0x70c, 
       0x70d, 0x3, 0x2, 0x2, 0x2, 0x70d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x70e, 
       0x70c, 0x3, 0x2, 0x2, 0x2, 0x70f, 0x714, 0x5, 0x10e, 0x88, 0x2, 0x710, 
       0x711, 0x5, 0xfa, 0x7e, 0x2, 0x711, 0x712, 0x5, 0x10c, 0x87, 0x2, 
       0x712, 0x714, 0x3, 0x2, 0x2, 0x2, 0x713, 0x70f, 0x3, 0x2, 0x2, 0x2, 
       0x713, 0x710, 0x3, 0x2, 0x2, 0x2, 0x714, 0x10d, 0x3, 0x2, 0x2, 0x2, 
       0x715, 0x716, 0x8, 0x88, 0x1, 0x2, 0x716, 0x717, 0x7, 0x86, 0x2, 
       0x2, 0x717, 0x725, 0x3, 0x2, 0x2, 0x2, 0x718, 0x719, 0xc, 0x5, 0x2, 
       0x2, 0x719, 0x724, 0x5, 0xf6, 0x7c, 0x2, 0x71a, 0x71b, 0xc, 0x4, 
       0x2, 0x2, 0x71b, 0x71d, 0x7, 0x58, 0x2, 0x2, 0x71c, 0x71e, 0x5, 0x60, 
       0x31, 0x2, 0x71d, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71e, 0x3, 0x2, 
       0x2, 0x2, 0x71e, 0x71f, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x721, 0x7, 0x59, 
       0x2, 0x2, 0x720, 0x722, 0x5, 0xd6, 0x6c, 0x2, 0x721, 0x720, 0x3, 
       0x2, 0x2, 0x2, 0x721, 0x722, 0x3, 0x2, 0x2, 0x2, 0x722, 0x724, 0x3, 
       0x2, 0x2, 0x2, 0x723, 0x718, 0x3, 0x2, 0x2, 0x2, 0x723, 0x71a, 0x3, 
       0x2, 0x2, 0x2, 0x724, 0x727, 0x3, 0x2, 0x2, 0x2, 0x725, 0x723, 0x3, 
       0x2, 0x2, 0x2, 0x725, 0x726, 0x3, 0x2, 0x2, 0x2, 0x726, 0x10f, 0x3, 
       0x2, 0x2, 0x2, 0x727, 0x725, 0x3, 0x2, 0x2, 0x2, 0x728, 0x72a, 0x5, 
       0x112, 0x8a, 0x2, 0x729, 0x728, 0x3, 0x2, 0x2, 0x2, 0x729, 0x72a, 
       0x3, 0x2, 0x2, 0x2, 0x72a, 0x72c, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x72d, 
       0x7, 0x86, 0x2, 0x2, 0x72c, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x72d, 
       0x3, 0x2, 0x2, 0x2, 0x72d, 0x733, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x72f, 
       0x5, 0x112, 0x8a, 0x2, 0x72f, 0x730, 0x7, 0x7d, 0x2, 0x2, 0x730, 
       0x731, 0x7, 0x86, 0x2, 0x2, 0x731, 0x733, 0x3, 0x2, 0x2, 0x2, 0x732, 
       0x729, 0x3, 0x2, 0x2, 0x2, 0x732, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x733, 
       0x111, 0x3, 0x2, 0x2, 0x2, 0x734, 0x735, 0x8, 0x8a, 0x1, 0x2, 0x735, 
       0x736, 0x5, 0x114, 0x8b, 0x2, 0x736, 0x73c, 0x3, 0x2, 0x2, 0x2, 0x737, 
       0x738, 0xc, 0x3, 0x2, 0x2, 0x738, 0x739, 0x7, 0x7d, 0x2, 0x2, 0x739, 
       0x73b, 0x5, 0x114, 0x8b, 0x2, 0x73a, 0x737, 0x3, 0x2, 0x2, 0x2, 0x73b, 
       0x73e, 0x3, 0x2, 0x2, 0x2, 0x73c, 0x73a, 0x3, 0x2, 0x2, 0x2, 0x73c, 
       0x73d, 0x3, 0x2, 0x2, 0x2, 0x73d, 0x113, 0x3, 0x2, 0x2, 0x2, 0x73e, 
       0x73c, 0x3, 0x2, 0x2, 0x2, 0x73f, 0x741, 0x5, 0xd6, 0x6c, 0x2, 0x740, 
       0x73f, 0x3, 0x2, 0x2, 0x2, 0x740, 0x741, 0x3, 0x2, 0x2, 0x2, 0x741, 
       0x742, 0x3, 0x2, 0x2, 0x2, 0x742, 0x743, 0x5, 0x8e, 0x48, 0x2, 0x743, 
       0x744, 0x5, 0xf0, 0x79, 0x2, 0x744, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x745, 
       0x747, 0x5, 0xd6, 0x6c, 0x2, 0x746, 0x745, 0x3, 0x2, 0x2, 0x2, 0x746, 
       0x747, 0x3, 0x2, 0x2, 0x2, 0x747, 0x748, 0x3, 0x2, 0x2, 0x2, 0x748, 
       0x749, 0x5, 0x8e, 0x48, 0x2, 0x749, 0x74a, 0x5, 0xf0, 0x79, 0x2, 
       0x74a, 0x74b, 0x7, 0x66, 0x2, 0x2, 0x74b, 0x74c, 0x5, 0x11e, 0x90, 
       0x2, 0x74c, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x74f, 0x5, 0xd6, 0x6c, 
       0x2, 0x74e, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x74e, 0x74f, 0x3, 0x2, 0x2, 
       0x2, 0x74f, 0x750, 0x3, 0x2, 0x2, 0x2, 0x750, 0x752, 0x5, 0x8e, 0x48, 
       0x2, 0x751, 0x753, 0x5, 0x106, 0x84, 0x2, 0x752, 0x751, 0x3, 0x2, 
       0x2, 0x2, 0x752, 0x753, 0x3, 0x2, 0x2, 0x2, 0x753, 0x75f, 0x3, 0x2, 
       0x2, 0x2, 0x754, 0x756, 0x5, 0xd6, 0x6c, 0x2, 0x755, 0x754, 0x3, 
       0x2, 0x2, 0x2, 0x755, 0x756, 0x3, 0x2, 0x2, 0x2, 0x756, 0x757, 0x3, 
       0x2, 0x2, 0x2, 0x757, 0x759, 0x5, 0x8e, 0x48, 0x2, 0x758, 0x75a, 
       0x5, 0x106, 0x84, 0x2, 0x759, 0x758, 0x3, 0x2, 0x2, 0x2, 0x759, 0x75a, 
       0x3, 0x2, 0x2, 0x2, 0x75a, 0x75b, 0x3, 0x2, 0x2, 0x2, 0x75b, 0x75c, 
       0x7, 0x66, 0x2, 0x2, 0x75c, 0x75d, 0x5, 0x11e, 0x90, 0x2, 0x75d, 
       0x75f, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x740, 0x3, 0x2, 0x2, 0x2, 0x75e, 
       0x746, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x74e, 0x3, 0x2, 0x2, 0x2, 0x75e, 
       0x755, 0x3, 0x2, 0x2, 0x2, 0x75f, 0x115, 0x3, 0x2, 0x2, 0x2, 0x760, 
       0x762, 0x5, 0xd6, 0x6c, 0x2, 0x761, 0x760, 0x3, 0x2, 0x2, 0x2, 0x761, 
       0x762, 0x3, 0x2, 0x2, 0x2, 0x762, 0x764, 0x3, 0x2, 0x2, 0x2, 0x763, 
       0x765, 0x5, 0x8e, 0x48, 0x2, 0x764, 0x763, 0x3, 0x2, 0x2, 0x2, 0x764, 
       0x765, 0x3, 0x2, 0x2, 0x2, 0x765, 0x766, 0x3, 0x2, 0x2, 0x2, 0x766, 
       0x768, 0x5, 0xf0, 0x79, 0x2, 0x767, 0x769, 0x5, 0x138, 0x9d, 0x2, 
       0x768, 0x767, 0x3, 0x2, 0x2, 0x2, 0x768, 0x769, 0x3, 0x2, 0x2, 0x2, 
       0x769, 0x76a, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x76b, 0x5, 0x118, 0x8d, 
       0x2, 0x76b, 0x117, 0x3, 0x2, 0x2, 0x2, 0x76c, 0x76e, 0x5, 0x150, 
       0xa9, 0x2, 0x76d, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x76e, 0x3, 0x2, 
       0x2, 0x2, 0x76e, 0x76f, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x778, 0x5, 0x68, 
       0x35, 0x2, 0x770, 0x778, 0x5, 0x176, 0xbc, 0x2, 0x771, 0x772, 0x7, 
       0x66, 0x2, 0x2, 0x772, 0x773, 0x7, 0x1c, 0x2, 0x2, 0x773, 0x778, 
       0x7, 0x83, 0x2, 0x2, 0x774, 0x775, 0x7, 0x66, 0x2, 0x2, 0x775, 0x776, 
       0x7, 0x1d, 0x2, 0x2, 0x776, 0x778, 0x7, 0x83, 0x2, 0x2, 0x777, 0x76d, 
       0x3, 0x2, 0x2, 0x2, 0x777, 0x770, 0x3, 0x2, 0x2, 0x2, 0x777, 0x771, 
       0x3, 0x2, 0x2, 0x2, 0x777, 0x774, 0x3, 0x2, 0x2, 0x2, 0x778, 0x119, 
       0x3, 0x2, 0x2, 0x2, 0x779, 0x77f, 0x5, 0x11c, 0x8f, 0x2, 0x77a, 0x77b, 
       0x7, 0x56, 0x2, 0x2, 0x77b, 0x77c, 0x5, 0x26, 0x14, 0x2, 0x77c, 0x77d, 
       0x7, 0x57, 0x2, 0x2, 0x77d, 0x77f, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x779, 
       0x3, 0x2, 0x2, 0x2, 0x77e, 0x77a, 0x3, 0x2, 0x2, 0x2, 0x77f, 0x11b, 
       0x3, 0x2, 0x2, 0x2, 0x780, 0x781, 0x7, 0x66, 0x2, 0x2, 0x781, 0x784, 
       0x5, 0x11e, 0x90, 0x2, 0x782, 0x784, 0x5, 0x122, 0x92, 0x2, 0x783, 
       0x780, 0x3, 0x2, 0x2, 0x2, 0x783, 0x782, 0x3, 0x2, 0x2, 0x2, 0x784, 
       0x11d, 0x3, 0x2, 0x2, 0x2, 0x785, 0x788, 0x5, 0x5a, 0x2e, 0x2, 0x786, 
       0x788, 0x5, 0x122, 0x92, 0x2, 0x787, 0x785, 0x3, 0x2, 0x2, 0x2, 0x787, 
       0x786, 0x3, 0x2, 0x2, 0x2, 0x788, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x789, 
       0x78a, 0x8, 0x91, 0x1, 0x2, 0x78a, 0x78c, 0x5, 0x11e, 0x90, 0x2, 
       0x78b, 0x78d, 0x7, 0x86, 0x2, 0x2, 0x78c, 0x78b, 0x3, 0x2, 0x2, 0x2, 
       0x78c, 0x78d, 0x3, 0x2, 0x2, 0x2, 0x78d, 0x796, 0x3, 0x2, 0x2, 0x2, 
       0x78e, 0x78f, 0xc, 0x3, 0x2, 0x2, 0x78f, 0x790, 0x7, 0x7d, 0x2, 0x2, 
       0x790, 0x792, 0x5, 0x11e, 0x90, 0x2, 0x791, 0x793, 0x7, 0x86, 0x2, 
       0x2, 0x792, 0x791, 0x3, 0x2, 0x2, 0x2, 0x792, 0x793, 0x3, 0x2, 0x2, 
       0x2, 0x793, 0x795, 0x3, 0x2, 0x2, 0x2, 0x794, 0x78e, 0x3, 0x2, 0x2, 
       0x2, 0x795, 0x798, 0x3, 0x2, 0x2, 0x2, 0x796, 0x794, 0x3, 0x2, 0x2, 
       0x2, 0x796, 0x797, 0x3, 0x2, 0x2, 0x2, 0x797, 0x121, 0x3, 0x2, 0x2, 
       0x2, 0x798, 0x796, 0x3, 0x2, 0x2, 0x2, 0x799, 0x79a, 0x7, 0x5a, 0x2, 
       0x2, 0x79a, 0x79c, 0x5, 0x120, 0x91, 0x2, 0x79b, 0x79d, 0x7, 0x7d, 
       0x2, 0x2, 0x79c, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x79c, 0x79d, 0x3, 0x2, 
       0x2, 0x2, 0x79d, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x79e, 0x79f, 0x7, 0x5b, 
       0x2, 0x2, 0x79f, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a0, 0x7a1, 0x7, 0x5a, 
       0x2, 0x2, 0x7a1, 0x7a3, 0x7, 0x5b, 0x2, 0x2, 0x7a2, 0x799, 0x3, 0x2, 
       0x2, 0x2, 0x7a2, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7a3, 0x123, 0x3, 0x2, 
       0x2, 0x2, 0x7a4, 0x7a7, 0x7, 0x87, 0x2, 0x2, 0x7a5, 0x7a7, 0x5, 0x164, 
       0xb3, 0x2, 0x7a6, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a5, 0x3, 0x2, 
       0x2, 0x2, 0x7a7, 0x125, 0x3, 0x2, 0x2, 0x2, 0x7a8, 0x7a9, 0x5, 0x128, 
       0x95, 0x2, 0x7a9, 0x7ab, 0x7, 0x5a, 0x2, 0x2, 0x7aa, 0x7ac, 0x5, 
       0x130, 0x99, 0x2, 0x7ab, 0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7ab, 0x7ac, 
       0x3, 0x2, 0x2, 0x2, 0x7ac, 0x7ad, 0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7ae, 
       0x7, 0x5b, 0x2, 0x2, 0x7ae, 0x127, 0x3, 0x2, 0x2, 0x2, 0x7af, 0x7b1, 
       0x5, 0x12e, 0x98, 0x2, 0x7b0, 0x7b2, 0x5, 0xd6, 0x6c, 0x2, 0x7b1, 
       0x7b0, 0x3, 0x2, 0x2, 0x2, 0x7b1, 0x7b2, 0x3, 0x2, 0x2, 0x2, 0x7b2, 
       0x7b3, 0x3, 0x2, 0x2, 0x2, 0x7b3, 0x7b5, 0x5, 0x12a, 0x96, 0x2, 0x7b4, 
       0x7b6, 0x5, 0x12c, 0x97, 0x2, 0x7b5, 0x7b4, 0x3, 0x2, 0x2, 0x2, 0x7b5, 
       0x7b6, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7b7, 
       0x7b9, 0x5, 0x13e, 0xa0, 0x2, 0x7b8, 0x7b7, 0x3, 0x2, 0x2, 0x2, 0x7b8, 
       0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7b9, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7ba, 
       0x7bc, 0x5, 0x12e, 0x98, 0x2, 0x7bb, 0x7bd, 0x5, 0xd6, 0x6c, 0x2, 
       0x7bc, 0x7bb, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7bd, 0x3, 0x2, 0x2, 0x2, 
       0x7bd, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7be, 0x7c0, 0x5, 0x13e, 0xa0, 
       0x2, 0x7bf, 0x7be, 0x3, 0x2, 0x2, 0x2, 0x7bf, 0x7c0, 0x3, 0x2, 0x2, 
       0x2, 0x7c0, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7af, 0x3, 0x2, 0x2, 
       0x2, 0x7c1, 0x7ba, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x129, 0x3, 0x2, 0x2, 
       0x2, 0x7c3, 0x7c5, 0x5, 0xc, 0x7, 0x2, 0x7c4, 0x7c3, 0x3, 0x2, 0x2, 
       0x2, 0x7c4, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c6, 0x3, 0x2, 0x2, 
       0x2, 0x7c6, 0x7c7, 0x5, 0x124, 0x93, 0x2, 0x7c7, 0x12b, 0x3, 0x2, 
       0x2, 0x2, 0x7c8, 0x7c9, 0x7, 0x27, 0x2, 0x2, 0x7c9, 0x12d, 0x3, 0x2, 
       0x2, 0x2, 0x7ca, 0x7cb, 0x9, 0xa, 0x2, 0x2, 0x7cb, 0x12f, 0x3, 0x2, 
       0x2, 0x2, 0x7cc, 0x7ce, 0x5, 0x132, 0x9a, 0x2, 0x7cd, 0x7cf, 0x5, 
       0x130, 0x99, 0x2, 0x7ce, 0x7cd, 0x3, 0x2, 0x2, 0x2, 0x7ce, 0x7cf, 
       0x3, 0x2, 0x2, 0x2, 0x7cf, 0x7d6, 0x3, 0x2, 0x2, 0x2, 0x7d0, 0x7d1, 
       0x5, 0x148, 0xa5, 0x2, 0x7d1, 0x7d3, 0x7, 0x81, 0x2, 0x2, 0x7d2, 
       0x7d4, 0x5, 0x130, 0x99, 0x2, 0x7d3, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d3, 
       0x7d4, 0x3, 0x2, 0x2, 0x2, 0x7d4, 0x7d6, 0x3, 0x2, 0x2, 0x2, 0x7d5, 
       0x7cc, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d0, 0x3, 0x2, 0x2, 0x2, 0x7d6, 
       0x131, 0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7d9, 0x5, 0xd6, 0x6c, 0x2, 0x7d8, 
       0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7d9, 
       0x7db, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x7dc, 0x5, 0x8e, 0x48, 0x2, 0x7db, 
       0x7da, 0x3, 0x2, 0x2, 0x2, 0x7db, 0x7dc, 0x3, 0x2, 0x2, 0x2, 0x7dc, 
       0x7de, 0x3, 0x2, 0x2, 0x2, 0x7dd, 0x7df, 0x5, 0x134, 0x9b, 0x2, 0x7de, 
       0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7de, 0x7df, 0x3, 0x2, 0x2, 0x2, 0x7df, 
       0x7e0, 0x3, 0x2, 0x2, 0x2, 0x7e0, 0x7e8, 0x7, 0x83, 0x2, 0x2, 0x7e1, 
       0x7e8, 0x5, 0x116, 0x8c, 0x2, 0x7e2, 0x7e8, 0x5, 0xce, 0x68, 0x2, 
       0x7e3, 0x7e8, 0x5, 0x86, 0x44, 0x2, 0x7e4, 0x7e8, 0x5, 0x15c, 0xaf, 
       0x2, 0x7e5, 0x7e8, 0x5, 0x82, 0x42, 0x2, 0x7e6, 0x7e8, 0x5, 0x88, 
       0x45, 0x2, 0x7e7, 0x7d8, 0x3, 0x2, 0x2, 0x2, 0x7e7, 0x7e1, 0x3, 0x2, 
       0x2, 0x2, 0x7e7, 0x7e2, 0x3, 0x2, 0x2, 0x2, 0x7e7, 0x7e3, 0x3, 0x2, 
       0x2, 0x2, 0x7e7, 0x7e4, 0x3, 0x2, 0x2, 0x2, 0x7e7, 0x7e5, 0x3, 0x2, 
       0x2, 0x2, 0x7e7, 0x7e6, 0x3, 0x2, 0x2, 0x2, 0x7e8, 0x133, 0x3, 0x2, 
       0x2, 0x2, 0x7e9, 0x7ea, 0x8, 0x9b, 0x1, 0x2, 0x7ea, 0x7eb, 0x5, 0x136, 
       0x9c, 0x2, 0x7eb, 0x7f1, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7ed, 0xc, 0x3, 
       0x2, 0x2, 0x7ed, 0x7ee, 0x7, 0x7d, 0x2, 0x2, 0x7ee, 0x7f0, 0x5, 0x136, 
       0x9c, 0x2, 0x7ef, 0x7ec, 0x3, 0x2, 0x2, 0x2, 0x7f0, 0x7f3, 0x3, 0x2, 
       0x2, 0x2, 0x7f1, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7f2, 0x3, 0x2, 
       0x2, 0x2, 0x7f2, 0x135, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f1, 0x3, 0x2, 
       0x2, 0x2, 0x7f4, 0x7f6, 0x5, 0xf0, 0x79, 0x2, 0x7f5, 0x7f7, 0x5, 
       0x138, 0x9d, 0x2, 0x7f6, 0x7f5, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f7, 
       0x3, 0x2, 0x2, 0x2, 0x7f7, 0x7f9, 0x3, 0x2, 0x2, 0x2, 0x7f8, 0x7fa, 
       0x5, 0x13c, 0x9f, 0x2, 0x7f9, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x7f9, 0x7fa, 
       0x3, 0x2, 0x2, 0x2, 0x7fa, 0x808, 0x3, 0x2, 0x2, 0x2, 0x7fb, 0x7fd, 
       0x5, 0xf0, 0x79, 0x2, 0x7fc, 0x7fe, 0x5, 0x11c, 0x8f, 0x2, 0x7fd, 
       0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7fd, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x7fe, 
       0x808, 0x3, 0x2, 0x2, 0x2, 0x7ff, 0x801, 0x7, 0x87, 0x2, 0x2, 0x800, 
       0x7ff, 0x3, 0x2, 0x2, 0x2, 0x800, 0x801, 0x3, 0x2, 0x2, 0x2, 0x801, 
       0x803, 0x3, 0x2, 0x2, 0x2, 0x802, 0x804, 0x5, 0xd6, 0x6c, 0x2, 0x803, 
       0x802, 0x3, 0x2, 0x2, 0x2, 0x803, 0x804, 0x3, 0x2, 0x2, 0x2, 0x804, 
       0x805, 0x3, 0x2, 0x2, 0x2, 0x805, 0x806, 0x7, 0x81, 0x2, 0x2, 0x806, 
       0x808, 0x5, 0x60, 0x31, 0x2, 0x807, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x807, 
       0x7fb, 0x3, 0x2, 0x2, 0x2, 0x807, 0x800, 0x3, 0x2, 0x2, 0x2, 0x808, 
       0x137, 0x3, 0x2, 0x2, 0x2, 0x809, 0x80a, 0x8, 0x9d, 0x1, 0x2, 0x80a, 
       0x80b, 0x5, 0x13a, 0x9e, 0x2, 0x80b, 0x810, 0x3, 0x2, 0x2, 0x2, 0x80c, 
       0x80d, 0xc, 0x3, 0x2, 0x2, 0x80d, 0x80f, 0x5, 0x13a, 0x9e, 0x2, 0x80e, 
       0x80c, 0x3, 0x2, 0x2, 0x2, 0x80f, 0x812, 0x3, 0x2, 0x2, 0x2, 0x810, 
       0x80e, 0x3, 0x2, 0x2, 0x2, 0x810, 0x811, 0x3, 0x2, 0x2, 0x2, 0x811, 
       0x139, 0x3, 0x2, 0x2, 0x2, 0x812, 0x810, 0x3, 0x2, 0x2, 0x2, 0x813, 
       0x814, 0x9, 0xb, 0x2, 0x2, 0x814, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x815, 
       0x816, 0x7, 0x66, 0x2, 0x2, 0x816, 0x817, 0x7, 0x8a, 0x2, 0x2, 0x817, 
       0x818, 0x8, 0x9f, 0x1, 0x2, 0x818, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x819, 
       0x81a, 0x7, 0x81, 0x2, 0x2, 0x81a, 0x81b, 0x5, 0x140, 0xa1, 0x2, 
       0x81b, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x81c, 0x81d, 0x8, 0xa1, 0x1, 0x2, 
       0x81d, 0x81f, 0x5, 0x142, 0xa2, 0x2, 0x81e, 0x820, 0x7, 0x86, 0x2, 
       0x2, 0x81f, 0x81e, 0x3, 0x2, 0x2, 0x2, 0x81f, 0x820, 0x3, 0x2, 0x2, 
       0x2, 0x820, 0x829, 0x3, 0x2, 0x2, 0x2, 0x821, 0x822, 0xc, 0x3, 0x2, 
       0x2, 0x822, 0x823, 0x7, 0x7d, 0x2, 0x2, 0x823, 0x825, 0x5, 0x142, 
       0xa2, 0x2, 0x824, 0x826, 0x7, 0x86, 0x2, 0x2, 0x825, 0x824, 0x3, 
       0x2, 0x2, 0x2, 0x825, 0x826, 0x3, 0x2, 0x2, 0x2, 0x826, 0x828, 0x3, 
       0x2, 0x2, 0x2, 0x827, 0x821, 0x3, 0x2, 0x2, 0x2, 0x828, 0x82b, 0x3, 
       0x2, 0x2, 0x2, 0x829, 0x827, 0x3, 0x2, 0x2, 0x2, 0x829, 0x82a, 0x3, 
       0x2, 0x2, 0x2, 0x82a, 0x141, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x829, 0x3, 
       0x2, 0x2, 0x2, 0x82c, 0x82e, 0x5, 0xd6, 0x6c, 0x2, 0x82d, 0x82c, 
       0x3, 0x2, 0x2, 0x2, 0x82d, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x82f, 
       0x3, 0x2, 0x2, 0x2, 0x82f, 0x842, 0x5, 0x146, 0xa4, 0x2, 0x830, 0x832, 
       0x5, 0xd6, 0x6c, 0x2, 0x831, 0x830, 0x3, 0x2, 0x2, 0x2, 0x831, 0x832, 
       0x3, 0x2, 0x2, 0x2, 0x832, 0x833, 0x3, 0x2, 0x2, 0x2, 0x833, 0x835, 
       0x7, 0x51, 0x2, 0x2, 0x834, 0x836, 0x5, 0x148, 0xa5, 0x2, 0x835, 
       0x834, 0x3, 0x2, 0x2, 0x2, 0x835, 0x836, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x837, 0x3, 0x2, 0x2, 0x2, 0x837, 0x842, 0x5, 0x146, 0xa4, 0x2, 0x838, 
       0x83a, 0x5, 0xd6, 0x6c, 0x2, 0x839, 0x838, 0x3, 0x2, 0x2, 0x2, 0x839, 
       0x83a, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x83b, 
       0x83d, 0x5, 0x148, 0xa5, 0x2, 0x83c, 0x83e, 0x7, 0x51, 0x2, 0x2, 
       0x83d, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x83d, 0x83e, 0x3, 0x2, 0x2, 0x2, 
       0x83e, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x83f, 0x840, 0x5, 0x146, 0xa4, 
       0x2, 0x840, 0x842, 0x3, 0x2, 0x2, 0x2, 0x841, 0x82d, 0x3, 0x2, 0x2, 
       0x2, 0x841, 0x831, 0x3, 0x2, 0x2, 0x2, 0x841, 0x839, 0x3, 0x2, 0x2, 
       0x2, 0x842, 0x143, 0x3, 0x2, 0x2, 0x2, 0x843, 0x845, 0x5, 0xc, 0x7, 
       0x2, 0x844, 0x843, 0x3, 0x2, 0x2, 0x2, 0x844, 0x845, 0x3, 0x2, 0x2, 
       0x2, 0x845, 0x846, 0x3, 0x2, 0x2, 0x2, 0x846, 0x849, 0x5, 0x124, 
       0x93, 0x2, 0x847, 0x849, 0x5, 0xa2, 0x52, 0x2, 0x848, 0x844, 0x3, 
       0x2, 0x2, 0x2, 0x848, 0x847, 0x3, 0x2, 0x2, 0x2, 0x849, 0x145, 0x3, 
       0x2, 0x2, 0x2, 0x84a, 0x84b, 0x5, 0x144, 0xa3, 0x2, 0x84b, 0x147, 
       0x3, 0x2, 0x2, 0x2, 0x84c, 0x84d, 0x9, 0xc, 0x2, 0x2, 0x84d, 0x149, 
       0x3, 0x2, 0x2, 0x2, 0x84e, 0x84f, 0x7, 0x35, 0x2, 0x2, 0x84f, 0x850, 
       0x5, 0x14c, 0xa7, 0x2, 0x850, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x851, 0x853, 
       0x5, 0x9a, 0x4e, 0x2, 0x852, 0x854, 0x5, 0x14e, 0xa8, 0x2, 0x853, 
       0x852, 0x3, 0x2, 0x2, 0x2, 0x853, 0x854, 0x3, 0x2, 0x2, 0x2, 0x854, 
       0x14d, 0x3, 0x2, 0x2, 0x2, 0x855, 0x857, 0x5, 0xfa, 0x7e, 0x2, 0x856, 
       0x858, 0x5, 0x14e, 0xa8, 0x2, 0x857, 0x856, 0x3, 0x2, 0x2, 0x2, 0x857, 
       0x858, 0x3, 0x2, 0x2, 0x2, 0x858, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x859, 
       0x85a, 0x7, 0x81, 0x2, 0x2, 0x85a, 0x85b, 0x5, 0x152, 0xaa, 0x2, 
       0x85b, 0x151, 0x3, 0x2, 0x2, 0x2, 0x85c, 0x85e, 0x5, 0x154, 0xab, 
       0x2, 0x85d, 0x85f, 0x7, 0x86, 0x2, 0x2, 0x85e, 0x85d, 0x3, 0x2, 0x2, 
       0x2, 0x85e, 0x85f, 0x3, 0x2, 0x2, 0x2, 0x85f, 0x868, 0x3, 0x2, 0x2, 
       0x2, 0x860, 0x862, 0x5, 0x154, 0xab, 0x2, 0x861, 0x863, 0x7, 0x86, 
       0x2, 0x2, 0x862, 0x861, 0x3, 0x2, 0x2, 0x2, 0x862, 0x863, 0x3, 0x2, 
       0x2, 0x2, 0x863, 0x864, 0x3, 0x2, 0x2, 0x2, 0x864, 0x865, 0x7, 0x7d, 
       0x2, 0x2, 0x865, 0x866, 0x5, 0x152, 0xaa, 0x2, 0x866, 0x868, 0x3, 
       0x2, 0x2, 0x2, 0x867, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x867, 0x860, 0x3, 
       0x2, 0x2, 0x2, 0x868, 0x153, 0x3, 0x2, 0x2, 0x2, 0x869, 0x86a, 0x5, 
       0x156, 0xac, 0x2, 0x86a, 0x86c, 0x7, 0x56, 0x2, 0x2, 0x86b, 0x86d, 
       0x5, 0x26, 0x14, 0x2, 0x86c, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x86d, 
       0x3, 0x2, 0x2, 0x2, 0x86d, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86f, 
       0x7, 0x57, 0x2, 0x2, 0x86f, 0x874, 0x3, 0x2, 0x2, 0x2, 0x870, 0x871, 
       0x5, 0x156, 0xac, 0x2, 0x871, 0x872, 0x5, 0x122, 0x92, 0x2, 0x872, 
       0x874, 0x3, 0x2, 0x2, 0x2, 0x873, 0x869, 0x3, 0x2, 0x2, 0x2, 0x873, 
       0x870, 0x3, 0x2, 0x2, 0x2, 0x874, 0x155, 0x3, 0x2, 0x2, 0x2, 0x875, 
       0x878, 0x5, 0x144, 0xa3, 0x2, 0x876, 0x878, 0x7, 0x87, 0x2, 0x2, 
       0x877, 0x875, 0x3, 0x2, 0x2, 0x2, 0x877, 0x876, 0x3, 0x2, 0x2, 0x2, 
       0x878, 0x157, 0x3, 0x2, 0x2, 0x2, 0x879, 0x87a, 0x7, 0x35, 0x2, 0x2, 
       0x87a, 0x87b, 0x5, 0x188, 0xc5, 0x2, 0x87b, 0x159, 0x3, 0x2, 0x2, 
       0x2, 0x87c, 0x87d, 0x7, 0x35, 0x2, 0x2, 0x87d, 0x87e, 0x7, 0x90, 
       0x2, 0x2, 0x87e, 0x882, 0x7, 0x87, 0x2, 0x2, 0x87f, 0x880, 0x7, 0x35, 
       0x2, 0x2, 0x880, 0x882, 0x7, 0x93, 0x2, 0x2, 0x881, 0x87c, 0x3, 0x2, 
       0x2, 0x2, 0x881, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x882, 0x15b, 0x3, 0x2, 
       0x2, 0x2, 0x883, 0x884, 0x7, 0x45, 0x2, 0x2, 0x884, 0x885, 0x7, 0x67, 
       0x2, 0x2, 0x885, 0x886, 0x5, 0x15e, 0xb0, 0x2, 0x886, 0x887, 0x7, 
       0x68, 0x2, 0x2, 0x887, 0x888, 0x5, 0x7e, 0x40, 0x2, 0x888, 0x15d, 
       0x3, 0x2, 0x2, 0x2, 0x889, 0x88a, 0x8, 0xb0, 0x1, 0x2, 0x88a, 0x88b, 
       0x5, 0x160, 0xb1, 0x2, 0x88b, 0x891, 0x3, 0x2, 0x2, 0x2, 0x88c, 0x88d, 
       0xc, 0x3, 0x2, 0x2, 0x88d, 0x88e, 0x7, 0x7d, 0x2, 0x2, 0x88e, 0x890, 
       0x5, 0x160, 0xb1, 0x2, 0x88f, 0x88c, 0x3, 0x2, 0x2, 0x2, 0x890, 0x893, 
       0x3, 0x2, 0x2, 0x2, 0x891, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x891, 0x892, 
       0x3, 0x2, 0x2, 0x2, 0x892, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x893, 0x891, 
       0x3, 0x2, 0x2, 0x2, 0x894, 0x897, 0x5, 0x162, 0xb2, 0x2, 0x895, 0x897, 
       0x5, 0x114, 0x8b, 0x2, 0x896, 0x894, 0x3, 0x2, 0x2, 0x2, 0x896, 0x895, 
       0x3, 0x2, 0x2, 0x2, 0x897, 0x161, 0x3, 0x2, 0x2, 0x2, 0x898, 0x89a, 
       0x7, 0x16, 0x2, 0x2, 0x899, 0x89b, 0x7, 0x86, 0x2, 0x2, 0x89a, 0x899, 
       0x3, 0x2, 0x2, 0x2, 0x89a, 0x89b, 0x3, 0x2, 0x2, 0x2, 0x89b, 0x89d, 
       0x3, 0x2, 0x2, 0x2, 0x89c, 0x89e, 0x7, 0x87, 0x2, 0x2, 0x89d, 0x89c, 
       0x3, 0x2, 0x2, 0x2, 0x89d, 0x89e, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x8c9, 
       0x3, 0x2, 0x2, 0x2, 0x89f, 0x8a1, 0x7, 0x16, 0x2, 0x2, 0x8a0, 0x8a2, 
       0x7, 0x87, 0x2, 0x2, 0x8a1, 0x8a0, 0x3, 0x2, 0x2, 0x2, 0x8a1, 0x8a2, 
       0x3, 0x2, 0x2, 0x2, 0x8a2, 0x8a3, 0x3, 0x2, 0x2, 0x2, 0x8a3, 0x8a4, 
       0x7, 0x66, 0x2, 0x2, 0x8a4, 0x8c9, 0x5, 0x104, 0x83, 0x2, 0x8a5, 
       0x8a7, 0x7, 0x4d, 0x2, 0x2, 0x8a6, 0x8a8, 0x7, 0x86, 0x2, 0x2, 0x8a7, 
       0x8a6, 0x3, 0x2, 0x2, 0x2, 0x8a7, 0x8a8, 0x3, 0x2, 0x2, 0x2, 0x8a8, 
       0x8aa, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x8ab, 0x7, 0x87, 0x2, 0x2, 0x8aa, 
       0x8a9, 0x3, 0x2, 0x2, 0x2, 0x8aa, 0x8ab, 0x3, 0x2, 0x2, 0x2, 0x8ab, 
       0x8c9, 0x3, 0x2, 0x2, 0x2, 0x8ac, 0x8ae, 0x7, 0x4d, 0x2, 0x2, 0x8ad, 
       0x8af, 0x7, 0x87, 0x2, 0x2, 0x8ae, 0x8ad, 0x3, 0x2, 0x2, 0x2, 0x8ae, 
       0x8af, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x8b0, 
       0x8b1, 0x7, 0x66, 0x2, 0x2, 0x8b1, 0x8c9, 0x5, 0x104, 0x83, 0x2, 
       0x8b2, 0x8b3, 0x7, 0x45, 0x2, 0x2, 0x8b3, 0x8b4, 0x7, 0x67, 0x2, 
       0x2, 0x8b4, 0x8b5, 0x5, 0x15e, 0xb0, 0x2, 0x8b5, 0x8b6, 0x7, 0x68, 
       0x2, 0x2, 0x8b6, 0x8b8, 0x7, 0x16, 0x2, 0x2, 0x8b7, 0x8b9, 0x7, 0x86, 
       0x2, 0x2, 0x8b8, 0x8b7, 0x3, 0x2, 0x2, 0x2, 0x8b8, 0x8b9, 0x3, 0x2, 
       0x2, 0x2, 0x8b9, 0x8bb, 0x3, 0x2, 0x2, 0x2, 0x8ba, 0x8bc, 0x7, 0x87, 
       0x2, 0x2, 0x8bb, 0x8ba, 0x3, 0x2, 0x2, 0x2, 0x8bb, 0x8bc, 0x3, 0x2, 
       0x2, 0x2, 0x8bc, 0x8c9, 0x3, 0x2, 0x2, 0x2, 0x8bd, 0x8be, 0x7, 0x45, 
       0x2, 0x2, 0x8be, 0x8bf, 0x7, 0x67, 0x2, 0x2, 0x8bf, 0x8c0, 0x5, 0x15e, 
       0xb0, 0x2, 0x8c0, 0x8c1, 0x7, 0x68, 0x2, 0x2, 0x8c1, 0x8c3, 0x7, 
       0x16, 0x2, 0x2, 0x8c2, 0x8c4, 0x7, 0x87, 0x2, 0x2, 0x8c3, 0x8c2, 
       0x3, 0x2, 0x2, 0x2, 0x8c3, 0x8c4, 0x3, 0x2, 0x2, 0x2, 0x8c4, 0x8c5, 
       0x3, 0x2, 0x2, 0x2, 0x8c5, 0x8c6, 0x7, 0x66, 0x2, 0x2, 0x8c6, 0x8c7, 
       0x5, 0x6, 0x4, 0x2, 0x8c7, 0x8c9, 0x3, 0x2, 0x2, 0x2, 0x8c8, 0x898, 
       0x3, 0x2, 0x2, 0x2, 0x8c8, 0x89f, 0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8a5, 
       0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8ac, 0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8b2, 
       0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8c9, 0x163, 
       0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8cb, 0x5, 0x168, 0xb5, 0x2, 0x8cb, 0x8cd, 
       0x7, 0x67, 0x2, 0x2, 0x8cc, 0x8ce, 0x5, 0x16a, 0xb6, 0x2, 0x8cd, 
       0x8cc, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8ce, 0x3, 0x2, 0x2, 0x2, 0x8ce, 
       0x8cf, 0x3, 0x2, 0x2, 0x2, 0x8cf, 0x8d0, 0x7, 0x68, 0x2, 0x2, 0x8d0, 
       0x165, 0x3, 0x2, 0x2, 0x2, 0x8d1, 0x8e1, 0x5, 0x164, 0xb3, 0x2, 0x8d2, 
       0x8d3, 0x5, 0x158, 0xad, 0x2, 0x8d3, 0x8d5, 0x7, 0x67, 0x2, 0x2, 
       0x8d4, 0x8d6, 0x5, 0x16a, 0xb6, 0x2, 0x8d5, 0x8d4, 0x3, 0x2, 0x2, 
       0x2, 0x8d5, 0x8d6, 0x3, 0x2, 0x2, 0x2, 0x8d6, 0x8d7, 0x3, 0x2, 0x2, 
       0x2, 0x8d7, 0x8d8, 0x7, 0x68, 0x2, 0x2, 0x8d8, 0x8e1, 0x3, 0x2, 0x2, 
       0x2, 0x8d9, 0x8da, 0x5, 0x15a, 0xae, 0x2, 0x8da, 0x8dc, 0x7, 0x67, 
       0x2, 0x2, 0x8db, 0x8dd, 0x5, 0x16a, 0xb6, 0x2, 0x8dc, 0x8db, 0x3, 
       0x2, 0x2, 0x2, 0x8dc, 0x8dd, 0x3, 0x2, 0x2, 0x2, 0x8dd, 0x8de, 0x3, 
       0x2, 0x2, 0x2, 0x8de, 0x8df, 0x7, 0x68, 0x2, 0x2, 0x8df, 0x8e1, 0x3, 
       0x2, 0x2, 0x2, 0x8e0, 0x8d1, 0x3, 0x2, 0x2, 0x2, 0x8e0, 0x8d2, 0x3, 
       0x2, 0x2, 0x2, 0x8e0, 0x8d9, 0x3, 0x2, 0x2, 0x2, 0x8e1, 0x167, 0x3, 
       0x2, 0x2, 0x2, 0x8e2, 0x8e3, 0x7, 0x87, 0x2, 0x2, 0x8e3, 0x169, 0x3, 
       0x2, 0x2, 0x2, 0x8e4, 0x8e5, 0x8, 0xb6, 0x1, 0x2, 0x8e5, 0x8e7, 0x5, 
       0x16c, 0xb7, 0x2, 0x8e6, 0x8e8, 0x7, 0x86, 0x2, 0x2, 0x8e7, 0x8e6, 
       0x3, 0x2, 0x2, 0x2, 0x8e7, 0x8e8, 0x3, 0x2, 0x2, 0x2, 0x8e8, 0x8f1, 
       0x3, 0x2, 0x2, 0x2, 0x8e9, 0x8ea, 0xc, 0x3, 0x2, 0x2, 0x8ea, 0x8eb, 
       0x7, 0x7d, 0x2, 0x2, 0x8eb, 0x8ed, 0x5, 0x16c, 0xb7, 0x2, 0x8ec, 
       0x8ee, 0x7, 0x86, 0x2, 0x2, 0x8ed, 0x8ec, 0x3, 0x2, 0x2, 0x2, 0x8ed, 
       0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8ee, 0x8f0, 0x3, 0x2, 0x2, 0x2, 0x8ef, 
       0x8e9, 0x3, 0x2, 0x2, 0x2, 0x8f0, 0x8f3, 0x3, 0x2, 0x2, 0x2, 0x8f1, 
       0x8ef, 0x3, 0x2, 0x2, 0x2, 0x8f1, 0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8f2, 
       0x16b, 0x3, 0x2, 0x2, 0x2, 0x8f3, 0x8f1, 0x3, 0x2, 0x2, 0x2, 0x8f4, 
       0x8f8, 0x5, 0x104, 0x83, 0x2, 0x8f5, 0x8f8, 0x5, 0x60, 0x31, 0x2, 
       0x8f6, 0x8f8, 0x5, 0x6, 0x4, 0x2, 0x8f7, 0x8f4, 0x3, 0x2, 0x2, 0x2, 
       0x8f7, 0x8f5, 0x3, 0x2, 0x2, 0x2, 0x8f7, 0x8f6, 0x3, 0x2, 0x2, 0x2, 
       0x8f8, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0x8fa, 0x7, 0x4d, 0x2, 0x2, 
       0x8fa, 0x8fb, 0x5, 0xc, 0x7, 0x2, 0x8fb, 0x8fc, 0x7, 0x87, 0x2, 0x2, 
       0x8fc, 0x905, 0x3, 0x2, 0x2, 0x2, 0x8fd, 0x8fe, 0x7, 0x4d, 0x2, 0x2, 
       0x8fe, 0x900, 0x5, 0xc, 0x7, 0x2, 0x8ff, 0x901, 0x7, 0x45, 0x2, 0x2, 
       0x900, 0x8ff, 0x3, 0x2, 0x2, 0x2, 0x900, 0x901, 0x3, 0x2, 0x2, 0x2, 
       0x901, 0x902, 0x3, 0x2, 0x2, 0x2, 0x902, 0x903, 0x5, 0x164, 0xb3, 
       0x2, 0x903, 0x905, 0x3, 0x2, 0x2, 0x2, 0x904, 0x8f9, 0x3, 0x2, 0x2, 
       0x2, 0x904, 0x8fd, 0x3, 0x2, 0x2, 0x2, 0x905, 0x16f, 0x3, 0x2, 0x2, 
       0x2, 0x906, 0x908, 0x7, 0x25, 0x2, 0x2, 0x907, 0x906, 0x3, 0x2, 0x2, 
       0x2, 0x907, 0x908, 0x3, 0x2, 0x2, 0x2, 0x908, 0x909, 0x3, 0x2, 0x2, 
       0x2, 0x909, 0x90a, 0x7, 0x45, 0x2, 0x2, 0x90a, 0x90b, 0x5, 0x7e, 
       0x40, 0x2, 0x90b, 0x171, 0x3, 0x2, 0x2, 0x2, 0x90c, 0x90d, 0x7, 0x45, 
       0x2, 0x2, 0x90d, 0x90e, 0x7, 0x67, 0x2, 0x2, 0x90e, 0x90f, 0x7, 0x68, 
       0x2, 0x2, 0x90f, 0x910, 0x5, 0x7e, 0x40, 0x2, 0x910, 0x173, 0x3, 
       0x2, 0x2, 0x2, 0x911, 0x912, 0x7, 0x4a, 0x2, 0x2, 0x912, 0x913, 0x5, 
       0x68, 0x35, 0x2, 0x913, 0x914, 0x5, 0x178, 0xbd, 0x2, 0x914, 0x175, 
       0x3, 0x2, 0x2, 0x2, 0x915, 0x917, 0x7, 0x4a, 0x2, 0x2, 0x916, 0x918, 
       0x5, 0x150, 0xa9, 0x2, 0x917, 0x916, 0x3, 0x2, 0x2, 0x2, 0x917, 0x918, 
       0x3, 0x2, 0x2, 0x2, 0x918, 0x919, 0x3, 0x2, 0x2, 0x2, 0x919, 0x91a, 
       0x5, 0x68, 0x35, 0x2, 0x91a, 0x91b, 0x5, 0x178, 0xbd, 0x2, 0x91b, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x91c, 0x91e, 0x5, 0x17a, 0xbe, 0x2, 0x91d, 
       0x91f, 0x5, 0x178, 0xbd, 0x2, 0x91e, 0x91d, 0x3, 0x2, 0x2, 0x2, 0x91e, 
       0x91f, 0x3, 0x2, 0x2, 0x2, 0x91f, 0x179, 0x3, 0x2, 0x2, 0x2, 0x920, 
       0x921, 0x7, 0x12, 0x2, 0x2, 0x921, 0x922, 0x7, 0x56, 0x2, 0x2, 0x922, 
       0x923, 0x5, 0x17c, 0xbf, 0x2, 0x923, 0x924, 0x7, 0x57, 0x2, 0x2, 
       0x924, 0x925, 0x5, 0x68, 0x35, 0x2, 0x925, 0x17b, 0x3, 0x2, 0x2, 
       0x2, 0x926, 0x928, 0x5, 0xd6, 0x6c, 0x2, 0x927, 0x926, 0x3, 0x2, 
       0x2, 0x2, 0x927, 0x928, 0x3, 0x2, 0x2, 0x2, 0x928, 0x929, 0x3, 0x2, 
       0x2, 0x2, 0x929, 0x92a, 0x5, 0x9a, 0x4e, 0x2, 0x92a, 0x92b, 0x5, 
       0xf0, 0x79, 0x2, 0x92b, 0x935, 0x3, 0x2, 0x2, 0x2, 0x92c, 0x92e, 
       0x5, 0xd6, 0x6c, 0x2, 0x92d, 0x92c, 0x3, 0x2, 0x2, 0x2, 0x92d, 0x92e, 
       0x3, 0x2, 0x2, 0x2, 0x92e, 0x92f, 0x3, 0x2, 0x2, 0x2, 0x92f, 0x931, 
       0x5, 0x9a, 0x4e, 0x2, 0x930, 0x932, 0x5, 0x106, 0x84, 0x2, 0x931, 
       0x930, 0x3, 0x2, 0x2, 0x2, 0x931, 0x932, 0x3, 0x2, 0x2, 0x2, 0x932, 
       0x935, 0x3, 0x2, 0x2, 0x2, 0x933, 0x935, 0x7, 0x86, 0x2, 0x2, 0x934, 
       0x927, 0x3, 0x2, 0x2, 0x2, 0x934, 0x92d, 0x3, 0x2, 0x2, 0x2, 0x934, 
       0x933, 0x3, 0x2, 0x2, 0x2, 0x935, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x936, 
       0x938, 0x7, 0x48, 0x2, 0x2, 0x937, 0x939, 0x5, 0x5a, 0x2e, 0x2, 0x938, 
       0x937, 0x3, 0x2, 0x2, 0x2, 0x938, 0x939, 0x3, 0x2, 0x2, 0x2, 0x939, 
       0x17f, 0x3, 0x2, 0x2, 0x2, 0x93a, 0x93d, 0x5, 0x182, 0xc2, 0x2, 0x93b, 
       0x93d, 0x5, 0x186, 0xc4, 0x2, 0x93c, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x93c, 
       0x93b, 0x3, 0x2, 0x2, 0x2, 0x93d, 0x181, 0x3, 0x2, 0x2, 0x2, 0x93e, 
       0x93f, 0x7, 0x48, 0x2, 0x2, 0x93f, 0x941, 0x7, 0x56, 0x2, 0x2, 0x940, 
       0x942, 0x5, 0x184, 0xc3, 0x2, 0x941, 0x940, 0x3, 0x2, 0x2, 0x2, 0x941, 
       0x942, 0x3, 0x2, 0x2, 0x2, 0x942, 0x943, 0x3, 0x2, 0x2, 0x2, 0x943, 
       0x944, 0x7, 0x57, 0x2, 0x2, 0x944, 0x183, 0x3, 0x2, 0x2, 0x2, 0x945, 
       0x946, 0x8, 0xc3, 0x1, 0x2, 0x946, 0x948, 0x5, 0x104, 0x83, 0x2, 
       0x947, 0x949, 0x7, 0x86, 0x2, 0x2, 0x948, 0x947, 0x3, 0x2, 0x2, 0x2, 
       0x948, 0x949, 0x3, 0x2, 0x2, 0x2, 0x949, 0x952, 0x3, 0x2, 0x2, 0x2, 
       0x94a, 0x94b, 0xc, 0x3, 0x2, 0x2, 0x94b, 0x94c, 0x7, 0x7d, 0x2, 0x2, 
       0x94c, 0x94e, 0x5, 0x104, 0x83, 0x2, 0x94d, 0x94f, 0x7, 0x86, 0x2, 
       0x2, 0x94e, 0x94d, 0x3, 0x2, 0x2, 0x2, 0x94e, 0x94f, 0x3, 0x2, 0x2, 
       0x2, 0x94f, 0x951, 0x3, 0x2, 0x2, 0x2, 0x950, 0x94a, 0x3, 0x2, 0x2, 
       0x2, 0x951, 0x954, 0x3, 0x2, 0x2, 0x2, 0x952, 0x950, 0x3, 0x2, 0x2, 
       0x2, 0x952, 0x953, 0x3, 0x2, 0x2, 0x2, 0x953, 0x185, 0x3, 0x2, 0x2, 
       0x2, 0x954, 0x952, 0x3, 0x2, 0x2, 0x2, 0x955, 0x956, 0x7, 0x33, 0x2, 
       0x2, 0x956, 0x957, 0x7, 0x56, 0x2, 0x2, 0x957, 0x958, 0x5, 0x60, 
       0x31, 0x2, 0x958, 0x959, 0x7, 0x57, 0x2, 0x2, 0x959, 0x95c, 0x3, 
       0x2, 0x2, 0x2, 0x95a, 0x95c, 0x7, 0x33, 0x2, 0x2, 0x95b, 0x955, 0x3, 
       0x2, 0x2, 0x2, 0x95b, 0x95a, 0x3, 0x2, 0x2, 0x2, 0x95c, 0x187, 0x3, 
       0x2, 0x2, 0x2, 0x95d, 0x991, 0x7, 0x32, 0x2, 0x2, 0x95e, 0x991, 0x7, 
       0x1d, 0x2, 0x2, 0x95f, 0x960, 0x7, 0x32, 0x2, 0x2, 0x960, 0x961, 
       0x7, 0x58, 0x2, 0x2, 0x961, 0x991, 0x7, 0x59, 0x2, 0x2, 0x962, 0x963, 
       0x7, 0x1d, 0x2, 0x2, 0x963, 0x964, 0x7, 0x58, 0x2, 0x2, 0x964, 0x991, 
       0x7, 0x59, 0x2, 0x2, 0x965, 0x991, 0x7, 0x5c, 0x2, 0x2, 0x966, 0x991, 
       0x7, 0x5d, 0x2, 0x2, 0x967, 0x991, 0x7, 0x5e, 0x2, 0x2, 0x968, 0x991, 
       0x7, 0x5f, 0x2, 0x2, 0x969, 0x991, 0x7, 0x60, 0x2, 0x2, 0x96a, 0x991, 
       0x7, 0x61, 0x2, 0x2, 0x96b, 0x991, 0x7, 0x62, 0x2, 0x2, 0x96c, 0x991, 
       0x7, 0x63, 0x2, 0x2, 0x96d, 0x991, 0x7, 0x64, 0x2, 0x2, 0x96e, 0x991, 
       0x7, 0x3, 0x2, 0x2, 0x96f, 0x991, 0x7, 0x4, 0x2, 0x2, 0x970, 0x991, 
       0x7, 0x66, 0x2, 0x2, 0x971, 0x991, 0x7, 0x67, 0x2, 0x2, 0x972, 0x991, 
       0x7, 0x68, 0x2, 0x2, 0x973, 0x991, 0x7, 0x69, 0x2, 0x2, 0x974, 0x991, 
       0x7, 0x6a, 0x2, 0x2, 0x975, 0x991, 0x7, 0x6b, 0x2, 0x2, 0x976, 0x991, 
       0x7, 0x6c, 0x2, 0x2, 0x977, 0x991, 0x7, 0x6d, 0x2, 0x2, 0x978, 0x991, 
       0x7, 0x6e, 0x2, 0x2, 0x979, 0x991, 0x7, 0x6f, 0x2, 0x2, 0x97a, 0x991, 
       0x7, 0x70, 0x2, 0x2, 0x97b, 0x991, 0x7, 0x71, 0x2, 0x2, 0x97c, 0x991, 
       0x7, 0x72, 0x2, 0x2, 0x97d, 0x991, 0x7, 0x74, 0x2, 0x2, 0x97e, 0x991, 
       0x7, 0x73, 0x2, 0x2, 0x97f, 0x991, 0x7, 0x75, 0x2, 0x2, 0x980, 0x991, 
       0x7, 0x76, 0x2, 0x2, 0x981, 0x991, 0x7, 0x77, 0x2, 0x2, 0x982, 0x991, 
       0x7, 0x78, 0x2, 0x2, 0x983, 0x991, 0x7, 0x5, 0x2, 0x2, 0x984, 0x991, 
       0x7, 0x6, 0x2, 0x2, 0x985, 0x991, 0x7, 0x7, 0x2, 0x2, 0x986, 0x991, 
       0x7, 0x8, 0x2, 0x2, 0x987, 0x991, 0x7, 0x7b, 0x2, 0x2, 0x988, 0x991, 
       0x7, 0x7c, 0x2, 0x2, 0x989, 0x991, 0x7, 0x7d, 0x2, 0x2, 0x98a, 0x991, 
       0x7, 0x7e, 0x2, 0x2, 0x98b, 0x991, 0x7, 0x7f, 0x2, 0x2, 0x98c, 0x98d, 
       0x7, 0x56, 0x2, 0x2, 0x98d, 0x991, 0x7, 0x57, 0x2, 0x2, 0x98e, 0x98f, 
       0x7, 0x58, 0x2, 0x2, 0x98f, 0x991, 0x7, 0x59, 0x2, 0x2, 0x990, 0x95d, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x95e, 0x3, 0x2, 0x2, 0x2, 0x990, 0x95f, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x962, 0x3, 0x2, 0x2, 0x2, 0x990, 0x965, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x966, 0x3, 0x2, 0x2, 0x2, 0x990, 0x967, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x968, 0x3, 0x2, 0x2, 0x2, 0x990, 0x969, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x96a, 0x3, 0x2, 0x2, 0x2, 0x990, 0x96b, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x96c, 0x3, 0x2, 0x2, 0x2, 0x990, 0x96d, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x96e, 0x3, 0x2, 0x2, 0x2, 0x990, 0x96f, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x970, 0x3, 0x2, 0x2, 0x2, 0x990, 0x971, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x972, 0x3, 0x2, 0x2, 0x2, 0x990, 0x973, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x974, 0x3, 0x2, 0x2, 0x2, 0x990, 0x975, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x976, 0x3, 0x2, 0x2, 0x2, 0x990, 0x977, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x978, 0x3, 0x2, 0x2, 0x2, 0x990, 0x979, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x97a, 0x3, 0x2, 0x2, 0x2, 0x990, 0x97b, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x97c, 0x3, 0x2, 0x2, 0x2, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x990, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x990, 0x97e, 0x3, 0x2, 0x2, 0x2, 
       0x990, 0x97f, 0x3, 0x2, 0x2, 0x2, 0x990, 0x980, 0x3, 0x2, 0x2, 0x2, 
       0x990, 0x981, 0x3, 0x2, 0x2, 0x2, 0x990, 0x982, 0x3, 0x2, 0x2, 0x2, 
       0x990, 0x983, 0x3, 0x2, 0x2, 0x2, 0x990, 0x984, 0x3, 0x2, 0x2, 0x2, 
       0x990, 0x985, 0x3, 0x2, 0x2, 0x2, 0x990, 0x986, 0x3, 0x2, 0x2, 0x2, 
       0x990, 0x987, 0x3, 0x2, 0x2, 0x2, 0x990, 0x988, 0x3, 0x2, 0x2, 0x2, 
       0x990, 0x989, 0x3, 0x2, 0x2, 0x2, 0x990, 0x98a, 0x3, 0x2, 0x2, 0x2, 
       0x990, 0x98b, 0x3, 0x2, 0x2, 0x2, 0x990, 0x98c, 0x3, 0x2, 0x2, 0x2, 
       0x990, 0x98e, 0x3, 0x2, 0x2, 0x2, 0x991, 0x189, 0x3, 0x2, 0x2, 0x2, 
       0x992, 0x99a, 0x7, 0x88, 0x2, 0x2, 0x993, 0x99a, 0x7, 0x8e, 0x2, 
       0x2, 0x994, 0x99a, 0x7, 0x8f, 0x2, 0x2, 0x995, 0x99a, 0x7, 0x90, 
       0x2, 0x2, 0x996, 0x99a, 0x5, 0x18c, 0xc7, 0x2, 0x997, 0x99a, 0x5, 
       0x18e, 0xc8, 0x2, 0x998, 0x99a, 0x5, 0x190, 0xc9, 0x2, 0x999, 0x992, 
       0x3, 0x2, 0x2, 0x2, 0x999, 0x993, 0x3, 0x2, 0x2, 0x2, 0x999, 0x994, 
       0x3, 0x2, 0x2, 0x2, 0x999, 0x995, 0x3, 0x2, 0x2, 0x2, 0x999, 0x996, 
       0x3, 0x2, 0x2, 0x2, 0x999, 0x997, 0x3, 0x2, 0x2, 0x2, 0x999, 0x998, 
       0x3, 0x2, 0x2, 0x2, 0x99a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x99b, 0x99c, 
       0x9, 0xd, 0x2, 0x2, 0x99c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x99d, 0x99e, 
       0x7, 0x34, 0x2, 0x2, 0x99e, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x99f, 0x9a0, 
       0x9, 0xe, 0x2, 0x2, 0x9a0, 0x191, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x193, 
       0x19f, 0x1a3, 0x1ae, 0x1b2, 0x1c1, 0x1c8, 0x1cd, 0x1cf, 0x1d4, 0x1da, 
       0x1e4, 0x1eb, 0x1f1, 0x1f5, 0x1fa, 0x200, 0x207, 0x20d, 0x210, 0x213, 
       0x216, 0x21d, 0x224, 0x258, 0x267, 0x26d, 0x273, 0x280, 0x282, 0x28c, 
       0x29b, 0x2a1, 0x2bf, 0x2c4, 0x2c8, 0x2cc, 0x2cf, 0x2d3, 0x2d9, 0x2db, 
       0x2e3, 0x2e7, 0x2ea, 0x2f1, 0x2f8, 0x2fc, 0x301, 0x305, 0x308, 0x30d, 
       0x313, 0x320, 0x32b, 0x32d, 0x33c, 0x33e, 0x34a, 0x34c, 0x358, 0x36c, 
       0x36e, 0x37a, 0x37c, 0x387, 0x392, 0x39d, 0x3a9, 0x3ab, 0x3b7, 0x3b9, 
       0x3c3, 0x3cb, 0x3d7, 0x3de, 0x3e2, 0x3e6, 0x3ea, 0x3ee, 0x3f3, 0x3f6, 
       0x3f9, 0x3ff, 0x407, 0x40c, 0x40f, 0x415, 0x420, 0x437, 0x43b, 0x443, 
       0x449, 0x45d, 0x461, 0x46e, 0x472, 0x475, 0x47c, 0x484, 0x48e, 0x499, 
       0x4a5, 0x4af, 0x4b4, 0x4bb, 0x4be, 0x4c3, 0x4c8, 0x4dd, 0x4e1, 0x4e6, 
       0x4f1, 0x4f7, 0x4fb, 0x500, 0x504, 0x509, 0x50c, 0x522, 0x528, 0x533, 
       0x537, 0x53a, 0x544, 0x54a, 0x54d, 0x554, 0x55e, 0x562, 0x565, 0x568, 
       0x56c, 0x571, 0x573, 0x577, 0x57b, 0x584, 0x591, 0x599, 0x59f, 0x5a5, 
       0x5a9, 0x5ac, 0x5b5, 0x5be, 0x5c6, 0x5d1, 0x5d7, 0x5e2, 0x5e5, 0x5ea, 
       0x5f9, 0x5ff, 0x608, 0x612, 0x618, 0x620, 0x624, 0x628, 0x62d, 0x632, 
       0x639, 0x63b, 0x640, 0x644, 0x652, 0x658, 0x667, 0x671, 0x676, 0x67d, 
       0x683, 0x688, 0x68e, 0x695, 0x699, 0x69b, 0x69d, 0x6a4, 0x6a7, 0x6aa, 
       0x6ad, 0x6b2, 0x6b6, 0x6b9, 0x6bd, 0x6c1, 0x6c6, 0x6c9, 0x6cb, 0x6cf, 
       0x6d6, 0x6dc, 0x6e0, 0x6e6, 0x6eb, 0x6ed, 0x6f3, 0x6f7, 0x6fd, 0x704, 
       0x708, 0x70a, 0x70c, 0x713, 0x71d, 0x721, 0x723, 0x725, 0x729, 0x72c, 
       0x732, 0x73c, 0x740, 0x746, 0x74e, 0x752, 0x755, 0x759, 0x75e, 0x761, 
       0x764, 0x768, 0x76d, 0x777, 0x77e, 0x783, 0x787, 0x78c, 0x792, 0x796, 
       0x79c, 0x7a2, 0x7a6, 0x7ab, 0x7b1, 0x7b5, 0x7b8, 0x7bc, 0x7bf, 0x7c1, 
       0x7c4, 0x7ce, 0x7d3, 0x7d5, 0x7d8, 0x7db, 0x7de, 0x7e7, 0x7f1, 0x7f6, 
       0x7f9, 0x7fd, 0x800, 0x803, 0x807, 0x810, 0x81f, 0x825, 0x829, 0x82d, 
       0x831, 0x835, 0x839, 0x83d, 0x841, 0x844, 0x848, 0x853, 0x857, 0x85e, 
       0x862, 0x867, 0x86c, 0x873, 0x877, 0x881, 0x891, 0x896, 0x89a, 0x89d, 
       0x8a1, 0x8a7, 0x8aa, 0x8ae, 0x8b8, 0x8bb, 0x8c3, 0x8c8, 0x8cd, 0x8d5, 
       0x8dc, 0x8e0, 0x8e7, 0x8ed, 0x8f1, 0x8f7, 0x900, 0x904, 0x907, 0x917, 
       0x91e, 0x927, 0x92d, 0x931, 0x934, 0x938, 0x93c, 0x941, 0x948, 0x94e, 
       0x952, 0x95b, 0x990, 0x999, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CParser::Initializer CParser::_init;
