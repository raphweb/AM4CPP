// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsEvent.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_OSEVENT_HPP
#define AMALTHEA_OSEVENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(OsEvent_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL OsEvent : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::ITaggable
{
public:
    OsEvent();

    virtual ~OsEvent();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getCommunicationOverheadInBit () const;
    virtual void setCommunicationOverheadInBit (::ecore::EInt _communicationOverheadInBit);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& getReferringComponents () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& getReferringComponents ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::OSEVENT;

    /*PROTECTED REGION ID(OsEvent) START*/
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

    /*PROTECTED REGION ID(OsEventImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OsEvent_ptr _this()
    {   return OsEvent_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_communicationOverheadInBit;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Component_ptr >> m_referringComponents;

};

}
 // amalthea

#endif // AMALTHEA_OSEVENT_HPP

