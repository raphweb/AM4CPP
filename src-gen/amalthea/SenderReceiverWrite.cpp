// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SenderReceiverWrite.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SenderReceiverWrite.hpp"
#include <amalthea/SenderReceiverCommunication.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/ComponentPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "amalthea/AmaltheaPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SenderReceiverWrite.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::amalthea;

// Default constructor
SenderReceiverWrite::SenderReceiverWrite()
{

    m_notifiedRunnables.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::amalthea::Runnable_ptr, -1, false, false >(this,
                    ::amalthea::AmaltheaPackage::_instance()->getSenderReceiverWrite__notifiedRunnables()));

    /*PROTECTED REGION ID(SenderReceiverWriteImpl__SenderReceiverWriteImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

SenderReceiverWrite::~SenderReceiverWrite()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& SenderReceiverWrite::getNotifiedRunnables() const
{
    return *m_notifiedRunnables;
}

::ecorecpp::mapping::EList< ::amalthea::Runnable_ptr >& SenderReceiverWrite::getNotifiedRunnables()
{
    return *m_notifiedRunnables;
}

