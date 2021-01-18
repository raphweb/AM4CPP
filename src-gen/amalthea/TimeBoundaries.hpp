// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeBoundaries.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TIMEBOUNDARIES_HPP
#define AMALTHEA_TIMEBOUNDARIES_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BoundedTimeDistribution.hpp>
#include <amalthea/SamplingType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TimeBoundaries_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TimeBoundaries : public virtual ::amalthea::BoundedTimeDistribution
{
public:
    TimeBoundaries();

    virtual ~TimeBoundaries();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::SamplingType getSamplingType () const;
    virtual void setSamplingType (::amalthea::SamplingType _samplingType);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TIMEBOUNDARIES;

    /*PROTECTED REGION ID(TimeBoundaries) START*/
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

    /*PROTECTED REGION ID(TimeBoundariesImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TimeBoundaries_ptr _this()
    {   return TimeBoundaries_ptr(this);}

private:
    // Attributes

    ::amalthea::SamplingType m_samplingType;

    // References

};

}
 // amalthea

#endif // AMALTHEA_TIMEBOUNDARIES_HPP

