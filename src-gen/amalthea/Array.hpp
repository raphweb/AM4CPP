// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Array.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ARRAY_HPP
#define AMALTHEA_ARRAY_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/CompoundType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Array_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Array : public virtual ::amalthea::CompoundType
{
public:
    Array();

    virtual ~Array();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getNumberElements () const;
    virtual void setNumberElements (::ecore::EInt _numberElements);

    // References
    virtual ::amalthea::DataType_ptr getDataType () const;
    virtual void setDataType (::amalthea::DataType_ptr _dataType);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ARRAY;

    /*PROTECTED REGION ID(Array) START*/
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

    /*PROTECTED REGION ID(ArrayImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Array_ptr _this()
    {   return Array_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_numberElements;

    // References

    ::amalthea::DataType_ptr m_dataType;

};

}
 // amalthea

#endif // AMALTHEA_ARRAY_HPP

