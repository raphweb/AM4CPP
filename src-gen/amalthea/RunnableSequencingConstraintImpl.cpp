// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableSequencingConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RunnableSequencingConstraint.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/RunnableEntityGroup.hpp>
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RunnableSequencingConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void RunnableSequencingConstraint::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_runnableGroups->size(); i++)
    {
        (*m_runnableGroups)[i]->_initialize();
    }

    /*PROTECTED REGION ID(RunnableSequencingConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RunnableSequencingConstraint::eGet(
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
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__ORDERTYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::RunnableOrderType
                > ::toAny(_any, m_orderType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__RUNNABLEGROUPS:
    {
        _any = m_runnableGroups->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__PROCESSSCOPE:
    {
        _any = m_processScope->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "RunnableSequencingConstraint::eGet Error. FeatureID:"
                    + _featureID);
}

void RunnableSequencingConstraint::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__ORDERTYPE:
    {
        ::amalthea::RunnableOrderType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::RunnableOrderType
                > ::fromAny(_newValue, _t0);
        ::amalthea::RunnableSequencingConstraint::setOrderType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__RUNNABLEGROUPS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::RunnableSequencingConstraint::getRunnableGroups().clear();
        ::amalthea::RunnableSequencingConstraint::getRunnableGroups().insert_all(
                *_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__PROCESSSCOPE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::RunnableSequencingConstraint::getProcessScope().clear();
        ::amalthea::RunnableSequencingConstraint::getProcessScope().insert_all(
                *_t0);
        return;
    }
    }
    throw std::runtime_error(
            "RunnableSequencingConstraint::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean RunnableSequencingConstraint::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__ORDERTYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::RunnableOrderType
                > ::is_set(m_orderType);
    }
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__RUNNABLEGROUPS:
    {
        return m_runnableGroups && m_runnableGroups->size();
    }
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__PROCESSSCOPE:
    {
        return m_processScope && m_processScope->size();
    }
    }
    throw std::runtime_error(
            "RunnableSequencingConstraint::eIsSet Error. FeatureID:"
                    + _featureID);
}

void RunnableSequencingConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "RunnableSequencingConstraint::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr RunnableSequencingConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getRunnableSequencingConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RunnableSequencingConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__RUNNABLEGROUPS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__PROCESSSCOPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RunnableSequencingConstraint::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__RUNNABLEGROUPS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT__PROCESSSCOPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

