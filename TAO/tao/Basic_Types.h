// -*- C++ -*-

//=============================================================================
/**
 *  @file    Basic_Types.h
 *
 *  @authors Jeff Parsons
 */
//=============================================================================


#ifndef TAO_BASIC_TYPES_H
#define TAO_BASIC_TYPES_H

#include /**/ "ace/pre.h"
#include "ace/CDR_Base.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/orbconf.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  template <typename charT> class String_var;
  template <typename charT> class String_out;
}

namespace CORBA
{
  /**
   * @name CORBA Primitive Types
   *
   * Declarations of all CORBA primitive types.
   */
  //@{
  typedef ACE_CDR::Boolean Boolean;
  typedef Boolean &Boolean_out;

  typedef ACE_CDR::Octet Octet;
  typedef Octet  &Octet_out;

  typedef ACE_CDR::Short Short;
  typedef Short &Short_out;

  typedef ACE_CDR::UShort UShort;
  typedef UShort &UShort_out;

  typedef ACE_CDR::Long Long;
  typedef Long &Long_out;

  typedef ACE_CDR::ULong ULong;
  typedef ULong &ULong_out;

  typedef ACE_CDR::LongLong LongLong;
  typedef LongLong &LongLong_out;

  typedef ACE_CDR::ULongLong ULongLong;
  typedef ULongLong &ULongLong_out;

  typedef ACE_CDR::Float Float;
  typedef Float &Float_out;

  typedef ACE_CDR::Double Double;
  typedef Double &Double_out;

  typedef ACE_CDR::LongDouble LongDouble;
  typedef LongDouble &LongDouble_out;

  typedef ACE_CDR::Char Char;
  typedef Char &Char_out;

  typedef ACE_CDR::WChar WChar;
  typedef WChar &WChar_out;

  typedef ACE_CDR::Int8 Int8;
  typedef Int8 &Int8_out;

  typedef ACE_CDR::UInt8 UInt8;
  typedef UInt8 &UInt8_out;

  typedef ACE_CDR::Int16 Int16;
  typedef Int16 &Int16_out;

  typedef ACE_CDR::UInt16 UInt16;
  typedef UInt16 &UInt16_out;

  typedef ACE_CDR::Int32 Int32;
  typedef Int32 &Int32_out;

  typedef ACE_CDR::UInt32 UInt32;
  typedef UInt32 &UInt32_out;

  typedef ACE_CDR::Int64 Int64;
  typedef Int64 &Int64_out;

  typedef ACE_CDR::UInt64 UInt64;
  typedef UInt64 &UInt64_out;
  //@}

  typedef TAO::String_var<CORBA::Char> String_var;
  typedef TAO::String_out<CORBA::Char> String_out;
  typedef TAO::String_var<CORBA::WChar> WString_var;
  typedef TAO::String_out<CORBA::WChar> WString_out;

  class TypeCode;
  typedef TypeCode *TypeCode_ptr;

  class Any;
}

class TAO_InputCDR;
class TAO_OutputCDR;

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* TAO_BASIC_TYPES_H */
