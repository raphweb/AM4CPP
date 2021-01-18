// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/RunnableParameter.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_RUNNABLEPARAMETER_HPP
#define AMALTHEA_RUNNABLEPARAMETER_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/IDependsOn.hpp>
#include <amalthea/DirectionType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(RunnableParameter_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL RunnableParameter : public virtual ::amalthea::ReferableBaseObject, public virtual ::amalthea::IDependsOn
{
public:
    RunnableParameter();

    virtual ~RunnableParameter();

    virtual void _initialize();

    // Operations

    virtual std::vector< ::ecore::EString > getNamePrefixSegments ();

    virtual ::ecore::EString toString ();

    // Attributes
    virtual ::amalthea::DirectionType getDirection () const;
    virtual void setDirection (::amalthea::DirectionType _direction);

    // References
    virtual ::amalthea::Runnable_ptr getContainingRunnable () const;
    virtual void setContainingRunnable (::amalthea::Runnable_ptr _containingRunnable);
    virtual ::amalthea::Runnable_ptr basicgetContainingRunnable ();
    virtual void basicsetContainingRunnable (::amalthea::Runnable_ptr _containingRunnable);

    virtual ::amalthea::TypeDefinition_ptr getDataType () const;
    virtual void setDataType (::amalthea::TypeDefinition_ptr _dataType);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::RUNNABLEPARAMETER;

    /*PROTECTED REGION ID(RunnableParameter) START*/
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

    /*PROTECTED REGION ID(RunnableParameterImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RunnableParameter_ptr _this()
    {   return RunnableParameter_ptr(this);}

private:
    // Attributes

    ::amalthea::DirectionType m_direction;

    // References

    ::amalthea::Runnable_ptr m_containingRunnable;

    ::amalthea::TypeDefinition_ptr m_dataType;

};

}
 // amalthea

#endif // AMALTHEA_RUNNABLEPARAMETER_HPP

