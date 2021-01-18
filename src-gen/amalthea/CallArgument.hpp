// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CallArgument.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CALLARGUMENT_HPP
#define AMALTHEA_CALLARGUMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableObject.hpp>
#include <amalthea/IDependsOn.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(CallArgument_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL CallArgument : public virtual ::amalthea::ReferableObject, public virtual ::amalthea::IDependsOn
{
public:
    CallArgument();

    virtual ~CallArgument();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EString getName ();

    virtual std::vector< ::ecore::EString > getNamePrefixSegments ();

    // Attributes

    // References
    virtual ::amalthea::RunnableCall_ptr getContainingCall () const;
    virtual void setContainingCall (::amalthea::RunnableCall_ptr _containingCall);
    virtual ::amalthea::RunnableCall_ptr basicgetContainingCall ();
    virtual void basicsetContainingCall (::amalthea::RunnableCall_ptr _containingCall);

    virtual ::amalthea::RunnableParameter_ptr getParameter () const;
    virtual void setParameter (::amalthea::RunnableParameter_ptr _parameter);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CALLARGUMENT;

    /*PROTECTED REGION ID(CallArgument) START*/
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

    /*PROTECTED REGION ID(CallArgumentImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CallArgument_ptr _this()
    {   return CallArgument_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::RunnableCall_ptr m_containingCall;

    ::amalthea::RunnableParameter_ptr m_parameter;

};

}
 // amalthea

#endif // AMALTHEA_CALLARGUMENT_HPP

