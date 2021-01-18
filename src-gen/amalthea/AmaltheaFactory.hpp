// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AmaltheaFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _AMALTHEAFACTORY_HPP
#define _AMALTHEAFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <amalthea.hpp>

#include <amalthea/dllAmalthea.hpp>

namespace amalthea
{

    class EXPORT_AMALTHEA_DLL AmaltheaFactory : public virtual ::ecore::EFactory
    {
    public:

        static AmaltheaFactory_ptr _instance();

        virtual Amalthea_ptr createAmalthea();
        virtual CommonElements_ptr createCommonElements();
        virtual Tag_ptr createTag();
        virtual Namespace_ptr createNamespace();
        virtual CoreClassifier_ptr createCoreClassifier();
        virtual MemoryClassifier_ptr createMemoryClassifier();
        virtual TransmissionPolicy_ptr createTransmissionPolicy();
        virtual Time_ptr createTime();
        virtual Frequency_ptr createFrequency();
        virtual Voltage_ptr createVoltage();
        virtual DataSize_ptr createDataSize();
        virtual DataRate_ptr createDataRate();
        virtual CustomProperty_ptr createCustomProperty();
        virtual ListObject_ptr createListObject();
        virtual StringObject_ptr createStringObject();
        virtual BigIntegerObject_ptr createBigIntegerObject();
        virtual ReferenceObject_ptr createReferenceObject();
        virtual IntegerObject_ptr createIntegerObject();
        virtual LongObject_ptr createLongObject();
        virtual FloatObject_ptr createFloatObject();
        virtual DoubleObject_ptr createDoubleObject();
        virtual BooleanObject_ptr createBooleanObject();
        virtual MinAvgMaxStatistic_ptr createMinAvgMaxStatistic();
        virtual SingleValueStatistic_ptr createSingleValueStatistic();
        virtual TimeConstant_ptr createTimeConstant();
        virtual TimeHistogram_ptr createTimeHistogram();
        virtual TimeHistogramEntry_ptr createTimeHistogramEntry();
        virtual TimeBoundaries_ptr createTimeBoundaries();
        virtual TimeStatistics_ptr createTimeStatistics();
        virtual TimeUniformDistribution_ptr createTimeUniformDistribution();
        virtual TimeGaussDistribution_ptr createTimeGaussDistribution();
        virtual TimeWeibullEstimatorsDistribution_ptr createTimeWeibullEstimatorsDistribution();
        virtual TimeBetaDistribution_ptr createTimeBetaDistribution();
        virtual DiscreteValueConstant_ptr createDiscreteValueConstant();
        virtual DiscreteValueHistogram_ptr createDiscreteValueHistogram();
        virtual DiscreteValueHistogramEntry_ptr createDiscreteValueHistogramEntry();
        virtual DiscreteValueBoundaries_ptr createDiscreteValueBoundaries();
        virtual DiscreteValueStatistics_ptr createDiscreteValueStatistics();
        virtual DiscreteValueUniformDistribution_ptr createDiscreteValueUniformDistribution();
        virtual DiscreteValueGaussDistribution_ptr createDiscreteValueGaussDistribution();
        virtual DiscreteValueWeibullEstimatorsDistribution_ptr createDiscreteValueWeibullEstimatorsDistribution();
        virtual DiscreteValueBetaDistribution_ptr createDiscreteValueBetaDistribution();
        virtual ContinuousValueConstant_ptr createContinuousValueConstant();
        virtual ContinuousValueHistogram_ptr createContinuousValueHistogram();
        virtual ContinuousValueHistogramEntry_ptr createContinuousValueHistogramEntry();
        virtual ContinuousValueBoundaries_ptr createContinuousValueBoundaries();
        virtual ContinuousValueStatistics_ptr createContinuousValueStatistics();
        virtual ContinuousValueUniformDistribution_ptr createContinuousValueUniformDistribution();
        virtual ContinuousValueGaussDistribution_ptr createContinuousValueGaussDistribution();
        virtual ContinuousValueWeibullEstimatorsDistribution_ptr createContinuousValueWeibullEstimatorsDistribution();
        virtual ContinuousValueBetaDistribution_ptr createContinuousValueBetaDistribution();
        virtual NumericMode_ptr createNumericMode();
        virtual EnumMode_ptr createEnumMode();
        virtual ModeLiteral_ptr createModeLiteral();
        virtual ComponentsModel_ptr createComponentsModel();
        virtual MainInterface_ptr createMainInterface();
        virtual SubInterface_ptr createSubInterface();
        virtual ComponentPort_ptr createComponentPort();
        virtual ComponentStructure_ptr createComponentStructure();
        virtual Component_ptr createComponent();
        virtual Composite_ptr createComposite();
        virtual System_ptr createSystem();
        virtual ComponentInstance_ptr createComponentInstance();
        virtual Connector_ptr createConnector();
        virtual InterfaceChannel_ptr createInterfaceChannel();
        virtual QualifiedPort_ptr createQualifiedPort();
        virtual ConfigModel_ptr createConfigModel();
        virtual EventConfig_ptr createEventConfig();
        virtual ConstraintsModel_ptr createConstraintsModel();
        virtual RunnableSequencingConstraint_ptr createRunnableSequencingConstraint();
        virtual RunnableSeparationConstraint_ptr createRunnableSeparationConstraint();
        virtual ProcessSeparationConstraint_ptr createProcessSeparationConstraint();
        virtual DataSeparationConstraint_ptr createDataSeparationConstraint();
        virtual RunnablePairingConstraint_ptr createRunnablePairingConstraint();
        virtual ProcessPairingConstraint_ptr createProcessPairingConstraint();
        virtual DataPairingConstraint_ptr createDataPairingConstraint();
        virtual TargetMemory_ptr createTargetMemory();
        virtual TargetCore_ptr createTargetCore();
        virtual TargetScheduler_ptr createTargetScheduler();
        virtual LabelEntityGroup_ptr createLabelEntityGroup();
        virtual RunnableEntityGroup_ptr createRunnableEntityGroup();
        virtual ProcessEntityGroup_ptr createProcessEntityGroup();
        virtual TagGroup_ptr createTagGroup();
        virtual EventChain_ptr createEventChain();
        virtual SubEventChain_ptr createSubEventChain();
        virtual EventChainReference_ptr createEventChainReference();
        virtual EventChainContainer_ptr createEventChainContainer();
        virtual PhysicalSectionConstraint_ptr createPhysicalSectionConstraint();
        virtual EventSynchronizationConstraint_ptr createEventSynchronizationConstraint();
        virtual EventChainSynchronizationConstraint_ptr createEventChainSynchronizationConstraint();
        virtual DelayConstraint_ptr createDelayConstraint();
        virtual EventChainLatencyConstraint_ptr createEventChainLatencyConstraint();
        virtual RepetitionConstraint_ptr createRepetitionConstraint();
        virtual DataAgeConstraint_ptr createDataAgeConstraint();
        virtual DataAgeCycle_ptr createDataAgeCycle();
        virtual DataAgeTime_ptr createDataAgeTime();
        virtual ProcessRequirement_ptr createProcessRequirement();
        virtual RunnableRequirement_ptr createRunnableRequirement();
        virtual ArchitectureRequirement_ptr createArchitectureRequirement();
        virtual ProcessChainRequirement_ptr createProcessChainRequirement();
        virtual CPUPercentageRequirementLimit_ptr createCPUPercentageRequirementLimit();
        virtual FrequencyRequirementLimit_ptr createFrequencyRequirementLimit();
        virtual PercentageRequirementLimit_ptr createPercentageRequirementLimit();
        virtual CountRequirementLimit_ptr createCountRequirementLimit();
        virtual TimeRequirementLimit_ptr createTimeRequirementLimit();
        virtual DataCoherencyGroup_ptr createDataCoherencyGroup();
        virtual DataStabilityGroup_ptr createDataStabilityGroup();
        virtual ProcessScope_ptr createProcessScope();
        virtual RunnableScope_ptr createRunnableScope();
        virtual ComponentScope_ptr createComponentScope();
        virtual EventModel_ptr createEventModel();
        virtual EventSet_ptr createEventSet();
        virtual CustomEvent_ptr createCustomEvent();
        virtual StimulusEvent_ptr createStimulusEvent();
        virtual ProcessEvent_ptr createProcessEvent();
        virtual ProcessChainEvent_ptr createProcessChainEvent();
        virtual RunnableEvent_ptr createRunnableEvent();
        virtual LabelEvent_ptr createLabelEvent();
        virtual ChannelEvent_ptr createChannelEvent();
        virtual SemaphoreEvent_ptr createSemaphoreEvent();
        virtual ComponentEvent_ptr createComponentEvent();
        virtual HWModel_ptr createHWModel();
        virtual HwStructure_ptr createHwStructure();
        virtual FrequencyDomain_ptr createFrequencyDomain();
        virtual PowerDomain_ptr createPowerDomain();
        virtual ProcessingUnit_ptr createProcessingUnit();
        virtual Memory_ptr createMemory();
        virtual Cache_ptr createCache();
        virtual HwFeatureCategory_ptr createHwFeatureCategory();
        virtual HwFeature_ptr createHwFeature();
        virtual HwPort_ptr createHwPort();
        virtual ConnectionHandler_ptr createConnectionHandler();
        virtual HwConnection_ptr createHwConnection();
        virtual HwAccessElement_ptr createHwAccessElement();
        virtual ProcessingUnitDefinition_ptr createProcessingUnitDefinition();
        virtual ConnectionHandlerDefinition_ptr createConnectionHandlerDefinition();
        virtual MemoryDefinition_ptr createMemoryDefinition();
        virtual CacheDefinition_ptr createCacheDefinition();
        virtual HwAccessPath_ptr createHwAccessPath();
        virtual MappingModel_ptr createMappingModel();
        virtual SchedulerAllocation_ptr createSchedulerAllocation();
        virtual TaskAllocation_ptr createTaskAllocation();
        virtual ISRAllocation_ptr createISRAllocation();
        virtual RunnableAllocation_ptr createRunnableAllocation();
        virtual MemoryMapping_ptr createMemoryMapping();
        virtual PhysicalSectionMapping_ptr createPhysicalSectionMapping();
        virtual OSModel_ptr createOSModel();
        virtual OsDataConsistency_ptr createOsDataConsistency();
        virtual DataStability_ptr createDataStability();
        virtual NonAtomicDataCoherency_ptr createNonAtomicDataCoherency();
        virtual Semaphore_ptr createSemaphore();
        virtual TaskScheduler_ptr createTaskScheduler();
        virtual SchedulerAssociation_ptr createSchedulerAssociation();
        virtual InterruptController_ptr createInterruptController();
        virtual SchedulingParameters_ptr createSchedulingParameters();
        virtual ParameterExtension_ptr createParameterExtension();
        virtual FixedPriorityPreemptive_ptr createFixedPriorityPreemptive();
        virtual FixedPriorityPreemptiveWithBudgetEnforcement_ptr createFixedPriorityPreemptiveWithBudgetEnforcement();
        virtual OSEK_ptr createOSEK();
        virtual DeadlineMonotonic_ptr createDeadlineMonotonic();
        virtual RateMonotonic_ptr createRateMonotonic();
        virtual PfairPD2_ptr createPfairPD2();
        virtual PartlyPFairPD2_ptr createPartlyPFairPD2();
        virtual EarlyReleaseFairPD2_ptr createEarlyReleaseFairPD2();
        virtual PartlyEarlyReleaseFairPD2_ptr createPartlyEarlyReleaseFairPD2();
        virtual LeastLocalRemainingExecutionTimeFirst_ptr createLeastLocalRemainingExecutionTimeFirst();
        virtual EarliestDeadlineFirst_ptr createEarliestDeadlineFirst();
        virtual PriorityBasedRoundRobin_ptr createPriorityBasedRoundRobin();
        virtual DeferrableServer_ptr createDeferrableServer();
        virtual PollingPeriodicServer_ptr createPollingPeriodicServer();
        virtual SporadicServer_ptr createSporadicServer();
        virtual ConstantBandwidthServer_ptr createConstantBandwidthServer();
        virtual ConstantBandwidthServerWithCASH_ptr createConstantBandwidthServerWithCASH();
        virtual Grouping_ptr createGrouping();
        virtual UserSpecificSchedulingAlgorithm_ptr createUserSpecificSchedulingAlgorithm();
        virtual PriorityBased_ptr createPriorityBased();
        virtual OperatingSystem_ptr createOperatingSystem();
        virtual VendorOperatingSystem_ptr createVendorOperatingSystem();
        virtual OsOverhead_ptr createOsOverhead();
        virtual OsAPIOverhead_ptr createOsAPIOverhead();
        virtual OsISROverhead_ptr createOsISROverhead();
        virtual PropertyConstraintsModel_ptr createPropertyConstraintsModel();
        virtual ProcessAllocationConstraint_ptr createProcessAllocationConstraint();
        virtual ProcessPrototypeAllocationConstraint_ptr createProcessPrototypeAllocationConstraint();
        virtual RunnableAllocationConstraint_ptr createRunnableAllocationConstraint();
        virtual AbstractElementMappingConstraint_ptr createAbstractElementMappingConstraint();
        virtual CoreClassification_ptr createCoreClassification();
        virtual MemoryClassification_ptr createMemoryClassification();
        virtual StimuliModel_ptr createStimuliModel();
        virtual ModeValueList_ptr createModeValueList();
        virtual ModeValueMapEntry_ptr createModeValueMapEntry();
        virtual ModeAssignment_ptr createModeAssignment();
        virtual ModeConditionDisjunction_ptr createModeConditionDisjunction();
        virtual ModeValueCondition_ptr createModeValueCondition();
        virtual ModeLabelCondition_ptr createModeLabelCondition();
        virtual ModeConditionConjunction_ptr createModeConditionConjunction();
        virtual PeriodicStimulus_ptr createPeriodicStimulus();
        virtual RelativePeriodicStimulus_ptr createRelativePeriodicStimulus();
        virtual VariableRateStimulus_ptr createVariableRateStimulus();
        virtual Scenario_ptr createScenario();
        virtual PeriodicSyntheticStimulus_ptr createPeriodicSyntheticStimulus();
        virtual CustomStimulus_ptr createCustomStimulus();
        virtual SingleStimulus_ptr createSingleStimulus();
        virtual InterProcessStimulus_ptr createInterProcessStimulus();
        virtual PeriodicBurstStimulus_ptr createPeriodicBurstStimulus();
        virtual EventStimulus_ptr createEventStimulus();
        virtual ArrivalCurveStimulus_ptr createArrivalCurveStimulus();
        virtual ArrivalCurveEntry_ptr createArrivalCurveEntry();
        virtual ClockFunction_ptr createClockFunction();
        virtual ClockStepList_ptr createClockStepList();
        virtual ClockStep_ptr createClockStep();
        virtual SWModel_ptr createSWModel();
        virtual CustomEntity_ptr createCustomEntity();
        virtual ProcessChain_ptr createProcessChain();
        virtual ActivityGraph_ptr createActivityGraph();
        virtual ModeSwitch_ptr createModeSwitch();
        virtual ModeSwitchEntry_ptr createModeSwitchEntry();
        virtual ModeSwitchDefault_ptr createModeSwitchDefault();
        virtual ProbabilitySwitch_ptr createProbabilitySwitch();
        virtual ProbabilitySwitchEntry_ptr createProbabilitySwitchEntry();
        virtual Counter_ptr createCounter();
        virtual WaitEvent_ptr createWaitEvent();
        virtual SetEvent_ptr createSetEvent();
        virtual ClearEvent_ptr createClearEvent();
        virtual EventMask_ptr createEventMask();
        virtual OsEvent_ptr createOsEvent();
        virtual InterProcessTrigger_ptr createInterProcessTrigger();
        virtual EnforcedMigration_ptr createEnforcedMigration();
        virtual SchedulePoint_ptr createSchedulePoint();
        virtual TerminateProcess_ptr createTerminateProcess();
        virtual Task_ptr createTask();
        virtual ISR_ptr createISR();
        virtual ProcessPrototype_ptr createProcessPrototype();
        virtual ChainedProcessPrototype_ptr createChainedProcessPrototype();
        virtual AccessPrecedenceSpec_ptr createAccessPrecedenceSpec();
        virtual OrderPrecedenceSpec_ptr createOrderPrecedenceSpec();
        virtual DataDependency_ptr createDataDependency();
        virtual RunnableParameter_ptr createRunnableParameter();
        virtual Runnable_ptr createRunnable();
        virtual Label_ptr createLabel();
        virtual Channel_ptr createChannel();
        virtual ModeLabel_ptr createModeLabel();
        virtual Section_ptr createSection();
        virtual ExecutionNeed_ptr createExecutionNeed();
        virtual NeedEntry_ptr createNeedEntry();
        virtual Ticks_ptr createTicks();
        virtual TicksEntry_ptr createTicksEntry();
        virtual ModeLabelAccess_ptr createModeLabelAccess();
        virtual LabelAccess_ptr createLabelAccess();
        virtual ChannelSend_ptr createChannelSend();
        virtual ChannelReceive_ptr createChannelReceive();
        virtual SemaphoreAccess_ptr createSemaphoreAccess();
        virtual SenderReceiverRead_ptr createSenderReceiverRead();
        virtual SenderReceiverWrite_ptr createSenderReceiverWrite();
        virtual SynchronousServerCall_ptr createSynchronousServerCall();
        virtual AsynchronousServerCall_ptr createAsynchronousServerCall();
        virtual GetResultServerCall_ptr createGetResultServerCall();
        virtual Group_ptr createGroup();
        virtual CallArgument_ptr createCallArgument();
        virtual RunnableCall_ptr createRunnableCall();
        virtual CustomEventTrigger_ptr createCustomEventTrigger();
        virtual Struct_ptr createStruct();
        virtual StructEntry_ptr createStructEntry();
        virtual Array_ptr createArray();
        virtual Pointer_ptr createPointer();
        virtual TypeRef_ptr createTypeRef();
        virtual Alias_ptr createAlias();
        virtual DataTypeDefinition_ptr createDataTypeDefinition();
        virtual BaseTypeDefinition_ptr createBaseTypeDefinition();
        virtual PeriodicActivation_ptr createPeriodicActivation();
        virtual VariableRateActivation_ptr createVariableRateActivation();
        virtual SporadicActivation_ptr createSporadicActivation();
        virtual SingleActivation_ptr createSingleActivation();
        virtual EventActivation_ptr createEventActivation();
        virtual CustomActivation_ptr createCustomActivation();
        virtual LabelAccessStatistic_ptr createLabelAccessStatistic();
        virtual RunEntityCallStatistic_ptr createRunEntityCallStatistic();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< AmaltheaFactory > s_holder;

        AmaltheaFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline ::ecore::Ptr< T > create()
    {
        return ::ecore::Ptr< T >();
    }

    template< > inline Amalthea_ptr create< Amalthea >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createAmalthea();
    }

    template< > inline CommonElements_ptr create< CommonElements >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCommonElements();
    }

    template< > inline Tag_ptr create< Tag >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTag();
    }

    template< > inline Namespace_ptr create< Namespace >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createNamespace();
    }

    template< > inline CoreClassifier_ptr create< CoreClassifier >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCoreClassifier();
    }

    template< > inline MemoryClassifier_ptr create< MemoryClassifier >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createMemoryClassifier();
    }

    template< > inline TransmissionPolicy_ptr create< TransmissionPolicy >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTransmissionPolicy();
    }

    template< > inline Time_ptr create< Time >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTime();
    }

    template< > inline Frequency_ptr create< Frequency >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createFrequency();
    }

    template< > inline Voltage_ptr create< Voltage >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createVoltage();
    }

    template< > inline DataSize_ptr create< DataSize >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataSize();
    }

    template< > inline DataRate_ptr create< DataRate >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataRate();
    }

    template< > inline CustomProperty_ptr create< CustomProperty >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCustomProperty();
    }

    template< > inline ListObject_ptr create< ListObject >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createListObject();
    }

    template< > inline StringObject_ptr create< StringObject >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createStringObject();
    }

    template< > inline BigIntegerObject_ptr create< BigIntegerObject >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createBigIntegerObject();
    }

    template< > inline ReferenceObject_ptr create< ReferenceObject >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createReferenceObject();
    }

    template< > inline IntegerObject_ptr create< IntegerObject >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createIntegerObject();
    }

    template< > inline LongObject_ptr create< LongObject >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createLongObject();
    }

    template< > inline FloatObject_ptr create< FloatObject >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createFloatObject();
    }

    template< > inline DoubleObject_ptr create< DoubleObject >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDoubleObject();
    }

    template< > inline BooleanObject_ptr create< BooleanObject >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createBooleanObject();
    }

    template< > inline MinAvgMaxStatistic_ptr create< MinAvgMaxStatistic >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createMinAvgMaxStatistic();
    }

    template< > inline SingleValueStatistic_ptr create< SingleValueStatistic >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSingleValueStatistic();
    }

    template< > inline TimeConstant_ptr create< TimeConstant >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeConstant();
    }

    template< > inline TimeHistogram_ptr create< TimeHistogram >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeHistogram();
    }

    template< > inline TimeHistogramEntry_ptr create< TimeHistogramEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeHistogramEntry();
    }

    template< > inline TimeBoundaries_ptr create< TimeBoundaries >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeBoundaries();
    }

    template< > inline TimeStatistics_ptr create< TimeStatistics >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeStatistics();
    }

    template< > inline TimeUniformDistribution_ptr create<
            TimeUniformDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeUniformDistribution();
    }

    template< > inline TimeGaussDistribution_ptr create< TimeGaussDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeGaussDistribution();
    }

    template< > inline TimeWeibullEstimatorsDistribution_ptr create<
            TimeWeibullEstimatorsDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeWeibullEstimatorsDistribution();
    }

    template< > inline TimeBetaDistribution_ptr create< TimeBetaDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeBetaDistribution();
    }

    template< > inline DiscreteValueConstant_ptr create< DiscreteValueConstant >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDiscreteValueConstant();
    }

    template< > inline DiscreteValueHistogram_ptr create< DiscreteValueHistogram >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDiscreteValueHistogram();
    }

    template< > inline DiscreteValueHistogramEntry_ptr create<
            DiscreteValueHistogramEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDiscreteValueHistogramEntry();
    }

    template< > inline DiscreteValueBoundaries_ptr create<
            DiscreteValueBoundaries >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDiscreteValueBoundaries();
    }

    template< > inline DiscreteValueStatistics_ptr create<
            DiscreteValueStatistics >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDiscreteValueStatistics();
    }

    template< > inline DiscreteValueUniformDistribution_ptr create<
            DiscreteValueUniformDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDiscreteValueUniformDistribution();
    }

    template< > inline DiscreteValueGaussDistribution_ptr create<
            DiscreteValueGaussDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDiscreteValueGaussDistribution();
    }

    template< > inline DiscreteValueWeibullEstimatorsDistribution_ptr create<
            DiscreteValueWeibullEstimatorsDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDiscreteValueWeibullEstimatorsDistribution();
    }

    template< > inline DiscreteValueBetaDistribution_ptr create<
            DiscreteValueBetaDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDiscreteValueBetaDistribution();
    }

    template< > inline ContinuousValueConstant_ptr create<
            ContinuousValueConstant >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createContinuousValueConstant();
    }

    template< > inline ContinuousValueHistogram_ptr create<
            ContinuousValueHistogram >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createContinuousValueHistogram();
    }

    template< > inline ContinuousValueHistogramEntry_ptr create<
            ContinuousValueHistogramEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createContinuousValueHistogramEntry();
    }

    template< > inline ContinuousValueBoundaries_ptr create<
            ContinuousValueBoundaries >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createContinuousValueBoundaries();
    }

    template< > inline ContinuousValueStatistics_ptr create<
            ContinuousValueStatistics >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createContinuousValueStatistics();
    }

    template< > inline ContinuousValueUniformDistribution_ptr create<
            ContinuousValueUniformDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createContinuousValueUniformDistribution();
    }

    template< > inline ContinuousValueGaussDistribution_ptr create<
            ContinuousValueGaussDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createContinuousValueGaussDistribution();
    }

    template< > inline ContinuousValueWeibullEstimatorsDistribution_ptr create<
            ContinuousValueWeibullEstimatorsDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createContinuousValueWeibullEstimatorsDistribution();
    }

    template< > inline ContinuousValueBetaDistribution_ptr create<
            ContinuousValueBetaDistribution >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createContinuousValueBetaDistribution();
    }

    template< > inline NumericMode_ptr create< NumericMode >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createNumericMode();
    }

    template< > inline EnumMode_ptr create< EnumMode >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEnumMode();
    }

    template< > inline ModeLiteral_ptr create< ModeLiteral >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeLiteral();
    }

    template< > inline ComponentsModel_ptr create< ComponentsModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createComponentsModel();
    }

    template< > inline MainInterface_ptr create< MainInterface >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createMainInterface();
    }

    template< > inline SubInterface_ptr create< SubInterface >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSubInterface();
    }

    template< > inline ComponentPort_ptr create< ComponentPort >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createComponentPort();
    }

    template< > inline ComponentStructure_ptr create< ComponentStructure >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createComponentStructure();
    }

    template< > inline Component_ptr create< Component >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createComponent();
    }

    template< > inline Composite_ptr create< Composite >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createComposite();
    }

    template< > inline System_ptr create< System >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSystem();
    }

    template< > inline ComponentInstance_ptr create< ComponentInstance >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createComponentInstance();
    }

    template< > inline Connector_ptr create< Connector >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createConnector();
    }

    template< > inline InterfaceChannel_ptr create< InterfaceChannel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createInterfaceChannel();
    }

    template< > inline QualifiedPort_ptr create< QualifiedPort >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createQualifiedPort();
    }

    template< > inline ConfigModel_ptr create< ConfigModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createConfigModel();
    }

    template< > inline EventConfig_ptr create< EventConfig >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventConfig();
    }

    template< > inline ConstraintsModel_ptr create< ConstraintsModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createConstraintsModel();
    }

    template< > inline RunnableSequencingConstraint_ptr create<
            RunnableSequencingConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableSequencingConstraint();
    }

    template< > inline RunnableSeparationConstraint_ptr create<
            RunnableSeparationConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableSeparationConstraint();
    }

    template< > inline ProcessSeparationConstraint_ptr create<
            ProcessSeparationConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessSeparationConstraint();
    }

    template< > inline DataSeparationConstraint_ptr create<
            DataSeparationConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataSeparationConstraint();
    }

    template< > inline RunnablePairingConstraint_ptr create<
            RunnablePairingConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnablePairingConstraint();
    }

    template< > inline ProcessPairingConstraint_ptr create<
            ProcessPairingConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessPairingConstraint();
    }

    template< > inline DataPairingConstraint_ptr create< DataPairingConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataPairingConstraint();
    }

    template< > inline TargetMemory_ptr create< TargetMemory >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTargetMemory();
    }

    template< > inline TargetCore_ptr create< TargetCore >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTargetCore();
    }

    template< > inline TargetScheduler_ptr create< TargetScheduler >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTargetScheduler();
    }

    template< > inline LabelEntityGroup_ptr create< LabelEntityGroup >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createLabelEntityGroup();
    }

    template< > inline RunnableEntityGroup_ptr create< RunnableEntityGroup >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableEntityGroup();
    }

    template< > inline ProcessEntityGroup_ptr create< ProcessEntityGroup >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessEntityGroup();
    }

    template< > inline TagGroup_ptr create< TagGroup >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTagGroup();
    }

    template< > inline EventChain_ptr create< EventChain >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventChain();
    }

    template< > inline SubEventChain_ptr create< SubEventChain >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSubEventChain();
    }

    template< > inline EventChainReference_ptr create< EventChainReference >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventChainReference();
    }

    template< > inline EventChainContainer_ptr create< EventChainContainer >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventChainContainer();
    }

    template< > inline PhysicalSectionConstraint_ptr create<
            PhysicalSectionConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPhysicalSectionConstraint();
    }

    template< > inline EventSynchronizationConstraint_ptr create<
            EventSynchronizationConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventSynchronizationConstraint();
    }

    template< > inline EventChainSynchronizationConstraint_ptr create<
            EventChainSynchronizationConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventChainSynchronizationConstraint();
    }

    template< > inline DelayConstraint_ptr create< DelayConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDelayConstraint();
    }

    template< > inline EventChainLatencyConstraint_ptr create<
            EventChainLatencyConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventChainLatencyConstraint();
    }

    template< > inline RepetitionConstraint_ptr create< RepetitionConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRepetitionConstraint();
    }

    template< > inline DataAgeConstraint_ptr create< DataAgeConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataAgeConstraint();
    }

    template< > inline DataAgeCycle_ptr create< DataAgeCycle >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataAgeCycle();
    }

    template< > inline DataAgeTime_ptr create< DataAgeTime >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataAgeTime();
    }

    template< > inline ProcessRequirement_ptr create< ProcessRequirement >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessRequirement();
    }

    template< > inline RunnableRequirement_ptr create< RunnableRequirement >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableRequirement();
    }

    template< > inline ArchitectureRequirement_ptr create<
            ArchitectureRequirement >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createArchitectureRequirement();
    }

    template< > inline ProcessChainRequirement_ptr create<
            ProcessChainRequirement >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessChainRequirement();
    }

    template< > inline CPUPercentageRequirementLimit_ptr create<
            CPUPercentageRequirementLimit >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCPUPercentageRequirementLimit();
    }

    template< > inline FrequencyRequirementLimit_ptr create<
            FrequencyRequirementLimit >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createFrequencyRequirementLimit();
    }

    template< > inline PercentageRequirementLimit_ptr create<
            PercentageRequirementLimit >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPercentageRequirementLimit();
    }

    template< > inline CountRequirementLimit_ptr create< CountRequirementLimit >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCountRequirementLimit();
    }

    template< > inline TimeRequirementLimit_ptr create< TimeRequirementLimit >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTimeRequirementLimit();
    }

    template< > inline DataCoherencyGroup_ptr create< DataCoherencyGroup >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataCoherencyGroup();
    }

    template< > inline DataStabilityGroup_ptr create< DataStabilityGroup >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataStabilityGroup();
    }

    template< > inline ProcessScope_ptr create< ProcessScope >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessScope();
    }

    template< > inline RunnableScope_ptr create< RunnableScope >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableScope();
    }

    template< > inline ComponentScope_ptr create< ComponentScope >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createComponentScope();
    }

    template< > inline EventModel_ptr create< EventModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventModel();
    }

    template< > inline EventSet_ptr create< EventSet >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventSet();
    }

    template< > inline CustomEvent_ptr create< CustomEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCustomEvent();
    }

    template< > inline StimulusEvent_ptr create< StimulusEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createStimulusEvent();
    }

    template< > inline ProcessEvent_ptr create< ProcessEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessEvent();
    }

    template< > inline ProcessChainEvent_ptr create< ProcessChainEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessChainEvent();
    }

    template< > inline RunnableEvent_ptr create< RunnableEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableEvent();
    }

    template< > inline LabelEvent_ptr create< LabelEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createLabelEvent();
    }

    template< > inline ChannelEvent_ptr create< ChannelEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createChannelEvent();
    }

    template< > inline SemaphoreEvent_ptr create< SemaphoreEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSemaphoreEvent();
    }

    template< > inline ComponentEvent_ptr create< ComponentEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createComponentEvent();
    }

    template< > inline HWModel_ptr create< HWModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createHWModel();
    }

    template< > inline HwStructure_ptr create< HwStructure >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createHwStructure();
    }

    template< > inline FrequencyDomain_ptr create< FrequencyDomain >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createFrequencyDomain();
    }

    template< > inline PowerDomain_ptr create< PowerDomain >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPowerDomain();
    }

    template< > inline ProcessingUnit_ptr create< ProcessingUnit >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessingUnit();
    }

    template< > inline Memory_ptr create< Memory >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createMemory();
    }

    template< > inline Cache_ptr create< Cache >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCache();
    }

    template< > inline HwFeatureCategory_ptr create< HwFeatureCategory >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createHwFeatureCategory();
    }

    template< > inline HwFeature_ptr create< HwFeature >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createHwFeature();
    }

    template< > inline HwPort_ptr create< HwPort >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createHwPort();
    }

    template< > inline ConnectionHandler_ptr create< ConnectionHandler >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createConnectionHandler();
    }

    template< > inline HwConnection_ptr create< HwConnection >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createHwConnection();
    }

    template< > inline HwAccessElement_ptr create< HwAccessElement >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createHwAccessElement();
    }

    template< > inline ProcessingUnitDefinition_ptr create<
            ProcessingUnitDefinition >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessingUnitDefinition();
    }

    template< > inline ConnectionHandlerDefinition_ptr create<
            ConnectionHandlerDefinition >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createConnectionHandlerDefinition();
    }

    template< > inline MemoryDefinition_ptr create< MemoryDefinition >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createMemoryDefinition();
    }

    template< > inline CacheDefinition_ptr create< CacheDefinition >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCacheDefinition();
    }

    template< > inline HwAccessPath_ptr create< HwAccessPath >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createHwAccessPath();
    }

    template< > inline MappingModel_ptr create< MappingModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createMappingModel();
    }

    template< > inline SchedulerAllocation_ptr create< SchedulerAllocation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSchedulerAllocation();
    }

    template< > inline TaskAllocation_ptr create< TaskAllocation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTaskAllocation();
    }

    template< > inline ISRAllocation_ptr create< ISRAllocation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createISRAllocation();
    }

    template< > inline RunnableAllocation_ptr create< RunnableAllocation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableAllocation();
    }

    template< > inline MemoryMapping_ptr create< MemoryMapping >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createMemoryMapping();
    }

    template< > inline PhysicalSectionMapping_ptr create< PhysicalSectionMapping >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPhysicalSectionMapping();
    }

    template< > inline OSModel_ptr create< OSModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createOSModel();
    }

    template< > inline OsDataConsistency_ptr create< OsDataConsistency >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createOsDataConsistency();
    }

    template< > inline DataStability_ptr create< DataStability >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataStability();
    }

    template< > inline NonAtomicDataCoherency_ptr create< NonAtomicDataCoherency >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createNonAtomicDataCoherency();
    }

    template< > inline Semaphore_ptr create< Semaphore >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSemaphore();
    }

    template< > inline TaskScheduler_ptr create< TaskScheduler >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTaskScheduler();
    }

    template< > inline SchedulerAssociation_ptr create< SchedulerAssociation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSchedulerAssociation();
    }

    template< > inline InterruptController_ptr create< InterruptController >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createInterruptController();
    }

    template< > inline SchedulingParameters_ptr create< SchedulingParameters >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSchedulingParameters();
    }

    template< > inline ParameterExtension_ptr create< ParameterExtension >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createParameterExtension();
    }

    template< > inline FixedPriorityPreemptive_ptr create<
            FixedPriorityPreemptive >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createFixedPriorityPreemptive();
    }

    template< > inline FixedPriorityPreemptiveWithBudgetEnforcement_ptr create<
            FixedPriorityPreemptiveWithBudgetEnforcement >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createFixedPriorityPreemptiveWithBudgetEnforcement();
    }

    template< > inline OSEK_ptr create< OSEK >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createOSEK();
    }

    template< > inline DeadlineMonotonic_ptr create< DeadlineMonotonic >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDeadlineMonotonic();
    }

    template< > inline RateMonotonic_ptr create< RateMonotonic >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRateMonotonic();
    }

    template< > inline PfairPD2_ptr create< PfairPD2 >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPfairPD2();
    }

    template< > inline PartlyPFairPD2_ptr create< PartlyPFairPD2 >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPartlyPFairPD2();
    }

    template< > inline EarlyReleaseFairPD2_ptr create< EarlyReleaseFairPD2 >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEarlyReleaseFairPD2();
    }

    template< > inline PartlyEarlyReleaseFairPD2_ptr create<
            PartlyEarlyReleaseFairPD2 >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPartlyEarlyReleaseFairPD2();
    }

    template< > inline LeastLocalRemainingExecutionTimeFirst_ptr create<
            LeastLocalRemainingExecutionTimeFirst >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createLeastLocalRemainingExecutionTimeFirst();
    }

    template< > inline EarliestDeadlineFirst_ptr create< EarliestDeadlineFirst >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEarliestDeadlineFirst();
    }

    template< > inline PriorityBasedRoundRobin_ptr create<
            PriorityBasedRoundRobin >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPriorityBasedRoundRobin();
    }

    template< > inline DeferrableServer_ptr create< DeferrableServer >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDeferrableServer();
    }

    template< > inline PollingPeriodicServer_ptr create< PollingPeriodicServer >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPollingPeriodicServer();
    }

    template< > inline SporadicServer_ptr create< SporadicServer >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSporadicServer();
    }

    template< > inline ConstantBandwidthServer_ptr create<
            ConstantBandwidthServer >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createConstantBandwidthServer();
    }

    template< > inline ConstantBandwidthServerWithCASH_ptr create<
            ConstantBandwidthServerWithCASH >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createConstantBandwidthServerWithCASH();
    }

    template< > inline Grouping_ptr create< Grouping >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createGrouping();
    }

    template< > inline UserSpecificSchedulingAlgorithm_ptr create<
            UserSpecificSchedulingAlgorithm >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createUserSpecificSchedulingAlgorithm();
    }

    template< > inline PriorityBased_ptr create< PriorityBased >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPriorityBased();
    }

    template< > inline OperatingSystem_ptr create< OperatingSystem >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createOperatingSystem();
    }

    template< > inline VendorOperatingSystem_ptr create< VendorOperatingSystem >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createVendorOperatingSystem();
    }

    template< > inline OsOverhead_ptr create< OsOverhead >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createOsOverhead();
    }

    template< > inline OsAPIOverhead_ptr create< OsAPIOverhead >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createOsAPIOverhead();
    }

    template< > inline OsISROverhead_ptr create< OsISROverhead >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createOsISROverhead();
    }

    template< > inline PropertyConstraintsModel_ptr create<
            PropertyConstraintsModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPropertyConstraintsModel();
    }

    template< > inline ProcessAllocationConstraint_ptr create<
            ProcessAllocationConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessAllocationConstraint();
    }

    template< > inline ProcessPrototypeAllocationConstraint_ptr create<
            ProcessPrototypeAllocationConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessPrototypeAllocationConstraint();
    }

    template< > inline RunnableAllocationConstraint_ptr create<
            RunnableAllocationConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableAllocationConstraint();
    }

    template< > inline AbstractElementMappingConstraint_ptr create<
            AbstractElementMappingConstraint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createAbstractElementMappingConstraint();
    }

    template< > inline CoreClassification_ptr create< CoreClassification >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCoreClassification();
    }

    template< > inline MemoryClassification_ptr create< MemoryClassification >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createMemoryClassification();
    }

    template< > inline StimuliModel_ptr create< StimuliModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createStimuliModel();
    }

    template< > inline ModeValueList_ptr create< ModeValueList >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeValueList();
    }

    template< > inline ModeValueMapEntry_ptr create< ModeValueMapEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeValueMapEntry();
    }

    template< > inline ModeAssignment_ptr create< ModeAssignment >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeAssignment();
    }

    template< > inline ModeConditionDisjunction_ptr create<
            ModeConditionDisjunction >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeConditionDisjunction();
    }

    template< > inline ModeValueCondition_ptr create< ModeValueCondition >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeValueCondition();
    }

    template< > inline ModeLabelCondition_ptr create< ModeLabelCondition >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeLabelCondition();
    }

    template< > inline ModeConditionConjunction_ptr create<
            ModeConditionConjunction >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeConditionConjunction();
    }

    template< > inline PeriodicStimulus_ptr create< PeriodicStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPeriodicStimulus();
    }

    template< > inline RelativePeriodicStimulus_ptr create<
            RelativePeriodicStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRelativePeriodicStimulus();
    }

    template< > inline VariableRateStimulus_ptr create< VariableRateStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createVariableRateStimulus();
    }

    template< > inline Scenario_ptr create< Scenario >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createScenario();
    }

    template< > inline PeriodicSyntheticStimulus_ptr create<
            PeriodicSyntheticStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPeriodicSyntheticStimulus();
    }

    template< > inline CustomStimulus_ptr create< CustomStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCustomStimulus();
    }

    template< > inline SingleStimulus_ptr create< SingleStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSingleStimulus();
    }

    template< > inline InterProcessStimulus_ptr create< InterProcessStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createInterProcessStimulus();
    }

    template< > inline PeriodicBurstStimulus_ptr create< PeriodicBurstStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPeriodicBurstStimulus();
    }

    template< > inline EventStimulus_ptr create< EventStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventStimulus();
    }

    template< > inline ArrivalCurveStimulus_ptr create< ArrivalCurveStimulus >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createArrivalCurveStimulus();
    }

    template< > inline ArrivalCurveEntry_ptr create< ArrivalCurveEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createArrivalCurveEntry();
    }

    template< > inline ClockFunction_ptr create< ClockFunction >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createClockFunction();
    }

    template< > inline ClockStepList_ptr create< ClockStepList >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createClockStepList();
    }

    template< > inline ClockStep_ptr create< ClockStep >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createClockStep();
    }

    template< > inline SWModel_ptr create< SWModel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSWModel();
    }

    template< > inline CustomEntity_ptr create< CustomEntity >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCustomEntity();
    }

    template< > inline ProcessChain_ptr create< ProcessChain >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessChain();
    }

    template< > inline ActivityGraph_ptr create< ActivityGraph >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createActivityGraph();
    }

    template< > inline ModeSwitch_ptr create< ModeSwitch >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeSwitch();
    }

    template< > inline ModeSwitchEntry_ptr create< ModeSwitchEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeSwitchEntry();
    }

    template< > inline ModeSwitchDefault_ptr create< ModeSwitchDefault >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeSwitchDefault();
    }

    template< > inline ProbabilitySwitch_ptr create< ProbabilitySwitch >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProbabilitySwitch();
    }

    template< > inline ProbabilitySwitchEntry_ptr create< ProbabilitySwitchEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProbabilitySwitchEntry();
    }

    template< > inline Counter_ptr create< Counter >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCounter();
    }

    template< > inline WaitEvent_ptr create< WaitEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createWaitEvent();
    }

    template< > inline SetEvent_ptr create< SetEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSetEvent();
    }

    template< > inline ClearEvent_ptr create< ClearEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createClearEvent();
    }

    template< > inline EventMask_ptr create< EventMask >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventMask();
    }

    template< > inline OsEvent_ptr create< OsEvent >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createOsEvent();
    }

    template< > inline InterProcessTrigger_ptr create< InterProcessTrigger >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createInterProcessTrigger();
    }

    template< > inline EnforcedMigration_ptr create< EnforcedMigration >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEnforcedMigration();
    }

    template< > inline SchedulePoint_ptr create< SchedulePoint >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSchedulePoint();
    }

    template< > inline TerminateProcess_ptr create< TerminateProcess >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTerminateProcess();
    }

    template< > inline Task_ptr create< Task >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTask();
    }

    template< > inline ISR_ptr create< ISR >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createISR();
    }

    template< > inline ProcessPrototype_ptr create< ProcessPrototype >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createProcessPrototype();
    }

    template< > inline ChainedProcessPrototype_ptr create<
            ChainedProcessPrototype >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createChainedProcessPrototype();
    }

    template< > inline AccessPrecedenceSpec_ptr create< AccessPrecedenceSpec >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createAccessPrecedenceSpec();
    }

    template< > inline OrderPrecedenceSpec_ptr create< OrderPrecedenceSpec >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createOrderPrecedenceSpec();
    }

    template< > inline DataDependency_ptr create< DataDependency >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataDependency();
    }

    template< > inline RunnableParameter_ptr create< RunnableParameter >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableParameter();
    }

    template< > inline Runnable_ptr create< Runnable >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnable();
    }

    template< > inline Label_ptr create< Label >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createLabel();
    }

    template< > inline Channel_ptr create< Channel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createChannel();
    }

    template< > inline ModeLabel_ptr create< ModeLabel >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeLabel();
    }

    template< > inline Section_ptr create< Section >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSection();
    }

    template< > inline ExecutionNeed_ptr create< ExecutionNeed >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createExecutionNeed();
    }

    template< > inline NeedEntry_ptr create< NeedEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createNeedEntry();
    }

    template< > inline Ticks_ptr create< Ticks >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTicks();
    }

    template< > inline TicksEntry_ptr create< TicksEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTicksEntry();
    }

    template< > inline ModeLabelAccess_ptr create< ModeLabelAccess >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createModeLabelAccess();
    }

    template< > inline LabelAccess_ptr create< LabelAccess >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createLabelAccess();
    }

    template< > inline ChannelSend_ptr create< ChannelSend >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createChannelSend();
    }

    template< > inline ChannelReceive_ptr create< ChannelReceive >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createChannelReceive();
    }

    template< > inline SemaphoreAccess_ptr create< SemaphoreAccess >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSemaphoreAccess();
    }

    template< > inline SenderReceiverRead_ptr create< SenderReceiverRead >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSenderReceiverRead();
    }

    template< > inline SenderReceiverWrite_ptr create< SenderReceiverWrite >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSenderReceiverWrite();
    }

    template< > inline SynchronousServerCall_ptr create< SynchronousServerCall >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSynchronousServerCall();
    }

    template< > inline AsynchronousServerCall_ptr create< AsynchronousServerCall >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createAsynchronousServerCall();
    }

    template< > inline GetResultServerCall_ptr create< GetResultServerCall >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createGetResultServerCall();
    }

    template< > inline Group_ptr create< Group >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createGroup();
    }

    template< > inline CallArgument_ptr create< CallArgument >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCallArgument();
    }

    template< > inline RunnableCall_ptr create< RunnableCall >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunnableCall();
    }

    template< > inline CustomEventTrigger_ptr create< CustomEventTrigger >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCustomEventTrigger();
    }

    template< > inline Struct_ptr create< Struct >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createStruct();
    }

    template< > inline StructEntry_ptr create< StructEntry >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createStructEntry();
    }

    template< > inline Array_ptr create< Array >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createArray();
    }

    template< > inline Pointer_ptr create< Pointer >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPointer();
    }

    template< > inline TypeRef_ptr create< TypeRef >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createTypeRef();
    }

    template< > inline Alias_ptr create< Alias >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createAlias();
    }

    template< > inline DataTypeDefinition_ptr create< DataTypeDefinition >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createDataTypeDefinition();
    }

    template< > inline BaseTypeDefinition_ptr create< BaseTypeDefinition >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createBaseTypeDefinition();
    }

    template< > inline PeriodicActivation_ptr create< PeriodicActivation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createPeriodicActivation();
    }

    template< > inline VariableRateActivation_ptr create< VariableRateActivation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createVariableRateActivation();
    }

    template< > inline SporadicActivation_ptr create< SporadicActivation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSporadicActivation();
    }

    template< > inline SingleActivation_ptr create< SingleActivation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createSingleActivation();
    }

    template< > inline EventActivation_ptr create< EventActivation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createEventActivation();
    }

    template< > inline CustomActivation_ptr create< CustomActivation >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createCustomActivation();
    }

    template< > inline LabelAccessStatistic_ptr create< LabelAccessStatistic >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createLabelAccessStatistic();
    }

    template< > inline RunEntityCallStatistic_ptr create< RunEntityCallStatistic >()
    {
        auto eFactory = AmaltheaPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< AmaltheaFactory* >(eFactory.get());
        return packageFactory->createRunEntityCallStatistic();
    }

} // amalthea

#endif // _AMALTHEAFACTORY_HPP

