// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLabelAccess.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MODELABELACCESS_HPP
#define AMALTHEA_MODELABELACCESS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/ModeLabelAccessEnum.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ModeLabelAccess_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ModeLabelAccess : public virtual ::amalthea::ActivityGraphItem
{
public:
    ModeLabelAccess();

    virtual ~ModeLabelAccess();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EBoolean validateInvariants ( ::ecore::EDiagnosticChain _diagnostics, std::map< ::ecore::EJavaObject, ::ecore::EJavaObject> const& _context);

    // Attributes
    virtual ::amalthea::ModeLabelAccessEnum getAccess () const;
    virtual void setAccess (::amalthea::ModeLabelAccessEnum _access);

    virtual ::ecore::EString const& getValue () const;
    virtual void setValue (::ecore::EString const& _value);

    virtual ::amalthea::PositiveInt getStep () const;
    virtual void setStep (::amalthea::PositiveInt _step);

    // References
    virtual ::amalthea::ModeLabel_ptr getData () const;
    virtual void setData (::amalthea::ModeLabel_ptr _data);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MODELABELACCESS;

    /*PROTECTED REGION ID(ModeLabelAccess) START*/
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

    /*PROTECTED REGION ID(ModeLabelAccessImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ModeLabelAccess_ptr _this()
    {   return ModeLabelAccess_ptr(this);}

private:
    // Attributes

    ::amalthea::ModeLabelAccessEnum m_access;

    ::ecore::EString m_value;

    ::amalthea::PositiveInt m_step;

    // References

    ::amalthea::ModeLabel_ptr m_data;

};

}
 // amalthea

#endif // AMALTHEA_MODELABELACCESS_HPP

