
// Generated from CC.g4 by ANTLR 4.7.2

#pragma once


#include "..\vcpkg-master\vcpkg-master\installed\x64-windows\include\antlr4-runtime.h"
#include "CParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CParser.
 */
class  CVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CParser.
   */
    virtual antlrcpp::Any visitTranslationunit(CParser::TranslationunitContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryexpression(CParser::PrimaryexpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdexpression(CParser::IdexpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnqualifiedid(CParser::UnqualifiedidContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedid(CParser::QualifiedidContext *context) = 0;

    virtual antlrcpp::Any visitNestednamespecifier(CParser::NestednamespecifierContext *context) = 0;

    virtual antlrcpp::Any visitLambdaexpression(CParser::LambdaexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaintroducer(CParser::LambdaintroducerContext *context) = 0;

    virtual antlrcpp::Any visitLambdacapture(CParser::LambdacaptureContext *context) = 0;

    virtual antlrcpp::Any visitCapturedefault(CParser::CapturedefaultContext *context) = 0;

    virtual antlrcpp::Any visitCapturelist(CParser::CapturelistContext *context) = 0;

    virtual antlrcpp::Any visitCapture(CParser::CaptureContext *context) = 0;

    virtual antlrcpp::Any visitSimplecapture(CParser::SimplecaptureContext *context) = 0;

    virtual antlrcpp::Any visitInitcapture(CParser::InitcaptureContext *context) = 0;

    virtual antlrcpp::Any visitLambdadeclarator(CParser::LambdadeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPostfixexpression(CParser::PostfixexpressionContext *context) = 0;

    virtual antlrcpp::Any visitTypeidofexpr(CParser::TypeidofexprContext *context) = 0;

    virtual antlrcpp::Any visitTypeidofthetypeid(CParser::TypeidofthetypeidContext *context) = 0;

    virtual antlrcpp::Any visitExpressionlist(CParser::ExpressionlistContext *context) = 0;

    virtual antlrcpp::Any visitPseudodestructorname(CParser::PseudodestructornameContext *context) = 0;

    virtual antlrcpp::Any visitUnaryexpression(CParser::UnaryexpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryoperator(CParser::UnaryoperatorContext *context) = 0;

    virtual antlrcpp::Any visitNewexpression(CParser::NewexpressionContext *context) = 0;

    virtual antlrcpp::Any visitNewplacement(CParser::NewplacementContext *context) = 0;

    virtual antlrcpp::Any visitNewtypeid(CParser::NewtypeidContext *context) = 0;

    virtual antlrcpp::Any visitNewdeclarator(CParser::NewdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrnewdeclarator(CParser::NoptrnewdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNewinitializer(CParser::NewinitializerContext *context) = 0;

    virtual antlrcpp::Any visitDeleteexpression(CParser::DeleteexpressionContext *context) = 0;

    virtual antlrcpp::Any visitNoexceptexpression(CParser::NoexceptexpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastexpression(CParser::CastexpressionContext *context) = 0;

    virtual antlrcpp::Any visitPmexpression(CParser::PmexpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeexpression(CParser::MultiplicativeexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveexpression(CParser::AdditiveexpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftexpression(CParser::ShiftexpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftoperator(CParser::ShiftoperatorContext *context) = 0;

    virtual antlrcpp::Any visitRelationalexpression(CParser::RelationalexpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityexpression(CParser::EqualityexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndexpression(CParser::AndexpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveorexpression(CParser::ExclusiveorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitInclusiveorexpression(CParser::InclusiveorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalandexpression(CParser::LogicalandexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalorexpression(CParser::LogicalorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalexpression(CParser::ConditionalexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentexpression(CParser::AssignmentexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentoperator(CParser::AssignmentoperatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConstantexpression(CParser::ConstantexpressionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(CParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitLabeledstatement(CParser::LabeledstatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionstatement(CParser::ExpressionstatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundstatement(CParser::CompoundstatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementseq(CParser::StatementseqContext *context) = 0;

    virtual antlrcpp::Any visitSelectionstatement(CParser::SelectionstatementContext *context) = 0;

    virtual antlrcpp::Any visitCondition(CParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitIterationstatement(CParser::IterationstatementContext *context) = 0;

    virtual antlrcpp::Any visitForinitstatement(CParser::ForinitstatementContext *context) = 0;

    virtual antlrcpp::Any visitForrangedeclaration(CParser::ForrangedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitForrangeinitializer(CParser::ForrangeinitializerContext *context) = 0;

    virtual antlrcpp::Any visitJumpstatement(CParser::JumpstatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationstatement(CParser::DeclarationstatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationseq(CParser::DeclarationseqContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(CParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitBlockdeclaration(CParser::BlockdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAliasdeclaration(CParser::AliasdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSimpledeclaration(CParser::SimpledeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatic_assertdeclaration(CParser::Static_assertdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEmptydeclaration(CParser::EmptydeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAttributedeclaration(CParser::AttributedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclspecifier(CParser::DeclspecifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclspecifierseq(CParser::DeclspecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitStorageclassspecifier(CParser::StorageclassspecifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionspecifier(CParser::FunctionspecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypedefname(CParser::TypedefnameContext *context) = 0;

    virtual antlrcpp::Any visitTypespecifier(CParser::TypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitTrailingtypespecifier(CParser::TrailingtypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypespecifierseq(CParser::TypespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitTrailingtypespecifierseq(CParser::TrailingtypespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitSimpletypespecifier(CParser::SimpletypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitThetypename(CParser::ThetypenameContext *context) = 0;

    virtual antlrcpp::Any visitDecltypespecifier(CParser::DecltypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitElaboratedtypespecifier(CParser::ElaboratedtypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumname(CParser::EnumnameContext *context) = 0;

    virtual antlrcpp::Any visitEnumspecifier(CParser::EnumspecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumhead(CParser::EnumheadContext *context) = 0;

    virtual antlrcpp::Any visitOpaqueenumdeclaration(CParser::OpaqueenumdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEnumkey(CParser::EnumkeyContext *context) = 0;

    virtual antlrcpp::Any visitEnumbase(CParser::EnumbaseContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorlist(CParser::EnumeratorlistContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratordefinition(CParser::EnumeratordefinitionContext *context) = 0;

    virtual antlrcpp::Any visitEnumerator(CParser::EnumeratorContext *context) = 0;

    virtual antlrcpp::Any visitNamespacename(CParser::NamespacenameContext *context) = 0;

    virtual antlrcpp::Any visitOriginalnamespacename(CParser::OriginalnamespacenameContext *context) = 0;

    virtual antlrcpp::Any visitNamespacedefinition(CParser::NamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNamednamespacedefinition(CParser::NamednamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitOriginalnamespacedefinition(CParser::OriginalnamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitExtensionnamespacedefinition(CParser::ExtensionnamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitUnnamednamespacedefinition(CParser::UnnamednamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNamespacebody(CParser::NamespacebodyContext *context) = 0;

    virtual antlrcpp::Any visitNamespacealias(CParser::NamespacealiasContext *context) = 0;

    virtual antlrcpp::Any visitNamespacealiasdefinition(CParser::NamespacealiasdefinitionContext *context) = 0;

    virtual antlrcpp::Any visitQualifiednamespacespecifier(CParser::QualifiednamespacespecifierContext *context) = 0;

    virtual antlrcpp::Any visitUsingdeclaration(CParser::UsingdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUsingdirective(CParser::UsingdirectiveContext *context) = 0;

    virtual antlrcpp::Any visitAsmdefinition(CParser::AsmdefinitionContext *context) = 0;

    virtual antlrcpp::Any visitLinkagespecification(CParser::LinkagespecificationContext *context) = 0;

    virtual antlrcpp::Any visitAttributespecifierseq(CParser::AttributespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitAttributespecifier(CParser::AttributespecifierContext *context) = 0;

    virtual antlrcpp::Any visitAlignmentspecifier(CParser::AlignmentspecifierContext *context) = 0;

    virtual antlrcpp::Any visitAttributelist(CParser::AttributelistContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(CParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitAttributetoken(CParser::AttributetokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributescopedtoken(CParser::AttributescopedtokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributenamespace(CParser::AttributenamespaceContext *context) = 0;

    virtual antlrcpp::Any visitAttributeargumentclause(CParser::AttributeargumentclauseContext *context) = 0;

    virtual antlrcpp::Any visitBalancedtokenseq(CParser::BalancedtokenseqContext *context) = 0;

    virtual antlrcpp::Any visitBalancedtoken(CParser::BalancedtokenContext *context) = 0;

    virtual antlrcpp::Any visitInitdeclaratorlist(CParser::InitdeclaratorlistContext *context) = 0;

    virtual antlrcpp::Any visitInitdeclarator(CParser::InitdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator(CParser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPtrdeclarator(CParser::PtrdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrdeclarator(CParser::NoptrdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParametersandqualifiers(CParser::ParametersandqualifiersContext *context) = 0;

    virtual antlrcpp::Any visitTrailingreturntype(CParser::TrailingreturntypeContext *context) = 0;

    virtual antlrcpp::Any visitPtroperator(CParser::PtroperatorContext *context) = 0;

    virtual antlrcpp::Any visitCvqualifierseq(CParser::CvqualifierseqContext *context) = 0;

    virtual antlrcpp::Any visitCvqualifier(CParser::CvqualifierContext *context) = 0;

    virtual antlrcpp::Any visitRefqualifier(CParser::RefqualifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclaratorid(CParser::DeclaratoridContext *context) = 0;

    virtual antlrcpp::Any visitThetypeid(CParser::ThetypeidContext *context) = 0;

    virtual antlrcpp::Any visitAbstractdeclarator(CParser::AbstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPtrabstractdeclarator(CParser::PtrabstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrabstractdeclarator(CParser::NoptrabstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitAbstractpackdeclarator(CParser::AbstractpackdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrabstractpackdeclarator(CParser::NoptrabstractpackdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclarationclause(CParser::ParameterdeclarationclauseContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclarationlist(CParser::ParameterdeclarationlistContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclaration(CParser::ParameterdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctiondefinition(CParser::FunctiondefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionbody(CParser::FunctionbodyContext *context) = 0;

    virtual antlrcpp::Any visitInitializer(CParser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitBraceorequalinitializer(CParser::BraceorequalinitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializerclause(CParser::InitializerclauseContext *context) = 0;

    virtual antlrcpp::Any visitInitializerlist(CParser::InitializerlistContext *context) = 0;

    virtual antlrcpp::Any visitBracedinitlist(CParser::BracedinitlistContext *context) = 0;

    virtual antlrcpp::Any visitClassname(CParser::ClassnameContext *context) = 0;

    virtual antlrcpp::Any visitClassspecifier(CParser::ClassspecifierContext *context) = 0;

    virtual antlrcpp::Any visitClasshead(CParser::ClassheadContext *context) = 0;

    virtual antlrcpp::Any visitClassheadname(CParser::ClassheadnameContext *context) = 0;

    virtual antlrcpp::Any visitClassvirtspecifier(CParser::ClassvirtspecifierContext *context) = 0;

    virtual antlrcpp::Any visitClasskey(CParser::ClasskeyContext *context) = 0;

    virtual antlrcpp::Any visitMemberspecification(CParser::MemberspecificationContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclaration(CParser::MemberdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclaratorlist(CParser::MemberdeclaratorlistContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclarator(CParser::MemberdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitVirtspecifierseq(CParser::VirtspecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitVirtspecifier(CParser::VirtspecifierContext *context) = 0;

    virtual antlrcpp::Any visitPurespecifier(CParser::PurespecifierContext *context) = 0;

    virtual antlrcpp::Any visitBaseclause(CParser::BaseclauseContext *context) = 0;

    virtual antlrcpp::Any visitBasespecifierlist(CParser::BasespecifierlistContext *context) = 0;

    virtual antlrcpp::Any visitBasespecifier(CParser::BasespecifierContext *context) = 0;

    virtual antlrcpp::Any visitClassordecltype(CParser::ClassordecltypeContext *context) = 0;

    virtual antlrcpp::Any visitBasetypespecifier(CParser::BasetypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitAccessspecifier(CParser::AccessspecifierContext *context) = 0;

    virtual antlrcpp::Any visitConversionfunctionid(CParser::ConversionfunctionidContext *context) = 0;

    virtual antlrcpp::Any visitConversiontypeid(CParser::ConversiontypeidContext *context) = 0;

    virtual antlrcpp::Any visitConversiondeclarator(CParser::ConversiondeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitCtorinitializer(CParser::CtorinitializerContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializerlist(CParser::MeminitializerlistContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializer(CParser::MeminitializerContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializerid(CParser::MeminitializeridContext *context) = 0;

    virtual antlrcpp::Any visitOperatorfunctionid(CParser::OperatorfunctionidContext *context) = 0;

    virtual antlrcpp::Any visitLiteraloperatorid(CParser::LiteraloperatoridContext *context) = 0;

    virtual antlrcpp::Any visitTemplatedeclaration(CParser::TemplatedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTemplateparameterlist(CParser::TemplateparameterlistContext *context) = 0;

    virtual antlrcpp::Any visitTemplateparameter(CParser::TemplateparameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeparameter(CParser::TypeparameterContext *context) = 0;

    virtual antlrcpp::Any visitSimpletemplateid(CParser::SimpletemplateidContext *context) = 0;

    virtual antlrcpp::Any visitTemplateid(CParser::TemplateidContext *context) = 0;

    virtual antlrcpp::Any visitTemplatename(CParser::TemplatenameContext *context) = 0;

    virtual antlrcpp::Any visitTemplateargumentlist(CParser::TemplateargumentlistContext *context) = 0;

    virtual antlrcpp::Any visitTemplateargument(CParser::TemplateargumentContext *context) = 0;

    virtual antlrcpp::Any visitTypenamespecifier(CParser::TypenamespecifierContext *context) = 0;

    virtual antlrcpp::Any visitExplicitinstantiation(CParser::ExplicitinstantiationContext *context) = 0;

    virtual antlrcpp::Any visitExplicitspecialization(CParser::ExplicitspecializationContext *context) = 0;

    virtual antlrcpp::Any visitTryblock(CParser::TryblockContext *context) = 0;

    virtual antlrcpp::Any visitFunctiontryblock(CParser::FunctiontryblockContext *context) = 0;

    virtual antlrcpp::Any visitHandlerseq(CParser::HandlerseqContext *context) = 0;

    virtual antlrcpp::Any visitHandler(CParser::HandlerContext *context) = 0;

    virtual antlrcpp::Any visitExceptiondeclaration(CParser::ExceptiondeclarationContext *context) = 0;

    virtual antlrcpp::Any visitThrowexpression(CParser::ThrowexpressionContext *context) = 0;

    virtual antlrcpp::Any visitExceptionspecification(CParser::ExceptionspecificationContext *context) = 0;

    virtual antlrcpp::Any visitDynamicexceptionspecification(CParser::DynamicexceptionspecificationContext *context) = 0;

    virtual antlrcpp::Any visitTypeidlist(CParser::TypeidlistContext *context) = 0;

    virtual antlrcpp::Any visitNoexceptspecification(CParser::NoexceptspecificationContext *context) = 0;

    virtual antlrcpp::Any visitTheoperator(CParser::TheoperatorContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(CParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanliteral(CParser::BooleanliteralContext *context) = 0;

    virtual antlrcpp::Any visitPointerliteral(CParser::PointerliteralContext *context) = 0;

    virtual antlrcpp::Any visitUserdefinedliteral(CParser::UserdefinedliteralContext *context) = 0;


};

