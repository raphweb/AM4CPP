// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MainInterface.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_MAININTERFACE_HPP
#define AMALTHEA_MAININTERFACE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ComponentInterface.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/IComponentStructureMember.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(MainInterface_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL MainInterface : public virtual ::amalthea::ComponentInterface, public virtual ::amalthea::INamespaceMember, public virtual ::amalthea::IComponentStructureMember
{
public:
    MainInterface();

    virtual ~MainInterface();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getVersion () const;
    virtual void setVersion (::ecore::EString const& _version);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::MAININTERFACE;

    /*PROTECTED REGION ID(MainInterface) START*/
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

    /*PROTECTED REGION ID(MainInterfaceImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    MainInterface_ptr _this()
    {   return MainInterface_ptr(this);}

private:
    // Attributes

    ::ecore::EString m_version;

    // References

};

}
 // amalthea

#endif // AMALTHEA_MAININTERFACE_HPP

