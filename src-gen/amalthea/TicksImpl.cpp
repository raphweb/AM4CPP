// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TicksImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Ticks.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ComputationItem.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/TicksEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TicksImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Ticks::_initialize()
{
    // Supertypes
    ::amalthea::ComputationItem::_initialize();

    // References
    if (m_default)
    {
        m_default->_initialize();
    }
    for (size_t i = 0; i < m_extended->size(); i++)
    {
        (*m_extended)[i]->_initialize();
    }

    /*PROTECTED REGION ID(TicksImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Ticks::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::TICKS__DEFAULT:
    {
        if (m_default)
            _any = ::ecore::as < ::ecore::EObject > (m_default);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::TICKS__EXTENDED:
    {
        _any = m_extended->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("Ticks::eGet Error. FeatureID:" + _featureID);
}

void Ticks::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::TICKS__DEFAULT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::Ticks::setDefault(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::TICKS__EXTENDED:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Ticks::getExtended().clear();
        ::amalthea::Ticks::getExtended().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("Ticks::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Ticks::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGPROCESS:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGRUNNABLE:
    case ::amalthea::AmaltheaPackage::ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH:
    {
        return amalthea::ActivityGraphItem::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::TICKS__DEFAULT:
    {
        return (bool) m_default;
    }
    case ::amalthea::AmaltheaPackage::TICKS__EXTENDED:
    {
        return m_extended && m_extended->size();
    }
    }
    throw std::runtime_error("Ticks::eIsSet Error. FeatureID:" + _featureID);
}

void Ticks::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("Ticks::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Ticks::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getTicks();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Ticks::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TICKS__DEFAULT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TICKS__EXTENDED:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Ticks::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TICKS__DEFAULT:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::TICKS__EXTENDED:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

