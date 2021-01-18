// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueBetaDistribution.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DISCRETEVALUEBETADISTRIBUTION_HPP
#define AMALTHEA_DISCRETEVALUEBETADISTRIBUTION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BoundedDiscreteValueDistribution.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DiscreteValueBetaDistribution_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DiscreteValueBetaDistribution : public virtual ::amalthea::BoundedDiscreteValueDistribution
{
public:
    DiscreteValueBetaDistribution();

    virtual ~DiscreteValueBetaDistribution();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EDoubleObject getAverage ();

    // Attributes
    virtual ::amalthea::PositiveDouble getAlpha () const;
    virtual void setAlpha (::amalthea::PositiveDouble _alpha);

    virtual ::amalthea::PositiveDouble getBeta () const;
    virtual void setBeta (::amalthea::PositiveDouble _beta);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DISCRETEVALUEBETADISTRIBUTION;

    /*PROTECTED REGION ID(DiscreteValueBetaDistribution) START*/
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

    /*PROTECTED REGION ID(DiscreteValueBetaDistributionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DiscreteValueBetaDistribution_ptr _this()
    {   return DiscreteValueBetaDistribution_ptr(this);}

private:
    // Attributes

    ::amalthea::PositiveDouble m_alpha;

    ::amalthea::PositiveDouble m_beta;

    // References

};

}
 // amalthea

#endif // AMALTHEA_DISCRETEVALUEBETADISTRIBUTION_HPP

