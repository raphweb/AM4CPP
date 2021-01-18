// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConstraintsModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ConstraintsModel.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/EventChain.hpp>
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/AffinityConstraint.hpp>
#include <amalthea/RunnableSequencingConstraint.hpp>
#include <amalthea/DataAgeConstraint.hpp>
#include <amalthea/Requirement.hpp>
#include <amalthea/DataCoherencyGroup.hpp>
#include <amalthea/DataStabilityGroup.hpp>
#include <amalthea/PhysicalSectionConstraint.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ConstraintsModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void ConstraintsModel::_initialize()
{
    // Supertypes
    ::amalthea::BaseObject::_initialize();

    // References
    for (size_t i = 0; i < m_eventChains->size(); i++)
    {
        (*m_eventChains)[i]->_initialize();
    }
    for (size_t i = 0; i < m_timingConstraints->size(); i++)
    {
        (*m_timingConstraints)[i]->_initialize();
    }
    for (size_t i = 0; i < m_affinityConstraints->size(); i++)
    {
        (*m_affinityConstraints)[i]->_initialize();
    }
    for (size_t i = 0; i < m_runnableSequencingConstraints->size(); i++)
    {
        (*m_runnableSequencingConstraints)[i]->_initialize();
    }
    for (size_t i = 0; i < m_dataAgeConstraints->size(); i++)
    {
        (*m_dataAgeConstraints)[i]->_initialize();
    }
    for (size_t i = 0; i < m_requirements->size(); i++)
    {
        (*m_requirements)[i]->_initialize();
    }
    for (size_t i = 0; i < m_dataCoherencyGroups->size(); i++)
    {
        (*m_dataCoherencyGroups)[i]->_initialize();
    }
    for (size_t i = 0; i < m_dataStabilityGroups->size(); i++)
    {
        (*m_dataStabilityGroups)[i]->_initialize();
    }
    for (size_t i = 0; i < m_physicalSectionConstraints->size(); i++)
    {
        (*m_physicalSectionConstraints)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ConstraintsModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ConstraintsModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__EVENTCHAINS:
    {
        _any = m_eventChains->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__TIMINGCONSTRAINTS:
    {
        _any = m_timingConstraints->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__AFFINITYCONSTRAINTS:
    {
        _any = m_affinityConstraints->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__RUNNABLESEQUENCINGCONSTRAINTS:
    {
        _any =
                m_runnableSequencingConstraints->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATAAGECONSTRAINTS:
    {
        _any = m_dataAgeConstraints->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__REQUIREMENTS:
    {
        _any = m_requirements->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATACOHERENCYGROUPS:
    {
        _any = m_dataCoherencyGroups->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATASTABILITYGROUPS:
    {
        _any = m_dataStabilityGroups->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__PHYSICALSECTIONCONSTRAINTS:
    {
        _any =
                m_physicalSectionConstraints->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error(
            "ConstraintsModel::eGet Error. FeatureID:" + _featureID);
}

void ConstraintsModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        amalthea::IAnnotatable::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__EVENTCHAINS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ConstraintsModel::getEventChains().clear();
        ::amalthea::ConstraintsModel::getEventChains().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__TIMINGCONSTRAINTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ConstraintsModel::getTimingConstraints().clear();
        ::amalthea::ConstraintsModel::getTimingConstraints().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__AFFINITYCONSTRAINTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ConstraintsModel::getAffinityConstraints().clear();
        ::amalthea::ConstraintsModel::getAffinityConstraints().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__RUNNABLESEQUENCINGCONSTRAINTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ConstraintsModel::getRunnableSequencingConstraints().clear();
        ::amalthea::ConstraintsModel::getRunnableSequencingConstraints().insert_all(
                *_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATAAGECONSTRAINTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ConstraintsModel::getDataAgeConstraints().clear();
        ::amalthea::ConstraintsModel::getDataAgeConstraints().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__REQUIREMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ConstraintsModel::getRequirements().clear();
        ::amalthea::ConstraintsModel::getRequirements().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATACOHERENCYGROUPS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ConstraintsModel::getDataCoherencyGroups().clear();
        ::amalthea::ConstraintsModel::getDataCoherencyGroups().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATASTABILITYGROUPS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ConstraintsModel::getDataStabilityGroups().clear();
        ::amalthea::ConstraintsModel::getDataStabilityGroups().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__PHYSICALSECTIONCONSTRAINTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::ConstraintsModel::getPhysicalSectionConstraints().clear();
        ::amalthea::ConstraintsModel::getPhysicalSectionConstraints().insert_all(
                *_t0);
        return;
    }
    }
    throw std::runtime_error(
            "ConstraintsModel::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ConstraintsModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
        return amalthea::IAnnotatable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__EVENTCHAINS:
    {
        return m_eventChains && m_eventChains->size();
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__TIMINGCONSTRAINTS:
    {
        return m_timingConstraints && m_timingConstraints->size();
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__AFFINITYCONSTRAINTS:
    {
        return m_affinityConstraints && m_affinityConstraints->size();
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__RUNNABLESEQUENCINGCONSTRAINTS:
    {
        return m_runnableSequencingConstraints
                && m_runnableSequencingConstraints->size();
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATAAGECONSTRAINTS:
    {
        return m_dataAgeConstraints && m_dataAgeConstraints->size();
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__REQUIREMENTS:
    {
        return m_requirements && m_requirements->size();
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATACOHERENCYGROUPS:
    {
        return m_dataCoherencyGroups && m_dataCoherencyGroups->size();
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATASTABILITYGROUPS:
    {
        return m_dataStabilityGroups && m_dataStabilityGroups->size();
    }
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__PHYSICALSECTIONCONSTRAINTS:
    {
        return m_physicalSectionConstraints
                && m_physicalSectionConstraints->size();
    }
    }
    throw std::runtime_error(
            "ConstraintsModel::eIsSet Error. FeatureID:" + _featureID);
}

void ConstraintsModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ConstraintsModel::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ConstraintsModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getConstraintsModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ConstraintsModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__EVENTCHAINS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__TIMINGCONSTRAINTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__AFFINITYCONSTRAINTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__RUNNABLESEQUENCINGCONSTRAINTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATAAGECONSTRAINTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__REQUIREMENTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATACOHERENCYGROUPS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATASTABILITYGROUPS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__PHYSICALSECTIONCONSTRAINTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ConstraintsModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::IANNOTATABLE__CUSTOMPROPERTIES:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__EVENTCHAINS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__TIMINGCONSTRAINTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__AFFINITYCONSTRAINTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__RUNNABLESEQUENCINGCONSTRAINTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATAAGECONSTRAINTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__REQUIREMENTS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATACOHERENCYGROUPS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__DATASTABILITYGROUPS:
    {
    }
        return;
    case ::amalthea::AmaltheaPackage::CONSTRAINTSMODEL__PHYSICALSECTIONCONSTRAINTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

