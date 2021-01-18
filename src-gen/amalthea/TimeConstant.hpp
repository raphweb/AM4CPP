// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TimeConstant.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TIMECONSTANT_HPP
#define AMALTHEA_TIMECONSTANT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ITimeDeviation.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TimeConstant_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TimeConstant : public virtual ::amalthea::ITimeDeviation
{
public:
    TimeConstant();

    virtual ~TimeConstant();

    virtual void _initialize();

    // Operations

    virtual ::amalthea::Time_ptr getLowerBound ();

    virtual ::amalthea::Time_ptr getUpperBound ();

    virtual ::amalthea::Time_ptr getAverage ();

    // Attributes

    // References
    virtual ::amalthea::Time_ptr getValue () const;
    virtual void setValue (::amalthea::Time_ptr _value);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TIMECONSTANT;

    /*PROTECTED REGION ID(TimeConstant) START*/
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

    /*PROTECTED REGION ID(TimeConstantImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TimeConstant_ptr _this()
    {   return TimeConstant_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Time_ptr m_value;

};

}
 // amalthea

#endif // AMALTHEA_TIMECONSTANT_HPP

