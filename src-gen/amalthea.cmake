
#
# amalthea.cmake
# This file was created by EMF4CPP 2.0.0 and is copyrighted by the
# respective user and/or provider of the processed ECORE model.
#
# EMF4CPP is free software. You can obtain it from
# https://github.com/catedrasaes-umu/emf4cpp
#
#


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Wdouble-promotion -fshort-enums")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -DNDEBUG -s")
set(CMAKE_CXX_FLAGS_MINSIZEREL     "${CMAKE_CXX_FLAGS_MINSIZEREL} -Os -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -O2 -g")

include(GNUInstallDirs)

set(amalthea_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AmaltheaPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AmaltheaFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AmaltheaPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AmaltheaFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Amalthea.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AmaltheaImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CommonElements.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CommonElementsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BaseObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BaseObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferableObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferableObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferableBaseObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferableBaseObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IAnnotatable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IAnnotatableImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ITaggable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ITaggableImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/INamed.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/INamedImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IReferable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IReferableImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDisplayName.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDisplayNameImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDescription.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDescriptionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/INamespaceMember.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/INamespaceMemberImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Tag.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TagImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Namespace.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NamespaceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Classifier.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClassifierImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreClassifier.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreClassifierImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryClassifier.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryClassifierImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TransmissionPolicy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TransmissionPolicyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Quantity.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/QuantityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeComparable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeComparableImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Time.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Frequency.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Voltage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VoltageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSize.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSizeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRateComparable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRateComparableImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRate.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRateImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomProperty.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomPropertyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Value.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ListObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ListObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StringObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StringObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BigIntegerObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BigIntegerObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferenceObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferenceObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IntegerObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IntegerObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LongObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LongObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FloatObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FloatObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DoubleObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DoubleObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BooleanObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BooleanObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NumericStatistic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NumericStatisticImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MinAvgMaxStatistic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MinAvgMaxStatisticImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleValueStatistic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleValueStatisticImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ITimeDeviation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ITimeDeviationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeInterval.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeIntervalImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeConstant.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeConstantImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeHistogram.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeHistogramImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeHistogramEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeHistogramEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedTimeDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedTimeDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedTimeDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedTimeDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeBoundaries.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeBoundariesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeStatistics.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeStatisticsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeUniformDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeUniformDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeGaussDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeGaussDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeWeibullEstimatorsDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeWeibullEstimatorsDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeBetaDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeBetaDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDiscreteValueDeviation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDiscreteValueDeviationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueInterval.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueIntervalImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueConstant.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueConstantImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueHistogram.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueHistogramImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueHistogramEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueHistogramEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedDiscreteValueDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedDiscreteValueDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedDiscreteValueDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedDiscreteValueDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueBoundaries.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueBoundariesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueStatistics.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueStatisticsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueUniformDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueUniformDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueGaussDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueGaussDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueWeibullEstimatorsDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueWeibullEstimatorsDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueBetaDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueBetaDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IContinuousValueDeviation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IContinuousValueDeviationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueInterval.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueIntervalImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueConstant.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueConstantImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueHistogram.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueHistogramImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueHistogramEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueHistogramEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedContinuousValueDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedContinuousValueDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedContinuousValueDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedContinuousValueDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueBoundaries.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueBoundariesImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueStatistics.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueStatisticsImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueUniformDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueUniformDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueGaussDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueGaussDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueWeibullEstimatorsDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueWeibullEstimatorsDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueBetaDistribution.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueBetaDistributionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Mode.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NumericMode.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NumericModeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EnumMode.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EnumModeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLiteral.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentsModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentsModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IComponentContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IComponentContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IInterfaceContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IInterfaceContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentInterface.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentInterfaceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MainInterface.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MainInterfaceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SubInterface.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SubInterfaceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentPort.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentPortImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentStructure.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentStructureImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IComponentStructureMember.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IComponentStructureMemberImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Component.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Composite.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CompositeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/System.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentInstance.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentInstanceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Connector.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConnectorImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterfaceChannel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterfaceChannelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/QualifiedPort.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/QualifiedPortImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConfigModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConfigModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventConfig.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventConfigImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstraintsModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstraintsModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableSequencingConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableSequencingConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AffinityConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AffinityConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SeparationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SeparationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PairingConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PairingConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableSeparationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableSeparationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessSeparationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessSeparationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSeparationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSeparationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnablePairingConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnablePairingConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPairingConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPairingConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataPairingConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataPairingConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableConstraintTarget.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableConstraintTargetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessConstraintTarget.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessConstraintTargetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataConstraintTarget.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataConstraintTargetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetMemory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetMemoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetCore.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetCoreImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetScheduler.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetSchedulerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelGroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableGroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessGroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEntityGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEntityGroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEntityGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEntityGroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEntityGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEntityGroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TagGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TagGroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractEventChain.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractEventChainImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChain.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SubEventChain.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SubEventChainImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainItem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainItemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainReference.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainReferenceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimingConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimingConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PhysicalSectionConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PhysicalSectionConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronizationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronizationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventSynchronizationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventSynchronizationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainSynchronizationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainSynchronizationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DelayConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DelayConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainLatencyConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainLatencyConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RepetitionConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RepetitionConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAge.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeCycle.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeCycleImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeTime.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeTimeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Requirement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RequirementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessRequirement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessRequirementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableRequirement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableRequirementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArchitectureRequirement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArchitectureRequirementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChainRequirement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChainRequirementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RequirementLimit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RequirementLimitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CPUPercentageRequirementLimit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CPUPercentageRequirementLimitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyRequirementLimit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyRequirementLimitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PercentageRequirementLimit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PercentageRequirementLimitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CountRequirementLimit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CountRequirementLimitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeRequirementLimit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeRequirementLimitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataCoherencyGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataCoherencyGroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStabilityGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStabilityGroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataGroupScope.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataGroupScopeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessScope.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessScopeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableScope.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableScopeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentScope.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentScopeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Event.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventSet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventSetImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EntityEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EntityEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TriggerEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TriggerEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StimulusEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StimulusEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChainEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChainEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HWModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HWModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwStructure.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwStructureImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwModule.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwModuleImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDomain.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDomainImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyDomain.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyDomainImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PowerDomain.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PowerDomainImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessingUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessingUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Memory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Cache.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CacheImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeatureCategory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeatureCategoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeature.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeatureImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPort.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPortImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConnectionHandler.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConnectionHandlerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwConnection.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwConnectionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwAccessElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwAccessElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessingUnitDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessingUnitDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConnectionHandlerDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConnectionHandlerDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CacheDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CacheDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPath.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPathImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwAccessPath.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwAccessPathImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPathElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPathElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDestination.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDestinationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MappingModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MappingModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulerAllocation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulerAllocationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskAllocation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskAllocationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISRAllocation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISRAllocationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableAllocation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableAllocationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryMapping.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryMappingImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PhysicalSectionMapping.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PhysicalSectionMappingImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OSModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OSModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsDataConsistency.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsDataConsistencyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStability.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStabilityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NonAtomicDataCoherency.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NonAtomicDataCoherencyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Semaphore.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Scheduler.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskScheduler.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskSchedulerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulerAssociation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulerAssociationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterruptController.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterruptControllerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulingParameters.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulingParametersImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ParameterExtension.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ParameterExtensionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Algorithm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AlgorithmImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterruptSchedulingAlgorithm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterruptSchedulingAlgorithmImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskSchedulingAlgorithm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskSchedulingAlgorithmImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriority.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriorityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriorityPreemptive.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriorityPreemptiveImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriorityPreemptiveWithBudgetEnforcement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriorityPreemptiveWithBudgetEnforcementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OSEK.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OSEKImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DeadlineMonotonic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DeadlineMonotonicImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RateMonotonic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RateMonotonicImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Pfair.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PfairImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PfairPD2.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PfairPD2Impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PartlyPFairPD2.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PartlyPFairPD2Impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EarlyReleaseFairPD2.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EarlyReleaseFairPD2Impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PartlyEarlyReleaseFairPD2.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PartlyEarlyReleaseFairPD2Impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DynamicPriority.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DynamicPriorityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LeastLocalRemainingExecutionTimeFirst.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LeastLocalRemainingExecutionTimeFirstImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EarliestDeadlineFirst.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EarliestDeadlineFirstImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PriorityBasedRoundRobin.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PriorityBasedRoundRobinImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReservationBasedServer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReservationBasedServerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DeferrableServer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DeferrableServerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PollingPeriodicServer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PollingPeriodicServerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SporadicServer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SporadicServerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstantBandwidthServer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstantBandwidthServerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstantBandwidthServerWithCASH.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstantBandwidthServerWithCASHImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Grouping.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GroupingImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/UserSpecificSchedulingAlgorithm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/UserSpecificSchedulingAlgorithmImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PriorityBased.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PriorityBasedImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OperatingSystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OperatingSystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VendorOperatingSystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VendorOperatingSystemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsOverhead.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsOverheadImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsAPIOverhead.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsAPIOverheadImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsISROverhead.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsISROverheadImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PropertyConstraintsModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PropertyConstraintsModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreAllocationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreAllocationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryMappingConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryMappingConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessAllocationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessAllocationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPrototypeAllocationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPrototypeAllocationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableAllocationConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableAllocationConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractElementMappingConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractElementMappingConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Classification.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClassificationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreClassification.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreClassificationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryClassification.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryClassificationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StimuliModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StimuliModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Stimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueList.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueListImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueMapEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueMapEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeAssignment.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeAssignmentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionDisjunction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionDisjunctionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionDisjunctionEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionDisjunctionEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeCondition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueCondition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueConditionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelCondition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelConditionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionConjunction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionConjunctionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPeriodic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPeriodicImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RelativePeriodicStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RelativePeriodicStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VariableRateStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VariableRateStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Scenario.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ScenarioImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicSyntheticStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicSyntheticStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterProcessStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterProcessStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicBurstStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicBurstStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArrivalCurveStimulus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArrivalCurveStimulusImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArrivalCurveEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArrivalCurveEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Clock.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockFunction.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockFunctionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockStepList.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockStepListImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockStep.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockStepImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SWModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SWModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractMemoryElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractMemoryElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractProcess.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractProcessImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEntity.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEntityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChain.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChainImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Process.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IActivityGraphItemContainer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IActivityGraphItemContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ActivityGraph.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ActivityGraphImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ActivityGraphItem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ActivityGraphItemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitch.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitchImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitchEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitchEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitchDefault.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitchDefaultImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProbabilitySwitch.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProbabilitySwitchImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProbabilitySwitchEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProbabilitySwitchEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Counter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CounterImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WaitEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WaitEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SetEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SetEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClearEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClearEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventMask.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventMaskImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsEvent.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsEventImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterProcessTrigger.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterProcessTriggerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EnforcedMigration.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EnforcedMigrationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulePoint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulePointImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TerminateProcess.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TerminateProcessImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Task.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISR.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISRImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPrototype.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPrototypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChainedProcessPrototype.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChainedProcessPrototypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GeneralPrecedence.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GeneralPrecedenceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AccessPrecedenceSpec.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AccessPrecedenceSpecImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OrderPrecedenceSpec.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OrderPrecedenceSpecImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDependsOn.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDependsOnImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataDependency.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataDependencyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableParameter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableParameterImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Runnable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Label.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Channel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Section.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SectionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComputationItem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComputationItemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ExecutionNeed.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ExecutionNeedImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NeedEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NeedEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Ticks.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TicksImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TicksEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TicksEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelAccess.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelAccessImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccess.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelAccess.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelAccessImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelSend.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelSendImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelReceive.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelReceiveImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreAccess.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreAccessImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverCommunication.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverCommunicationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverRead.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverReadImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverWrite.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverWriteImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ServerCall.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ServerCallImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronousServerCall.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronousServerCallImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AsynchronousServerCall.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AsynchronousServerCallImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GetResultServerCall.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GetResultServerCallImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Group.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GroupImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CallArgument.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CallArgumentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableCall.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableCallImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEventTrigger.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEventTriggerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CompoundType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CompoundTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Struct.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StructImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StructEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StructEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Array.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArrayImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Pointer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PointerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TypeRef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TypeRefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Alias.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AliasImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TypeDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TypeDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataTypeDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataTypeDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BaseTypeDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BaseTypeDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Activation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ActivationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicActivation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicActivationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VariableRateActivation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VariableRateActivationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SporadicActivation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SporadicActivationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleActivation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleActivationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventActivation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventActivationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomActivation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomActivationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessStatistic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessStatisticImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunEntityCallStatistic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunEntityCallStatisticImpl.cpp
)

