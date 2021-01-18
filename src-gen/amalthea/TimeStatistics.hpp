// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeStatistics.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TIMESTATISTICS_HPP
#define AMALTHEA_TIMESTATISTICS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BoundedTimeDistribution.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TimeStatistics_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TimeStatistics : public virtual ::amalthea::BoundedTimeDistribution
{
public:
    TimeStatistics();

    virtual ~TimeStatistics();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Time_ptr getAverage () const;
    virtual void setAverage (::amalthea::Time_ptr _average);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TIMESTATISTICS;

    /*PROTECTED REGION ID(TimeStatistics) START*/
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

    /*PROTECTED REGION ID(TimeStatisticsImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TimeStatistics_ptr _this()
    {   return TimeStatistics_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Time_ptr m_average;

};

}
 // amalthea

#endif // AMALTHEA_TIMESTATISTICS_HPP

