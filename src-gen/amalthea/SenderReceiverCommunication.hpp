// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SenderReceiverCommunication.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SENDERRECEIVERCOMMUNICATION_HPP
#define AMALTHEA_SENDERRECEIVERCOMMUNICATION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ActivityGraphItem.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(SenderReceiverCommunication_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL SenderReceiverCommunication : public virtual ::amalthea::ActivityGraphItem
{
public:
    SenderReceiverCommunication();

    virtual ~SenderReceiverCommunication();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isBuffered () const;
    virtual void setBuffered (::ecore::EBoolean _buffered);

    // References
    virtual ::amalthea::Label_ptr getLabel () const;
    virtual void setLabel (::amalthea::Label_ptr _label);

    virtual ::amalthea::ComponentPort_ptr getPort () const;
    virtual void setPort (::amalthea::ComponentPort_ptr _port);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::SENDERRECEIVERCOMMUNICATION;

    /*PROTECTED REGION ID(SenderReceiverCommunication) START*/
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

    /*PROTECTED REGION ID(SenderReceiverCommunicationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    SenderReceiverCommunication_ptr _this()
    {   return SenderReceiverCommunication_ptr(this);}

private:
    // Attributes

    ::ecore::EBoolean m_buffered;

    // References

    ::amalthea::Label_ptr m_label;

    ::amalthea::ComponentPort_ptr m_port;

};

}
 // amalthea

#endif // AMALTHEA_SENDERRECEIVERCOMMUNICATION_HPP

