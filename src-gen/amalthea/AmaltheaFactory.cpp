// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AmaltheaFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <amalthea/AmaltheaFactory.hpp>

using namespace ::amalthea;

::ecore::Ptr< ::amalthea::AmaltheaFactory > AmaltheaFactory::s_holder;

::amalthea::AmaltheaFactory_ptr AmaltheaFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < AmaltheaFactory > (new AmaltheaFactory());

    return s_holder;
}

