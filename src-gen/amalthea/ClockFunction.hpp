// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ClockFunction.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CLOCKFUNCTION_HPP
#define AMALTHEA_CLOCKFUNCTION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Clock.hpp>
#include <amalthea/CurveType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ClockFunction_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ClockFunction : public virtual ::amalthea::Clock
{
public:
    ClockFunction();

    virtual ~ClockFunction();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::CurveType getCurveType () const;
    virtual void setCurveType (::amalthea::CurveType _curveType);

    // References
    virtual ::amalthea::Time_ptr getPeriod () const;
    virtual void setPeriod (::amalthea::Time_ptr _period);

    virtual ::amalthea::Frequency_ptr getPeakToPeak () const;
    virtual void setPeakToPeak (::amalthea::Frequency_ptr _peakToPeak);

    virtual ::amalthea::Time_ptr getXOffset () const;
    virtual void setXOffset (::amalthea::Time_ptr _xOffset);

    virtual ::amalthea::Frequency_ptr getYOffset () const;
    virtual void setYOffset (::amalthea::Frequency_ptr _yOffset);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CLOCKFUNCTION;

    /*PROTECTED REGION ID(ClockFunction) START*/
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

    /*PROTECTED REGION ID(ClockFunctionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ClockFunction_ptr _this()
    {   return ClockFunction_ptr(this);}

private:
    // Attributes

    ::amalthea::CurveType m_curveType;

    // References

    ::amalthea::Time_ptr m_period;

    ::amalthea::Frequency_ptr m_peakToPeak;

    ::amalthea::Time_ptr m_xOffset;

    ::amalthea::Frequency_ptr m_yOffset;

};

}
 // amalthea

#endif // AMALTHEA_CLOCKFUNCTION_HPP

