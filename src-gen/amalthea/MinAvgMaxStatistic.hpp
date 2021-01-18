// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MinAvgMaxStatistic.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MINAVGMAXSTATISTIC_HPP
#define AMALTHEA_MINAVGMAXSTATISTIC_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/NumericStatistic.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(MinAvgMaxStatistic_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL MinAvgMaxStatistic : public virtual ::amalthea::NumericStatistic
{
public:
    MinAvgMaxStatistic();

    virtual ~MinAvgMaxStatistic();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EBoolean validateInvariants ( ::ecore::EDiagnosticChain _diagnostics, std::map< ::ecore::EJavaObject, ::ecore::EJavaObject> const& _context);

    // Attributes
    virtual ::ecore::EInt getMin () const;
    virtual void setMin (::ecore::EInt _min);

    virtual ::ecore::EFloat getAvg () const;
    virtual void setAvg (::ecore::EFloat _avg);

    virtual ::ecore::EInt getMax () const;
    virtual void setMax (::ecore::EInt _max);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MINAVGMAXSTATISTIC;

    /*PROTECTED REGION ID(MinAvgMaxStatistic) START*/
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

    /*PROTECTED REGION ID(MinAvgMaxStatisticImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    MinAvgMaxStatistic_ptr _this()
    {   return MinAvgMaxStatistic_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_min;

    ::ecore::EFloat m_avg;

    ::ecore::EInt m_max;

    // References

};

}
 // amalthea

#endif // AMALTHEA_MINAVGMAXSTATISTIC_HPP

