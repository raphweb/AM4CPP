// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Stimulus.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Stimulus.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Stimulus.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
Stimulus::Stimulus() : m_setModeValueList(0), m_executionCondition(0)
{

    m_affectedProcesses.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Process_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getStimulus__affectedProcesses()));

    /*PROTECTED REGION ID(StimulusImpl__StimulusImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Stimulus::~Stimulus()
{
    if (m_setModeValueList)
    {
        m_setModeValueList.reset();
    }
    if (m_executionCondition)
    {
        m_executionCondition.reset();
    }
}

// Attributes

// References

::amalthea::ModeValueList_ptr Stimulus::getSetModeValueList() const
{
    return m_setModeValueList;
}

void Stimulus::setSetModeValueList(
        ::amalthea::ModeValueList_ptr _setModeValueList)
{
    if (m_setModeValueList)
        m_setModeValueList->_setEContainer(Stimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getStimulus__setModeValueList());
    if (_setModeValueList)
        _setModeValueList->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getStimulus__setModeValueList());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeValueList_ptr _old_setModeValueList = m_setModeValueList;
#endif
    m_setModeValueList = _setModeValueList;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getStimulus__setModeValueList(), _old_setModeValueList, m_setModeValueList);
        eNotify(&notification);
    }
#endif
}

::amalthea::ModeConditionDisjunction_ptr Stimulus::getExecutionCondition() const
{
    return m_executionCondition;
}

void Stimulus::setExecutionCondition(
        ::amalthea::ModeConditionDisjunction_ptr _executionCondition)
{
    if (m_executionCondition)
        m_executionCondition->_setEContainer(Stimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getStimulus__executionCondition());
    if (_executionCondition)
        _executionCondition->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getStimulus__executionCondition());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ModeConditionDisjunction_ptr _old_executionCondition = m_executionCondition;
#endif
    m_executionCondition = _executionCondition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getStimulus__executionCondition(), _old_executionCondition, m_executionCondition);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::Process_ptr >& Stimulus::getAffectedProcesses() const
{
    return *m_affectedProcesses;
}

::ecorecpp::mapping::EList< ::amalthea::Process_ptr >& Stimulus::getAffectedProcesses()
{
    return *m_affectedProcesses;
}

