// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ContinuousValueGaussDistribution.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CONTINUOUSVALUEGAUSSDISTRIBUTION_HPP
#define AMALTHEA_CONTINUOUSVALUEGAUSSDISTRIBUTION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/TruncatedContinuousValueDistribution.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ContinuousValueGaussDistribution_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ContinuousValueGaussDistribution : public virtual ::amalthea::TruncatedContinuousValueDistribution
{
public:
    ContinuousValueGaussDistribution();

    virtual ~ContinuousValueGaussDistribution();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EDoubleObject getAverage ();

    // Attributes
    virtual ::ecore::EDouble getMean () const;
    virtual void setMean (::ecore::EDouble _mean);

    virtual ::amalthea::PositiveDouble getSd () const;
    virtual void setSd (::amalthea::PositiveDouble _sd);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CONTINUOUSVALUEGAUSSDISTRIBUTION;

    /*PROTECTED REGION ID(ContinuousValueGaussDistribution) START*/
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

    /*PROTECTED REGION ID(ContinuousValueGaussDistributionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ContinuousValueGaussDistribution_ptr _this()
    {   return ContinuousValueGaussDistribution_ptr(this);}

private:
    // Attributes

    ::ecore::EDouble m_mean;

    ::amalthea::PositiveDouble m_sd;

    // References

};

}
 // amalthea

#endif // AMALTHEA_CONTINUOUSVALUEGAUSSDISTRIBUTION_HPP

