// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AsynchronousServerCall.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ASYNCHRONOUSSERVERCALL_HPP
#define AMALTHEA_ASYNCHRONOUSSERVERCALL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ServerCall.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(AsynchronousServerCall_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL AsynchronousServerCall : public virtual ::amalthea::ServerCall
{
public:
    AsynchronousServerCall();

    virtual ~AsynchronousServerCall();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Runnable_ptr getResultRunnable () const;
    virtual void setResultRunnable (::amalthea::Runnable_ptr _resultRunnable);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ASYNCHRONOUSSERVERCALL;

    /*PROTECTED REGION ID(AsynchronousServerCall) START*/
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

    /*PROTECTED REGION ID(AsynchronousServerCallImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    AsynchronousServerCall_ptr _this()
    {   return AsynchronousServerCall_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Runnable_ptr m_resultRunnable;

};

}
 // amalthea

#endif // AMALTHEA_ASYNCHRONOUSSERVERCALL_HPP

