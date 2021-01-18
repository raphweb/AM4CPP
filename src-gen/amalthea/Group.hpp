// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Group.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_GROUP_HPP
#define AMALTHEA_GROUP_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/IActivityGraphItemContainer.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Group_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Group : public virtual ::amalthea::ActivityGraphItem, public virtual ::amalthea::INamed, public virtual ::amalthea::IActivityGraphItemContainer
{
public:
    Group();

    virtual ~Group();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isOrdered () const;
    virtual void setOrdered (::ecore::EBoolean _ordered);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::GROUP;

    /*PROTECTED REGION ID(Group) START*/
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

    /*PROTECTED REGION ID(GroupImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Group_ptr _this()
    {   return Group_ptr(this);}

private:
    // Attributes

    ::ecore::EBoolean m_ordered;

    // References

};

}
 // amalthea

#endif // AMALTHEA_GROUP_HPP

