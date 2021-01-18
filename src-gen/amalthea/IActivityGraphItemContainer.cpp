// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/IActivityGraphItemContainer.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IActivityGraphItemContainer.hpp"
#include <amalthea/ActivityGraphItem.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IActivityGraphItemContainer.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
IActivityGraphItemContainer::IActivityGraphItemContainer()
{

    m_items.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::ActivityGraphItem_ptr, -1, true, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getIActivityGraphItemContainer__items()));

    /*PROTECTED REGION ID(IActivityGraphItemContainerImpl__IActivityGraphItemContainerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

IActivityGraphItemContainer::~IActivityGraphItemContainer()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::ActivityGraphItem_ptr >& IActivityGraphItemContainer::getItems() const
{
    return *m_items;
}

::ecorecpp::mapping::EList< ::amalthea::ActivityGraphItem_ptr >& IActivityGraphItemContainer::getItems()
{
    return *m_items;
}

