// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/SemaphoreAccess.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_SEMAPHOREACCESS_HPP
#define AMALTHEA_SEMAPHOREACCESS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <amalthea/dllAmalthea.hpp>
#include <amalthea_forward.hpp>

#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/SemaphoreAccessEnum.hpp>
#include <amalthea/WaitingBehaviour.hpp>

#include "AmaltheaPackage.hpp"

/*PROTECTED REGION ID(SemaphoreAccess_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace amalthea
{

class EXPORT_AMALTHEA_DLL SemaphoreAccess : public virtual ::amalthea::ActivityGraphItem
{
public:
    SemaphoreAccess();

    virtual ~SemaphoreAccess();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::amalthea::SemaphoreAccessEnum getAccess () const;
    virtual void setAccess (::amalthea::SemaphoreAccessEnum _access);

    virtual ::amalthea::WaitingBehaviour getWaitingBehaviour () const;
    virtual void setWaitingBehaviour (::amalthea::WaitingBehaviour _waitingBehaviour);

    // References
    virtual ::amalthea::Semaphore_ptr getSemaphore () const;
    virtual void setSemaphore (::amalthea::Semaphore_ptr _semaphore);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = AmaltheaPackage::SEMAPHOREACCESS;

    /*PROTECTED REGION ID(SemaphoreAccess) START*/
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

    /*PROTECTED REGION ID(SemaphoreAccessImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    SemaphoreAccess_ptr _this()
    {   return SemaphoreAccess_ptr(this);}

private:
    // Attributes

    ::amalthea::SemaphoreAccessEnum m_access;

    ::amalthea::WaitingBehaviour m_waitingBehaviour;

    // References

    ::amalthea::Semaphore_ptr m_semaphore;

};

}
 // amalthea

#endif // AMALTHEA_SEMAPHOREACCESS_HPP

