// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ProcessPrototype.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PROCESSPROTOTYPE_HPP
#define AMALTHEA_PROCESSPROTOTYPE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/Preemption.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ProcessPrototype_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ProcessPrototype : public virtual ::amalthea::AbstractProcess
{
public:
    ProcessPrototype();

    virtual ~ProcessPrototype();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::Preemption getPreemption () const;
    virtual void setPreemption (::amalthea::Preemption _preemption);

    // References
    virtual ::amalthea::Runnable_ptr getFirstRunnable () const;
    virtual void setFirstRunnable (::amalthea::Runnable_ptr _firstRunnable);

    virtual ::amalthea::Runnable_ptr getLastRunnable () const;
    virtual void setLastRunnable (::amalthea::Runnable_ptr _lastRunnable);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::AccessPrecedenceSpec_ptr >& getAccessPrecedenceSpec () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::AccessPrecedenceSpec_ptr >& getAccessPrecedenceSpec ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::OrderPrecedenceSpec_ptr >& getOrderPrecedenceSpec () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::OrderPrecedenceSpec_ptr >& getOrderPrecedenceSpec ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ChainedProcessPrototype_ptr >& getChainedPrototypes () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ChainedProcessPrototype_ptr >& getChainedPrototypes ();

    virtual ::amalthea::Activation_ptr getActivation () const;
    virtual void setActivation (::amalthea::Activation_ptr _activation);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >& getRunnableCalls () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >& getRunnableCalls ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PROCESSPROTOTYPE;

    /*PROTECTED REGION ID(ProcessPrototype) START*/
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

    /*PROTECTED REGION ID(ProcessPrototypeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ProcessPrototype_ptr _this()
    {   return ProcessPrototype_ptr(this);}

private:
    // Attributes

    ::amalthea::Preemption m_preemption;

    // References

    ::amalthea::Runnable_ptr m_firstRunnable;

    ::amalthea::Runnable_ptr m_lastRunnable;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::AccessPrecedenceSpec_ptr >> m_accessPrecedenceSpec;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::OrderPrecedenceSpec_ptr >> m_orderPrecedenceSpec;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ChainedProcessPrototype_ptr >> m_chainedPrototypes;

    ::amalthea::Activation_ptr m_activation;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::RunnableCall_ptr >> m_runnableCalls;

};

}
 // amalthea

#endif // AMALTHEA_PROCESSPROTOTYPE_HPP

