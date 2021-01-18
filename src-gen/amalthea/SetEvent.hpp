// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SetEvent.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SETEVENT_HPP
#define AMALTHEA_SETEVENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ActivityGraphItem.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(SetEvent_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL SetEvent : public virtual ::amalthea::ActivityGraphItem
{
public:
    SetEvent();

    virtual ~SetEvent();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::EventMask_ptr getEventMask () const;
    virtual void setEventMask (::amalthea::EventMask_ptr _eventMask);

    virtual ::amalthea::Process_ptr getProcess () const;
    virtual void setProcess (::amalthea::Process_ptr _process);

    virtual ::amalthea::Counter_ptr getCounter () const;
    virtual void setCounter (::amalthea::Counter_ptr _counter);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::SETEVENT;

    /*PROTECTED REGION ID(SetEvent) START*/
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

    /*PROTECTED REGION ID(SetEventImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    SetEvent_ptr _this()
    {   return SetEvent_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::EventMask_ptr m_eventMask;

    ::amalthea::Process_ptr m_process;

    ::amalthea::Counter_ptr m_counter;

};

}
 // amalthea

#endif // AMALTHEA_SETEVENT_HPP

