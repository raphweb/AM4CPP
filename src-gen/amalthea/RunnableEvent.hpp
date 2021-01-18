// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableEvent.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RUNNABLEEVENT_HPP
#define AMALTHEA_RUNNABLEEVENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/TriggerEvent.hpp>
#include <amalthea/RunnableEventType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(RunnableEvent_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL RunnableEvent : public virtual ::amalthea::TriggerEvent
{
public:
    RunnableEvent();

    virtual ~RunnableEvent();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::RunnableEventType getEventType () const;
    virtual void setEventType (::amalthea::RunnableEventType _eventType);

    // References
    virtual ::amalthea::Runnable_ptr getEntity () const;
    virtual void setEntity (::amalthea::Runnable_ptr _entity);

    virtual ::amalthea::Process_ptr getProcess () const;
    virtual void setProcess (::amalthea::Process_ptr _process);

    virtual ::amalthea::ProcessingUnit_ptr getProcessingUnit () const;
    virtual void setProcessingUnit (::amalthea::ProcessingUnit_ptr _processingUnit);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::RUNNABLEEVENT;

    /*PROTECTED REGION ID(RunnableEvent) START*/
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

    /*PROTECTED REGION ID(RunnableEventImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RunnableEvent_ptr _this()
    {   return RunnableEvent_ptr(this);}

private:
    // Attributes

    ::amalthea::RunnableEventType m_eventType;

    // References

    ::amalthea::Runnable_ptr m_entity;

    ::amalthea::Process_ptr m_process;

    ::amalthea::ProcessingUnit_ptr m_processingUnit;

};

}
 // amalthea

#endif // AMALTHEA_RUNNABLEEVENT_HPP

