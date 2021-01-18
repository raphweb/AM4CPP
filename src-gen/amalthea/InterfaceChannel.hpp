// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/InterfaceChannel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_INTERFACECHANNEL_HPP
#define AMALTHEA_INTERFACECHANNEL_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(InterfaceChannel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL InterfaceChannel : public virtual ::ecore::EObject
{
public:
    InterfaceChannel();

    virtual ~InterfaceChannel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::ComponentInterface_ptr getKey () const;
    virtual void setKey (::amalthea::ComponentInterface_ptr _key);

    virtual ::amalthea::Channel_ptr getValue () const;
    virtual void setValue (::amalthea::Channel_ptr _value);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::INTERFACECHANNEL;

    /*PROTECTED REGION ID(InterfaceChannel) START*/
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

    /*PROTECTED REGION ID(InterfaceChannelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    InterfaceChannel_ptr _this()
    {   return InterfaceChannel_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::ComponentInterface_ptr m_key;

    ::amalthea::Channel_ptr m_value;

};

}
 // amalthea

#endif // AMALTHEA_INTERFACECHANNEL_HPP

