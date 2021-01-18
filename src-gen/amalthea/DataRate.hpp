// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataRate.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DATARATE_HPP
#define AMALTHEA_DATARATE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Quantity.hpp>
#include <amalthea/DataRateComparable.hpp>
#include <amalthea/DataRateUnit.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DataRate_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DataRate : public virtual ::amalthea::Quantity, public virtual ::amalthea::DataRateComparable
{
public:
    DataRate();

    virtual ~DataRate();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EString toString ();

    virtual ::ecore::EInt compareTo ( ::amalthea::DataRate_ptr _rate);

    // Attributes
    virtual ::ecore::EBigInteger getValue () const;
    virtual void setValue (::ecore::EBigInteger _value);

    virtual ::amalthea::DataRateUnit getUnit () const;
    virtual void setUnit (::amalthea::DataRateUnit _unit);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DATARATE;

    /*PROTECTED REGION ID(DataRate) START*/
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

    /*PROTECTED REGION ID(DataRateImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DataRate_ptr _this()
    {   return DataRate_ptr(this);}

private:
    // Attributes

    ::ecore::EBigInteger m_value;

    ::amalthea::DataRateUnit m_unit;

    // References

};

}
 // amalthea

#endif // AMALTHEA_DATARATE_HPP

