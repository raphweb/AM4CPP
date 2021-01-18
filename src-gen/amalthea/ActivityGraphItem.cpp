// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ActivityGraphItem.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ActivityGraphItem.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ActivityGraphItem.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ActivityGraphItem::ActivityGraphItem() : m_containingProcess(0), m_containingRunnable(
        0), m_containingActivityGraph(0)
{

    /*PROTECTED REGION ID(ActivityGraphItemImpl__ActivityGraphItemImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ActivityGraphItem::~ActivityGraphItem()
{
}

// Attributes

// References

::amalthea::Process_ptr ActivityGraphItem::getContainingProcess() const
{
    return m_containingProcess;
}

void ActivityGraphItem::setContainingProcess(
        ::amalthea::Process_ptr _containingProcess)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Process_ptr _old_containingProcess = m_containingProcess;
#endif
    m_containingProcess = _containingProcess;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getActivityGraphItem__containingProcess(), _old_containingProcess, m_containingProcess);
        eNotify(&notification);
    }
#endif
}

::amalthea::Runnable_ptr ActivityGraphItem::getContainingRunnable() const
{
    return m_containingRunnable;
}

void ActivityGraphItem::setContainingRunnable(
        ::amalthea::Runnable_ptr _containingRunnable)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Runnable_ptr _old_containingRunnable = m_containingRunnable;
#endif
    m_containingRunnable = _containingRunnable;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getActivityGraphItem__containingRunnable(), _old_containingRunnable, m_containingRunnable);
        eNotify(&notification);
    }
#endif
}

::amalthea::ActivityGraph_ptr ActivityGraphItem::getContainingActivityGraph() const
{
    return m_containingActivityGraph;
}

void ActivityGraphItem::setContainingActivityGraph(
        ::amalthea::ActivityGraph_ptr _containingActivityGraph)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ActivityGraph_ptr _old_containingActivityGraph = m_containingActivityGraph;
#endif
    m_containingActivityGraph = _containingActivityGraph;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getActivityGraphItem__containingActivityGraph(), _old_containingActivityGraph, m_containingActivityGraph);
        eNotify(&notification);
    }
#endif
}

