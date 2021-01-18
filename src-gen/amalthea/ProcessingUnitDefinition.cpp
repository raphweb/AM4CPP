// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessingUnitDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessingUnitDefinition.hpp"
#include <amalthea/HwDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwFeature.hpp>
#include <amalthea/CoreClassifier.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessingUnitDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ProcessingUnitDefinition::ProcessingUnitDefinition()
{

    m_features.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwFeature_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessingUnitDefinition__features()));
    m_classifiers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::CoreClassifier_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getProcessingUnitDefinition__classifiers()));

    /*PROTECTED REGION ID(ProcessingUnitDefinitionImpl__ProcessingUnitDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ProcessingUnitDefinition::~ProcessingUnitDefinition()
{
}

// Attributes

::amalthea::PuType ProcessingUnitDefinition::getPuType() const
{
    return m_puType;
}

void ProcessingUnitDefinition::setPuType(::amalthea::PuType _puType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::PuType _old_puType = m_puType;
#endif
    m_puType = _puType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getProcessingUnitDefinition__puType(), _old_puType, m_puType);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::HwFeature_ptr >& ProcessingUnitDefinition::getFeatures() const
{
    return *m_features;
}

::ecorecpp::mapping::EList< ::amalthea::HwFeature_ptr >& ProcessingUnitDefinition::getFeatures()
{
    return *m_features;
}

const ::ecorecpp::mapping::EList< ::amalthea::CoreClassifier_ptr >& ProcessingUnitDefinition::getClassifiers() const
{
    return *m_classifiers;
}

::ecorecpp::mapping::EList< ::amalthea::CoreClassifier_ptr >& ProcessingUnitDefinition::getClassifiers()
{
    return *m_classifiers;
}

