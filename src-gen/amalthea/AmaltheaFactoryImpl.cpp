// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AmaltheaFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <amalthea/AmaltheaFactory.hpp>
#include <amalthea/AmaltheaPackage.hpp>
#include <amalthea/Amalthea.hpp>
#include <amalthea/CommonElements.hpp>
#include <amalthea/BaseObject.hpp>
#include <amalthea/ReferableObject.hpp>
#include <amalthea/ReferableBaseObject.hpp>
#include <amalthea/IAnnotatable.hpp>
#include <amalthea/ITaggable.hpp>
#include <amalthea/INamed.hpp>
#include <amalthea/IReferable.hpp>
#include <amalthea/IDisplayName.hpp>
#include <amalthea/IDescription.hpp>
#include <amalthea/INamespaceMember.hpp>
#include <amalthea/Tag.hpp>
#include <amalthea/Namespace.hpp>
#include <amalthea/Classifier.hpp>
#include <amalthea/CoreClassifier.hpp>
#include <amalthea/MemoryClassifier.hpp>
#include <amalthea/TransmissionPolicy.hpp>
#include <amalthea/Quantity.hpp>
#include <amalthea/TimeComparable.hpp>
#include <amalthea/Time.hpp>
#include <amalthea/Frequency.hpp>
#include <amalthea/Voltage.hpp>
#include <amalthea/DataSize.hpp>
#include <amalthea/DataRateComparable.hpp>
#include <amalthea/DataRate.hpp>
#include <amalthea/CustomProperty.hpp>
#include <amalthea/Value.hpp>
#include <amalthea/ListObject.hpp>
#include <amalthea/StringObject.hpp>
#include <amalthea/BigIntegerObject.hpp>
#include <amalthea/ReferenceObject.hpp>
#include <amalthea/IntegerObject.hpp>
#include <amalthea/LongObject.hpp>
#include <amalthea/FloatObject.hpp>
#include <amalthea/DoubleObject.hpp>
#include <amalthea/BooleanObject.hpp>
#include <amalthea/NumericStatistic.hpp>
#include <amalthea/MinAvgMaxStatistic.hpp>
#include <amalthea/SingleValueStatistic.hpp>
#include <amalthea/ITimeDeviation.hpp>
#include <amalthea/TimeInterval.hpp>
#include <amalthea/TimeConstant.hpp>
#include <amalthea/TimeHistogram.hpp>
#include <amalthea/TimeHistogramEntry.hpp>
#include <amalthea/BoundedTimeDistribution.hpp>
#include <amalthea/TruncatedTimeDistribution.hpp>
#include <amalthea/TimeBoundaries.hpp>
#include <amalthea/TimeStatistics.hpp>
#include <amalthea/TimeUniformDistribution.hpp>
#include <amalthea/TimeGaussDistribution.hpp>
#include <amalthea/TimeWeibullEstimatorsDistribution.hpp>
#include <amalthea/TimeBetaDistribution.hpp>
#include <amalthea/IDiscreteValueDeviation.hpp>
#include <amalthea/DiscreteValueInterval.hpp>
#include <amalthea/DiscreteValueConstant.hpp>
#include <amalthea/DiscreteValueHistogram.hpp>
#include <amalthea/DiscreteValueHistogramEntry.hpp>
#include <amalthea/BoundedDiscreteValueDistribution.hpp>
#include <amalthea/TruncatedDiscreteValueDistribution.hpp>
#include <amalthea/DiscreteValueBoundaries.hpp>
#include <amalthea/DiscreteValueStatistics.hpp>
#include <amalthea/DiscreteValueUniformDistribution.hpp>
#include <amalthea/DiscreteValueGaussDistribution.hpp>
#include <amalthea/DiscreteValueWeibullEstimatorsDistribution.hpp>
#include <amalthea/DiscreteValueBetaDistribution.hpp>
#include <amalthea/IContinuousValueDeviation.hpp>
#include <amalthea/ContinuousValueInterval.hpp>
#include <amalthea/ContinuousValueConstant.hpp>
#include <amalthea/ContinuousValueHistogram.hpp>
#include <amalthea/ContinuousValueHistogramEntry.hpp>
#include <amalthea/BoundedContinuousValueDistribution.hpp>
#include <amalthea/TruncatedContinuousValueDistribution.hpp>
#include <amalthea/ContinuousValueBoundaries.hpp>
#include <amalthea/ContinuousValueStatistics.hpp>
#include <amalthea/ContinuousValueUniformDistribution.hpp>
#include <amalthea/ContinuousValueGaussDistribution.hpp>
#include <amalthea/ContinuousValueWeibullEstimatorsDistribution.hpp>
#include <amalthea/ContinuousValueBetaDistribution.hpp>
#include <amalthea/Mode.hpp>
#include <amalthea/NumericMode.hpp>
#include <amalthea/EnumMode.hpp>
#include <amalthea/ModeLiteral.hpp>
#include <amalthea/ComponentsModel.hpp>
#include <amalthea/IComponentContainer.hpp>
#include <amalthea/IInterfaceContainer.hpp>
#include <amalthea/ISystem.hpp>
#include <amalthea/ComponentInterface.hpp>
#include <amalthea/MainInterface.hpp>
#include <amalthea/SubInterface.hpp>
#include <amalthea/ComponentPort.hpp>
#include <amalthea/ComponentStructure.hpp>
#include <amalthea/IComponentStructureMember.hpp>
#include <amalthea/Component.hpp>
#include <amalthea/Composite.hpp>
#include <amalthea/System.hpp>
#include <amalthea/ComponentInstance.hpp>
#include <amalthea/Connector.hpp>
#include <amalthea/InterfaceChannel.hpp>
#include <amalthea/QualifiedPort.hpp>
#include <amalthea/ConfigModel.hpp>
#include <amalthea/EventConfig.hpp>
#include <amalthea/ConstraintsModel.hpp>
#include <amalthea/RunnableSequencingConstraint.hpp>
#include <amalthea/AffinityConstraint.hpp>
#include <amalthea/SeparationConstraint.hpp>
#include <amalthea/PairingConstraint.hpp>
#include <amalthea/ProcessConstraint.hpp>
#include <amalthea/RunnableConstraint.hpp>
#include <amalthea/DataConstraint.hpp>
#include <amalthea/RunnableSeparationConstraint.hpp>
#include <amalthea/ProcessSeparationConstraint.hpp>
#include <amalthea/DataSeparationConstraint.hpp>
#include <amalthea/RunnablePairingConstraint.hpp>
#include <amalthea/ProcessPairingConstraint.hpp>
#include <amalthea/DataPairingConstraint.hpp>
#include <amalthea/RunnableConstraintTarget.hpp>
#include <amalthea/ProcessConstraintTarget.hpp>
#include <amalthea/DataConstraintTarget.hpp>
#include <amalthea/TargetMemory.hpp>
#include <amalthea/TargetCore.hpp>
#include <amalthea/TargetScheduler.hpp>
#include <amalthea/LabelGroup.hpp>
#include <amalthea/RunnableGroup.hpp>
#include <amalthea/ProcessGroup.hpp>
#include <amalthea/LabelEntityGroup.hpp>
#include <amalthea/RunnableEntityGroup.hpp>
#include <amalthea/ProcessEntityGroup.hpp>
#include <amalthea/TagGroup.hpp>
#include <amalthea/AbstractEventChain.hpp>
#include <amalthea/EventChain.hpp>
#include <amalthea/SubEventChain.hpp>
#include <amalthea/EventChainItem.hpp>
#include <amalthea/EventChainReference.hpp>
#include <amalthea/EventChainContainer.hpp>
#include <amalthea/TimingConstraint.hpp>
#include <amalthea/PhysicalSectionConstraint.hpp>
#include <amalthea/SynchronizationConstraint.hpp>
#include <amalthea/EventSynchronizationConstraint.hpp>
#include <amalthea/EventChainSynchronizationConstraint.hpp>
#include <amalthea/DelayConstraint.hpp>
#include <amalthea/EventChainLatencyConstraint.hpp>
#include <amalthea/RepetitionConstraint.hpp>
#include <amalthea/DataAgeConstraint.hpp>
#include <amalthea/DataAge.hpp>
#include <amalthea/DataAgeCycle.hpp>
#include <amalthea/DataAgeTime.hpp>
#include <amalthea/Requirement.hpp>
#include <amalthea/ProcessRequirement.hpp>
#include <amalthea/RunnableRequirement.hpp>
#include <amalthea/ArchitectureRequirement.hpp>
#include <amalthea/ProcessChainRequirement.hpp>
#include <amalthea/RequirementLimit.hpp>
#include <amalthea/CPUPercentageRequirementLimit.hpp>
#include <amalthea/FrequencyRequirementLimit.hpp>
#include <amalthea/PercentageRequirementLimit.hpp>
#include <amalthea/CountRequirementLimit.hpp>
#include <amalthea/TimeRequirementLimit.hpp>
#include <amalthea/DataCoherencyGroup.hpp>
#include <amalthea/DataStabilityGroup.hpp>
#include <amalthea/DataGroupScope.hpp>
#include <amalthea/ProcessScope.hpp>
#include <amalthea/RunnableScope.hpp>
#include <amalthea/ComponentScope.hpp>
#include <amalthea/EventModel.hpp>
#include <amalthea/Event.hpp>
#include <amalthea/EventSet.hpp>
#include <amalthea/EntityEvent.hpp>
#include <amalthea/TriggerEvent.hpp>
#include <amalthea/CustomEvent.hpp>
#include <amalthea/StimulusEvent.hpp>
#include <amalthea/ProcessEvent.hpp>
#include <amalthea/ProcessChainEvent.hpp>
#include <amalthea/RunnableEvent.hpp>
#include <amalthea/LabelEvent.hpp>
#include <amalthea/ChannelEvent.hpp>
#include <amalthea/SemaphoreEvent.hpp>
#include <amalthea/ComponentEvent.hpp>
#include <amalthea/HWModel.hpp>
#include <amalthea/HwStructure.hpp>
#include <amalthea/HwModule.hpp>
#include <amalthea/HwDomain.hpp>
#include <amalthea/FrequencyDomain.hpp>
#include <amalthea/PowerDomain.hpp>
#include <amalthea/ProcessingUnit.hpp>
#include <amalthea/Memory.hpp>
#include <amalthea/Cache.hpp>
#include <amalthea/HwFeatureCategory.hpp>
#include <amalthea/HwFeature.hpp>
#include <amalthea/HwPort.hpp>
#include <amalthea/ConnectionHandler.hpp>
#include <amalthea/HwConnection.hpp>
#include <amalthea/HwAccessElement.hpp>
#include <amalthea/HwDefinition.hpp>
#include <amalthea/ProcessingUnitDefinition.hpp>
#include <amalthea/ConnectionHandlerDefinition.hpp>
#include <amalthea/MemoryDefinition.hpp>
#include <amalthea/CacheDefinition.hpp>
#include <amalthea/HwPath.hpp>
#include <amalthea/HwAccessPath.hpp>
#include <amalthea/HwPathElement.hpp>
#include <amalthea/HwDestination.hpp>
#include <amalthea/MappingModel.hpp>
#include <amalthea/SchedulerAllocation.hpp>
#include <amalthea/TaskAllocation.hpp>
#include <amalthea/ISRAllocation.hpp>
#include <amalthea/RunnableAllocation.hpp>
#include <amalthea/MemoryMapping.hpp>
#include <amalthea/PhysicalSectionMapping.hpp>
#include <amalthea/OSModel.hpp>
#include <amalthea/OsDataConsistency.hpp>
#include <amalthea/DataStability.hpp>
#include <amalthea/NonAtomicDataCoherency.hpp>
#include <amalthea/Semaphore.hpp>
#include <amalthea/Scheduler.hpp>
#include <amalthea/TaskScheduler.hpp>
#include <amalthea/SchedulerAssociation.hpp>
#include <amalthea/InterruptController.hpp>
#include <amalthea/SchedulingParameters.hpp>
#include <amalthea/ParameterExtension.hpp>
#include <amalthea/Algorithm.hpp>
#include <amalthea/InterruptSchedulingAlgorithm.hpp>
#include <amalthea/TaskSchedulingAlgorithm.hpp>
#include <amalthea/FixedPriority.hpp>
#include <amalthea/FixedPriorityPreemptive.hpp>
#include <amalthea/FixedPriorityPreemptiveWithBudgetEnforcement.hpp>
#include <amalthea/OSEK.hpp>
#include <amalthea/DeadlineMonotonic.hpp>
#include <amalthea/RateMonotonic.hpp>
#include <amalthea/Pfair.hpp>
#include <amalthea/PfairPD2.hpp>
#include <amalthea/PartlyPFairPD2.hpp>
#include <amalthea/EarlyReleaseFairPD2.hpp>
#include <amalthea/PartlyEarlyReleaseFairPD2.hpp>
#include <amalthea/DynamicPriority.hpp>
#include <amalthea/LeastLocalRemainingExecutionTimeFirst.hpp>
#include <amalthea/EarliestDeadlineFirst.hpp>
#include <amalthea/PriorityBasedRoundRobin.hpp>
#include <amalthea/ReservationBasedServer.hpp>
#include <amalthea/DeferrableServer.hpp>
#include <amalthea/PollingPeriodicServer.hpp>
#include <amalthea/SporadicServer.hpp>
#include <amalthea/ConstantBandwidthServer.hpp>
#include <amalthea/ConstantBandwidthServerWithCASH.hpp>
#include <amalthea/Grouping.hpp>
#include <amalthea/UserSpecificSchedulingAlgorithm.hpp>
#include <amalthea/PriorityBased.hpp>
#include <amalthea/OperatingSystem.hpp>
#include <amalthea/VendorOperatingSystem.hpp>
#include <amalthea/OsOverhead.hpp>
#include <amalthea/OsAPIOverhead.hpp>
#include <amalthea/OsISROverhead.hpp>
#include <amalthea/PropertyConstraintsModel.hpp>
#include <amalthea/CoreAllocationConstraint.hpp>
#include <amalthea/MemoryMappingConstraint.hpp>
#include <amalthea/ProcessAllocationConstraint.hpp>
#include <amalthea/ProcessPrototypeAllocationConstraint.hpp>
#include <amalthea/RunnableAllocationConstraint.hpp>
#include <amalthea/AbstractElementMappingConstraint.hpp>
#include <amalthea/Classification.hpp>
#include <amalthea/CoreClassification.hpp>
#include <amalthea/MemoryClassification.hpp>
#include <amalthea/StimuliModel.hpp>
#include <amalthea/Stimulus.hpp>
#include <amalthea/ModeValueList.hpp>
#include <amalthea/ModeValueMapEntry.hpp>
#include <amalthea/ModeValue.hpp>
#include <amalthea/ModeAssignment.hpp>
#include <amalthea/ModeConditionDisjunction.hpp>
#include <amalthea/ModeConditionDisjunctionEntry.hpp>
#include <amalthea/ModeCondition.hpp>
#include <amalthea/ModeValueCondition.hpp>
#include <amalthea/ModeLabelCondition.hpp>
#include <amalthea/ModeConditionConjunction.hpp>
#include <amalthea/FixedPeriodic.hpp>
#include <amalthea/PeriodicStimulus.hpp>
#include <amalthea/RelativePeriodicStimulus.hpp>
#include <amalthea/VariableRateStimulus.hpp>
#include <amalthea/Scenario.hpp>
#include <amalthea/PeriodicSyntheticStimulus.hpp>
#include <amalthea/CustomStimulus.hpp>
#include <amalthea/SingleStimulus.hpp>
#include <amalthea/InterProcessStimulus.hpp>
#include <amalthea/PeriodicBurstStimulus.hpp>
#include <amalthea/EventStimulus.hpp>
#include <amalthea/ArrivalCurveStimulus.hpp>
#include <amalthea/ArrivalCurveEntry.hpp>
#include <amalthea/Clock.hpp>
#include <amalthea/ClockFunction.hpp>
#include <amalthea/ClockStepList.hpp>
#include <amalthea/ClockStep.hpp>
#include <amalthea/SWModel.hpp>
#include <amalthea/AbstractMemoryElement.hpp>
#include <amalthea/AbstractProcess.hpp>
#include <amalthea/CustomEntity.hpp>
#include <amalthea/ProcessChain.hpp>
#include <amalthea/Process.hpp>
#include <amalthea/IActivityGraphItemContainer.hpp>
#include <amalthea/ActivityGraph.hpp>
#include <amalthea/ActivityGraphItem.hpp>
#include <amalthea/ModeSwitch.hpp>
#include <amalthea/ModeSwitchEntry.hpp>
#include <amalthea/ModeSwitchDefault.hpp>
#include <amalthea/ProbabilitySwitch.hpp>
#include <amalthea/ProbabilitySwitchEntry.hpp>
#include <amalthea/Counter.hpp>
#include <amalthea/WaitEvent.hpp>
#include <amalthea/SetEvent.hpp>
#include <amalthea/ClearEvent.hpp>
#include <amalthea/EventMask.hpp>
#include <amalthea/OsEvent.hpp>
#include <amalthea/InterProcessTrigger.hpp>
#include <amalthea/EnforcedMigration.hpp>
#include <amalthea/SchedulePoint.hpp>
#include <amalthea/TerminateProcess.hpp>
#include <amalthea/Task.hpp>
#include <amalthea/ISR.hpp>
#include <amalthea/ProcessPrototype.hpp>
#include <amalthea/ChainedProcessPrototype.hpp>
#include <amalthea/GeneralPrecedence.hpp>
#include <amalthea/AccessPrecedenceSpec.hpp>
#include <amalthea/OrderPrecedenceSpec.hpp>
#include <amalthea/IDependsOn.hpp>
#include <amalthea/DataDependency.hpp>
#include <amalthea/RunnableParameter.hpp>
#include <amalthea/Runnable.hpp>
#include <amalthea/Label.hpp>
#include <amalthea/Channel.hpp>
#include <amalthea/ModeLabel.hpp>
#include <amalthea/Section.hpp>
#include <amalthea/ComputationItem.hpp>
#include <amalthea/ExecutionNeed.hpp>
#include <amalthea/NeedEntry.hpp>
#include <amalthea/Ticks.hpp>
#include <amalthea/TicksEntry.hpp>
#include <amalthea/ModeLabelAccess.hpp>
#include <amalthea/LabelAccess.hpp>
#include <amalthea/ChannelAccess.hpp>
#include <amalthea/ChannelSend.hpp>
#include <amalthea/ChannelReceive.hpp>
#include <amalthea/SemaphoreAccess.hpp>
#include <amalthea/SenderReceiverCommunication.hpp>
#include <amalthea/SenderReceiverRead.hpp>
#include <amalthea/SenderReceiverWrite.hpp>
#include <amalthea/ServerCall.hpp>
#include <amalthea/SynchronousServerCall.hpp>
#include <amalthea/AsynchronousServerCall.hpp>
#include <amalthea/GetResultServerCall.hpp>
#include <amalthea/Group.hpp>
#include <amalthea/CallArgument.hpp>
#include <amalthea/RunnableCall.hpp>
#include <amalthea/CustomEventTrigger.hpp>
#include <amalthea/DataType.hpp>
#include <amalthea/CompoundType.hpp>
#include <amalthea/Struct.hpp>
#include <amalthea/StructEntry.hpp>
#include <amalthea/Array.hpp>
#include <amalthea/Pointer.hpp>
#include <amalthea/TypeRef.hpp>
#include <amalthea/Alias.hpp>
#include <amalthea/TypeDefinition.hpp>
#include <amalthea/DataTypeDefinition.hpp>
#include <amalthea/BaseTypeDefinition.hpp>
#include <amalthea/Activation.hpp>
#include <amalthea/PeriodicActivation.hpp>
#include <amalthea/VariableRateActivation.hpp>
#include <amalthea/SporadicActivation.hpp>
#include <amalthea/SingleActivation.hpp>
#include <amalthea/EventActivation.hpp>
#include <amalthea/CustomActivation.hpp>
#include <amalthea/LabelAccessStatistic.hpp>
#include <amalthea/RunEntityCallStatistic.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::amalthea;

