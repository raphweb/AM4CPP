// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConstraintsModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ConstraintsModel.hpp"
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
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ConstraintsModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ConstraintsModel::ConstraintsModel()
{

    m_eventChains.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::EventChain_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConstraintsModel__eventChains()));
    m_timingConstraints.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::TimingConstraint_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConstraintsModel__timingConstraints()));
    m_affinityConstraints.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::AffinityConstraint_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConstraintsModel__affinityConstraints()));
    m_runnableSequencingConstraints.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::RunnableSequencingConstraint_ptr, -1, true,
                    false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConstraintsModel__runnableSequencingConstraints()));
    m_dataAgeConstraints.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::DataAgeConstraint_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConstraintsModel__dataAgeConstraints()));
    m_requirements.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Requirement_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConstraintsModel__requirements()));
    m_dataCoherencyGroups.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::DataCoherencyGroup_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConstraintsModel__dataCoherencyGroups()));
    m_dataStabilityGroups.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::DataStabilityGroup_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getConstraintsModel__dataStabilityGroups()));
    m_physicalSectionConstraints.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::PhysicalSectionConstraint_ptr, -1, true, false >(
                    this,
                    ::amalthea::AmaltheaPackage::_instance()->getConstraintsModel__physicalSectionConstraints()));

    /*PROTECTED REGION ID(ConstraintsModelImpl__ConstraintsModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ConstraintsModel::~ConstraintsModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >& ConstraintsModel::getEventChains() const
{
    return *m_eventChains;
}

::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >& ConstraintsModel::getEventChains()
{
    return *m_eventChains;
}

const ::ecorecpp::mapping::EList< ::amalthea::TimingConstraint_ptr >& ConstraintsModel::getTimingConstraints() const
{
    return *m_timingConstraints;
}

::ecorecpp::mapping::EList< ::amalthea::TimingConstraint_ptr >& ConstraintsModel::getTimingConstraints()
{
    return *m_timingConstraints;
}

const ::ecorecpp::mapping::EList< ::amalthea::AffinityConstraint_ptr >& ConstraintsModel::getAffinityConstraints() const
{
    return *m_affinityConstraints;
}

::ecorecpp::mapping::EList< ::amalthea::AffinityConstraint_ptr >& ConstraintsModel::getAffinityConstraints()
{
    return *m_affinityConstraints;
}

const ::ecorecpp::mapping::EList< ::amalthea::RunnableSequencingConstraint_ptr >& ConstraintsModel::getRunnableSequencingConstraints() const
{
    return *m_runnableSequencingConstraints;
}

::ecorecpp::mapping::EList< ::amalthea::RunnableSequencingConstraint_ptr >& ConstraintsModel::getRunnableSequencingConstraints()
{
    return *m_runnableSequencingConstraints;
}

const ::ecorecpp::mapping::EList< ::amalthea::DataAgeConstraint_ptr >& ConstraintsModel::getDataAgeConstraints() const
{
    return *m_dataAgeConstraints;
}

::ecorecpp::mapping::EList< ::amalthea::DataAgeConstraint_ptr >& ConstraintsModel::getDataAgeConstraints()
{
    return *m_dataAgeConstraints;
}

const ::ecorecpp::mapping::EList< ::amalthea::Requirement_ptr >& ConstraintsModel::getRequirements() const
{
    return *m_requirements;
}

::ecorecpp::mapping::EList< ::amalthea::Requirement_ptr >& ConstraintsModel::getRequirements()
{
    return *m_requirements;
}

const ::ecorecpp::mapping::EList< ::amalthea::DataCoherencyGroup_ptr >& ConstraintsModel::getDataCoherencyGroups() const
{
    return *m_dataCoherencyGroups;
}

::ecorecpp::mapping::EList< ::amalthea::DataCoherencyGroup_ptr >& ConstraintsModel::getDataCoherencyGroups()
{
    return *m_dataCoherencyGroups;
}

const ::ecorecpp::mapping::EList< ::amalthea::DataStabilityGroup_ptr >& ConstraintsModel::getDataStabilityGroups() const
{
    return *m_dataStabilityGroups;
}

::ecorecpp::mapping::EList< ::amalthea::DataStabilityGroup_ptr >& ConstraintsModel::getDataStabilityGroups()
{
    return *m_dataStabilityGroups;
}

const ::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionConstraint_ptr >& ConstraintsModel::getPhysicalSectionConstraints() const
{
    return *m_physicalSectionConstraints;
}

::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionConstraint_ptr >& ConstraintsModel::getPhysicalSectionConstraints()
{
    return *m_physicalSectionConstraints;
}

