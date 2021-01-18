// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableCall.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RUNNABLECALL_HPP
#define AMALTHEA_RUNNABLECALL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/ITaggable.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(RunnableCall_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL RunnableCall : public virtual ::amalthea::ActivityGraphItem, public virtual ::amalthea::ITaggable
{
public:
    RunnableCall();

    virtual ~RunnableCall();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::amalthea::Runnable_ptr getRunnable () const;
    virtual void setRunnable (::amalthea::Runnable_ptr _runnable);

    virtual const ::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >& getArguments () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >& getArguments ();

    virtual ::amalthea::Counter_ptr getCounter () const;
    virtual void setCounter (::amalthea::Counter_ptr _counter);

    virtual ::amalthea::RunEntityCallStatistic_ptr getStatistic () const;
    virtual void setStatistic (::amalthea::RunEntityCallStatistic_ptr _statistic);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::RUNNABLECALL;

    /*PROTECTED REGION ID(RunnableCall) START*/
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

    /*PROTECTED REGION ID(RunnableCallImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RunnableCall_ptr _this()
    {   return RunnableCall_ptr(this);}

private:
    // Attributes

    // References

    ::amalthea::Runnable_ptr m_runnable;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::CallArgument_ptr >> m_arguments;

    ::amalthea::Counter_ptr m_counter;

    ::amalthea::RunEntityCallStatistic_ptr m_statistic;

};

}
 // amalthea

#endif // AMALTHEA_RUNNABLECALL_HPP

