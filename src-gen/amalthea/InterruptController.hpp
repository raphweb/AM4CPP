// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterruptController.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_INTERRUPTCONTROLLER_HPP
#define AMALTHEA_INTERRUPTCONTROLLER_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Scheduler.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(InterruptController_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL InterruptController : public virtual ::amalthea::Scheduler
{
public:
    InterruptController();

    virtual ~InterruptController();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::InterruptSchedulingAlgorithm_ptr getSchedulingAlgorithm () const;
    virtual void setSchedulingAlgorithm (::amalthea::InterruptSchedulingAlgorithm_ptr _schedulingAlgorithm);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >& getIsrAllocations () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >& getIsrAllocations ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::INTERRUPTCONTROLLER;

    /*PROTECTED REGION ID(InterruptController) START*/
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

    /*PROTECTED REGION ID(InterruptControllerImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    InterruptController_ptr _this()
    {   return InterruptController_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::InterruptSchedulingAlgorithm_ptr m_schedulingAlgorithm;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ISRAllocation_ptr >> m_isrAllocations;

};

}
 // amalthea

#endif // AMALTHEA_INTERRUPTCONTROLLER_HPP

