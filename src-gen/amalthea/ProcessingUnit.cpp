// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessingUnit.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessingUnit.hpp"
#include <amalthea/HwModule.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/PowerDomain.hpp>
#include <amalthea/FrequencyDomain.hpp>
#include <amalthea/ProcessingUnitDefinition.hpp>
#include <amalthea/HwAccessElement.hpp>
#include <amalthea/Cache.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessingUnit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessingUnit::ProcessingUnit() : m_definition(0)
{

    m_accessElements.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwAccessElement_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessingUnit__accessElements(),
                    ::amalthea::AmaltheaPackage::HWACCESSELEMENT__SOURCE));
    m_caches.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Cache_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessingUnit__caches()));

    /*PROTECTED REGION ID(ProcessingUnitImpl__ProcessingUnitImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessingUnit::~ProcessingUnit()
{
}

// Attributes

// References

::amalthea::ProcessingUnitDefinition_ptr ProcessingUnit::getDefinition() const
{
    return m_definition;
}

void ProcessingUnit::setDefinition(
        ::amalthea::ProcessingUnitDefinition_ptr _definition)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::ProcessingUnitDefinition_ptr _old_definition = m_definition;
#endif
    m_definition = _definition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessingUnit__definition(), _old_definition, m_definition);
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::amalthea::HwAccessElement_ptr >& ProcessingUnit::getAccessElements() const
{
    return *m_accessElements;
}

::ecorecpp::mapping::EList< ::amalthea::HwAccessElement_ptr >& ProcessingUnit::getAccessElements()
{
    return *m_accessElements;
}

const ::ecorecpp::mapping::EList< ::amalthea::Cache_ptr >& ProcessingUnit::getCaches() const
{
    return *m_caches;
}

::ecorecpp::mapping::EList< ::amalthea::Cache_ptr >& ProcessingUnit::getCaches()
{
    return *m_caches;
}

