// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Voltage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_VOLTAGE_HPP
#define AMALTHEA_VOLTAGE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Quantity.hpp>
#include <amalthea/VoltageUnit.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Voltage_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Voltage : public virtual ::amalthea::Quantity
{
public:
    Voltage();

    virtual ~Voltage();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EString toString ();

    // Attributes
    virtual ::ecore::EDouble getValue () const;
    virtual void setValue (::ecore::EDouble _value);

    virtual ::amalthea::VoltageUnit getUnit () const;
    virtual void setUnit (::amalthea::VoltageUnit _unit);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::VOLTAGE;

    /*PROTECTED REGION ID(Voltage) START*/
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

    /*PROTECTED REGION ID(VoltageImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Voltage_ptr _this()
    {   return Voltage_ptr(this);}

private:
    // Attributes

    ::ecore::EDouble m_value;

    ::amalthea::VoltageUnit m_unit;

    // References

};

}
 // amalthea

#endif // AMALTHEA_VOLTAGE_HPP

