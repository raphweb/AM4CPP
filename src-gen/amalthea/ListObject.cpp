// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ListObject.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ListObject.hpp"
#include <amalthea/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ListObject.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
ListObject::ListObject()
{

    m_values.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::amalthea::Value_ptr,
                    -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getListObject__values()));

    /*PROTECTED REGION ID(ListObjectImpl__ListObjectImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ListObject::~ListObject()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Value_ptr >& ListObject::getValues() const
{
    return *m_values;
}

::ecorecpp::mapping::EList< ::amalthea::Value_ptr >& ListObject::getValues()
{
    return *m_values;
}

