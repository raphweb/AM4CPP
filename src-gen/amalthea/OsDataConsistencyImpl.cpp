// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsDataConsistencyImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OsDataConsistency.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/DataStability.hpp>
#include <amalthea/NonAtomicDataCoherency.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(OsDataConsistencyImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void OsDataConsistency::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_dataStability)
    {
        m_dataStability->_initialize();
    }
    if (m_nonAtomicDataCoherency)
    {
        m_nonAtomicDataCoherency->_initialize();
    }

    /*PROTECTED REGION ID(OsDataConsistencyImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OsDataConsistency::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__MODE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::OsDataConsistencyMode
                > ::toAny(_any, m_mode);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__DATASTABILITY:
    {
        if (m_dataStability)
            _any = ::ecore::as < ::ecore::EObject > (m_dataStability);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__NONATOMICDATACOHERENCY:
    {
        if (m_nonAtomicDataCoherency)
            _any = ::ecore::as < ::ecore::EObject > (m_nonAtomicDataCoherency);
        return _any;
    }
    }
    throw std::runtime_error(
            "OsDataConsistency::eGet Error. FeatureID:" + _featureID);
}

void OsDataConsistency::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__MODE:
    {
        ::amalthea::OsDataConsistencyMode _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::OsDataConsistencyMode
                > ::fromAny(_newValue, _t0);
        ::amalthea::OsDataConsistency::setMode(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__DATASTABILITY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataStability_ptr _t1 =
                dynamic_cast< ::amalthea::DataStability* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataStability >(_t0);*/
        ::amalthea::OsDataConsistency::setDataStability(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__NONATOMICDATACOHERENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::NonAtomicDataCoherency_ptr _t1 =
                dynamic_cast< ::amalthea::NonAtomicDataCoherency* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::NonAtomicDataCoherency >(_t0);*/
        ::amalthea::OsDataConsistency::setNonAtomicDataCoherency(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "OsDataConsistency::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean OsDataConsistency::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__MODE:
    {
        return ::ecorecpp::mapping::set_traits
                < ::amalthea::OsDataConsistencyMode > ::is_set(m_mode);
    }
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__DATASTABILITY:
    {
        return (bool) m_dataStability;
    }
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__NONATOMICDATACOHERENCY:
    {
        return (bool) m_nonAtomicDataCoherency;
    }
    }
    throw std::runtime_error(
            "OsDataConsistency::eIsSet Error. FeatureID:" + _featureID);
}

void OsDataConsistency::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "OsDataConsistency::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr OsDataConsistency::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getOsDataConsistency();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void OsDataConsistency::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__DATASTABILITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__NONATOMICDATACOHERENCY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void OsDataConsistency::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__DATASTABILITY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSDATACONSISTENCY__NONATOMICDATACOHERENCY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

