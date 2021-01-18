// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RelativePeriodicStimulus.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RELATIVEPERIODICSTIMULUS_HPP
#define AMALTHEA_RELATIVEPERIODICSTIMULUS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Stimulus.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(RelativePeriodicStimulus_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL RelativePeriodicStimulus : public virtual ::amalthea::Stimulus
{
public:
    RelativePeriodicStimulus();

    virtual ~RelativePeriodicStimulus();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Time_ptr getOffset () const;
    virtual void setOffset (::amalthea::Time_ptr _offset);

    virtual ::amalthea::ITimeDeviation_ptr getNextOccurrence () const;
    virtual void setNextOccurrence (::amalthea::ITimeDeviation_ptr _nextOccurrence);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::RELATIVEPERIODICSTIMULUS;

    /*PROTECTED REGION ID(RelativePeriodicStimulus) START*/
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

    /*PROTECTED REGION ID(RelativePeriodicStimulusImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RelativePeriodicStimulus_ptr _this()
    {   return RelativePeriodicStimulus_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Time_ptr m_offset;

    ::amalthea::ITimeDeviation_ptr m_nextOccurrence;

};

}
 // amalthea

#endif // AMALTHEA_RELATIVEPERIODICSTIMULUS_HPP

