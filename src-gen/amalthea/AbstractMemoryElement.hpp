// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AbstractMemoryElement.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ABSTRACTMEMORYELEMENT_HPP
#define AMALTHEA_ABSTRACTMEMORYELEMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/ITaggable.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(AbstractMemoryElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL AbstractMemoryElement : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::ITaggable
{
public:
    AbstractMemoryElement();

    virtual ~AbstractMemoryElement();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::DataSize_ptr getSize () const;
    virtual void setSize (::amalthea::DataSize_ptr _size);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& getMappings () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >& getMappings ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ABSTRACTMEMORYELEMENT;

    /*PROTECTED REGION ID(AbstractMemoryElement) START*/
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

    /*PROTECTED REGION ID(AbstractMemoryElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    AbstractMemoryElement_ptr _this()
    {   return AbstractMemoryElement_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::DataSize_ptr m_size;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::MemoryMapping_ptr >> m_mappings;

};

}
 // amalthea

#endif // AMALTHEA_ABSTRACTMEMORYELEMENT_HPP

