
// Generated from CC.g4 by ANTLR 4.7.2

#pragma once


#include "..\vcpkg-master\vcpkg-master\installed\x64-windows\include\antlr4-runtime.h"
#include "CVisitor.h"


/**
 * This class provides an empty implementation of CVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CBaseVisitor : public CVisitor {
public:

  virtual antlrcpp::Any visitTranslationunit(CParser::TranslationunitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryexpression(CParser::PrimaryexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdexpression(CParser::IdexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnqualifiedid(CParser::UnqualifiedidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedid(CParser::QualifiedidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestednamespecifier(CParser::NestednamespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaexpression(CParser::LambdaexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaintroducer(CParser::LambdaintroducerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdacapture(CParser::LambdacaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCapturedefault(CParser::CapturedefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCapturelist(CParser::CapturelistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCapture(CParser::CaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimplecapture(CParser::SimplecaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitcapture(CParser::InitcaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdadeclarator(CParser::LambdadeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixexpression(CParser::PostfixexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeidofexpr(CParser::TypeidofexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeidofthetypeid(CParser::TypeidofthetypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionlist(CParser::ExpressionlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPseudodestructorname(CParser::PseudodestructornameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryexpression(CParser::UnaryexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryoperator(CParser::UnaryoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewexpression(CParser::NewexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewplacement(CParser::NewplacementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewtypeid(CParser::NewtypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewdeclarator(CParser::NewdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoptrnewdeclarator(CParser::NoptrnewdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewinitializer(CParser::NewinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteexpression(CParser::DeleteexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoexceptexpression(CParser::NoexceptexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastexpression(CParser::CastexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPmexpression(CParser::PmexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeexpression(CParser::MultiplicativeexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditiveexpression(CParser::AdditiveexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftexpression(CParser::ShiftexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftoperator(CParser::ShiftoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelationalexpression(CParser::RelationalexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityexpression(CParser::EqualityexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndexpression(CParser::AndexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExclusiveorexpression(CParser::ExclusiveorexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclusiveorexpression(CParser::InclusiveorexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalandexpression(CParser::LogicalandexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalorexpression(CParser::LogicalorexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalexpression(CParser::ConditionalexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentexpression(CParser::AssignmentexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentoperator(CParser::AssignmentoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(CParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantexpression(CParser::ConstantexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(CParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledstatement(CParser::LabeledstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionstatement(CParser::ExpressionstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundstatement(CParser::CompoundstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementseq(CParser::StatementseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectionstatement(CParser::SelectionstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(CParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterationstatement(CParser::IterationstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForinitstatement(CParser::ForinitstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForrangedeclaration(CParser::ForrangedeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForrangeinitializer(CParser::ForrangeinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJumpstatement(CParser::JumpstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationstatement(CParser::DeclarationstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationseq(CParser::DeclarationseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(CParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockdeclaration(CParser::BlockdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAliasdeclaration(CParser::AliasdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpledeclaration(CParser::SimpledeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatic_assertdeclaration(CParser::Static_assertdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptydeclaration(CParser::EmptydeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributedeclaration(CParser::AttributedeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclspecifier(CParser::DeclspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclspecifierseq(CParser::DeclspecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorageclassspecifier(CParser::StorageclassspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionspecifier(CParser::FunctionspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypedefname(CParser::TypedefnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypespecifier(CParser::TypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailingtypespecifier(CParser::TrailingtypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypespecifierseq(CParser::TypespecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailingtypespecifierseq(CParser::TrailingtypespecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpletypespecifier(CParser::SimpletypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThetypename(CParser::ThetypenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecltypespecifier(CParser::DecltypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElaboratedtypespecifier(CParser::ElaboratedtypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumname(CParser::EnumnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumspecifier(CParser::EnumspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumhead(CParser::EnumheadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpaqueenumdeclaration(CParser::OpaqueenumdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumkey(CParser::EnumkeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumbase(CParser::EnumbaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumeratorlist(CParser::EnumeratorlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumeratordefinition(CParser::EnumeratordefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumerator(CParser::EnumeratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacename(CParser::NamespacenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOriginalnamespacename(CParser::OriginalnamespacenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacedefinition(CParser::NamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamednamespacedefinition(CParser::NamednamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOriginalnamespacedefinition(CParser::OriginalnamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtensionnamespacedefinition(CParser::ExtensionnamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnnamednamespacedefinition(CParser::UnnamednamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacebody(CParser::NamespacebodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacealias(CParser::NamespacealiasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespacealiasdefinition(CParser::NamespacealiasdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiednamespacespecifier(CParser::QualifiednamespacespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsingdeclaration(CParser::UsingdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsingdirective(CParser::UsingdirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAsmdefinition(CParser::AsmdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLinkagespecification(CParser::LinkagespecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributespecifierseq(CParser::AttributespecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributespecifier(CParser::AttributespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlignmentspecifier(CParser::AlignmentspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributelist(CParser::AttributelistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute(CParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributetoken(CParser::AttributetokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributescopedtoken(CParser::AttributescopedtokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributenamespace(CParser::AttributenamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeargumentclause(CParser::AttributeargumentclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBalancedtokenseq(CParser::BalancedtokenseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBalancedtoken(CParser::BalancedtokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitdeclaratorlist(CParser::InitdeclaratorlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitdeclarator(CParser::InitdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarator(CParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtrdeclarator(CParser::PtrdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoptrdeclarator(CParser::NoptrdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametersandqualifiers(CParser::ParametersandqualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailingreturntype(CParser::TrailingreturntypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtroperator(CParser::PtroperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCvqualifierseq(CParser::CvqualifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCvqualifier(CParser::CvqualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRefqualifier(CParser::RefqualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaratorid(CParser::DeclaratoridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThetypeid(CParser::ThetypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbstractdeclarator(CParser::AbstractdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtrabstractdeclarator(CParser::PtrabstractdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoptrabstractdeclarator(CParser::NoptrabstractdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbstractpackdeclarator(CParser::AbstractpackdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoptrabstractpackdeclarator(CParser::NoptrabstractpackdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterdeclarationclause(CParser::ParameterdeclarationclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterdeclarationlist(CParser::ParameterdeclarationlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterdeclaration(CParser::ParameterdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctiondefinition(CParser::FunctiondefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionbody(CParser::FunctionbodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer(CParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBraceorequalinitializer(CParser::BraceorequalinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerclause(CParser::InitializerclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerlist(CParser::InitializerlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracedinitlist(CParser::BracedinitlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassname(CParser::ClassnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassspecifier(CParser::ClassspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClasshead(CParser::ClassheadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassheadname(CParser::ClassheadnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassvirtspecifier(CParser::ClassvirtspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClasskey(CParser::ClasskeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberspecification(CParser::MemberspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberdeclaration(CParser::MemberdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberdeclaratorlist(CParser::MemberdeclaratorlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberdeclarator(CParser::MemberdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVirtspecifierseq(CParser::VirtspecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVirtspecifier(CParser::VirtspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPurespecifier(CParser::PurespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBaseclause(CParser::BaseclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasespecifierlist(CParser::BasespecifierlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasespecifier(CParser::BasespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassordecltype(CParser::ClassordecltypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasetypespecifier(CParser::BasetypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccessspecifier(CParser::AccessspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversionfunctionid(CParser::ConversionfunctionidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversiontypeid(CParser::ConversiontypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversiondeclarator(CParser::ConversiondeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCtorinitializer(CParser::CtorinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeminitializerlist(CParser::MeminitializerlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeminitializer(CParser::MeminitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeminitializerid(CParser::MeminitializeridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperatorfunctionid(CParser::OperatorfunctionidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteraloperatorid(CParser::LiteraloperatoridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplatedeclaration(CParser::TemplatedeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateparameterlist(CParser::TemplateparameterlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateparameter(CParser::TemplateparameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeparameter(CParser::TypeparameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpletemplateid(CParser::SimpletemplateidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateid(CParser::TemplateidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplatename(CParser::TemplatenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateargumentlist(CParser::TemplateargumentlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateargument(CParser::TemplateargumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypenamespecifier(CParser::TypenamespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitinstantiation(CParser::ExplicitinstantiationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitspecialization(CParser::ExplicitspecializationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTryblock(CParser::TryblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctiontryblock(CParser::FunctiontryblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerseq(CParser::HandlerseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler(CParser::HandlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExceptiondeclaration(CParser::ExceptiondeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThrowexpression(CParser::ThrowexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExceptionspecification(CParser::ExceptionspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDynamicexceptionspecification(CParser::DynamicexceptionspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeidlist(CParser::TypeidlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoexceptspecification(CParser::NoexceptspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTheoperator(CParser::TheoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(CParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanliteral(CParser::BooleanliteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerliteral(CParser::PointerliteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserdefinedliteral(CParser::UserdefinedliteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

