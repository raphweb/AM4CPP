// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelEvent.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CHANNELEVENT_HPP
#define AMALTHEA_CHANNELEVENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/TriggerEvent.hpp>
#include <amalthea/ChannelEventType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ChannelEvent_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ChannelEvent : public virtual ::amalthea::TriggerEvent
{
public:
    ChannelEvent();

    virtual ~ChannelEvent();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::ChannelEventType getEventType () const;
    virtual void setEventType (::amalthea::ChannelEventType _eventType);

    // References
    virtual ::amalthea::Channel_ptr getEntity () const;
    virtual void setEntity (::amalthea::Channel_ptr _entity);

    virtual ::amalthea::Runnable_ptr getRunnable () const;
    virtual void setRunnable (::amalthea::Runnable_ptr _runnable);

    virtual ::amalthea::Process_ptr getProcess () const;
    virtual void setProcess (::amalthea::Process_ptr _process);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CHANNELEVENT;

    /*PROTECTED REGION ID(ChannelEvent) START*/
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

    /*PROTECTED REGION ID(ChannelEventImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ChannelEvent_ptr _this()
    {   return ChannelEvent_ptr(this);}

private:
    // Attributes

    ::amalthea::ChannelEventType m_eventType;

    // References

    ::amalthea::Channel_ptr m_entity;

    ::amalthea::Runnable_ptr m_runnable;

    ::amalthea::Process_ptr m_process;

};

}
 // amalthea

#endif // AMALTHEA_CHANNELEVENT_HPP

