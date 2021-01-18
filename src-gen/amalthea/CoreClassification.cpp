// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/CoreClassification.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CoreClassification.hpp"
#include <amalthea/Classification.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/CoreClassifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CoreClassification.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
CoreClassification::CoreClassification()
{

    m_classifiers.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::CoreClassifier_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getCoreClassification__classifiers()));

    /*PROTECTED REGION ID(CoreClassificationImpl__CoreClassificationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

CoreClassification::~CoreClassification()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::CoreClassifier_ptr >& CoreClassification::getClassifiers() const
{
    return *m_classifiers;
}

::ecorecpp::mapping::EList< ::amalthea::CoreClassifier_ptr >& CoreClassification::getClassifiers()
{
    return *m_classifiers;
}

