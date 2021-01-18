// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ITaggable.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ITaggable.hpp"
#include <amalthea/Tag.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ITaggable.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ITaggable::ITaggable()
{

    m_tags.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Tag_ptr,
                    -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getITaggable__tags()));

    /*PROTECTED REGION ID(ITaggableImpl__ITaggableImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ITaggable::~ITaggable()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Tag_ptr >& ITaggable::getTags() const
{
    return *m_tags;
}

::ecorecpp::mapping::EList< ::amalthea::Tag_ptr >& ITaggable::getTags()
{
    return *m_tags;
}

