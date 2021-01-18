// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentEvent.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COMPONENTEVENT_HPP
#define AMALTHEA_COMPONENTEVENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/ComponentEventType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ComponentEvent_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ComponentEvent : public virtual ::amalthea::EntityEvent
{
public:
    ComponentEvent();

    virtual ~ComponentEvent();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::ComponentEventType getEventType () const;
    virtual void setEventType (::amalthea::ComponentEventType _eventType);

    // References
    virtual ::amalthea::Component_ptr getEntity () const;
    virtual void setEntity (::amalthea::Component_ptr _entity);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::COMPONENTEVENT;

    /*PROTECTED REGION ID(ComponentEvent) START*/
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

    /*PROTECTED REGION ID(ComponentEventImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ComponentEvent_ptr _this()
    {   return ComponentEvent_ptr(this);}

private:
    // Attributes

    ::amalthea::ComponentEventType m_eventType;

    // References

    ::amalthea::Component_ptr m_entity;

};

}
 // amalthea

#endif // AMALTHEA_COMPONENTEVENT_HPP

