// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Frequency.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_FREQUENCY_HPP
#define AMALTHEA_FREQUENCY_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/Quantity.hpp>
#include <amalthea/FrequencyUnit.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Frequency_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Frequency : public virtual ::amalthea::Quantity
{
public:
    Frequency();

    virtual ~Frequency();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EString toString ();

    // Attributes
    virtual ::amalthea::NonNegativeDouble getValue () const;
    virtual void setValue (::amalthea::NonNegativeDouble _value);

    virtual ::amalthea::FrequencyUnit getUnit () const;
    virtual void setUnit (::amalthea::FrequencyUnit _unit);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::FREQUENCY;

    /*PROTECTED REGION ID(Frequency) START*/
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

    /*PROTECTED REGION ID(FrequencyImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Frequency_ptr _this()
    {   return Frequency_ptr(this);}

private:
    // Attributes

    ::amalthea::NonNegativeDouble m_value;

    ::amalthea::FrequencyUnit m_unit;

    // References

};

}
 // amalthea

#endif // AMALTHEA_FREQUENCY_HPP

