// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Runnable.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/RunnableParameter.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Activation.hpp>
#include <amalthea/Section.hpp>
#include <amalthea/RunnableCall.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RunnableImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Runnable::_initialize()
{
    // Supertypes
    ::amalthea::AbstractMemoryElement::_initialize();
    ::amalthea::INamespaceMember::_initialize();

    // References
    if (m_executionCondition)
    {
        m_executionCondition->_initialize();
    }
    for (size_t i = 0; i < m_parameters->size(); i++)
    {
        (*m_parameters)[i]->_initialize();
    }
    if (m_activityGraph)
    {
        m_activityGraph->_initialize();
    }

    /*PROTECTED REGION ID(RunnableImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

std::vector< ::amalthea::ActivityGraphItem_ptr > Runnable::getRunnableItems()
{
    /*PROTECTED REGION ID(RunnableImpl_getRunnableItems) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Runnable::getRunnableItems";
    /*PROTECTED REGION END*/
}

::amalthea::Activation_ptr Runnable::getFirstActivation()
{
    /*PROTECTED REGION ID(RunnableImpl_getFirstActivation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Runnable::getFirstActivation";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject Runnable::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        return amalthea::AbstractMemoryElement::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__EXECUTIONCONDITION:
    {
        if (m_executionCondition)
            _any = ::ecore::as < ::ecore::EObject > (m_executionCondition);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__PARAMETERS:
    {
        _any = m_parameters->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVITYGRAPH:
    {
        if (m_activityGraph)
            _any = ::ecore::as < ::ecore::EObject > (m_activityGraph);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVATIONS:
    {
        _any = m_activations->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__CALLBACK:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_callback);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__SERVICE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_service);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__ASILLEVEL:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::ASILType
                > ::toAny(_any, m_asilLevel);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__SECTION:
    {
        if (m_section)
            _any = ::ecore::as < ::ecore::EObject > (m_section);
        return _any;
    }
    }
    throw std::runtime_error("Runnable::eGet Error. FeatureID:" + _featureID);
}

void Runnable::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
        amalthea::AbstractMemoryElement::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        amalthea::INamespaceMember::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__EXECUTIONCONDITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ModeConditionDisjunction_ptr _t1 =
                dynamic_cast< ::amalthea::ModeConditionDisjunction* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ModeConditionDisjunction >(_t0);*/
        ::amalthea::Runnable::setExecutionCondition(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__PARAMETERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Runnable::getParameters().clear();
        ::amalthea::Runnable::getParameters().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVITYGRAPH:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ActivityGraph_ptr _t1 =
                dynamic_cast< ::amalthea::ActivityGraph* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ActivityGraph >(_t0);*/
        ::amalthea::Runnable::setActivityGraph(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVATIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Runnable::getActivations().clear();
        ::amalthea::Runnable::getActivations().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__CALLBACK:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::Runnable::setCallback(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__SERVICE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::Runnable::setService(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__ASILLEVEL:
    {
        ::amalthea::ASILType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::ASILType
                > ::fromAny(_newValue, _t0);
        ::amalthea::Runnable::setAsilLevel(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__SECTION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Section_ptr _t1 =
                dynamic_cast< ::amalthea::Section* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Section >(_t0);*/
        ::amalthea::Runnable::setSection(_t1);
        return;
    }
    }
    throw std::runtime_error("Runnable::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Runnable::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__MAPPINGS:
    {
        return amalthea::AbstractMemoryElement::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
        return amalthea::INamespaceMember::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__EXECUTIONCONDITION:
    {
        return (bool) m_executionCondition;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__PARAMETERS:
    {
        return m_parameters && m_parameters->size();
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVITYGRAPH:
    {
        return (bool) m_activityGraph;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVATIONS:
    {
        return m_activations && m_activations->size();
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__CALLBACK:
    {
        return m_callback != false;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__SERVICE:
    {
        return m_service != false;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__ASILLEVEL:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::ASILType
                > ::is_set(m_asilLevel);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__SECTION:
    {
        return (bool) m_section;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__RUNNABLECALLS:
    {
        return m_runnableCalls && m_runnableCalls->size();
    }
    case ::amalthea::AmaltheaPackage::RUNNABLE__REFERRINGCOMPONENTS:
    {
        return m_referringComponents && m_referringComponents->size();
    }
    }
    throw std::runtime_error("Runnable::eIsSet Error. FeatureID:" + _featureID);
}

void Runnable::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Runnable::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Runnable::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunnable();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Runnable::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__EXECUTIONCONDITION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__PARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::RunnableParameter_ptr _t1 =
                dynamic_cast< ::amalthea::RunnableParameter* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::RunnableParameter_ptr, -1, true, true >&) ::amalthea::Runnable::getParameters();
        container.basicAdd(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVITYGRAPH:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVATIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__SECTION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Runnable::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTMEMORYELEMENT__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::INAMESPACEMEMBER__NAMESPACE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__EXECUTIONCONDITION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__PARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::RunnableParameter_ptr _t1 =
                dynamic_cast< ::amalthea::RunnableParameter* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::RunnableParameter_ptr, -1, true, true >&) ::amalthea::Runnable::getParameters();
        container.basicRemove(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVITYGRAPH:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__ACTIVATIONS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLE__SECTION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

