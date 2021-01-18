// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwFeature.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwFeature.hpp"
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/HwFeatureCategory.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(HwFeature.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
HwFeature::HwFeature() : m_value(0.0), m_containingCategory(0)
{

    /*PROTECTED REGION ID(HwFeatureImpl__HwFeatureImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

HwFeature::~HwFeature()
{
}

// Attributes

::ecore::EDouble HwFeature::getValue() const
{
    return m_value;
}

void HwFeature::setValue(::ecore::EDouble _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EDouble _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwFeature__value(), _old_value, m_value);
        eNotify(&notification);
    }
#endif
}

// References

::amalthea::HwFeatureCategory_ptr HwFeature::getContainingCategory() const
{
    return m_containingCategory;
}

::amalthea::HwFeatureCategory_ptr HwFeature::basicgetContainingCategory()
{
    return m_containingCategory;
}

void HwFeature::basicsetContainingCategory(
        ::amalthea::HwFeatureCategory_ptr _containingCategory)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::amalthea::HwFeatureCategory_ptr _old_containingCategory = m_containingCategory;
#endif
    m_containingCategory = _containingCategory;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(::ecorecpp::notify::Notification::SET,
                _this(), ::amalthea::AmaltheaPackage::_instance()->getHwFeature__containingCategory(), _old_containingCategory, m_containingCategory);
        eNotify(&notification);
    }
#endif
}

void HwFeature::setContainingCategory(
        ::amalthea::HwFeatureCategory_ptr _containingCategory)
{
    if (_containingCategory != m_containingCategory)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_containingCategory != nullptr)
        {
            m_containingCategory->_inverseRemove(
                    ::amalthea::AmaltheaPackage::HWFEATURECATEGORY__FEATURES,
                    _this);
        }
        if (_containingCategory != nullptr)
        {
            _containingCategory->_inverseAdd(
                    ::amalthea::AmaltheaPackage::HWFEATURECATEGORY__FEATURES,
                    _this);
        }
        basicsetContainingCategory(_containingCategory);
    }
}

