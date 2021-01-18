// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueWeibullEstimatorsDistribution.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION_HPP
#define AMALTHEA_DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BoundedDiscreteValueDistribution.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DiscreteValueWeibullEstimatorsDistribution_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DiscreteValueWeibullEstimatorsDistribution : public virtual ::amalthea::BoundedDiscreteValueDistribution
{
public:
    DiscreteValueWeibullEstimatorsDistribution();

    virtual ~DiscreteValueWeibullEstimatorsDistribution();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EDoubleObject getAverage () const;
    virtual void setAverage (::ecore::EDoubleObject _average);

    virtual ::amalthea::PositiveDouble getPRemainPromille () const;
    virtual void setPRemainPromille (::amalthea::PositiveDouble _pRemainPromille);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION;

    /*PROTECTED REGION ID(DiscreteValueWeibullEstimatorsDistribution) START*/
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

    /*PROTECTED REGION ID(DiscreteValueWeibullEstimatorsDistributionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DiscreteValueWeibullEstimatorsDistribution_ptr _this()
    {   return DiscreteValueWeibullEstimatorsDistribution_ptr(this);}

private:
    // Attributes

    ::ecore::EDoubleObject m_average;

    ::amalthea::PositiveDouble m_pRemainPromille;

    // References

};

}
 // amalthea

#endif // AMALTHEA_DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION_HPP

