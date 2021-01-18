// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Namespace.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_NAMESPACE_HPP
#define AMALTHEA_NAMESPACE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Namespace_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Namespace : public virtual ::amalthea::ReferableObject
{
public:
    Namespace();

    virtual ~Namespace();

    virtual void _initialize();

    // Operations

    virtual std::vector< ::ecore::EString > getNamePrefixSegments ();

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >& getNextSegments () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >& getNextSegments ();

    virtual ::amalthea::Namespace_ptr getPreviousSegment () const;
    virtual void setPreviousSegment (::amalthea::Namespace_ptr _previousSegment);
    virtual ::amalthea::Namespace_ptr basicgetPreviousSegment ();
    virtual void basicsetPreviousSegment (::amalthea::Namespace_ptr _previousSegment);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::INamespaceMember_ptr >& getMemberObjects () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::INamespaceMember_ptr >& getMemberObjects ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::NAMESPACE;

    /*PROTECTED REGION ID(Namespace) START*/
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

    /*PROTECTED REGION ID(NamespaceImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Namespace_ptr _this()
    {   return Namespace_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >> m_nextSegments;

    ::amalthea::Namespace_ptr m_previousSegment;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::INamespaceMember_ptr >> m_memberObjects;

};

}
 // amalthea

#endif // AMALTHEA_NAMESPACE_HPP

