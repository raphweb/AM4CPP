// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IComponentStructureMemberImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IComponentStructureMember.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ComponentStructure.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IComponentStructureMemberImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void IComponentStructureMember::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(IComponentStructureMemberImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject IComponentStructureMember::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
        if (m_structure)
            _any = ::ecore::as < ::ecore::EObject > (m_structure);
        return _any;
    }
    }
    throw std::runtime_error(
            "IComponentStructureMember::eGet Error. FeatureID:" + _featureID);
}

void IComponentStructureMember::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ComponentStructure_ptr _t1 =
                dynamic_cast< ::amalthea::ComponentStructure* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ComponentStructure >(_t0);*/
        ::amalthea::IComponentStructureMember::setStructure(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "IComponentStructureMember::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean IComponentStructureMember::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
        return (bool) m_structure;
    }
    }
    throw std::runtime_error(
            "IComponentStructureMember::eIsSet Error. FeatureID:" + _featureID);
}

void IComponentStructureMember::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "IComponentStructureMember::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr IComponentStructureMember::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getIComponentStructureMember();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IComponentStructureMember::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IComponentStructureMember::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ICOMPONENTSTRUCTUREMEMBER__STRUCTURE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

