// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TagGroupImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TagGroup.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/RunnableGroup.hpp>
#include <amalthea/ProcessGroup.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TagGroupImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void TagGroup::_initialize()
{
    // Supertypes
    ::amalthea::RunnableGroup::_initialize();
    ::amalthea::ProcessGroup::_initialize();
    ::amalthea::BaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(TagGroupImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TagGroup::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TAGGROUP__TAG:
    {
        if (m_tag)
            _any = ::ecore::as < ::ecore::EObject > (m_tag);
        return _any;
    }
    }
    throw std::runtime_error("TagGroup::eGet Error. FeatureID:" + _featureID);
}

void TagGroup::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TAGGROUP__TAG:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Tag_ptr _t1 = dynamic_cast< ::amalthea::Tag* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Tag >(_t0);*/
        ::amalthea::TagGroup::setTag(_t1);
        return;
    }
    }
    throw std::runtime_error("TagGroup::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean TagGroup::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TAGGROUP__TAG:
    {
        return (bool) m_tag;
    }
    }
    throw std::runtime_error("TagGroup::eIsSet Error. FeatureID:" + _featureID);
}

void TagGroup::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("TagGroup::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr TagGroup::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTagGroup();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TagGroup::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TAGGROUP__TAG:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TagGroup::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TAGGROUP__TAG:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

