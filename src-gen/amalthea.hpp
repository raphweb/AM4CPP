// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef AMALTHEA_HPP
#define AMALTHEA_HPP

#include "amalthea_forward.hpp"
#include <boost/intrusive_ptr.hpp>
#include <ecorecpp/mapping_forward.hpp>

// EPackage

// EClass
#include "amalthea/Amalthea.hpp"
#include "amalthea/CommonElements.hpp"
#include "amalthea/BaseObject.hpp"
#include "amalthea/ReferableObject.hpp"
#include "amalthea/ReferableBaseObject.hpp"
#include "amalthea/IAnnotatable.hpp"
#include "amalthea/ITaggable.hpp"
#include "amalthea/INamed.hpp"
#include "amalthea/IReferable.hpp"
#include "amalthea/IDisplayName.hpp"
#include "amalthea/IDescription.hpp"
#include "amalthea/INamespaceMember.hpp"
#include "amalthea/Tag.hpp"
#include "amalthea/Namespace.hpp"
#include "amalthea/Classifier.hpp"
#include "amalthea/CoreClassifier.hpp"
#include "amalthea/MemoryClassifier.hpp"
#include "amalthea/TransmissionPolicy.hpp"
#include "amalthea/Quantity.hpp"
#include "amalthea/TimeComparable.hpp"
#include "amalthea/Time.hpp"
#include "amalthea/Frequency.hpp"
#include "amalthea/Voltage.hpp"
#include "amalthea/DataSize.hpp"
#include "amalthea/DataRateComparable.hpp"
#include "amalthea/DataRate.hpp"
#include "amalthea/CustomProperty.hpp"
#include "amalthea/Value.hpp"
#include "amalthea/ListObject.hpp"
#include "amalthea/StringObject.hpp"
#include "amalthea/BigIntegerObject.hpp"
#include "amalthea/ReferenceObject.hpp"
#include "amalthea/IntegerObject.hpp"
#include "amalthea/LongObject.hpp"
#include "amalthea/FloatObject.hpp"
#include "amalthea/DoubleObject.hpp"
#include "amalthea/BooleanObject.hpp"
#include "amalthea/NumericStatistic.hpp"
#include "amalthea/MinAvgMaxStatistic.hpp"
#include "amalthea/SingleValueStatistic.hpp"
#include "amalthea/ITimeDeviation.hpp"
#include "amalthea/TimeInterval.hpp"
#include "amalthea/TimeConstant.hpp"
#include "amalthea/TimeHistogram.hpp"
#include "amalthea/TimeHistogramEntry.hpp"
#include "amalthea/BoundedTimeDistribution.hpp"
#include "amalthea/TruncatedTimeDistribution.hpp"
#include "amalthea/TimeBoundaries.hpp"
#include "amalthea/TimeStatistics.hpp"
#include "amalthea/TimeUniformDistribution.hpp"
#include "amalthea/TimeGaussDistribution.hpp"
#include "amalthea/TimeWeibullEstimatorsDistribution.hpp"
#include "amalthea/TimeBetaDistribution.hpp"
#include "amalthea/IDiscreteValueDeviation.hpp"
#include "amalthea/DiscreteValueInterval.hpp"
#include "amalthea/DiscreteValueConstant.hpp"
#include "amalthea/DiscreteValueHistogram.hpp"
#include "amalthea/DiscreteValueHistogramEntry.hpp"
#include "amalthea/BoundedDiscreteValueDistribution.hpp"
#include "amalthea/TruncatedDiscreteValueDistribution.hpp"
#include "amalthea/DiscreteValueBoundaries.hpp"
#include "amalthea/DiscreteValueStatistics.hpp"
#include "amalthea/DiscreteValueUniformDistribution.hpp"
#include "amalthea/DiscreteValueGaussDistribution.hpp"
#include "amalthea/DiscreteValueWeibullEstimatorsDistribution.hpp"
#include "amalthea/DiscreteValueBetaDistribution.hpp"
#include "amalthea/IContinuousValueDeviation.hpp"
#include "amalthea/ContinuousValueInterval.hpp"
#include "amalthea/ContinuousValueConstant.hpp"
#include "amalthea/ContinuousValueHistogram.hpp"
#include "amalthea/ContinuousValueHistogramEntry.hpp"
#include "amalthea/BoundedContinuousValueDistribution.hpp"
#include "amalthea/TruncatedContinuousValueDistribution.hpp"
#include "amalthea/ContinuousValueBoundaries.hpp"
#include "amalthea/ContinuousValueStatistics.hpp"
#include "amalthea/ContinuousValueUniformDistribution.hpp"
#include "amalthea/ContinuousValueGaussDistribution.hpp"
#include "amalthea/ContinuousValueWeibullEstimatorsDistribution.hpp"
#include "amalthea/ContinuousValueBetaDistribution.hpp"
#include "amalthea/Mode.hpp"
#include "amalthea/NumericMode.hpp"
#include "amalthea/EnumMode.hpp"
#include "amalthea/ModeLiteral.hpp"
#include "amalthea/ComponentsModel.hpp"
#include "amalthea/IComponentContainer.hpp"
#include "amalthea/IInterfaceContainer.hpp"
#include "amalthea/ISystem.hpp"
#include "amalthea/ComponentInterface.hpp"
#include "amalthea/MainInterface.hpp"
#include "amalthea/SubInterface.hpp"
#include "amalthea/ComponentPort.hpp"
#include "amalthea/ComponentStructure.hpp"
#include "amalthea/IComponentStructureMember.hpp"
#include "amalthea/Component.hpp"
#include "amalthea/Composite.hpp"
#include "amalthea/System.hpp"
#include "amalthea/ComponentInstance.hpp"
#include "amalthea/Connector.hpp"
#include "amalthea/InterfaceChannel.hpp"
#include "amalthea/QualifiedPort.hpp"
#include "amalthea/ConfigModel.hpp"
#include "amalthea/EventConfig.hpp"
#include "amalthea/ConstraintsModel.hpp"
#include "amalthea/RunnableSequencingConstraint.hpp"
#include "amalthea/AffinityConstraint.hpp"
#include "amalthea/SeparationConstraint.hpp"
#include "amalthea/PairingConstraint.hpp"
#include "amalthea/ProcessConstraint.hpp"
#include "amalthea/RunnableConstraint.hpp"
#include "amalthea/DataConstraint.hpp"
#include "amalthea/RunnableSeparationConstraint.hpp"
#include "amalthea/ProcessSeparationConstraint.hpp"
#include "amalthea/DataSeparationConstraint.hpp"
#include "amalthea/RunnablePairingConstraint.hpp"
#include "amalthea/ProcessPairingConstraint.hpp"
#include "amalthea/DataPairingConstraint.hpp"
#include "amalthea/RunnableConstraintTarget.hpp"
#include "amalthea/ProcessConstraintTarget.hpp"
#include "amalthea/DataConstraintTarget.hpp"
#include "amalthea/TargetMemory.hpp"
#include "amalthea/TargetCore.hpp"
#include "amalthea/TargetScheduler.hpp"
#include "amalthea/LabelGroup.hpp"
#include "amalthea/RunnableGroup.hpp"
#include "amalthea/ProcessGroup.hpp"
#include "amalthea/LabelEntityGroup.hpp"
#include "amalthea/RunnableEntityGroup.hpp"
#include "amalthea/ProcessEntityGroup.hpp"
#include "amalthea/TagGroup.hpp"
#include "amalthea/AbstractEventChain.hpp"
#include "amalthea/EventChain.hpp"
#include "amalthea/SubEventChain.hpp"
#include "amalthea/EventChainItem.hpp"
#include "amalthea/EventChainReference.hpp"
#include "amalthea/EventChainContainer.hpp"
#include "amalthea/TimingConstraint.hpp"
#include "amalthea/PhysicalSectionConstraint.hpp"
#include "amalthea/SynchronizationConstraint.hpp"
#include "amalthea/EventSynchronizationConstraint.hpp"
#include "amalthea/EventChainSynchronizationConstraint.hpp"
#include "amalthea/DelayConstraint.hpp"
#include "amalthea/EventChainLatencyConstraint.hpp"
#include "amalthea/RepetitionConstraint.hpp"
#include "amalthea/DataAgeConstraint.hpp"
#include "amalthea/DataAge.hpp"
#include "amalthea/DataAgeCycle.hpp"
#include "amalthea/DataAgeTime.hpp"
#include "amalthea/Requirement.hpp"
#include "amalthea/ProcessRequirement.hpp"
#include "amalthea/RunnableRequirement.hpp"
#include "amalthea/ArchitectureRequirement.hpp"
#include "amalthea/ProcessChainRequirement.hpp"
#include "amalthea/RequirementLimit.hpp"
#include "amalthea/CPUPercentageRequirementLimit.hpp"
#include "amalthea/FrequencyRequirementLimit.hpp"
#include "amalthea/PercentageRequirementLimit.hpp"
#include "amalthea/CountRequirementLimit.hpp"
#include "amalthea/TimeRequirementLimit.hpp"
#include "amalthea/DataCoherencyGroup.hpp"
#include "amalthea/DataStabilityGroup.hpp"
#include "amalthea/DataGroupScope.hpp"
#include "amalthea/ProcessScope.hpp"
#include "amalthea/RunnableScope.hpp"
#include "amalthea/ComponentScope.hpp"
#include "amalthea/EventModel.hpp"
#include "amalthea/Event.hpp"
#include "amalthea/EventSet.hpp"
#include "amalthea/EntityEvent.hpp"
#include "amalthea/TriggerEvent.hpp"
#include "amalthea/CustomEvent.hpp"
#include "amalthea/StimulusEvent.hpp"
#include "amalthea/ProcessEvent.hpp"
#include "amalthea/ProcessChainEvent.hpp"
#include "amalthea/RunnableEvent.hpp"
#include "amalthea/LabelEvent.hpp"
#include "amalthea/ChannelEvent.hpp"
#include "amalthea/SemaphoreEvent.hpp"
#include "amalthea/ComponentEvent.hpp"
#include "amalthea/HWModel.hpp"
#include "amalthea/HwStructure.hpp"
#include "amalthea/HwModule.hpp"
#include "amalthea/HwDomain.hpp"
#include "amalthea/FrequencyDomain.hpp"
#include "amalthea/PowerDomain.hpp"
#include "amalthea/ProcessingUnit.hpp"
#include "amalthea/Memory.hpp"
#include "amalthea/Cache.hpp"
#include "amalthea/HwFeatureCategory.hpp"
#include "amalthea/HwFeature.hpp"
#include "amalthea/HwPort.hpp"
#include "amalthea/ConnectionHandler.hpp"
#include "amalthea/HwConnection.hpp"
#include "amalthea/HwAccessElement.hpp"
#include "amalthea/HwDefinition.hpp"
#include "amalthea/ProcessingUnitDefinition.hpp"
#include "amalthea/ConnectionHandlerDefinition.hpp"
#include "amalthea/MemoryDefinition.hpp"
#include "amalthea/CacheDefinition.hpp"
#include "amalthea/HwPath.hpp"
#include "amalthea/HwAccessPath.hpp"
#include "amalthea/HwPathElement.hpp"
#include "amalthea/HwDestination.hpp"
#include "amalthea/MappingModel.hpp"
#include "amalthea/SchedulerAllocation.hpp"
#include "amalthea/TaskAllocation.hpp"
#include "amalthea/ISRAllocation.hpp"
#include "amalthea/RunnableAllocation.hpp"
#include "amalthea/MemoryMapping.hpp"
#include "amalthea/PhysicalSectionMapping.hpp"
#include "amalthea/OSModel.hpp"
#include "amalthea/OsDataConsistency.hpp"
#include "amalthea/DataStability.hpp"
#include "amalthea/NonAtomicDataCoherency.hpp"
#include "amalthea/Semaphore.hpp"
#include "amalthea/Scheduler.hpp"
#include "amalthea/TaskScheduler.hpp"
#include "amalthea/SchedulerAssociation.hpp"
#include "amalthea/InterruptController.hpp"
#include "amalthea/SchedulingParameters.hpp"
#include "amalthea/ParameterExtension.hpp"
#include "amalthea/Algorithm.hpp"
#include "amalthea/InterruptSchedulingAlgorithm.hpp"
#include "amalthea/TaskSchedulingAlgorithm.hpp"
#include "amalthea/FixedPriority.hpp"
#include "amalthea/FixedPriorityPreemptive.hpp"
#include "amalthea/FixedPriorityPreemptiveWithBudgetEnforcement.hpp"
#include "amalthea/OSEK.hpp"
#include "amalthea/DeadlineMonotonic.hpp"
#include "amalthea/RateMonotonic.hpp"
#include "amalthea/Pfair.hpp"
#include "amalthea/PfairPD2.hpp"
#include "amalthea/PartlyPFairPD2.hpp"
#include "amalthea/EarlyReleaseFairPD2.hpp"
#include "amalthea/PartlyEarlyReleaseFairPD2.hpp"
#include "amalthea/DynamicPriority.hpp"
#include "amalthea/LeastLocalRemainingExecutionTimeFirst.hpp"
#include "amalthea/EarliestDeadlineFirst.hpp"
#include "amalthea/PriorityBasedRoundRobin.hpp"
#include "amalthea/ReservationBasedServer.hpp"
#include "amalthea/DeferrableServer.hpp"
#include "amalthea/PollingPeriodicServer.hpp"
#include "amalthea/SporadicServer.hpp"
#include "amalthea/ConstantBandwidthServer.hpp"
#include "amalthea/ConstantBandwidthServerWithCASH.hpp"
#include "amalthea/Grouping.hpp"
#include "amalthea/UserSpecificSchedulingAlgorithm.hpp"
#include "amalthea/PriorityBased.hpp"
#include "amalthea/OperatingSystem.hpp"
#include "amalthea/VendorOperatingSystem.hpp"
#include "amalthea/OsOverhead.hpp"
#include "amalthea/OsAPIOverhead.hpp"
#include "amalthea/OsISROverhead.hpp"
#include "amalthea/PropertyConstraintsModel.hpp"
#include "amalthea/CoreAllocationConstraint.hpp"
#include "amalthea/MemoryMappingConstraint.hpp"
#include "amalthea/ProcessAllocationConstraint.hpp"
#include "amalthea/ProcessPrototypeAllocationConstraint.hpp"
#include "amalthea/RunnableAllocationConstraint.hpp"
#include "amalthea/AbstractElementMappingConstraint.hpp"
#include "amalthea/Classification.hpp"
#include "amalthea/CoreClassification.hpp"
#include "amalthea/MemoryClassification.hpp"
#include "amalthea/StimuliModel.hpp"
#include "amalthea/Stimulus.hpp"
#include "amalthea/ModeValueList.hpp"
#include "amalthea/ModeValueMapEntry.hpp"
#include "amalthea/ModeValue.hpp"
#include "amalthea/ModeAssignment.hpp"
#include "amalthea/ModeConditionDisjunction.hpp"
#include "amalthea/ModeConditionDisjunctionEntry.hpp"
#include "amalthea/ModeCondition.hpp"
#include "amalthea/ModeValueCondition.hpp"
#include "amalthea/ModeLabelCondition.hpp"
#include "amalthea/ModeConditionConjunction.hpp"
#include "amalthea/FixedPeriodic.hpp"
#include "amalthea/PeriodicStimulus.hpp"
#include "amalthea/RelativePeriodicStimulus.hpp"
#include "amalthea/VariableRateStimulus.hpp"
#include "amalthea/Scenario.hpp"
#include "amalthea/PeriodicSyntheticStimulus.hpp"
#include "amalthea/CustomStimulus.hpp"
#include "amalthea/SingleStimulus.hpp"
#include "amalthea/InterProcessStimulus.hpp"
#include "amalthea/PeriodicBurstStimulus.hpp"
#include "amalthea/EventStimulus.hpp"
#include "amalthea/ArrivalCurveStimulus.hpp"
#include "amalthea/ArrivalCurveEntry.hpp"
#include "amalthea/Clock.hpp"
#include "amalthea/ClockFunction.hpp"
#include "amalthea/ClockStepList.hpp"
#include "amalthea/ClockStep.hpp"
#include "amalthea/SWModel.hpp"
#include "amalthea/AbstractMemoryElement.hpp"
#include "amalthea/AbstractProcess.hpp"
#include "amalthea/CustomEntity.hpp"
#include "amalthea/ProcessChain.hpp"
#include "amalthea/Process.hpp"
#include "amalthea/IActivityGraphItemContainer.hpp"
#include "amalthea/ActivityGraph.hpp"
#include "amalthea/ActivityGraphItem.hpp"
#include "amalthea/ModeSwitch.hpp"
#include "amalthea/ModeSwitchEntry.hpp"
#include "amalthea/ModeSwitchDefault.hpp"
#include "amalthea/ProbabilitySwitch.hpp"
#include "amalthea/ProbabilitySwitchEntry.hpp"
#include "amalthea/Counter.hpp"
#include "amalthea/WaitEvent.hpp"
#include "amalthea/SetEvent.hpp"
#include "amalthea/ClearEvent.hpp"
#include "amalthea/EventMask.hpp"
#include "amalthea/OsEvent.hpp"
#include "amalthea/InterProcessTrigger.hpp"
#include "amalthea/EnforcedMigration.hpp"
#include "amalthea/SchedulePoint.hpp"
#include "amalthea/TerminateProcess.hpp"
#include "amalthea/Task.hpp"
#include "amalthea/ISR.hpp"
#include "amalthea/ProcessPrototype.hpp"
#include "amalthea/ChainedProcessPrototype.hpp"
#include "amalthea/GeneralPrecedence.hpp"
#include "amalthea/AccessPrecedenceSpec.hpp"
#include "amalthea/OrderPrecedenceSpec.hpp"
#include "amalthea/IDependsOn.hpp"
#include "amalthea/DataDependency.hpp"
#include "amalthea/RunnableParameter.hpp"
#include "amalthea/Runnable.hpp"
#include "amalthea/Label.hpp"
#include "amalthea/Channel.hpp"
#include "amalthea/ModeLabel.hpp"
#include "amalthea/Section.hpp"
#include "amalthea/ComputationItem.hpp"
#include "amalthea/ExecutionNeed.hpp"
#include "amalthea/NeedEntry.hpp"
#include "amalthea/Ticks.hpp"
#include "amalthea/TicksEntry.hpp"
#include "amalthea/ModeLabelAccess.hpp"
#include "amalthea/LabelAccess.hpp"
#include "amalthea/ChannelAccess.hpp"
#include "amalthea/ChannelSend.hpp"
#include "amalthea/ChannelReceive.hpp"
#include "amalthea/SemaphoreAccess.hpp"
#include "amalthea/SenderReceiverCommunication.hpp"
#include "amalthea/SenderReceiverRead.hpp"
#include "amalthea/SenderReceiverWrite.hpp"
#include "amalthea/ServerCall.hpp"
#include "amalthea/SynchronousServerCall.hpp"
#include "amalthea/AsynchronousServerCall.hpp"
#include "amalthea/GetResultServerCall.hpp"
#include "amalthea/Group.hpp"
#include "amalthea/CallArgument.hpp"
#include "amalthea/RunnableCall.hpp"
#include "amalthea/CustomEventTrigger.hpp"
#include "amalthea/DataType.hpp"
#include "amalthea/CompoundType.hpp"
#include "amalthea/Struct.hpp"
#include "amalthea/StructEntry.hpp"
#include "amalthea/Array.hpp"
#include "amalthea/Pointer.hpp"
#include "amalthea/TypeRef.hpp"
#include "amalthea/Alias.hpp"
#include "amalthea/TypeDefinition.hpp"
#include "amalthea/DataTypeDefinition.hpp"
#include "amalthea/BaseTypeDefinition.hpp"
#include "amalthea/Activation.hpp"
#include "amalthea/PeriodicActivation.hpp"
#include "amalthea/VariableRateActivation.hpp"
#include "amalthea/SporadicActivation.hpp"
#include "amalthea/SingleActivation.hpp"
#include "amalthea/EventActivation.hpp"
#include "amalthea/CustomActivation.hpp"
#include "amalthea/LabelAccessStatistic.hpp"
#include "amalthea/RunEntityCallStatistic.hpp"

