// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/OsOverhead.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_OSOVERHEAD_HPP
#define AMALTHEA_OSOVERHEAD_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(OsOverhead_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL OsOverhead : public virtual ::amalthea::ReferableBaseObject
{
public:
    OsOverhead();

    virtual ~OsOverhead();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::OsAPIOverhead_ptr getApiOverhead () const;
    virtual void setApiOverhead (::amalthea::OsAPIOverhead_ptr _apiOverhead);

    virtual ::amalthea::OsISROverhead_ptr getIsrCategory1Overhead () const;
    virtual void setIsrCategory1Overhead (::amalthea::OsISROverhead_ptr _isrCategory1Overhead);

    virtual ::amalthea::OsISROverhead_ptr getIsrCategory2Overhead () const;
    virtual void setIsrCategory2Overhead (::amalthea::OsISROverhead_ptr _isrCategory2Overhead);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::OSOVERHEAD;

    /*PROTECTED REGION ID(OsOverhead) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
    virtual void eUnset ( ::ecore::EInt _featureID) override;
    virtual ::ecore::EClass_ptr _eClass () override;
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;

    /*PROTECTED REGION ID(OsOverheadImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OsOverhead_ptr _this()
    {   return OsOverhead_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::OsAPIOverhead_ptr m_apiOverhead;

    ::amalthea::OsISROverhead_ptr m_isrCategory1Overhead;

    ::amalthea::OsISROverhead_ptr m_isrCategory2Overhead;

};

}
 // amalthea

#endif // AMALTHEA_OSOVERHEAD_HPP

