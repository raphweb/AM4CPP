// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataAgeTimeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DataAgeTime.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/DataAge.hpp>
#include <amalthea/Time.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DataAgeTimeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void DataAgeTime::_initialize()
{
    // Supertypes
    ::amalthea::DataAge::_initialize();

    // References
    if (m_minimumTime)
    {
        m_minimumTime->_initialize();
    }
    if (m_maximumTime)
    {
        m_maximumTime->_initialize();
    }

    /*PROTECTED REGION ID(DataAgeTimeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DataAgeTime::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MINIMUMTIME:
    {
        if (m_minimumTime)
            _any = ::ecore::as < ::ecore::EObject > (m_minimumTime);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MAXIMUMTIME:
    {
        if (m_maximumTime)
            _any = ::ecore::as < ::ecore::EObject > (m_maximumTime);
        return _any;
    }
    }
    throw std::runtime_error(
            "DataAgeTime::eGet Error. FeatureID:" + _featureID);
}

void DataAgeTime::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MINIMUMTIME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::DataAgeTime::setMinimumTime(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MAXIMUMTIME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::DataAgeTime::setMaximumTime(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "DataAgeTime::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean DataAgeTime::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MINIMUMTIME:
    {
        return (bool) m_minimumTime;
    }
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MAXIMUMTIME:
    {
        return (bool) m_maximumTime;
    }
    }
    throw std::runtime_error(
            "DataAgeTime::eIsSet Error. FeatureID:" + _featureID);
}

void DataAgeTime::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "DataAgeTime::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr DataAgeTime::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getDataAgeTime();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DataAgeTime::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MINIMUMTIME:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MAXIMUMTIME:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DataAgeTime::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MINIMUMTIME:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::DATAAGETIME__MAXIMUMTIME:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

