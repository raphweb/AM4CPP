// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Channel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_CHANNEL_HPP
#define AMALTHEA_CHANNEL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/IDisplayName.hpp>
#include <amalthea/INamespaceMember.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Channel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Channel : public virtual ::amalthea::AbstractMemoryElement, public virtual ::amalthea::IDisplayName, public virtual ::amalthea::INamespaceMember
{
public:
    Channel();

    virtual ~Channel();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getDefaultElements () const;
    virtual void setDefaultElements (::ecore::EInt _defaultElements);

    virtual ::ecore::EInt getMaxElements () const;
    virtual void setMaxElements (::ecore::EInt _maxElements);

    // References
    virtual ::amalthea::DataType_ptr getElementType () const;
    virtual void setElementType (::amalthea::DataType_ptr _elementType);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::ChannelAccess_ptr >& getChannelAccesses () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ChannelAccess_ptr >& getChannelAccesses ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::CHANNEL;

    /*PROTECTED REGION ID(Channel) START*/
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

    /*PROTECTED REGION ID(ChannelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Channel_ptr _this()
    {   return Channel_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_defaultElements;

    ::ecore::EInt m_maxElements;

    // References

    ::amalthea::DataType_ptr m_elementType;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ChannelAccess_ptr >> m_channelAccesses;

};

}
 // amalthea

#endif // AMALTHEA_CHANNEL_HPP

