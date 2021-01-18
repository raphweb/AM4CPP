// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TruncatedContinuousValueDistribution.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TRUNCATEDCONTINUOUSVALUEDISTRIBUTION_HPP
#define AMALTHEA_TRUNCATEDCONTINUOUSVALUEDISTRIBUTION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/IContinuousValueDeviation.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TruncatedContinuousValueDistribution_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TruncatedContinuousValueDistribution : public virtual ::amalthea::IContinuousValueDeviation
{
public:
    TruncatedContinuousValueDistribution();

    virtual ~TruncatedContinuousValueDistribution();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EBoolean validateInvariants ( ::ecore::EDiagnosticChain _diagnostics, std::map< ::ecore::EJavaObject, ::ecore::EJavaObject> const& _context);

    // Attributes
    virtual ::ecore::EDoubleObject getLowerBound () const;
    virtual void setLowerBound (::ecore::EDoubleObject _lowerBound);

    virtual ::ecore::EDoubleObject getUpperBound () const;
    virtual void setUpperBound (::ecore::EDoubleObject _upperBound);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TRUNCATEDCONTINUOUSVALUEDISTRIBUTION;

    /*PROTECTED REGION ID(TruncatedContinuousValueDistribution) START*/
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

    /*PROTECTED REGION ID(TruncatedContinuousValueDistributionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TruncatedContinuousValueDistribution_ptr _this()
    {   return TruncatedContinuousValueDistribution_ptr(this);}

private:
    // Attributes

    ::ecore::EDoubleObject m_lowerBound;

    ::ecore::EDoubleObject m_upperBound;

    // References

};

}
 // amalthea

#endif // AMALTHEA_TRUNCATEDCONTINUOUSVALUEDISTRIBUTION_HPP

