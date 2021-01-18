// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ITaggableImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ITaggable.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Tag.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ITaggableImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ITaggable::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ITaggableImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ITaggable::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        _any = m_tags->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("ITaggable::eGet Error. FeatureID:" + _featureID);
}

void ITaggable::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ITaggable::getTags().clear();
        ::amalthea::ITaggable::getTags().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("ITaggable::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ITaggable::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return m_tags && m_tags->size();
    }
    }
    throw std::runtime_error(
            "ITaggable::eIsSet Error. FeatureID:" + _featureID);
}

void ITaggable::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ITaggable::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ITaggable::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getITaggable();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ITaggable::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ITaggable::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

