
// Generated from CC.g4 by ANTLR 4.7.2

#pragma once


#include "..\vcpkg-master\vcpkg-master\installed\x64-windows\include\antlr4-runtime.h"
#include "CParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CParser.
 */
class  CListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTranslationunit(CParser::TranslationunitContext *ctx) = 0;
  virtual void exitTranslationunit(CParser::TranslationunitContext *ctx) = 0;

  virtual void enterPrimaryexpression(CParser::PrimaryexpressionContext *ctx) = 0;
  virtual void exitPrimaryexpression(CParser::PrimaryexpressionContext *ctx) = 0;

  virtual void enterIdexpression(CParser::IdexpressionContext *ctx) = 0;
  virtual void exitIdexpression(CParser::IdexpressionContext *ctx) = 0;

  virtual void enterUnqualifiedid(CParser::UnqualifiedidContext *ctx) = 0;
  virtual void exitUnqualifiedid(CParser::UnqualifiedidContext *ctx) = 0;

  virtual void enterQualifiedid(CParser::QualifiedidContext *ctx) = 0;
  virtual void exitQualifiedid(CParser::QualifiedidContext *ctx) = 0;

  virtual void enterNestednamespecifier(CParser::NestednamespecifierContext *ctx) = 0;
  virtual void exitNestednamespecifier(CParser::NestednamespecifierContext *ctx) = 0;

  virtual void enterLambdaexpression(CParser::LambdaexpressionContext *ctx) = 0;
  virtual void exitLambdaexpression(CParser::LambdaexpressionContext *ctx) = 0;

  virtual void enterLambdaintroducer(CParser::LambdaintroducerContext *ctx) = 0;
  virtual void exitLambdaintroducer(CParser::LambdaintroducerContext *ctx) = 0;

  virtual void enterLambdacapture(CParser::LambdacaptureContext *ctx) = 0;
  virtual void exitLambdacapture(CParser::LambdacaptureContext *ctx) = 0;

  virtual void enterCapturedefault(CParser::CapturedefaultContext *ctx) = 0;
  virtual void exitCapturedefault(CParser::CapturedefaultContext *ctx) = 0;

  virtual void enterCapturelist(CParser::CapturelistContext *ctx) = 0;
  virtual void exitCapturelist(CParser::CapturelistContext *ctx) = 0;

  virtual void enterCapture(CParser::CaptureContext *ctx) = 0;
  virtual void exitCapture(CParser::CaptureContext *ctx) = 0;

  virtual void enterSimplecapture(CParser::SimplecaptureContext *ctx) = 0;
  virtual void exitSimplecapture(CParser::SimplecaptureContext *ctx) = 0;

  virtual void enterInitcapture(CParser::InitcaptureContext *ctx) = 0;
  virtual void exitInitcapture(CParser::InitcaptureContext *ctx) = 0;

  virtual void enterLambdadeclarator(CParser::LambdadeclaratorContext *ctx) = 0;
  virtual void exitLambdadeclarator(CParser::LambdadeclaratorContext *ctx) = 0;

  virtual void enterPostfixexpression(CParser::PostfixexpressionContext *ctx) = 0;
  virtual void exitPostfixexpression(CParser::PostfixexpressionContext *ctx) = 0;

  virtual void enterTypeidofexpr(CParser::TypeidofexprContext *ctx) = 0;
  virtual void exitTypeidofexpr(CParser::TypeidofexprContext *ctx) = 0;

  virtual void enterTypeidofthetypeid(CParser::TypeidofthetypeidContext *ctx) = 0;
  virtual void exitTypeidofthetypeid(CParser::TypeidofthetypeidContext *ctx) = 0;

  virtual void enterExpressionlist(CParser::ExpressionlistContext *ctx) = 0;
  virtual void exitExpressionlist(CParser::ExpressionlistContext *ctx) = 0;

  virtual void enterPseudodestructorname(CParser::PseudodestructornameContext *ctx) = 0;
  virtual void exitPseudodestructorname(CParser::PseudodestructornameContext *ctx) = 0;

  virtual void enterUnaryexpression(CParser::UnaryexpressionContext *ctx) = 0;
  virtual void exitUnaryexpression(CParser::UnaryexpressionContext *ctx) = 0;

  virtual void enterUnaryoperator(CParser::UnaryoperatorContext *ctx) = 0;
  virtual void exitUnaryoperator(CParser::UnaryoperatorContext *ctx) = 0;

  virtual void enterNewexpression(CParser::NewexpressionContext *ctx) = 0;
  virtual void exitNewexpression(CParser::NewexpressionContext *ctx) = 0;

  virtual void enterNewplacement(CParser::NewplacementContext *ctx) = 0;
  virtual void exitNewplacement(CParser::NewplacementContext *ctx) = 0;

  virtual void enterNewtypeid(CParser::NewtypeidContext *ctx) = 0;
  virtual void exitNewtypeid(CParser::NewtypeidContext *ctx) = 0;

  virtual void enterNewdeclarator(CParser::NewdeclaratorContext *ctx) = 0;
  virtual void exitNewdeclarator(CParser::NewdeclaratorContext *ctx) = 0;

  virtual void enterNoptrnewdeclarator(CParser::NoptrnewdeclaratorContext *ctx) = 0;
  virtual void exitNoptrnewdeclarator(CParser::NoptrnewdeclaratorContext *ctx) = 0;

  virtual void enterNewinitializer(CParser::NewinitializerContext *ctx) = 0;
  virtual void exitNewinitializer(CParser::NewinitializerContext *ctx) = 0;

  virtual void enterDeleteexpression(CParser::DeleteexpressionContext *ctx) = 0;
  virtual void exitDeleteexpression(CParser::DeleteexpressionContext *ctx) = 0;

  virtual void enterNoexceptexpression(CParser::NoexceptexpressionContext *ctx) = 0;
  virtual void exitNoexceptexpression(CParser::NoexceptexpressionContext *ctx) = 0;

  virtual void enterCastexpression(CParser::CastexpressionContext *ctx) = 0;
  virtual void exitCastexpression(CParser::CastexpressionContext *ctx) = 0;

  virtual void enterPmexpression(CParser::PmexpressionContext *ctx) = 0;
  virtual void exitPmexpression(CParser::PmexpressionContext *ctx) = 0;

  virtual void enterMultiplicativeexpression(CParser::MultiplicativeexpressionContext *ctx) = 0;
  virtual void exitMultiplicativeexpression(CParser::MultiplicativeexpressionContext *ctx) = 0;

  virtual void enterAdditiveexpression(CParser::AdditiveexpressionContext *ctx) = 0;
  virtual void exitAdditiveexpression(CParser::AdditiveexpressionContext *ctx) = 0;

  virtual void enterShiftexpression(CParser::ShiftexpressionContext *ctx) = 0;
  virtual void exitShiftexpression(CParser::ShiftexpressionContext *ctx) = 0;

  virtual void enterShiftoperator(CParser::ShiftoperatorContext *ctx) = 0;
  virtual void exitShiftoperator(CParser::ShiftoperatorContext *ctx) = 0;

  virtual void enterRelationalexpression(CParser::RelationalexpressionContext *ctx) = 0;
  virtual void exitRelationalexpression(CParser::RelationalexpressionContext *ctx) = 0;

  virtual void enterEqualityexpression(CParser::EqualityexpressionContext *ctx) = 0;
  virtual void exitEqualityexpression(CParser::EqualityexpressionContext *ctx) = 0;

  virtual void enterAndexpression(CParser::AndexpressionContext *ctx) = 0;
  virtual void exitAndexpression(CParser::AndexpressionContext *ctx) = 0;

  virtual void enterExclusiveorexpression(CParser::ExclusiveorexpressionContext *ctx) = 0;
  virtual void exitExclusiveorexpression(CParser::ExclusiveorexpressionContext *ctx) = 0;

  virtual void enterInclusiveorexpression(CParser::InclusiveorexpressionContext *ctx) = 0;
  virtual void exitInclusiveorexpression(CParser::InclusiveorexpressionContext *ctx) = 0;

  virtual void enterLogicalandexpression(CParser::LogicalandexpressionContext *ctx) = 0;
  virtual void exitLogicalandexpression(CParser::LogicalandexpressionContext *ctx) = 0;

  virtual void enterLogicalorexpression(CParser::LogicalorexpressionContext *ctx) = 0;
  virtual void exitLogicalorexpression(CParser::LogicalorexpressionContext *ctx) = 0;

  virtual void enterConditionalexpression(CParser::ConditionalexpressionContext *ctx) = 0;
  virtual void exitConditionalexpression(CParser::ConditionalexpressionContext *ctx) = 0;

  virtual void enterAssignmentexpression(CParser::AssignmentexpressionContext *ctx) = 0;
  virtual void exitAssignmentexpression(CParser::AssignmentexpressionContext *ctx) = 0;

  virtual void enterAssignmentoperator(CParser::AssignmentoperatorContext *ctx) = 0;
  virtual void exitAssignmentoperator(CParser::AssignmentoperatorContext *ctx) = 0;

  virtual void enterExpression(CParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CParser::ExpressionContext *ctx) = 0;

  virtual void enterConstantexpression(CParser::ConstantexpressionContext *ctx) = 0;
  virtual void exitConstantexpression(CParser::ConstantexpressionContext *ctx) = 0;

  virtual void enterStatement(CParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CParser::StatementContext *ctx) = 0;

  virtual void enterLabeledstatement(CParser::LabeledstatementContext *ctx) = 0;
  virtual void exitLabeledstatement(CParser::LabeledstatementContext *ctx) = 0;

  virtual void enterExpressionstatement(CParser::ExpressionstatementContext *ctx) = 0;
  virtual void exitExpressionstatement(CParser::ExpressionstatementContext *ctx) = 0;

  virtual void enterCompoundstatement(CParser::CompoundstatementContext *ctx) = 0;
  virtual void exitCompoundstatement(CParser::CompoundstatementContext *ctx) = 0;

  virtual void enterStatementseq(CParser::StatementseqContext *ctx) = 0;
  virtual void exitStatementseq(CParser::StatementseqContext *ctx) = 0;

  virtual void enterSelectionstatement(CParser::SelectionstatementContext *ctx) = 0;
  virtual void exitSelectionstatement(CParser::SelectionstatementContext *ctx) = 0;

  virtual void enterCondition(CParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(CParser::ConditionContext *ctx) = 0;

  virtual void enterIterationstatement(CParser::IterationstatementContext *ctx) = 0;
  virtual void exitIterationstatement(CParser::IterationstatementContext *ctx) = 0;

  virtual void enterForinitstatement(CParser::ForinitstatementContext *ctx) = 0;
  virtual void exitForinitstatement(CParser::ForinitstatementContext *ctx) = 0;

  virtual void enterForrangedeclaration(CParser::ForrangedeclarationContext *ctx) = 0;
  virtual void exitForrangedeclaration(CParser::ForrangedeclarationContext *ctx) = 0;

  virtual void enterForrangeinitializer(CParser::ForrangeinitializerContext *ctx) = 0;
  virtual void exitForrangeinitializer(CParser::ForrangeinitializerContext *ctx) = 0;

  virtual void enterJumpstatement(CParser::JumpstatementContext *ctx) = 0;
  virtual void exitJumpstatement(CParser::JumpstatementContext *ctx) = 0;

  virtual void enterDeclarationstatement(CParser::DeclarationstatementContext *ctx) = 0;
  virtual void exitDeclarationstatement(CParser::DeclarationstatementContext *ctx) = 0;

  virtual void enterDeclarationseq(CParser::DeclarationseqContext *ctx) = 0;
  virtual void exitDeclarationseq(CParser::DeclarationseqContext *ctx) = 0;

  virtual void enterDeclaration(CParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(CParser::DeclarationContext *ctx) = 0;

  virtual void enterBlockdeclaration(CParser::BlockdeclarationContext *ctx) = 0;
  virtual void exitBlockdeclaration(CParser::BlockdeclarationContext *ctx) = 0;

  virtual void enterAliasdeclaration(CParser::AliasdeclarationContext *ctx) = 0;
  virtual void exitAliasdeclaration(CParser::AliasdeclarationContext *ctx) = 0;

  virtual void enterSimpledeclaration(CParser::SimpledeclarationContext *ctx) = 0;
  virtual void exitSimpledeclaration(CParser::SimpledeclarationContext *ctx) = 0;

  virtual void enterStatic_assertdeclaration(CParser::Static_assertdeclarationContext *ctx) = 0;
  virtual void exitStatic_assertdeclaration(CParser::Static_assertdeclarationContext *ctx) = 0;

  virtual void enterEmptydeclaration(CParser::EmptydeclarationContext *ctx) = 0;
  virtual void exitEmptydeclaration(CParser::EmptydeclarationContext *ctx) = 0;

  virtual void enterAttributedeclaration(CParser::AttributedeclarationContext *ctx) = 0;
  virtual void exitAttributedeclaration(CParser::AttributedeclarationContext *ctx) = 0;

  virtual void enterDeclspecifier(CParser::DeclspecifierContext *ctx) = 0;
  virtual void exitDeclspecifier(CParser::DeclspecifierContext *ctx) = 0;

  virtual void enterDeclspecifierseq(CParser::DeclspecifierseqContext *ctx) = 0;
  virtual void exitDeclspecifierseq(CParser::DeclspecifierseqContext *ctx) = 0;

  virtual void enterStorageclassspecifier(CParser::StorageclassspecifierContext *ctx) = 0;
  virtual void exitStorageclassspecifier(CParser::StorageclassspecifierContext *ctx) = 0;

  virtual void enterFunctionspecifier(CParser::FunctionspecifierContext *ctx) = 0;
  virtual void exitFunctionspecifier(CParser::FunctionspecifierContext *ctx) = 0;

  virtual void enterTypedefname(CParser::TypedefnameContext *ctx) = 0;
  virtual void exitTypedefname(CParser::TypedefnameContext *ctx) = 0;

  virtual void enterTypespecifier(CParser::TypespecifierContext *ctx) = 0;
  virtual void exitTypespecifier(CParser::TypespecifierContext *ctx) = 0;

  virtual void enterTrailingtypespecifier(CParser::TrailingtypespecifierContext *ctx) = 0;
  virtual void exitTrailingtypespecifier(CParser::TrailingtypespecifierContext *ctx) = 0;

  virtual void enterTypespecifierseq(CParser::TypespecifierseqContext *ctx) = 0;
  virtual void exitTypespecifierseq(CParser::TypespecifierseqContext *ctx) = 0;

  virtual void enterTrailingtypespecifierseq(CParser::TrailingtypespecifierseqContext *ctx) = 0;
  virtual void exitTrailingtypespecifierseq(CParser::TrailingtypespecifierseqContext *ctx) = 0;

  virtual void enterSimpletypespecifier(CParser::SimpletypespecifierContext *ctx) = 0;
  virtual void exitSimpletypespecifier(CParser::SimpletypespecifierContext *ctx) = 0;

  virtual void enterThetypename(CParser::ThetypenameContext *ctx) = 0;
  virtual void exitThetypename(CParser::ThetypenameContext *ctx) = 0;

  virtual void enterDecltypespecifier(CParser::DecltypespecifierContext *ctx) = 0;
  virtual void exitDecltypespecifier(CParser::DecltypespecifierContext *ctx) = 0;

  virtual void enterElaboratedtypespecifier(CParser::ElaboratedtypespecifierContext *ctx) = 0;
  virtual void exitElaboratedtypespecifier(CParser::ElaboratedtypespecifierContext *ctx) = 0;

  virtual void enterEnumname(CParser::EnumnameContext *ctx) = 0;
  virtual void exitEnumname(CParser::EnumnameContext *ctx) = 0;

  virtual void enterEnumspecifier(CParser::EnumspecifierContext *ctx) = 0;
  virtual void exitEnumspecifier(CParser::EnumspecifierContext *ctx) = 0;

  virtual void enterEnumhead(CParser::EnumheadContext *ctx) = 0;
  virtual void exitEnumhead(CParser::EnumheadContext *ctx) = 0;

  virtual void enterOpaqueenumdeclaration(CParser::OpaqueenumdeclarationContext *ctx) = 0;
  virtual void exitOpaqueenumdeclaration(CParser::OpaqueenumdeclarationContext *ctx) = 0;

  virtual void enterEnumkey(CParser::EnumkeyContext *ctx) = 0;
  virtual void exitEnumkey(CParser::EnumkeyContext *ctx) = 0;

  virtual void enterEnumbase(CParser::EnumbaseContext *ctx) = 0;
  virtual void exitEnumbase(CParser::EnumbaseContext *ctx) = 0;

  virtual void enterEnumeratorlist(CParser::EnumeratorlistContext *ctx) = 0;
  virtual void exitEnumeratorlist(CParser::EnumeratorlistContext *ctx) = 0;

  virtual void enterEnumeratordefinition(CParser::EnumeratordefinitionContext *ctx) = 0;
  virtual void exitEnumeratordefinition(CParser::EnumeratordefinitionContext *ctx) = 0;

  virtual void enterEnumerator(CParser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(CParser::EnumeratorContext *ctx) = 0;

  virtual void enterNamespacename(CParser::NamespacenameContext *ctx) = 0;
  virtual void exitNamespacename(CParser::NamespacenameContext *ctx) = 0;

  virtual void enterOriginalnamespacename(CParser::OriginalnamespacenameContext *ctx) = 0;
  virtual void exitOriginalnamespacename(CParser::OriginalnamespacenameContext *ctx) = 0;

  virtual void enterNamespacedefinition(CParser::NamespacedefinitionContext *ctx) = 0;
  virtual void exitNamespacedefinition(CParser::NamespacedefinitionContext *ctx) = 0;

  virtual void enterNamednamespacedefinition(CParser::NamednamespacedefinitionContext *ctx) = 0;
  virtual void exitNamednamespacedefinition(CParser::NamednamespacedefinitionContext *ctx) = 0;

  virtual void enterOriginalnamespacedefinition(CParser::OriginalnamespacedefinitionContext *ctx) = 0;
  virtual void exitOriginalnamespacedefinition(CParser::OriginalnamespacedefinitionContext *ctx) = 0;

  virtual void enterExtensionnamespacedefinition(CParser::ExtensionnamespacedefinitionContext *ctx) = 0;
  virtual void exitExtensionnamespacedefinition(CParser::ExtensionnamespacedefinitionContext *ctx) = 0;

  virtual void enterUnnamednamespacedefinition(CParser::UnnamednamespacedefinitionContext *ctx) = 0;
  virtual void exitUnnamednamespacedefinition(CParser::UnnamednamespacedefinitionContext *ctx) = 0;

  virtual void enterNamespacebody(CParser::NamespacebodyContext *ctx) = 0;
  virtual void exitNamespacebody(CParser::NamespacebodyContext *ctx) = 0;

  virtual void enterNamespacealias(CParser::NamespacealiasContext *ctx) = 0;
  virtual void exitNamespacealias(CParser::NamespacealiasContext *ctx) = 0;

  virtual void enterNamespacealiasdefinition(CParser::NamespacealiasdefinitionContext *ctx) = 0;
  virtual void exitNamespacealiasdefinition(CParser::NamespacealiasdefinitionContext *ctx) = 0;

  virtual void enterQualifiednamespacespecifier(CParser::QualifiednamespacespecifierContext *ctx) = 0;
  virtual void exitQualifiednamespacespecifier(CParser::QualifiednamespacespecifierContext *ctx) = 0;

  virtual void enterUsingdeclaration(CParser::UsingdeclarationContext *ctx) = 0;
  virtual void exitUsingdeclaration(CParser::UsingdeclarationContext *ctx) = 0;

  virtual void enterUsingdirective(CParser::UsingdirectiveContext *ctx) = 0;
  virtual void exitUsingdirective(CParser::UsingdirectiveContext *ctx) = 0;

  virtual void enterAsmdefinition(CParser::AsmdefinitionContext *ctx) = 0;
  virtual void exitAsmdefinition(CParser::AsmdefinitionContext *ctx) = 0;

  virtual void enterLinkagespecification(CParser::LinkagespecificationContext *ctx) = 0;
  virtual void exitLinkagespecification(CParser::LinkagespecificationContext *ctx) = 0;

  virtual void enterAttributespecifierseq(CParser::AttributespecifierseqContext *ctx) = 0;
  virtual void exitAttributespecifierseq(CParser::AttributespecifierseqContext *ctx) = 0;

  virtual void enterAttributespecifier(CParser::AttributespecifierContext *ctx) = 0;
  virtual void exitAttributespecifier(CParser::AttributespecifierContext *ctx) = 0;

  virtual void enterAlignmentspecifier(CParser::AlignmentspecifierContext *ctx) = 0;
  virtual void exitAlignmentspecifier(CParser::AlignmentspecifierContext *ctx) = 0;

  virtual void enterAttributelist(CParser::AttributelistContext *ctx) = 0;
  virtual void exitAttributelist(CParser::AttributelistContext *ctx) = 0;

  virtual void enterAttribute(CParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(CParser::AttributeContext *ctx) = 0;

  virtual void enterAttributetoken(CParser::AttributetokenContext *ctx) = 0;
  virtual void exitAttributetoken(CParser::AttributetokenContext *ctx) = 0;

  virtual void enterAttributescopedtoken(CParser::AttributescopedtokenContext *ctx) = 0;
  virtual void exitAttributescopedtoken(CParser::AttributescopedtokenContext *ctx) = 0;

  virtual void enterAttributenamespace(CParser::AttributenamespaceContext *ctx) = 0;
  virtual void exitAttributenamespace(CParser::AttributenamespaceContext *ctx) = 0;

  virtual void enterAttributeargumentclause(CParser::AttributeargumentclauseContext *ctx) = 0;
  virtual void exitAttributeargumentclause(CParser::AttributeargumentclauseContext *ctx) = 0;

  virtual void enterBalancedtokenseq(CParser::BalancedtokenseqContext *ctx) = 0;
  virtual void exitBalancedtokenseq(CParser::BalancedtokenseqContext *ctx) = 0;

  virtual void enterBalancedtoken(CParser::BalancedtokenContext *ctx) = 0;
  virtual void exitBalancedtoken(CParser::BalancedtokenContext *ctx) = 0;

  virtual void enterInitdeclaratorlist(CParser::InitdeclaratorlistContext *ctx) = 0;
  virtual void exitInitdeclaratorlist(CParser::InitdeclaratorlistContext *ctx) = 0;

  virtual void enterInitdeclarator(CParser::InitdeclaratorContext *ctx) = 0;
  virtual void exitInitdeclarator(CParser::InitdeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(CParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(CParser::DeclaratorContext *ctx) = 0;

  virtual void enterPtrdeclarator(CParser::PtrdeclaratorContext *ctx) = 0;
  virtual void exitPtrdeclarator(CParser::PtrdeclaratorContext *ctx) = 0;

  virtual void enterNoptrdeclarator(CParser::NoptrdeclaratorContext *ctx) = 0;
  virtual void exitNoptrdeclarator(CParser::NoptrdeclaratorContext *ctx) = 0;

  virtual void enterParametersandqualifiers(CParser::ParametersandqualifiersContext *ctx) = 0;
  virtual void exitParametersandqualifiers(CParser::ParametersandqualifiersContext *ctx) = 0;

  virtual void enterTrailingreturntype(CParser::TrailingreturntypeContext *ctx) = 0;
  virtual void exitTrailingreturntype(CParser::TrailingreturntypeContext *ctx) = 0;

  virtual void enterPtroperator(CParser::PtroperatorContext *ctx) = 0;
  virtual void exitPtroperator(CParser::PtroperatorContext *ctx) = 0;

  virtual void enterCvqualifierseq(CParser::CvqualifierseqContext *ctx) = 0;
  virtual void exitCvqualifierseq(CParser::CvqualifierseqContext *ctx) = 0;

  virtual void enterCvqualifier(CParser::CvqualifierContext *ctx) = 0;
  virtual void exitCvqualifier(CParser::CvqualifierContext *ctx) = 0;

  virtual void enterRefqualifier(CParser::RefqualifierContext *ctx) = 0;
  virtual void exitRefqualifier(CParser::RefqualifierContext *ctx) = 0;

  virtual void enterDeclaratorid(CParser::DeclaratoridContext *ctx) = 0;
  virtual void exitDeclaratorid(CParser::DeclaratoridContext *ctx) = 0;

  virtual void enterThetypeid(CParser::ThetypeidContext *ctx) = 0;
  virtual void exitThetypeid(CParser::ThetypeidContext *ctx) = 0;

  virtual void enterAbstractdeclarator(CParser::AbstractdeclaratorContext *ctx) = 0;
  virtual void exitAbstractdeclarator(CParser::AbstractdeclaratorContext *ctx) = 0;

  virtual void enterPtrabstractdeclarator(CParser::PtrabstractdeclaratorContext *ctx) = 0;
  virtual void exitPtrabstractdeclarator(CParser::PtrabstractdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractdeclarator(CParser::NoptrabstractdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractdeclarator(CParser::NoptrabstractdeclaratorContext *ctx) = 0;

  virtual void enterAbstractpackdeclarator(CParser::AbstractpackdeclaratorContext *ctx) = 0;
  virtual void exitAbstractpackdeclarator(CParser::AbstractpackdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractpackdeclarator(CParser::NoptrabstractpackdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractpackdeclarator(CParser::NoptrabstractpackdeclaratorContext *ctx) = 0;

  virtual void enterParameterdeclarationclause(CParser::ParameterdeclarationclauseContext *ctx) = 0;
  virtual void exitParameterdeclarationclause(CParser::ParameterdeclarationclauseContext *ctx) = 0;

  virtual void enterParameterdeclarationlist(CParser::ParameterdeclarationlistContext *ctx) = 0;
  virtual void exitParameterdeclarationlist(CParser::ParameterdeclarationlistContext *ctx) = 0;

  virtual void enterParameterdeclaration(CParser::ParameterdeclarationContext *ctx) = 0;
  virtual void exitParameterdeclaration(CParser::ParameterdeclarationContext *ctx) = 0;

  virtual void enterFunctiondefinition(CParser::FunctiondefinitionContext *ctx) = 0;
  virtual void exitFunctiondefinition(CParser::FunctiondefinitionContext *ctx) = 0;

  virtual void enterFunctionbody(CParser::FunctionbodyContext *ctx) = 0;
  virtual void exitFunctionbody(CParser::FunctionbodyContext *ctx) = 0;

  virtual void enterInitializer(CParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(CParser::InitializerContext *ctx) = 0;

  virtual void enterBraceorequalinitializer(CParser::BraceorequalinitializerContext *ctx) = 0;
  virtual void exitBraceorequalinitializer(CParser::BraceorequalinitializerContext *ctx) = 0;

  virtual void enterInitializerclause(CParser::InitializerclauseContext *ctx) = 0;
  virtual void exitInitializerclause(CParser::InitializerclauseContext *ctx) = 0;

  virtual void enterInitializerlist(CParser::InitializerlistContext *ctx) = 0;
  virtual void exitInitializerlist(CParser::InitializerlistContext *ctx) = 0;

  virtual void enterBracedinitlist(CParser::BracedinitlistContext *ctx) = 0;
  virtual void exitBracedinitlist(CParser::BracedinitlistContext *ctx) = 0;

  virtual void enterClassname(CParser::ClassnameContext *ctx) = 0;
  virtual void exitClassname(CParser::ClassnameContext *ctx) = 0;

  virtual void enterClassspecifier(CParser::ClassspecifierContext *ctx) = 0;
  virtual void exitClassspecifier(CParser::ClassspecifierContext *ctx) = 0;

  virtual void enterClasshead(CParser::ClassheadContext *ctx) = 0;
  virtual void exitClasshead(CParser::ClassheadContext *ctx) = 0;

  virtual void enterClassheadname(CParser::ClassheadnameContext *ctx) = 0;
  virtual void exitClassheadname(CParser::ClassheadnameContext *ctx) = 0;

  virtual void enterClassvirtspecifier(CParser::ClassvirtspecifierContext *ctx) = 0;
  virtual void exitClassvirtspecifier(CParser::ClassvirtspecifierContext *ctx) = 0;

  virtual void enterClasskey(CParser::ClasskeyContext *ctx) = 0;
  virtual void exitClasskey(CParser::ClasskeyContext *ctx) = 0;

  virtual void enterMemberspecification(CParser::MemberspecificationContext *ctx) = 0;
  virtual void exitMemberspecification(CParser::MemberspecificationContext *ctx) = 0;

  virtual void enterMemberdeclaration(CParser::MemberdeclarationContext *ctx) = 0;
  virtual void exitMemberdeclaration(CParser::MemberdeclarationContext *ctx) = 0;

  virtual void enterMemberdeclaratorlist(CParser::MemberdeclaratorlistContext *ctx) = 0;
  virtual void exitMemberdeclaratorlist(CParser::MemberdeclaratorlistContext *ctx) = 0;

  virtual void enterMemberdeclarator(CParser::MemberdeclaratorContext *ctx) = 0;
  virtual void exitMemberdeclarator(CParser::MemberdeclaratorContext *ctx) = 0;

  virtual void enterVirtspecifierseq(CParser::VirtspecifierseqContext *ctx) = 0;
  virtual void exitVirtspecifierseq(CParser::VirtspecifierseqContext *ctx) = 0;

  virtual void enterVirtspecifier(CParser::VirtspecifierContext *ctx) = 0;
  virtual void exitVirtspecifier(CParser::VirtspecifierContext *ctx) = 0;

  virtual void enterPurespecifier(CParser::PurespecifierContext *ctx) = 0;
  virtual void exitPurespecifier(CParser::PurespecifierContext *ctx) = 0;

  virtual void enterBaseclause(CParser::BaseclauseContext *ctx) = 0;
  virtual void exitBaseclause(CParser::BaseclauseContext *ctx) = 0;

  virtual void enterBasespecifierlist(CParser::BasespecifierlistContext *ctx) = 0;
  virtual void exitBasespecifierlist(CParser::BasespecifierlistContext *ctx) = 0;

  virtual void enterBasespecifier(CParser::BasespecifierContext *ctx) = 0;
  virtual void exitBasespecifier(CParser::BasespecifierContext *ctx) = 0;

  virtual void enterClassordecltype(CParser::ClassordecltypeContext *ctx) = 0;
  virtual void exitClassordecltype(CParser::ClassordecltypeContext *ctx) = 0;

  virtual void enterBasetypespecifier(CParser::BasetypespecifierContext *ctx) = 0;
  virtual void exitBasetypespecifier(CParser::BasetypespecifierContext *ctx) = 0;

  virtual void enterAccessspecifier(CParser::AccessspecifierContext *ctx) = 0;
  virtual void exitAccessspecifier(CParser::AccessspecifierContext *ctx) = 0;

  virtual void enterConversionfunctionid(CParser::ConversionfunctionidContext *ctx) = 0;
  virtual void exitConversionfunctionid(CParser::ConversionfunctionidContext *ctx) = 0;

  virtual void enterConversiontypeid(CParser::ConversiontypeidContext *ctx) = 0;
  virtual void exitConversiontypeid(CParser::ConversiontypeidContext *ctx) = 0;

  virtual void enterConversiondeclarator(CParser::ConversiondeclaratorContext *ctx) = 0;
  virtual void exitConversiondeclarator(CParser::ConversiondeclaratorContext *ctx) = 0;

  virtual void enterCtorinitializer(CParser::CtorinitializerContext *ctx) = 0;
  virtual void exitCtorinitializer(CParser::CtorinitializerContext *ctx) = 0;

  virtual void enterMeminitializerlist(CParser::MeminitializerlistContext *ctx) = 0;
  virtual void exitMeminitializerlist(CParser::MeminitializerlistContext *ctx) = 0;

  virtual void enterMeminitializer(CParser::MeminitializerContext *ctx) = 0;
  virtual void exitMeminitializer(CParser::MeminitializerContext *ctx) = 0;

  virtual void enterMeminitializerid(CParser::MeminitializeridContext *ctx) = 0;
  virtual void exitMeminitializerid(CParser::MeminitializeridContext *ctx) = 0;

  virtual void enterOperatorfunctionid(CParser::OperatorfunctionidContext *ctx) = 0;
  virtual void exitOperatorfunctionid(CParser::OperatorfunctionidContext *ctx) = 0;

  virtual void enterLiteraloperatorid(CParser::LiteraloperatoridContext *ctx) = 0;
  virtual void exitLiteraloperatorid(CParser::LiteraloperatoridContext *ctx) = 0;

  virtual void enterTemplatedeclaration(CParser::TemplatedeclarationContext *ctx) = 0;
  virtual void exitTemplatedeclaration(CParser::TemplatedeclarationContext *ctx) = 0;

  virtual void enterTemplateparameterlist(CParser::TemplateparameterlistContext *ctx) = 0;
  virtual void exitTemplateparameterlist(CParser::TemplateparameterlistContext *ctx) = 0;

  virtual void enterTemplateparameter(CParser::TemplateparameterContext *ctx) = 0;
  virtual void exitTemplateparameter(CParser::TemplateparameterContext *ctx) = 0;

  virtual void enterTypeparameter(CParser::TypeparameterContext *ctx) = 0;
  virtual void exitTypeparameter(CParser::TypeparameterContext *ctx) = 0;

  virtual void enterSimpletemplateid(CParser::SimpletemplateidContext *ctx) = 0;
  virtual void exitSimpletemplateid(CParser::SimpletemplateidContext *ctx) = 0;

  virtual void enterTemplateid(CParser::TemplateidContext *ctx) = 0;
  virtual void exitTemplateid(CParser::TemplateidContext *ctx) = 0;

  virtual void enterTemplatename(CParser::TemplatenameContext *ctx) = 0;
  virtual void exitTemplatename(CParser::TemplatenameContext *ctx) = 0;

  virtual void enterTemplateargumentlist(CParser::TemplateargumentlistContext *ctx) = 0;
  virtual void exitTemplateargumentlist(CParser::TemplateargumentlistContext *ctx) = 0;

  virtual void enterTemplateargument(CParser::TemplateargumentContext *ctx) = 0;
  virtual void exitTemplateargument(CParser::TemplateargumentContext *ctx) = 0;

  virtual void enterTypenamespecifier(CParser::TypenamespecifierContext *ctx) = 0;
  virtual void exitTypenamespecifier(CParser::TypenamespecifierContext *ctx) = 0;

  virtual void enterExplicitinstantiation(CParser::ExplicitinstantiationContext *ctx) = 0;
  virtual void exitExplicitinstantiation(CParser::ExplicitinstantiationContext *ctx) = 0;

  virtual void enterExplicitspecialization(CParser::ExplicitspecializationContext *ctx) = 0;
  virtual void exitExplicitspecialization(CParser::ExplicitspecializationContext *ctx) = 0;

  virtual void enterTryblock(CParser::TryblockContext *ctx) = 0;
  virtual void exitTryblock(CParser::TryblockContext *ctx) = 0;

  virtual void enterFunctiontryblock(CParser::FunctiontryblockContext *ctx) = 0;
  virtual void exitFunctiontryblock(CParser::FunctiontryblockContext *ctx) = 0;

  virtual void enterHandlerseq(CParser::HandlerseqContext *ctx) = 0;
  virtual void exitHandlerseq(CParser::HandlerseqContext *ctx) = 0;

  virtual void enterHandler(CParser::HandlerContext *ctx) = 0;
  virtual void exitHandler(CParser::HandlerContext *ctx) = 0;

  virtual void enterExceptiondeclaration(CParser::ExceptiondeclarationContext *ctx) = 0;
  virtual void exitExceptiondeclaration(CParser::ExceptiondeclarationContext *ctx) = 0;

  virtual void enterThrowexpression(CParser::ThrowexpressionContext *ctx) = 0;
  virtual void exitThrowexpression(CParser::ThrowexpressionContext *ctx) = 0;

  virtual void enterExceptionspecification(CParser::ExceptionspecificationContext *ctx) = 0;
  virtual void exitExceptionspecification(CParser::ExceptionspecificationContext *ctx) = 0;

  virtual void enterDynamicexceptionspecification(CParser::DynamicexceptionspecificationContext *ctx) = 0;
  virtual void exitDynamicexceptionspecification(CParser::DynamicexceptionspecificationContext *ctx) = 0;

  virtual void enterTypeidlist(CParser::TypeidlistContext *ctx) = 0;
  virtual void exitTypeidlist(CParser::TypeidlistContext *ctx) = 0;

  virtual void enterNoexceptspecification(CParser::NoexceptspecificationContext *ctx) = 0;
  virtual void exitNoexceptspecification(CParser::NoexceptspecificationContext *ctx) = 0;

  virtual void enterTheoperator(CParser::TheoperatorContext *ctx) = 0;
  virtual void exitTheoperator(CParser::TheoperatorContext *ctx) = 0;

  virtual void enterLiteral(CParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(CParser::LiteralContext *ctx) = 0;

  virtual void enterBooleanliteral(CParser::BooleanliteralContext *ctx) = 0;
  virtual void exitBooleanliteral(CParser::BooleanliteralContext *ctx) = 0;

  virtual void enterPointerliteral(CParser::PointerliteralContext *ctx) = 0;
  virtual void exitPointerliteral(CParser::PointerliteralContext *ctx) = 0;

  virtual void enterUserdefinedliteral(CParser::UserdefinedliteralContext *ctx) = 0;
  virtual void exitUserdefinedliteral(CParser::UserdefinedliteralContext *ctx) = 0;


};

