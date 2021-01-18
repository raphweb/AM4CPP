// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AmaltheaPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <amalthea/AmaltheaPackage.hpp>

using namespace ::amalthea;

::ecore::Ptr< ::amalthea::AmaltheaPackage > AmaltheaPackage::s_instance;

::amalthea::AmaltheaPackage_ptr AmaltheaPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< AmaltheaPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < AmaltheaPackage > (new AmaltheaPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::amalthea::AmaltheaPackage_ptr AmaltheaPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

