// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/INamed.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_INAMED_HPP
#define AMALTHEA_INAMED_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(INamed_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL INamed : public virtual ::ecore::EObject
{
public:
    INamed();

    virtual ~INamed();

    virtual void _initialize();

    // Operations

    virtual ::amalthea::INamed_ptr getNamedContainer ();

    virtual ::ecore::EString getNamePrefix ();

    virtual std::vector< ::ecore::EString > getQualifiedNameSegments ();

    virtual ::ecore::EString getDefaultNameSeparator ();

    virtual ::amalthea::Namespace_ptr getNamespace ();

    virtual std::vector< ::ecore::EString > getNamePrefixSegments ();

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    virtual ::ecore::EString const& getQualifiedName () const;
    virtual void setQualifiedName (::ecore::EString const& _qualifiedName);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::INAMED;

    /*PROTECTED REGION ID(INamed) START*/
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

    /*PROTECTED REGION ID(INamedImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    INamed_ptr _this()
    {   return INamed_ptr(this);}

private:
    // Attributes

    ::ecore::EString m_name;

    ::ecore::EString m_qualifiedName;

    // References

};

}
 // amalthea

#endif // AMALTHEA_INAMED_HPP

