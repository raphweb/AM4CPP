// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IActivityGraphItemContainerImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IActivityGraphItemContainer.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IActivityGraphItemContainerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void IActivityGraphItemContainer::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_items->size(); i++)
    {
        (*m_items)[i]->_initialize();
    }

    /*PROTECTED REGION ID(IActivityGraphItemContainerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject IActivityGraphItemContainer::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        _any = m_items->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "IActivityGraphItemContainer::eGet Error. FeatureID:" + _featureID);
}

void IActivityGraphItemContainer::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::IActivityGraphItemContainer::getItems().clear();
        ::amalthea::IActivityGraphItemContainer::getItems().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error(
            "IActivityGraphItemContainer::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean IActivityGraphItemContainer::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
        return m_items && m_items->size();
    }
    }
    throw std::runtime_error(
            "IActivityGraphItemContainer::eIsSet Error. FeatureID:"
                    + _featureID);
}

void IActivityGraphItemContainer::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "IActivityGraphItemContainer::eUnset Error. FeatureID:"
                    + _featureID);
}

::ecore::EClass_ptr IActivityGraphItemContainer::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getIActivityGraphItemContainer();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IActivityGraphItemContainer::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IActivityGraphItemContainer::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IACTIVITYGRAPHITEMCONTAINER__ITEMS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

