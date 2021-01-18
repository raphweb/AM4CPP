// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsISROverheadImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OsISROverhead.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Ticks.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(OsISROverheadImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void OsISROverhead::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_preExecutionOverhead)
    {
        m_preExecutionOverhead->_initialize();
    }
    if (m_postExecutionOverhead)
    {
        m_postExecutionOverhead->_initialize();
    }

    /*PROTECTED REGION ID(OsISROverheadImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OsISROverhead::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__PREEXECUTIONOVERHEAD:
    {
        if (m_preExecutionOverhead)
            _any = ::ecore::as < ::ecore::EObject > (m_preExecutionOverhead);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__POSTEXECUTIONOVERHEAD:
    {
        if (m_postExecutionOverhead)
            _any = ::ecore::as < ::ecore::EObject > (m_postExecutionOverhead);
        return _any;
    }
    }
    throw std::runtime_error(
            "OsISROverhead::eGet Error. FeatureID:" + _featureID);
}

void OsISROverhead::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__PREEXECUTIONOVERHEAD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsISROverhead::setPreExecutionOverhead(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__POSTEXECUTIONOVERHEAD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Ticks_ptr _t1 =
                dynamic_cast< ::amalthea::Ticks* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Ticks >(_t0);*/
        ::amalthea::OsISROverhead::setPostExecutionOverhead(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "OsISROverhead::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean OsISROverhead::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__PREEXECUTIONOVERHEAD:
    {
        return (bool) m_preExecutionOverhead;
    }
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__POSTEXECUTIONOVERHEAD:
    {
        return (bool) m_postExecutionOverhead;
    }
    }
    throw std::runtime_error(
            "OsISROverhead::eIsSet Error. FeatureID:" + _featureID);
}

void OsISROverhead::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "OsISROverhead::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr OsISROverhead::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getOsISROverhead();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void OsISROverhead::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__PREEXECUTIONOVERHEAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__POSTEXECUTIONOVERHEAD:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void OsISROverhead::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__PREEXECUTIONOVERHEAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSISROVERHEAD__POSTEXECUTIONOVERHEAD:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

