// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwModule.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwModule.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/PowerDomain.hpp>
#include <amalthea/FrequencyDomain.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HwModule.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HwModule::HwModule() : m_powerDomain(0), m_frequencyDomain(0)
{

    m_ports.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::HwPort_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHwModule__ports()));

    /*PROTECTED REGION ID(HwModuleImpl__HwModuleImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HwModule::~HwModule()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& HwModule::getPorts() const
{
    return *m_ports;
}

::ecorecpp::mapping::EList< ::amalthea::HwPort_ptr >& HwModule::getPorts()
{
    return *m_ports;
}

::amalthea::PowerDomain_ptr HwModule::getPowerDomain() const
{
    return m_powerDomain;
}

void HwModule::setPowerDomain(::amalthea::PowerDomain_ptr _powerDomain)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PowerDomain_ptr _old_powerDomain = m_powerDomain;
#endif
    m_powerDomain = _powerDomain;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwModule__powerDomain(), _old_powerDomain, m_powerDomain);
        eNotify(&notification);
    }
#endif
}

::amalthea::FrequencyDomain_ptr HwModule::getFrequencyDomain() const
{
    return m_frequencyDomain;
}

void HwModule::setFrequencyDomain(
        ::amalthea::FrequencyDomain_ptr _frequencyDomain)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::FrequencyDomain_ptr _old_frequencyDomain = m_frequencyDomain;
#endif
    m_frequencyDomain = _frequencyDomain;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwModule__frequencyDomain(), _old_frequencyDomain, m_frequencyDomain);
        eNotify(&notification);
    }
#endif
}

