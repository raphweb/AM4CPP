// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/PercentageRequirementLimit.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_PERCENTAGEREQUIREMENTLIMIT_HPP
#define AMALTHEA_PERCENTAGEREQUIREMENTLIMIT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/LimitType.hpp>
#include <amalthea/PercentageMetric.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(PercentageRequirementLimit_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL PercentageRequirementLimit : public virtual ::amalthea::RequirementLimit
{
public:
    PercentageRequirementLimit();

    virtual ~PercentageRequirementLimit();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::PercentageMetric getMetric () const;
    virtual void setMetric (::amalthea::PercentageMetric _metric);

    virtual ::ecore::EDouble getLimitValue () const;
    virtual void setLimitValue (::ecore::EDouble _limitValue);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::PERCENTAGEREQUIREMENTLIMIT;

    /*PROTECTED REGION ID(PercentageRequirementLimit) START*/
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

    /*PROTECTED REGION ID(PercentageRequirementLimitImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PercentageRequirementLimit_ptr _this()
    {   return PercentageRequirementLimit_ptr(this);}

private:
    // Attributes

    ::amalthea::PercentageMetric m_metric;

    ::ecore::EDouble m_limitValue;

    // References

};

}
 // amalthea

#endif // AMALTHEA_PERCENTAGEREQUIREMENTLIMIT_HPP

