// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AbstractEventChainImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractEventChain.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Event.hpp>
#include <amalthea/EventChainItem.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AbstractEventChainImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void AbstractEventChain::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();
    ::amalthea::INamed::_initialize();

    // References
    for (size_t i = 0; i < m_items->size(); i++)
    {
        (*m_items)[i]->_initialize();
    }

    /*PROTECTED REGION ID(AbstractEventChainImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AbstractEventChain::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    {
        if (m_stimulus)
            _any = ::ecore::as < ::ecore::EObject > (m_stimulus);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    {
        if (m_response)
            _any = ::ecore::as < ::ecore::EObject > (m_response);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    {
        _any = m_items->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::EventChainItemType
                > ::toAny(_any, m_itemType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__MINITEMSCOMPLETED:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveInt
                > ::toAny(_any, m_minItemsCompleted);
        return _any;
    }
    }
    throw std::runtime_error(
            "AbstractEventChain::eGet Error. FeatureID:" + _featureID);
}

void AbstractEventChain::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Event_ptr _t1 =
                dynamic_cast< ::amalthea::Event* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Event >(_t0);*/
        ::amalthea::AbstractEventChain::setStimulus(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Event_ptr _t1 =
                dynamic_cast< ::amalthea::Event* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Event >(_t0);*/
        ::amalthea::AbstractEventChain::setResponse(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::AbstractEventChain::getItems().clear();
        ::amalthea::AbstractEventChain::getItems().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMTYPE:
    {
        ::amalthea::EventChainItemType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::EventChainItemType
                > ::fromAny(_newValue, _t0);
        ::amalthea::AbstractEventChain::setItemType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__MINITEMSCOMPLETED:
    {
        ::amalthea::PositiveInt _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::PositiveInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::AbstractEventChain::setMinItemsCompleted(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "AbstractEventChain::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean AbstractEventChain::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    {
        return (bool) m_stimulus;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    {
        return (bool) m_response;
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    {
        return m_items && m_items->size();
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::EventChainItemType
                > ::is_set(m_itemType);
    }
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__MINITEMSCOMPLETED:
    {
        return m_minItemsCompleted != 1;
    }
    }
    throw std::runtime_error(
            "AbstractEventChain::eIsSet Error. FeatureID:" + _featureID);
}

void AbstractEventChain::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "AbstractEventChain::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr AbstractEventChain::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getAbstractEventChain();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AbstractEventChain::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AbstractEventChain::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__STIMULUS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__RESPONSE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ABSTRACTEVENTCHAIN__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

