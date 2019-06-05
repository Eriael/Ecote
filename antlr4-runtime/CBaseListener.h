
// Generated from CC.g4 by ANTLR 4.7.2

#pragma once


#include "..\vcpkg-master\vcpkg-master\installed\x64-windows\include\antlr4-runtime.h"
#include "CListener.h"


/**
 * This class provides an empty implementation of CListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CBaseListener : public CListener {
public:

  virtual void enterTranslationunit(CParser::TranslationunitContext * /*ctx*/) override { }
  virtual void exitTranslationunit(CParser::TranslationunitContext * /*ctx*/) override { }

  virtual void enterPrimaryexpression(CParser::PrimaryexpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryexpression(CParser::PrimaryexpressionContext * /*ctx*/) override { }

  virtual void enterIdexpression(CParser::IdexpressionContext * /*ctx*/) override { }
  virtual void exitIdexpression(CParser::IdexpressionContext * /*ctx*/) override { }

  virtual void enterUnqualifiedid(CParser::UnqualifiedidContext * /*ctx*/) override { }
  virtual void exitUnqualifiedid(CParser::UnqualifiedidContext * /*ctx*/) override { }

  virtual void enterQualifiedid(CParser::QualifiedidContext * /*ctx*/) override { }
  virtual void exitQualifiedid(CParser::QualifiedidContext * /*ctx*/) override { }

  virtual void enterNestednamespecifier(CParser::NestednamespecifierContext * /*ctx*/) override { }
  virtual void exitNestednamespecifier(CParser::NestednamespecifierContext * /*ctx*/) override { }

  virtual void enterLambdaexpression(CParser::LambdaexpressionContext * /*ctx*/) override { }
  virtual void exitLambdaexpression(CParser::LambdaexpressionContext * /*ctx*/) override { }

  virtual void enterLambdaintroducer(CParser::LambdaintroducerContext * /*ctx*/) override { }
  virtual void exitLambdaintroducer(CParser::LambdaintroducerContext * /*ctx*/) override { }

  virtual void enterLambdacapture(CParser::LambdacaptureContext * /*ctx*/) override { }
  virtual void exitLambdacapture(CParser::LambdacaptureContext * /*ctx*/) override { }

  virtual void enterCapturedefault(CParser::CapturedefaultContext * /*ctx*/) override { }
  virtual void exitCapturedefault(CParser::CapturedefaultContext * /*ctx*/) override { }

  virtual void enterCapturelist(CParser::CapturelistContext * /*ctx*/) override { }
  virtual void exitCapturelist(CParser::CapturelistContext * /*ctx*/) override { }

  virtual void enterCapture(CParser::CaptureContext * /*ctx*/) override { }
  virtual void exitCapture(CParser::CaptureContext * /*ctx*/) override { }

  virtual void enterSimplecapture(CParser::SimplecaptureContext * /*ctx*/) override { }
  virtual void exitSimplecapture(CParser::SimplecaptureContext * /*ctx*/) override { }

  virtual void enterInitcapture(CParser::InitcaptureContext * /*ctx*/) override { }
  virtual void exitInitcapture(CParser::InitcaptureContext * /*ctx*/) override { }

  virtual void enterLambdadeclarator(CParser::LambdadeclaratorContext * /*ctx*/) override { }
  virtual void exitLambdadeclarator(CParser::LambdadeclaratorContext * /*ctx*/) override { }

  virtual void enterPostfixexpression(CParser::PostfixexpressionContext * /*ctx*/) override { }
  virtual void exitPostfixexpression(CParser::PostfixexpressionContext * /*ctx*/) override { }

  virtual void enterTypeidofexpr(CParser::TypeidofexprContext * /*ctx*/) override { }
  virtual void exitTypeidofexpr(CParser::TypeidofexprContext * /*ctx*/) override { }

  virtual void enterTypeidofthetypeid(CParser::TypeidofthetypeidContext * /*ctx*/) override { }
  virtual void exitTypeidofthetypeid(CParser::TypeidofthetypeidContext * /*ctx*/) override { }

  virtual void enterExpressionlist(CParser::ExpressionlistContext * /*ctx*/) override { }
  virtual void exitExpressionlist(CParser::ExpressionlistContext * /*ctx*/) override { }

  virtual void enterPseudodestructorname(CParser::PseudodestructornameContext * /*ctx*/) override { }
  virtual void exitPseudodestructorname(CParser::PseudodestructornameContext * /*ctx*/) override { }

  virtual void enterUnaryexpression(CParser::UnaryexpressionContext * /*ctx*/) override { }
  virtual void exitUnaryexpression(CParser::UnaryexpressionContext * /*ctx*/) override { }

  virtual void enterUnaryoperator(CParser::UnaryoperatorContext * /*ctx*/) override { }
  virtual void exitUnaryoperator(CParser::UnaryoperatorContext * /*ctx*/) override { }

  virtual void enterNewexpression(CParser::NewexpressionContext * /*ctx*/) override { }
  virtual void exitNewexpression(CParser::NewexpressionContext * /*ctx*/) override { }

  virtual void enterNewplacement(CParser::NewplacementContext * /*ctx*/) override { }
  virtual void exitNewplacement(CParser::NewplacementContext * /*ctx*/) override { }

  virtual void enterNewtypeid(CParser::NewtypeidContext * /*ctx*/) override { }
  virtual void exitNewtypeid(CParser::NewtypeidContext * /*ctx*/) override { }

  virtual void enterNewdeclarator(CParser::NewdeclaratorContext * /*ctx*/) override { }
  virtual void exitNewdeclarator(CParser::NewdeclaratorContext * /*ctx*/) override { }

  virtual void enterNoptrnewdeclarator(CParser::NoptrnewdeclaratorContext * /*ctx*/) override { }
  virtual void exitNoptrnewdeclarator(CParser::NoptrnewdeclaratorContext * /*ctx*/) override { }

  virtual void enterNewinitializer(CParser::NewinitializerContext * /*ctx*/) override { }
  virtual void exitNewinitializer(CParser::NewinitializerContext * /*ctx*/) override { }

  virtual void enterDeleteexpression(CParser::DeleteexpressionContext * /*ctx*/) override { }
  virtual void exitDeleteexpression(CParser::DeleteexpressionContext * /*ctx*/) override { }

  virtual void enterNoexceptexpression(CParser::NoexceptexpressionContext * /*ctx*/) override { }
  virtual void exitNoexceptexpression(CParser::NoexceptexpressionContext * /*ctx*/) override { }

  virtual void enterCastexpression(CParser::CastexpressionContext * /*ctx*/) override { }
  virtual void exitCastexpression(CParser::CastexpressionContext * /*ctx*/) override { }

  virtual void enterPmexpression(CParser::PmexpressionContext * /*ctx*/) override { }
  virtual void exitPmexpression(CParser::PmexpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeexpression(CParser::MultiplicativeexpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeexpression(CParser::MultiplicativeexpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveexpression(CParser::AdditiveexpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveexpression(CParser::AdditiveexpressionContext * /*ctx*/) override { }

  virtual void enterShiftexpression(CParser::ShiftexpressionContext * /*ctx*/) override { }
  virtual void exitShiftexpression(CParser::ShiftexpressionContext * /*ctx*/) override { }

  virtual void enterShiftoperator(CParser::ShiftoperatorContext * /*ctx*/) override { }
  virtual void exitShiftoperator(CParser::ShiftoperatorContext * /*ctx*/) override { }

  virtual void enterRelationalexpression(CParser::RelationalexpressionContext * /*ctx*/) override { }
  virtual void exitRelationalexpression(CParser::RelationalexpressionContext * /*ctx*/) override { }

  virtual void enterEqualityexpression(CParser::EqualityexpressionContext * /*ctx*/) override { }
  virtual void exitEqualityexpression(CParser::EqualityexpressionContext * /*ctx*/) override { }

  virtual void enterAndexpression(CParser::AndexpressionContext * /*ctx*/) override { }
  virtual void exitAndexpression(CParser::AndexpressionContext * /*ctx*/) override { }

  virtual void enterExclusiveorexpression(CParser::ExclusiveorexpressionContext * /*ctx*/) override { }
  virtual void exitExclusiveorexpression(CParser::ExclusiveorexpressionContext * /*ctx*/) override { }

  virtual void enterInclusiveorexpression(CParser::InclusiveorexpressionContext * /*ctx*/) override { }
  virtual void exitInclusiveorexpression(CParser::InclusiveorexpressionContext * /*ctx*/) override { }

  virtual void enterLogicalandexpression(CParser::LogicalandexpressionContext * /*ctx*/) override { }
  virtual void exitLogicalandexpression(CParser::LogicalandexpressionContext * /*ctx*/) override { }

  virtual void enterLogicalorexpression(CParser::LogicalorexpressionContext * /*ctx*/) override { }
  virtual void exitLogicalorexpression(CParser::LogicalorexpressionContext * /*ctx*/) override { }

  virtual void enterConditionalexpression(CParser::ConditionalexpressionContext * /*ctx*/) override { }
  virtual void exitConditionalexpression(CParser::ConditionalexpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentexpression(CParser::AssignmentexpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentexpression(CParser::AssignmentexpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentoperator(CParser::AssignmentoperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentoperator(CParser::AssignmentoperatorContext * /*ctx*/) override { }

  virtual void enterExpression(CParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterConstantexpression(CParser::ConstantexpressionContext * /*ctx*/) override { }
  virtual void exitConstantexpression(CParser::ConstantexpressionContext * /*ctx*/) override { }

  virtual void enterStatement(CParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CParser::StatementContext * /*ctx*/) override { }

  virtual void enterLabeledstatement(CParser::LabeledstatementContext * /*ctx*/) override { }
  virtual void exitLabeledstatement(CParser::LabeledstatementContext * /*ctx*/) override { }

  virtual void enterExpressionstatement(CParser::ExpressionstatementContext * /*ctx*/) override { }
  virtual void exitExpressionstatement(CParser::ExpressionstatementContext * /*ctx*/) override { }

  virtual void enterCompoundstatement(CParser::CompoundstatementContext * /*ctx*/) override { }
  virtual void exitCompoundstatement(CParser::CompoundstatementContext * /*ctx*/) override { }

  virtual void enterStatementseq(CParser::StatementseqContext * /*ctx*/) override { }
  virtual void exitStatementseq(CParser::StatementseqContext * /*ctx*/) override { }

  virtual void enterSelectionstatement(CParser::SelectionstatementContext * /*ctx*/) override { }
  virtual void exitSelectionstatement(CParser::SelectionstatementContext * /*ctx*/) override { }

  virtual void enterCondition(CParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(CParser::ConditionContext * /*ctx*/) override { }

  virtual void enterIterationstatement(CParser::IterationstatementContext * /*ctx*/) override { }
  virtual void exitIterationstatement(CParser::IterationstatementContext * /*ctx*/) override { }

  virtual void enterForinitstatement(CParser::ForinitstatementContext * /*ctx*/) override { }
  virtual void exitForinitstatement(CParser::ForinitstatementContext * /*ctx*/) override { }

  virtual void enterForrangedeclaration(CParser::ForrangedeclarationContext * /*ctx*/) override { }
  virtual void exitForrangedeclaration(CParser::ForrangedeclarationContext * /*ctx*/) override { }

  virtual void enterForrangeinitializer(CParser::ForrangeinitializerContext * /*ctx*/) override { }
  virtual void exitForrangeinitializer(CParser::ForrangeinitializerContext * /*ctx*/) override { }

  virtual void enterJumpstatement(CParser::JumpstatementContext * /*ctx*/) override { }
  virtual void exitJumpstatement(CParser::JumpstatementContext * /*ctx*/) override { }

  virtual void enterDeclarationstatement(CParser::DeclarationstatementContext * /*ctx*/) override { }
  virtual void exitDeclarationstatement(CParser::DeclarationstatementContext * /*ctx*/) override { }

  virtual void enterDeclarationseq(CParser::DeclarationseqContext * /*ctx*/) override { }
  virtual void exitDeclarationseq(CParser::DeclarationseqContext * /*ctx*/) override { }

  virtual void enterDeclaration(CParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(CParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterBlockdeclaration(CParser::BlockdeclarationContext * /*ctx*/) override { }
  virtual void exitBlockdeclaration(CParser::BlockdeclarationContext * /*ctx*/) override { }

  virtual void enterAliasdeclaration(CParser::AliasdeclarationContext * /*ctx*/) override { }
  virtual void exitAliasdeclaration(CParser::AliasdeclarationContext * /*ctx*/) override { }

  virtual void enterSimpledeclaration(CParser::SimpledeclarationContext * /*ctx*/) override { }
  virtual void exitSimpledeclaration(CParser::SimpledeclarationContext * /*ctx*/) override { }

  virtual void enterStatic_assertdeclaration(CParser::Static_assertdeclarationContext * /*ctx*/) override { }
  virtual void exitStatic_assertdeclaration(CParser::Static_assertdeclarationContext * /*ctx*/) override { }

  virtual void enterEmptydeclaration(CParser::EmptydeclarationContext * /*ctx*/) override { }
  virtual void exitEmptydeclaration(CParser::EmptydeclarationContext * /*ctx*/) override { }

  virtual void enterAttributedeclaration(CParser::AttributedeclarationContext * /*ctx*/) override { }
  virtual void exitAttributedeclaration(CParser::AttributedeclarationContext * /*ctx*/) override { }

  virtual void enterDeclspecifier(CParser::DeclspecifierContext * /*ctx*/) override { }
  virtual void exitDeclspecifier(CParser::DeclspecifierContext * /*ctx*/) override { }

  virtual void enterDeclspecifierseq(CParser::DeclspecifierseqContext * /*ctx*/) override { }
  virtual void exitDeclspecifierseq(CParser::DeclspecifierseqContext * /*ctx*/) override { }

  virtual void enterStorageclassspecifier(CParser::StorageclassspecifierContext * /*ctx*/) override { }
  virtual void exitStorageclassspecifier(CParser::StorageclassspecifierContext * /*ctx*/) override { }

  virtual void enterFunctionspecifier(CParser::FunctionspecifierContext * /*ctx*/) override { }
  virtual void exitFunctionspecifier(CParser::FunctionspecifierContext * /*ctx*/) override { }

  virtual void enterTypedefname(CParser::TypedefnameContext * /*ctx*/) override { }
  virtual void exitTypedefname(CParser::TypedefnameContext * /*ctx*/) override { }

  virtual void enterTypespecifier(CParser::TypespecifierContext * /*ctx*/) override { }
  virtual void exitTypespecifier(CParser::TypespecifierContext * /*ctx*/) override { }

  virtual void enterTrailingtypespecifier(CParser::TrailingtypespecifierContext * /*ctx*/) override { }
  virtual void exitTrailingtypespecifier(CParser::TrailingtypespecifierContext * /*ctx*/) override { }

  virtual void enterTypespecifierseq(CParser::TypespecifierseqContext * /*ctx*/) override { }
  virtual void exitTypespecifierseq(CParser::TypespecifierseqContext * /*ctx*/) override { }

  virtual void enterTrailingtypespecifierseq(CParser::TrailingtypespecifierseqContext * /*ctx*/) override { }
  virtual void exitTrailingtypespecifierseq(CParser::TrailingtypespecifierseqContext * /*ctx*/) override { }

  virtual void enterSimpletypespecifier(CParser::SimpletypespecifierContext * /*ctx*/) override { }
  virtual void exitSimpletypespecifier(CParser::SimpletypespecifierContext * /*ctx*/) override { }

  virtual void enterThetypename(CParser::ThetypenameContext * /*ctx*/) override { }
  virtual void exitThetypename(CParser::ThetypenameContext * /*ctx*/) override { }

  virtual void enterDecltypespecifier(CParser::DecltypespecifierContext * /*ctx*/) override { }
  virtual void exitDecltypespecifier(CParser::DecltypespecifierContext * /*ctx*/) override { }

  virtual void enterElaboratedtypespecifier(CParser::ElaboratedtypespecifierContext * /*ctx*/) override { }
  virtual void exitElaboratedtypespecifier(CParser::ElaboratedtypespecifierContext * /*ctx*/) override { }

  virtual void enterEnumname(CParser::EnumnameContext * /*ctx*/) override { }
  virtual void exitEnumname(CParser::EnumnameContext * /*ctx*/) override { }

  virtual void enterEnumspecifier(CParser::EnumspecifierContext * /*ctx*/) override { }
  virtual void exitEnumspecifier(CParser::EnumspecifierContext * /*ctx*/) override { }

  virtual void enterEnumhead(CParser::EnumheadContext * /*ctx*/) override { }
  virtual void exitEnumhead(CParser::EnumheadContext * /*ctx*/) override { }

  virtual void enterOpaqueenumdeclaration(CParser::OpaqueenumdeclarationContext * /*ctx*/) override { }
  virtual void exitOpaqueenumdeclaration(CParser::OpaqueenumdeclarationContext * /*ctx*/) override { }

  virtual void enterEnumkey(CParser::EnumkeyContext * /*ctx*/) override { }
  virtual void exitEnumkey(CParser::EnumkeyContext * /*ctx*/) override { }

  virtual void enterEnumbase(CParser::EnumbaseContext * /*ctx*/) override { }
  virtual void exitEnumbase(CParser::EnumbaseContext * /*ctx*/) override { }

  virtual void enterEnumeratorlist(CParser::EnumeratorlistContext * /*ctx*/) override { }
  virtual void exitEnumeratorlist(CParser::EnumeratorlistContext * /*ctx*/) override { }

  virtual void enterEnumeratordefinition(CParser::EnumeratordefinitionContext * /*ctx*/) override { }
  virtual void exitEnumeratordefinition(CParser::EnumeratordefinitionContext * /*ctx*/) override { }

  virtual void enterEnumerator(CParser::EnumeratorContext * /*ctx*/) override { }
  virtual void exitEnumerator(CParser::EnumeratorContext * /*ctx*/) override { }

  virtual void enterNamespacename(CParser::NamespacenameContext * /*ctx*/) override { }
  virtual void exitNamespacename(CParser::NamespacenameContext * /*ctx*/) override { }

  virtual void enterOriginalnamespacename(CParser::OriginalnamespacenameContext * /*ctx*/) override { }
  virtual void exitOriginalnamespacename(CParser::OriginalnamespacenameContext * /*ctx*/) override { }

  virtual void enterNamespacedefinition(CParser::NamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitNamespacedefinition(CParser::NamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterNamednamespacedefinition(CParser::NamednamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitNamednamespacedefinition(CParser::NamednamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterOriginalnamespacedefinition(CParser::OriginalnamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitOriginalnamespacedefinition(CParser::OriginalnamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterExtensionnamespacedefinition(CParser::ExtensionnamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitExtensionnamespacedefinition(CParser::ExtensionnamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterUnnamednamespacedefinition(CParser::UnnamednamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitUnnamednamespacedefinition(CParser::UnnamednamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterNamespacebody(CParser::NamespacebodyContext * /*ctx*/) override { }
  virtual void exitNamespacebody(CParser::NamespacebodyContext * /*ctx*/) override { }

  virtual void enterNamespacealias(CParser::NamespacealiasContext * /*ctx*/) override { }
  virtual void exitNamespacealias(CParser::NamespacealiasContext * /*ctx*/) override { }

  virtual void enterNamespacealiasdefinition(CParser::NamespacealiasdefinitionContext * /*ctx*/) override { }
  virtual void exitNamespacealiasdefinition(CParser::NamespacealiasdefinitionContext * /*ctx*/) override { }

  virtual void enterQualifiednamespacespecifier(CParser::QualifiednamespacespecifierContext * /*ctx*/) override { }
  virtual void exitQualifiednamespacespecifier(CParser::QualifiednamespacespecifierContext * /*ctx*/) override { }

  virtual void enterUsingdeclaration(CParser::UsingdeclarationContext * /*ctx*/) override { }
  virtual void exitUsingdeclaration(CParser::UsingdeclarationContext * /*ctx*/) override { }

  virtual void enterUsingdirective(CParser::UsingdirectiveContext * /*ctx*/) override { }
  virtual void exitUsingdirective(CParser::UsingdirectiveContext * /*ctx*/) override { }

  virtual void enterAsmdefinition(CParser::AsmdefinitionContext * /*ctx*/) override { }
  virtual void exitAsmdefinition(CParser::AsmdefinitionContext * /*ctx*/) override { }

  virtual void enterLinkagespecification(CParser::LinkagespecificationContext * /*ctx*/) override { }
  virtual void exitLinkagespecification(CParser::LinkagespecificationContext * /*ctx*/) override { }

  virtual void enterAttributespecifierseq(CParser::AttributespecifierseqContext * /*ctx*/) override { }
  virtual void exitAttributespecifierseq(CParser::AttributespecifierseqContext * /*ctx*/) override { }

  virtual void enterAttributespecifier(CParser::AttributespecifierContext * /*ctx*/) override { }
  virtual void exitAttributespecifier(CParser::AttributespecifierContext * /*ctx*/) override { }

  virtual void enterAlignmentspecifier(CParser::AlignmentspecifierContext * /*ctx*/) override { }
  virtual void exitAlignmentspecifier(CParser::AlignmentspecifierContext * /*ctx*/) override { }

  virtual void enterAttributelist(CParser::AttributelistContext * /*ctx*/) override { }
  virtual void exitAttributelist(CParser::AttributelistContext * /*ctx*/) override { }

  virtual void enterAttribute(CParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(CParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttributetoken(CParser::AttributetokenContext * /*ctx*/) override { }
  virtual void exitAttributetoken(CParser::AttributetokenContext * /*ctx*/) override { }

  virtual void enterAttributescopedtoken(CParser::AttributescopedtokenContext * /*ctx*/) override { }
  virtual void exitAttributescopedtoken(CParser::AttributescopedtokenContext * /*ctx*/) override { }

  virtual void enterAttributenamespace(CParser::AttributenamespaceContext * /*ctx*/) override { }
  virtual void exitAttributenamespace(CParser::AttributenamespaceContext * /*ctx*/) override { }

  virtual void enterAttributeargumentclause(CParser::AttributeargumentclauseContext * /*ctx*/) override { }
  virtual void exitAttributeargumentclause(CParser::AttributeargumentclauseContext * /*ctx*/) override { }

  virtual void enterBalancedtokenseq(CParser::BalancedtokenseqContext * /*ctx*/) override { }
  virtual void exitBalancedtokenseq(CParser::BalancedtokenseqContext * /*ctx*/) override { }

  virtual void enterBalancedtoken(CParser::BalancedtokenContext * /*ctx*/) override { }
  virtual void exitBalancedtoken(CParser::BalancedtokenContext * /*ctx*/) override { }

  virtual void enterInitdeclaratorlist(CParser::InitdeclaratorlistContext * /*ctx*/) override { }
  virtual void exitInitdeclaratorlist(CParser::InitdeclaratorlistContext * /*ctx*/) override { }

  virtual void enterInitdeclarator(CParser::InitdeclaratorContext * /*ctx*/) override { }
  virtual void exitInitdeclarator(CParser::InitdeclaratorContext * /*ctx*/) override { }

  virtual void enterDeclarator(CParser::DeclaratorContext * /*ctx*/) override { }
  virtual void exitDeclarator(CParser::DeclaratorContext * /*ctx*/) override { }

  virtual void enterPtrdeclarator(CParser::PtrdeclaratorContext * /*ctx*/) override { }
  virtual void exitPtrdeclarator(CParser::PtrdeclaratorContext * /*ctx*/) override { }

  virtual void enterNoptrdeclarator(CParser::NoptrdeclaratorContext * /*ctx*/) override { }
  virtual void exitNoptrdeclarator(CParser::NoptrdeclaratorContext * /*ctx*/) override { }

  virtual void enterParametersandqualifiers(CParser::ParametersandqualifiersContext * /*ctx*/) override { }
  virtual void exitParametersandqualifiers(CParser::ParametersandqualifiersContext * /*ctx*/) override { }

  virtual void enterTrailingreturntype(CParser::TrailingreturntypeContext * /*ctx*/) override { }
  virtual void exitTrailingreturntype(CParser::TrailingreturntypeContext * /*ctx*/) override { }

  virtual void enterPtroperator(CParser::PtroperatorContext * /*ctx*/) override { }
  virtual void exitPtroperator(CParser::PtroperatorContext * /*ctx*/) override { }

  virtual void enterCvqualifierseq(CParser::CvqualifierseqContext * /*ctx*/) override { }
  virtual void exitCvqualifierseq(CParser::CvqualifierseqContext * /*ctx*/) override { }

  virtual void enterCvqualifier(CParser::CvqualifierContext * /*ctx*/) override { }
  virtual void exitCvqualifier(CParser::CvqualifierContext * /*ctx*/) override { }

  virtual void enterRefqualifier(CParser::RefqualifierContext * /*ctx*/) override { }
  virtual void exitRefqualifier(CParser::RefqualifierContext * /*ctx*/) override { }

  virtual void enterDeclaratorid(CParser::DeclaratoridContext * /*ctx*/) override { }
  virtual void exitDeclaratorid(CParser::DeclaratoridContext * /*ctx*/) override { }

  virtual void enterThetypeid(CParser::ThetypeidContext * /*ctx*/) override { }
  virtual void exitThetypeid(CParser::ThetypeidContext * /*ctx*/) override { }

  virtual void enterAbstractdeclarator(CParser::AbstractdeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractdeclarator(CParser::AbstractdeclaratorContext * /*ctx*/) override { }

  virtual void enterPtrabstractdeclarator(CParser::PtrabstractdeclaratorContext * /*ctx*/) override { }
  virtual void exitPtrabstractdeclarator(CParser::PtrabstractdeclaratorContext * /*ctx*/) override { }

  virtual void enterNoptrabstractdeclarator(CParser::NoptrabstractdeclaratorContext * /*ctx*/) override { }
  virtual void exitNoptrabstractdeclarator(CParser::NoptrabstractdeclaratorContext * /*ctx*/) override { }

  virtual void enterAbstractpackdeclarator(CParser::AbstractpackdeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractpackdeclarator(CParser::AbstractpackdeclaratorContext * /*ctx*/) override { }

  virtual void enterNoptrabstractpackdeclarator(CParser::NoptrabstractpackdeclaratorContext * /*ctx*/) override { }
  virtual void exitNoptrabstractpackdeclarator(CParser::NoptrabstractpackdeclaratorContext * /*ctx*/) override { }

  virtual void enterParameterdeclarationclause(CParser::ParameterdeclarationclauseContext * /*ctx*/) override { }
  virtual void exitParameterdeclarationclause(CParser::ParameterdeclarationclauseContext * /*ctx*/) override { }

  virtual void enterParameterdeclarationlist(CParser::ParameterdeclarationlistContext * /*ctx*/) override { }
  virtual void exitParameterdeclarationlist(CParser::ParameterdeclarationlistContext * /*ctx*/) override { }

  virtual void enterParameterdeclaration(CParser::ParameterdeclarationContext * /*ctx*/) override { }
  virtual void exitParameterdeclaration(CParser::ParameterdeclarationContext * /*ctx*/) override { }

  virtual void enterFunctiondefinition(CParser::FunctiondefinitionContext * /*ctx*/) override { }
  virtual void exitFunctiondefinition(CParser::FunctiondefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionbody(CParser::FunctionbodyContext * /*ctx*/) override { }
  virtual void exitFunctionbody(CParser::FunctionbodyContext * /*ctx*/) override { }

  virtual void enterInitializer(CParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(CParser::InitializerContext * /*ctx*/) override { }

  virtual void enterBraceorequalinitializer(CParser::BraceorequalinitializerContext * /*ctx*/) override { }
  virtual void exitBraceorequalinitializer(CParser::BraceorequalinitializerContext * /*ctx*/) override { }

  virtual void enterInitializerclause(CParser::InitializerclauseContext * /*ctx*/) override { }
  virtual void exitInitializerclause(CParser::InitializerclauseContext * /*ctx*/) override { }

  virtual void enterInitializerlist(CParser::InitializerlistContext * /*ctx*/) override { }
  virtual void exitInitializerlist(CParser::InitializerlistContext * /*ctx*/) override { }

  virtual void enterBracedinitlist(CParser::BracedinitlistContext * /*ctx*/) override { }
  virtual void exitBracedinitlist(CParser::BracedinitlistContext * /*ctx*/) override { }

  virtual void enterClassname(CParser::ClassnameContext * /*ctx*/) override { }
  virtual void exitClassname(CParser::ClassnameContext * /*ctx*/) override { }

  virtual void enterClassspecifier(CParser::ClassspecifierContext * /*ctx*/) override { }
  virtual void exitClassspecifier(CParser::ClassspecifierContext * /*ctx*/) override { }

  virtual void enterClasshead(CParser::ClassheadContext * /*ctx*/) override { }
  virtual void exitClasshead(CParser::ClassheadContext * /*ctx*/) override { }

  virtual void enterClassheadname(CParser::ClassheadnameContext * /*ctx*/) override { }
  virtual void exitClassheadname(CParser::ClassheadnameContext * /*ctx*/) override { }

  virtual void enterClassvirtspecifier(CParser::ClassvirtspecifierContext * /*ctx*/) override { }
  virtual void exitClassvirtspecifier(CParser::ClassvirtspecifierContext * /*ctx*/) override { }

  virtual void enterClasskey(CParser::ClasskeyContext * /*ctx*/) override { }
  virtual void exitClasskey(CParser::ClasskeyContext * /*ctx*/) override { }

  virtual void enterMemberspecification(CParser::MemberspecificationContext * /*ctx*/) override { }
  virtual void exitMemberspecification(CParser::MemberspecificationContext * /*ctx*/) override { }

  virtual void enterMemberdeclaration(CParser::MemberdeclarationContext * /*ctx*/) override { }
  virtual void exitMemberdeclaration(CParser::MemberdeclarationContext * /*ctx*/) override { }

  virtual void enterMemberdeclaratorlist(CParser::MemberdeclaratorlistContext * /*ctx*/) override { }
  virtual void exitMemberdeclaratorlist(CParser::MemberdeclaratorlistContext * /*ctx*/) override { }

  virtual void enterMemberdeclarator(CParser::MemberdeclaratorContext * /*ctx*/) override { }
  virtual void exitMemberdeclarator(CParser::MemberdeclaratorContext * /*ctx*/) override { }

  virtual void enterVirtspecifierseq(CParser::VirtspecifierseqContext * /*ctx*/) override { }
  virtual void exitVirtspecifierseq(CParser::VirtspecifierseqContext * /*ctx*/) override { }

  virtual void enterVirtspecifier(CParser::VirtspecifierContext * /*ctx*/) override { }
  virtual void exitVirtspecifier(CParser::VirtspecifierContext * /*ctx*/) override { }

  virtual void enterPurespecifier(CParser::PurespecifierContext * /*ctx*/) override { }
  virtual void exitPurespecifier(CParser::PurespecifierContext * /*ctx*/) override { }

  virtual void enterBaseclause(CParser::BaseclauseContext * /*ctx*/) override { }
  virtual void exitBaseclause(CParser::BaseclauseContext * /*ctx*/) override { }

  virtual void enterBasespecifierlist(CParser::BasespecifierlistContext * /*ctx*/) override { }
  virtual void exitBasespecifierlist(CParser::BasespecifierlistContext * /*ctx*/) override { }

  virtual void enterBasespecifier(CParser::BasespecifierContext * /*ctx*/) override { }
  virtual void exitBasespecifier(CParser::BasespecifierContext * /*ctx*/) override { }

  virtual void enterClassordecltype(CParser::ClassordecltypeContext * /*ctx*/) override { }
  virtual void exitClassordecltype(CParser::ClassordecltypeContext * /*ctx*/) override { }

  virtual void enterBasetypespecifier(CParser::BasetypespecifierContext * /*ctx*/) override { }
  virtual void exitBasetypespecifier(CParser::BasetypespecifierContext * /*ctx*/) override { }

  virtual void enterAccessspecifier(CParser::AccessspecifierContext * /*ctx*/) override { }
  virtual void exitAccessspecifier(CParser::AccessspecifierContext * /*ctx*/) override { }

  virtual void enterConversionfunctionid(CParser::ConversionfunctionidContext * /*ctx*/) override { }
  virtual void exitConversionfunctionid(CParser::ConversionfunctionidContext * /*ctx*/) override { }

  virtual void enterConversiontypeid(CParser::ConversiontypeidContext * /*ctx*/) override { }
  virtual void exitConversiontypeid(CParser::ConversiontypeidContext * /*ctx*/) override { }

  virtual void enterConversiondeclarator(CParser::ConversiondeclaratorContext * /*ctx*/) override { }
  virtual void exitConversiondeclarator(CParser::ConversiondeclaratorContext * /*ctx*/) override { }

  virtual void enterCtorinitializer(CParser::CtorinitializerContext * /*ctx*/) override { }
  virtual void exitCtorinitializer(CParser::CtorinitializerContext * /*ctx*/) override { }

  virtual void enterMeminitializerlist(CParser::MeminitializerlistContext * /*ctx*/) override { }
  virtual void exitMeminitializerlist(CParser::MeminitializerlistContext * /*ctx*/) override { }

  virtual void enterMeminitializer(CParser::MeminitializerContext * /*ctx*/) override { }
  virtual void exitMeminitializer(CParser::MeminitializerContext * /*ctx*/) override { }

  virtual void enterMeminitializerid(CParser::MeminitializeridContext * /*ctx*/) override { }
  virtual void exitMeminitializerid(CParser::MeminitializeridContext * /*ctx*/) override { }

  virtual void enterOperatorfunctionid(CParser::OperatorfunctionidContext * /*ctx*/) override { }
  virtual void exitOperatorfunctionid(CParser::OperatorfunctionidContext * /*ctx*/) override { }

  virtual void enterLiteraloperatorid(CParser::LiteraloperatoridContext * /*ctx*/) override { }
  virtual void exitLiteraloperatorid(CParser::LiteraloperatoridContext * /*ctx*/) override { }

  virtual void enterTemplatedeclaration(CParser::TemplatedeclarationContext * /*ctx*/) override { }
  virtual void exitTemplatedeclaration(CParser::TemplatedeclarationContext * /*ctx*/) override { }

  virtual void enterTemplateparameterlist(CParser::TemplateparameterlistContext * /*ctx*/) override { }
  virtual void exitTemplateparameterlist(CParser::TemplateparameterlistContext * /*ctx*/) override { }

  virtual void enterTemplateparameter(CParser::TemplateparameterContext * /*ctx*/) override { }
  virtual void exitTemplateparameter(CParser::TemplateparameterContext * /*ctx*/) override { }

  virtual void enterTypeparameter(CParser::TypeparameterContext * /*ctx*/) override { }
  virtual void exitTypeparameter(CParser::TypeparameterContext * /*ctx*/) override { }

  virtual void enterSimpletemplateid(CParser::SimpletemplateidContext * /*ctx*/) override { }
  virtual void exitSimpletemplateid(CParser::SimpletemplateidContext * /*ctx*/) override { }

  virtual void enterTemplateid(CParser::TemplateidContext * /*ctx*/) override { }
  virtual void exitTemplateid(CParser::TemplateidContext * /*ctx*/) override { }

  virtual void enterTemplatename(CParser::TemplatenameContext * /*ctx*/) override { }
  virtual void exitTemplatename(CParser::TemplatenameContext * /*ctx*/) override { }

  virtual void enterTemplateargumentlist(CParser::TemplateargumentlistContext * /*ctx*/) override { }
  virtual void exitTemplateargumentlist(CParser::TemplateargumentlistContext * /*ctx*/) override { }

  virtual void enterTemplateargument(CParser::TemplateargumentContext * /*ctx*/) override { }
  virtual void exitTemplateargument(CParser::TemplateargumentContext * /*ctx*/) override { }

  virtual void enterTypenamespecifier(CParser::TypenamespecifierContext * /*ctx*/) override { }
  virtual void exitTypenamespecifier(CParser::TypenamespecifierContext * /*ctx*/) override { }

  virtual void enterExplicitinstantiation(CParser::ExplicitinstantiationContext * /*ctx*/) override { }
  virtual void exitExplicitinstantiation(CParser::ExplicitinstantiationContext * /*ctx*/) override { }

  virtual void enterExplicitspecialization(CParser::ExplicitspecializationContext * /*ctx*/) override { }
  virtual void exitExplicitspecialization(CParser::ExplicitspecializationContext * /*ctx*/) override { }

  virtual void enterTryblock(CParser::TryblockContext * /*ctx*/) override { }
  virtual void exitTryblock(CParser::TryblockContext * /*ctx*/) override { }

  virtual void enterFunctiontryblock(CParser::FunctiontryblockContext * /*ctx*/) override { }
  virtual void exitFunctiontryblock(CParser::FunctiontryblockContext * /*ctx*/) override { }

  virtual void enterHandlerseq(CParser::HandlerseqContext * /*ctx*/) override { }
  virtual void exitHandlerseq(CParser::HandlerseqContext * /*ctx*/) override { }

  virtual void enterHandler(CParser::HandlerContext * /*ctx*/) override { }
  virtual void exitHandler(CParser::HandlerContext * /*ctx*/) override { }

  virtual void enterExceptiondeclaration(CParser::ExceptiondeclarationContext * /*ctx*/) override { }
  virtual void exitExceptiondeclaration(CParser::ExceptiondeclarationContext * /*ctx*/) override { }

  virtual void enterThrowexpression(CParser::ThrowexpressionContext * /*ctx*/) override { }
  virtual void exitThrowexpression(CParser::ThrowexpressionContext * /*ctx*/) override { }

  virtual void enterExceptionspecification(CParser::ExceptionspecificationContext * /*ctx*/) override { }
  virtual void exitExceptionspecification(CParser::ExceptionspecificationContext * /*ctx*/) override { }

  virtual void enterDynamicexceptionspecification(CParser::DynamicexceptionspecificationContext * /*ctx*/) override { }
  virtual void exitDynamicexceptionspecification(CParser::DynamicexceptionspecificationContext * /*ctx*/) override { }

  virtual void enterTypeidlist(CParser::TypeidlistContext * /*ctx*/) override { }
  virtual void exitTypeidlist(CParser::TypeidlistContext * /*ctx*/) override { }

  virtual void enterNoexceptspecification(CParser::NoexceptspecificationContext * /*ctx*/) override { }
  virtual void exitNoexceptspecification(CParser::NoexceptspecificationContext * /*ctx*/) override { }

  virtual void enterTheoperator(CParser::TheoperatorContext * /*ctx*/) override { }
  virtual void exitTheoperator(CParser::TheoperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(CParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(CParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBooleanliteral(CParser::BooleanliteralContext * /*ctx*/) override { }
  virtual void exitBooleanliteral(CParser::BooleanliteralContext * /*ctx*/) override { }

  virtual void enterPointerliteral(CParser::PointerliteralContext * /*ctx*/) override { }
  virtual void exitPointerliteral(CParser::PointerliteralContext * /*ctx*/) override { }

  virtual void enterUserdefinedliteral(CParser::UserdefinedliteralContext * /*ctx*/) override { }
  virtual void exitUserdefinedliteral(CParser::UserdefinedliteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

