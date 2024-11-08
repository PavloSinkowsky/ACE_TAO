/* -*- C++ -*- */

//=============================================================================
/**
 *  @file    cdr_op_cs.h
 *
 *  Concrete visitor for Enums generating code for the CDR operators
 *
 *  @author Aniruddha Gokhale
 */
//=============================================================================

#ifndef _BE_VISITOR_ENUM_CDR_OP_CS_H_
#define _BE_VISITOR_ENUM_CDR_OP_CS_H_

/**
 * @class be_visitor_enum_cdr_op_cs
 *
 * @brief be_visitor_enum_cdr_op_cs
 *
 * This is a concrete visitor for enum that generates the CDR operator
 * implementations
 */
class be_visitor_enum_cdr_op_cs : public be_visitor_decl
{

public:
  /// constructor
  be_visitor_enum_cdr_op_cs (be_visitor_context *ctx);

  /// destructor
  ~be_visitor_enum_cdr_op_cs () override = default;

  /// visit enum
  int visit_enum (be_enum *node) override;
};

#endif /* _BE_VISITOR_ENUM_CDR_OP_CS_H_ */
