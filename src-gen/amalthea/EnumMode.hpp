// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/EnumMode.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ENUMMODE_HPP
#define AMALTHEA_ENUMMODE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/Mode.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(EnumMode_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL EnumMode : public virtual ::amalthea::Mode
{
public:
    EnumMode();

    virtual ~EnumMode();

    virtual void _initialize();

    // Operations

    virtual ::amalthea::ModeLiteral_ptr getLiteral ( ::ecore::EString const& _literal);

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::ModeLiteral_ptr >& getLiterals () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ModeLiteral_ptr >& getLiterals ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ENUMMODE;

    /*PROTECTED REGION ID(EnumMode) START*/
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

    /*PROTECTED REGION ID(EnumModeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EnumMode_ptr _this()
    {   return EnumMode_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ModeLiteral_ptr >> m_literals;

};

}
 // amalthea

#endif // AMALTHEA_ENUMMODE_HPP

