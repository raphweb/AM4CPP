// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/HwAccessElementImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "HwAccessElement.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/HwAccessPath.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DataRate.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(HwAccessElementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void HwAccessElement::_initialize()
{
    // Supertypes
    ::amalthea::ITaggable::_initialize();
    ::amalthea::INamed::_initialize();

    // References
    if (m_accessPath)
    {
        m_accessPath->_initialize();
    }
    if (m_readLatency)
    {
        m_readLatency->_initialize();
    }
    if (m_writeLatency)
    {
        m_writeLatency->_initialize();
    }
    if (m_dataRate)
    {
        m_dataRate->_initialize();
    }

    /*PROTECTED REGION ID(HwAccessElementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject HwAccessElement::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__SOURCE:
    {
        if (m_source)
            _any = ::ecore::as < ::ecore::EObject > (m_source);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DESTINATION:
    {
        if (m_destination)
            _any = ::ecore::as < ::ecore::EObject > (m_destination);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__ACCESSPATH:
    {
        if (m_accessPath)
            _any = ::ecore::as < ::ecore::EObject > (m_accessPath);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__READLATENCY:
    {
        if (m_readLatency)
            _any = ::ecore::as < ::ecore::EObject > (m_readLatency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__WRITELATENCY:
    {
        if (m_writeLatency)
            _any = ::ecore::as < ::ecore::EObject > (m_writeLatency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DATARATE:
    {
        if (m_dataRate)
            _any = ::ecore::as < ::ecore::EObject > (m_dataRate);
        return _any;
    }
    }
    throw std::runtime_error(
            "HwAccessElement::eGet Error. FeatureID:" + _featureID);
}

void HwAccessElement::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__SOURCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessingUnit_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessingUnit* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::ProcessingUnit >(_t0);*/
        ::amalthea::HwAccessElement::setSource(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DESTINATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwDestination_ptr _t1 =
                dynamic_cast< ::amalthea::HwDestination* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::HwDestination >(_t0);*/
        ::amalthea::HwAccessElement::setDestination(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__ACCESSPATH:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwAccessPath_ptr _t1 =
                dynamic_cast< ::amalthea::HwAccessPath* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::HwAccessPath >(_t0);*/
        ::amalthea::HwAccessElement::setAccessPath(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__READLATENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::HwAccessElement::setReadLatency(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__WRITELATENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::HwAccessElement::setWriteLatency(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DATARATE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataRate_ptr _t1 =
                dynamic_cast< ::amalthea::DataRate* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataRate >(_t0);*/
        ::amalthea::HwAccessElement::setDataRate(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "HwAccessElement::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean HwAccessElement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__SOURCE:
    {
        return (bool) m_source;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DESTINATION:
    {
        return (bool) m_destination;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__ACCESSPATH:
    {
        return (bool) m_accessPath;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__READLATENCY:
    {
        return (bool) m_readLatency;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__WRITELATENCY:
    {
        return (bool) m_writeLatency;
    }
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DATARATE:
    {
        return (bool) m_dataRate;
    }
    }
    throw std::runtime_error(
            "HwAccessElement::eIsSet Error. FeatureID:" + _featureID);
}

void HwAccessElement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "HwAccessElement::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr HwAccessElement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getHwAccessElement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void HwAccessElement::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__SOURCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::ProcessingUnit_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessingUnit* >(_t0.get());

        // set reference
        basicsetSource(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DESTINATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__ACCESSPATH:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::HwAccessPath_ptr _t1 =
                dynamic_cast< ::amalthea::HwAccessPath* >(_t0.get());

        // set reference
        basicsetAccessPath(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__READLATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__WRITELATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DATARATE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void HwAccessElement::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__SOURCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::ProcessingUnit_ptr _t1 =
                dynamic_cast< ::amalthea::ProcessingUnit* >(_t0.get());

        // set reference
        if (basicgetSource() == _t1)
            basicsetSource(nullptr);
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DESTINATION:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__ACCESSPATH:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::HwAccessPath_ptr _t1 =
                dynamic_cast< ::amalthea::HwAccessPath* >(_t0.get());

        // set reference
        if (basicgetAccessPath() == _t1)
            basicsetAccessPath(nullptr);
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__READLATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__WRITELATENCY:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::HWACCESSELEMENT__DATARATE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

