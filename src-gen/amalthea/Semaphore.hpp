// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/Semaphore.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SEMAPHORE_HPP
#define AMALTHEA_SEMAPHORE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <ecore_forward.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/SemaphoreType.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(Semaphore_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL Semaphore : public virtual ::amalthea::ReferableBaseObject
{
public:
    Semaphore();

    virtual ~Semaphore();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::SemaphoreType getSemaphoreType () const;
    virtual void setSemaphoreType (::amalthea::SemaphoreType _semaphoreType);

    virtual ::ecore::EInt getInitialValue () const;
    virtual void setInitialValue (::ecore::EInt _initialValue);

    virtual ::ecore::EInt getMaxValue () const;
    virtual void setMaxValue (::ecore::EInt _maxValue);

    virtual ::ecore::EBoolean isPriorityCeilingProtocol () const;
    virtual void setPriorityCeilingProtocol (::ecore::EBoolean _priorityCeilingProtocol);

    // References
    virtual const ::ecorecpp::mapping::EList< ::amalthea::SemaphoreAccess_ptr >& getSemaphoreAccesses () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::SemaphoreAccess_ptr >& getSemaphoreAccesses ();

    virtual const ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& getReferringComponents () const;
    virtual ::ecorecpp::mapping::EList< ::amalthea::Component_ptr >& getReferringComponents ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::SEMAPHORE;

    /*PROTECTED REGION ID(Semaphore) START*/
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

    /*PROTECTED REGION ID(SemaphoreImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Semaphore_ptr _this()
    {   return Semaphore_ptr(this);}

private:
    // Attributes

    ::amalthea::SemaphoreType m_semaphoreType;

    ::ecore::EInt m_initialValue;

    ::ecore::EInt m_maxValue;

    ::ecore::EBoolean m_priorityCeilingProtocol;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::SemaphoreAccess_ptr >> m_semaphoreAccesses;

    std::shared_ptr<::ecorecpp::mapping::EList< ::amalthea::Component_ptr >> m_referringComponents;

};

}
 // amalthea

#endif // AMALTHEA_SEMAPHORE_HPP

