// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PeriodicStimulus.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PERIODICSTIMULUS_HPP
#define AMALTHEA_PERIODICSTIMULUS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/FixedPeriodic.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(PeriodicStimulus_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL PeriodicStimulus : public virtual ::amalthea::Stimulus, public virtual ::amalthea::FixedPeriodic
{
public:
    PeriodicStimulus();

    virtual ~PeriodicStimulus();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ITimeDeviation_ptr getJitter () const;
    virtual void setJitter (::amalthea::ITimeDeviation_ptr _jitter);

    virtual ::amalthea::Time_ptr getMinDistance () const;
    virtual void setMinDistance (::amalthea::Time_ptr _minDistance);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PERIODICSTIMULUS;

    /*PROTECTED REGION ID(PeriodicStimulus) START*/
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

    /*PROTECTED REGION ID(PeriodicStimulusImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PeriodicStimulus_ptr _this()
    {   return PeriodicStimulus_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ITimeDeviation_ptr m_jitter;

    ::amalthea::Time_ptr m_minDistance;

};

}
 // amalthea

#endif // AMALTHEA_PERIODICSTIMULUS_HPP

