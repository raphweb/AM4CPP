// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OrderPrecedenceSpec.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ORDERPRECEDENCESPEC_HPP
#define AMALTHEA_ORDERPRECEDENCESPEC_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/GeneralPrecedence.hpp>
#include <amalthea/OrderType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(OrderPrecedenceSpec_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL OrderPrecedenceSpec : public virtual ::amalthea::GeneralPrecedence
{
public:
    OrderPrecedenceSpec();

    virtual ~OrderPrecedenceSpec();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::OrderType getOrderType () const;
    virtual void setOrderType (::amalthea::OrderType _orderType);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ORDERPRECEDENCESPEC;

    /*PROTECTED REGION ID(OrderPrecedenceSpec) START*/
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

    /*PROTECTED REGION ID(OrderPrecedenceSpecImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OrderPrecedenceSpec_ptr _this()
    {   return OrderPrecedenceSpec_ptr(this);}

private:
    // Attributes

    ::amalthea::OrderType m_orderType;

    // References

};

}
 // amalthea

#endif // AMALTHEA_ORDERPRECEDENCESPEC_HPP

