// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PeriodicBurstStimulus.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PERIODICBURSTSTIMULUS_HPP
#define AMALTHEA_PERIODICBURSTSTIMULUS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/FixedPeriodic.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(PeriodicBurstStimulus_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL PeriodicBurstStimulus : public virtual ::amalthea::Stimulus, public virtual ::amalthea::FixedPeriodic
{
public:
    PeriodicBurstStimulus();

    virtual ~PeriodicBurstStimulus();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getOccurrenceCount () const;
    virtual void setOccurrenceCount (::ecore::EInt _occurrenceCount);

    // References
    virtual ::amalthea::Time_ptr getBurstLength () const;
    virtual void setBurstLength (::amalthea::Time_ptr _burstLength);

    virtual ::amalthea::Time_ptr getOccurrenceMinDistance () const;
    virtual void setOccurrenceMinDistance (::amalthea::Time_ptr _occurrenceMinDistance);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PERIODICBURSTSTIMULUS;

    /*PROTECTED REGION ID(PeriodicBurstStimulus) START*/
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

    /*PROTECTED REGION ID(PeriodicBurstStimulusImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PeriodicBurstStimulus_ptr _this()
    {   return PeriodicBurstStimulus_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_occurrenceCount;

    // References

    ::amalthea::Time_ptr m_burstLength;

    ::amalthea::Time_ptr m_occurrenceMinDistance;

};

}
 // amalthea

#endif // AMALTHEA_PERIODICBURSTSTIMULUS_HPP

