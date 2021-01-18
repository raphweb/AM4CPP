// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwFeatureCategory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwFeatureCategory.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/IDescription.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/HwFeature.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HwFeatureCategory.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HwFeatureCategory::HwFeatureCategory()
{

    m_features.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::HwFeature_ptr, -1, true, true >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getHwFeatureCategory__features(),
                    ::amalthea::AmaltheaPackage::HWFEATURE__CONTAININGCATEGORY));

    /*PROTECTED REGION ID(HwFeatureCategoryImpl__HwFeatureCategoryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HwFeatureCategory::~HwFeatureCategory()
{
}

// Attributes

::amalthea::HwFeatureType HwFeatureCategory::getFeatureType() const
{
    return m_featureType;
}

void HwFeatureCategory::setFeatureType(::amalthea::HwFeatureType _featureType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::HwFeatureType _old_featureType = m_featureType;
#endif
    m_featureType = _featureType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwFeatureCategory__featureType(), _old_featureType, m_featureType);
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::amalthea::HwFeature_ptr >& HwFeatureCategory::getFeatures() const
{
    return *m_features;
}

::ecorecpp::mapping::EList< ::amalthea::HwFeature_ptr >& HwFeatureCategory::getFeatures()
{
    return *m_features;
}

