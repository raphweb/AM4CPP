// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TaskScheduler.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TASKSCHEDULER_HPP
#define AMALTHEA_TASKSCHEDULER_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Scheduler.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TaskScheduler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TaskScheduler : public virtual ::amalthea::Scheduler
{
public:
    TaskScheduler();

    virtual ~TaskScheduler();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::TaskSchedulingAlgorithm_ptr getSchedulingAlgorithm () const;
    virtual void setSchedulingAlgorithm (::amalthea::TaskSchedulingAlgorithm_ptr _schedulingAlgorithm);

    virtual ::amalthea::SchedulerAssociation_ptr getParentAssociation () const;
    virtual void setParentAssociation (::amalthea::SchedulerAssociation_ptr _parentAssociation);
    virtual ::amalthea::SchedulerAssociation_ptr basicgetParentAssociation ();
    virtual void basicsetParentAssociation (::amalthea::SchedulerAssociation_ptr _parentAssociation);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::SchedulerAssociation_ptr >& getChildAssociations () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::SchedulerAssociation_ptr >& getChildAssociations ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >& getTaskAllocations () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >& getTaskAllocations ();

    virtual ::amalthea::TaskScheduler_ptr getParentScheduler () const;
    virtual void setParentScheduler (::amalthea::TaskScheduler_ptr _parentScheduler);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >& getChildSchedulers () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >& getChildSchedulers ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TASKSCHEDULER;

    /*PROTECTED REGION ID(TaskScheduler) START*/
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

    /*PROTECTED REGION ID(TaskSchedulerImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TaskScheduler_ptr _this()
    {   return TaskScheduler_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::TaskSchedulingAlgorithm_ptr m_schedulingAlgorithm;

    ::amalthea::SchedulerAssociation_ptr m_parentAssociation;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::SchedulerAssociation_ptr >> m_childAssociations;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::TaskAllocation_ptr >> m_taskAllocations;

    ::amalthea::TaskScheduler_ptr m_parentScheduler;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::TaskScheduler_ptr >> m_childSchedulers;

};

}
 // amalthea

#endif // AMALTHEA_TASKSCHEDULER_HPP

