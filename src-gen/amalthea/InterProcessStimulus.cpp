// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterProcessStimulus.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterProcessStimulus.hpp"
#include <amalthea/Stimulus.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Counter.hpp>
#include <amalthea/InterProcessTrigger.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(InterProcessStimulus.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
InterProcessStimulus::InterProcessStimulus() : m_counter(0)
{

    m_explicitTriggers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::InterProcessTrigger_ptr, -1, false, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getInterProcessStimulus__explicitTriggers()));

    /*PROTECTED REGION ID(InterProcessStimulusImpl__InterProcessStimulusImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

InterProcessStimulus::~InterProcessStimulus()
{
    if (m_counter)
    {
        m_counter.reset();
    }
}

// Attributes

// References

::amalthea::Counter_ptr InterProcessStimulus::getCounter() const
{
    return m_counter;
}

void InterProcessStimulus::setCounter(::amalthea::Counter_ptr _counter)
{
    if (m_counter)
        m_counter->_setEContainer(InterProcessStimulus_ptr(),
                ::amalthea::AmaltheaPackage::_instance()->getInterProcessStimulus__counter());
    if (_counter)
        _counter->_setEContainer(_this(),
                ::amalthea::AmaltheaPackage::_instance()->getInterProcessStimulus__counter());

#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::Counter_ptr _old_counter = m_counter;
#endif
    m_counter = _counter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getInterProcessStimulus__counter(), _old_counter, m_counter);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::InterProcessTrigger_ptr >& InterProcessStimulus::getExplicitTriggers() const
{
    return *m_explicitTriggers;
}

::ecorecpp::mapping::EList< ::amalthea::InterProcessTrigger_ptr >& InterProcessStimulus::getExplicitTriggers()
{
    return *m_explicitTriggers;
}

