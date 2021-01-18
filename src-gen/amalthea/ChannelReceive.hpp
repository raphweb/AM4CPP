// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ChannelReceive.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CHANNELRECEIVE_HPP
#define AMALTHEA_CHANNELRECEIVE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ChannelAccess.hpp>
#include <amalthea/ReceiveOperation.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ChannelReceive_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ChannelReceive : public virtual ::amalthea::ChannelAccess
{
public:
    ChannelReceive();

    virtual ~ChannelReceive();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::ReceiveOperation getReceiveOperation () const;
    virtual void setReceiveOperation (::amalthea::ReceiveOperation _receiveOperation);

    virtual ::ecore::EBoolean isDataMustBeNew () const;
    virtual void setDataMustBeNew (::ecore::EBoolean _dataMustBeNew);

    virtual ::ecore::EInt getElementIndex () const;
    virtual void setElementIndex (::ecore::EInt _elementIndex);

    virtual ::ecore::EInt getLowerBound () const;
    virtual void setLowerBound (::ecore::EInt _lowerBound);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CHANNELRECEIVE;

    /*PROTECTED REGION ID(ChannelReceive) START*/
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

    /*PROTECTED REGION ID(ChannelReceiveImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ChannelReceive_ptr _this()
    {   return ChannelReceive_ptr(this);}

private:
    // Attributes

    ::amalthea::ReceiveOperation m_receiveOperation;

    ::ecore::EBoolean m_dataMustBeNew;

    ::ecore::EInt m_elementIndex;

    ::ecore::EInt m_lowerBound;

    // References

};

}
 // amalthea

#endif // AMALTHEA_CHANNELRECEIVE_HPP

