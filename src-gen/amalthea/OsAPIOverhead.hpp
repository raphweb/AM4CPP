// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsAPIOverhead.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_OSAPIOVERHEAD_HPP
#define AMALTHEA_OSAPIOVERHEAD_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(OsAPIOverhead_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL OsAPIOverhead : public virtual ::amalthea::BaseObject
{
public:
    OsAPIOverhead();

    virtual ~OsAPIOverhead();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Ticks_ptr getApiSendMessage () const;
    virtual void setApiSendMessage (::amalthea::Ticks_ptr _apiSendMessage);

    virtual ::amalthea::Ticks_ptr getApiTerminateTask () const;
    virtual void setApiTerminateTask (::amalthea::Ticks_ptr _apiTerminateTask);

    virtual ::amalthea::Ticks_ptr getApiSchedule () const;
    virtual void setApiSchedule (::amalthea::Ticks_ptr _apiSchedule);

    virtual ::amalthea::Ticks_ptr getApiRequestResource () const;
    virtual void setApiRequestResource (::amalthea::Ticks_ptr _apiRequestResource);

    virtual ::amalthea::Ticks_ptr getApiReleaseResource () const;
    virtual void setApiReleaseResource (::amalthea::Ticks_ptr _apiReleaseResource);

    virtual ::amalthea::Ticks_ptr getApiSetEvent () const;
    virtual void setApiSetEvent (::amalthea::Ticks_ptr _apiSetEvent);

    virtual ::amalthea::Ticks_ptr getApiWaitEvent () const;
    virtual void setApiWaitEvent (::amalthea::Ticks_ptr _apiWaitEvent);

    virtual ::amalthea::Ticks_ptr getApiClearEvent () const;
    virtual void setApiClearEvent (::amalthea::Ticks_ptr _apiClearEvent);

    virtual ::amalthea::Ticks_ptr getApiActivateTask () const;
    virtual void setApiActivateTask (::amalthea::Ticks_ptr _apiActivateTask);

    virtual ::amalthea::Ticks_ptr getApiEnforcedMigration () const;
    virtual void setApiEnforcedMigration (::amalthea::Ticks_ptr _apiEnforcedMigration);

    virtual ::amalthea::Ticks_ptr getApiSuspendOsInterrupts () const;
    virtual void setApiSuspendOsInterrupts (::amalthea::Ticks_ptr _apiSuspendOsInterrupts);

    virtual ::amalthea::Ticks_ptr getApiResumeOsInterrupts () const;
    virtual void setApiResumeOsInterrupts (::amalthea::Ticks_ptr _apiResumeOsInterrupts);

    virtual ::amalthea::Ticks_ptr getApiRequestSpinlock () const;
    virtual void setApiRequestSpinlock (::amalthea::Ticks_ptr _apiRequestSpinlock);

    virtual ::amalthea::Ticks_ptr getApiReleaseSpinlock () const;
    virtual void setApiReleaseSpinlock (::amalthea::Ticks_ptr _apiReleaseSpinlock);

    virtual ::amalthea::Ticks_ptr getApiSenderReceiverRead () const;
    virtual void setApiSenderReceiverRead (::amalthea::Ticks_ptr _apiSenderReceiverRead);

    virtual ::amalthea::Ticks_ptr getApiSenderReceiverWrite () const;
    virtual void setApiSenderReceiverWrite (::amalthea::Ticks_ptr _apiSenderReceiverWrite);

    virtual ::amalthea::Ticks_ptr getApiSynchronousServerCallPoint () const;
    virtual void setApiSynchronousServerCallPoint (::amalthea::Ticks_ptr _apiSynchronousServerCallPoint);

    virtual ::amalthea::Ticks_ptr getApiIocRead () const;
    virtual void setApiIocRead (::amalthea::Ticks_ptr _apiIocRead);

    virtual ::amalthea::Ticks_ptr getApiIocWrite () const;
    virtual void setApiIocWrite (::amalthea::Ticks_ptr _apiIocWrite);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::OSAPIOVERHEAD;

    /*PROTECTED REGION ID(OsAPIOverhead) START*/
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

    /*PROTECTED REGION ID(OsAPIOverheadImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OsAPIOverhead_ptr _this()
    {   return OsAPIOverhead_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Ticks_ptr m_apiSendMessage;

    ::amalthea::Ticks_ptr m_apiTerminateTask;

    ::amalthea::Ticks_ptr m_apiSchedule;

    ::amalthea::Ticks_ptr m_apiRequestResource;

    ::amalthea::Ticks_ptr m_apiReleaseResource;

    ::amalthea::Ticks_ptr m_apiSetEvent;

    ::amalthea::Ticks_ptr m_apiWaitEvent;

    ::amalthea::Ticks_ptr m_apiClearEvent;

    ::amalthea::Ticks_ptr m_apiActivateTask;

    ::amalthea::Ticks_ptr m_apiEnforcedMigration;

    ::amalthea::Ticks_ptr m_apiSuspendOsInterrupts;

    ::amalthea::Ticks_ptr m_apiResumeOsInterrupts;

    ::amalthea::Ticks_ptr m_apiRequestSpinlock;

    ::amalthea::Ticks_ptr m_apiReleaseSpinlock;

    ::amalthea::Ticks_ptr m_apiSenderReceiverRead;

    ::amalthea::Ticks_ptr m_apiSenderReceiverWrite;

    ::amalthea::Ticks_ptr m_apiSynchronousServerCallPoint;

    ::amalthea::Ticks_ptr m_apiIocRead;

    ::amalthea::Ticks_ptr m_apiIocWrite;

};

}
 // amalthea

#endif // AMALTHEA_OSAPIOVERHEAD_HPP

