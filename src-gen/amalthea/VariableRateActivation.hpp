// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/VariableRateActivation.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_VARIABLERATEACTIVATION_HPP
#define AMALTHEA_VARIABLERATEACTIVATION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Activation.hpp>
#include <amalthea/IDescription.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(VariableRateActivation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL VariableRateActivation : public virtual ::amalthea::Activation, public virtual ::amalthea::IDescription
{
public:
    VariableRateActivation();

    virtual ~VariableRateActivation();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Time_ptr getStep () const;
    virtual void setStep (::amalthea::Time_ptr _step);

    virtual ::amalthea::IContinuousValueDeviation_ptr getOccurrencesPerStep () const;
    virtual void setOccurrencesPerStep (::amalthea::IContinuousValueDeviation_ptr _occurrencesPerStep);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::VARIABLERATEACTIVATION;

    /*PROTECTED REGION ID(VariableRateActivation) START*/
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

    /*PROTECTED REGION ID(VariableRateActivationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    VariableRateActivation_ptr _this()
    {   return VariableRateActivation_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Time_ptr m_step;

    ::amalthea::IContinuousValueDeviation_ptr m_occurrencesPerStep;

};

}
 // amalthea

#endif // AMALTHEA_VARIABLERATEACTIVATION_HPP

