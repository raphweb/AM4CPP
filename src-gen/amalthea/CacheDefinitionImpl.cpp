// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CacheDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CacheDefinition.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/Namespace.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CacheDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void CacheDefinition::_initialize()
{
    // Supertypes
    ::amalthea::HwDefinition::_initialize();

    // References
    if (m_size)
    {
        m_size->_initialize();
    }
    if (m_lineSize)
    {
        m_lineSize->_initialize();
    }
    if (m_accessLatency)
    {
        m_accessLatency->_initialize();
    }

    /*PROTECTED REGION ID(CacheDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CacheDefinition::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
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
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__SIZE:
    {
        if (m_size)
            _any = ::ecore::as < ::ecore::EObject > (m_size);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__LINESIZE:
    {
        if (m_lineSize)
            _any = ::ecore::as < ::ecore::EObject > (m_lineSize);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__ACCESSLATENCY:
    {
        if (m_accessLatency)
            _any = ::ecore::as < ::ecore::EObject > (m_accessLatency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__CACHETYPE:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::CacheType
                > ::toAny(_any, m_cacheType);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__WRITESTRATEGY:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::WriteStrategy
                > ::toAny(_any, m_writeStrategy);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__NWAYS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_nWays);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__COHERENCY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_coherency);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__EXCLUSIVE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_exclusive);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__HITRATE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_hitRate);
        return _any;
    }
    }
    throw std::runtime_error(
            "CacheDefinition::eGet Error. FeatureID:" + _featureID);
}

void CacheDefinition::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__SIZE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataSize_ptr _t1 =
                dynamic_cast< ::amalthea::DataSize* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataSize >(_t0);*/
        ::amalthea::CacheDefinition::setSize(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__LINESIZE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::DataSize_ptr _t1 =
                dynamic_cast< ::amalthea::DataSize* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::DataSize >(_t0);*/
        ::amalthea::CacheDefinition::setLineSize(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__ACCESSLATENCY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::IDiscreteValueDeviation_ptr _t1 =
                dynamic_cast< ::amalthea::IDiscreteValueDeviation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::IDiscreteValueDeviation >(_t0);*/
        ::amalthea::CacheDefinition::setAccessLatency(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__CACHETYPE:
    {
        ::amalthea::CacheType _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::CacheType
                > ::fromAny(_newValue, _t0);
        ::amalthea::CacheDefinition::setCacheType(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__WRITESTRATEGY:
    {
        ::amalthea::WriteStrategy _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::WriteStrategy
                > ::fromAny(_newValue, _t0);
        ::amalthea::CacheDefinition::setWriteStrategy(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__NWAYS:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::amalthea::CacheDefinition::setNWays(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__COHERENCY:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::CacheDefinition::setCoherency(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__EXCLUSIVE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::amalthea::CacheDefinition::setExclusive(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__HITRATE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::amalthea::CacheDefinition::setHitRate(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "CacheDefinition::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean CacheDefinition::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__SIZE:
    {
        return (bool) m_size;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__LINESIZE:
    {
        return (bool) m_lineSize;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__ACCESSLATENCY:
    {
        return (bool) m_accessLatency;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__CACHETYPE:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::CacheType
                > ::is_set(m_cacheType);
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__WRITESTRATEGY:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::WriteStrategy
                > ::is_set(m_writeStrategy);
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__NWAYS:
    {
        return m_nWays != 0;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__COHERENCY:
    {
        return m_coherency != false;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__EXCLUSIVE:
    {
        return m_exclusive != false;
    }
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__HITRATE:
    {
        return m_hitRate != 0.0;
    }
    }
    throw std::runtime_error(
            "CacheDefinition::eIsSet Error. FeatureID:" + _featureID);
}

void CacheDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "CacheDefinition::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr CacheDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getCacheDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CacheDefinition::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
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
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__LINESIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__ACCESSLATENCY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CacheDefinition::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
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
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__SIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__LINESIZE:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CACHEDEFINITION__ACCESSLATENCY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

