// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableAllocation.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RUNNABLEALLOCATION_HPP
#define AMALTHEA_RUNNABLEALLOCATION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(RunnableAllocation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL RunnableAllocation : public virtual ::amalthea::BaseObject
{
public:
    RunnableAllocation();

    virtual ~RunnableAllocation();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Scheduler_ptr getScheduler () const;
    virtual void setScheduler (::amalthea::Scheduler_ptr _scheduler);

    virtual ::amalthea::Runnable_ptr getEntity () const;
    virtual void setEntity (::amalthea::Runnable_ptr _entity);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::RUNNABLEALLOCATION;

    /*PROTECTED REGION ID(RunnableAllocation) START*/
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

    /*PROTECTED REGION ID(RunnableAllocationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RunnableAllocation_ptr _this()
    {   return RunnableAllocation_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Scheduler_ptr m_scheduler;

    ::amalthea::Runnable_ptr m_entity;

};

}
 // amalthea

#endif // AMALTHEA_RUNNABLEALLOCATION_HPP

