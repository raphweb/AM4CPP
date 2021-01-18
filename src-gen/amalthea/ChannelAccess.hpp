// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelAccess.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CHANNELACCESS_HPP
#define AMALTHEA_CHANNELACCESS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ActivityGraphItem.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ChannelAccess_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ChannelAccess : public virtual ::amalthea::ActivityGraphItem
{
public:
    ChannelAccess();

    virtual ~ChannelAccess();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getElements () const;
    virtual void setElements (::ecore::EInt _elements);

    // References
    virtual ::amalthea::Channel_ptr getData () const;
    virtual void setData (::amalthea::Channel_ptr _data);

    virtual ::amalthea::TransmissionPolicy_ptr getTransmissionPolicy () const;
    virtual void setTransmissionPolicy (::amalthea::TransmissionPolicy_ptr _transmissionPolicy);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CHANNELACCESS;

    /*PROTECTED REGION ID(ChannelAccess) START*/
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

    /*PROTECTED REGION ID(ChannelAccessImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ChannelAccess_ptr _this()
    {   return ChannelAccess_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_elements;

    // References

    ::amalthea::Channel_ptr m_data;

    ::amalthea::TransmissionPolicy_ptr m_transmissionPolicy;

};

}
 // amalthea

#endif // AMALTHEA_CHANNELACCESS_HPP

