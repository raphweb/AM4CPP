// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CommonElements.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommonElements.hpp"
#include <amalthea/BaseObject.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/CoreClassifier.hpp>
#include <amalthea/MemoryClassifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CommonElements.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CommonElements::CommonElements()
{

    m_tags.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Tag_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getCommonElements__tags()));
    m_namespaces.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Namespace_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getCommonElements__namespaces()));
    m_coreClassifiers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::CoreClassifier_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getCommonElements__coreClassifiers()));
    m_memoryClassifiers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::MemoryClassifier_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getCommonElements__memoryClassifiers()));

    /*PROTECTED REGION ID(CommonElementsImpl__CommonElementsImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CommonElements::~CommonElements()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Tag_ptr >& CommonElements::getTags() const
{
    return *m_tags;
}

::ecorecpp::mapping::EList< ::amalthea::Tag_ptr >& CommonElements::getTags()
{
    return *m_tags;
}

const ::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >& CommonElements::getNamespaces() const
{
    return *m_namespaces;
}

::ecorecpp::mapping::EList< ::amalthea::Namespace_ptr >& CommonElements::getNamespaces()
{
    return *m_namespaces;
}

const ::ecorecpp::mapping::EList< ::amalthea::CoreClassifier_ptr >& CommonElements::getCoreClassifiers() const
{
    return *m_coreClassifiers;
}

::ecorecpp::mapping::EList< ::amalthea::CoreClassifier_ptr >& CommonElements::getCoreClassifiers()
{
    return *m_coreClassifiers;
}

const ::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& CommonElements::getMemoryClassifiers() const
{
    return *m_memoryClassifiers;
}

::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& CommonElements::getMemoryClassifiers()
{
    return *m_memoryClassifiers;
}

