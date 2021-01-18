// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunEntityCallStatisticImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunEntityCallStatistic.hpp"
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

/*PROTECTED REGION ID(RunEntityCallStatisticImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RunEntityCallStatistic::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_statistic)
    {
        m_statistic->_initialize();
    }

    /*PROTECTED REGION ID(RunEntityCallStatisticImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RunEntityCallStatistic::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::RUNENTITYCALLSTATISTIC__STATISTIC:
    {
        if (m_statistic)
            _any = ::ecore::as < ::ecore::EObject > (m_statistic);
        return _any;
    }
    }
    throw std::runtime_error(
            "RunEntityCallStatistic::eGet Error. FeatureID:" + _featureID);
}

void RunEntityCallStatistic::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNENTITYCALLSTATISTIC__STATISTIC:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::NumericStatistic_ptr _t1 =
                dynamic_cast< ::amalthea::NumericStatistic* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::NumericStatistic >(_t0);*/
        ::amalthea::RunEntityCallStatistic::setStatistic(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "RunEntityCallStatistic::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean RunEntityCallStatistic::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::RUNENTITYCALLSTATISTIC__STATISTIC:
    {
        return (bool) m_statistic;
    }
    }
    throw std::runtime_error(
            "RunEntityCallStatistic::eIsSet Error. FeatureID:" + _featureID);
}

void RunEntityCallStatistic::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RunEntityCallStatistic::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr RunEntityCallStatistic::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunEntityCallStatistic();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RunEntityCallStatistic::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNENTITYCALLSTATISTIC__STATISTIC:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RunEntityCallStatistic::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNENTITYCALLSTATISTIC__STATISTIC:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

