// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedulerAssociationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SchedulerAssociation.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/SchedulingParameters.hpp>
#include <amalthea/ParameterExtension.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SchedulerAssociationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void SchedulerAssociation::_initialize()
{
    // Supertypes

    // References
    if (m_schedulingParameters)
    {
        m_schedulingParameters->_initialize();
    }
    for (size_t i = 0; i < m_parameterExtensions->size(); i++)
    {
        (*m_parameterExtensions)[i]->_initialize();
    }

    /*PROTECTED REGION ID(SchedulerAssociationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SchedulerAssociation::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__CHILD:
    {
        if (m_child)
            _any = ::ecore::as < ::ecore::EObject > (m_child);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARENT:
    {
        if (m_parent)
            _any = ::ecore::as < ::ecore::EObject > (m_parent);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__SCHEDULINGPARAMETERS:
    {
        if (m_schedulingParameters)
            _any = ::ecore::as < ::ecore::EObject > (m_schedulingParameters);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARAMETEREXTENSIONS:
    {
        _any = m_parameterExtensions->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "SchedulerAssociation::eGet Error. FeatureID:" + _featureID);
}

void SchedulerAssociation::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__CHILD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::TaskScheduler_ptr _t1 =
                dynamic_cast< ::amalthea::TaskScheduler* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::TaskScheduler >(_t0);*/
        ::amalthea::SchedulerAssociation::setChild(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::TaskScheduler_ptr _t1 =
                dynamic_cast< ::amalthea::TaskScheduler* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::TaskScheduler >(_t0);*/
        ::amalthea::SchedulerAssociation::setParent(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__SCHEDULINGPARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::SchedulingParameters_ptr _t1 =
                dynamic_cast< ::amalthea::SchedulingParameters* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::SchedulingParameters >(_t0);*/
        ::amalthea::SchedulerAssociation::setSchedulingParameters(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARAMETEREXTENSIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::SchedulerAssociation::getParameterExtensions().clear();
        ::amalthea::SchedulerAssociation::getParameterExtensions().insert_all(
                *_t0);
        return;
    }
    }
    throw std::runtime_error(
            "SchedulerAssociation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean SchedulerAssociation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__CHILD:
    {
        return (bool) m_child;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARENT:
    {
        return (bool) m_parent;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__SCHEDULINGPARAMETERS:
    {
        return (bool) m_schedulingParameters;
    }
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARAMETEREXTENSIONS:
    {
        return m_parameterExtensions && m_parameterExtensions->size();
    }
    }
    throw std::runtime_error(
            "SchedulerAssociation::eIsSet Error. FeatureID:" + _featureID);
}

void SchedulerAssociation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "SchedulerAssociation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr SchedulerAssociation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSchedulerAssociation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SchedulerAssociation::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__CHILD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::TaskScheduler_ptr _t1 =
                dynamic_cast< ::amalthea::TaskScheduler* >(_t0.get());

        // set reference
        basicsetChild(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__SCHEDULINGPARAMETERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARAMETEREXTENSIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SchedulerAssociation::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__CHILD:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::TaskScheduler_ptr _t1 =
                dynamic_cast< ::amalthea::TaskScheduler* >(_t0.get());

        // set reference
        if (basicgetChild() == _t1)
            basicsetChild(nullptr);
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARENT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__SCHEDULINGPARAMETERS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::SCHEDULERASSOCIATION__PARAMETEREXTENSIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

