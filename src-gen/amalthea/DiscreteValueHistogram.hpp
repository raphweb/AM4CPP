// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DiscreteValueHistogram.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DISCRETEVALUEHISTOGRAM_HPP
#define AMALTHEA_DISCRETEVALUEHISTOGRAM_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/IDiscreteValueDeviation.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DiscreteValueHistogram_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DiscreteValueHistogram : public virtual ::amalthea::IDiscreteValueDeviation
{
public:
    DiscreteValueHistogram();

    virtual ~DiscreteValueHistogram();

    virtual void _initialize();

    // Operations

    virtual ::ecore::ELongObject getLowerBound ();

    virtual ::ecore::ELongObject getUpperBound ();

    virtual ::ecore::EDoubleObject getAverage ();

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::DiscreteValueHistogramEntry_ptr >& getEntries () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::DiscreteValueHistogramEntry_ptr >& getEntries ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DISCRETEVALUEHISTOGRAM;

    /*PROTECTED REGION ID(DiscreteValueHistogram) START*/
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

    /*PROTECTED REGION ID(DiscreteValueHistogramImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DiscreteValueHistogram_ptr _this()
    {   return DiscreteValueHistogram_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::DiscreteValueHistogramEntry_ptr >> m_entries;

};

}
 // amalthea

#endif // AMALTHEA_DISCRETEVALUEHISTOGRAM_HPP

