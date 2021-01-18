// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OSModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OSModel.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Semaphore.hpp>
#include <amalthea/OperatingSystem.hpp>
#include <amalthea/OsOverhead.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(OSModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void OSModel::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_semaphores->size(); i++)
    {
        (*m_semaphores)[i]->_initialize();
    }
    for (size_t i = 0; i < m_operatingSystems->size(); i++)
    {
        (*m_operatingSystems)[i]->_initialize();
    }
    for (size_t i = 0; i < m_osOverheads->size(); i++)
    {
        (*m_osOverheads)[i]->_initialize();
    }

    /*PROTECTED REGION ID(OSModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OSModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::OSMODEL__SEMAPHORES:
    {
        _any = m_semaphores->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSMODEL__OPERATINGSYSTEMS:
    {
        _any = m_operatingSystems->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::OSMODEL__OSOVERHEADS:
    {
        _any = m_osOverheads->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("OSModel::eGet Error. FeatureID:" + _featureID);
}

void OSModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSMODEL__SEMAPHORES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::OSModel::getSemaphores().clear();
        ::amalthea::OSModel::getSemaphores().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSMODEL__OPERATINGSYSTEMS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::OSModel::getOperatingSystems().clear();
        ::amalthea::OSModel::getOperatingSystems().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::OSMODEL__OSOVERHEADS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::OSModel::getOsOverheads().clear();
        ::amalthea::OSModel::getOsOverheads().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("OSModel::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean OSModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::OSMODEL__SEMAPHORES:
    {
        return m_semaphores && m_semaphores->size();
    }
    case ::amalthea::AmaltheaPackage::OSMODEL__OPERATINGSYSTEMS:
    {
        return m_operatingSystems && m_operatingSystems->size();
    }
    case ::amalthea::AmaltheaPackage::OSMODEL__OSOVERHEADS:
    {
        return m_osOverheads && m_osOverheads->size();
    }
    }
    throw std::runtime_error("OSModel::eIsSet Error. FeatureID:" + _featureID);
}

void OSModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("OSModel::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr OSModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getOSModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void OSModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSMODEL__SEMAPHORES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSMODEL__OPERATINGSYSTEMS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSMODEL__OSOVERHEADS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void OSModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSMODEL__SEMAPHORES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSMODEL__OPERATINGSYSTEMS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::OSMODEL__OSOVERHEADS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

