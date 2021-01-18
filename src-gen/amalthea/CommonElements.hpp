// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CommonElements.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_COMMONELEMENTS_HPP
#define AMALTHEA_COMMONELEMENTS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(CommonElements_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL CommonElements : public virtual ::amalthea::BaseObject
{
public:
    CommonElements();

    virtual ~CommonElements();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::Tag_ptr >& getTags () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Tag_ptr >& getTags ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >& getNamespaces () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >& getNamespaces ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::CoreClassifier_ptr >& getCoreClassifiers () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::CoreClassifier_ptr >& getCoreClassifiers ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& getMemoryClassifiers () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& getMemoryClassifiers ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::COMMONELEMENTS;

    /*PROTECTED REGION ID(CommonElements) START*/
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

    /*PROTECTED REGION ID(CommonElementsImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CommonElements_ptr _this()
    {   return CommonElements_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Tag_ptr >> m_tags;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >> m_namespaces;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::CoreClassifier_ptr >> m_coreClassifiers;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >> m_memoryClassifiers;

};

}
 // amalthea

#endif // AMALTHEA_COMMONELEMENTS_HPP

