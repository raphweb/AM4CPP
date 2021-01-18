// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnablePairingConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnablePairingConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/PairingConstraint.hpp>
#include <amalthea/RunnableConstraint.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RunnableConstraintTarget.hpp>
#include <amalthea/RunnableGroup.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RunnablePairingConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RunnablePairingConstraint::_initialize()
{
    // Supertypes
    ::amalthea::PairingConstraint::_initialize();
    ::amalthea::RunnableConstraint::_initialize();
    ::amalthea::BaseObject::_initialize();

    // References
    if (m_group)
    {
        m_group->_initialize();
    }

    /*PROTECTED REGION ID(RunnablePairingConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RunnablePairingConstraint::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLECONSTRAINT__TARGET:
    {
        return amalthea::RunnableConstraint::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPAIRINGCONSTRAINT__GROUP:
    {
        if (m_group)
            _any = ::ecore::as < ::ecore::EObject > (m_group);
        return _any;
    }
    }
    throw std::runtime_error(
            "RunnablePairingConstraint::eGet Error. FeatureID:" + _featureID);
}

void RunnablePairingConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLECONSTRAINT__TARGET:
    {
        amalthea::RunnableConstraint::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPAIRINGCONSTRAINT__GROUP:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::RunnableGroup_ptr _t1 =
                dynamic_cast< ::amalthea::RunnableGroup* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::RunnableGroup >(_t0);*/
        ::amalthea::RunnablePairingConstraint::setGroup(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "RunnablePairingConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean RunnablePairingConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::RUNNABLECONSTRAINT__TARGET:
    {
        return amalthea::RunnableConstraint::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLEPAIRINGCONSTRAINT__GROUP:
    {
        return (bool) m_group;
    }
    }
    throw std::runtime_error(
            "RunnablePairingConstraint::eIsSet Error. FeatureID:" + _featureID);
}

void RunnablePairingConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RunnablePairingConstraint::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr RunnablePairingConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunnablePairingConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RunnablePairingConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLECONSTRAINT__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEPAIRINGCONSTRAINT__GROUP:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RunnablePairingConstraint::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLECONSTRAINT__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLEPAIRINGCONSTRAINT__GROUP:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

