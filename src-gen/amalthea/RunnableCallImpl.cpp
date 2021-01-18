// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableCallImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableCall.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/CallArgument.hpp>
#include <amalthea/Counter.hpp>
#include <amalthea/RunEntityCallStatistic.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RunnableCallImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RunnableCall::_initialize()
{
    // Supertypes
    ::amalthea::ActivityGraphItem::_initialize();
    ::amalthea::ITaggable::_initialize();

    // References
    for (size_t i = 0; i < m_arguments->size(); i++)
    {
        (*m_arguments)[i]->_initialize();
    }
    if (m_counter)
    {
        m_counter->_initialize();
    }
    if (m_statistic)
    {
        m_statistic->_initialize();
    }

    /*PROTECTED REGION ID(RunnableCallImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RunnableCall::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__RUNNABLE:
    {
        if (m_runnable)
            _any = ::ecore::as < ::ecore::EObject > (m_runnable);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__ARGUMENTS:
    {
        _any = m_arguments->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__COUNTER:
    {
        if (m_counter)
            _any = ::ecore::as < ::ecore::EObject > (m_counter);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__STATISTIC:
    {
        if (m_statistic)
            _any = ::ecore::as < ::ecore::EObject > (m_statistic);
        return _any;
    }
    }
    throw std::runtime_error(
            "RunnableCall::eGet Error. FeatureID:" + _featureID);
}

void RunnableCall::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__RUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::RunnableCall::setRunnable(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__ARGUMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::RunnableCall::getArguments().clear();
        ::amalthea::RunnableCall::getArguments().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__COUNTER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Counter_ptr _t1 =
                dynamic_cast< ::amalthea::Counter* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Counter >(_t0);*/
        ::amalthea::RunnableCall::setCounter(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__STATISTIC:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::RunEntityCallStatistic_ptr _t1 =
                dynamic_cast< ::amalthea::RunEntityCallStatistic* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::RunEntityCallStatistic >(_t0);*/
        ::amalthea::RunnableCall::setStatistic(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "RunnableCall::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean RunnableCall::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__RUNNABLE:
    {
        return (bool) m_runnable;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__ARGUMENTS:
    {
        return m_arguments && m_arguments->size();
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__COUNTER:
    {
        return (bool) m_counter;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__STATISTIC:
    {
        return (bool) m_statistic;
    }
    }
    throw std::runtime_error(
            "RunnableCall::eIsSet Error. FeatureID:" + _featureID);
}

void RunnableCall::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RunnableCall::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr RunnableCall::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunnableCall();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RunnableCall::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__RUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__ARGUMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::CallArgument_ptr _t1 =
                dynamic_cast< ::amalthea::CallArgument* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::CallArgument_ptr, -1, true, true >&) ::amalthea::RunnableCall::getArguments();
        container.basicAdd(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__COUNTER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__STATISTIC:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RunnableCall::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__RUNNABLE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__ARGUMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::CallArgument_ptr _t1 =
                dynamic_cast< ::amalthea::CallArgument* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::CallArgument_ptr, -1, true, true >&) ::amalthea::RunnableCall::getArguments();
        container.basicRemove(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__COUNTER:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLECALL__STATISTIC:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

