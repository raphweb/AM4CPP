// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/MemoryClassification.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MemoryClassification.hpp"
#include <amalthea/Classification.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/MemoryClassifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(MemoryClassification.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
MemoryClassification::MemoryClassification()
{

    m_classifiers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::MemoryClassifier_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getMemoryClassification__classifiers()));

    /*PROTECTED REGION ID(MemoryClassificationImpl__MemoryClassificationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

MemoryClassification::~MemoryClassification()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& MemoryClassification::getClassifiers() const
{
    return *m_classifiers;
}

::ecorecpp::mapping::EList< ::amalthea::MemoryClassifier_ptr >& MemoryClassification::getClassifiers()
{
    return *m_classifiers;
}

