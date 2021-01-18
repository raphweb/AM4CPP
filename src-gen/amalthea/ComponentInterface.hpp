// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ComponentInterface.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COMPONENTINTERFACE_HPP
#define AMALTHEA_COMPONENTINTERFACE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ComponentInterface_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ComponentInterface : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::ITaggable
{
public:
    ComponentInterface();

    virtual ~ComponentInterface();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::TypeDefinition_ptr getDatatype () const;
    virtual void setDatatype (::amalthea::TypeDefinition_ptr _datatype);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::SubInterface_ptr >& getSubInterfaces () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::SubInterface_ptr >& getSubInterfaces ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::COMPONENTINTERFACE;

    /*PROTECTED REGION ID(ComponentInterface) START*/
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

    /*PROTECTED REGION ID(ComponentInterfaceImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ComponentInterface_ptr _this()
    {   return ComponentInterface_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::TypeDefinition_ptr m_datatype;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::SubInterface_ptr >> m_subInterfaces;

};

}
 // amalthea

#endif // AMALTHEA_COMPONENTINTERFACE_HPP

