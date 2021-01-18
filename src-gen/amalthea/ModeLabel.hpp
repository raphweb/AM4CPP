// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ModeLabel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MODELABEL_HPP
#define AMALTHEA_MODELABEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/IDisplayName.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ModeLabel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ModeLabel : public virtual ::amalthea::AbstractMemoryElement, public virtual ::amalthea::IDisplayName
{
public:
    ModeLabel();

    virtual ~ModeLabel();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EBoolean validateInvariants ( ::ecore::EDiagnosticChain _diagnostics, std::map< ::ecore::EJavaObject, ::ecore::EJavaObject> const& _context);

    virtual ::ecore::EBoolean isEnum ();

    virtual ::ecore::EBoolean isNumeric ();

    // Attributes
    virtual ::ecore::EString const& getInitialValue () const;
    virtual void setInitialValue (::ecore::EString const& _initialValue);

    // References
    virtual ::amalthea::Mode_ptr getMode () const;
    virtual void setMode (::amalthea::Mode_ptr _mode);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MODELABEL;

    /*PROTECTED REGION ID(ModeLabel) START*/
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

    /*PROTECTED REGION ID(ModeLabelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ModeLabel_ptr _this()
    {   return ModeLabel_ptr(this);}

private:
    // Attributes

    ::ecore::EString m_initialValue;

    // References

    ::amalthea::Mode_ptr m_mode;

};

}
 // amalthea

#endif // AMALTHEA_MODELABEL_HPP

