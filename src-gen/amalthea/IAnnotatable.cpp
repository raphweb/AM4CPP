// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IAnnotatable.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IAnnotatable.hpp"
#include <amalthea/CustomProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IAnnotatable.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
IAnnotatable::IAnnotatable()
{

    m_customProperties.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::CustomProperty_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getIAnnotatable__customProperties()));

    /*PROTECTED REGION ID(IAnnotatableImpl__IAnnotatableImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

IAnnotatable::~IAnnotatable()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::CustomProperty_ptr >& IAnnotatable::getCustomProperties() const
{
    return *m_customProperties;
}

::ecorecpp::mapping::EList< ::amalthea::CustomProperty_ptr >& IAnnotatable::getCustomProperties()
{
    return *m_customProperties;
}

