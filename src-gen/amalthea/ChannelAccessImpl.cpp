// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelAccessImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ChannelAccess.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Channel.hpp>
#include <amalthea/TransmissionPolicy.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ChannelAccessImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ChannelAccess::_initialize()
{
    // Supertypes
    ::amalthea::ActivityGraphItem::_initialize();

    // References
    if (m_transmissionPolicy)
    {
        m_transmissionPolicy->_initialize();
    }

    /*PROTECTED REGION ID(ChannelAccessImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ChannelAccess::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    {
        if (m_data)
            _any = ::ecore::as < ::ecore::EObject > (m_data);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__ELEMENTS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_elements);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
        if (m_transmissionPolicy)
            _any = ::ecore::as < ::ecore::EObject > (m_transmissionPolicy);
        return _any;
    }
    }
    throw std::runtime_error(
            "ChannelAccess::eGet Error. FeatureID:" + _featureID);
}

void ChannelAccess::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Channel_ptr _t1 =
                dynamic_cast< ::amalthea::Channel* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Channel >(_t0);*/
        ::amalthea::ChannelAccess::setData(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__ELEMENTS:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::ChannelAccess::setElements(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::TransmissionPolicy_ptr _t1 =
                dynamic_cast< ::amalthea::TransmissionPolicy* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::TransmissionPolicy >(_t0);*/
        ::amalthea::ChannelAccess::setTransmissionPolicy(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ChannelAccess::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ChannelAccess::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGPROCESS:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGRUNNABLE:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH:
    {
        return amalthea::ActivityGraphItem::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    {
        return (bool) m_data;
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__ELEMENTS:
    {
        return m_elements != 0;
    }
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
        return (bool) m_transmissionPolicy;
    }
    }
    throw std::runtime_error(
            "ChannelAccess::eIsSet Error. FeatureID:" + _featureID);
}

void ChannelAccess::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ChannelAccess::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ChannelAccess::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getChannelAccess();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ChannelAccess::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ChannelAccess::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__DATA:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

