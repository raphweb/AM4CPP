// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClockStep.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CLOCKSTEP_HPP
#define AMALTHEA_CLOCKSTEP_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ClockStep_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ClockStep : public virtual ::amalthea::BaseObject
{
public:
    ClockStep();

    virtual ~ClockStep();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Frequency_ptr getFrequency () const;
    virtual void setFrequency (::amalthea::Frequency_ptr _frequency);

    virtual ::amalthea::Time_ptr getTime () const;
    virtual void setTime (::amalthea::Time_ptr _time);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CLOCKSTEP;

    /*PROTECTED REGION ID(ClockStep) START*/
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

    /*PROTECTED REGION ID(ClockStepImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ClockStep_ptr _this()
    {   return ClockStep_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Frequency_ptr m_frequency;

    ::amalthea::Time_ptr m_time;

};

}
 // amalthea

#endif // AMALTHEA_CLOCKSTEP_HPP

