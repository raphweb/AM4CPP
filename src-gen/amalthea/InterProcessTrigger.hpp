// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterProcessTrigger.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_INTERPROCESSTRIGGER_HPP
#define AMALTHEA_INTERPROCESSTRIGGER_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ActivityGraphItem.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(InterProcessTrigger_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL InterProcessTrigger : public virtual ::amalthea::ActivityGraphItem
{
public:
    InterProcessTrigger();

    virtual ~InterProcessTrigger();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::InterProcessStimulus_ptr getStimulus () const;
    virtual void setStimulus (::amalthea::InterProcessStimulus_ptr _stimulus);

    virtual ::amalthea::Counter_ptr getCounter () const;
    virtual void setCounter (::amalthea::Counter_ptr _counter);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::INTERPROCESSTRIGGER;

    /*PROTECTED REGION ID(InterProcessTrigger) START*/
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

    /*PROTECTED REGION ID(InterProcessTriggerImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    InterProcessTrigger_ptr _this()
    {   return InterProcessTrigger_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::InterProcessStimulus_ptr m_stimulus;

    ::amalthea::Counter_ptr m_counter;

};

}
 // amalthea

#endif // AMALTHEA_INTERPROCESSTRIGGER_HPP

