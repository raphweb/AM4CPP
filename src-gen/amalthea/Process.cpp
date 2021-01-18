// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Process.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Process.hpp"
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Process.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Process::Process() : m_activityGraph(0)
{

    m_stimuli.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Stimulus_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcess__stimuli()));

    /*PROTECTED REGION ID(ProcessImpl__ProcessImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Process::~Process()
{
    if (m_activityGraph)
    {
        m_activityGraph.reset();
    }
}

// Attributes

// References

::amalthea::ActivityGraph_ptr Process::getActivityGraph() const
{
    return m_activityGraph;
}

void Process::setActivityGraph(::amalthea::ActivityGraph_ptr _activityGraph)
{
    if (m_activityGraph)
        m_activityGraph->_setEContainer(Process_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getProcess__activityGraph());
    if (_activityGraph)
        _activityGraph->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getProcess__activityGraph());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ActivityGraph_ptr _old_activityGraph = m_activityGraph;
#endif
    m_activityGraph = _activityGraph;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcess__activityGraph(), _old_activityGraph, m_activityGraph);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::Stimulus_ptr >& Process::getStimuli() const
{
    return *m_stimuli;
}

::ecorecpp::mapping::EList< ::amalthea::Stimulus_ptr >& Process::getStimuli()
{
    return *m_stimuli;
}

