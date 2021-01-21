// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/NeedEntryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "NeedEntry.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(NeedEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void NeedEntry::_initialize()
{
    // Supertypes

    // References
    if (m_value)
    {
        m_value->_initialize();
    }

    /*PROTECTED REGION ID(NeedEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject NeedEntry::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NEEDENTRY__KEY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_key);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::NEEDENTRY__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
        return _any;
    }
    }
    throw std::runtime_error("NeedEntry::eGet Error. FeatureID:" + _featureID);
}

void NeedEntry::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NEEDENTRY__KEY:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::amalthea::NeedEntry::setKey(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::NEEDENTRY__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::NeedEntry::setValue(_t1);
        return;
    }
    }
    throw std::runtime_error("NeedEntry::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean NeedEntry::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NEEDENTRY__KEY:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_key);
    }
    case ::amalthea::AmaltheaPackage::NEEDENTRY__VALUE:
    {
        return (bool) m_value;
    }
    }
    throw std::runtime_error(
            "NeedEntry::eIsSet Error. FeatureID:" + _featureID);
}

void NeedEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "NeedEntry::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr NeedEntry::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getNeedEntry();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void NeedEntry::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NEEDENTRY__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void NeedEntry::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NEEDENTRY__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

