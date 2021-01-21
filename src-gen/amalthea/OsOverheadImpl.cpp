// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsOverheadImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OsOverhead.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/OsAPIOverhead.hpp>
#include <amalthea/OsISROverhead.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(OsOverheadImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void OsOverhead::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References
    if (m_apiOverhead)
    {
        m_apiOverhead->_initialize();
    }
    if (m_isrCategory1Overhead)
    {
        m_isrCategory1Overhead->_initialize();
    }
    if (m_isrCategory2Overhead)
    {
        m_isrCategory2Overhead->_initialize();
    }

    /*PROTECTED REGION ID(OsOverheadImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OsOverhead::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__APIOVERHEAD:
    {
        if (m_apiOverhead)
            _any = ::ecore::as < ::ecore::EObject > (m_apiOverhead);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY1OVERHEAD:
    {
        if (m_isrCategory1Overhead)
            _any = ::ecore::as < ::ecore::EObject > (m_isrCategory1Overhead);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY2OVERHEAD:
    {
        if (m_isrCategory2Overhead)
            _any = ::ecore::as < ::ecore::EObject > (m_isrCategory2Overhead);
        return _any;
    }
    }
    throw std::runtime_error("OsOverhead::eGet Error. FeatureID:" + _featureID);
}

void OsOverhead::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__APIOVERHEAD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::OsAPIOverhead_ptr _t1 =
                dynamic_cast< ::amalthea::OsAPIOverhead* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::OsAPIOverhead >(_t0);*/
        ::amalthea::OsOverhead::setApiOverhead(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY1OVERHEAD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::OsISROverhead_ptr _t1 =
                dynamic_cast< ::amalthea::OsISROverhead* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::OsISROverhead >(_t0);*/
        ::amalthea::OsOverhead::setIsrCategory1Overhead(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY2OVERHEAD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::OsISROverhead_ptr _t1 =
                dynamic_cast< ::amalthea::OsISROverhead* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::OsISROverhead >(_t0);*/
        ::amalthea::OsOverhead::setIsrCategory2Overhead(_t1);
        return;
    }
    }
    throw std::runtime_error("OsOverhead::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean OsOverhead::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IREFERABLE__UNIQUENAME:
    {
        return amalthea::IReferable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__APIOVERHEAD:
    {
        return (bool) m_apiOverhead;
    }
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY1OVERHEAD:
    {
        return (bool) m_isrCategory1Overhead;
    }
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY2OVERHEAD:
    {
        return (bool) m_isrCategory2Overhead;
    }
    }
    throw std::runtime_error(
            "OsOverhead::eIsSet Error. FeatureID:" + _featureID);
}

void OsOverhead::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "OsOverhead::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr OsOverhead::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getOsOverhead();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void OsOverhead::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__APIOVERHEAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY1OVERHEAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY2OVERHEAD:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void OsOverhead::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__APIOVERHEAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY1OVERHEAD:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSOVERHEAD__ISRCATEGORY2OVERHEAD:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

