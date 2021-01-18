// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/WaitEvent.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_WAITEVENT_HPP
#define AMALTHEA_WAITEVENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/WaitEventType.hpp>
#include <amalthea/WaitingBehaviour.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(WaitEvent_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL WaitEvent : public virtual ::amalthea::ActivityGraphItem
{
public:
    WaitEvent();

    virtual ~WaitEvent();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::WaitEventType getMaskType () const;
    virtual void setMaskType (::amalthea::WaitEventType _maskType);

    virtual ::amalthea::WaitingBehaviour getWaitingBehaviour () const;
    virtual void setWaitingBehaviour (::amalthea::WaitingBehaviour _waitingBehaviour);

    // References
    virtual ::amalthea::EventMask_ptr getEventMask () const;
    virtual void setEventMask (::amalthea::EventMask_ptr _eventMask);

    virtual ::amalthea::Counter_ptr getCounter () const;
    virtual void setCounter (::amalthea::Counter_ptr _counter);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::WAITEVENT;

    /*PROTECTED REGION ID(WaitEvent) START*/
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

    /*PROTECTED REGION ID(WaitEventImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    WaitEvent_ptr _this()
    {   return WaitEvent_ptr(this);}

private:
    // Attributes

    ::amalthea::WaitEventType m_maskType;

    ::amalthea::WaitingBehaviour m_waitingBehaviour;

    // References

    ::amalthea::EventMask_ptr m_eventMask;

    ::amalthea::Counter_ptr m_counter;

};

}
 // amalthea

#endif // AMALTHEA_WAITEVENT_HPP

