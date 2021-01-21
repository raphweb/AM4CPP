// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ListObjectImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ListObject.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ListObjectImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ListObject::_initialize()
{
    // Supertypes
    ::amalthea::Value::_initialize();

    // References
    for (size_t i = 0; i < m_values->size(); i++)
    {
        (*m_values)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ListObjectImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ListObject::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::LISTOBJECT__VALUES:
    {
        _any = m_values->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("ListObject::eGet Error. FeatureID:" + _featureID);
}

void ListObject::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::LISTOBJECT__VALUES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ListObject::getValues().clear();
        ::amalthea::ListObject::getValues().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("ListObject::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ListObject::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::LISTOBJECT__VALUES:
    {
        return m_values && m_values->size();
    }
    }
    throw std::runtime_error(
            "ListObject::eIsSet Error. FeatureID:" + _featureID);
}

void ListObject::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ListObject::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ListObject::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getListObject();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ListObject::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::LISTOBJECT__VALUES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ListObject::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::LISTOBJECT__VALUES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

