// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SynchronousServerCall.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SYNCHRONOUSSERVERCALL_HPP
#define AMALTHEA_SYNCHRONOUSSERVERCALL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ServerCall.hpp>
#include <amalthea/WaitingBehaviour.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(SynchronousServerCall_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL SynchronousServerCall : public virtual ::amalthea::ServerCall
{
public:
    SynchronousServerCall();

    virtual ~SynchronousServerCall();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::WaitingBehaviour getWaitingBehaviour () const;
    virtual void setWaitingBehaviour (::amalthea::WaitingBehaviour _waitingBehaviour);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::SYNCHRONOUSSERVERCALL;

    /*PROTECTED REGION ID(SynchronousServerCall) START*/
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

    /*PROTECTED REGION ID(SynchronousServerCallImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    SynchronousServerCall_ptr _this()
    {   return SynchronousServerCall_ptr(this);}

private:
    // Attributes

    ::amalthea::WaitingBehaviour m_waitingBehaviour;

    // References

};

}
 // amalthea

#endif // AMALTHEA_SYNCHRONOUSSERVERCALL_HPP

