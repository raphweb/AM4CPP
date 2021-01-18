// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AbstractEventChain.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ABSTRACTEVENTCHAIN_HPP
#define AMALTHEA_ABSTRACTEVENTCHAIN_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/EventChainItemType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(AbstractEventChain_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL AbstractEventChain : public virtual ::amalthea::BaseObject, public virtual ::amalthea::INamed
{
public:
    AbstractEventChain();

    virtual ~AbstractEventChain();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::EventChainItemType getItemType () const;
    virtual void setItemType (::amalthea::EventChainItemType _itemType);

    virtual ::amalthea::PositiveInt getMinItemsCompleted () const;
    virtual void setMinItemsCompleted (::amalthea::PositiveInt _minItemsCompleted);

    // References
    virtual ::amalthea::Event_ptr getStimulus () const;
    virtual void setStimulus (::amalthea::Event_ptr _stimulus);

    virtual ::amalthea::Event_ptr getResponse () const;
    virtual void setResponse (::amalthea::Event_ptr _response);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::EventChainItem_ptr >& getItems () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::EventChainItem_ptr >& getItems ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ABSTRACTEVENTCHAIN;

    /*PROTECTED REGION ID(AbstractEventChain) START*/
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

    /*PROTECTED REGION ID(AbstractEventChainImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    AbstractEventChain_ptr _this()
    {   return AbstractEventChain_ptr(this);}

private:
    // Attributes

    ::amalthea::EventChainItemType m_itemType;

    ::amalthea::PositiveInt m_minItemsCompleted;

    // References

    ::amalthea::Event_ptr m_stimulus;

    ::amalthea::Event_ptr m_response;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::EventChainItem_ptr >> m_items;

};

}
 // amalthea

#endif // AMALTHEA_ABSTRACTEVENTCHAIN_HPP

