// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/TypeDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TYPEDEFINITION_HPP
#define AMALTHEA_TYPEDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/INamespaceMember.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(TypeDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL TypeDefinition : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::INamespaceMember
{
public:
    TypeDefinition();

    virtual ~TypeDefinition();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::DataSize_ptr getSize () const;
    virtual void setSize (::amalthea::DataSize_ptr _size);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TYPEDEFINITION;

    /*PROTECTED REGION ID(TypeDefinition) START*/
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

    /*PROTECTED REGION ID(TypeDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TypeDefinition_ptr _this()
    {   return TypeDefinition_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::DataSize_ptr m_size;

};

}
 // amalthea

#endif // AMALTHEA_TYPEDEFINITION_HPP

