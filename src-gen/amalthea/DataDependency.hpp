// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/DataDependency.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_DATADEPENDENCY_HPP
#define AMALTHEA_DATADEPENDENCY_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/BaseObject.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(DataDependency_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL DataDependency : public virtual ::amalthea::BaseObject
{
public:
    DataDependency();

    virtual ~DataDependency();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Label_ptr >& getLabels ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >& getParameters () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >& getParameters ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >& getCallArguments () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >& getCallArguments ();

    virtual ::amalthea::Runnable_ptr getContainingRunnable () const;
    virtual void setContainingRunnable (::amalthea::Runnable_ptr _containingRunnable);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::DATADEPENDENCY;

    /*PROTECTED REGION ID(DataDependency) START*/
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

    /*PROTECTED REGION ID(DataDependencyImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DataDependency_ptr _this()
    {   return DataDependency_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Label_ptr >> m_labels;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::RunnableParameter_ptr >> m_parameters;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >> m_callArguments;

    ::amalthea::Runnable_ptr m_containingRunnable;

};

}
 // amalthea

#endif // AMALTHEA_DATADEPENDENCY_HPP

