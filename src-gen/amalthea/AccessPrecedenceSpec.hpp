// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AccessPrecedenceSpec.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ACCESSPRECEDENCESPEC_HPP
#define AMALTHEA_ACCESSPRECEDENCESPEC_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/GeneralPrecedence.hpp>
#include <amalthea/AccessPrecedenceType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(AccessPrecedenceSpec_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL AccessPrecedenceSpec : public virtual ::amalthea::GeneralPrecedence
{
public:
    AccessPrecedenceSpec();

    virtual ~AccessPrecedenceSpec();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::AccessPrecedenceType getOrderType () const;
    virtual void setOrderType (::amalthea::AccessPrecedenceType _orderType);

    // References
    virtual ::amalthea::Label_ptr getLabel () const;
    virtual void setLabel (::amalthea::Label_ptr _label);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ACCESSPRECEDENCESPEC;

    /*PROTECTED REGION ID(AccessPrecedenceSpec) START*/
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

    /*PROTECTED REGION ID(AccessPrecedenceSpecImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    AccessPrecedenceSpec_ptr _this()
    {   return AccessPrecedenceSpec_ptr(this);}

private:
    // Attributes

    ::amalthea::AccessPrecedenceType m_orderType;

    // References

    ::amalthea::Label_ptr m_label;

};

}
 // amalthea

#endif // AMALTHEA_ACCESSPRECEDENCESPEC_HPP

