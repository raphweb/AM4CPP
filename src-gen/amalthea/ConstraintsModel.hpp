// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ConstraintsModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CONSTRAINTSMODEL_HPP
#define AMALTHEA_CONSTRAINTSMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ConstraintsModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ConstraintsModel : public virtual ::amalthea::BaseObject
{
public:
    ConstraintsModel();

    virtual ~ConstraintsModel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >& getEventChains () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >& getEventChains ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::TimingConstraint_ptr >& getTimingConstraints () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::TimingConstraint_ptr >& getTimingConstraints ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::AffinityConstraint_ptr >& getAffinityConstraints () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::AffinityConstraint_ptr >& getAffinityConstraints ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::RunnableSequencingConstraint_ptr >& getRunnableSequencingConstraints () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::RunnableSequencingConstraint_ptr >& getRunnableSequencingConstraints ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::DataAgeConstraint_ptr >& getDataAgeConstraints () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::DataAgeConstraint_ptr >& getDataAgeConstraints ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Requirement_ptr >& getRequirements () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Requirement_ptr >& getRequirements ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::DataCoherencyGroup_ptr >& getDataCoherencyGroups () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::DataCoherencyGroup_ptr >& getDataCoherencyGroups ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::DataStabilityGroup_ptr >& getDataStabilityGroups () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::DataStabilityGroup_ptr >& getDataStabilityGroups ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionConstraint_ptr >& getPhysicalSectionConstraints () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionConstraint_ptr >& getPhysicalSectionConstraints ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CONSTRAINTSMODEL;

    /*PROTECTED REGION ID(ConstraintsModel) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
    virtual void eUnset ( ::ecore::EInt _featureID) override;
    virtual ::ecore::EClass_ptr _eClass () override;
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;

    /*PROTECTED REGION ID(ConstraintsModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ConstraintsModel_ptr _this()
    {   return ConstraintsModel_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::EventChain_ptr >> m_eventChains;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::TimingConstraint_ptr >> m_timingConstraints;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::AffinityConstraint_ptr >> m_affinityConstraints;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::RunnableSequencingConstraint_ptr >> m_runnableSequencingConstraints;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::DataAgeConstraint_ptr >> m_dataAgeConstraints;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Requirement_ptr >> m_requirements;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::DataCoherencyGroup_ptr >> m_dataCoherencyGroups;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::DataStabilityGroup_ptr >> m_dataStabilityGroups;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::PhysicalSectionConstraint_ptr >> m_physicalSectionConstraints;

};

}
 // amalthea

#endif // AMALTHEA_CONSTRAINTSMODEL_HPP

