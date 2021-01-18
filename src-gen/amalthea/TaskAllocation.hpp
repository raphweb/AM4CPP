// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TaskAllocation.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TASKALLOCATION_HPP
#define AMALTHEA_TASKALLOCATION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TaskAllocation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TaskAllocation : public virtual ::amalthea::BaseObject
{
public:
    TaskAllocation();

    virtual ~TaskAllocation();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Task_ptr getTask () const;
    virtual void setTask (::amalthea::Task_ptr _task);

    virtual ::amalthea::TaskScheduler_ptr getScheduler () const;
    virtual void setScheduler (::amalthea::TaskScheduler_ptr _scheduler);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ProcessingUnit_ptr >& getAffinity () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ProcessingUnit_ptr >& getAffinity ();

    virtual ::amalthea::SchedulingParameters_ptr getSchedulingParameters () const;
    virtual void setSchedulingParameters (::amalthea::SchedulingParameters_ptr _schedulingParameters);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& getParameterExtensions () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >& getParameterExtensions ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TASKALLOCATION;

    /*PROTECTED REGION ID(TaskAllocation) START*/
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

    /*PROTECTED REGION ID(TaskAllocationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TaskAllocation_ptr _this()
    {   return TaskAllocation_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Task_ptr m_task;

    ::amalthea::TaskScheduler_ptr m_scheduler;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ProcessingUnit_ptr >> m_affinity;

    ::amalthea::SchedulingParameters_ptr m_schedulingParameters;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ParameterExtension_ptr >> m_parameterExtensions;

};

}
 // amalthea

#endif // AMALTHEA_TASKALLOCATION_HPP

