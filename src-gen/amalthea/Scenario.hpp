// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Scenario.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SCENARIO_HPP
#define AMALTHEA_SCENARIO_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Scenario_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Scenario : public virtual ::amalthea::BaseObject
{
public:
    Scenario();

    virtual ~Scenario();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::NonNegativeDouble getSamplingOffset () const;
    virtual void setSamplingOffset (::amalthea::NonNegativeDouble _samplingOffset);

    virtual ::amalthea::NonNegativeDouble getSamplingRecurrence () const;
    virtual void setSamplingRecurrence (::amalthea::NonNegativeDouble _samplingRecurrence);

    // References
    virtual ::amalthea::Clock_ptr getClock () const;
    virtual void setClock (::amalthea::Clock_ptr _clock);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::SCENARIO;

    /*PROTECTED REGION ID(Scenario) START*/
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

    /*PROTECTED REGION ID(ScenarioImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Scenario_ptr _this()
    {   return Scenario_ptr(this);}

private:
    // Attributes

    ::amalthea::NonNegativeDouble m_samplingOffset;

    ::amalthea::NonNegativeDouble m_samplingRecurrence;

    // References

    ::amalthea::Clock_ptr m_clock;

};

}
 // amalthea

#endif // AMALTHEA_SCENARIO_HPP

