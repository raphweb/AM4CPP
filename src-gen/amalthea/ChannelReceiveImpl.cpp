// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelReceiveImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ChannelReceive.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ChannelAccess.hpp>
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

/*PROTECTED REGION ID(ChannelReceiveImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ChannelReceive::_initialize()
{
    // Supertypes
    ::amalthea::ChannelAccess::_initialize();

    // References

    /*PROTECTED REGION ID(ChannelReceiveImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ChannelReceive::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__ELEMENTS:
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
        return amalthea::ChannelAccess::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__RECEIVEOPERATION:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::ReceiveOperation
                > ::toAny(_any, m_receiveOperation);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__DATAMUSTBENEW:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_dataMustBeNew);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__ELEMENTINDEX:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_elementIndex);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_lowerBound);
        return _any;
    }
    }
    throw std::runtime_error(
            "ChannelReceive::eGet Error. FeatureID:" + _featureID);
}

void ChannelReceive::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__ELEMENTS:
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
        amalthea::ChannelAccess::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__RECEIVEOPERATION:
    {
        ::amalthea::ReceiveOperation _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::ReceiveOperation
                > ::fromAny(_newValue, _t0);
        ::amalthea::ChannelReceive::setReceiveOperation(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__DATAMUSTBENEW:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::ChannelReceive::setDataMustBeNew(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__ELEMENTINDEX:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::ChannelReceive::setElementIndex(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__LOWERBOUND:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::ChannelReceive::setLowerBound(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ChannelReceive::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ChannelReceive::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__ELEMENTS:
    case ::amalthea::AmaltheaPackage::CHANNELACCESS__TRANSMISSIONPOLICY:
    {
        return amalthea::ChannelAccess::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__RECEIVEOPERATION:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::ReceiveOperation
                > ::is_set(m_receiveOperation);
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__DATAMUSTBENEW:
    {
        return m_dataMustBeNew != false;
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__ELEMENTINDEX:
    {
        return m_elementIndex != 0;
    }
    case ::amalthea::AmaltheaPackage::CHANNELRECEIVE__LOWERBOUND:
    {
        return m_lowerBound != 0;
    }
    }
    throw std::runtime_error(
            "ChannelReceive::eIsSet Error. FeatureID:" + _featureID);
}

void ChannelReceive::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ChannelReceive::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ChannelReceive::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getChannelReceive();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ChannelReceive::_inverseAdd(::ecore::EInt _featureID,
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
void ChannelReceive::_inverseRemove(::ecore::EInt _featureID,
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

