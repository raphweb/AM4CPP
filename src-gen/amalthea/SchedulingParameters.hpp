// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SchedulingParameters.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SCHEDULINGPARAMETERS_HPP
#define AMALTHEA_SCHEDULINGPARAMETERS_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(SchedulingParameters_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL SchedulingParameters : public virtual ::ecore::EObject
{
public:
    SchedulingParameters();

    virtual ~SchedulingParameters();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EIntegerObject getPriority () const;
    virtual void setPriority (::ecore::EIntegerObject _priority);

    // References
    virtual ::amalthea::Time_ptr getMinBudget () const;
    virtual void setMinBudget (::amalthea::Time_ptr _minBudget);

    virtual ::amalthea::Time_ptr getMaxBudget () const;
    virtual void setMaxBudget (::amalthea::Time_ptr _maxBudget);

    virtual ::amalthea::Time_ptr getReplenishment () const;
    virtual void setReplenishment (::amalthea::Time_ptr _replenishment);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::SCHEDULINGPARAMETERS;

    /*PROTECTED REGION ID(SchedulingParameters) START*/
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

    /*PROTECTED REGION ID(SchedulingParametersImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    SchedulingParameters_ptr _this()
    {   return SchedulingParameters_ptr(this);}

private:
    // Attributes

    ::ecore::EIntegerObject m_priority;

    // References

    ::amalthea::Time_ptr m_minBudget;

    ::amalthea::Time_ptr m_maxBudget;

    ::amalthea::Time_ptr m_replenishment;

};

}
 // amalthea

#endif // AMALTHEA_SCHEDULINGPARAMETERS_HPP

