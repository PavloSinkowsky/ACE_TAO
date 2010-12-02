// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:1584

#ifndef CIAO_THREECOMPA_CONN_I_SU9VRG_H_
#define CIAO_THREECOMPA_CONN_I_SU9VRG_H_

#include /**/ "ace/pre.h"


#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ThreeCompAC.h"

namespace CIAO_ThreeComp_AMI4CCM_MyFoo_Connector_AMI4CCM_Connector_Impl
{
  typedef ACE_Atomic_Op <TAO_SYNCH_MUTEX, CORBA::UShort > Atomic_UShort;

  class AMI4CCM_MyFooReplyHandler_i
    : public ::ThreeComp::AMI4CCM_MyFooReplyHandler
  {
  public:
    AMI4CCM_MyFooReplyHandler_i (Atomic_UShort  &nr_of_rec,
                                     Atomic_UShort  &nr_of_sent);
    virtual ~AMI4CCM_MyFooReplyHandler_i (void);

    virtual
    void foo (::CORBA::Long ami_return_val,
    const char * answer);

    virtual
    void foo_excep (::CCM_AMI::ExceptionHolder_ptr excep_holder);
  private:
    Atomic_UShort  &nr_of_rec_;
    Atomic_UShort  &nr_of_sent_;
  };
}

namespace CIAO_ThreeComp_AMI4CCM_State_Connector_AMI4CCM_Connector_Impl
{
  typedef ACE_Atomic_Op <TAO_SYNCH_MUTEX, CORBA::UShort > Atomic_UShort;

  class AMI4CCM_StateReplyHandler_i
    : public ::ThreeComp::AMI4CCM_StateReplyHandler
  {
  public:
    AMI4CCM_StateReplyHandler_i ( Atomic_UShort  &nr_of_rec,
                                      Atomic_UShort  &nr_of_sent);
    virtual ~AMI4CCM_StateReplyHandler_i (void);

    virtual
    void bar (::CORBA::Long ami_return_val,
    const char * answer);

    virtual
    void bar_excep (::CCM_AMI::ExceptionHolder_ptr excep_holder);
  private:
    Atomic_UShort  &nr_of_rec_;
    Atomic_UShort  &nr_of_sent_;
  };
}

// TAO_IDL - Generated from
// be/be_codegen.cpp:2151


#include /**/ "ace/post.h"

#endif /* ifndef */