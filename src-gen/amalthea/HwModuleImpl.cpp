// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwModuleImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwModule.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/PowerDomain.hpp>
#include <amalthea/FrequencyDomain.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(HwModuleImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void HwModule::_initialize()
{
    // Supertypes
    ::amalthea::ReferableBaseObject::_initialize();
    ::amalthea::ITaggable::_initialize();

    // References
    for (size_t i = 0; i < m_ports->size(); i++)
    {
        (*m_ports)[i]->_initialize();
    }

    /*PROTECTED REGION ID(HwModuleImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject HwModule::eGet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    {
        _any = m_ports->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    {
        if (m_powerDomain)
            _any = ::ecore::as < ::ecore::EObject > (m_powerDomain);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
        if (m_frequencyDomain)
            _any = ::ecore::as < ::ecore::EObject > (m_frequencyDomain);
        return _any;
    }
    }
    throw std::runtime_error("HwModule::eGet Error. FeatureID:" + _featureID);
}

void HwModule::eSet(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::HwModule::getPorts().clear();
        ::amalthea::HwModule::getPorts().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::PowerDomain_ptr _t1 =
                dynamic_cast< ::amalthea::PowerDomain* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::PowerDomain >(_t0);*/
        ::amalthea::HwModule::setPowerDomain(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::FrequencyDomain_ptr _t1 =
                dynamic_cast< ::amalthea::FrequencyDomain* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::FrequencyDomain >(_t0);*/
        ::amalthea::HwModule::setFrequencyDomain(_t1);
        return;
    }
    }
    throw std::runtime_error("HwModule::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean HwModule::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    {
        return m_ports && m_ports->size();
    }
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    {
        return (bool) m_powerDomain;
    }
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
        return (bool) m_frequencyDomain;
    }
    }
    throw std::runtime_error("HwModule::eIsSet Error. FeatureID:" + _featureID);
}

void HwModule::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("HwModule::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr HwModule::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getHwModule();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void HwModule::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void HwModule::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__PORTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__POWERDOMAIN:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWMODULE__FREQUENCYDOMAIN:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