// EEnum
#include "amalthea/RelationalOperator.hpp"
#include "amalthea/TimeUnit.hpp"
#include "amalthea/FrequencyUnit.hpp"
#include "amalthea/VoltageUnit.hpp"
#include "amalthea/DataSizeUnit.hpp"
#include "amalthea/DataRateUnit.hpp"
#include "amalthea/SamplingType.hpp"
#include "amalthea/InterfaceKind.hpp"
#include "amalthea/RunnableOrderType.hpp"
#include "amalthea/EventChainItemType.hpp"
#include "amalthea/SynchronizationType.hpp"
#include "amalthea/MappingType.hpp"
#include "amalthea/LatencyType.hpp"
#include "amalthea/Severity.hpp"
#include "amalthea/LimitType.hpp"
#include "amalthea/TimeMetric.hpp"
#include "amalthea/CountMetric.hpp"
#include "amalthea/PercentageMetric.hpp"
#include "amalthea/CPUPercentageMetric.hpp"
#include "amalthea/FrequencyMetric.hpp"
#include "amalthea/CoherencyDirection.hpp"
#include "amalthea/ProcessEventType.hpp"
#include "amalthea/RunnableEventType.hpp"
#include "amalthea/LabelEventType.hpp"
#include "amalthea/ChannelEventType.hpp"
#include "amalthea/SemaphoreEventType.hpp"
#include "amalthea/ComponentEventType.hpp"
#include "amalthea/MemoryType.hpp"
#include "amalthea/StructureType.hpp"
#include "amalthea/CacheType.hpp"
#include "amalthea/PortType.hpp"
#include "amalthea/SchedPolicy.hpp"
#include "amalthea/WriteStrategy.hpp"
#include "amalthea/PuType.hpp"
#include "amalthea/PortInterface.hpp"
#include "amalthea/HwFeatureType.hpp"
#include "amalthea/MemoryAddressMappingType.hpp"
#include "amalthea/OsDataConsistencyMode.hpp"
#include "amalthea/AccessMultiplicity.hpp"
#include "amalthea/DataStabilityLevel.hpp"
#include "amalthea/SemaphoreType.hpp"
#include "amalthea/Condition.hpp"
#include "amalthea/GroupingType.hpp"
#include "amalthea/CurveType.hpp"
#include "amalthea/WaitEventType.hpp"
#include "amalthea/WaitingBehaviour.hpp"
#include "amalthea/ISRCategory.hpp"
#include "amalthea/AccessPrecedenceType.hpp"
#include "amalthea/OrderType.hpp"
#include "amalthea/DirectionType.hpp"
#include "amalthea/LabelDataStability.hpp"
#include "amalthea/ModeLabelAccessEnum.hpp"
#include "amalthea/ReceiveOperation.hpp"
#include "amalthea/LabelAccessDataStability.hpp"
#include "amalthea/LabelAccessEnum.hpp"
#include "amalthea/LabelAccessImplementation.hpp"
#include "amalthea/SemaphoreAccessEnum.hpp"
#include "amalthea/BlockingType.hpp"
#include "amalthea/Preemption.hpp"
#include "amalthea/ConcurrencyType.hpp"
#include "amalthea/ASILType.hpp"

// Package & Factory
#include "amalthea/AmaltheaPackage.hpp"
#include "amalthea/AmaltheaFactory.hpp"

#endif // AMALTHEA_HPP