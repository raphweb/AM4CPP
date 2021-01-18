// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/StimulusImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Stimulus.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(StimulusImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Stimulus::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::ITaggable::_initialize();

    // References
    if (m_setModeValueList)
    {
        m_setModeValueList->_initialize();
    }
    if (m_executionCondition)
    {
        m_executionCondition->_initialize();
    }

    /*PROTECTED REGION ID(StimulusImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Stimulus::eGet(::ecore::EInt _featureID,
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
    {
        if (m_setModeValueList)
            _any = ::ecore::as < ::ecore::EObject > (m_setModeValueList);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
        if (m_executionCondition)
            _any = ::ecore::as < ::ecore::EObject > (m_executionCondition);
        return _any;
    }
    }
    throw std::runtime_error("Stimulus::eGet Error. FeatureID:" + _featureID);
}

void Stimulus::eSet(::ecore::EInt _featureID,
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
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeValueList_ptr _t1 =
                dynamic_cast< ::amalthea::ModeValueList* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeValueList >(_t0);*/
        ::amalthea::Stimulus::setSetModeValueList(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeConditionDisjunction_ptr _t1 =
                dynamic_cast< ::amalthea::ModeConditionDisjunction* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeConditionDisjunction >(_t0);*/
        ::amalthea::Stimulus::setExecutionCondition(_t1);
        return;
    }
    }
    throw std::runtime_error("Stimulus::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Stimulus::eIsSet(::ecore::EInt _featureID)
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
    {
        return (bool) m_setModeValueList;
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__EXECUTIONCONDITION:
    {
        return (bool) m_executionCondition;
    }
    case ::amalthea::AmaltheaPackage::STIMULUS__AFFECTEDPROCESSES:
    {
        return m_affectedProcesses && m_affectedProcesses->size();
    }
    }
    throw std::runtime_error("Stimulus::eIsSet Error. FeatureID:" + _featureID);
}

void Stimulus::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Stimulus::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Stimulus::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getStimulus();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Stimulus::_inverseAdd(::ecore::EInt _featureID,
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

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Stimulus::_inverseRemove(::ecore::EInt _featureID,
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

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

