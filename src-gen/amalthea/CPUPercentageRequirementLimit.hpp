// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CPUPercentageRequirementLimit.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CPUPERCENTAGEREQUIREMENTLIMIT_HPP
#define AMALTHEA_CPUPERCENTAGEREQUIREMENTLIMIT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/LimitType.hpp>
#include <amalthea/CPUPercentageMetric.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(CPUPercentageRequirementLimit_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL CPUPercentageRequirementLimit : public virtual ::amalthea::RequirementLimit
{
public:
    CPUPercentageRequirementLimit();

    virtual ~CPUPercentageRequirementLimit();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::CPUPercentageMetric getMetric () const;
    virtual void setMetric (::amalthea::CPUPercentageMetric _metric);

    virtual ::ecore::EDouble getLimitValue () const;
    virtual void setLimitValue (::ecore::EDouble _limitValue);

    // References
    virtual ::amalthea::ProcessingUnit_ptr getHardwareContext () const;
    virtual void setHardwareContext (::amalthea::ProcessingUnit_ptr _hardwareContext);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT;

    /*PROTECTED REGION ID(CPUPercentageRequirementLimit) START*/
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

    /*PROTECTED REGION ID(CPUPercentageRequirementLimitImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CPUPercentageRequirementLimit_ptr _this()
    {   return CPUPercentageRequirementLimit_ptr(this);}

private:
    // Attributes

    ::amalthea::CPUPercentageMetric m_metric;

    ::ecore::EDouble m_limitValue;

    // References

    ::amalthea::ProcessingUnit_ptr m_hardwareContext;

};

}
 // amalthea

#endif // AMALTHEA_CPUPERCENTAGEREQUIREMENTLIMIT_HPP

