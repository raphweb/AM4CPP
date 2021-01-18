// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Task.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TASK_HPP
#define AMALTHEA_TASK_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Preemption.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Task_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Task : public virtual ::amalthea::Process
{
public:
    Task();

    virtual ~Task();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::Preemption getPreemption () const;
    virtual void setPreemption (::amalthea::Preemption _preemption);

    virtual ::ecore::EInt getMultipleTaskActivationLimit () const;
    virtual void setMultipleTaskActivationLimit (::ecore::EInt _multipleTaskActivationLimit);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TASK;

    /*PROTECTED REGION ID(Task) START*/
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

    /*PROTECTED REGION ID(TaskImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Task_ptr _this()
    {   return Task_ptr(this);}

private:
    // Attributes

    ::amalthea::Preemption m_preemption;

    ::ecore::EInt m_multipleTaskActivationLimit;

    // References

};

}
 // amalthea

#endif // AMALTHEA_TASK_HPP

