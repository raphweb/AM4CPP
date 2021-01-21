// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/UserSpecificSchedulingAlgorithmImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "UserSpecificSchedulingAlgorithm.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/TaskSchedulingAlgorithm.hpp>
#include <amalthea/InterruptSchedulingAlgorithm.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/ParameterExtension.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(UserSpecificSchedulingAlgorithmImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void UserSpecificSchedulingAlgorithm::_initialize()
{
    // Supertypes
    ::amalthea::TaskSchedulingAlgorithm::_initialize();
    ::amalthea::InterruptSchedulingAlgorithm::_initialize();

    // References
    for (size_t i = 0; i < m_parameterExtensions->size(); i++)
    {
        (*m_parameterExtensions)[i]->_initialize();
    }

    /*PROTECTED REGION ID(UserSpecificSchedulingAlgorithmImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject UserSpecificSchedulingAlgorithm::eGet(
        ::ecore::EInt _featureID, [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::USERSPECIFICSCHEDULINGALGORITHM__PARAMETEREXTENSIONS:
    {
        _any = m_parameterExtensions->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "UserSpecificSchedulingAlgorithm::eGet Error. FeatureID:"
                    + _featureID);
}

void UserSpecificSchedulingAlgorithm::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::USERSPECIFICSCHEDULINGALGORITHM__PARAMETEREXTENSIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::UserSpecificSchedulingAlgorithm::getParameterExtensions().clear();
        ::amalthea::UserSpecificSchedulingAlgorithm::getParameterExtensions().insert_all(
                *_t0);
        return;
    }
    }
    throw std::runtime_error(
            "UserSpecificSchedulingAlgorithm::eSet Error. FeatureID:"
                    + _featureID);
}

::ecore::EBoolean UserSpecificSchedulingAlgorithm::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::USERSPECIFICSCHEDULINGALGORITHM__PARAMETEREXTENSIONS:
    {
        return m_parameterExtensions && m_parameterExtensions->size();
    }
    }
    throw std::runtime_error(
            "UserSpecificSchedulingAlgorithm::eIsSet Error. FeatureID:"
                    + _featureID);
}

void UserSpecificSchedulingAlgorithm::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "UserSpecificSchedulingAlgorithm::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr UserSpecificSchedulingAlgorithm::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getUserSpecificSchedulingAlgorithm();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void UserSpecificSchedulingAlgorithm::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::USERSPECIFICSCHEDULINGALGORITHM__PARAMETEREXTENSIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void UserSpecificSchedulingAlgorithm::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::USERSPECIFICSCHEDULINGALGORITHM__PARAMETEREXTENSIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

