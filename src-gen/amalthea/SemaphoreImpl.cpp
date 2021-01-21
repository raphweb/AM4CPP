// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SemaphoreImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Semaphore.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/SemaphoreAccess.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SemaphoreImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Semaphore::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References

    /*PROTECTED REGION ID(SemaphoreImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Semaphore::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SEMAPHORE__SEMAPHORETYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::SemaphoreType
                > ::toAny(_any, m_semaphoreType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__INITIALVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_initialValue);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__MAXVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_maxValue);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__PRIORITYCEILINGPROTOCOL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_priorityCeilingProtocol);
        return _any;
    }
    }
    throw std::runtime_error("Semaphore::eGet Error. FeatureID:" + _featureID);
}

void Semaphore::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::SEMAPHORE__SEMAPHORETYPE:
    {
        ::amalthea::SemaphoreType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::SemaphoreType
                > ::fromAny(_newValue, _t0);
        ::amalthea::Semaphore::setSemaphoreType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__INITIALVALUE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::Semaphore::setInitialValue(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__MAXVALUE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::Semaphore::setMaxValue(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__PRIORITYCEILINGPROTOCOL:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::Semaphore::setPriorityCeilingProtocol(_t0);
        return;
    }
    }
    throw std::runtime_error("Semaphore::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Semaphore::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::SEMAPHORE__SEMAPHORETYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::SemaphoreType
                > ::is_set(m_semaphoreType);
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__INITIALVALUE:
    {
        return m_initialValue != 0;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__MAXVALUE:
    {
        return m_maxValue != 0;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__PRIORITYCEILINGPROTOCOL:
    {
        return m_priorityCeilingProtocol != false;
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__SEMAPHOREACCESSES:
    {
        return m_semaphoreAccesses && m_semaphoreAccesses->size();
    }
    case ::amalthea::AmaltheaPackage::SEMAPHORE__REFERRINGCOMPONENTS:
    {
        return m_referringComponents && m_referringComponents->size();
    }
    }
    throw std::runtime_error(
            "Semaphore::eIsSet Error. FeatureID:" + _featureID);
}

void Semaphore::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "Semaphore::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Semaphore::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getSemaphore();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Semaphore::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Semaphore::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