AmaltheaFactory::AmaltheaFactory()
{
}

::ecore::EObject_ptr AmaltheaFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case AmaltheaPackage::AMALTHEA:
        return createAmalthea();
    case AmaltheaPackage::COMMONELEMENTS:
        return createCommonElements();
    case AmaltheaPackage::TAG:
        return createTag();
    case AmaltheaPackage::NAMESPACE:
        return createNamespace();
    case AmaltheaPackage::CORECLASSIFIER:
        return createCoreClassifier();
    case AmaltheaPackage::MEMORYCLASSIFIER:
        return createMemoryClassifier();
    case AmaltheaPackage::TRANSMISSIONPOLICY:
        return createTransmissionPolicy();
    case AmaltheaPackage::TIME:
        return createTime();
    case AmaltheaPackage::FREQUENCY:
        return createFrequency();
    case AmaltheaPackage::VOLTAGE:
        return createVoltage();
    case AmaltheaPackage::DATASIZE:
        return createDataSize();
    case AmaltheaPackage::DATARATE:
        return createDataRate();
    case AmaltheaPackage::CUSTOMPROPERTY:
        return createCustomProperty();
    case AmaltheaPackage::LISTOBJECT:
        return createListObject();
    case AmaltheaPackage::STRINGOBJECT:
        return createStringObject();
    case AmaltheaPackage::BIGINTEGEROBJECT:
        return createBigIntegerObject();
    case AmaltheaPackage::REFERENCEOBJECT:
        return createReferenceObject();
    case AmaltheaPackage::INTEGEROBJECT:
        return createIntegerObject();
    case AmaltheaPackage::LONGOBJECT:
        return createLongObject();
    case AmaltheaPackage::FLOATOBJECT:
        return createFloatObject();
    case AmaltheaPackage::DOUBLEOBJECT:
        return createDoubleObject();
    case AmaltheaPackage::BOOLEANOBJECT:
        return createBooleanObject();
    case AmaltheaPackage::MINAVGMAXSTATISTIC:
        return createMinAvgMaxStatistic();
    case AmaltheaPackage::SINGLEVALUESTATISTIC:
        return createSingleValueStatistic();
    case AmaltheaPackage::TIMECONSTANT:
        return createTimeConstant();
    case AmaltheaPackage::TIMEHISTOGRAM:
        return createTimeHistogram();
    case AmaltheaPackage::TIMEHISTOGRAMENTRY:
        return createTimeHistogramEntry();
    case AmaltheaPackage::TIMEBOUNDARIES:
        return createTimeBoundaries();
    case AmaltheaPackage::TIMESTATISTICS:
        return createTimeStatistics();
    case AmaltheaPackage::TIMEUNIFORMDISTRIBUTION:
        return createTimeUniformDistribution();
    case AmaltheaPackage::TIMEGAUSSDISTRIBUTION:
        return createTimeGaussDistribution();
    case AmaltheaPackage::TIMEWEIBULLESTIMATORSDISTRIBUTION:
        return createTimeWeibullEstimatorsDistribution();
    case AmaltheaPackage::TIMEBETADISTRIBUTION:
        return createTimeBetaDistribution();
    case AmaltheaPackage::DISCRETEVALUECONSTANT:
        return createDiscreteValueConstant();
    case AmaltheaPackage::DISCRETEVALUEHISTOGRAM:
        return createDiscreteValueHistogram();
    case AmaltheaPackage::DISCRETEVALUEHISTOGRAMENTRY:
        return createDiscreteValueHistogramEntry();
    case AmaltheaPackage::DISCRETEVALUEBOUNDARIES:
        return createDiscreteValueBoundaries();
    case AmaltheaPackage::DISCRETEVALUESTATISTICS:
        return createDiscreteValueStatistics();
    case AmaltheaPackage::DISCRETEVALUEUNIFORMDISTRIBUTION:
        return createDiscreteValueUniformDistribution();
    case AmaltheaPackage::DISCRETEVALUEGAUSSDISTRIBUTION:
        return createDiscreteValueGaussDistribution();
    case AmaltheaPackage::DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION:
        return createDiscreteValueWeibullEstimatorsDistribution();
    case AmaltheaPackage::DISCRETEVALUEBETADISTRIBUTION:
        return createDiscreteValueBetaDistribution();
    case AmaltheaPackage::CONTINUOUSVALUECONSTANT:
        return createContinuousValueConstant();
    case AmaltheaPackage::CONTINUOUSVALUEHISTOGRAM:
        return createContinuousValueHistogram();
    case AmaltheaPackage::CONTINUOUSVALUEHISTOGRAMENTRY:
        return createContinuousValueHistogramEntry();
    case AmaltheaPackage::CONTINUOUSVALUEBOUNDARIES:
        return createContinuousValueBoundaries();
    case AmaltheaPackage::CONTINUOUSVALUESTATISTICS:
        return createContinuousValueStatistics();
    case AmaltheaPackage::CONTINUOUSVALUEUNIFORMDISTRIBUTION:
        return createContinuousValueUniformDistribution();
    case AmaltheaPackage::CONTINUOUSVALUEGAUSSDISTRIBUTION:
        return createContinuousValueGaussDistribution();
    case AmaltheaPackage::CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION:
        return createContinuousValueWeibullEstimatorsDistribution();
    case AmaltheaPackage::CONTINUOUSVALUEBETADISTRIBUTION:
        return createContinuousValueBetaDistribution();
    case AmaltheaPackage::NUMERICMODE:
        return createNumericMode();
    case AmaltheaPackage::ENUMMODE:
        return createEnumMode();
    case AmaltheaPackage::MODELITERAL:
        return createModeLiteral();
    case AmaltheaPackage::COMPONENTSMODEL:
        return createComponentsModel();
    case AmaltheaPackage::MAININTERFACE:
        return createMainInterface();
    case AmaltheaPackage::SUBINTERFACE:
        return createSubInterface();
    case AmaltheaPackage::COMPONENTPORT:
        return createComponentPort();
    case AmaltheaPackage::COMPONENTSTRUCTURE:
        return createComponentStructure();
    case AmaltheaPackage::COMPONENT:
        return createComponent();
    case AmaltheaPackage::COMPOSITE:
        return createComposite();
    case AmaltheaPackage::SYSTEM:
        return createSystem();
    case AmaltheaPackage::COMPONENTINSTANCE:
        return createComponentInstance();
    case AmaltheaPackage::CONNECTOR:
        return createConnector();
    case AmaltheaPackage::INTERFACECHANNEL:
        return createInterfaceChannel();
    case AmaltheaPackage::QUALIFIEDPORT:
        return createQualifiedPort();
    case AmaltheaPackage::CONFIGMODEL:
        return createConfigModel();
    case AmaltheaPackage::EVENTCONFIG:
        return createEventConfig();
    case AmaltheaPackage::CONSTRAINTSMODEL:
        return createConstraintsModel();
    case AmaltheaPackage::RUNNABLESEQUENCINGCONSTRAINT:
        return createRunnableSequencingConstraint();
    case AmaltheaPackage::RUNNABLESEPARATIONCONSTRAINT:
        return createRunnableSeparationConstraint();
    case AmaltheaPackage::PROCESSSEPARATIONCONSTRAINT:
        return createProcessSeparationConstraint();
    case AmaltheaPackage::DATASEPARATIONCONSTRAINT:
        return createDataSeparationConstraint();
    case AmaltheaPackage::RUNNABLEPAIRINGCONSTRAINT:
        return createRunnablePairingConstraint();
    case AmaltheaPackage::PROCESSPAIRINGCONSTRAINT:
        return createProcessPairingConstraint();
    case AmaltheaPackage::DATAPAIRINGCONSTRAINT:
        return createDataPairingConstraint();
    case AmaltheaPackage::TARGETMEMORY:
        return createTargetMemory();
    case AmaltheaPackage::TARGETCORE:
        return createTargetCore();
    case AmaltheaPackage::TARGETSCHEDULER:
        return createTargetScheduler();
    case AmaltheaPackage::LABELENTITYGROUP:
        return createLabelEntityGroup();
    case AmaltheaPackage::RUNNABLEENTITYGROUP:
        return createRunnableEntityGroup();
    case AmaltheaPackage::PROCESSENTITYGROUP:
        return createProcessEntityGroup();
    case AmaltheaPackage::TAGGROUP:
        return createTagGroup();
    case AmaltheaPackage::EVENTCHAIN:
        return createEventChain();
    case AmaltheaPackage::SUBEVENTCHAIN:
        return createSubEventChain();
    case AmaltheaPackage::EVENTCHAINREFERENCE:
        return createEventChainReference();
    case AmaltheaPackage::EVENTCHAINCONTAINER:
        return createEventChainContainer();
    case AmaltheaPackage::PHYSICALSECTIONCONSTRAINT:
        return createPhysicalSectionConstraint();
    case AmaltheaPackage::EVENTSYNCHRONIZATIONCONSTRAINT:
        return createEventSynchronizationConstraint();
    case AmaltheaPackage::EVENTCHAINSYNCHRONIZATIONCONSTRAINT:
        return createEventChainSynchronizationConstraint();
    case AmaltheaPackage::DELAYCONSTRAINT:
        return createDelayConstraint();
    case AmaltheaPackage::EVENTCHAINLATENCYCONSTRAINT:
        return createEventChainLatencyConstraint();
    case AmaltheaPackage::REPETITIONCONSTRAINT:
        return createRepetitionConstraint();
    case AmaltheaPackage::DATAAGECONSTRAINT:
        return createDataAgeConstraint();
    case AmaltheaPackage::DATAAGECYCLE:
        return createDataAgeCycle();
    case AmaltheaPackage::DATAAGETIME:
        return createDataAgeTime();
    case AmaltheaPackage::PROCESSREQUIREMENT:
        return createProcessRequirement();
    case AmaltheaPackage::RUNNABLEREQUIREMENT:
        return createRunnableRequirement();
    case AmaltheaPackage::ARCHITECTUREREQUIREMENT:
        return createArchitectureRequirement();
    case AmaltheaPackage::PROCESSCHAINREQUIREMENT:
        return createProcessChainRequirement();
    case AmaltheaPackage::CPUPERCENTAGEREQUIREMENTLIMIT:
        return createCPUPercentageRequirementLimit();
    case AmaltheaPackage::FREQUENCYREQUIREMENTLIMIT:
        return createFrequencyRequirementLimit();
    case AmaltheaPackage::PERCENTAGEREQUIREMENTLIMIT:
        return createPercentageRequirementLimit();
    case AmaltheaPackage::COUNTREQUIREMENTLIMIT:
        return createCountRequirementLimit();
    case AmaltheaPackage::TIMEREQUIREMENTLIMIT:
        return createTimeRequirementLimit();
    case AmaltheaPackage::DATACOHERENCYGROUP:
        return createDataCoherencyGroup();
    case AmaltheaPackage::DATASTABILITYGROUP:
        return createDataStabilityGroup();
    case AmaltheaPackage::PROCESSSCOPE:
        return createProcessScope();
    case AmaltheaPackage::RUNNABLESCOPE:
        return createRunnableScope();
    case AmaltheaPackage::COMPONENTSCOPE:
        return createComponentScope();
    case AmaltheaPackage::EVENTMODEL:
        return createEventModel();
    case AmaltheaPackage::EVENTSET:
        return createEventSet();
    case AmaltheaPackage::CUSTOMEVENT:
        return createCustomEvent();
    case AmaltheaPackage::STIMULUSEVENT:
        return createStimulusEvent();
    case AmaltheaPackage::PROCESSEVENT:
        return createProcessEvent();
    case AmaltheaPackage::PROCESSCHAINEVENT:
        return createProcessChainEvent();
    case AmaltheaPackage::RUNNABLEEVENT:
        return createRunnableEvent();
    case AmaltheaPackage::LABELEVENT:
        return createLabelEvent();
    case AmaltheaPackage::CHANNELEVENT:
        return createChannelEvent();
    case AmaltheaPackage::SEMAPHOREEVENT:
        return createSemaphoreEvent();
    case AmaltheaPackage::COMPONENTEVENT:
        return createComponentEvent();
    case AmaltheaPackage::HWMODEL:
        return createHWModel();
    case AmaltheaPackage::HWSTRUCTURE:
        return createHwStructure();
    case AmaltheaPackage::FREQUENCYDOMAIN:
        return createFrequencyDomain();
    case AmaltheaPackage::POWERDOMAIN:
        return createPowerDomain();
    case AmaltheaPackage::PROCESSINGUNIT:
        return createProcessingUnit();
    case AmaltheaPackage::MEMORY:
        return createMemory();
    case AmaltheaPackage::CACHE:
        return createCache();
    case AmaltheaPackage::HWFEATURECATEGORY:
        return createHwFeatureCategory();
    case AmaltheaPackage::HWFEATURE:
        return createHwFeature();
    case AmaltheaPackage::HWPORT:
        return createHwPort();
    case AmaltheaPackage::CONNECTIONHANDLER:
        return createConnectionHandler();
    case AmaltheaPackage::HWCONNECTION:
        return createHwConnection();
    case AmaltheaPackage::HWACCESSELEMENT:
        return createHwAccessElement();
    case AmaltheaPackage::PROCESSINGUNITDEFINITION:
        return createProcessingUnitDefinition();
    case AmaltheaPackage::CONNECTIONHANDLERDEFINITION:
        return createConnectionHandlerDefinition();
    case AmaltheaPackage::MEMORYDEFINITION:
        return createMemoryDefinition();
    case AmaltheaPackage::CACHEDEFINITION:
        return createCacheDefinition();
    case AmaltheaPackage::HWACCESSPATH:
        return createHwAccessPath();
    case AmaltheaPackage::MAPPINGMODEL:
        return createMappingModel();
    case AmaltheaPackage::SCHEDULERALLOCATION:
        return createSchedulerAllocation();
    case AmaltheaPackage::TASKALLOCATION:
        return createTaskAllocation();
    case AmaltheaPackage::ISRALLOCATION:
        return createISRAllocation();
    case AmaltheaPackage::RUNNABLEALLOCATION:
        return createRunnableAllocation();
    case AmaltheaPackage::MEMORYMAPPING:
        return createMemoryMapping();
    case AmaltheaPackage::PHYSICALSECTIONMAPPING:
        return createPhysicalSectionMapping();
    case AmaltheaPackage::OSMODEL:
        return createOSModel();
    case AmaltheaPackage::OSDATACONSISTENCY:
        return createOsDataConsistency();
    case AmaltheaPackage::DATASTABILITY:
        return createDataStability();
    case AmaltheaPackage::NONATOMICDATACOHERENCY:
        return createNonAtomicDataCoherency();
    case AmaltheaPackage::SEMAPHORE:
        return createSemaphore();
    case AmaltheaPackage::TASKSCHEDULER:
        return createTaskScheduler();
    case AmaltheaPackage::SCHEDULERASSOCIATION:
        return createSchedulerAssociation();
    case AmaltheaPackage::INTERRUPTCONTROLLER:
        return createInterruptController();
    case AmaltheaPackage::SCHEDULINGPARAMETERS:
        return createSchedulingParameters();
    case AmaltheaPackage::PARAMETEREXTENSION:
        return createParameterExtension();
    case AmaltheaPackage::FIXEDPRIORITYPREEMPTIVE:
        return createFixedPriorityPreemptive();
    case AmaltheaPackage::FIXEDPRIORITYPREEMPTIVEWITHBUDGETENFORCEMENT:
        return createFixedPriorityPreemptiveWithBudgetEnforcement();
    case AmaltheaPackage::OSEK:
        return createOSEK();
    case AmaltheaPackage::DEADLINEMONOTONIC:
        return createDeadlineMonotonic();
    case AmaltheaPackage::RATEMONOTONIC:
        return createRateMonotonic();
    case AmaltheaPackage::PFAIRPD2:
        return createPfairPD2();
    case AmaltheaPackage::PARTLYPFAIRPD2:
        return createPartlyPFairPD2();
    case AmaltheaPackage::EARLYRELEASEFAIRPD2:
        return createEarlyReleaseFairPD2();
    case AmaltheaPackage::PARTLYEARLYRELEASEFAIRPD2:
        return createPartlyEarlyReleaseFairPD2();
    case AmaltheaPackage::LEASTLOCALREMAININGEXECUTIONTIMEFIRST:
        return createLeastLocalRemainingExecutionTimeFirst();
    case AmaltheaPackage::EARLIESTDEADLINEFIRST:
        return createEarliestDeadlineFirst();
    case AmaltheaPackage::PRIORITYBASEDROUNDROBIN:
        return createPriorityBasedRoundRobin();
    case AmaltheaPackage::DEFERRABLESERVER:
        return createDeferrableServer();
    case AmaltheaPackage::POLLINGPERIODICSERVER:
        return createPollingPeriodicServer();
    case AmaltheaPackage::SPORADICSERVER:
        return createSporadicServer();
    case AmaltheaPackage::CONSTANTBANDWIDTHSERVER:
        return createConstantBandwidthServer();
    case AmaltheaPackage::CONSTANTBANDWIDTHSERVERWITHCASH:
        return createConstantBandwidthServerWithCASH();
    case AmaltheaPackage::GROUPING:
        return createGrouping();
    case AmaltheaPackage::USERSPECIFICSCHEDULINGALGORITHM:
        return createUserSpecificSchedulingAlgorithm();
    case AmaltheaPackage::PRIORITYBASED:
        return createPriorityBased();
    case AmaltheaPackage::OPERATINGSYSTEM:
        return createOperatingSystem();
    case AmaltheaPackage::VENDOROPERATINGSYSTEM:
        return createVendorOperatingSystem();
    case AmaltheaPackage::OSOVERHEAD:
        return createOsOverhead();
    case AmaltheaPackage::OSAPIOVERHEAD:
        return createOsAPIOverhead();
    case AmaltheaPackage::OSISROVERHEAD:
        return createOsISROverhead();
    case AmaltheaPackage::PROPERTYCONSTRAINTSMODEL:
        return createPropertyConstraintsModel();
    case AmaltheaPackage::PROCESSALLOCATIONCONSTRAINT:
        return createProcessAllocationConstraint();
    case AmaltheaPackage::PROCESSPROTOTYPEALLOCATIONCONSTRAINT:
        return createProcessPrototypeAllocationConstraint();
    case AmaltheaPackage::RUNNABLEALLOCATIONCONSTRAINT:
        return createRunnableAllocationConstraint();
    case AmaltheaPackage::ABSTRACTELEMENTMAPPINGCONSTRAINT:
        return createAbstractElementMappingConstraint();
    case AmaltheaPackage::CORECLASSIFICATION:
        return createCoreClassification();
    case AmaltheaPackage::MEMORYCLASSIFICATION:
        return createMemoryClassification();
    case AmaltheaPackage::STIMULIMODEL:
        return createStimuliModel();
    case AmaltheaPackage::MODEVALUELIST:
        return createModeValueList();
    case AmaltheaPackage::MODEVALUEMAPENTRY:
        return createModeValueMapEntry();
    case AmaltheaPackage::MODEASSIGNMENT:
        return createModeAssignment();
    case AmaltheaPackage::MODECONDITIONDISJUNCTION:
        return createModeConditionDisjunction();
    case AmaltheaPackage::MODEVALUECONDITION:
        return createModeValueCondition();
    case AmaltheaPackage::MODELABELCONDITION:
        return createModeLabelCondition();
    case AmaltheaPackage::MODECONDITIONCONJUNCTION:
        return createModeConditionConjunction();
    case AmaltheaPackage::PERIODICSTIMULUS:
        return createPeriodicStimulus();
    case AmaltheaPackage::RELATIVEPERIODICSTIMULUS:
        return createRelativePeriodicStimulus();
    case AmaltheaPackage::VARIABLERATESTIMULUS:
        return createVariableRateStimulus();
    case AmaltheaPackage::SCENARIO:
        return createScenario();
    case AmaltheaPackage::PERIODICSYNTHETICSTIMULUS:
        return createPeriodicSyntheticStimulus();
    case AmaltheaPackage::CUSTOMSTIMULUS:
        return createCustomStimulus();
    case AmaltheaPackage::SINGLESTIMULUS:
        return createSingleStimulus();
    case AmaltheaPackage::INTERPROCESSSTIMULUS:
        return createInterProcessStimulus();
    case AmaltheaPackage::PERIODICBURSTSTIMULUS:
        return createPeriodicBurstStimulus();
    case AmaltheaPackage::EVENTSTIMULUS:
        return createEventStimulus();
    case AmaltheaPackage::ARRIVALCURVESTIMULUS:
        return createArrivalCurveStimulus();
    case AmaltheaPackage::ARRIVALCURVEENTRY:
        return createArrivalCurveEntry();
    case AmaltheaPackage::CLOCKFUNCTION:
        return createClockFunction();
    case AmaltheaPackage::CLOCKSTEPLIST:
        return createClockStepList();
    case AmaltheaPackage::CLOCKSTEP:
        return createClockStep();
    case AmaltheaPackage::SWMODEL:
        return createSWModel();
    case AmaltheaPackage::CUSTOMENTITY:
        return createCustomEntity();
    case AmaltheaPackage::PROCESSCHAIN:
        return createProcessChain();
    case AmaltheaPackage::ACTIVITYGRAPH:
        return createActivityGraph();
    case AmaltheaPackage::MODESWITCH:
        return createModeSwitch();
    case AmaltheaPackage::MODESWITCHENTRY:
        return createModeSwitchEntry();
    case AmaltheaPackage::MODESWITCHDEFAULT:
        return createModeSwitchDefault();
    case AmaltheaPackage::PROBABILITYSWITCH:
        return createProbabilitySwitch();
    case AmaltheaPackage::PROBABILITYSWITCHENTRY:
        return createProbabilitySwitchEntry();
    case AmaltheaPackage::COUNTER:
        return createCounter();
    case AmaltheaPackage::WAITEVENT:
        return createWaitEvent();
    case AmaltheaPackage::SETEVENT:
        return createSetEvent();
    case AmaltheaPackage::CLEAREVENT:
        return createClearEvent();
    case AmaltheaPackage::EVENTMASK:
        return createEventMask();
    case AmaltheaPackage::OSEVENT:
        return createOsEvent();
    case AmaltheaPackage::INTERPROCESSTRIGGER:
        return createInterProcessTrigger();
    case AmaltheaPackage::ENFORCEDMIGRATION:
        return createEnforcedMigration();
    case AmaltheaPackage::SCHEDULEPOINT:
        return createSchedulePoint();
    case AmaltheaPackage::TERMINATEPROCESS:
        return createTerminateProcess();
    case AmaltheaPackage::TASK:
        return createTask();
    case AmaltheaPackage::ISR:
        return createISR();
    case AmaltheaPackage::PROCESSPROTOTYPE:
        return createProcessPrototype();
    case AmaltheaPackage::CHAINEDPROCESSPROTOTYPE:
        return createChainedProcessPrototype();
    case AmaltheaPackage::ACCESSPRECEDENCESPEC:
        return createAccessPrecedenceSpec();
    case AmaltheaPackage::ORDERPRECEDENCESPEC:
        return createOrderPrecedenceSpec();
    case AmaltheaPackage::DATADEPENDENCY:
        return createDataDependency();
    case AmaltheaPackage::RUNNABLEPARAMETER:
        return createRunnableParameter();
    case AmaltheaPackage::RUNNABLE:
        return createRunnable();
    case AmaltheaPackage::LABEL:
        return createLabel();
    case AmaltheaPackage::CHANNEL:
        return createChannel();
    case AmaltheaPackage::MODELABEL:
        return createModeLabel();
    case AmaltheaPackage::SECTION:
        return createSection();
    case AmaltheaPackage::EXECUTIONNEED:
        return createExecutionNeed();
    case AmaltheaPackage::NEEDENTRY:
        return createNeedEntry();
    case AmaltheaPackage::TICKS:
        return createTicks();
    case AmaltheaPackage::TICKSENTRY:
        return createTicksEntry();
    case AmaltheaPackage::MODELABELACCESS:
        return createModeLabelAccess();
    case AmaltheaPackage::LABELACCESS:
        return createLabelAccess();
    case AmaltheaPackage::CHANNELSEND:
        return createChannelSend();
    case AmaltheaPackage::CHANNELRECEIVE:
        return createChannelReceive();
    case AmaltheaPackage::SEMAPHOREACCESS:
        return createSemaphoreAccess();
    case AmaltheaPackage::SENDERRECEIVERREAD:
        return createSenderReceiverRead();
    case AmaltheaPackage::SENDERRECEIVERWRITE:
        return createSenderReceiverWrite();
    case AmaltheaPackage::SYNCHRONOUSSERVERCALL:
        return createSynchronousServerCall();
    case AmaltheaPackage::ASYNCHRONOUSSERVERCALL:
        return createAsynchronousServerCall();
    case AmaltheaPackage::GETRESULTSERVERCALL:
        return createGetResultServerCall();
    case AmaltheaPackage::GROUP:
        return createGroup();
    case AmaltheaPackage::CALLARGUMENT:
        return createCallArgument();
    case AmaltheaPackage::RUNNABLECALL:
        return createRunnableCall();
    case AmaltheaPackage::CUSTOMEVENTTRIGGER:
        return createCustomEventTrigger();
    case AmaltheaPackage::STRUCT:
        return createStruct();
    case AmaltheaPackage::STRUCTENTRY:
        return createStructEntry();
    case AmaltheaPackage::ARRAY:
        return createArray();
    case AmaltheaPackage::POINTER:
        return createPointer();
    case AmaltheaPackage::TYPEREF:
        return createTypeRef();
    case AmaltheaPackage::ALIAS:
        return createAlias();
    case AmaltheaPackage::DATATYPEDEFINITION:
        return createDataTypeDefinition();
    case AmaltheaPackage::BASETYPEDEFINITION:
        return createBaseTypeDefinition();
    case AmaltheaPackage::PERIODICACTIVATION:
        return createPeriodicActivation();
    case AmaltheaPackage::VARIABLERATEACTIVATION:
        return createVariableRateActivation();
    case AmaltheaPackage::SPORADICACTIVATION:
        return createSporadicActivation();
    case AmaltheaPackage::SINGLEACTIVATION:
        return createSingleActivation();
    case AmaltheaPackage::EVENTACTIVATION:
        return createEventActivation();
    case AmaltheaPackage::CUSTOMACTIVATION:
        return createCustomActivation();
    case AmaltheaPackage::LABELACCESSSTATISTIC:
        return createLabelAccessStatistic();
    case AmaltheaPackage::RUNENTITYCALLSTATISTIC:
        return createRunEntityCallStatistic();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject AmaltheaFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case AmaltheaPackage::RELATIONALOPERATOR:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getRelationalOperator()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::TIMEUNIT:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getTimeUnit()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::FREQUENCYUNIT:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getFrequencyUnit()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::VOLTAGEUNIT:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getVoltageUnit()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::DATASIZEUNIT:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getDataSizeUnit()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::DATARATEUNIT:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getDataRateUnit()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::SAMPLINGTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getSamplingType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::ADDRESS:
        return ::ecorecpp::mapping::string_traits < ::amalthea::Address
                > ::fromString(_literalValue);
    case AmaltheaPackage::POSITIVEINT:
        return ::ecorecpp::mapping::string_traits < ::amalthea::PositiveInt
                > ::fromString(_literalValue);
    case AmaltheaPackage::POSITIVELONG:
        return ::ecorecpp::mapping::string_traits < ::amalthea::PositiveLong
                > ::fromString(_literalValue);
    case AmaltheaPackage::POSITIVEDOUBLE:
        return ::ecorecpp::mapping::string_traits < ::amalthea::PositiveDouble
                > ::fromString(_literalValue);
    case AmaltheaPackage::NONNEGATIVEINT:
        return ::ecorecpp::mapping::string_traits < ::amalthea::NonNegativeInt
                > ::fromString(_literalValue);
    case AmaltheaPackage::NONNEGATIVELONG:
        return ::ecorecpp::mapping::string_traits < ::amalthea::NonNegativeLong
                > ::fromString(_literalValue);
    case AmaltheaPackage::NONNEGATIVEDOUBLE:
        return ::ecorecpp::mapping::string_traits
                < ::amalthea::NonNegativeDouble > ::fromString(_literalValue);
    case AmaltheaPackage::INTERFACEKIND:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getInterfaceKind()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::RUNNABLEORDERTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getRunnableOrderType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::EVENTCHAINITEMTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getEventChainItemType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::SYNCHRONIZATIONTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getSynchronizationType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::MAPPINGTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getMappingType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::LATENCYTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getLatencyType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::SEVERITY:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getSeverity()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::LIMITTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getLimitType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::TIMEMETRIC:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getTimeMetric()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::COUNTMETRIC:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getCountMetric()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::PERCENTAGEMETRIC:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getPercentageMetric()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::CPUPERCENTAGEMETRIC:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getCPUPercentageMetric()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::FREQUENCYMETRIC:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getFrequencyMetric()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::COHERENCYDIRECTION:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getCoherencyDirection()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::PROCESSEVENTTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getProcessEventType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::RUNNABLEEVENTTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getRunnableEventType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::LABELEVENTTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getLabelEventType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::CHANNELEVENTTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getChannelEventType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::SEMAPHOREEVENTTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getSemaphoreEventType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::COMPONENTEVENTTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getComponentEventType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::MEMORYTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getMemoryType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::STRUCTURETYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getStructureType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::CACHETYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getCacheType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::PORTTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getPortType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::SCHEDPOLICY:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getSchedPolicy()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::WRITESTRATEGY:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getWriteStrategy()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::PUTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getPuType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::PORTINTERFACE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getPortInterface()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::HWFEATURETYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getHwFeatureType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::MEMORYADDRESSMAPPINGTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getMemoryAddressMappingType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::OSDATACONSISTENCYMODE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getOsDataConsistencyMode()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::ACCESSMULTIPLICITY:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getAccessMultiplicity()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::DATASTABILITYLEVEL:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getDataStabilityLevel()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::SEMAPHORETYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getSemaphoreType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::CONDITION:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getCondition()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::GROUPINGTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getGroupingType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::CURVETYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getCurveType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::WAITEVENTTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getWaitEventType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::WAITINGBEHAVIOUR:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getWaitingBehaviour()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::ISRCATEGORY:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getISRCategory()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::ACCESSPRECEDENCETYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getAccessPrecedenceType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::ORDERTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getOrderType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::DIRECTIONTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getDirectionType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::LABELDATASTABILITY:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getLabelDataStability()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::MODELABELACCESSENUM:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getModeLabelAccessEnum()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::RECEIVEOPERATION:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getReceiveOperation()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::LABELACCESSDATASTABILITY:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getLabelAccessDataStability()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::LABELACCESSENUM:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getLabelAccessEnum()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::LABELACCESSIMPLEMENTATION:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getLabelAccessImplementation()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::SEMAPHOREACCESSENUM:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getSemaphoreAccessEnum()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::BLOCKINGTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getBlockingType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::PREEMPTION:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getPreemption()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    case AmaltheaPackage::CONCURRENCYTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getConcurrencyType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    case AmaltheaPackage::ASILTYPE:
    {
        ::ecore::EJavaObject _any;
        AmaltheaPackage_ptr _epkg =
                dynamic_cast< ::amalthea::AmaltheaPackage* >(getEPackage().get());
        return _epkg->getASILType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString AmaltheaFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case AmaltheaPackage::RELATIONALOPERATOR:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getRelationalOperator()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::TIMEUNIT:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getTimeUnit()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::FREQUENCYUNIT:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getFrequencyUnit()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::VOLTAGEUNIT:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getVoltageUnit()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::DATASIZEUNIT:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getDataSizeUnit()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::DATARATEUNIT:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getDataRateUnit()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::SAMPLINGTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getSamplingType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::ADDRESS:
        return ::ecorecpp::mapping::string_traits < ::amalthea::Address
                > ::toString(_instanceValue);
    case AmaltheaPackage::POSITIVEINT:
        return ::ecorecpp::mapping::string_traits < ::amalthea::PositiveInt
                > ::toString(_instanceValue);
    case AmaltheaPackage::POSITIVELONG:
        return ::ecorecpp::mapping::string_traits < ::amalthea::PositiveLong
                > ::toString(_instanceValue);
    case AmaltheaPackage::POSITIVEDOUBLE:
        return ::ecorecpp::mapping::string_traits < ::amalthea::PositiveDouble
                > ::toString(_instanceValue);
    case AmaltheaPackage::NONNEGATIVEINT:
        return ::ecorecpp::mapping::string_traits < ::amalthea::NonNegativeInt
                > ::toString(_instanceValue);
    case AmaltheaPackage::NONNEGATIVELONG:
        return ::ecorecpp::mapping::string_traits < ::amalthea::NonNegativeLong
                > ::toString(_instanceValue);
    case AmaltheaPackage::NONNEGATIVEDOUBLE:
        return ::ecorecpp::mapping::string_traits
                < ::amalthea::NonNegativeDouble > ::toString(_instanceValue);
    case AmaltheaPackage::INTERFACEKIND:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getInterfaceKind()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::RUNNABLEORDERTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getRunnableOrderType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::EVENTCHAINITEMTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getEventChainItemType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::SYNCHRONIZATIONTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getSynchronizationType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::MAPPINGTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getMappingType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::LATENCYTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getLatencyType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::SEVERITY:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getSeverity()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::LIMITTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getLimitType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::TIMEMETRIC:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getTimeMetric()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::COUNTMETRIC:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getCountMetric()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::PERCENTAGEMETRIC:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getPercentageMetric()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::CPUPERCENTAGEMETRIC:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getCPUPercentageMetric()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::FREQUENCYMETRIC:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getFrequencyMetric()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::COHERENCYDIRECTION:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getCoherencyDirection()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::PROCESSEVENTTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getProcessEventType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::RUNNABLEEVENTTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getRunnableEventType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::LABELEVENTTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getLabelEventType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::CHANNELEVENTTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getChannelEventType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::SEMAPHOREEVENTTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getSemaphoreEventType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::COMPONENTEVENTTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getComponentEventType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::MEMORYTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getMemoryType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::STRUCTURETYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getStructureType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::CACHETYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getCacheType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::PORTTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getPortType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::SCHEDPOLICY:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getSchedPolicy()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::WRITESTRATEGY:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getWriteStrategy()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::PUTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getPuType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::PORTINTERFACE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getPortInterface()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::HWFEATURETYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getHwFeatureType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::MEMORYADDRESSMAPPINGTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getMemoryAddressMappingType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::OSDATACONSISTENCYMODE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getOsDataConsistencyMode()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::ACCESSMULTIPLICITY:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getAccessMultiplicity()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::DATASTABILITYLEVEL:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getDataStabilityLevel()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::SEMAPHORETYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getSemaphoreType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::CONDITION:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getCondition()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::GROUPINGTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getGroupingType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::CURVETYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getCurveType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::WAITEVENTTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getWaitEventType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::WAITINGBEHAVIOUR:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getWaitingBehaviour()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::ISRCATEGORY:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getISRCategory()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::ACCESSPRECEDENCETYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getAccessPrecedenceType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::ORDERTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getOrderType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::DIRECTIONTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getDirectionType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::LABELDATASTABILITY:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getLabelDataStability()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::MODELABELACCESSENUM:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getModeLabelAccessEnum()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::RECEIVEOPERATION:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getReceiveOperation()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::LABELACCESSDATASTABILITY:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getLabelAccessDataStability()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::LABELACCESSENUM:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getLabelAccessEnum()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::LABELACCESSIMPLEMENTATION:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getLabelAccessImplementation()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::SEMAPHOREACCESSENUM:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getSemaphoreAccessEnum()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::BLOCKINGTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getBlockingType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::PREEMPTION:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getPreemption()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::CONCURRENCYTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getConcurrencyType()->getEEnumLiteral(_value)->getName();
    }
    case AmaltheaPackage::ASILTYPE:
    {
        AmaltheaPackage_ptr _epkg = ::ecore::as < ::amalthea::AmaltheaPackage
                > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getASILType()->getEEnumLiteral(_value)->getName();
    }
    default:
        throw "IllegalArgumentException";
    }
}

