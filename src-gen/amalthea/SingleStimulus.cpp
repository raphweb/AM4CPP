// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SingleStimulus.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SingleStimulus.hpp"
#include <amalthea/Stimulus.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SingleStimulus.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SingleStimulus::SingleStimulus() : m_occurrence(0)
{

    /*PROTECTED REGION ID(SingleStimulusImpl__SingleStimulusImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SingleStimulus::~SingleStimulus()
{
    if (m_occurrence)
    {
        m_occurrence.reset();
    }
}

// Attributes

// References

::amalthea::Time_ptr SingleStimulus::getOccurrence() const
{
    return m_occurrence;
}

void SingleStimulus::setOccurrence(::amalthea::Time_ptr _occurrence)
{
    if (m_occurrence)
        m_occurrence->_setEContainer(SingleStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getSingleStimulus__occurrence());
    if (_occurrence)
        _occurrence->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getSingleStimulus__occurrence());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Time_ptr _old_occurrence = m_occurrence;
#endif
    m_occurrence = _occurrence;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getSingleStimulus__occurrence(), _old_occurrence, m_occurrence);
        eNotify(&notification);
    }
#endif
}

