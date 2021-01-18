// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentPort.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COMPONENTPORT_HPP
#define AMALTHEA_COMPONENTPORT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/InterfaceKind.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ComponentPort_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ComponentPort : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::ITaggable
{
public:
    ComponentPort();

    virtual ~ComponentPort();

    virtual void _initialize();

    // Operations

    virtual std::vector< ::ecore::EString > getNamePrefixSegments ();

    // Attributes
    virtual ::amalthea::InterfaceKind getKind () const;
    virtual void setKind (::amalthea::InterfaceKind _kind);

    // References
    virtual ::amalthea::Component_ptr getContainingComponent () const;
    virtual void setContainingComponent (::amalthea::Component_ptr _containingComponent);
    virtual ::amalthea::Component_ptr basicgetContainingComponent ();
    virtual void basicsetContainingComponent (::amalthea::Component_ptr _containingComponent);

    virtual ::amalthea::ComponentInterface_ptr getInterface () const;
    virtual void setInterface (::amalthea::ComponentInterface_ptr _interface);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::COMPONENTPORT;

    /*PROTECTED REGION ID(ComponentPort) START*/
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

    /*PROTECTED REGION ID(ComponentPortImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ComponentPort_ptr _this()
    {   return ComponentPort_ptr(this);}

private:
    // Attributes

    ::amalthea::InterfaceKind m_kind;

    // References

    ::amalthea::Component_ptr m_containingComponent;

    ::amalthea::ComponentInterface_ptr m_interface;

};

}
 // amalthea

#endif // AMALTHEA_COMPONENTPORT_HPP

