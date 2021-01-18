// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableSeparationConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableSeparationConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/SeparationConstraint.hpp>
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

/*PROTECTED REGION ID(RunnableSeparationConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RunnableSeparationConstraint::_initialize()
{
    // Supertypes
    ::amalthea::SeparationConstraint::_initialize();
    ::amalthea::RunnableConstraint::_initialize();
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_groups->size(); i++)
    {
        (*m_groups)[i]->_initialize();
    }

    /*PROTECTED REGION ID(RunnableSeparationConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RunnableSeparationConstraint::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::RUNNABLESEPARATIONCONSTRAINT__GROUPS:
    {
        _any = m_groups->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "RunnableSeparationConstraint::eGet Error. FeatureID:"
                    + _featureID);
}

void RunnableSeparationConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLESEPARATIONCONSTRAINT__GROUPS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::RunnableSeparationConstraint::getGroups().clear();
        ::amalthea::RunnableSeparationConstraint::getGroups().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "RunnableSeparationConstraint::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean RunnableSeparationConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::RUNNABLESEPARATIONCONSTRAINT__GROUPS:
    {
        return m_groups && m_groups->size();
    }
    }
    throw std::runtime_error(
            "RunnableSeparationConstraint::eIsSet Error. FeatureID:"
                    + _featureID);
}

void RunnableSeparationConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RunnableSeparationConstraint::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr RunnableSeparationConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunnableSeparationConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RunnableSeparationConstraint::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLESEPARATIONCONSTRAINT__GROUPS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RunnableSeparationConstraint::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLESEPARATIONCONSTRAINT__GROUPS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

