// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChainedProcessPrototype.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CHAINEDPROCESSPROTOTYPE_HPP
#define AMALTHEA_CHAINEDPROCESSPROTOTYPE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ChainedProcessPrototype_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ChainedProcessPrototype : public virtual ::amalthea::BaseObject
{
public:
    ChainedProcessPrototype();

    virtual ~ChainedProcessPrototype();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getApply () const;
    virtual void setApply (::ecore::EInt _apply);

    virtual ::ecore::EInt getOffset () const;
    virtual void setOffset (::ecore::EInt _offset);

    // References
    virtual ::amalthea::ProcessPrototype_ptr getPrototype () const;
    virtual void setPrototype (::amalthea::ProcessPrototype_ptr _prototype);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CHAINEDPROCESSPROTOTYPE;

    /*PROTECTED REGION ID(ChainedProcessPrototype) START*/
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

    /*PROTECTED REGION ID(ChainedProcessPrototypeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ChainedProcessPrototype_ptr _this()
    {   return ChainedProcessPrototype_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_apply;

    ::ecore::EInt m_offset;

    // References

    ::amalthea::ProcessPrototype_ptr m_prototype;

};

}
 // amalthea

#endif // AMALTHEA_CHAINEDPROCESSPROTOTYPE_HPP

