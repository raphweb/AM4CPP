// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/GeneralPrecedence.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_GENERALPRECEDENCE_HPP
#define AMALTHEA_GENERALPRECEDENCE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(GeneralPrecedence_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL GeneralPrecedence : public virtual ::amalthea::BaseObject
{
public:
    GeneralPrecedence();

    virtual ~GeneralPrecedence();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Runnable_ptr getOrigin () const;
    virtual void setOrigin (::amalthea::Runnable_ptr _origin);

    virtual ::amalthea::Runnable_ptr getTarget () const;
    virtual void setTarget (::amalthea::Runnable_ptr _target);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::GENERALPRECEDENCE;

    /*PROTECTED REGION ID(GeneralPrecedence) START*/
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

    /*PROTECTED REGION ID(GeneralPrecedenceImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    GeneralPrecedence_ptr _this()
    {   return GeneralPrecedence_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Runnable_ptr m_origin;

    ::amalthea::Runnable_ptr m_target;

};

}
 // amalthea

#endif // AMALTHEA_GENERALPRECEDENCE_HPP

