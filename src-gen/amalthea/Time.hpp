// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Time.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TIME_HPP
#define AMALTHEA_TIME_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Quantity.hpp>
#include <amalthea/Value.hpp>
#include <amalthea/TimeComparable.hpp>
#include <amalthea/TimeUnit.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Time_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Time : public virtual ::amalthea::Quantity, public virtual ::amalthea::Value, public virtual ::amalthea::TimeComparable
{
public:
    Time();

    virtual ~Time();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EString toString ();

    virtual ::ecore::EInt compareTo ( ::amalthea::Time_ptr _t);

    virtual ::amalthea::Time_ptr adjustUnit ();

    virtual ::amalthea::Time_ptr add ( ::amalthea::Time_ptr _t);

    virtual ::amalthea::Time_ptr subtract ( ::amalthea::Time_ptr _t);

    virtual ::amalthea::Time_ptr multiply ( ::ecore::ELong _v);

    virtual ::amalthea::Time_ptr multiply ( ::ecore::EDouble _v);

    virtual ::ecore::EDouble divide ( ::amalthea::Time_ptr _t);

    // Attributes
    virtual ::ecore::EBigInteger getValue () const;
    virtual void setValue (::ecore::EBigInteger _value);

    virtual ::amalthea::TimeUnit getUnit () const;
    virtual void setUnit (::amalthea::TimeUnit _unit);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TIME;

    /*PROTECTED REGION ID(Time) START*/
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

    /*PROTECTED REGION ID(TimeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Time_ptr _this()
    {   return Time_ptr(this);}

private:
    // Attributes

    ::ecore::EBigInteger m_value;

    ::amalthea::TimeUnit m_unit;

    // References

};

}
 // amalthea

#endif // AMALTHEA_TIME_HPP

