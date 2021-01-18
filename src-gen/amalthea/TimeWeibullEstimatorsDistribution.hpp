// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeWeibullEstimatorsDistribution.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TIMEWEIBULLESTIMATORSDISTRIBUTION_HPP
#define AMALTHEA_TIMEWEIBULLESTIMATORSDISTRIBUTION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BoundedTimeDistribution.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TimeWeibullEstimatorsDistribution_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TimeWeibullEstimatorsDistribution : public virtual ::amalthea::BoundedTimeDistribution
{
public:
    TimeWeibullEstimatorsDistribution();

    virtual ~TimeWeibullEstimatorsDistribution();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::PositiveDouble getPRemainPromille () const;
    virtual void setPRemainPromille (::amalthea::PositiveDouble _pRemainPromille);

    // References
    virtual ::amalthea::Time_ptr getAverage () const;
    virtual void setAverage (::amalthea::Time_ptr _average);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TIMEWEIBULLESTIMATORSDISTRIBUTION;

    /*PROTECTED REGION ID(TimeWeibullEstimatorsDistribution) START*/
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

    /*PROTECTED REGION ID(TimeWeibullEstimatorsDistributionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TimeWeibullEstimatorsDistribution_ptr _this()
    {   return TimeWeibullEstimatorsDistribution_ptr(this);}

private:
    // Attributes

    ::amalthea::PositiveDouble m_pRemainPromille;

    // References

    ::amalthea::Time_ptr m_average;

};

}
 // amalthea

#endif // AMALTHEA_TIMEWEIBULLESTIMATORSDISTRIBUTION_HPP

