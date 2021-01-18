// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProbabilitySwitchEntry.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProbabilitySwitchEntry.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/IActivityGraphItemContainer.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProbabilitySwitchEntry.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProbabilitySwitchEntry::ProbabilitySwitchEntry() : m_probability(0.0)
{

    /*PROTECTED REGION ID(ProbabilitySwitchEntryImpl__ProbabilitySwitchEntryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProbabilitySwitchEntry::~ProbabilitySwitchEntry()
{
}

// Attributes

::ecore::EDouble ProbabilitySwitchEntry::getProbability() const
{
    return m_probability;
}

void ProbabilitySwitchEntry::setProbability(::ecore::EDouble _probability)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDouble _old_probability = m_probability;
#endif
    m_probability = _probability;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProbabilitySwitchEntry__probability(), _old_probability, m_probability);
        eNotify(&notification);
    }
#endif
}

// References

