// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelAccessStatisticImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "LabelAccessStatistic.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/NumericStatistic.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(LabelAccessStatisticImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void LabelAccessStatistic::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_value)
    {
        m_value->_initialize();
    }
    if (m_cacheMisses)
    {
        m_cacheMisses->_initialize();
    }

    /*PROTECTED REGION ID(LabelAccessStatisticImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject LabelAccessStatistic::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__CACHEMISSES:
    {
        if (m_cacheMisses)
            _any = ::ecore::as < ::ecore::EObject > (m_cacheMisses);
        return _any;
    }
    }
    throw std::runtime_error(
            "LabelAccessStatistic::eGet Error. FeatureID:" + _featureID);
}

void LabelAccessStatistic::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::NumericStatistic_ptr _t1 =
                dynamic_cast< ::amalthea::NumericStatistic* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::NumericStatistic >(_t0);*/
        ::amalthea::LabelAccessStatistic::setValue(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__CACHEMISSES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::NumericStatistic_ptr _t1 =
                dynamic_cast< ::amalthea::NumericStatistic* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::NumericStatistic >(_t0);*/
        ::amalthea::LabelAccessStatistic::setCacheMisses(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "LabelAccessStatistic::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean LabelAccessStatistic::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__VALUE:
    {
        return (bool) m_value;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__CACHEMISSES:
    {
        return (bool) m_cacheMisses;
    }
    }
    throw std::runtime_error(
            "LabelAccessStatistic::eIsSet Error. FeatureID:" + _featureID);
}

void LabelAccessStatistic::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "LabelAccessStatistic::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr LabelAccessStatistic::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getLabelAccessStatistic();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void LabelAccessStatistic::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__VALUE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__CACHEMISSES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void LabelAccessStatistic::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__VALUE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESSSTATISTIC__CACHEMISSES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

