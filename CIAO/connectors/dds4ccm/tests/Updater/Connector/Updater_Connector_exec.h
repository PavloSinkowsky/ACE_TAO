// -*- C++ -*-
// $Id$

#ifndef UPDATER_CONNECTOR_EXEC_H_
#define UPDATER_CONNECTOR_EXEC_H_

#include /**/ "ace/pre.h"

#include "Updater_ConnectorEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Updater_Connector_exec_export.h"

#include "dds4ccm/impl/ndds/DDS4CCM_Traits.h"
#include "dds4ccm/impl/ndds/DDS_State_Connector_T.h"

#include "Base/Updater_BaseSupport.h"

namespace CIAO_Updater_Updater_Connector_Impl
{
  // @from use of TestTopic as a parameter
  typedef CIAO::DDS4CCM::RTI::Type_Traits <
    TestTopic,
    TestTopicSeq,
    TestTopicTypeSupport,
    TestTopicDataWriter,
    TestTopicDataReader > TestTopic_DDS_Traits;

  typedef CIAO::DDS4CCM::Connector_Traits <
    ::CIAO_Updater_Updater_Connector_Impl::Updater_Connector_Exec,
    TestTopic_Seq,
    ::CCM_DDS::TestTopic::CCM_Writer,
    ::CCM_DDS::TestTopic::CCM_Updater,
    ::CCM_DDS::TestTopic::CCM_Getter,
    ::CCM_DDS::TestTopic::CCM_Reader,
    ::Updater::CCM_Updater_Connector_Context,
    ::CCM_DDS::TestTopic::Listener,
    ::CCM_DDS::TestTopic::StateListener,
    ::CCM_DDS::ConnectorStatusListener> TestTopic_Connector_Traits;

  class UPDATER_CONNECTOR_EXEC_Export Updater_Connector_exec_i :
    public DDS_State_Connector_T <TestTopic_DDS_Traits, TestTopic_Connector_Traits>
  {
  public:
    Updater_Connector_exec_i (void);
    virtual ~Updater_Connector_exec_i (void);
  };

  extern "C" UPDATER_CONNECTOR_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Updater_Updater_Connector_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */

