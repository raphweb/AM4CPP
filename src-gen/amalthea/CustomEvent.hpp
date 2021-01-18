// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CustomEvent.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CUSTOMEVENT_HPP
#define AMALTHEA_CUSTOMEVENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/TriggerEvent.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(CustomEvent_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL CustomEvent : public virtual ::amalthea::TriggerEvent
{
public:
    CustomEvent();

    virtual ~CustomEvent();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getEventType () const;
    virtual void setEventType (::ecore::EString const& _eventType);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::CustomEventTrigger_ptr >& getExplicitTriggers () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::CustomEventTrigger_ptr >& getExplicitTriggers ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CUSTOMEVENT;

    /*PROTECTED REGION ID(CustomEvent) START*/
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

    /*PROTECTED REGION ID(CustomEventImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CustomEvent_ptr _this()
    {   return CustomEvent_ptr(this);}

private:
    // Attributes

    ::ecore::EString m_eventType;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::CustomEventTrigger_ptr >> m_explicitTriggers;

};

}
 // amalthea

#endif // AMALTHEA_CUSTOMEVENT_HPP

