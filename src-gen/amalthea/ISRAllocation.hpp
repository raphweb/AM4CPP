// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ISRAllocation.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ISRALLOCATION_HPP
#define AMALTHEA_ISRALLOCATION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ISRAllocation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ISRAllocation : public virtual ::amalthea::BaseObject
{
public:
    ISRAllocation();

    virtual ~ISRAllocation();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EIntegerObject getPriority () const;
    virtual void setPriority (::ecore::EIntegerObject _priority);

    // References
    virtual ::amalthea::ISR_ptr getIsr () const;
    virtual void setIsr (::amalthea::ISR_ptr _isr);

    virtual ::amalthea::InterruptController_ptr getController () const;
    virtual void setController (::amalthea::InterruptController_ptr _controller);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ISRALLOCATION;

    /*PROTECTED REGION ID(ISRAllocation) START*/
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

    /*PROTECTED REGION ID(ISRAllocationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ISRAllocation_ptr _this()
    {   return ISRAllocation_ptr(this);}

private:
    // Attributes

    ::ecore::EIntegerObject m_priority;

    // References

    ::amalthea::ISR_ptr m_isr;

    ::amalthea::InterruptController_ptr m_controller;

};

}
 // amalthea

#endif // AMALTHEA_ISRALLOCATION_HPP