Amalthea_ptr AmaltheaFactory::createAmalthea()
{
    return ::ecore::Ptr < Amalthea > (new Amalthea);
}
CommonElements_ptr AmaltheaFactory::createCommonElements()
{
    return ::ecore::Ptr < CommonElements > (new CommonElements);
}
Tag_ptr AmaltheaFactory::createTag()
{
    return ::ecore::Ptr < Tag > (new Tag);
}
Namespace_ptr AmaltheaFactory::createNamespace()
{
    return ::ecore::Ptr < Namespace > (new Namespace);
}
CoreClassifier_ptr AmaltheaFactory::createCoreClassifier()
{
    return ::ecore::Ptr < CoreClassifier > (new CoreClassifier);
}
MemoryClassifier_ptr AmaltheaFactory::createMemoryClassifier()
{
    return ::ecore::Ptr < MemoryClassifier > (new MemoryClassifier);
}
TransmissionPolicy_ptr AmaltheaFactory::createTransmissionPolicy()
{
    return ::ecore::Ptr < TransmissionPolicy > (new TransmissionPolicy);
}
Time_ptr AmaltheaFactory::createTime()
{
    return ::ecore::Ptr < Time > (new Time);
}
Frequency_ptr AmaltheaFactory::createFrequency()
{
    return ::ecore::Ptr < Frequency > (new Frequency);
}
Voltage_ptr AmaltheaFactory::createVoltage()
{
    return ::ecore::Ptr < Voltage > (new Voltage);
}
DataSize_ptr AmaltheaFactory::createDataSize()
{
    return ::ecore::Ptr < DataSize > (new DataSize);
}
DataRate_ptr AmaltheaFactory::createDataRate()
{
    return ::ecore::Ptr < DataRate > (new DataRate);
}
CustomProperty_ptr AmaltheaFactory::createCustomProperty()
{
    return ::ecore::Ptr < CustomProperty > (new CustomProperty);
}
ListObject_ptr AmaltheaFactory::createListObject()
{
    return ::ecore::Ptr < ListObject > (new ListObject);
}
StringObject_ptr AmaltheaFactory::createStringObject()
{
    return ::ecore::Ptr < StringObject > (new StringObject);
}
BigIntegerObject_ptr AmaltheaFactory::createBigIntegerObject()
{
    return ::ecore::Ptr < BigIntegerObject > (new BigIntegerObject);
}
ReferenceObject_ptr AmaltheaFactory::createReferenceObject()
{
    return ::ecore::Ptr < ReferenceObject > (new ReferenceObject);
}
IntegerObject_ptr AmaltheaFactory::createIntegerObject()
{
    return ::ecore::Ptr < IntegerObject > (new IntegerObject);
}
LongObject_ptr AmaltheaFactory::createLongObject()
{
    return ::ecore::Ptr < LongObject > (new LongObject);
}
FloatObject_ptr AmaltheaFactory::createFloatObject()
{
    return ::ecore::Ptr < FloatObject > (new FloatObject);
}
DoubleObject_ptr AmaltheaFactory::createDoubleObject()
{
    return ::ecore::Ptr < DoubleObject > (new DoubleObject);
}
BooleanObject_ptr AmaltheaFactory::createBooleanObject()
{
    return ::ecore::Ptr < BooleanObject > (new BooleanObject);
}
MinAvgMaxStatistic_ptr AmaltheaFactory::createMinAvgMaxStatistic()
{
    return ::ecore::Ptr < MinAvgMaxStatistic > (new MinAvgMaxStatistic);
}
SingleValueStatistic_ptr AmaltheaFactory::createSingleValueStatistic()
{
    return ::ecore::Ptr < SingleValueStatistic > (new SingleValueStatistic);
}
TimeConstant_ptr AmaltheaFactory::createTimeConstant()
{
    return ::ecore::Ptr < TimeConstant > (new TimeConstant);
}
TimeHistogram_ptr AmaltheaFactory::createTimeHistogram()
{
    return ::ecore::Ptr < TimeHistogram > (new TimeHistogram);
}
TimeHistogramEntry_ptr AmaltheaFactory::createTimeHistogramEntry()
{
    return ::ecore::Ptr < TimeHistogramEntry > (new TimeHistogramEntry);
}
TimeBoundaries_ptr AmaltheaFactory::createTimeBoundaries()
{
    return ::ecore::Ptr < TimeBoundaries > (new TimeBoundaries);
}
TimeStatistics_ptr AmaltheaFactory::createTimeStatistics()
{
    return ::ecore::Ptr < TimeStatistics > (new TimeStatistics);
}
TimeUniformDistribution_ptr AmaltheaFactory::createTimeUniformDistribution()
{
    return ::ecore::Ptr < TimeUniformDistribution
            > (new TimeUniformDistribution);
}
TimeGaussDistribution_ptr AmaltheaFactory::createTimeGaussDistribution()
{
    return ::ecore::Ptr < TimeGaussDistribution > (new TimeGaussDistribution);
}
TimeWeibullEstimatorsDistribution_ptr AmaltheaFactory::createTimeWeibullEstimatorsDistribution()
{
    return ::ecore::Ptr < TimeWeibullEstimatorsDistribution
            > (new TimeWeibullEstimatorsDistribution);
}
TimeBetaDistribution_ptr AmaltheaFactory::createTimeBetaDistribution()
{
    return ::ecore::Ptr < TimeBetaDistribution > (new TimeBetaDistribution);
}
DiscreteValueConstant_ptr AmaltheaFactory::createDiscreteValueConstant()
{
    return ::ecore::Ptr < DiscreteValueConstant > (new DiscreteValueConstant);
}
DiscreteValueHistogram_ptr AmaltheaFactory::createDiscreteValueHistogram()
{
    return ::ecore::Ptr < DiscreteValueHistogram > (new DiscreteValueHistogram);
}
DiscreteValueHistogramEntry_ptr AmaltheaFactory::createDiscreteValueHistogramEntry()
{
    return ::ecore::Ptr < DiscreteValueHistogramEntry
            > (new DiscreteValueHistogramEntry);
}
DiscreteValueBoundaries_ptr AmaltheaFactory::createDiscreteValueBoundaries()
{
    return ::ecore::Ptr < DiscreteValueBoundaries
            > (new DiscreteValueBoundaries);
}
DiscreteValueStatistics_ptr AmaltheaFactory::createDiscreteValueStatistics()
{
    return ::ecore::Ptr < DiscreteValueStatistics
            > (new DiscreteValueStatistics);
}
DiscreteValueUniformDistribution_ptr AmaltheaFactory::createDiscreteValueUniformDistribution()
{
    return ::ecore::Ptr < DiscreteValueUniformDistribution
            > (new DiscreteValueUniformDistribution);
}
DiscreteValueGaussDistribution_ptr AmaltheaFactory::createDiscreteValueGaussDistribution()
{
    return ::ecore::Ptr < DiscreteValueGaussDistribution
            > (new DiscreteValueGaussDistribution);
}
DiscreteValueWeibullEstimatorsDistribution_ptr AmaltheaFactory::createDiscreteValueWeibullEstimatorsDistribution()
{
    return ::ecore::Ptr < DiscreteValueWeibullEstimatorsDistribution
            > (new DiscreteValueWeibullEstimatorsDistribution);
}
DiscreteValueBetaDistribution_ptr AmaltheaFactory::createDiscreteValueBetaDistribution()
{
    return ::ecore::Ptr < DiscreteValueBetaDistribution
            > (new DiscreteValueBetaDistribution);
}
ContinuousValueConstant_ptr AmaltheaFactory::createContinuousValueConstant()
{
    return ::ecore::Ptr < ContinuousValueConstant
            > (new ContinuousValueConstant);
}
ContinuousValueHistogram_ptr AmaltheaFactory::createContinuousValueHistogram()
{
    return ::ecore::Ptr < ContinuousValueHistogram
            > (new ContinuousValueHistogram);
}
ContinuousValueHistogramEntry_ptr AmaltheaFactory::createContinuousValueHistogramEntry()
{
    return ::ecore::Ptr < ContinuousValueHistogramEntry
            > (new ContinuousValueHistogramEntry);
}
ContinuousValueBoundaries_ptr AmaltheaFactory::createContinuousValueBoundaries()
{
    return ::ecore::Ptr < ContinuousValueBoundaries
            > (new ContinuousValueBoundaries);
}
ContinuousValueStatistics_ptr AmaltheaFactory::createContinuousValueStatistics()
{
    return ::ecore::Ptr < ContinuousValueStatistics
            > (new ContinuousValueStatistics);
}
ContinuousValueUniformDistribution_ptr AmaltheaFactory::createContinuousValueUniformDistribution()
{
    return ::ecore::Ptr < ContinuousValueUniformDistribution
            > (new ContinuousValueUniformDistribution);
}
ContinuousValueGaussDistribution_ptr AmaltheaFactory::createContinuousValueGaussDistribution()
{
    return ::ecore::Ptr < ContinuousValueGaussDistribution
            > (new ContinuousValueGaussDistribution);
}
ContinuousValueWeibullEstimatorsDistribution_ptr AmaltheaFactory::createContinuousValueWeibullEstimatorsDistribution()
{
    return ::ecore::Ptr < ContinuousValueWeibullEstimatorsDistribution
            > (new ContinuousValueWeibullEstimatorsDistribution);
}
ContinuousValueBetaDistribution_ptr AmaltheaFactory::createContinuousValueBetaDistribution()
{
    return ::ecore::Ptr < ContinuousValueBetaDistribution
            > (new ContinuousValueBetaDistribution);
}
NumericMode_ptr AmaltheaFactory::createNumericMode()
{
    return ::ecore::Ptr < NumericMode > (new NumericMode);
}
EnumMode_ptr AmaltheaFactory::createEnumMode()
{
    return ::ecore::Ptr < EnumMode > (new EnumMode);
}
ModeLiteral_ptr AmaltheaFactory::createModeLiteral()
{
    return ::ecore::Ptr < ModeLiteral > (new ModeLiteral);
}
ComponentsModel_ptr AmaltheaFactory::createComponentsModel()
{
    return ::ecore::Ptr < ComponentsModel > (new ComponentsModel);
}
MainInterface_ptr AmaltheaFactory::createMainInterface()
{
    return ::ecore::Ptr < MainInterface > (new MainInterface);
}
SubInterface_ptr AmaltheaFactory::createSubInterface()
{
    return ::ecore::Ptr < SubInterface > (new SubInterface);
}
ComponentPort_ptr AmaltheaFactory::createComponentPort()
{
    return ::ecore::Ptr < ComponentPort > (new ComponentPort);
}
ComponentStructure_ptr AmaltheaFactory::createComponentStructure()
{
    return ::ecore::Ptr < ComponentStructure > (new ComponentStructure);
}
Component_ptr AmaltheaFactory::createComponent()
{
    return ::ecore::Ptr < Component > (new Component);
}
Composite_ptr AmaltheaFactory::createComposite()
{
    return ::ecore::Ptr < Composite > (new Composite);
}
System_ptr AmaltheaFactory::createSystem()
{
    return ::ecore::Ptr < System > (new System);
}
ComponentInstance_ptr AmaltheaFactory::createComponentInstance()
{
    return ::ecore::Ptr < ComponentInstance > (new ComponentInstance);
}
Connector_ptr AmaltheaFactory::createConnector()
{
    return ::ecore::Ptr < Connector > (new Connector);
}
InterfaceChannel_ptr AmaltheaFactory::createInterfaceChannel()
{
    return ::ecore::Ptr < InterfaceChannel > (new InterfaceChannel);
}
QualifiedPort_ptr AmaltheaFactory::createQualifiedPort()
{
    return ::ecore::Ptr < QualifiedPort > (new QualifiedPort);
}
ConfigModel_ptr AmaltheaFactory::createConfigModel()
{
    return ::ecore::Ptr < ConfigModel > (new ConfigModel);
}
EventConfig_ptr AmaltheaFactory::createEventConfig()
{
    return ::ecore::Ptr < EventConfig > (new EventConfig);
}
ConstraintsModel_ptr AmaltheaFactory::createConstraintsModel()
{
    return ::ecore::Ptr < ConstraintsModel > (new ConstraintsModel);
}
RunnableSequencingConstraint_ptr AmaltheaFactory::createRunnableSequencingConstraint()
{
    return ::ecore::Ptr < RunnableSequencingConstraint
            > (new RunnableSequencingConstraint);
}
RunnableSeparationConstraint_ptr AmaltheaFactory::createRunnableSeparationConstraint()
{
    return ::ecore::Ptr < RunnableSeparationConstraint
            > (new RunnableSeparationConstraint);
}
ProcessSeparationConstraint_ptr AmaltheaFactory::createProcessSeparationConstraint()
{
    return ::ecore::Ptr < ProcessSeparationConstraint
            > (new ProcessSeparationConstraint);
}
DataSeparationConstraint_ptr AmaltheaFactory::createDataSeparationConstraint()
{
    return ::ecore::Ptr < DataSeparationConstraint
            > (new DataSeparationConstraint);
}
RunnablePairingConstraint_ptr AmaltheaFactory::createRunnablePairingConstraint()
{
    return ::ecore::Ptr < RunnablePairingConstraint
            > (new RunnablePairingConstraint);
}
ProcessPairingConstraint_ptr AmaltheaFactory::createProcessPairingConstraint()
{
    return ::ecore::Ptr < ProcessPairingConstraint
            > (new ProcessPairingConstraint);
}
DataPairingConstraint_ptr AmaltheaFactory::createDataPairingConstraint()
{
    return ::ecore::Ptr < DataPairingConstraint > (new DataPairingConstraint);
}
TargetMemory_ptr AmaltheaFactory::createTargetMemory()
{
    return ::ecore::Ptr < TargetMemory > (new TargetMemory);
}
TargetCore_ptr AmaltheaFactory::createTargetCore()
{
    return ::ecore::Ptr < TargetCore > (new TargetCore);
}
TargetScheduler_ptr AmaltheaFactory::createTargetScheduler()
{
    return ::ecore::Ptr < TargetScheduler > (new TargetScheduler);
}
LabelEntityGroup_ptr AmaltheaFactory::createLabelEntityGroup()
{
    return ::ecore::Ptr < LabelEntityGroup > (new LabelEntityGroup);
}
RunnableEntityGroup_ptr AmaltheaFactory::createRunnableEntityGroup()
{
    return ::ecore::Ptr < RunnableEntityGroup > (new RunnableEntityGroup);
}
ProcessEntityGroup_ptr AmaltheaFactory::createProcessEntityGroup()
{
    return ::ecore::Ptr < ProcessEntityGroup > (new ProcessEntityGroup);
}
TagGroup_ptr AmaltheaFactory::createTagGroup()
{
    return ::ecore::Ptr < TagGroup > (new TagGroup);
}
EventChain_ptr AmaltheaFactory::createEventChain()
{
    return ::ecore::Ptr < EventChain > (new EventChain);
}
SubEventChain_ptr AmaltheaFactory::createSubEventChain()
{
    return ::ecore::Ptr < SubEventChain > (new SubEventChain);
}
EventChainReference_ptr AmaltheaFactory::createEventChainReference()
{
    return ::ecore::Ptr < EventChainReference > (new EventChainReference);
}
EventChainContainer_ptr AmaltheaFactory::createEventChainContainer()
{
    return ::ecore::Ptr < EventChainContainer > (new EventChainContainer);
}
PhysicalSectionConstraint_ptr AmaltheaFactory::createPhysicalSectionConstraint()
{
    return ::ecore::Ptr < PhysicalSectionConstraint
            > (new PhysicalSectionConstraint);
}
EventSynchronizationConstraint_ptr AmaltheaFactory::createEventSynchronizationConstraint()
{
    return ::ecore::Ptr < EventSynchronizationConstraint
            > (new EventSynchronizationConstraint);
}
EventChainSynchronizationConstraint_ptr AmaltheaFactory::createEventChainSynchronizationConstraint()
{
    return ::ecore::Ptr < EventChainSynchronizationConstraint
            > (new EventChainSynchronizationConstraint);
}
DelayConstraint_ptr AmaltheaFactory::createDelayConstraint()
{
    return ::ecore::Ptr < DelayConstraint > (new DelayConstraint);
}
EventChainLatencyConstraint_ptr AmaltheaFactory::createEventChainLatencyConstraint()
{
    return ::ecore::Ptr < EventChainLatencyConstraint
            > (new EventChainLatencyConstraint);
}
RepetitionConstraint_ptr AmaltheaFactory::createRepetitionConstraint()
{
    return ::ecore::Ptr < RepetitionConstraint > (new RepetitionConstraint);
}
DataAgeConstraint_ptr AmaltheaFactory::createDataAgeConstraint()
{
    return ::ecore::Ptr < DataAgeConstraint > (new DataAgeConstraint);
}
DataAgeCycle_ptr AmaltheaFactory::createDataAgeCycle()
{
    return ::ecore::Ptr < DataAgeCycle > (new DataAgeCycle);
}
DataAgeTime_ptr AmaltheaFactory::createDataAgeTime()
{
    return ::ecore::Ptr < DataAgeTime > (new DataAgeTime);
}
ProcessRequirement_ptr AmaltheaFactory::createProcessRequirement()
{
    return ::ecore::Ptr < ProcessRequirement > (new ProcessRequirement);
}
RunnableRequirement_ptr AmaltheaFactory::createRunnableRequirement()
{
    return ::ecore::Ptr < RunnableRequirement > (new RunnableRequirement);
}
ArchitectureRequirement_ptr AmaltheaFactory::createArchitectureRequirement()
{
    return ::ecore::Ptr < ArchitectureRequirement
            > (new ArchitectureRequirement);
}
ProcessChainRequirement_ptr AmaltheaFactory::createProcessChainRequirement()
{
    return ::ecore::Ptr < ProcessChainRequirement
            > (new ProcessChainRequirement);
}
CPUPercentageRequirementLimit_ptr AmaltheaFactory::createCPUPercentageRequirementLimit()
{
    return ::ecore::Ptr < CPUPercentageRequirementLimit
            > (new CPUPercentageRequirementLimit);
}
FrequencyRequirementLimit_ptr AmaltheaFactory::createFrequencyRequirementLimit()
{
    return ::ecore::Ptr < FrequencyRequirementLimit
            > (new FrequencyRequirementLimit);
}
PercentageRequirementLimit_ptr AmaltheaFactory::createPercentageRequirementLimit()
{
    return ::ecore::Ptr < PercentageRequirementLimit
            > (new PercentageRequirementLimit);
}
CountRequirementLimit_ptr AmaltheaFactory::createCountRequirementLimit()
{
    return ::ecore::Ptr < CountRequirementLimit > (new CountRequirementLimit);
}
TimeRequirementLimit_ptr AmaltheaFactory::createTimeRequirementLimit()
{
    return ::ecore::Ptr < TimeRequirementLimit > (new TimeRequirementLimit);
}
DataCoherencyGroup_ptr AmaltheaFactory::createDataCoherencyGroup()
{
    return ::ecore::Ptr < DataCoherencyGroup > (new DataCoherencyGroup);
}
DataStabilityGroup_ptr AmaltheaFactory::createDataStabilityGroup()
{
    return ::ecore::Ptr < DataStabilityGroup > (new DataStabilityGroup);
}
ProcessScope_ptr AmaltheaFactory::createProcessScope()
{
    return ::ecore::Ptr < ProcessScope > (new ProcessScope);
}
RunnableScope_ptr AmaltheaFactory::createRunnableScope()
{
    return ::ecore::Ptr < RunnableScope > (new RunnableScope);
}
ComponentScope_ptr AmaltheaFactory::createComponentScope()
{
    return ::ecore::Ptr < ComponentScope > (new ComponentScope);
}
EventModel_ptr AmaltheaFactory::createEventModel()
{
    return ::ecore::Ptr < EventModel > (new EventModel);
}
EventSet_ptr AmaltheaFactory::createEventSet()
{
    return ::ecore::Ptr < EventSet > (new EventSet);
}
CustomEvent_ptr AmaltheaFactory::createCustomEvent()
{
    return ::ecore::Ptr < CustomEvent > (new CustomEvent);
}
StimulusEvent_ptr AmaltheaFactory::createStimulusEvent()
{
    return ::ecore::Ptr < StimulusEvent > (new StimulusEvent);
}
ProcessEvent_ptr AmaltheaFactory::createProcessEvent()
{
    return ::ecore::Ptr < ProcessEvent > (new ProcessEvent);
}
ProcessChainEvent_ptr AmaltheaFactory::createProcessChainEvent()
{
    return ::ecore::Ptr < ProcessChainEvent > (new ProcessChainEvent);
}
RunnableEvent_ptr AmaltheaFactory::createRunnableEvent()
{
    return ::ecore::Ptr < RunnableEvent > (new RunnableEvent);
}
LabelEvent_ptr AmaltheaFactory::createLabelEvent()
{
    return ::ecore::Ptr < LabelEvent > (new LabelEvent);
}
ChannelEvent_ptr AmaltheaFactory::createChannelEvent()
{
    return ::ecore::Ptr < ChannelEvent > (new ChannelEvent);
}
SemaphoreEvent_ptr AmaltheaFactory::createSemaphoreEvent()
{
    return ::ecore::Ptr < SemaphoreEvent > (new SemaphoreEvent);
}
ComponentEvent_ptr AmaltheaFactory::createComponentEvent()
{
    return ::ecore::Ptr < ComponentEvent > (new ComponentEvent);
}
HWModel_ptr AmaltheaFactory::createHWModel()
{
    return ::ecore::Ptr < HWModel > (new HWModel);
}
HwStructure_ptr AmaltheaFactory::createHwStructure()
{
    return ::ecore::Ptr < HwStructure > (new HwStructure);
}
FrequencyDomain_ptr AmaltheaFactory::createFrequencyDomain()
{
    return ::ecore::Ptr < FrequencyDomain > (new FrequencyDomain);
}
PowerDomain_ptr AmaltheaFactory::createPowerDomain()
{
    return ::ecore::Ptr < PowerDomain > (new PowerDomain);
}
ProcessingUnit_ptr AmaltheaFactory::createProcessingUnit()
{
    return ::ecore::Ptr < ProcessingUnit > (new ProcessingUnit);
}
Memory_ptr AmaltheaFactory::createMemory()
{
    return ::ecore::Ptr < Memory > (new Memory);
}
Cache_ptr AmaltheaFactory::createCache()
{
    return ::ecore::Ptr < Cache > (new Cache);
}
HwFeatureCategory_ptr AmaltheaFactory::createHwFeatureCategory()
{
    return ::ecore::Ptr < HwFeatureCategory > (new HwFeatureCategory);
}
HwFeature_ptr AmaltheaFactory::createHwFeature()
{
    return ::ecore::Ptr < HwFeature > (new HwFeature);
}
HwPort_ptr AmaltheaFactory::createHwPort()
{
    return ::ecore::Ptr < HwPort > (new HwPort);
}
ConnectionHandler_ptr AmaltheaFactory::createConnectionHandler()
{
    return ::ecore::Ptr < ConnectionHandler > (new ConnectionHandler);
}
HwConnection_ptr AmaltheaFactory::createHwConnection()
{
    return ::ecore::Ptr < HwConnection > (new HwConnection);
}
HwAccessElement_ptr AmaltheaFactory::createHwAccessElement()
{
    return ::ecore::Ptr < HwAccessElement > (new HwAccessElement);
}
ProcessingUnitDefinition_ptr AmaltheaFactory::createProcessingUnitDefinition()
{
    return ::ecore::Ptr < ProcessingUnitDefinition
            > (new ProcessingUnitDefinition);
}
ConnectionHandlerDefinition_ptr AmaltheaFactory::createConnectionHandlerDefinition()
{
    return ::ecore::Ptr < ConnectionHandlerDefinition
            > (new ConnectionHandlerDefinition);
}
MemoryDefinition_ptr AmaltheaFactory::createMemoryDefinition()
{
    return ::ecore::Ptr < MemoryDefinition > (new MemoryDefinition);
}
CacheDefinition_ptr AmaltheaFactory::createCacheDefinition()
{
    return ::ecore::Ptr < CacheDefinition > (new CacheDefinition);
}
HwAccessPath_ptr AmaltheaFactory::createHwAccessPath()
{
    return ::ecore::Ptr < HwAccessPath > (new HwAccessPath);
}
MappingModel_ptr AmaltheaFactory::createMappingModel()
{
    return ::ecore::Ptr < MappingModel > (new MappingModel);
}
SchedulerAllocation_ptr AmaltheaFactory::createSchedulerAllocation()
{
    return ::ecore::Ptr < SchedulerAllocation > (new SchedulerAllocation);
}
TaskAllocation_ptr AmaltheaFactory::createTaskAllocation()
{
    return ::ecore::Ptr < TaskAllocation > (new TaskAllocation);
}
ISRAllocation_ptr AmaltheaFactory::createISRAllocation()
{
    return ::ecore::Ptr < ISRAllocation > (new ISRAllocation);
}
RunnableAllocation_ptr AmaltheaFactory::createRunnableAllocation()
{
    return ::ecore::Ptr < RunnableAllocation > (new RunnableAllocation);
}
MemoryMapping_ptr AmaltheaFactory::createMemoryMapping()
{
    return ::ecore::Ptr < MemoryMapping > (new MemoryMapping);
}
PhysicalSectionMapping_ptr AmaltheaFactory::createPhysicalSectionMapping()
{
    return ::ecore::Ptr < PhysicalSectionMapping > (new PhysicalSectionMapping);
}
OSModel_ptr AmaltheaFactory::createOSModel()
{
    return ::ecore::Ptr < OSModel > (new OSModel);
}
OsDataConsistency_ptr AmaltheaFactory::createOsDataConsistency()
{
    return ::ecore::Ptr < OsDataConsistency > (new OsDataConsistency);
}
DataStability_ptr AmaltheaFactory::createDataStability()
{
    return ::ecore::Ptr < DataStability > (new DataStability);
}
NonAtomicDataCoherency_ptr AmaltheaFactory::createNonAtomicDataCoherency()
{
    return ::ecore::Ptr < NonAtomicDataCoherency > (new NonAtomicDataCoherency);
}
Semaphore_ptr AmaltheaFactory::createSemaphore()
{
    return ::ecore::Ptr < Semaphore > (new Semaphore);
}
TaskScheduler_ptr AmaltheaFactory::createTaskScheduler()
{
    return ::ecore::Ptr < TaskScheduler > (new TaskScheduler);
}
SchedulerAssociation_ptr AmaltheaFactory::createSchedulerAssociation()
{
    return ::ecore::Ptr < SchedulerAssociation > (new SchedulerAssociation);
}
InterruptController_ptr AmaltheaFactory::createInterruptController()
{
    return ::ecore::Ptr < InterruptController > (new InterruptController);
}
SchedulingParameters_ptr AmaltheaFactory::createSchedulingParameters()
{
    return ::ecore::Ptr < SchedulingParameters > (new SchedulingParameters);
}
ParameterExtension_ptr AmaltheaFactory::createParameterExtension()
{
    return ::ecore::Ptr < ParameterExtension > (new ParameterExtension);
}
FixedPriorityPreemptive_ptr AmaltheaFactory::createFixedPriorityPreemptive()
{
    return ::ecore::Ptr < FixedPriorityPreemptive
            > (new FixedPriorityPreemptive);
}
FixedPriorityPreemptiveWithBudgetEnforcement_ptr AmaltheaFactory::createFixedPriorityPreemptiveWithBudgetEnforcement()
{
    return ::ecore::Ptr < FixedPriorityPreemptiveWithBudgetEnforcement
            > (new FixedPriorityPreemptiveWithBudgetEnforcement);
}
OSEK_ptr AmaltheaFactory::createOSEK()
{
    return ::ecore::Ptr < OSEK > (new OSEK);
}
DeadlineMonotonic_ptr AmaltheaFactory::createDeadlineMonotonic()
{
    return ::ecore::Ptr < DeadlineMonotonic > (new DeadlineMonotonic);
}
RateMonotonic_ptr AmaltheaFactory::createRateMonotonic()
{
    return ::ecore::Ptr < RateMonotonic > (new RateMonotonic);
}
PfairPD2_ptr AmaltheaFactory::createPfairPD2()
{
    return ::ecore::Ptr < PfairPD2 > (new PfairPD2);
}
PartlyPFairPD2_ptr AmaltheaFactory::createPartlyPFairPD2()
{
    return ::ecore::Ptr < PartlyPFairPD2 > (new PartlyPFairPD2);
}
EarlyReleaseFairPD2_ptr AmaltheaFactory::createEarlyReleaseFairPD2()
{
    return ::ecore::Ptr < EarlyReleaseFairPD2 > (new EarlyReleaseFairPD2);
}
PartlyEarlyReleaseFairPD2_ptr AmaltheaFactory::createPartlyEarlyReleaseFairPD2()
{
    return ::ecore::Ptr < PartlyEarlyReleaseFairPD2
            > (new PartlyEarlyReleaseFairPD2);
}
LeastLocalRemainingExecutionTimeFirst_ptr AmaltheaFactory::createLeastLocalRemainingExecutionTimeFirst()
{
    return ::ecore::Ptr < LeastLocalRemainingExecutionTimeFirst
            > (new LeastLocalRemainingExecutionTimeFirst);
}
EarliestDeadlineFirst_ptr AmaltheaFactory::createEarliestDeadlineFirst()
{
    return ::ecore::Ptr < EarliestDeadlineFirst > (new EarliestDeadlineFirst);
}
PriorityBasedRoundRobin_ptr AmaltheaFactory::createPriorityBasedRoundRobin()
{
    return ::ecore::Ptr < PriorityBasedRoundRobin
            > (new PriorityBasedRoundRobin);
}
DeferrableServer_ptr AmaltheaFactory::createDeferrableServer()
{
    return ::ecore::Ptr < DeferrableServer > (new DeferrableServer);
}
PollingPeriodicServer_ptr AmaltheaFactory::createPollingPeriodicServer()
{
    return ::ecore::Ptr < PollingPeriodicServer > (new PollingPeriodicServer);
}
SporadicServer_ptr AmaltheaFactory::createSporadicServer()
{
    return ::ecore::Ptr < SporadicServer > (new SporadicServer);
}
ConstantBandwidthServer_ptr AmaltheaFactory::createConstantBandwidthServer()
{
    return ::ecore::Ptr < ConstantBandwidthServer
            > (new ConstantBandwidthServer);
}
ConstantBandwidthServerWithCASH_ptr AmaltheaFactory::createConstantBandwidthServerWithCASH()
{
    return ::ecore::Ptr < ConstantBandwidthServerWithCASH
            > (new ConstantBandwidthServerWithCASH);
}
Grouping_ptr AmaltheaFactory::createGrouping()
{
    return ::ecore::Ptr < Grouping > (new Grouping);
}
UserSpecificSchedulingAlgorithm_ptr AmaltheaFactory::createUserSpecificSchedulingAlgorithm()
{
    return ::ecore::Ptr < UserSpecificSchedulingAlgorithm
            > (new UserSpecificSchedulingAlgorithm);
}
PriorityBased_ptr AmaltheaFactory::createPriorityBased()
{
    return ::ecore::Ptr < PriorityBased > (new PriorityBased);
}
OperatingSystem_ptr AmaltheaFactory::createOperatingSystem()
{
    return ::ecore::Ptr < OperatingSystem > (new OperatingSystem);
}
VendorOperatingSystem_ptr AmaltheaFactory::createVendorOperatingSystem()
{
    return ::ecore::Ptr < VendorOperatingSystem > (new VendorOperatingSystem);
}
OsOverhead_ptr AmaltheaFactory::createOsOverhead()
{
    return ::ecore::Ptr < OsOverhead > (new OsOverhead);
}
OsAPIOverhead_ptr AmaltheaFactory::createOsAPIOverhead()
{
    return ::ecore::Ptr < OsAPIOverhead > (new OsAPIOverhead);
}
OsISROverhead_ptr AmaltheaFactory::createOsISROverhead()
{
    return ::ecore::Ptr < OsISROverhead > (new OsISROverhead);
}
PropertyConstraintsModel_ptr AmaltheaFactory::createPropertyConstraintsModel()
{
    return ::ecore::Ptr < PropertyConstraintsModel
            > (new PropertyConstraintsModel);
}
ProcessAllocationConstraint_ptr AmaltheaFactory::createProcessAllocationConstraint()
{
    return ::ecore::Ptr < ProcessAllocationConstraint
            > (new ProcessAllocationConstraint);
}
ProcessPrototypeAllocationConstraint_ptr AmaltheaFactory::createProcessPrototypeAllocationConstraint()
{
    return ::ecore::Ptr < ProcessPrototypeAllocationConstraint
            > (new ProcessPrototypeAllocationConstraint);
}
RunnableAllocationConstraint_ptr AmaltheaFactory::createRunnableAllocationConstraint()
{
    return ::ecore::Ptr < RunnableAllocationConstraint
            > (new RunnableAllocationConstraint);
}
AbstractElementMappingConstraint_ptr AmaltheaFactory::createAbstractElementMappingConstraint()
{
    return ::ecore::Ptr < AbstractElementMappingConstraint
            > (new AbstractElementMappingConstraint);
}
CoreClassification_ptr AmaltheaFactory::createCoreClassification()
{
    return ::ecore::Ptr < CoreClassification > (new CoreClassification);
}
MemoryClassification_ptr AmaltheaFactory::createMemoryClassification()
{
    return ::ecore::Ptr < MemoryClassification > (new MemoryClassification);
}
StimuliModel_ptr AmaltheaFactory::createStimuliModel()
{
    return ::ecore::Ptr < StimuliModel > (new StimuliModel);
}
ModeValueList_ptr AmaltheaFactory::createModeValueList()
{
    return ::ecore::Ptr < ModeValueList > (new ModeValueList);
}
ModeValueMapEntry_ptr AmaltheaFactory::createModeValueMapEntry()
{
    return ::ecore::Ptr < ModeValueMapEntry > (new ModeValueMapEntry);
}
ModeAssignment_ptr AmaltheaFactory::createModeAssignment()
{
    return ::ecore::Ptr < ModeAssignment > (new ModeAssignment);
}
ModeConditionDisjunction_ptr AmaltheaFactory::createModeConditionDisjunction()
{
    return ::ecore::Ptr < ModeConditionDisjunction
            > (new ModeConditionDisjunction);
}
ModeValueCondition_ptr AmaltheaFactory::createModeValueCondition()
{
    return ::ecore::Ptr < ModeValueCondition > (new ModeValueCondition);
}
ModeLabelCondition_ptr AmaltheaFactory::createModeLabelCondition()
{
    return ::ecore::Ptr < ModeLabelCondition > (new ModeLabelCondition);
}
ModeConditionConjunction_ptr AmaltheaFactory::createModeConditionConjunction()
{
    return ::ecore::Ptr < ModeConditionConjunction
            > (new ModeConditionConjunction);
}
PeriodicStimulus_ptr AmaltheaFactory::createPeriodicStimulus()
{
    return ::ecore::Ptr < PeriodicStimulus > (new PeriodicStimulus);
}
RelativePeriodicStimulus_ptr AmaltheaFactory::createRelativePeriodicStimulus()
{
    return ::ecore::Ptr < RelativePeriodicStimulus
            > (new RelativePeriodicStimulus);
}
VariableRateStimulus_ptr AmaltheaFactory::createVariableRateStimulus()
{
    return ::ecore::Ptr < VariableRateStimulus > (new VariableRateStimulus);
}
Scenario_ptr AmaltheaFactory::createScenario()
{
    return ::ecore::Ptr < Scenario > (new Scenario);
}
PeriodicSyntheticStimulus_ptr AmaltheaFactory::createPeriodicSyntheticStimulus()
{
    return ::ecore::Ptr < PeriodicSyntheticStimulus
            > (new PeriodicSyntheticStimulus);
}
CustomStimulus_ptr AmaltheaFactory::createCustomStimulus()
{
    return ::ecore::Ptr < CustomStimulus > (new CustomStimulus);
}
SingleStimulus_ptr AmaltheaFactory::createSingleStimulus()
{
    return ::ecore::Ptr < SingleStimulus > (new SingleStimulus);
}
InterProcessStimulus_ptr AmaltheaFactory::createInterProcessStimulus()
{
    return ::ecore::Ptr < InterProcessStimulus > (new InterProcessStimulus);
}
PeriodicBurstStimulus_ptr AmaltheaFactory::createPeriodicBurstStimulus()
{
    return ::ecore::Ptr < PeriodicBurstStimulus > (new PeriodicBurstStimulus);
}
EventStimulus_ptr AmaltheaFactory::createEventStimulus()
{
    return ::ecore::Ptr < EventStimulus > (new EventStimulus);
}
ArrivalCurveStimulus_ptr AmaltheaFactory::createArrivalCurveStimulus()
{
    return ::ecore::Ptr < ArrivalCurveStimulus > (new ArrivalCurveStimulus);
}
ArrivalCurveEntry_ptr AmaltheaFactory::createArrivalCurveEntry()
{
    return ::ecore::Ptr < ArrivalCurveEntry > (new ArrivalCurveEntry);
}
ClockFunction_ptr AmaltheaFactory::createClockFunction()
{
    return ::ecore::Ptr < ClockFunction > (new ClockFunction);
}
ClockStepList_ptr AmaltheaFactory::createClockStepList()
{
    return ::ecore::Ptr < ClockStepList > (new ClockStepList);
}
ClockStep_ptr AmaltheaFactory::createClockStep()
{
    return ::ecore::Ptr < ClockStep > (new ClockStep);
}
SWModel_ptr AmaltheaFactory::createSWModel()
{
    return ::ecore::Ptr < SWModel > (new SWModel);
}
CustomEntity_ptr AmaltheaFactory::createCustomEntity()
{
    return ::ecore::Ptr < CustomEntity > (new CustomEntity);
}
ProcessChain_ptr AmaltheaFactory::createProcessChain()
{
    return ::ecore::Ptr < ProcessChain > (new ProcessChain);
}
ActivityGraph_ptr AmaltheaFactory::createActivityGraph()
{
    return ::ecore::Ptr < ActivityGraph > (new ActivityGraph);
}
ModeSwitch_ptr AmaltheaFactory::createModeSwitch()
{
    return ::ecore::Ptr < ModeSwitch > (new ModeSwitch);
}
ModeSwitchEntry_ptr AmaltheaFactory::createModeSwitchEntry()
{
    return ::ecore::Ptr < ModeSwitchEntry > (new ModeSwitchEntry);
}
ModeSwitchDefault_ptr AmaltheaFactory::createModeSwitchDefault()
{
    return ::ecore::Ptr < ModeSwitchDefault > (new ModeSwitchDefault);
}
ProbabilitySwitch_ptr AmaltheaFactory::createProbabilitySwitch()
{
    return ::ecore::Ptr < ProbabilitySwitch > (new ProbabilitySwitch);
}
ProbabilitySwitchEntry_ptr AmaltheaFactory::createProbabilitySwitchEntry()
{
    return ::ecore::Ptr < ProbabilitySwitchEntry > (new ProbabilitySwitchEntry);
}
Counter_ptr AmaltheaFactory::createCounter()
{
    return ::ecore::Ptr < Counter > (new Counter);
}
WaitEvent_ptr AmaltheaFactory::createWaitEvent()
{
    return ::ecore::Ptr < WaitEvent > (new WaitEvent);
}
SetEvent_ptr AmaltheaFactory::createSetEvent()
{
    return ::ecore::Ptr < SetEvent > (new SetEvent);
}
ClearEvent_ptr AmaltheaFactory::createClearEvent()
{
    return ::ecore::Ptr < ClearEvent > (new ClearEvent);
}
EventMask_ptr AmaltheaFactory::createEventMask()
{
    return ::ecore::Ptr < EventMask > (new EventMask);
}
OsEvent_ptr AmaltheaFactory::createOsEvent()
{
    return ::ecore::Ptr < OsEvent > (new OsEvent);
}
InterProcessTrigger_ptr AmaltheaFactory::createInterProcessTrigger()
{
    return ::ecore::Ptr < InterProcessTrigger > (new InterProcessTrigger);
}
EnforcedMigration_ptr AmaltheaFactory::createEnforcedMigration()
{
    return ::ecore::Ptr < EnforcedMigration > (new EnforcedMigration);
}
SchedulePoint_ptr AmaltheaFactory::createSchedulePoint()
{
    return ::ecore::Ptr < SchedulePoint > (new SchedulePoint);
}
TerminateProcess_ptr AmaltheaFactory::createTerminateProcess()
{
    return ::ecore::Ptr < TerminateProcess > (new TerminateProcess);
}
Task_ptr AmaltheaFactory::createTask()
{
    return ::ecore::Ptr < Task > (new Task);
}
ISR_ptr AmaltheaFactory::createISR()
{
    return ::ecore::Ptr < ISR > (new ISR);
}
ProcessPrototype_ptr AmaltheaFactory::createProcessPrototype()
{
    return ::ecore::Ptr < ProcessPrototype > (new ProcessPrototype);
}
ChainedProcessPrototype_ptr AmaltheaFactory::createChainedProcessPrototype()
{
    return ::ecore::Ptr < ChainedProcessPrototype
            > (new ChainedProcessPrototype);
}
AccessPrecedenceSpec_ptr AmaltheaFactory::createAccessPrecedenceSpec()
{
    return ::ecore::Ptr < AccessPrecedenceSpec > (new AccessPrecedenceSpec);
}
OrderPrecedenceSpec_ptr AmaltheaFactory::createOrderPrecedenceSpec()
{
    return ::ecore::Ptr < OrderPrecedenceSpec > (new OrderPrecedenceSpec);
}
DataDependency_ptr AmaltheaFactory::createDataDependency()
{
    return ::ecore::Ptr < DataDependency > (new DataDependency);
}
RunnableParameter_ptr AmaltheaFactory::createRunnableParameter()
{
    return ::ecore::Ptr < RunnableParameter > (new RunnableParameter);
}
Runnable_ptr AmaltheaFactory::createRunnable()
{
    return ::ecore::Ptr < Runnable > (new Runnable);
}
Label_ptr AmaltheaFactory::createLabel()
{
    return ::ecore::Ptr < Label > (new Label);
}
Channel_ptr AmaltheaFactory::createChannel()
{
    return ::ecore::Ptr < Channel > (new Channel);
}
ModeLabel_ptr AmaltheaFactory::createModeLabel()
{
    return ::ecore::Ptr < ModeLabel > (new ModeLabel);
}
Section_ptr AmaltheaFactory::createSection()
{
    return ::ecore::Ptr < Section > (new Section);
}
ExecutionNeed_ptr AmaltheaFactory::createExecutionNeed()
{
    return ::ecore::Ptr < ExecutionNeed > (new ExecutionNeed);
}
NeedEntry_ptr AmaltheaFactory::createNeedEntry()
{
    return ::ecore::Ptr < NeedEntry > (new NeedEntry);
}
Ticks_ptr AmaltheaFactory::createTicks()
{
    return ::ecore::Ptr < Ticks > (new Ticks);
}
TicksEntry_ptr AmaltheaFactory::createTicksEntry()
{
    return ::ecore::Ptr < TicksEntry > (new TicksEntry);
}
ModeLabelAccess_ptr AmaltheaFactory::createModeLabelAccess()
{
    return ::ecore::Ptr < ModeLabelAccess > (new ModeLabelAccess);
}
LabelAccess_ptr AmaltheaFactory::createLabelAccess()
{
    return ::ecore::Ptr < LabelAccess > (new LabelAccess);
}
ChannelSend_ptr AmaltheaFactory::createChannelSend()
{
    return ::ecore::Ptr < ChannelSend > (new ChannelSend);
}
ChannelReceive_ptr AmaltheaFactory::createChannelReceive()
{
    return ::ecore::Ptr < ChannelReceive > (new ChannelReceive);
}
SemaphoreAccess_ptr AmaltheaFactory::createSemaphoreAccess()
{
    return ::ecore::Ptr < SemaphoreAccess > (new SemaphoreAccess);
}
SenderReceiverRead_ptr AmaltheaFactory::createSenderReceiverRead()
{
    return ::ecore::Ptr < SenderReceiverRead > (new SenderReceiverRead);
}
SenderReceiverWrite_ptr AmaltheaFactory::createSenderReceiverWrite()
{
    return ::ecore::Ptr < SenderReceiverWrite > (new SenderReceiverWrite);
}
SynchronousServerCall_ptr AmaltheaFactory::createSynchronousServerCall()
{
    return ::ecore::Ptr < SynchronousServerCall > (new SynchronousServerCall);
}
AsynchronousServerCall_ptr AmaltheaFactory::createAsynchronousServerCall()
{
    return ::ecore::Ptr < AsynchronousServerCall > (new AsynchronousServerCall);
}
GetResultServerCall_ptr AmaltheaFactory::createGetResultServerCall()
{
    return ::ecore::Ptr < GetResultServerCall > (new GetResultServerCall);
}
Group_ptr AmaltheaFactory::createGroup()
{
    return ::ecore::Ptr < Group > (new Group);
}
CallArgument_ptr AmaltheaFactory::createCallArgument()
{
    return ::ecore::Ptr < CallArgument > (new CallArgument);
}
RunnableCall_ptr AmaltheaFactory::createRunnableCall()
{
    return ::ecore::Ptr < RunnableCall > (new RunnableCall);
}
CustomEventTrigger_ptr AmaltheaFactory::createCustomEventTrigger()
{
    return ::ecore::Ptr < CustomEventTrigger > (new CustomEventTrigger);
}
Struct_ptr AmaltheaFactory::createStruct()
{
    return ::ecore::Ptr < Struct > (new Struct);
}
StructEntry_ptr AmaltheaFactory::createStructEntry()
{
    return ::ecore::Ptr < StructEntry > (new StructEntry);
}
Array_ptr AmaltheaFactory::createArray()
{
    return ::ecore::Ptr < Array > (new Array);
}
Pointer_ptr AmaltheaFactory::createPointer()
{
    return ::ecore::Ptr < Pointer > (new Pointer);
}
TypeRef_ptr AmaltheaFactory::createTypeRef()
{
    return ::ecore::Ptr < TypeRef > (new TypeRef);
}
Alias_ptr AmaltheaFactory::createAlias()
{
    return ::ecore::Ptr < Alias > (new Alias);
}
DataTypeDefinition_ptr AmaltheaFactory::createDataTypeDefinition()
{
    return ::ecore::Ptr < DataTypeDefinition > (new DataTypeDefinition);
}
BaseTypeDefinition_ptr AmaltheaFactory::createBaseTypeDefinition()
{
    return ::ecore::Ptr < BaseTypeDefinition > (new BaseTypeDefinition);
}
PeriodicActivation_ptr AmaltheaFactory::createPeriodicActivation()
{
    return ::ecore::Ptr < PeriodicActivation > (new PeriodicActivation);
}
VariableRateActivation_ptr AmaltheaFactory::createVariableRateActivation()
{
    return ::ecore::Ptr < VariableRateActivation > (new VariableRateActivation);
}
SporadicActivation_ptr AmaltheaFactory::createSporadicActivation()
{
    return ::ecore::Ptr < SporadicActivation > (new SporadicActivation);
}
SingleActivation_ptr AmaltheaFactory::createSingleActivation()
{
    return ::ecore::Ptr < SingleActivation > (new SingleActivation);
}
EventActivation_ptr AmaltheaFactory::createEventActivation()
{
    return ::ecore::Ptr < EventActivation > (new EventActivation);
}
CustomActivation_ptr AmaltheaFactory::createCustomActivation()
{
    return ::ecore::Ptr < CustomActivation > (new CustomActivation);
}
LabelAccessStatistic_ptr AmaltheaFactory::createLabelAccessStatistic()
{
    return ::ecore::Ptr < LabelAccessStatistic > (new LabelAccessStatistic);
}
RunEntityCallStatistic_ptr AmaltheaFactory::createRunEntityCallStatistic()
{
    return ::ecore::Ptr < RunEntityCallStatistic > (new RunEntityCallStatistic);
}

