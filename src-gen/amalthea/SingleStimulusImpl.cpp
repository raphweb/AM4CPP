// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SingleStimulusImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SingleStimulus.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SingleStimulusImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SingleStimulus::_initialize()
{
    // Supertypes
    ::amalthea::Stimulus::_initialize();

    // References
    if (m_occurrence)
    {
        m_occurrence->_initialize();
    }

    /*PROTECTED REGION ID(SingleStimulusImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SingleStimulus::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
        return amalthea::Stimulus::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::SINGLESTIMULUS__OCCURRENCE:
    {
        if (m_occurrence)
            _any = ::ecore::as < ::ecore::EObject > (m_occurrence);
        return _any;
    }
    }
    throw std::runtime_error(
            "SingleStimulus::eGet Error. FeatureID:" + _featureID);
}

void SingleStimulus::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
        amalthea::Stimulus::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::SINGLESTIMULUS__OCCURRENCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Time_ptr _t1 = dynamic_cast< ::amalthea::Time* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Time >(_t0);*/
        ::amalthea::SingleStimulus::setOccurrence(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "SingleStimulus::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SingleStimulus::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    case ::amalthea::AmaltheaPackage::STIMULUS__AFFECTEDPROCESSES:
    {
        return amalthea::Stimulus::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::SINGLESTIMULUS__OCCURRENCE:
    {
        return (bool) m_occurrence;
    }
    }
    throw std::runtime_error(
            "SingleStimulus::eIsSet Error. FeatureID:" + _featureID);
}

void SingleStimulus::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SingleStimulus::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SingleStimulus::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSingleStimulus();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SingleStimulus::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SINGLESTIMULUS__OCCURRENCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SingleStimulus::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULUS__SETMODEVALUELIST:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SINGLESTIMULUS__OCCURRENCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

