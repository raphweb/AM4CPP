// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessSeparationConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ProcessSeparationConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/SeparationConstraint.hpp>
#include <amalthea/ProcessConstraint.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ProcessConstraintTarget.hpp>
#include <amalthea/ProcessGroup.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessSeparationConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ProcessSeparationConstraint::_initialize()
{
    // Supertypes
    ::amalthea::SeparationConstraint::_initialize();
    ::amalthea::ProcessConstraint::_initialize();
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_groups->size(); i++)
    {
        (*m_groups)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ProcessSeparationConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessSeparationConstraint::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
        return amalthea::ProcessConstraint::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::PROCESSSEPARATIONCONSTRAINT__GROUPS:
    {
        _any = m_groups->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "ProcessSeparationConstraint::eGet Error. FeatureID:" + _featureID);
}

void ProcessSeparationConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
        amalthea::ProcessConstraint::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::PROCESSSEPARATIONCONSTRAINT__GROUPS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ProcessSeparationConstraint::getGroups().clear();
        ::amalthea::ProcessSeparationConstraint::getGroups().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ProcessSeparationConstraint::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ProcessSeparationConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
        return amalthea::ProcessConstraint::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::PROCESSSEPARATIONCONSTRAINT__GROUPS:
    {
        return m_groups && m_groups->size();
    }
    }
    throw std::runtime_error(
            "ProcessSeparationConstraint::eIsSet Error. FeatureID:"
                    + _featureID);
}

void ProcessSeparationConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ProcessSeparationConstraint::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr ProcessSeparationConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getProcessSeparationConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessSeparationConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSSEPARATIONCONSTRAINT__GROUPS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessSeparationConstraint::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSCONSTRAINT__TARGET:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::PROCESSSEPARATIONCONSTRAINT__GROUPS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

