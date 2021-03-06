// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeRequirementLimit.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TIMEREQUIREMENTLIMIT_HPP
#define AMALTHEA_TIMEREQUIREMENTLIMIT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/RequirementLimit.hpp>
#include <amalthea/LimitType.hpp>
#include <amalthea/TimeMetric.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TimeRequirementLimit_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TimeRequirementLimit : public virtual ::amalthea::RequirementLimit
{
public:
    TimeRequirementLimit();

    virtual ~TimeRequirementLimit();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::TimeMetric getMetric () const;
    virtual void setMetric (::amalthea::TimeMetric _metric);

    // References
    virtual ::amalthea::Time_ptr getLimitValue () const;
    virtual void setLimitValue (::amalthea::Time_ptr _limitValue);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TIMEREQUIREMENTLIMIT;

    /*PROTECTED REGION ID(TimeRequirementLimit) START*/
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

    /*PROTECTED REGION ID(TimeRequirementLimitImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TimeRequirementLimit_ptr _this()
    {   return TimeRequirementLimit_ptr(this);}

private:
    // Attributes

    ::amalthea::TimeMetric m_metric;

    // References

    ::amalthea::Time_ptr m_limitValue;

};

}
 // amalthea

#endif // AMALTHEA_TIMEREQUIREMENTLIMIT_HPP

