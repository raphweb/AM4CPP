// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Tag.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_TAG_HPP
#define AMALTHEA_TAG_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/IDescription.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Tag_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Tag : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::IDescription
{
public:
    Tag();

    virtual ~Tag();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getTagType () const;
    virtual void setTagType (::ecore::EString const& _tagType);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::ITaggable_ptr >& getTaggedObjects () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::ITaggable_ptr >& getTaggedObjects ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::TAG;

    /*PROTECTED REGION ID(Tag) START*/
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

    /*PROTECTED REGION ID(TagImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Tag_ptr _this()
    {   return Tag_ptr(this);}

private:
    // Attributes

    ::ecore::EString m_tagType;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::ITaggable_ptr >> m_taggedObjects;

};

}
 // amalthea

#endif // AMALTHEA_TAG_HPP

