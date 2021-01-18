// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataSize.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DATASIZE_HPP
#define AMALTHEA_DATASIZE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Quantity.hpp>
#include <amalthea/DataSizeUnit.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DataSize_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DataSize : public virtual ::amalthea::Quantity
{
public:
    DataSize();

    virtual ~DataSize();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EString toString ();

    virtual ::ecore::ELong getNumberBits ();

    virtual ::ecore::ELong getNumberBytes ();

    // Attributes
    virtual ::ecore::EBigInteger getValue () const;
    virtual void setValue (::ecore::EBigInteger _value);

    virtual ::amalthea::DataSizeUnit getUnit () const;
    virtual void setUnit (::amalthea::DataSizeUnit _unit);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DATASIZE;

    /*PROTECTED REGION ID(DataSize) START*/
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

    /*PROTECTED REGION ID(DataSizeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DataSize_ptr _this()
    {   return DataSize_ptr(this);}

private:
    // Attributes

    ::ecore::EBigInteger m_value;

    ::amalthea::DataSizeUnit m_unit;

    // References

};

}
 // amalthea

#endif // AMALTHEA_DATASIZE_HPP