set(amalthea_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/amalthea.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AmaltheaPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AmaltheaFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Amalthea.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CommonElements.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BaseObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferableObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferableBaseObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IAnnotatable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ITaggable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/INamed.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IReferable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDisplayName.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDescription.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/INamespaceMember.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Tag.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Namespace.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Classifier.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreClassifier.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryClassifier.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TransmissionPolicy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Quantity.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeComparable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Time.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Frequency.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Voltage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSize.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRateComparable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRate.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomProperty.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Value.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ListObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StringObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BigIntegerObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferenceObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IntegerObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LongObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FloatObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DoubleObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BooleanObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NumericStatistic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MinAvgMaxStatistic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleValueStatistic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ITimeDeviation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeInterval.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeConstant.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeHistogram.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeHistogramEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedTimeDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedTimeDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeBoundaries.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeStatistics.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeUniformDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeGaussDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeWeibullEstimatorsDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeBetaDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDiscreteValueDeviation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueInterval.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueConstant.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueHistogram.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueHistogramEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedDiscreteValueDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedDiscreteValueDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueBoundaries.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueStatistics.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueUniformDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueGaussDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueWeibullEstimatorsDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueBetaDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IContinuousValueDeviation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueInterval.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueConstant.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueHistogram.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueHistogramEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedContinuousValueDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedContinuousValueDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueBoundaries.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueStatistics.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueUniformDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueGaussDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueWeibullEstimatorsDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueBetaDistribution.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Mode.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NumericMode.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EnumMode.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLiteral.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentsModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IComponentContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IInterfaceContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISystem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentInterface.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MainInterface.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SubInterface.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentPort.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentStructure.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IComponentStructureMember.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Component.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Composite.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/System.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentInstance.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Connector.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterfaceChannel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/QualifiedPort.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConfigModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventConfig.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstraintsModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableSequencingConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AffinityConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SeparationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PairingConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableSeparationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessSeparationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSeparationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnablePairingConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPairingConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataPairingConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableConstraintTarget.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessConstraintTarget.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataConstraintTarget.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetMemory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetCore.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetScheduler.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelGroup.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableGroup.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessGroup.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEntityGroup.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEntityGroup.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEntityGroup.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TagGroup.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractEventChain.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChain.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SubEventChain.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainItem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainReference.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimingConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PhysicalSectionConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronizationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventSynchronizationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainSynchronizationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DelayConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainLatencyConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RepetitionConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAge.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeCycle.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeTime.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Requirement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessRequirement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableRequirement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArchitectureRequirement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChainRequirement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RequirementLimit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CPUPercentageRequirementLimit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyRequirementLimit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PercentageRequirementLimit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CountRequirementLimit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeRequirementLimit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataCoherencyGroup.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStabilityGroup.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataGroupScope.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessScope.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableScope.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentScope.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Event.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventSet.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EntityEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TriggerEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StimulusEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChainEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HWModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwStructure.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwModule.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDomain.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyDomain.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PowerDomain.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessingUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Memory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Cache.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeatureCategory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeature.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPort.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConnectionHandler.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwConnection.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwAccessElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessingUnitDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConnectionHandlerDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CacheDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPath.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwAccessPath.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPathElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDestination.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MappingModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulerAllocation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskAllocation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISRAllocation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableAllocation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryMapping.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PhysicalSectionMapping.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OSModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsDataConsistency.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStability.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NonAtomicDataCoherency.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Semaphore.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Scheduler.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskScheduler.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulerAssociation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterruptController.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulingParameters.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ParameterExtension.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Algorithm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterruptSchedulingAlgorithm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskSchedulingAlgorithm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriority.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriorityPreemptive.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriorityPreemptiveWithBudgetEnforcement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OSEK.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DeadlineMonotonic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RateMonotonic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Pfair.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PfairPD2.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PartlyPFairPD2.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EarlyReleaseFairPD2.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PartlyEarlyReleaseFairPD2.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DynamicPriority.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LeastLocalRemainingExecutionTimeFirst.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EarliestDeadlineFirst.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PriorityBasedRoundRobin.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReservationBasedServer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DeferrableServer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PollingPeriodicServer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SporadicServer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstantBandwidthServer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstantBandwidthServerWithCASH.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Grouping.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/UserSpecificSchedulingAlgorithm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PriorityBased.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OperatingSystem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VendorOperatingSystem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsOverhead.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsAPIOverhead.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsISROverhead.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PropertyConstraintsModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreAllocationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryMappingConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessAllocationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPrototypeAllocationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableAllocationConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractElementMappingConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Classification.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreClassification.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryClassification.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StimuliModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Stimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueList.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueMapEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeAssignment.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionDisjunction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionDisjunctionEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeCondition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueCondition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelCondition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionConjunction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPeriodic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RelativePeriodicStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VariableRateStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Scenario.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicSyntheticStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterProcessStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicBurstStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArrivalCurveStimulus.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArrivalCurveEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Clock.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockFunction.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockStepList.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockStep.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SWModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractMemoryElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractProcess.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEntity.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChain.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Process.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IActivityGraphItemContainer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ActivityGraph.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ActivityGraphItem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitch.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitchEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitchDefault.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProbabilitySwitch.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProbabilitySwitchEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Counter.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WaitEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SetEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClearEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventMask.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsEvent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterProcessTrigger.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EnforcedMigration.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulePoint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TerminateProcess.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Task.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISR.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPrototype.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChainedProcessPrototype.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GeneralPrecedence.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AccessPrecedenceSpec.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OrderPrecedenceSpec.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDependsOn.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataDependency.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableParameter.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Runnable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Label.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Channel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Section.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComputationItem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ExecutionNeed.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NeedEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Ticks.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TicksEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelAccess.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccess.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelAccess.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelSend.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelReceive.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreAccess.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverCommunication.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverRead.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverWrite.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ServerCall.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronousServerCall.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AsynchronousServerCall.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GetResultServerCall.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Group.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CallArgument.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableCall.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEventTrigger.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CompoundType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Struct.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StructEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Array.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Pointer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TypeRef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Alias.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TypeDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataTypeDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BaseTypeDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Activation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicActivation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VariableRateActivation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SporadicActivation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleActivation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventActivation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomActivation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessStatistic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunEntityCallStatistic.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RelationalOperator.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VoltageUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSizeUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRateUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SamplingType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterfaceKind.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableOrderType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainItemType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronizationType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MappingType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LatencyType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Severity.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LimitType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeMetric.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CountMetric.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PercentageMetric.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CPUPercentageMetric.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyMetric.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoherencyDirection.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEventType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEventType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEventType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelEventType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreEventType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentEventType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StructureType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CacheType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PortType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedPolicy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WriteStrategy.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PuType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PortInterface.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeatureType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryAddressMappingType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsDataConsistencyMode.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AccessMultiplicity.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStabilityLevel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Condition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GroupingType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CurveType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WaitEventType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WaitingBehaviour.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISRCategory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AccessPrecedenceType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OrderType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DirectionType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelDataStability.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelAccessEnum.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReceiveOperation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessDataStability.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessEnum.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessImplementation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreAccessEnum.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BlockingType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Preemption.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConcurrencyType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ASILType.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AmaltheaFactory.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AmaltheaPackage.hpp DESTINATION include/emf4cpp/amalthea)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Amalthea.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CommonElements.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BaseObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferableObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferableBaseObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IAnnotatable.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ITaggable.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/INamed.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IReferable.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDisplayName.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDescription.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/INamespaceMember.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Tag.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Namespace.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Classifier.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreClassifier.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryClassifier.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TransmissionPolicy.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Quantity.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeComparable.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Time.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Frequency.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Voltage.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSize.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRateComparable.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRate.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomProperty.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Value.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ListObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StringObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BigIntegerObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReferenceObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IntegerObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LongObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FloatObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DoubleObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BooleanObject.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NumericStatistic.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MinAvgMaxStatistic.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleValueStatistic.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ITimeDeviation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeInterval.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeConstant.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeHistogram.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeHistogramEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedTimeDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedTimeDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeBoundaries.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeStatistics.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeUniformDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeGaussDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeWeibullEstimatorsDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeBetaDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDiscreteValueDeviation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueInterval.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueConstant.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueHistogram.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueHistogramEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedDiscreteValueDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedDiscreteValueDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueBoundaries.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueStatistics.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueUniformDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueGaussDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueWeibullEstimatorsDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DiscreteValueBetaDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IContinuousValueDeviation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueInterval.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueConstant.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueHistogram.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueHistogramEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BoundedContinuousValueDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TruncatedContinuousValueDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueBoundaries.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueStatistics.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueUniformDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueGaussDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueWeibullEstimatorsDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ContinuousValueBetaDistribution.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Mode.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NumericMode.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EnumMode.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLiteral.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentsModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IComponentContainer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IInterfaceContainer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISystem.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentInterface.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MainInterface.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SubInterface.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentPort.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentStructure.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IComponentStructureMember.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Component.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Composite.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/System.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentInstance.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Connector.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterfaceChannel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/QualifiedPort.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConfigModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventConfig.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstraintsModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableSequencingConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AffinityConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SeparationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PairingConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableSeparationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessSeparationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSeparationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnablePairingConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPairingConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataPairingConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableConstraintTarget.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessConstraintTarget.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataConstraintTarget.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetMemory.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetCore.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TargetScheduler.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelGroup.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableGroup.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessGroup.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEntityGroup.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEntityGroup.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEntityGroup.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TagGroup.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractEventChain.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChain.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SubEventChain.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainItem.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainReference.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainContainer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimingConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PhysicalSectionConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronizationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventSynchronizationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainSynchronizationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DelayConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainLatencyConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RepetitionConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAge.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeCycle.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataAgeTime.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Requirement.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessRequirement.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableRequirement.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArchitectureRequirement.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChainRequirement.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RequirementLimit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CPUPercentageRequirementLimit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyRequirementLimit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PercentageRequirementLimit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CountRequirementLimit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeRequirementLimit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataCoherencyGroup.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStabilityGroup.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataGroupScope.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessScope.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableScope.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentScope.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Event.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventSet.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EntityEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TriggerEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StimulusEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChainEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HWModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwStructure.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwModule.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDomain.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyDomain.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PowerDomain.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessingUnit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Memory.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Cache.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeatureCategory.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeature.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPort.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConnectionHandler.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwConnection.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwAccessElement.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDefinition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessingUnitDefinition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConnectionHandlerDefinition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryDefinition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CacheDefinition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPath.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwAccessPath.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwPathElement.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwDestination.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MappingModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulerAllocation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskAllocation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISRAllocation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableAllocation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryMapping.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PhysicalSectionMapping.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OSModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsDataConsistency.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStability.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NonAtomicDataCoherency.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Semaphore.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Scheduler.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskScheduler.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulerAssociation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterruptController.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulingParameters.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ParameterExtension.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Algorithm.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterruptSchedulingAlgorithm.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TaskSchedulingAlgorithm.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriority.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriorityPreemptive.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPriorityPreemptiveWithBudgetEnforcement.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OSEK.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DeadlineMonotonic.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RateMonotonic.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Pfair.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PfairPD2.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PartlyPFairPD2.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EarlyReleaseFairPD2.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PartlyEarlyReleaseFairPD2.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DynamicPriority.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LeastLocalRemainingExecutionTimeFirst.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EarliestDeadlineFirst.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PriorityBasedRoundRobin.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReservationBasedServer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DeferrableServer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PollingPeriodicServer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SporadicServer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstantBandwidthServer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConstantBandwidthServerWithCASH.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Grouping.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/UserSpecificSchedulingAlgorithm.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PriorityBased.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OperatingSystem.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VendorOperatingSystem.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsOverhead.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsAPIOverhead.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsISROverhead.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PropertyConstraintsModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreAllocationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryMappingConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessAllocationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPrototypeAllocationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableAllocationConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractElementMappingConstraint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Classification.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoreClassification.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryClassification.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StimuliModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Stimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueList.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueMapEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValue.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeAssignment.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionDisjunction.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionDisjunctionEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeCondition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeValueCondition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelCondition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeConditionConjunction.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FixedPeriodic.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RelativePeriodicStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VariableRateStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Scenario.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicSyntheticStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterProcessStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicBurstStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArrivalCurveStimulus.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ArrivalCurveEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Clock.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockFunction.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockStepList.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClockStep.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SWModel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractMemoryElement.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AbstractProcess.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEntity.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessChain.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Process.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IActivityGraphItemContainer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ActivityGraph.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ActivityGraphItem.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitch.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitchEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeSwitchDefault.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProbabilitySwitch.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProbabilitySwitchEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Counter.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WaitEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SetEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ClearEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventMask.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsEvent.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterProcessTrigger.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EnforcedMigration.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedulePoint.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TerminateProcess.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Task.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISR.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessPrototype.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChainedProcessPrototype.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GeneralPrecedence.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AccessPrecedenceSpec.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OrderPrecedenceSpec.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/IDependsOn.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataDependency.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableParameter.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Runnable.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Label.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Channel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Section.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComputationItem.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ExecutionNeed.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/NeedEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Ticks.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TicksEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelAccess.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccess.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelAccess.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelSend.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelReceive.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreAccess.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverCommunication.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverRead.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SenderReceiverWrite.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ServerCall.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronousServerCall.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AsynchronousServerCall.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GetResultServerCall.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Group.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CallArgument.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableCall.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomEventTrigger.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CompoundType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Struct.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StructEntry.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Array.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Pointer.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TypeRef.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Alias.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TypeDefinition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataTypeDefinition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BaseTypeDefinition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Activation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PeriodicActivation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VariableRateActivation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SporadicActivation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SingleActivation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventActivation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CustomActivation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessStatistic.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunEntityCallStatistic.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RelationalOperator.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeUnit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyUnit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/VoltageUnit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataSizeUnit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataRateUnit.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SamplingType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/InterfaceKind.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableOrderType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/EventChainItemType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SynchronizationType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MappingType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LatencyType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Severity.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LimitType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/TimeMetric.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CountMetric.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PercentageMetric.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CPUPercentageMetric.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/FrequencyMetric.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CoherencyDirection.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ProcessEventType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/RunnableEventType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelEventType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ChannelEventType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreEventType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ComponentEventType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/StructureType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CacheType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PortType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SchedPolicy.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WriteStrategy.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PuType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/PortInterface.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/HwFeatureType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/MemoryAddressMappingType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OsDataConsistencyMode.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AccessMultiplicity.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DataStabilityLevel.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Condition.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/GroupingType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/CurveType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WaitEventType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/WaitingBehaviour.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ISRCategory.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/AccessPrecedenceType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/OrderType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/DirectionType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelDataStability.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ModeLabelAccessEnum.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ReceiveOperation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessDataStability.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessEnum.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/LabelAccessImplementation.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/SemaphoreAccessEnum.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/BlockingType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/Preemption.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ConcurrencyType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/ASILType.hpp DESTINATION include/emf4cpp/amalthea)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/amalthea/dllAmalthea.hpp DESTINATION include/emf4cpp/amalthea)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
# include_directories(${CMAKE_CURRENT_SOURCE_DIR} libs/emf4cpp/include/emf4cpp libs/emf4cpp/include/emf4cpp)
# link_directories(libs/emf4cpp/lib)

add_library(${PROJECT_NAME}-amalthea SHARED ${amalthea_HEADERS} ${amalthea_SOURCES})
target_include_directories(${PROJECT_NAME}-amalthea PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include/emf4cpp>
    )

set_target_properties(${PROJECT_NAME}-amalthea PROPERTIES COMPILE_FLAGS "-DMAKE_AMALTHEA_DLL" VERSION ${PROJECT_VERSION} SOVERSION ${PROJECT_VERSION_MAJOR})
target_link_libraries(${PROJECT_NAME}-amalthea EMF4CPP::emf4cpp-ecore EMF4CPP::emf4cpp-ecorecpp)
install(TARGETS ${PROJECT_NAME}-amalthea EXPORT AMALTHEA LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

add_subdirectory(cmake)
