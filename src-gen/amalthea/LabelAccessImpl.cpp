// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/LabelAccessImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "LabelAccess.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ComputationItem.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/IDependsOn.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/DataDependency.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/LabelAccessStatistic.hpp>
#include <amalthea/TransmissionPolicy.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(LabelAccessImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void LabelAccess::_initialize()
{
    // Supertypes
    ::amalthea::ComputationItem::_initialize();
    ::amalthea::ITaggable::_initialize();
    ::amalthea::IDependsOn::_initialize();

    // References
    if (m_statistic)
    {
        m_statistic->_initialize();
    }
    if (m_transmissionPolicy)
    {
        m_transmissionPolicy->_initialize();
    }

    /*PROTECTED REGION ID(LabelAccessImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject LabelAccess::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        return amalthea::IDependsOn::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__DATA:
    {
        if (m_data)
            _any = ::ecore::as < ::ecore::EObject > (m_data);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__ACCESS:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::LabelAccessEnum
                > ::toAny(_any, m_access);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__STATISTIC:
    {
        if (m_statistic)
            _any = ::ecore::as < ::ecore::EObject > (m_statistic);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__TRANSMISSIONPOLICY:
    {
        if (m_transmissionPolicy)
            _any = ::ecore::as < ::ecore::EObject > (m_transmissionPolicy);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__DATASTABILITY:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::LabelAccessDataStability
                > ::toAny(_any, m_dataStability);
        return _any;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__IMPLEMENTATION:
    {
        ::ecorecpp::mapping::any_traits < ::amalthea::LabelAccessImplementation
                > ::toAny(_any, m_implementation);
        return _any;
    }
    }
    throw std::runtime_error(
            "LabelAccess::eGet Error. FeatureID:" + _featureID);
}

void LabelAccess::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        amalthea::ITaggable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        amalthea::IDependsOn::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__DATA:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Label_ptr _t1 =
                dynamic_cast< ::amalthea::Label* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Label >(_t0);*/
        ::amalthea::LabelAccess::setData(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__ACCESS:
    {
        ::amalthea::LabelAccessEnum _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::LabelAccessEnum
                > ::fromAny(_newValue, _t0);
        ::amalthea::LabelAccess::setAccess(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__STATISTIC:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::LabelAccessStatistic_ptr _t1 =
                dynamic_cast< ::amalthea::LabelAccessStatistic* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::LabelAccessStatistic >(_t0);*/
        ::amalthea::LabelAccess::setStatistic(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__TRANSMISSIONPOLICY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::TransmissionPolicy_ptr _t1 =
                dynamic_cast< ::amalthea::TransmissionPolicy* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::TransmissionPolicy >(_t0);*/
        ::amalthea::LabelAccess::setTransmissionPolicy(_t1);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__DATASTABILITY:
    {
        ::amalthea::LabelAccessDataStability _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::LabelAccessDataStability
                > ::fromAny(_newValue, _t0);
        ::amalthea::LabelAccess::setDataStability(_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__IMPLEMENTATION:
    {
        ::amalthea::LabelAccessImplementation _t0;
        ::ecorecpp::mapping::any_traits < ::amalthea::LabelAccessImplementation
                > ::fromAny(_newValue, _t0);
        ::amalthea::LabelAccess::setImplementation(_t0);
        return;
    }
    }
    throw std::runtime_error(
            "LabelAccess::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean LabelAccess::eIsSet(::ecore::EInt _featureID)
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
    case ::amalthea::AmaltheaPackage::ITAGGABLE__TAGS:
    {
        return amalthea::ITaggable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
        return amalthea::IDependsOn::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__DATA:
    {
        return (bool) m_data;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__ACCESS:
    {
        return ::ecorecpp::mapping::set_traits < ::amalthea::LabelAccessEnum
                > ::is_set(m_access);
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__STATISTIC:
    {
        return (bool) m_statistic;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__TRANSMISSIONPOLICY:
    {
        return (bool) m_transmissionPolicy;
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__DATASTABILITY:
    {
        return ::ecorecpp::mapping::set_traits
                < ::amalthea::LabelAccessDataStability
                > ::is_set(m_dataStability);
    }
    case ::amalthea::AmaltheaPackage::LABELACCESS__IMPLEMENTATION:
    {
        return ::ecorecpp::mapping::set_traits
                < ::amalthea::LabelAccessImplementation
                > ::is_set(m_implementation);
    }
    }
    throw std::runtime_error(
            "LabelAccess::eIsSet Error. FeatureID:" + _featureID);
}

void LabelAccess::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "LabelAccess::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr LabelAccess::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getLabelAccess();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void LabelAccess::_inverseAdd(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESS__DATA:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESS__STATISTIC:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESS__TRANSMISSIONPOLICY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void LabelAccess::_inverseRemove(::ecore::EInt _featureID,
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
    case ::amalthea::AmaltheaPackage::IDEPENDSON__DEPENDSON:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESS__DATA:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESS__STATISTIC:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::LABELACCESS__TRANSMISSIONPOLICY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

