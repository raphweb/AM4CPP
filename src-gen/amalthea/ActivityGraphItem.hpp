// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/ActivityGraphItem.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_ACTIVITYGRAPHITEM_HPP
#define AMALTHEA_ACTIVITYGRAPHITEM_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(ActivityGraphItem_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL ActivityGraphItem : public virtual ::amalthea::BaseObject
{
public:
    ActivityGraphItem();

    virtual ~ActivityGraphItem();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Process_ptr getContainingProcess () const;
    virtual void setContainingProcess (::amalthea::Process_ptr _containingProcess);

    virtual ::amalthea::Runnable_ptr getContainingRunnable () const;
    virtual void setContainingRunnable (::amalthea::Runnable_ptr _containingRunnable);

    virtual ::amalthea::ActivityGraph_ptr getContainingActivityGraph () const;
    virtual void setContainingActivityGraph (::amalthea::ActivityGraph_ptr _containingActivityGraph);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::ACTIVITYGRAPHITEM;

    /*PROTECTED REGION ID(ActivityGraphItem) START*/
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

    /*PROTECTED REGION ID(ActivityGraphItemImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ActivityGraphItem_ptr _this()
    {   return ActivityGraphItem_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Process_ptr m_containingProcess;

    ::amalthea::Runnable_ptr m_containingRunnable;

    ::amalthea::ActivityGraph_ptr m_containingActivityGraph;

};

}
 // amalthea

#endif // AMALTHEA_ACTIVITYGRAPHITEM_HPP

