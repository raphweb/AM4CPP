// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CallArgumentImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CallArgument.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableObject.hpp>
#include <amalthea/IDependsOn.hpp>
#include <amalthea/DataDependency.hpp>
#include <amalthea/RunnableCall.hpp>
#include <amalthea/RunnableParameter.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CallArgumentImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void CallArgument::_initialize()
{
    // Supertypes
    ::amalthea::ReferableObject::_initialize();
    ::amalthea::IDependsOn::_initialize();

    // References

    /*PROTECTED REGION ID(CallArgumentImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EString CallArgument::getName()
{
    /*PROTECTED REGION ID(CallArgumentImpl_getName) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::CallArgument::getName";
    /*PROTECTED REGION END*/
}

std::vector< ::ecore::EString > CallArgument::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(CallArgumentImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::CallArgument::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject CallArgument::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        return amalthea::IDependsOn::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__CONTAININGCALL:
    {
        if (m_containingCall)
            _any = ::ecore::as < ::ecore::EObject > (m_containingCall);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__PARAMETER:
    {
        if (m_parameter)
            _any = ::ecore::as < ::ecore::EObject > (m_parameter);
        return _any;
    }
    }
    throw std::runtime_error(
            "CallArgument::eGet Error. FeatureID:" + _featureID);
}

void CallArgument::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        amalthea::IDependsOn::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__CONTAININGCALL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::RunnableCall_ptr _t1 =
                dynamic_cast< ::amalthea::RunnableCall* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::RunnableCall >(_t0);*/
        ::amalthea::CallArgument::setContainingCall(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__PARAMETER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::RunnableParameter_ptr _t1 =
                dynamic_cast< ::amalthea::RunnableParameter* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::RunnableParameter >(_t0);*/
        ::amalthea::CallArgument::setParameter(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "CallArgument::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean CallArgument::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IREFERABLE__UNIQUENAME:
    {
        return amalthea::IReferable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        return amalthea::IDependsOn::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__CONTAININGCALL:
    {
        return (bool) m_containingCall;
    }
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__PARAMETER:
    {
        return (bool) m_parameter;
    }
    }
    throw std::runtime_error(
            "CallArgument::eIsSet Error. FeatureID:" + _featureID);
}

void CallArgument::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "CallArgument::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr CallArgument::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCallArgument();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CallArgument::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__CONTAININGCALL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::RunnableCall_ptr _t1 =
                dynamic_cast< ::amalthea::RunnableCall* >(_t0.get());

        // set reference
        basicsetContainingCall(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__PARAMETER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CallArgument::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__CONTAININGCALL:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::RunnableCall_ptr _t1 =
                dynamic_cast< ::amalthea::RunnableCall* >(_t0.get());

        // set reference
        if (basicgetContainingCall() == _t1)
            basicsetContainingCall(nullptr);
    }
        return;
    case ::amalthea::AmaltheaPackage::CALLARGUMENT__PARAMETER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

