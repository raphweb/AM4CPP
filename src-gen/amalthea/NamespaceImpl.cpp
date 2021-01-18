// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/NamespaceImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Namespace.hpp"
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/ReferableObject.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/INamed.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(NamespaceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

void Namespace::_initialize()
{
    // Supertypes
    ::amalthea::ReferableObject::_initialize();

    // References
    for (size_t i = 0; i < m_nextSegments->size(); i++)
    {
        (*m_nextSegments)[i]->_initialize();
    }

    /*PROTECTED REGION ID(NamespaceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

std::vector< ::ecore::EString > Namespace::getNamePrefixSegments()
{
    /*PROTECTED REGION ID(NamespaceImpl_getNamePrefixSegments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: amalthea::Namespace::getNamePrefixSegments";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject Namespace::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        return amalthea::INamed::eGet(_featureID, _resolve);
    }
    case ::amalthea::AmaltheaPackage::NAMESPACE__NEXTSEGMENTS:
    {
        _any = m_nextSegments->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::amalthea::AmaltheaPackage::NAMESPACE__PREVIOUSSEGMENT:
    {
        if (m_previousSegment)
            _any = ::ecore::as < ::ecore::EObject > (m_previousSegment);
        return _any;
    }
    }
    throw std::runtime_error("Namespace::eGet Error. FeatureID:" + _featureID);
}

void Namespace::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    {
        amalthea::INamed::eSet(_featureID, _newValue);
        return;
    }
    case ::amalthea::AmaltheaPackage::NAMESPACE__NEXTSEGMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::amalthea::Namespace::getNextSegments().clear();
        ::amalthea::Namespace::getNextSegments().insert_all(*_t0);
        return;
    }
    case ::amalthea::AmaltheaPackage::NAMESPACE__PREVIOUSSEGMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Namespace_ptr _t1 =
                dynamic_cast< ::amalthea::Namespace* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::amalthea::Namespace >(_t0);*/
        ::amalthea::Namespace::setPreviousSegment(_t1);
        return;
    }
    }
    throw std::runtime_error("Namespace::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean Namespace::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::INAMED__NAME:
    case ::amalthea::AmaltheaPackage::INAMED__QUALIFIEDNAME:
    {
        return amalthea::INamed::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::IREFERABLE__UNIQUENAME:
    {
        return amalthea::IReferable::eIsSet(_featureID);
    }
    case ::amalthea::AmaltheaPackage::NAMESPACE__NEXTSEGMENTS:
    {
        return m_nextSegments && m_nextSegments->size();
    }
    case ::amalthea::AmaltheaPackage::NAMESPACE__PREVIOUSSEGMENT:
    {
        return (bool) m_previousSegment;
    }
    case ::amalthea::AmaltheaPackage::NAMESPACE__MEMBEROBJECTS:
    {
        return m_memberObjects && m_memberObjects->size();
    }
    }
    throw std::runtime_error(
            "Namespace::eIsSet Error. FeatureID:" + _featureID);
}

void Namespace::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "Namespace::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr Namespace::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::amalthea::AmaltheaPackage* >(::amalthea::AmaltheaPackage::_instance().get())->getNamespace();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Namespace::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NAMESPACE__NEXTSEGMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Namespace_ptr _t1 =
                dynamic_cast< ::amalthea::Namespace* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::Namespace_ptr, -1, true, true >&) ::amalthea::Namespace::getNextSegments();
        container.basicAdd(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::NAMESPACE__PREVIOUSSEGMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::amalthea::Namespace_ptr _t1 =
                dynamic_cast< ::amalthea::Namespace* >(_t0.get());

        // set reference
        basicsetPreviousSegment(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Namespace::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::amalthea::AmaltheaPackage::NAMESPACE__NEXTSEGMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::Namespace_ptr _t1 =
                dynamic_cast< ::amalthea::Namespace* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::amalthea::Namespace_ptr, -1, true, true >&) ::amalthea::Namespace::getNextSegments();
        container.basicRemove(_t1);
    }
        return;
    case ::amalthea::AmaltheaPackage::NAMESPACE__PREVIOUSSEGMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::amalthea::Namespace_ptr _t1 =
                dynamic_cast< ::amalthea::Namespace* >(_t0.get());

        // set reference
        if (basicgetPreviousSegment() == _t1)
            basicsetPreviousSegment(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

