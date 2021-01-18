// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableParameterImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableParameter.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/IDependsOn.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/DataDependency.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RunnableParameterImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RunnableParameter::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::IDependsOn::_initialize();

    // References

    /*PROTECTED REGION ID(RunnableParameterImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

std::vector< ::ecore::EString > RunnableParameter::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(RunnableParameterImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::RunnableParameter::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

::ecore::EString RunnableParameter::toString()
{
    /*PROTECTED REGION ID(RunnableParameterImpl_toString) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::RunnableParameter::toString";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject RunnableParameter::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        return amalthea::IDependsOn::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__CONTAININGRUNNABLE:
    {
        if (m_containingRunnable)
            _any = ::ecore::as < ::ecore::EObject > (m_containingRunnable);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__DIRECTION:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::DirectionType
                > ::toAny(_any, m_direction);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__DATATYPE:
    {
        if (m_dataType)
            _any = ::ecore::as < ::ecore::EObject > (m_dataType);
        return _any;
    }
    }
    throw std::runtime_error(
            "RunnableParameter::eGet Error. FeatureID:" + _featureID);
}

void RunnableParameter::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        amalthea::IDependsOn::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__CONTAININGRUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Runnable >(_t0);*/
        ::amalthea::RunnableParameter::setContainingRunnable(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__DIRECTION:
    {
        ::amalthea::DirectionType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::DirectionType
                > ::fromAny(_newValue, _t0);
        ::amalthea::RunnableParameter::setDirection(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__DATATYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::TypeDefinition_ptr _t1 =
                dynamic_cast< ::amalthea::TypeDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::TypeDefinition >(_t0);*/
        ::amalthea::RunnableParameter::setDataType(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "RunnableParameter::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean RunnableParameter::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        return amalthea::IDependsOn::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__CONTAININGRUNNABLE:
    {
        return (bool) m_containingRunnable;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__DIRECTION:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::DirectionType
                > ::is_set(m_direction);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__DATATYPE:
    {
        return (bool) m_dataType;
    }
    }
    throw std::runtime_error(
            "RunnableParameter::eIsSet Error. FeatureID:" + _featureID);
}

void RunnableParameter::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RunnableParameter::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr RunnableParameter::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunnableParameter();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RunnableParameter::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__CONTAININGRUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get());

        // set reference
        basicsetContainingRunnable(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__DATATYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RunnableParameter::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__CONTAININGRUNNABLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::Runnable_ptr _t1 =
                dynamic_cast< ::amalthea::Runnable* >(_t0.get());

        // set reference
        if (basicgetContainingRunnable() == _t1)
            basicsetContainingRunnable(nullptr);
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEPARAMETER__DATATYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

