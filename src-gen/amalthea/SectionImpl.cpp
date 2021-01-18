// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SectionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Section.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SectionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Section::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(SectionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Section::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::SECTION__ASILLEVEL:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::ASILType
                > ::toAny(_any, m_asilLevel);
        return _any;
    }
    }
    throw std::runtime_error("Section::eGet Error. FeatureID:" + _featureID);
}

void Section::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::SECTION__ASILLEVEL:
    {
        ::amalthea::ASILType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::ASILType
                > ::fromAny(_newValue, _t0);
        ::amalthea::Section::setAsilLevel(_t0);
        return;
    }
    }
    throw std::runtime_error("Section::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Section::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::SECTION__ASILLEVEL:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::ASILType
                > ::is_set(m_asilLevel);
    }
    case ::amalthea::AmaltheaPackage::SECTION__LABELS:
    {
        return m_labels && m_labels->size();
    }
    case ::amalthea::AmaltheaPackage::SECTION__RUNNABLES:
    {
        return m_runnables && m_runnables->size();
    }
    }
    throw std::runtime_error("Section::eIsSet Error. FeatureID:" + _featureID);
}

void Section::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Section::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Section::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSection();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Section::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Section::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

