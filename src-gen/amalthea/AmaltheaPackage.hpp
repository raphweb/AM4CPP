// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * amalthea/AmaltheaPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _AMALTHEAPACKAGE_HPP
#define _AMALTHEAPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <amalthea_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <amalthea/dllAmalthea.hpp>

namespace amalthea
{

class EXPORT_AMALTHEA_DLL AmaltheaPackage : public virtual ::ecore::EPackage
{
public:

    static AmaltheaPackage_ptr _instance();
    static AmaltheaPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int ABSTRACTELEMENTMAPPINGCONSTRAINT = 0;

    static const int ABSTRACTEVENTCHAIN = 1;

    static const int ABSTRACTMEMORYELEMENT = 2;

    static const int ABSTRACTPROCESS = 3;

    static const int ACCESSMULTIPLICITY = 4;

    static const int ACCESSPRECEDENCESPEC = 5;

    static const int ACCESSPRECEDENCETYPE = 6;

    static const int ACTIVATION = 7;

    static const int ACTIVITYGRAPH = 8;

    static const int ACTIVITYGRAPHITEM = 9;

    static const int ADDRESS = 10;

    static const int AFFINITYCONSTRAINT = 11;

    static const int ALGORITHM = 12;

    static const int ALIAS = 13;

    static const int AMALTHEA = 14;

    static const int ARCHITECTUREREQUIREMENT = 15;

    static const int ARRAY = 16;

    static const int ARRIVALCURVEENTRY = 17;

    static const int ARRIVALCURVESTIMULUS = 18;

    static const int ASILTYPE = 19;

    static const int ASYNCHRONOUSSERVERCALL = 20;

    static const int BASEOBJECT = 21;

    static const int BASETYPEDEFINITION = 22;

    static const int BIGINTEGEROBJECT = 23;

    static const int BLOCKINGTYPE = 24;

    static const int BOOLEANOBJECT = 25;

    static const int BOUNDEDCONTINUOUSVALUEDISTRIBUTION = 26;

    static const int BOUNDEDDISCRETEVALUEDISTRIBUTION = 27;

    static const int BOUNDEDTIMEDISTRIBUTION = 28;

    static const int CACHE = 29;

    static const int CACHEDEFINITION = 30;

    static const int CACHETYPE = 31;

    static const int CALLARGUMENT = 32;

    static const int CHAINEDPROCESSPROTOTYPE = 33;

    static const int CHANNEL = 34;

    static const int CHANNELACCESS = 35;

    static const int CHANNELEVENT = 36;

    static const int CHANNELEVENTTYPE = 37;

    static const int CHANNELRECEIVE = 38;

    static const int CHANNELSEND = 39;

    static const int CLASSIFICATION = 40;

    static const int CLASSIFIER = 41;

    static const int CLEAREVENT = 42;

    static const int CLOCK = 43;

    static const int CLOCKFUNCTION = 44;

    static const int CLOCKSTEP = 45;

    static const int CLOCKSTEPLIST = 46;

    static const int COHERENCYDIRECTION = 47;

    static const int COMMONELEMENTS = 48;

    static const int COMPONENT = 49;

    static const int COMPONENTEVENT = 50;

    static const int COMPONENTEVENTTYPE = 51;

    static const int COMPONENTINSTANCE = 52;

    static const int COMPONENTINTERFACE = 53;

    static const int COMPONENTPORT = 54;

    static const int COMPONENTSCOPE = 55;

    static const int COMPONENTSMODEL = 56;

    static const int COMPONENTSTRUCTURE = 57;

    static const int COMPOSITE = 58;

    static const int COMPOUNDTYPE = 59;

    static const int COMPUTATIONITEM = 60;

    static const int CONCURRENCYTYPE = 61;

    static const int CONDITION = 62;

    static const int CONFIGMODEL = 63;

    static const int CONNECTIONHANDLER = 64;

    static const int CONNECTIONHANDLERDEFINITION = 65;

    static const int CONNECTOR = 66;

    static const int CONSTANTBANDWIDTHSERVER = 67;

    static const int CONSTANTBANDWIDTHSERVERWITHCASH = 68;

    static const int CONSTRAINTSMODEL = 69;

    static const int CONTINUOUSVALUEBETADISTRIBUTION = 70;

    static const int CONTINUOUSVALUEBOUNDARIES = 71;

    static const int CONTINUOUSVALUECONSTANT = 72;

    static const int CONTINUOUSVALUEGAUSSDISTRIBUTION = 73;

    static const int CONTINUOUSVALUEHISTOGRAM = 74;

    static const int CONTINUOUSVALUEHISTOGRAMENTRY = 75;

    static const int CONTINUOUSVALUEINTERVAL = 76;

    static const int CONTINUOUSVALUESTATISTICS = 77;

    static const int CONTINUOUSVALUEUNIFORMDISTRIBUTION = 78;

    static const int CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION = 79;

    static const int COREALLOCATIONCONSTRAINT = 80;

    static const int CORECLASSIFICATION = 81;

    static const int CORECLASSIFIER = 82;

    static const int COUNTER = 83;

    static const int COUNTMETRIC = 84;

    static const int COUNTREQUIREMENTLIMIT = 85;

    static const int CPUPERCENTAGEMETRIC = 86;

    static const int CPUPERCENTAGEREQUIREMENTLIMIT = 87;

    static const int CURVETYPE = 88;

    static const int CUSTOMACTIVATION = 89;

    static const int CUSTOMENTITY = 90;

    static const int CUSTOMEVENT = 91;

    static const int CUSTOMEVENTTRIGGER = 92;

    static const int CUSTOMPROPERTY = 93;

    static const int CUSTOMSTIMULUS = 94;

    static const int DATAAGE = 95;

    static const int DATAAGECONSTRAINT = 96;

    static const int DATAAGECYCLE = 97;

    static const int DATAAGETIME = 98;

    static const int DATACOHERENCYGROUP = 99;

    static const int DATACONSTRAINT = 100;

    static const int DATACONSTRAINTTARGET = 101;

    static const int DATADEPENDENCY = 102;

    static const int DATAGROUPSCOPE = 103;

    static const int DATAPAIRINGCONSTRAINT = 104;

    static const int DATARATE = 105;

    static const int DATARATECOMPARABLE = 106;

    static const int DATARATEUNIT = 107;

    static const int DATASEPARATIONCONSTRAINT = 108;

    static const int DATASIZE = 109;

    static const int DATASIZEUNIT = 110;

    static const int DATASTABILITY = 111;

    static const int DATASTABILITYGROUP = 112;

    static const int DATASTABILITYLEVEL = 113;

    static const int DATATYPE = 114;

    static const int DATATYPEDEFINITION = 115;

    static const int DEADLINEMONOTONIC = 116;

    static const int DEFERRABLESERVER = 117;

    static const int DELAYCONSTRAINT = 118;

    static const int DIRECTIONTYPE = 119;

    static const int DISCRETEVALUEBETADISTRIBUTION = 120;

    static const int DISCRETEVALUEBOUNDARIES = 121;

    static const int DISCRETEVALUECONSTANT = 122;

    static const int DISCRETEVALUEGAUSSDISTRIBUTION = 123;

    static const int DISCRETEVALUEHISTOGRAM = 124;

    static const int DISCRETEVALUEHISTOGRAMENTRY = 125;

    static const int DISCRETEVALUEINTERVAL = 126;

    static const int DISCRETEVALUESTATISTICS = 127;

    static const int DISCRETEVALUEUNIFORMDISTRIBUTION = 128;

    static const int DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION = 129;

    static const int DOUBLEOBJECT = 130;

    static const int DYNAMICPRIORITY = 131;

    static const int EARLIESTDEADLINEFIRST = 132;

    static const int EARLYRELEASEFAIRPD2 = 133;

    static const int ENFORCEDMIGRATION = 134;

    static const int ENTITYEVENT = 135;

    static const int ENUMMODE = 136;

    static const int EVENT = 137;

    static const int EVENTACTIVATION = 138;

    static const int EVENTCHAIN = 139;

    static const int EVENTCHAINCONTAINER = 140;

    static const int EVENTCHAINITEM = 141;

    static const int EVENTCHAINITEMTYPE = 142;

    static const int EVENTCHAINLATENCYCONSTRAINT = 143;

    static const int EVENTCHAINREFERENCE = 144;

    static const int EVENTCHAINSYNCHRONIZATIONCONSTRAINT = 145;

    static const int EVENTCONFIG = 146;

    static const int EVENTMASK = 147;

    static const int EVENTMODEL = 148;

    static const int EVENTSET = 149;

    static const int EVENTSTIMULUS = 150;

    static const int EVENTSYNCHRONIZATIONCONSTRAINT = 151;

    static const int EXECUTIONNEED = 152;

    static const int FIXEDPERIODIC = 153;

    static const int FIXEDPRIORITY = 154;

    static const int FIXEDPRIORITYPREEMPTIVE = 155;

    static const int FIXEDPRIORITYPREEMPTIVEWITHBUDGETENFORCEMENT = 156;

    static const int FLOATOBJECT = 157;

    static const int FREQUENCY = 158;

    static const int FREQUENCYDOMAIN = 159;

    static const int FREQUENCYMETRIC = 160;

    static const int FREQUENCYREQUIREMENTLIMIT = 161;

    static const int FREQUENCYUNIT = 162;

    static const int GENERALPRECEDENCE = 163;

    static const int GETRESULTSERVERCALL = 164;

    static const int GROUP = 165;

    static const int GROUPING = 166;

    static const int GROUPINGTYPE = 167;

    static const int HWACCESSELEMENT = 168;

    static const int HWACCESSPATH = 169;

    static const int HWCONNECTION = 170;

    static const int HWDEFINITION = 171;

    static const int HWDESTINATION = 172;

    static const int HWDOMAIN = 173;

    static const int HWFEATURE = 174;

    static const int HWFEATURECATEGORY = 175;

    static const int HWFEATURETYPE = 176;

    static const int HWMODEL = 177;

    static const int HWMODULE = 178;

    static const int HWPATH = 179;

    static const int HWPATHELEMENT = 180;

    static const int HWPORT = 181;

    static const int HWSTRUCTURE = 182;

    static const int IACTIVITYGRAPHITEMCONTAINER = 183;

    static const int IANNOTATABLE = 184;

    static const int ICOMPONENTCONTAINER = 185;

    static const int ICOMPONENTSTRUCTUREMEMBER = 186;

    static const int ICONTINUOUSVALUEDEVIATION = 187;

    static const int IDEPENDSON = 188;

    static const int IDESCRIPTION = 189;

    static const int IDISCRETEVALUEDEVIATION = 190;

    static const int IDISPLAYNAME = 191;

    static const int IINTERFACECONTAINER = 192;

    static const int INAMED = 193;

    static const int INAMESPACEMEMBER = 194;

    static const int INTEGEROBJECT = 195;

    static const int INTERFACECHANNEL = 196;

    static const int INTERFACEKIND = 197;

    static const int INTERPROCESSSTIMULUS = 198;

    static const int INTERPROCESSTRIGGER = 199;

    static const int INTERRUPTCONTROLLER = 200;

    static const int INTERRUPTSCHEDULINGALGORITHM = 201;

    static const int IREFERABLE = 202;

    static const int ISR = 203;

    static const int ISRALLOCATION = 204;

    static const int ISRCATEGORY = 205;

    static const int ISYSTEM = 206;

    static const int ITAGGABLE = 207;

    static const int ITIMEDEVIATION = 208;

    static const int LABEL = 209;

    static const int LABELACCESS = 210;

    static const int LABELACCESSDATASTABILITY = 211;

    static const int LABELACCESSENUM = 212;

    static const int LABELACCESSIMPLEMENTATION = 213;

    static const int LABELACCESSSTATISTIC = 214;

    static const int LABELDATASTABILITY = 215;

    static const int LABELENTITYGROUP = 216;

    static const int LABELEVENT = 217;

    static const int LABELEVENTTYPE = 218;

    static const int LABELGROUP = 219;

    static const int LATENCYTYPE = 220;

    static const int LEASTLOCALREMAININGEXECUTIONTIMEFIRST = 221;

    static const int LIMITTYPE = 222;

    static const int LISTOBJECT = 223;

    static const int LONGOBJECT = 224;

    static const int MAININTERFACE = 225;

    static const int MAPPINGMODEL = 226;

    static const int MAPPINGTYPE = 227;

    static const int MEMORY = 228;

    static const int MEMORYADDRESSMAPPINGTYPE = 229;

    static const int MEMORYCLASSIFICATION = 230;

    static const int MEMORYCLASSIFIER = 231;

    static const int MEMORYDEFINITION = 232;

    static const int MEMORYMAPPING = 233;

    static const int MEMORYMAPPINGCONSTRAINT = 234;

    static const int MEMORYTYPE = 235;

    static const int MINAVGMAXSTATISTIC = 236;

    static const int MODE = 237;

    static const int MODEASSIGNMENT = 238;

    static const int MODECONDITION = 239;

    static const int MODECONDITIONCONJUNCTION = 240;

    static const int MODECONDITIONDISJUNCTION = 241;

    static const int MODECONDITIONDISJUNCTIONENTRY = 242;

    static const int MODELABEL = 243;

    static const int MODELABELACCESS = 244;

    static const int MODELABELACCESSENUM = 245;

    static const int MODELABELCONDITION = 246;

    static const int MODELITERAL = 247;

    static const int MODESWITCH = 248;

    static const int MODESWITCHDEFAULT = 249;

    static const int MODESWITCHENTRY = 250;

    static const int MODEVALUE = 251;

    static const int MODEVALUECONDITION = 252;

    static const int MODEVALUELIST = 253;

    static const int MODEVALUEMAPENTRY = 254;

    static const int NAMESPACE = 255;

    static const int NEEDENTRY = 256;

    static const int NONATOMICDATACOHERENCY = 257;

    static const int NONNEGATIVEDOUBLE = 258;

    static const int NONNEGATIVEINT = 259;

    static const int NONNEGATIVELONG = 260;

    static const int NUMERICMODE = 261;

    static const int NUMERICSTATISTIC = 262;

    static const int OPERATINGSYSTEM = 263;

    static const int ORDERPRECEDENCESPEC = 264;

    static const int ORDERTYPE = 265;

    static const int OSAPIOVERHEAD = 266;

    static const int OSDATACONSISTENCY = 267;

    static const int OSDATACONSISTENCYMODE = 268;

    static const int OSEK = 269;

    static const int OSEVENT = 270;

    static const int OSISROVERHEAD = 271;

    static const int OSMODEL = 272;

    static const int OSOVERHEAD = 273;

    static const int PAIRINGCONSTRAINT = 274;

    static const int PARAMETEREXTENSION = 275;

    static const int PARTLYEARLYRELEASEFAIRPD2 = 276;

    static const int PARTLYPFAIRPD2 = 277;

    static const int PERCENTAGEMETRIC = 278;

    static const int PERCENTAGEREQUIREMENTLIMIT = 279;

    static const int PERIODICACTIVATION = 280;

    static const int PERIODICBURSTSTIMULUS = 281;

    static const int PERIODICSTIMULUS = 282;

    static const int PERIODICSYNTHETICSTIMULUS = 283;

    static const int PFAIR = 284;

    static const int PFAIRPD2 = 285;

    static const int PHYSICALSECTIONCONSTRAINT = 286;

    static const int PHYSICALSECTIONMAPPING = 287;

    static const int POINTER = 288;

    static const int POLLINGPERIODICSERVER = 289;

    static const int PORTINTERFACE = 290;

    static const int PORTTYPE = 291;

    static const int POSITIVEDOUBLE = 292;

    static const int POSITIVEINT = 293;

    static const int POSITIVELONG = 294;

    static const int POWERDOMAIN = 295;

    static const int PREEMPTION = 296;

    static const int PRIORITYBASED = 297;

    static const int PRIORITYBASEDROUNDROBIN = 298;

    static const int PROBABILITYSWITCH = 299;

    static const int PROBABILITYSWITCHENTRY = 300;

    static const int PROCESS = 301;

    static const int PROCESSALLOCATIONCONSTRAINT = 302;

    static const int PROCESSCHAIN = 303;

    static const int PROCESSCHAINEVENT = 304;

    static const int PROCESSCHAINREQUIREMENT = 305;

    static const int PROCESSCONSTRAINT = 306;

    static const int PROCESSCONSTRAINTTARGET = 307;

    static const int PROCESSENTITYGROUP = 308;

    static const int PROCESSEVENT = 309;

    static const int PROCESSEVENTTYPE = 310;

    static const int PROCESSGROUP = 311;

    static const int PROCESSINGUNIT = 312;

    static const int PROCESSINGUNITDEFINITION = 313;

    static const int PROCESSPAIRINGCONSTRAINT = 314;

    static const int PROCESSPROTOTYPE = 315;

    static const int PROCESSPROTOTYPEALLOCATIONCONSTRAINT = 316;

    static const int PROCESSREQUIREMENT = 317;

    static const int PROCESSSCOPE = 318;

    static const int PROCESSSEPARATIONCONSTRAINT = 319;

    static const int PROPERTYCONSTRAINTSMODEL = 320;

    static const int PUTYPE = 321;

    static const int QUALIFIEDPORT = 322;

    static const int QUANTITY = 323;

    static const int RATEMONOTONIC = 324;

    static const int RECEIVEOPERATION = 325;

    static const int REFERABLEBASEOBJECT = 326;

    static const int REFERABLEOBJECT = 327;

    static const int REFERENCEOBJECT = 328;

    static const int RELATIONALOPERATOR = 329;

    static const int RELATIVEPERIODICSTIMULUS = 330;

    static const int REPETITIONCONSTRAINT = 331;

    static const int REQUIREMENT = 332;

    static const int REQUIREMENTLIMIT = 333;

    static const int RESERVATIONBASEDSERVER = 334;

    static const int RUNENTITYCALLSTATISTIC = 335;

    static const int RUNNABLE = 336;

    static const int RUNNABLEALLOCATION = 337;

    static const int RUNNABLEALLOCATIONCONSTRAINT = 338;

    static const int RUNNABLECALL = 339;

    static const int RUNNABLECONSTRAINT = 340;

    static const int RUNNABLECONSTRAINTTARGET = 341;

    static const int RUNNABLEENTITYGROUP = 342;

    static const int RUNNABLEEVENT = 343;

    static const int RUNNABLEEVENTTYPE = 344;

    static const int RUNNABLEGROUP = 345;

    static const int RUNNABLEORDERTYPE = 346;

    static const int RUNNABLEPAIRINGCONSTRAINT = 347;

    static const int RUNNABLEPARAMETER = 348;

    static const int RUNNABLEREQUIREMENT = 349;

    static const int RUNNABLESCOPE = 350;

    static const int RUNNABLESEPARATIONCONSTRAINT = 351;

    static const int RUNNABLESEQUENCINGCONSTRAINT = 352;

    static const int SAMPLINGTYPE = 353;

    static const int SCENARIO = 354;

    static const int SCHEDPOLICY = 355;

    static const int SCHEDULEPOINT = 356;

    static const int SCHEDULER = 357;

    static const int SCHEDULERALLOCATION = 358;

    static const int SCHEDULERASSOCIATION = 359;

    static const int SCHEDULINGPARAMETERS = 360;

    static const int SECTION = 361;

    static const int SEMAPHORE = 362;

    static const int SEMAPHOREACCESS = 363;

    static const int SEMAPHOREACCESSENUM = 364;

    static const int SEMAPHOREEVENT = 365;

    static const int SEMAPHOREEVENTTYPE = 366;

    static const int SEMAPHORETYPE = 367;

    static const int SENDERRECEIVERCOMMUNICATION = 368;

    static const int SENDERRECEIVERREAD = 369;

    static const int SENDERRECEIVERWRITE = 370;

    static const int SEPARATIONCONSTRAINT = 371;

    static const int SERVERCALL = 372;

    static const int SETEVENT = 373;

    static const int SEVERITY = 374;

    static const int SINGLEACTIVATION = 375;

    static const int SINGLESTIMULUS = 376;

    static const int SINGLEVALUESTATISTIC = 377;

    static const int SPORADICACTIVATION = 378;

    static const int SPORADICSERVER = 379;

    static const int STIMULIMODEL = 380;

    static const int STIMULUS = 381;

    static const int STIMULUSEVENT = 382;

    static const int STRINGOBJECT = 383;

    static const int STRUCT = 384;

    static const int STRUCTENTRY = 385;

    static const int STRUCTURETYPE = 386;

    static const int SUBEVENTCHAIN = 387;

    static const int SUBINTERFACE = 388;

    static const int SWMODEL = 389;

    static const int SYNCHRONIZATIONCONSTRAINT = 390;

    static const int SYNCHRONIZATIONTYPE = 391;

    static const int SYNCHRONOUSSERVERCALL = 392;

    static const int SYSTEM = 393;

    static const int TAG = 394;

    static const int TAGGROUP = 395;

    static const int TARGETCORE = 396;

    static const int TARGETMEMORY = 397;

    static const int TARGETSCHEDULER = 398;

    static const int TASK = 399;

    static const int TASKALLOCATION = 400;

    static const int TASKSCHEDULER = 401;

    static const int TASKSCHEDULINGALGORITHM = 402;

    static const int TERMINATEPROCESS = 403;

    static const int TICKS = 404;

    static const int TICKSENTRY = 405;

    static const int TIME = 406;

    static const int TIMEBETADISTRIBUTION = 407;

    static const int TIMEBOUNDARIES = 408;

    static const int TIMECOMPARABLE = 409;

    static const int TIMECONSTANT = 410;

    static const int TIMEGAUSSDISTRIBUTION = 411;

    static const int TIMEHISTOGRAM = 412;

    static const int TIMEHISTOGRAMENTRY = 413;

    static const int TIMEINTERVAL = 414;

    static const int TIMEMETRIC = 415;

    static const int TIMEREQUIREMENTLIMIT = 416;

    static const int TIMESTATISTICS = 417;

    static const int TIMEUNIFORMDISTRIBUTION = 418;

    static const int TIMEUNIT = 419;

    static const int TIMEWEIBULLESTIMATORSDISTRIBUTION = 420;

    static const int TIMINGCONSTRAINT = 421;

    static const int TRANSMISSIONPOLICY = 422;

    static const int TRIGGEREVENT = 423;

    static const int TRUNCATEDCONTINUOUSVALUEDISTRIBUTION = 424;

    static const int TRUNCATEDDISCRETEVALUEDISTRIBUTION = 425;

    static const int TRUNCATEDTIMEDISTRIBUTION = 426;

    static const int TYPEDEFINITION = 427;

    static const int TYPEREF = 428;

    static const int USERSPECIFICSCHEDULINGALGORITHM = 429;

    static const int VALUE = 430;

    static const int VARIABLERATEACTIVATION = 431;

    static const int VARIABLERATESTIMULUS = 432;

    static const int VENDOROPERATINGSYSTEM = 433;

    static const int VOLTAGE = 434;

    static const int VOLTAGEUNIT = 435;

    static const int WAITEVENT = 436;

    static const int WAITEVENTTYPE = 437;

    static const int WAITINGBEHAVIOUR = 438;

    static const int WRITESTRATEGY = 439;

    static const int AMALTHEA__VERSION = 0;

    static const int AMALTHEA__COMMONELEMENTS = 1;

    static const int AMALTHEA__SWMODEL = 2;

    static const int AMALTHEA__HWMODEL = 3;

    static const int AMALTHEA__OSMODEL = 4;

    static const int AMALTHEA__STIMULIMODEL = 5;

    static const int AMALTHEA__EVENTMODEL = 6;

    static const int AMALTHEA__CONSTRAINTSMODEL = 7;

    static const int AMALTHEA__PROPERTYCONSTRAINTSMODEL = 8;

    static const int AMALTHEA__MAPPINGMODEL = 9;

    static const int AMALTHEA__COMPONENTSMODEL = 10;

    static const int AMALTHEA__CONFIGMODEL = 11;

    static const int COMMONELEMENTS__TAGS = 12;

    static const int COMMONELEMENTS__NAMESPACES = 13;

    static const int COMMONELEMENTS__CORECLASSIFIERS = 14;

    static const int COMMONELEMENTS__MEMORYCLASSIFIERS = 15;

    static const int IANNOTATABLE__CUSTOMPROPERTIES = 16;

    static const int ITAGGABLE__TAGS = 17;

    static const int INAMED__NAME = 18;

    static const int INAMED__QUALIFIEDNAME = 19;

    static const int IREFERABLE__UNIQUENAME = 20;

    static const int IDISPLAYNAME__DISPLAYNAME = 21;

    static const int IDESCRIPTION__DESCRIPTION = 22;

    static const int INAMESPACEMEMBER__NAMESPACE = 23;

    static const int TAG__TAGTYPE = 24;

    static const int TAG__TAGGEDOBJECTS = 25;

    static const int NAMESPACE__NEXTSEGMENTS = 26;

    static const int NAMESPACE__PREVIOUSSEGMENT = 27;

    static const int NAMESPACE__MEMBEROBJECTS = 28;

    static const int TRANSMISSIONPOLICY__CHUNKSIZE = 29;

    static const int TRANSMISSIONPOLICY__CHUNKPROCESSINGTICKS = 30;

    static const int TRANSMISSIONPOLICY__TRANSMITRATIO = 31;

    static const int TIME__VALUE = 32;

    static const int TIME__UNIT = 33;

    static const int FREQUENCY__VALUE = 34;

    static const int FREQUENCY__UNIT = 35;

    static const int VOLTAGE__VALUE = 36;

    static const int VOLTAGE__UNIT = 37;

    static const int DATASIZE__VALUE = 38;

    static const int DATASIZE__UNIT = 39;

    static const int DATARATE__VALUE = 40;

    static const int DATARATE__UNIT = 41;

    static const int CUSTOMPROPERTY__KEY = 42;

    static const int CUSTOMPROPERTY__VALUE = 43;

    static const int LISTOBJECT__VALUES = 44;

    static const int STRINGOBJECT__VALUE = 45;

    static const int BIGINTEGEROBJECT__VALUE = 46;

    static const int REFERENCEOBJECT__VALUE = 47;

    static const int INTEGEROBJECT__VALUE = 48;

    static const int LONGOBJECT__VALUE = 49;

    static const int FLOATOBJECT__VALUE = 50;

    static const int DOUBLEOBJECT__VALUE = 51;

    static const int BOOLEANOBJECT__VALUE = 52;

    static const int MINAVGMAXSTATISTIC__MIN = 53;

    static const int MINAVGMAXSTATISTIC__AVG = 54;

    static const int MINAVGMAXSTATISTIC__MAX = 55;

    static const int SINGLEVALUESTATISTIC__VALUE = 56;

    static const int TIMEINTERVAL__LOWERBOUND = 57;

    static const int TIMEINTERVAL__UPPERBOUND = 58;

    static const int TIMECONSTANT__VALUE = 59;

    static const int TIMEHISTOGRAM__ENTRIES = 60;

    static const int TIMEHISTOGRAMENTRY__OCCURRENCES = 61;

    static const int TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND = 62;

    static const int TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND = 63;

    static const int TIMEBOUNDARIES__SAMPLINGTYPE = 64;

    static const int TIMESTATISTICS__AVERAGE = 65;

    static const int TIMEGAUSSDISTRIBUTION__MEAN = 66;

    static const int TIMEGAUSSDISTRIBUTION__SD = 67;

    static const int TIMEWEIBULLESTIMATORSDISTRIBUTION__AVERAGE = 68;

    static const int TIMEWEIBULLESTIMATORSDISTRIBUTION__PREMAINPROMILLE = 69;

    static const int TIMEBETADISTRIBUTION__ALPHA = 70;

    static const int TIMEBETADISTRIBUTION__BETA = 71;

    static const int DISCRETEVALUEINTERVAL__LOWERBOUND = 72;

    static const int DISCRETEVALUEINTERVAL__UPPERBOUND = 73;

    static const int DISCRETEVALUECONSTANT__VALUE = 74;

    static const int DISCRETEVALUEHISTOGRAM__ENTRIES = 75;

    static const int DISCRETEVALUEHISTOGRAMENTRY__OCCURRENCES = 76;

    static const int TRUNCATEDDISCRETEVALUEDISTRIBUTION__LOWERBOUND = 77;

    static const int TRUNCATEDDISCRETEVALUEDISTRIBUTION__UPPERBOUND = 78;

    static const int DISCRETEVALUEBOUNDARIES__SAMPLINGTYPE = 79;

    static const int DISCRETEVALUESTATISTICS__AVERAGE = 80;

    static const int DISCRETEVALUEGAUSSDISTRIBUTION__MEAN = 81;

    static const int DISCRETEVALUEGAUSSDISTRIBUTION__SD = 82;

    static const int DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__AVERAGE = 83;

    static const int DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__PREMAINPROMILLE = 84;

    static const int DISCRETEVALUEBETADISTRIBUTION__ALPHA = 85;

    static const int DISCRETEVALUEBETADISTRIBUTION__BETA = 86;

    static const int CONTINUOUSVALUEINTERVAL__LOWERBOUND = 87;

    static const int CONTINUOUSVALUEINTERVAL__UPPERBOUND = 88;

    static const int CONTINUOUSVALUECONSTANT__VALUE = 89;

    static const int CONTINUOUSVALUEHISTOGRAM__ENTRIES = 90;

    static const int CONTINUOUSVALUEHISTOGRAMENTRY__OCCURRENCES = 91;

    static const int TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__LOWERBOUND = 92;

    static const int TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__UPPERBOUND = 93;

    static const int CONTINUOUSVALUEBOUNDARIES__SAMPLINGTYPE = 94;

    static const int CONTINUOUSVALUESTATISTICS__AVERAGE = 95;

    static const int CONTINUOUSVALUEGAUSSDISTRIBUTION__MEAN = 96;

    static const int CONTINUOUSVALUEGAUSSDISTRIBUTION__SD = 97;

    static const int CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__AVERAGE = 98;

    static const int CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__PREMAINPROMILLE = 99;

    static const int CONTINUOUSVALUEBETADISTRIBUTION__ALPHA = 100;

    static const int CONTINUOUSVALUEBETADISTRIBUTION__BETA = 101;

    static const int ENUMMODE__LITERALS = 102;

    static const int MODELITERAL__CONTAININGMODE = 103;

    static const int COMPONENTSMODEL__STRUCTURES = 104;

    static const int COMPONENTSMODEL__SYSTEMS = 105;

    static const int ICOMPONENTCONTAINER__COMPONENTS = 106;

    static const int IINTERFACECONTAINER__INTERFACES = 107;

    static const int ISYSTEM__COMPONENTINSTANCES = 108;

    static const int ISYSTEM__CONNECTORS = 109;

    static const int ISYSTEM__GROUNDEDPORTS = 110;

    static const int ISYSTEM__INNERPORTS = 111;

    static const int COMPONENTINTERFACE__DATATYPE = 112;

    static const int COMPONENTINTERFACE__SUBINTERFACES = 113;

    static const int MAININTERFACE__VERSION = 114;

    static const int SUBINTERFACE__CONTAININGINTERFACE = 115;

    static const int COMPONENTPORT__CONTAININGCOMPONENT = 116;

    static const int COMPONENTPORT__KIND = 117;

    static const int COMPONENTPORT__INTERFACE = 118;

    static const int COMPONENTSTRUCTURE__STRUCTURETYPE = 119;

    static const int COMPONENTSTRUCTURE__SUBSTRUCTURES = 120;

    static const int COMPONENTSTRUCTURE__MEMBEROBJECTS = 121;

    static const int ICOMPONENTSTRUCTUREMEMBER__STRUCTURE = 122;

    static const int COMPONENT__PORTS = 123;

    static const int COMPONENT__PROCESSES = 124;

    static const int COMPONENT__RUNNABLES = 125;

    static const int COMPONENT__LABELS = 126;

    static const int COMPONENT__SEMAPHORES = 127;

    static const int COMPONENT__OSEVENTS = 128;

    static const int COMPONENTINSTANCE__CONTAININGSYSTEM = 129;

    static const int COMPONENTINSTANCE__TYPE = 130;

    static const int CONNECTOR__CONTAININGSYSTEM = 131;

    static const int CONNECTOR__SOURCEPORT = 132;

    static const int CONNECTOR__TARGETPORT = 133;

    static const int CONNECTOR__IMPLEMENTEDINTERFACES = 134;

    static const int INTERFACECHANNEL__KEY = 135;

    static const int INTERFACECHANNEL__VALUE = 136;

    static const int QUALIFIEDPORT__INSTANCE = 137;

    static const int QUALIFIEDPORT__PORT = 138;

    static const int CONFIGMODEL__EVENTSTOTRACE = 139;

    static const int EVENTCONFIG__EVENT = 140;

    static const int CONSTRAINTSMODEL__EVENTCHAINS = 141;

    static const int CONSTRAINTSMODEL__TIMINGCONSTRAINTS = 142;

    static const int CONSTRAINTSMODEL__AFFINITYCONSTRAINTS = 143;

    static const int CONSTRAINTSMODEL__RUNNABLESEQUENCINGCONSTRAINTS = 144;

    static const int CONSTRAINTSMODEL__DATAAGECONSTRAINTS = 145;

    static const int CONSTRAINTSMODEL__REQUIREMENTS = 146;

    static const int CONSTRAINTSMODEL__DATACOHERENCYGROUPS = 147;

    static const int CONSTRAINTSMODEL__DATASTABILITYGROUPS = 148;

    static const int CONSTRAINTSMODEL__PHYSICALSECTIONCONSTRAINTS = 149;

    static const int RUNNABLESEQUENCINGCONSTRAINT__ORDERTYPE = 150;

    static const int RUNNABLESEQUENCINGCONSTRAINT__RUNNABLEGROUPS = 151;

    static const int RUNNABLESEQUENCINGCONSTRAINT__PROCESSSCOPE = 152;

    static const int PROCESSCONSTRAINT__TARGET = 153;

    static const int RUNNABLECONSTRAINT__TARGET = 154;

    static const int DATACONSTRAINT__TARGET = 155;

    static const int RUNNABLESEPARATIONCONSTRAINT__GROUPS = 156;

    static const int PROCESSSEPARATIONCONSTRAINT__GROUPS = 157;

    static const int DATASEPARATIONCONSTRAINT__GROUPS = 158;

    static const int RUNNABLEPAIRINGCONSTRAINT__GROUP = 159;

    static const int PROCESSPAIRINGCONSTRAINT__GROUP = 160;

    static const int DATAPAIRINGCONSTRAINT__GROUP = 161;

    static const int TARGETMEMORY__MEMORIES = 162;

    static const int TARGETCORE__CORES = 163;

    static const int TARGETSCHEDULER__SCHEDULERS = 164;

    static const int LABELENTITYGROUP__LABELS = 165;

    static const int RUNNABLEENTITYGROUP__RUNNABLES = 166;

    static const int PROCESSENTITYGROUP__PROCESSES = 167;

    static const int TAGGROUP__TAG = 168;

    static const int ABSTRACTEVENTCHAIN__STIMULUS = 169;

    static const int ABSTRACTEVENTCHAIN__RESPONSE = 170;

    static const int ABSTRACTEVENTCHAIN__ITEMS = 171;

    static const int ABSTRACTEVENTCHAIN__ITEMTYPE = 172;

    static const int ABSTRACTEVENTCHAIN__MINITEMSCOMPLETED = 173;

    static const int EVENTCHAINREFERENCE__EVENTCHAIN = 174;

    static const int EVENTCHAINCONTAINER__EVENTCHAIN = 175;

    static const int PHYSICALSECTIONCONSTRAINT__SECTION = 176;

    static const int PHYSICALSECTIONCONSTRAINT__MEMORIES = 177;

    static const int SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED = 178;

    static const int SYNCHRONIZATIONCONSTRAINT__TOLERANCE = 179;

    static const int EVENTSYNCHRONIZATIONCONSTRAINT__EVENTS = 180;

    static const int EVENTCHAINSYNCHRONIZATIONCONSTRAINT__SCOPE = 181;

    static const int EVENTCHAINSYNCHRONIZATIONCONSTRAINT__TYPE = 182;

    static const int DELAYCONSTRAINT__MAPPINGTYPE = 183;

    static const int DELAYCONSTRAINT__SOURCE = 184;

    static const int DELAYCONSTRAINT__TARGET = 185;

    static const int DELAYCONSTRAINT__UPPER = 186;

    static const int DELAYCONSTRAINT__LOWER = 187;

    static const int EVENTCHAINLATENCYCONSTRAINT__SCOPE = 188;

    static const int EVENTCHAINLATENCYCONSTRAINT__TYPE = 189;

    static const int EVENTCHAINLATENCYCONSTRAINT__MINIMUM = 190;

    static const int EVENTCHAINLATENCYCONSTRAINT__MAXIMUM = 191;

    static const int REPETITIONCONSTRAINT__EVENT = 192;

    static const int REPETITIONCONSTRAINT__SPAN = 193;

    static const int REPETITIONCONSTRAINT__LOWER = 194;

    static const int REPETITIONCONSTRAINT__UPPER = 195;

    static const int REPETITIONCONSTRAINT__JITTER = 196;

    static const int REPETITIONCONSTRAINT__PERIOD = 197;

    static const int DATAAGECONSTRAINT__RUNNABLE = 198;

    static const int DATAAGECONSTRAINT__LABEL = 199;

    static const int DATAAGECONSTRAINT__DATAAGE = 200;

    static const int DATAAGECYCLE__MINIMUMCYCLE = 201;

    static const int DATAAGECYCLE__MAXIMUMCYCLE = 202;

    static const int DATAAGETIME__MINIMUMTIME = 203;

    static const int DATAAGETIME__MAXIMUMTIME = 204;

    static const int REQUIREMENT__SEVERITY = 205;

    static const int REQUIREMENT__LIMIT = 206;

    static const int PROCESSREQUIREMENT__PROCESS = 207;

    static const int RUNNABLEREQUIREMENT__RUNNABLE = 208;

    static const int ARCHITECTUREREQUIREMENT__COMPONENT = 209;

    static const int PROCESSCHAINREQUIREMENT__PROCESSCHAIN = 210;

    static const int REQUIREMENTLIMIT__LIMITTYPE = 211;

    static const int CPUPERCENTAGEREQUIREMENTLIMIT__METRIC = 212;

    static const int CPUPERCENTAGEREQUIREMENTLIMIT__LIMITVALUE = 213;

    static const int CPUPERCENTAGEREQUIREMENTLIMIT__HARDWARECONTEXT = 214;

    static const int FREQUENCYREQUIREMENTLIMIT__METRIC = 215;

    static const int FREQUENCYREQUIREMENTLIMIT__LIMITVALUE = 216;

    static const int PERCENTAGEREQUIREMENTLIMIT__METRIC = 217;

    static const int PERCENTAGEREQUIREMENTLIMIT__LIMITVALUE = 218;

    static const int COUNTREQUIREMENTLIMIT__METRIC = 219;

    static const int COUNTREQUIREMENTLIMIT__LIMITVALUE = 220;

    static const int TIMEREQUIREMENTLIMIT__METRIC = 221;

    static const int TIMEREQUIREMENTLIMIT__LIMITVALUE = 222;

    static const int DATACOHERENCYGROUP__LABELS = 223;

    static const int DATACOHERENCYGROUP__SCOPE = 224;

    static const int DATACOHERENCYGROUP__DIRECTION = 225;

    static const int DATASTABILITYGROUP__LABELS = 226;

    static const int DATASTABILITYGROUP__SCOPE = 227;

    static const int PROCESSSCOPE__PROCESS = 228;

    static const int RUNNABLESCOPE__RUNNABLE = 229;

    static const int COMPONENTSCOPE__COMPONENT = 230;

    static const int EVENTMODEL__EVENTS = 231;

    static const int EVENTSET__EVENTS = 232;

    static const int CUSTOMEVENT__EVENTTYPE = 233;

    static const int CUSTOMEVENT__EXPLICITTRIGGERS = 234;

    static const int STIMULUSEVENT__ENTITY = 235;

    static const int PROCESSEVENT__EVENTTYPE = 236;

    static const int PROCESSEVENT__ENTITY = 237;

    static const int PROCESSEVENT__PROCESSINGUNIT = 238;

    static const int PROCESSCHAINEVENT__EVENTTYPE = 239;

    static const int PROCESSCHAINEVENT__ENTITY = 240;

    static const int PROCESSCHAINEVENT__PROCESSINGUNIT = 241;

    static const int RUNNABLEEVENT__EVENTTYPE = 242;

    static const int RUNNABLEEVENT__ENTITY = 243;

    static const int RUNNABLEEVENT__PROCESS = 244;

    static const int RUNNABLEEVENT__PROCESSINGUNIT = 245;

    static const int LABELEVENT__EVENTTYPE = 246;

    static const int LABELEVENT__ENTITY = 247;

    static const int LABELEVENT__RUNNABLE = 248;

    static const int LABELEVENT__PROCESS = 249;

    static const int CHANNELEVENT__EVENTTYPE = 250;

    static const int CHANNELEVENT__ENTITY = 251;

    static const int CHANNELEVENT__RUNNABLE = 252;

    static const int CHANNELEVENT__PROCESS = 253;

    static const int SEMAPHOREEVENT__EVENTTYPE = 254;

    static const int SEMAPHOREEVENT__ENTITY = 255;

    static const int SEMAPHOREEVENT__RUNNABLE = 256;

    static const int SEMAPHOREEVENT__PROCESS = 257;

    static const int SEMAPHOREEVENT__PROCESSINGUNIT = 258;

    static const int COMPONENTEVENT__EVENTTYPE = 259;

    static const int COMPONENTEVENT__ENTITY = 260;

    static const int HWMODEL__DEFINITIONS = 261;

    static const int HWMODEL__FEATURECATEGORIES = 262;

    static const int HWMODEL__STRUCTURES = 263;

    static const int HWMODEL__DOMAINS = 264;

    static const int HWSTRUCTURE__STRUCTURETYPE = 265;

    static const int HWSTRUCTURE__PORTS = 266;

    static const int HWSTRUCTURE__STRUCTURES = 267;

    static const int HWSTRUCTURE__MODULES = 268;

    static const int HWSTRUCTURE__CONNECTIONS = 269;

    static const int HWSTRUCTURE__INNERPORTS = 270;

    static const int HWMODULE__PORTS = 271;

    static const int HWMODULE__POWERDOMAIN = 272;

    static const int HWMODULE__FREQUENCYDOMAIN = 273;

    static const int FREQUENCYDOMAIN__DEFAULTVALUE = 274;

    static const int FREQUENCYDOMAIN__CLOCKGATING = 275;

    static const int POWERDOMAIN__DEFAULTVALUE = 276;

    static const int POWERDOMAIN__POWERGATING = 277;

    static const int PROCESSINGUNIT__DEFINITION = 278;

    static const int PROCESSINGUNIT__ACCESSELEMENTS = 279;

    static const int PROCESSINGUNIT__CACHES = 280;

    static const int MEMORY__DEFINITION = 281;

    static const int MEMORY__MAPPINGS = 282;

    static const int CACHE__DEFINITION = 283;

    static const int HWFEATURECATEGORY__FEATURETYPE = 284;

    static const int HWFEATURECATEGORY__FEATURES = 285;

    static const int HWFEATURE__CONTAININGCATEGORY = 286;

    static const int HWFEATURE__VALUE = 287;

    static const int HWPORT__BITWIDTH = 288;

    static const int HWPORT__PRIORITY = 289;

    static const int HWPORT__PORTTYPE = 290;

    static const int HWPORT__PORTINTERFACE = 291;

    static const int HWPORT__DELEGATED = 292;

    static const int HWPORT__CONNECTIONS = 293;

    static const int CONNECTIONHANDLER__DEFINITION = 294;

    static const int CONNECTIONHANDLER__INTERNALCONNECTIONS = 295;

    static const int HWCONNECTION__READLATENCY = 296;

    static const int HWCONNECTION__WRITELATENCY = 297;

    static const int HWCONNECTION__DATARATE = 298;

    static const int HWCONNECTION__PORT1 = 299;

    static const int HWCONNECTION__PORT2 = 300;

    static const int HWCONNECTION__INTERNAL = 301;

    static const int HWACCESSELEMENT__SOURCE = 302;

    static const int HWACCESSELEMENT__DESTINATION = 303;

    static const int HWACCESSELEMENT__ACCESSPATH = 304;

    static const int HWACCESSELEMENT__READLATENCY = 305;

    static const int HWACCESSELEMENT__WRITELATENCY = 306;

    static const int HWACCESSELEMENT__DATARATE = 307;

    static const int PROCESSINGUNITDEFINITION__PUTYPE = 308;

    static const int PROCESSINGUNITDEFINITION__FEATURES = 309;

    static const int PROCESSINGUNITDEFINITION__CLASSIFIERS = 310;

    static const int CONNECTIONHANDLERDEFINITION__POLICY = 311;

    static const int CONNECTIONHANDLERDEFINITION__READLATENCY = 312;

    static const int CONNECTIONHANDLERDEFINITION__WRITELATENCY = 313;

    static const int CONNECTIONHANDLERDEFINITION__DATARATE = 314;

    static const int CONNECTIONHANDLERDEFINITION__MAXBURSTSIZE = 315;

    static const int CONNECTIONHANDLERDEFINITION__MAXCONCURRENTTRANSFERS = 316;

    static const int MEMORYDEFINITION__SIZE = 317;

    static const int MEMORYDEFINITION__ACCESSLATENCY = 318;

    static const int MEMORYDEFINITION__DATARATE = 319;

    static const int MEMORYDEFINITION__MEMORYTYPE = 320;

    static const int MEMORYDEFINITION__CLASSIFIERS = 321;

    static const int CACHEDEFINITION__SIZE = 322;

    static const int CACHEDEFINITION__LINESIZE = 323;

    static const int CACHEDEFINITION__ACCESSLATENCY = 324;

    static const int CACHEDEFINITION__CACHETYPE = 325;

    static const int CACHEDEFINITION__WRITESTRATEGY = 326;

    static const int CACHEDEFINITION__NWAYS = 327;

    static const int CACHEDEFINITION__COHERENCY = 328;

    static const int CACHEDEFINITION__EXCLUSIVE = 329;

    static const int CACHEDEFINITION__HITRATE = 330;

    static const int HWPATH__SOURCE = 331;

    static const int HWPATH__DESTINATION = 332;

    static const int HWACCESSPATH__CONTAININGACCESSELEMENT = 333;

    static const int HWACCESSPATH__PATHELEMENTS = 334;

    static const int HWACCESSPATH__STARTADDRESS = 335;

    static const int HWACCESSPATH__ENDADDRESS = 336;

    static const int HWACCESSPATH__MEMOFFSET = 337;

    static const int MAPPINGMODEL__SCHEDULERALLOCATION = 338;

    static const int MAPPINGMODEL__RUNNABLEALLOCATION = 339;

    static const int MAPPINGMODEL__TASKALLOCATION = 340;

    static const int MAPPINGMODEL__ISRALLOCATION = 341;

    static const int MAPPINGMODEL__MEMORYMAPPING = 342;

    static const int MAPPINGMODEL__PHYSICALSECTIONMAPPING = 343;

    static const int MAPPINGMODEL__ADDRESSMAPPINGTYPE = 344;

    static const int SCHEDULERALLOCATION__SCHEDULER = 345;

    static const int SCHEDULERALLOCATION__RESPONSIBILITY = 346;

    static const int SCHEDULERALLOCATION__EXECUTINGPU = 347;

    static const int TASKALLOCATION__TASK = 348;

    static const int TASKALLOCATION__SCHEDULER = 349;

    static const int TASKALLOCATION__AFFINITY = 350;

    static const int TASKALLOCATION__SCHEDULINGPARAMETERS = 351;

    static const int TASKALLOCATION__PARAMETEREXTENSIONS = 352;

    static const int ISRALLOCATION__ISR = 353;

    static const int ISRALLOCATION__CONTROLLER = 354;

    static const int ISRALLOCATION__PRIORITY = 355;

    static const int RUNNABLEALLOCATION__SCHEDULER = 356;

    static const int RUNNABLEALLOCATION__ENTITY = 357;

    static const int MEMORYMAPPING__ABSTRACTELEMENT = 358;

    static const int MEMORYMAPPING__MEMORY = 359;

    static const int MEMORYMAPPING__MEMORYPOSITIONADDRESS = 360;

    static const int PHYSICALSECTIONMAPPING__ORIGIN = 361;

    static const int PHYSICALSECTIONMAPPING__MEMORY = 362;

    static const int PHYSICALSECTIONMAPPING__STARTADDRESS = 363;

    static const int PHYSICALSECTIONMAPPING__ENDADDRESS = 364;

    static const int PHYSICALSECTIONMAPPING__LABELS = 365;

    static const int PHYSICALSECTIONMAPPING__RUNENTITIES = 366;

    static const int OSMODEL__SEMAPHORES = 367;

    static const int OSMODEL__OPERATINGSYSTEMS = 368;

    static const int OSMODEL__OSOVERHEADS = 369;

    static const int OSDATACONSISTENCY__MODE = 370;

    static const int OSDATACONSISTENCY__DATASTABILITY = 371;

    static const int OSDATACONSISTENCY__NONATOMICDATACOHERENCY = 372;

    static const int DATASTABILITY__ENABLED = 373;

    static const int DATASTABILITY__ALGORITHM = 374;

    static const int DATASTABILITY__ACCESSMULTIPLICITY = 375;

    static const int DATASTABILITY__LEVEL = 376;

    static const int NONATOMICDATACOHERENCY__ENABLED = 377;

    static const int NONATOMICDATACOHERENCY__ALGORITHM = 378;

    static const int NONATOMICDATACOHERENCY__ACCESSMULTIPLICITY = 379;

    static const int SEMAPHORE__SEMAPHORETYPE = 380;

    static const int SEMAPHORE__INITIALVALUE = 381;

    static const int SEMAPHORE__MAXVALUE = 382;

    static const int SEMAPHORE__PRIORITYCEILINGPROTOCOL = 383;

    static const int SEMAPHORE__SEMAPHOREACCESSES = 384;

    static const int SEMAPHORE__REFERRINGCOMPONENTS = 385;

    static const int SCHEDULER__COMPUTATIONITEMS = 386;

    static const int SCHEDULER__SCHEDULERALLOCATIONS = 387;

    static const int SCHEDULER__RUNNABLEALLOCATIONS = 388;

    static const int TASKSCHEDULER__SCHEDULINGALGORITHM = 389;

    static const int TASKSCHEDULER__PARENTASSOCIATION = 390;

    static const int TASKSCHEDULER__CHILDASSOCIATIONS = 391;

    static const int TASKSCHEDULER__TASKALLOCATIONS = 392;

    static const int TASKSCHEDULER__PARENTSCHEDULER = 393;

    static const int TASKSCHEDULER__CHILDSCHEDULERS = 394;

    static const int SCHEDULERASSOCIATION__CHILD = 395;

    static const int SCHEDULERASSOCIATION__PARENT = 396;

    static const int SCHEDULERASSOCIATION__SCHEDULINGPARAMETERS = 397;

    static const int SCHEDULERASSOCIATION__PARAMETEREXTENSIONS = 398;

    static const int INTERRUPTCONTROLLER__SCHEDULINGALGORITHM = 399;

    static const int INTERRUPTCONTROLLER__ISRALLOCATIONS = 400;

    static const int SCHEDULINGPARAMETERS__PRIORITY = 401;

    static const int SCHEDULINGPARAMETERS__MINBUDGET = 402;

    static const int SCHEDULINGPARAMETERS__MAXBUDGET = 403;

    static const int SCHEDULINGPARAMETERS__REPLENISHMENT = 404;

    static const int PARAMETEREXTENSION__KEY = 405;

    static const int PARAMETEREXTENSION__VALUE = 406;

    static const int PFAIR__QUANTSIZENS = 407;

    static const int USERSPECIFICSCHEDULINGALGORITHM__PARAMETEREXTENSIONS = 408;

    static const int OPERATINGSYSTEM__OVERHEAD = 409;

    static const int OPERATINGSYSTEM__TASKSCHEDULERS = 410;

    static const int OPERATINGSYSTEM__INTERRUPTCONTROLLERS = 411;

    static const int OPERATINGSYSTEM__OSDATACONSISTENCY = 412;

    static const int VENDOROPERATINGSYSTEM__OSNAME = 413;

    static const int VENDOROPERATINGSYSTEM__VENDOR = 414;

    static const int VENDOROPERATINGSYSTEM__VERSION = 415;

    static const int OSOVERHEAD__APIOVERHEAD = 416;

    static const int OSOVERHEAD__ISRCATEGORY1OVERHEAD = 417;

    static const int OSOVERHEAD__ISRCATEGORY2OVERHEAD = 418;

    static const int OSAPIOVERHEAD__APISENDMESSAGE = 419;

    static const int OSAPIOVERHEAD__APITERMINATETASK = 420;

    static const int OSAPIOVERHEAD__APISCHEDULE = 421;

    static const int OSAPIOVERHEAD__APIREQUESTRESOURCE = 422;

    static const int OSAPIOVERHEAD__APIRELEASERESOURCE = 423;

    static const int OSAPIOVERHEAD__APISETEVENT = 424;

    static const int OSAPIOVERHEAD__APIWAITEVENT = 425;

    static const int OSAPIOVERHEAD__APICLEAREVENT = 426;

    static const int OSAPIOVERHEAD__APIACTIVATETASK = 427;

    static const int OSAPIOVERHEAD__APIENFORCEDMIGRATION = 428;

    static const int OSAPIOVERHEAD__APISUSPENDOSINTERRUPTS = 429;

    static const int OSAPIOVERHEAD__APIRESUMEOSINTERRUPTS = 430;

    static const int OSAPIOVERHEAD__APIREQUESTSPINLOCK = 431;

    static const int OSAPIOVERHEAD__APIRELEASESPINLOCK = 432;

    static const int OSAPIOVERHEAD__APISENDERRECEIVERREAD = 433;

    static const int OSAPIOVERHEAD__APISENDERRECEIVERWRITE = 434;

    static const int OSAPIOVERHEAD__APISYNCHRONOUSSERVERCALLPOINT = 435;

    static const int OSAPIOVERHEAD__APIIOCREAD = 436;

    static const int OSAPIOVERHEAD__APIIOCWRITE = 437;

    static const int OSISROVERHEAD__PREEXECUTIONOVERHEAD = 438;

    static const int OSISROVERHEAD__POSTEXECUTIONOVERHEAD = 439;

    static const int PROPERTYCONSTRAINTSMODEL__ALLOCATIONCONSTRAINTS = 440;

    static const int PROPERTYCONSTRAINTSMODEL__MAPPINGCONSTRAINTS = 441;

    static const int COREALLOCATIONCONSTRAINT__CORECLASSIFICATION = 442;

    static const int MEMORYMAPPINGCONSTRAINT__MEMORYCLASSIFICATION = 443;

    static const int PROCESSALLOCATIONCONSTRAINT__PROCESS = 444;

    static const int PROCESSPROTOTYPEALLOCATIONCONSTRAINT__PROCESSPROTOTYPE = 445;

    static const int RUNNABLEALLOCATIONCONSTRAINT__RUNNABLE = 446;

    static const int ABSTRACTELEMENTMAPPINGCONSTRAINT__ABSTRACTELEMENT = 447;

    static const int CLASSIFICATION__CONDITION = 448;

    static const int CLASSIFICATION__GROUPING = 449;

    static const int CORECLASSIFICATION__CLASSIFIERS = 450;

    static const int MEMORYCLASSIFICATION__CLASSIFIERS = 451;

    static const int STIMULIMODEL__STIMULI = 452;

    static const int STIMULIMODEL__CLOCKS = 453;

    static const int STIMULUS__SETMODEVALUELIST = 454;

    static const int STIMULUS__EXECUTIONCONDITION = 455;

    static const int STIMULUS__AFFECTEDPROCESSES = 456;

    static const int MODEVALUELIST__ENTRIES = 457;

    static const int MODEVALUEMAPENTRY__KEY = 458;

    static const int MODEVALUEMAPENTRY__VALUE = 459;

    static const int MODEVALUE__LABEL = 460;

    static const int MODEVALUE__VALUE = 461;

    static const int MODECONDITIONDISJUNCTION__ENTRIES = 462;

    static const int MODECONDITION__RELATION = 463;

    static const int MODELABELCONDITION__LABEL1 = 464;

    static const int MODELABELCONDITION__LABEL2 = 465;

    static const int MODECONDITIONCONJUNCTION__ENTRIES = 466;

    static const int FIXEDPERIODIC__RECURRENCE = 467;

    static const int FIXEDPERIODIC__OFFSET = 468;

    static const int PERIODICSTIMULUS__JITTER = 469;

    static const int PERIODICSTIMULUS__MINDISTANCE = 470;

    static const int RELATIVEPERIODICSTIMULUS__OFFSET = 471;

    static const int RELATIVEPERIODICSTIMULUS__NEXTOCCURRENCE = 472;

    static const int VARIABLERATESTIMULUS__STEP = 473;

    static const int VARIABLERATESTIMULUS__OCCURRENCESPERSTEP = 474;

    static const int VARIABLERATESTIMULUS__MAXINCREASEPERSTEP = 475;

    static const int VARIABLERATESTIMULUS__MAXDECREASEPERSTEP = 476;

    static const int VARIABLERATESTIMULUS__SCENARIO = 477;

    static const int SCENARIO__CLOCK = 478;

    static const int SCENARIO__SAMPLINGOFFSET = 479;

    static const int SCENARIO__SAMPLINGRECURRENCE = 480;

    static const int PERIODICSYNTHETICSTIMULUS__OCCURRENCETIMES = 481;

    static const int SINGLESTIMULUS__OCCURRENCE = 482;

    static const int INTERPROCESSSTIMULUS__COUNTER = 483;

    static const int INTERPROCESSSTIMULUS__EXPLICITTRIGGERS = 484;

    static const int PERIODICBURSTSTIMULUS__BURSTLENGTH = 485;

    static const int PERIODICBURSTSTIMULUS__OCCURRENCEMINDISTANCE = 486;

    static const int PERIODICBURSTSTIMULUS__OCCURRENCECOUNT = 487;

    static const int EVENTSTIMULUS__TRIGGERINGEVENTS = 488;

    static const int EVENTSTIMULUS__COUNTER = 489;

    static const int ARRIVALCURVESTIMULUS__ENTRIES = 490;

    static const int ARRIVALCURVEENTRY__NUMBEROFOCCURRENCES = 491;

    static const int ARRIVALCURVEENTRY__LOWERTIMEBORDER = 492;

    static const int ARRIVALCURVEENTRY__UPPERTIMEBORDER = 493;

    static const int CLOCKFUNCTION__CURVETYPE = 494;

    static const int CLOCKFUNCTION__PERIOD = 495;

    static const int CLOCKFUNCTION__PEAKTOPEAK = 496;

    static const int CLOCKFUNCTION__XOFFSET = 497;

    static const int CLOCKFUNCTION__YOFFSET = 498;

    static const int CLOCKSTEPLIST__ENTRIES = 499;

    static const int CLOCKSTEPLIST__PERIOD = 500;

    static const int CLOCKSTEP__FREQUENCY = 501;

    static const int CLOCKSTEP__TIME = 502;

    static const int SWMODEL__ISRS = 503;

    static const int SWMODEL__TASKS = 504;

    static const int SWMODEL__RUNNABLES = 505;

    static const int SWMODEL__LABELS = 506;

    static const int SWMODEL__CHANNELS = 507;

    static const int SWMODEL__PROCESSPROTOTYPES = 508;

    static const int SWMODEL__SECTIONS = 509;

    static const int SWMODEL__ACTIVATIONS = 510;

    static const int SWMODEL__EVENTS = 511;

    static const int SWMODEL__TYPEDEFINITIONS = 512;

    static const int SWMODEL__CUSTOMENTITIES = 513;

    static const int SWMODEL__PROCESSCHAINS = 514;

    static const int SWMODEL__MODES = 515;

    static const int SWMODEL__MODELABELS = 516;

    static const int ABSTRACTMEMORYELEMENT__SIZE = 517;

    static const int ABSTRACTMEMORYELEMENT__MAPPINGS = 518;

    static const int ABSTRACTPROCESS__REFERRINGCOMPONENTS = 519;

    static const int CUSTOMENTITY__TYPENAME = 520;

    static const int PROCESSCHAIN__PROCESSES = 521;

    static const int PROCESS__ACTIVITYGRAPH = 522;

    static const int PROCESS__STIMULI = 523;

    static const int IACTIVITYGRAPHITEMCONTAINER__ITEMS = 524;

    static const int ACTIVITYGRAPHITEM__CONTAININGPROCESS = 525;

    static const int ACTIVITYGRAPHITEM__CONTAININGRUNNABLE = 526;

    static const int ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH = 527;

    static const int MODESWITCH__ENTRIES = 528;

    static const int MODESWITCH__DEFAULTENTRY = 529;

    static const int MODESWITCHENTRY__CONDITION = 530;

    static const int PROBABILITYSWITCH__ENTRIES = 531;

    static const int PROBABILITYSWITCHENTRY__PROBABILITY = 532;

    static const int COUNTER__PRESCALER = 533;

    static const int COUNTER__OFFSET = 534;

    static const int WAITEVENT__EVENTMASK = 535;

    static const int WAITEVENT__MASKTYPE = 536;

    static const int WAITEVENT__WAITINGBEHAVIOUR = 537;

    static const int WAITEVENT__COUNTER = 538;

    static const int SETEVENT__EVENTMASK = 539;

    static const int SETEVENT__PROCESS = 540;

    static const int SETEVENT__COUNTER = 541;

    static const int CLEAREVENT__EVENTMASK = 542;

    static const int CLEAREVENT__COUNTER = 543;

    static const int EVENTMASK__EVENTS = 544;

    static const int OSEVENT__COMMUNICATIONOVERHEADINBIT = 545;

    static const int OSEVENT__REFERRINGCOMPONENTS = 546;

    static const int INTERPROCESSTRIGGER__STIMULUS = 547;

    static const int INTERPROCESSTRIGGER__COUNTER = 548;

    static const int ENFORCEDMIGRATION__RESOURCEOWNER = 549;

    static const int TERMINATEPROCESS__COUNTER = 550;

    static const int TASK__PREEMPTION = 551;

    static const int TASK__MULTIPLETASKACTIVATIONLIMIT = 552;

    static const int ISR__CATEGORY = 553;

    static const int PROCESSPROTOTYPE__PREEMPTION = 554;

    static const int PROCESSPROTOTYPE__FIRSTRUNNABLE = 555;

    static const int PROCESSPROTOTYPE__LASTRUNNABLE = 556;

    static const int PROCESSPROTOTYPE__ACCESSPRECEDENCESPEC = 557;

    static const int PROCESSPROTOTYPE__ORDERPRECEDENCESPEC = 558;

    static const int PROCESSPROTOTYPE__CHAINEDPROTOTYPES = 559;

    static const int PROCESSPROTOTYPE__ACTIVATION = 560;

    static const int PROCESSPROTOTYPE__RUNNABLECALLS = 561;

    static const int CHAINEDPROCESSPROTOTYPE__PROTOTYPE = 562;

    static const int CHAINEDPROCESSPROTOTYPE__APPLY = 563;

    static const int CHAINEDPROCESSPROTOTYPE__OFFSET = 564;

    static const int GENERALPRECEDENCE__ORIGIN = 565;

    static const int GENERALPRECEDENCE__TARGET = 566;

    static const int ACCESSPRECEDENCESPEC__LABEL = 567;

    static const int ACCESSPRECEDENCESPEC__ORDERTYPE = 568;

    static const int ORDERPRECEDENCESPEC__ORDERTYPE = 569;

    static const int IDEPENDSON__DEPENDSON = 570;

    static const int DATADEPENDENCY__LABELS = 571;

    static const int DATADEPENDENCY__PARAMETERS = 572;

    static const int DATADEPENDENCY__CALLARGUMENTS = 573;

    static const int DATADEPENDENCY__CONTAININGRUNNABLE = 574;

    static const int RUNNABLEPARAMETER__CONTAININGRUNNABLE = 575;

    static const int RUNNABLEPARAMETER__DIRECTION = 576;

    static const int RUNNABLEPARAMETER__DATATYPE = 577;

    static const int RUNNABLE__EXECUTIONCONDITION = 578;

    static const int RUNNABLE__PARAMETERS = 579;

    static const int RUNNABLE__ACTIVITYGRAPH = 580;

    static const int RUNNABLE__ACTIVATIONS = 581;

    static const int RUNNABLE__CALLBACK = 582;

    static const int RUNNABLE__SERVICE = 583;

    static const int RUNNABLE__ASILLEVEL = 584;

    static const int RUNNABLE__SECTION = 585;

    static const int RUNNABLE__RUNNABLECALLS = 586;

    static const int RUNNABLE__REFERRINGCOMPONENTS = 587;

    static const int LABEL__DATATYPE = 588;

    static const int LABEL__CONSTANT = 589;

    static const int LABEL__BVOLATILE = 590;

    static const int LABEL__DATASTABILITY = 591;

    static const int LABEL__STABILITYLEVEL = 592;

    static const int LABEL__SECTION = 593;

    static const int LABEL__LABELACCESSES = 594;

    static const int LABEL__REFERRINGCOMPONENTS = 595;

    static const int CHANNEL__ELEMENTTYPE = 596;

    static const int CHANNEL__DEFAULTELEMENTS = 597;

    static const int CHANNEL__MAXELEMENTS = 598;

    static const int CHANNEL__CHANNELACCESSES = 599;

    static const int MODELABEL__MODE = 600;

    static const int MODELABEL__INITIALVALUE = 601;

    static const int SECTION__ASILLEVEL = 602;

    static const int SECTION__LABELS = 603;

    static const int SECTION__RUNNABLES = 604;

    static const int EXECUTIONNEED__NEEDS = 605;

    static const int NEEDENTRY__KEY = 606;

    static const int NEEDENTRY__VALUE = 607;

    static const int TICKS__DEFAULT = 608;

    static const int TICKS__EXTENDED = 609;

    static const int TICKSENTRY__KEY = 610;

    static const int TICKSENTRY__VALUE = 611;

    static const int MODELABELACCESS__DATA = 612;

    static const int MODELABELACCESS__ACCESS = 613;

    static const int MODELABELACCESS__VALUE = 614;

    static const int MODELABELACCESS__STEP = 615;

    static const int LABELACCESS__DATA = 616;

    static const int LABELACCESS__ACCESS = 617;

    static const int LABELACCESS__STATISTIC = 618;

    static const int LABELACCESS__TRANSMISSIONPOLICY = 619;

    static const int LABELACCESS__DATASTABILITY = 620;

    static const int LABELACCESS__IMPLEMENTATION = 621;

    static const int CHANNELACCESS__DATA = 622;

    static const int CHANNELACCESS__ELEMENTS = 623;

    static const int CHANNELACCESS__TRANSMISSIONPOLICY = 624;

    static const int CHANNELRECEIVE__RECEIVEOPERATION = 625;

    static const int CHANNELRECEIVE__DATAMUSTBENEW = 626;

    static const int CHANNELRECEIVE__ELEMENTINDEX = 627;

    static const int CHANNELRECEIVE__LOWERBOUND = 628;

    static const int SEMAPHOREACCESS__SEMAPHORE = 629;

    static const int SEMAPHOREACCESS__ACCESS = 630;

    static const int SEMAPHOREACCESS__WAITINGBEHAVIOUR = 631;

    static const int SENDERRECEIVERCOMMUNICATION__BUFFERED = 632;

    static const int SENDERRECEIVERCOMMUNICATION__LABEL = 633;

    static const int SENDERRECEIVERCOMMUNICATION__PORT = 634;

    static const int SENDERRECEIVERWRITE__NOTIFIEDRUNNABLES = 635;

    static const int SERVERCALL__SERVERRUNNABLE = 636;

    static const int SERVERCALL__PORT = 637;

    static const int SYNCHRONOUSSERVERCALL__WAITINGBEHAVIOUR = 638;

    static const int ASYNCHRONOUSSERVERCALL__RESULTRUNNABLE = 639;

    static const int GETRESULTSERVERCALL__BLOCKINGTYPE = 640;

    static const int GROUP__ORDERED = 641;

    static const int CALLARGUMENT__CONTAININGCALL = 642;

    static const int CALLARGUMENT__PARAMETER = 643;

    static const int RUNNABLECALL__RUNNABLE = 644;

    static const int RUNNABLECALL__ARGUMENTS = 645;

    static const int RUNNABLECALL__COUNTER = 646;

    static const int RUNNABLECALL__STATISTIC = 647;

    static const int CUSTOMEVENTTRIGGER__EVENT = 648;

    static const int STRUCT__ENTRIES = 649;

    static const int STRUCTENTRY__DATATYPE = 650;

    static const int ARRAY__NUMBERELEMENTS = 651;

    static const int ARRAY__DATATYPE = 652;

    static const int POINTER__DATATYPE = 653;

    static const int TYPEREF__TYPEDEF = 654;

    static const int ALIAS__TARGET = 655;

    static const int ALIAS__ALIAS = 656;

    static const int TYPEDEFINITION__SIZE = 657;

    static const int DATATYPEDEFINITION__DATATYPE = 658;

    static const int BASETYPEDEFINITION__ALIASES = 659;

    static const int PERIODICACTIVATION__MIN = 660;

    static const int PERIODICACTIVATION__MAX = 661;

    static const int PERIODICACTIVATION__RECURRENCE = 662;

    static const int PERIODICACTIVATION__OFFSET = 663;

    static const int VARIABLERATEACTIVATION__STEP = 664;

    static const int VARIABLERATEACTIVATION__OCCURRENCESPERSTEP = 665;

    static const int SPORADICACTIVATION__OCCURRENCE = 666;

    static const int SINGLEACTIVATION__MIN = 667;

    static const int SINGLEACTIVATION__MAX = 668;

    static const int EVENTACTIVATION__TRIGGERINGEVENTS = 669;

    static const int EVENTACTIVATION__COUNTER = 670;

    static const int LABELACCESSSTATISTIC__VALUE = 671;

    static const int LABELACCESSSTATISTIC__CACHEMISSES = 672;

    static const int RUNENTITYCALLSTATISTIC__STATISTIC = 673;

    // IDs for classifiers for class AbstractElementMappingConstraint 

    static const int ABSTRACTELEMENTMAPPINGCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ABSTRACTELEMENTMAPPINGCONSTRAINT__MEMORYCLASSIFICATION = MEMORYMAPPINGCONSTRAINT__MEMORYCLASSIFICATION;

    // IDs for classifiers for class AbstractEventChain 

    static const int ABSTRACTEVENTCHAIN__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ABSTRACTEVENTCHAIN__NAME = INAMED__NAME;

    static const int ABSTRACTEVENTCHAIN__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    // IDs for classifiers for class AbstractMemoryElement 

    static const int ABSTRACTMEMORYELEMENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ABSTRACTMEMORYELEMENT__NAME = INAMED__NAME;

    static const int ABSTRACTMEMORYELEMENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int ABSTRACTMEMORYELEMENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int ABSTRACTMEMORYELEMENT__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class AbstractProcess 

    static const int ABSTRACTPROCESS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ABSTRACTPROCESS__NAME = INAMED__NAME;

    static const int ABSTRACTPROCESS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int ABSTRACTPROCESS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int ABSTRACTPROCESS__TAGS = ITAGGABLE__TAGS;

    static const int ABSTRACTPROCESS__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int ABSTRACTPROCESS__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    // IDs for classifiers for class AccessPrecedenceSpec 

    static const int ACCESSPRECEDENCESPEC__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ACCESSPRECEDENCESPEC__ORIGIN = GENERALPRECEDENCE__ORIGIN;

    static const int ACCESSPRECEDENCESPEC__TARGET = GENERALPRECEDENCE__TARGET;

    // IDs for classifiers for class Activation 

    static const int ACTIVATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ACTIVATION__NAME = INAMED__NAME;

    static const int ACTIVATION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int ACTIVATION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int ACTIVATION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class ActivityGraph 

    static const int ACTIVITYGRAPH__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ACTIVITYGRAPH__ITEMS = IACTIVITYGRAPHITEMCONTAINER__ITEMS;

    // IDs for classifiers for class ActivityGraphItem 

    static const int ACTIVITYGRAPHITEM__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class AffinityConstraint 

    static const int AFFINITYCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int AFFINITYCONSTRAINT__NAME = INAMED__NAME;

    static const int AFFINITYCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int AFFINITYCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class Algorithm 

    static const int ALGORITHM__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Alias 

    static const int ALIAS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Amalthea 

    static const int AMALTHEA__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ArchitectureRequirement 

    static const int ARCHITECTUREREQUIREMENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ARCHITECTUREREQUIREMENT__NAME = INAMED__NAME;

    static const int ARCHITECTUREREQUIREMENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int ARCHITECTUREREQUIREMENT__SEVERITY = REQUIREMENT__SEVERITY;

    static const int ARCHITECTUREREQUIREMENT__LIMIT = REQUIREMENT__LIMIT;

    // IDs for classifiers for class Array 

    static const int ARRAY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ArrivalCurveEntry 

    static const int ARRIVALCURVEENTRY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ArrivalCurveStimulus 

    static const int ARRIVALCURVESTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ARRIVALCURVESTIMULUS__NAME = INAMED__NAME;

    static const int ARRIVALCURVESTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int ARRIVALCURVESTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int ARRIVALCURVESTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int ARRIVALCURVESTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int ARRIVALCURVESTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int ARRIVALCURVESTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    // IDs for classifiers for class AsynchronousServerCall 

    static const int ASYNCHRONOUSSERVERCALL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ASYNCHRONOUSSERVERCALL__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int ASYNCHRONOUSSERVERCALL__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int ASYNCHRONOUSSERVERCALL__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int ASYNCHRONOUSSERVERCALL__SERVERRUNNABLE = SERVERCALL__SERVERRUNNABLE;

    static const int ASYNCHRONOUSSERVERCALL__PORT = SERVERCALL__PORT;

    // IDs for classifiers for class BaseObject 

    static const int BASEOBJECT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class BaseTypeDefinition 

    static const int BASETYPEDEFINITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int BASETYPEDEFINITION__NAME = INAMED__NAME;

    static const int BASETYPEDEFINITION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int BASETYPEDEFINITION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int BASETYPEDEFINITION__NAMESPACE = INAMESPACEMEMBER__NAMESPACE;

    static const int BASETYPEDEFINITION__SIZE = TYPEDEFINITION__SIZE;

    // IDs for classifiers for class BigIntegerObject 

    // IDs for classifiers for class BooleanObject 

    // IDs for classifiers for class BoundedContinuousValueDistribution 

    static const int BOUNDEDCONTINUOUSVALUEDISTRIBUTION__LOWERBOUND = CONTINUOUSVALUEINTERVAL__LOWERBOUND;

    static const int BOUNDEDCONTINUOUSVALUEDISTRIBUTION__UPPERBOUND = CONTINUOUSVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class BoundedDiscreteValueDistribution 

    static const int BOUNDEDDISCRETEVALUEDISTRIBUTION__LOWERBOUND = DISCRETEVALUEINTERVAL__LOWERBOUND;

    static const int BOUNDEDDISCRETEVALUEDISTRIBUTION__UPPERBOUND = DISCRETEVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class BoundedTimeDistribution 

    static const int BOUNDEDTIMEDISTRIBUTION__LOWERBOUND = TIMEINTERVAL__LOWERBOUND;

    static const int BOUNDEDTIMEDISTRIBUTION__UPPERBOUND = TIMEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class Cache 

    static const int CACHE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CACHE__NAME = INAMED__NAME;

    static const int CACHE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CACHE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CACHE__TAGS = ITAGGABLE__TAGS;

    static const int CACHE__PORTS = HWMODULE__PORTS;

    static const int CACHE__POWERDOMAIN = HWMODULE__POWERDOMAIN;

    static const int CACHE__FREQUENCYDOMAIN = HWMODULE__FREQUENCYDOMAIN;

    // IDs for classifiers for class CacheDefinition 

    static const int CACHEDEFINITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CACHEDEFINITION__NAME = INAMED__NAME;

    static const int CACHEDEFINITION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CACHEDEFINITION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CACHEDEFINITION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class CallArgument 

    static const int CALLARGUMENT__NAME = INAMED__NAME;

    static const int CALLARGUMENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CALLARGUMENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CALLARGUMENT__DEPENDSON = IDEPENDSON__DEPENDSON;

    // IDs for classifiers for class ChainedProcessPrototype 

    static const int CHAINEDPROCESSPROTOTYPE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Channel 

    static const int CHANNEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CHANNEL__NAME = INAMED__NAME;

    static const int CHANNEL__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CHANNEL__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CHANNEL__TAGS = ITAGGABLE__TAGS;

    static const int CHANNEL__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int CHANNEL__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    static const int CHANNEL__DISPLAYNAME = IDISPLAYNAME__DISPLAYNAME;

    static const int CHANNEL__NAMESPACE = INAMESPACEMEMBER__NAMESPACE;

    // IDs for classifiers for class ChannelAccess 

    static const int CHANNELACCESS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CHANNELACCESS__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int CHANNELACCESS__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int CHANNELACCESS__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class ChannelEvent 

    static const int CHANNELEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CHANNELEVENT__NAME = INAMED__NAME;

    static const int CHANNELEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CHANNELEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CHANNELEVENT__TAGS = ITAGGABLE__TAGS;

    static const int CHANNELEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class ChannelReceive 

    static const int CHANNELRECEIVE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CHANNELRECEIVE__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int CHANNELRECEIVE__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int CHANNELRECEIVE__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int CHANNELRECEIVE__DATA = CHANNELACCESS__DATA;

    static const int CHANNELRECEIVE__ELEMENTS = CHANNELACCESS__ELEMENTS;

    static const int CHANNELRECEIVE__TRANSMISSIONPOLICY = CHANNELACCESS__TRANSMISSIONPOLICY;

    // IDs for classifiers for class ChannelSend 

    static const int CHANNELSEND__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CHANNELSEND__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int CHANNELSEND__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int CHANNELSEND__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int CHANNELSEND__DATA = CHANNELACCESS__DATA;

    static const int CHANNELSEND__ELEMENTS = CHANNELACCESS__ELEMENTS;

    static const int CHANNELSEND__TRANSMISSIONPOLICY = CHANNELACCESS__TRANSMISSIONPOLICY;

    // IDs for classifiers for class Classification 

    static const int CLASSIFICATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Classifier 

    static const int CLASSIFIER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CLASSIFIER__NAME = INAMED__NAME;

    static const int CLASSIFIER__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CLASSIFIER__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CLASSIFIER__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class ClearEvent 

    static const int CLEAREVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CLEAREVENT__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int CLEAREVENT__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int CLEAREVENT__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class Clock 

    static const int CLOCK__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CLOCK__NAME = INAMED__NAME;

    static const int CLOCK__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CLOCK__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class ClockFunction 

    static const int CLOCKFUNCTION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CLOCKFUNCTION__NAME = INAMED__NAME;

    static const int CLOCKFUNCTION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CLOCKFUNCTION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class ClockStep 

    static const int CLOCKSTEP__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ClockStepList 

    static const int CLOCKSTEPLIST__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CLOCKSTEPLIST__NAME = INAMED__NAME;

    static const int CLOCKSTEPLIST__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CLOCKSTEPLIST__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class CommonElements 

    static const int COMMONELEMENTS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Component 

    static const int COMPONENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int COMPONENT__NAME = INAMED__NAME;

    static const int COMPONENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int COMPONENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int COMPONENT__TAGS = ITAGGABLE__TAGS;

    static const int COMPONENT__NAMESPACE = INAMESPACEMEMBER__NAMESPACE;

    static const int COMPONENT__STRUCTURE = ICOMPONENTSTRUCTUREMEMBER__STRUCTURE;

    // IDs for classifiers for class ComponentEvent 

    static const int COMPONENTEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int COMPONENTEVENT__NAME = INAMED__NAME;

    static const int COMPONENTEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int COMPONENTEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int COMPONENTEVENT__TAGS = ITAGGABLE__TAGS;

    static const int COMPONENTEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class ComponentInstance 

    static const int COMPONENTINSTANCE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int COMPONENTINSTANCE__NAME = INAMED__NAME;

    static const int COMPONENTINSTANCE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int COMPONENTINSTANCE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int COMPONENTINSTANCE__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class ComponentInterface 

    static const int COMPONENTINTERFACE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int COMPONENTINTERFACE__NAME = INAMED__NAME;

    static const int COMPONENTINTERFACE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int COMPONENTINTERFACE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int COMPONENTINTERFACE__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class ComponentPort 

    static const int COMPONENTPORT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int COMPONENTPORT__NAME = INAMED__NAME;

    static const int COMPONENTPORT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int COMPONENTPORT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int COMPONENTPORT__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class ComponentScope 

    // IDs for classifiers for class ComponentsModel 

    static const int COMPONENTSMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int COMPONENTSMODEL__COMPONENTS = ICOMPONENTCONTAINER__COMPONENTS;

    static const int COMPONENTSMODEL__INTERFACES = IINTERFACECONTAINER__INTERFACES;

    // IDs for classifiers for class ComponentStructure 

    static const int COMPONENTSTRUCTURE__NAME = INAMED__NAME;

    static const int COMPONENTSTRUCTURE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int COMPONENTSTRUCTURE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class Composite 

    static const int COMPOSITE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int COMPOSITE__NAME = INAMED__NAME;

    static const int COMPOSITE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int COMPOSITE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int COMPOSITE__TAGS = ITAGGABLE__TAGS;

    static const int COMPOSITE__NAMESPACE = INAMESPACEMEMBER__NAMESPACE;

    static const int COMPOSITE__STRUCTURE = ICOMPONENTSTRUCTUREMEMBER__STRUCTURE;

    static const int COMPOSITE__PORTS = COMPONENT__PORTS;

    static const int COMPOSITE__PROCESSES = COMPONENT__PROCESSES;

    static const int COMPOSITE__RUNNABLES = COMPONENT__RUNNABLES;

    static const int COMPOSITE__LABELS = COMPONENT__LABELS;

    static const int COMPOSITE__SEMAPHORES = COMPONENT__SEMAPHORES;

    static const int COMPOSITE__OSEVENTS = COMPONENT__OSEVENTS;

    static const int COMPOSITE__COMPONENTINSTANCES = ISYSTEM__COMPONENTINSTANCES;

    static const int COMPOSITE__CONNECTORS = ISYSTEM__CONNECTORS;

    static const int COMPOSITE__GROUNDEDPORTS = ISYSTEM__GROUNDEDPORTS;

    static const int COMPOSITE__INNERPORTS = ISYSTEM__INNERPORTS;

    // IDs for classifiers for class CompoundType 

    static const int COMPOUNDTYPE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ComputationItem 

    static const int COMPUTATIONITEM__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int COMPUTATIONITEM__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int COMPUTATIONITEM__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int COMPUTATIONITEM__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class ConfigModel 

    static const int CONFIGMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ConnectionHandler 

    static const int CONNECTIONHANDLER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CONNECTIONHANDLER__NAME = INAMED__NAME;

    static const int CONNECTIONHANDLER__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CONNECTIONHANDLER__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CONNECTIONHANDLER__TAGS = ITAGGABLE__TAGS;

    static const int CONNECTIONHANDLER__PORTS = HWMODULE__PORTS;

    static const int CONNECTIONHANDLER__POWERDOMAIN = HWMODULE__POWERDOMAIN;

    static const int CONNECTIONHANDLER__FREQUENCYDOMAIN = HWMODULE__FREQUENCYDOMAIN;

    // IDs for classifiers for class ConnectionHandlerDefinition 

    static const int CONNECTIONHANDLERDEFINITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CONNECTIONHANDLERDEFINITION__NAME = INAMED__NAME;

    static const int CONNECTIONHANDLERDEFINITION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CONNECTIONHANDLERDEFINITION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CONNECTIONHANDLERDEFINITION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class Connector 

    static const int CONNECTOR__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CONNECTOR__NAME = INAMED__NAME;

    static const int CONNECTOR__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CONNECTOR__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class ConstantBandwidthServer 

    static const int CONSTANTBANDWIDTHSERVER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ConstantBandwidthServerWithCASH 

    static const int CONSTANTBANDWIDTHSERVERWITHCASH__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ConstraintsModel 

    static const int CONSTRAINTSMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ContinuousValueBetaDistribution 

    static const int CONTINUOUSVALUEBETADISTRIBUTION__LOWERBOUND = CONTINUOUSVALUEINTERVAL__LOWERBOUND;

    static const int CONTINUOUSVALUEBETADISTRIBUTION__UPPERBOUND = CONTINUOUSVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class ContinuousValueBoundaries 

    static const int CONTINUOUSVALUEBOUNDARIES__LOWERBOUND = CONTINUOUSVALUEINTERVAL__LOWERBOUND;

    static const int CONTINUOUSVALUEBOUNDARIES__UPPERBOUND = CONTINUOUSVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class ContinuousValueConstant 

    // IDs for classifiers for class ContinuousValueGaussDistribution 

    static const int CONTINUOUSVALUEGAUSSDISTRIBUTION__LOWERBOUND = TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__LOWERBOUND;

    static const int CONTINUOUSVALUEGAUSSDISTRIBUTION__UPPERBOUND = TRUNCATEDCONTINUOUSVALUEDISTRIBUTION__UPPERBOUND;

    // IDs for classifiers for class ContinuousValueHistogram 

    // IDs for classifiers for class ContinuousValueHistogramEntry 

    static const int CONTINUOUSVALUEHISTOGRAMENTRY__LOWERBOUND = CONTINUOUSVALUEINTERVAL__LOWERBOUND;

    static const int CONTINUOUSVALUEHISTOGRAMENTRY__UPPERBOUND = CONTINUOUSVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class ContinuousValueInterval 

    // IDs for classifiers for class ContinuousValueStatistics 

    static const int CONTINUOUSVALUESTATISTICS__LOWERBOUND = CONTINUOUSVALUEINTERVAL__LOWERBOUND;

    static const int CONTINUOUSVALUESTATISTICS__UPPERBOUND = CONTINUOUSVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class ContinuousValueUniformDistribution 

    static const int CONTINUOUSVALUEUNIFORMDISTRIBUTION__LOWERBOUND = CONTINUOUSVALUEINTERVAL__LOWERBOUND;

    static const int CONTINUOUSVALUEUNIFORMDISTRIBUTION__UPPERBOUND = CONTINUOUSVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class ContinuousValueWeibullEstimatorsDistribution 

    static const int CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__LOWERBOUND = CONTINUOUSVALUEINTERVAL__LOWERBOUND;

    static const int CONTINUOUSVALUEWEIBULLESTIMATORSDISTRIBUTION__UPPERBOUND = CONTINUOUSVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class CoreAllocationConstraint 

    static const int COREALLOCATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class CoreClassification 

    static const int CORECLASSIFICATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CORECLASSIFICATION__CONDITION = CLASSIFICATION__CONDITION;

    static const int CORECLASSIFICATION__GROUPING = CLASSIFICATION__GROUPING;

    // IDs for classifiers for class CoreClassifier 

    static const int CORECLASSIFIER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CORECLASSIFIER__NAME = INAMED__NAME;

    static const int CORECLASSIFIER__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CORECLASSIFIER__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CORECLASSIFIER__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class Counter 

    static const int COUNTER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class CountRequirementLimit 

    static const int COUNTREQUIREMENTLIMIT__LIMITTYPE = REQUIREMENTLIMIT__LIMITTYPE;

    // IDs for classifiers for class CPUPercentageRequirementLimit 

    static const int CPUPERCENTAGEREQUIREMENTLIMIT__LIMITTYPE = REQUIREMENTLIMIT__LIMITTYPE;

    // IDs for classifiers for class CustomActivation 

    static const int CUSTOMACTIVATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CUSTOMACTIVATION__NAME = INAMED__NAME;

    static const int CUSTOMACTIVATION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CUSTOMACTIVATION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CUSTOMACTIVATION__TAGS = ITAGGABLE__TAGS;

    static const int CUSTOMACTIVATION__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class CustomEntity 

    static const int CUSTOMENTITY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CUSTOMENTITY__NAME = INAMED__NAME;

    static const int CUSTOMENTITY__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CUSTOMENTITY__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CUSTOMENTITY__TAGS = ITAGGABLE__TAGS;

    static const int CUSTOMENTITY__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int CUSTOMENTITY__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    static const int CUSTOMENTITY__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class CustomEvent 

    static const int CUSTOMEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CUSTOMEVENT__NAME = INAMED__NAME;

    static const int CUSTOMEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CUSTOMEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CUSTOMEVENT__TAGS = ITAGGABLE__TAGS;

    static const int CUSTOMEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class CustomEventTrigger 

    static const int CUSTOMEVENTTRIGGER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CUSTOMEVENTTRIGGER__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int CUSTOMEVENTTRIGGER__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int CUSTOMEVENTTRIGGER__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class CustomProperty 

    // IDs for classifiers for class CustomStimulus 

    static const int CUSTOMSTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int CUSTOMSTIMULUS__NAME = INAMED__NAME;

    static const int CUSTOMSTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int CUSTOMSTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int CUSTOMSTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int CUSTOMSTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int CUSTOMSTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int CUSTOMSTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    static const int CUSTOMSTIMULUS__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class DataAge 

    // IDs for classifiers for class DataAgeConstraint 

    static const int DATAAGECONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int DATAAGECONSTRAINT__NAME = INAMED__NAME;

    static const int DATAAGECONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int DATAAGECONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class DataAgeCycle 

    // IDs for classifiers for class DataAgeTime 

    // IDs for classifiers for class DataCoherencyGroup 

    static const int DATACOHERENCYGROUP__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int DATACOHERENCYGROUP__NAME = INAMED__NAME;

    static const int DATACOHERENCYGROUP__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int DATACOHERENCYGROUP__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class DataConstraint 

    // IDs for classifiers for class DataConstraintTarget 

    // IDs for classifiers for class DataDependency 

    static const int DATADEPENDENCY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class DataGroupScope 

    // IDs for classifiers for class DataPairingConstraint 

    static const int DATAPAIRINGCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int DATAPAIRINGCONSTRAINT__NAME = INAMED__NAME;

    static const int DATAPAIRINGCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int DATAPAIRINGCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int DATAPAIRINGCONSTRAINT__TARGET = DATACONSTRAINT__TARGET;

    // IDs for classifiers for class DataRate 

    // IDs for classifiers for class DataRateComparable 

    // IDs for classifiers for class DataSeparationConstraint 

    static const int DATASEPARATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int DATASEPARATIONCONSTRAINT__NAME = INAMED__NAME;

    static const int DATASEPARATIONCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int DATASEPARATIONCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int DATASEPARATIONCONSTRAINT__TARGET = DATACONSTRAINT__TARGET;

    // IDs for classifiers for class DataSize 

    // IDs for classifiers for class DataStability 

    // IDs for classifiers for class DataStabilityGroup 

    static const int DATASTABILITYGROUP__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int DATASTABILITYGROUP__NAME = INAMED__NAME;

    static const int DATASTABILITYGROUP__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int DATASTABILITYGROUP__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class DataType 

    // IDs for classifiers for class DataTypeDefinition 

    static const int DATATYPEDEFINITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int DATATYPEDEFINITION__NAME = INAMED__NAME;

    static const int DATATYPEDEFINITION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int DATATYPEDEFINITION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int DATATYPEDEFINITION__NAMESPACE = INAMESPACEMEMBER__NAMESPACE;

    static const int DATATYPEDEFINITION__SIZE = TYPEDEFINITION__SIZE;

    // IDs for classifiers for class DeadlineMonotonic 

    static const int DEADLINEMONOTONIC__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class DeferrableServer 

    static const int DEFERRABLESERVER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class DelayConstraint 

    static const int DELAYCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int DELAYCONSTRAINT__NAME = INAMED__NAME;

    static const int DELAYCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int DELAYCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class DiscreteValueBetaDistribution 

    static const int DISCRETEVALUEBETADISTRIBUTION__LOWERBOUND = DISCRETEVALUEINTERVAL__LOWERBOUND;

    static const int DISCRETEVALUEBETADISTRIBUTION__UPPERBOUND = DISCRETEVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class DiscreteValueBoundaries 

    static const int DISCRETEVALUEBOUNDARIES__LOWERBOUND = DISCRETEVALUEINTERVAL__LOWERBOUND;

    static const int DISCRETEVALUEBOUNDARIES__UPPERBOUND = DISCRETEVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class DiscreteValueConstant 

    // IDs for classifiers for class DiscreteValueGaussDistribution 

    static const int DISCRETEVALUEGAUSSDISTRIBUTION__LOWERBOUND = TRUNCATEDDISCRETEVALUEDISTRIBUTION__LOWERBOUND;

    static const int DISCRETEVALUEGAUSSDISTRIBUTION__UPPERBOUND = TRUNCATEDDISCRETEVALUEDISTRIBUTION__UPPERBOUND;

    // IDs for classifiers for class DiscreteValueHistogram 

    // IDs for classifiers for class DiscreteValueHistogramEntry 

    static const int DISCRETEVALUEHISTOGRAMENTRY__LOWERBOUND = DISCRETEVALUEINTERVAL__LOWERBOUND;

    static const int DISCRETEVALUEHISTOGRAMENTRY__UPPERBOUND = DISCRETEVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class DiscreteValueInterval 

    // IDs for classifiers for class DiscreteValueStatistics 

    static const int DISCRETEVALUESTATISTICS__LOWERBOUND = DISCRETEVALUEINTERVAL__LOWERBOUND;

    static const int DISCRETEVALUESTATISTICS__UPPERBOUND = DISCRETEVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class DiscreteValueUniformDistribution 

    static const int DISCRETEVALUEUNIFORMDISTRIBUTION__LOWERBOUND = DISCRETEVALUEINTERVAL__LOWERBOUND;

    static const int DISCRETEVALUEUNIFORMDISTRIBUTION__UPPERBOUND = DISCRETEVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class DiscreteValueWeibullEstimatorsDistribution 

    static const int DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__LOWERBOUND = DISCRETEVALUEINTERVAL__LOWERBOUND;

    static const int DISCRETEVALUEWEIBULLESTIMATORSDISTRIBUTION__UPPERBOUND = DISCRETEVALUEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class DoubleObject 

    // IDs for classifiers for class DynamicPriority 

    static const int DYNAMICPRIORITY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class EarliestDeadlineFirst 

    static const int EARLIESTDEADLINEFIRST__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class EarlyReleaseFairPD2 

    static const int EARLYRELEASEFAIRPD2__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EARLYRELEASEFAIRPD2__QUANTSIZENS = PFAIR__QUANTSIZENS;

    // IDs for classifiers for class EnforcedMigration 

    static const int ENFORCEDMIGRATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ENFORCEDMIGRATION__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int ENFORCEDMIGRATION__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int ENFORCEDMIGRATION__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class EntityEvent 

    static const int ENTITYEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ENTITYEVENT__NAME = INAMED__NAME;

    static const int ENTITYEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int ENTITYEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int ENTITYEVENT__TAGS = ITAGGABLE__TAGS;

    static const int ENTITYEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class EnumMode 

    static const int ENUMMODE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ENUMMODE__NAME = INAMED__NAME;

    static const int ENUMMODE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int ENUMMODE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class Event 

    static const int EVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EVENT__NAME = INAMED__NAME;

    static const int EVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int EVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int EVENT__TAGS = ITAGGABLE__TAGS;

    static const int EVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class EventActivation 

    static const int EVENTACTIVATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EVENTACTIVATION__NAME = INAMED__NAME;

    static const int EVENTACTIVATION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int EVENTACTIVATION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int EVENTACTIVATION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class EventChain 

    static const int EVENTCHAIN__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EVENTCHAIN__NAME = INAMED__NAME;

    static const int EVENTCHAIN__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int EVENTCHAIN__STIMULUS = ABSTRACTEVENTCHAIN__STIMULUS;

    static const int EVENTCHAIN__RESPONSE = ABSTRACTEVENTCHAIN__RESPONSE;

    static const int EVENTCHAIN__ITEMS = ABSTRACTEVENTCHAIN__ITEMS;

    static const int EVENTCHAIN__ITEMTYPE = ABSTRACTEVENTCHAIN__ITEMTYPE;

    static const int EVENTCHAIN__MINITEMSCOMPLETED = ABSTRACTEVENTCHAIN__MINITEMSCOMPLETED;

    static const int EVENTCHAIN__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class EventChainContainer 

    static const int EVENTCHAINCONTAINER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class EventChainItem 

    // IDs for classifiers for class EventChainLatencyConstraint 

    static const int EVENTCHAINLATENCYCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EVENTCHAINLATENCYCONSTRAINT__NAME = INAMED__NAME;

    static const int EVENTCHAINLATENCYCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int EVENTCHAINLATENCYCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class EventChainReference 

    static const int EVENTCHAINREFERENCE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class EventChainSynchronizationConstraint 

    static const int EVENTCHAINSYNCHRONIZATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EVENTCHAINSYNCHRONIZATIONCONSTRAINT__NAME = INAMED__NAME;

    static const int EVENTCHAINSYNCHRONIZATIONCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int EVENTCHAINSYNCHRONIZATIONCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int EVENTCHAINSYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED = SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED;

    static const int EVENTCHAINSYNCHRONIZATIONCONSTRAINT__TOLERANCE = SYNCHRONIZATIONCONSTRAINT__TOLERANCE;

    // IDs for classifiers for class EventConfig 

    static const int EVENTCONFIG__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EVENTCONFIG__NAME = INAMED__NAME;

    static const int EVENTCONFIG__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    // IDs for classifiers for class EventMask 

    static const int EVENTMASK__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class EventModel 

    static const int EVENTMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class EventSet 

    static const int EVENTSET__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EVENTSET__NAME = INAMED__NAME;

    static const int EVENTSET__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int EVENTSET__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int EVENTSET__TAGS = ITAGGABLE__TAGS;

    static const int EVENTSET__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class EventStimulus 

    static const int EVENTSTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EVENTSTIMULUS__NAME = INAMED__NAME;

    static const int EVENTSTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int EVENTSTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int EVENTSTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int EVENTSTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int EVENTSTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int EVENTSTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    // IDs for classifiers for class EventSynchronizationConstraint 

    static const int EVENTSYNCHRONIZATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EVENTSYNCHRONIZATIONCONSTRAINT__NAME = INAMED__NAME;

    static const int EVENTSYNCHRONIZATIONCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int EVENTSYNCHRONIZATIONCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int EVENTSYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED = SYNCHRONIZATIONCONSTRAINT__MULTIPLEOCCURRENCESALLOWED;

    static const int EVENTSYNCHRONIZATIONCONSTRAINT__TOLERANCE = SYNCHRONIZATIONCONSTRAINT__TOLERANCE;

    // IDs for classifiers for class ExecutionNeed 

    static const int EXECUTIONNEED__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int EXECUTIONNEED__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int EXECUTIONNEED__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int EXECUTIONNEED__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class FixedPeriodic 

    // IDs for classifiers for class FixedPriority 

    static const int FIXEDPRIORITY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class FixedPriorityPreemptive 

    static const int FIXEDPRIORITYPREEMPTIVE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class FixedPriorityPreemptiveWithBudgetEnforcement 

    static const int FIXEDPRIORITYPREEMPTIVEWITHBUDGETENFORCEMENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class FloatObject 

    // IDs for classifiers for class Frequency 

    // IDs for classifiers for class FrequencyDomain 

    static const int FREQUENCYDOMAIN__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int FREQUENCYDOMAIN__NAME = INAMED__NAME;

    static const int FREQUENCYDOMAIN__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int FREQUENCYDOMAIN__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int FREQUENCYDOMAIN__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class FrequencyRequirementLimit 

    static const int FREQUENCYREQUIREMENTLIMIT__LIMITTYPE = REQUIREMENTLIMIT__LIMITTYPE;

    // IDs for classifiers for class GeneralPrecedence 

    static const int GENERALPRECEDENCE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class GetResultServerCall 

    static const int GETRESULTSERVERCALL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int GETRESULTSERVERCALL__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int GETRESULTSERVERCALL__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int GETRESULTSERVERCALL__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int GETRESULTSERVERCALL__SERVERRUNNABLE = SERVERCALL__SERVERRUNNABLE;

    static const int GETRESULTSERVERCALL__PORT = SERVERCALL__PORT;

    // IDs for classifiers for class Group 

    static const int GROUP__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int GROUP__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int GROUP__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int GROUP__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int GROUP__NAME = INAMED__NAME;

    static const int GROUP__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int GROUP__ITEMS = IACTIVITYGRAPHITEMCONTAINER__ITEMS;

    // IDs for classifiers for class Grouping 

    static const int GROUPING__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class HwAccessElement 

    static const int HWACCESSELEMENT__TAGS = ITAGGABLE__TAGS;

    static const int HWACCESSELEMENT__NAME = INAMED__NAME;

    static const int HWACCESSELEMENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    // IDs for classifiers for class HwAccessPath 

    static const int HWACCESSPATH__SOURCE = HWPATH__SOURCE;

    static const int HWACCESSPATH__DESTINATION = HWPATH__DESTINATION;

    static const int HWACCESSPATH__NAME = INAMED__NAME;

    static const int HWACCESSPATH__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    // IDs for classifiers for class HwConnection 

    static const int HWCONNECTION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int HWCONNECTION__NAME = INAMED__NAME;

    static const int HWCONNECTION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWCONNECTION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int HWCONNECTION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class HwDefinition 

    static const int HWDEFINITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int HWDEFINITION__NAME = INAMED__NAME;

    static const int HWDEFINITION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWDEFINITION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int HWDEFINITION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class HwDestination 

    static const int HWDESTINATION__NAME = INAMED__NAME;

    static const int HWDESTINATION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWDESTINATION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class HwDomain 

    static const int HWDOMAIN__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int HWDOMAIN__NAME = INAMED__NAME;

    static const int HWDOMAIN__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWDOMAIN__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int HWDOMAIN__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class HwFeature 

    static const int HWFEATURE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int HWFEATURE__NAME = INAMED__NAME;

    static const int HWFEATURE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWFEATURE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class HwFeatureCategory 

    static const int HWFEATURECATEGORY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int HWFEATURECATEGORY__NAME = INAMED__NAME;

    static const int HWFEATURECATEGORY__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWFEATURECATEGORY__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int HWFEATURECATEGORY__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class HWModel 

    static const int HWMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class HwModule 

    static const int HWMODULE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int HWMODULE__NAME = INAMED__NAME;

    static const int HWMODULE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWMODULE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int HWMODULE__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class HwPath 

    // IDs for classifiers for class HwPathElement 

    static const int HWPATHELEMENT__NAME = INAMED__NAME;

    static const int HWPATHELEMENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWPATHELEMENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class HwPort 

    static const int HWPORT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int HWPORT__NAME = INAMED__NAME;

    static const int HWPORT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWPORT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int HWPORT__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class HwStructure 

    static const int HWSTRUCTURE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int HWSTRUCTURE__NAME = INAMED__NAME;

    static const int HWSTRUCTURE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int HWSTRUCTURE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int HWSTRUCTURE__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class IActivityGraphItemContainer 

    // IDs for classifiers for class IAnnotatable 

    // IDs for classifiers for class IComponentContainer 

    // IDs for classifiers for class IComponentStructureMember 

    // IDs for classifiers for class IContinuousValueDeviation 

    // IDs for classifiers for class IDependsOn 

    // IDs for classifiers for class IDescription 

    // IDs for classifiers for class IDiscreteValueDeviation 

    // IDs for classifiers for class IDisplayName 

    // IDs for classifiers for class IInterfaceContainer 

    // IDs for classifiers for class INamed 

    // IDs for classifiers for class INamespaceMember 

    // IDs for classifiers for class IntegerObject 

    // IDs for classifiers for class InterfaceChannel 

    // IDs for classifiers for class InterProcessStimulus 

    static const int INTERPROCESSSTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int INTERPROCESSSTIMULUS__NAME = INAMED__NAME;

    static const int INTERPROCESSSTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int INTERPROCESSSTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int INTERPROCESSSTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int INTERPROCESSSTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int INTERPROCESSSTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int INTERPROCESSSTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    // IDs for classifiers for class InterProcessTrigger 

    static const int INTERPROCESSTRIGGER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int INTERPROCESSTRIGGER__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int INTERPROCESSTRIGGER__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int INTERPROCESSTRIGGER__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class InterruptController 

    static const int INTERRUPTCONTROLLER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int INTERRUPTCONTROLLER__NAME = INAMED__NAME;

    static const int INTERRUPTCONTROLLER__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int INTERRUPTCONTROLLER__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int INTERRUPTCONTROLLER__COMPUTATIONITEMS = SCHEDULER__COMPUTATIONITEMS;

    static const int INTERRUPTCONTROLLER__SCHEDULERALLOCATIONS = SCHEDULER__SCHEDULERALLOCATIONS;

    static const int INTERRUPTCONTROLLER__RUNNABLEALLOCATIONS = SCHEDULER__RUNNABLEALLOCATIONS;

    // IDs for classifiers for class InterruptSchedulingAlgorithm 

    static const int INTERRUPTSCHEDULINGALGORITHM__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class IReferable 

    static const int IREFERABLE__NAME = INAMED__NAME;

    static const int IREFERABLE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    // IDs for classifiers for class ISR 

    static const int ISR__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ISR__NAME = INAMED__NAME;

    static const int ISR__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int ISR__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int ISR__TAGS = ITAGGABLE__TAGS;

    static const int ISR__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int ISR__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    static const int ISR__REFERRINGCOMPONENTS = ABSTRACTPROCESS__REFERRINGCOMPONENTS;

    static const int ISR__ACTIVITYGRAPH = PROCESS__ACTIVITYGRAPH;

    static const int ISR__STIMULI = PROCESS__STIMULI;

    // IDs for classifiers for class ISRAllocation 

    static const int ISRALLOCATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ISystem 

    // IDs for classifiers for class ITaggable 

    // IDs for classifiers for class ITimeDeviation 

    // IDs for classifiers for class Label 

    static const int LABEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int LABEL__NAME = INAMED__NAME;

    static const int LABEL__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int LABEL__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int LABEL__TAGS = ITAGGABLE__TAGS;

    static const int LABEL__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int LABEL__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    static const int LABEL__DISPLAYNAME = IDISPLAYNAME__DISPLAYNAME;

    static const int LABEL__NAMESPACE = INAMESPACEMEMBER__NAMESPACE;

    // IDs for classifiers for class LabelAccess 

    static const int LABELACCESS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int LABELACCESS__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int LABELACCESS__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int LABELACCESS__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int LABELACCESS__TAGS = ITAGGABLE__TAGS;

    static const int LABELACCESS__DEPENDSON = IDEPENDSON__DEPENDSON;

    // IDs for classifiers for class LabelAccessStatistic 

    static const int LABELACCESSSTATISTIC__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class LabelEntityGroup 

    static const int LABELENTITYGROUP__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class LabelEvent 

    static const int LABELEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int LABELEVENT__NAME = INAMED__NAME;

    static const int LABELEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int LABELEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int LABELEVENT__TAGS = ITAGGABLE__TAGS;

    static const int LABELEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class LabelGroup 

    // IDs for classifiers for class LeastLocalRemainingExecutionTimeFirst 

    static const int LEASTLOCALREMAININGEXECUTIONTIMEFIRST__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ListObject 

    // IDs for classifiers for class LongObject 

    // IDs for classifiers for class MainInterface 

    static const int MAININTERFACE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MAININTERFACE__NAME = INAMED__NAME;

    static const int MAININTERFACE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int MAININTERFACE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int MAININTERFACE__TAGS = ITAGGABLE__TAGS;

    static const int MAININTERFACE__DATATYPE = COMPONENTINTERFACE__DATATYPE;

    static const int MAININTERFACE__SUBINTERFACES = COMPONENTINTERFACE__SUBINTERFACES;

    static const int MAININTERFACE__NAMESPACE = INAMESPACEMEMBER__NAMESPACE;

    static const int MAININTERFACE__STRUCTURE = ICOMPONENTSTRUCTUREMEMBER__STRUCTURE;

    // IDs for classifiers for class MappingModel 

    static const int MAPPINGMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Memory 

    static const int MEMORY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MEMORY__NAME = INAMED__NAME;

    static const int MEMORY__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int MEMORY__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int MEMORY__TAGS = ITAGGABLE__TAGS;

    static const int MEMORY__PORTS = HWMODULE__PORTS;

    static const int MEMORY__POWERDOMAIN = HWMODULE__POWERDOMAIN;

    static const int MEMORY__FREQUENCYDOMAIN = HWMODULE__FREQUENCYDOMAIN;

    // IDs for classifiers for class MemoryClassification 

    static const int MEMORYCLASSIFICATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MEMORYCLASSIFICATION__CONDITION = CLASSIFICATION__CONDITION;

    static const int MEMORYCLASSIFICATION__GROUPING = CLASSIFICATION__GROUPING;

    // IDs for classifiers for class MemoryClassifier 

    static const int MEMORYCLASSIFIER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MEMORYCLASSIFIER__NAME = INAMED__NAME;

    static const int MEMORYCLASSIFIER__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int MEMORYCLASSIFIER__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int MEMORYCLASSIFIER__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class MemoryDefinition 

    static const int MEMORYDEFINITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MEMORYDEFINITION__NAME = INAMED__NAME;

    static const int MEMORYDEFINITION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int MEMORYDEFINITION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int MEMORYDEFINITION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class MemoryMapping 

    static const int MEMORYMAPPING__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class MemoryMappingConstraint 

    static const int MEMORYMAPPINGCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class MinAvgMaxStatistic 

    // IDs for classifiers for class Mode 

    static const int MODE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODE__NAME = INAMED__NAME;

    static const int MODE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int MODE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class ModeAssignment 

    static const int MODEASSIGNMENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODEASSIGNMENT__LABEL = MODEVALUE__LABEL;

    static const int MODEASSIGNMENT__VALUE = MODEVALUE__VALUE;

    // IDs for classifiers for class ModeCondition 

    static const int MODECONDITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ModeConditionConjunction 

    static const int MODECONDITIONCONJUNCTION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ModeConditionDisjunction 

    static const int MODECONDITIONDISJUNCTION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ModeConditionDisjunctionEntry 

    static const int MODECONDITIONDISJUNCTIONENTRY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ModeLabel 

    static const int MODELABEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODELABEL__NAME = INAMED__NAME;

    static const int MODELABEL__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int MODELABEL__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int MODELABEL__TAGS = ITAGGABLE__TAGS;

    static const int MODELABEL__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int MODELABEL__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    static const int MODELABEL__DISPLAYNAME = IDISPLAYNAME__DISPLAYNAME;

    // IDs for classifiers for class ModeLabelAccess 

    static const int MODELABELACCESS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODELABELACCESS__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int MODELABELACCESS__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int MODELABELACCESS__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class ModeLabelCondition 

    static const int MODELABELCONDITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODELABELCONDITION__RELATION = MODECONDITION__RELATION;

    // IDs for classifiers for class ModeLiteral 

    static const int MODELITERAL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODELITERAL__NAME = INAMED__NAME;

    static const int MODELITERAL__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int MODELITERAL__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class ModeSwitch 

    static const int MODESWITCH__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODESWITCH__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int MODESWITCH__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int MODESWITCH__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class ModeSwitchDefault 

    static const int MODESWITCHDEFAULT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODESWITCHDEFAULT__ITEMS = IACTIVITYGRAPHITEMCONTAINER__ITEMS;

    // IDs for classifiers for class ModeSwitchEntry 

    static const int MODESWITCHENTRY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODESWITCHENTRY__NAME = INAMED__NAME;

    static const int MODESWITCHENTRY__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int MODESWITCHENTRY__ITEMS = IACTIVITYGRAPHITEMCONTAINER__ITEMS;

    // IDs for classifiers for class ModeValue 

    static const int MODEVALUE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ModeValueCondition 

    static const int MODEVALUECONDITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int MODEVALUECONDITION__LABEL = MODEVALUE__LABEL;

    static const int MODEVALUECONDITION__VALUE = MODEVALUE__VALUE;

    static const int MODEVALUECONDITION__RELATION = MODECONDITION__RELATION;

    // IDs for classifiers for class ModeValueList 

    static const int MODEVALUELIST__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ModeValueMapEntry 

    // IDs for classifiers for class Namespace 

    static const int NAMESPACE__NAME = INAMED__NAME;

    static const int NAMESPACE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int NAMESPACE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class NeedEntry 

    // IDs for classifiers for class NonAtomicDataCoherency 

    // IDs for classifiers for class NumericMode 

    static const int NUMERICMODE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int NUMERICMODE__NAME = INAMED__NAME;

    static const int NUMERICMODE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int NUMERICMODE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class NumericStatistic 

    // IDs for classifiers for class OperatingSystem 

    static const int OPERATINGSYSTEM__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int OPERATINGSYSTEM__NAME = INAMED__NAME;

    static const int OPERATINGSYSTEM__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    // IDs for classifiers for class OrderPrecedenceSpec 

    static const int ORDERPRECEDENCESPEC__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int ORDERPRECEDENCESPEC__ORIGIN = GENERALPRECEDENCE__ORIGIN;

    static const int ORDERPRECEDENCESPEC__TARGET = GENERALPRECEDENCE__TARGET;

    // IDs for classifiers for class OsAPIOverhead 

    static const int OSAPIOVERHEAD__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class OsDataConsistency 

    static const int OSDATACONSISTENCY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class OSEK 

    static const int OSEK__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class OsEvent 

    static const int OSEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int OSEVENT__NAME = INAMED__NAME;

    static const int OSEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int OSEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int OSEVENT__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class OsISROverhead 

    static const int OSISROVERHEAD__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class OSModel 

    static const int OSMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class OsOverhead 

    static const int OSOVERHEAD__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int OSOVERHEAD__NAME = INAMED__NAME;

    static const int OSOVERHEAD__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int OSOVERHEAD__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class PairingConstraint 

    static const int PAIRINGCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PAIRINGCONSTRAINT__NAME = INAMED__NAME;

    static const int PAIRINGCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PAIRINGCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class ParameterExtension 

    // IDs for classifiers for class PartlyEarlyReleaseFairPD2 

    static const int PARTLYEARLYRELEASEFAIRPD2__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PARTLYEARLYRELEASEFAIRPD2__QUANTSIZENS = PFAIR__QUANTSIZENS;

    // IDs for classifiers for class PartlyPFairPD2 

    static const int PARTLYPFAIRPD2__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PARTLYPFAIRPD2__QUANTSIZENS = PFAIR__QUANTSIZENS;

    // IDs for classifiers for class PercentageRequirementLimit 

    static const int PERCENTAGEREQUIREMENTLIMIT__LIMITTYPE = REQUIREMENTLIMIT__LIMITTYPE;

    // IDs for classifiers for class PeriodicActivation 

    static const int PERIODICACTIVATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PERIODICACTIVATION__NAME = INAMED__NAME;

    static const int PERIODICACTIVATION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PERIODICACTIVATION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PERIODICACTIVATION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class PeriodicBurstStimulus 

    static const int PERIODICBURSTSTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PERIODICBURSTSTIMULUS__NAME = INAMED__NAME;

    static const int PERIODICBURSTSTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PERIODICBURSTSTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PERIODICBURSTSTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int PERIODICBURSTSTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int PERIODICBURSTSTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int PERIODICBURSTSTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    static const int PERIODICBURSTSTIMULUS__RECURRENCE = FIXEDPERIODIC__RECURRENCE;

    static const int PERIODICBURSTSTIMULUS__OFFSET = FIXEDPERIODIC__OFFSET;

    // IDs for classifiers for class PeriodicStimulus 

    static const int PERIODICSTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PERIODICSTIMULUS__NAME = INAMED__NAME;

    static const int PERIODICSTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PERIODICSTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PERIODICSTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int PERIODICSTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int PERIODICSTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int PERIODICSTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    static const int PERIODICSTIMULUS__RECURRENCE = FIXEDPERIODIC__RECURRENCE;

    static const int PERIODICSTIMULUS__OFFSET = FIXEDPERIODIC__OFFSET;

    // IDs for classifiers for class PeriodicSyntheticStimulus 

    static const int PERIODICSYNTHETICSTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PERIODICSYNTHETICSTIMULUS__NAME = INAMED__NAME;

    static const int PERIODICSYNTHETICSTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PERIODICSYNTHETICSTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PERIODICSYNTHETICSTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int PERIODICSYNTHETICSTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int PERIODICSYNTHETICSTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int PERIODICSYNTHETICSTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    static const int PERIODICSYNTHETICSTIMULUS__RECURRENCE = FIXEDPERIODIC__RECURRENCE;

    static const int PERIODICSYNTHETICSTIMULUS__OFFSET = FIXEDPERIODIC__OFFSET;

    // IDs for classifiers for class Pfair 

    static const int PFAIR__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class PfairPD2 

    static const int PFAIRPD2__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PFAIRPD2__QUANTSIZENS = PFAIR__QUANTSIZENS;

    // IDs for classifiers for class PhysicalSectionConstraint 

    static const int PHYSICALSECTIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PHYSICALSECTIONCONSTRAINT__NAME = INAMED__NAME;

    static const int PHYSICALSECTIONCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PHYSICALSECTIONCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class PhysicalSectionMapping 

    static const int PHYSICALSECTIONMAPPING__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PHYSICALSECTIONMAPPING__NAME = INAMED__NAME;

    static const int PHYSICALSECTIONMAPPING__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PHYSICALSECTIONMAPPING__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class Pointer 

    static const int POINTER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class PollingPeriodicServer 

    static const int POLLINGPERIODICSERVER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class PowerDomain 

    static const int POWERDOMAIN__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int POWERDOMAIN__NAME = INAMED__NAME;

    static const int POWERDOMAIN__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int POWERDOMAIN__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int POWERDOMAIN__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class PriorityBased 

    static const int PRIORITYBASED__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class PriorityBasedRoundRobin 

    static const int PRIORITYBASEDROUNDROBIN__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ProbabilitySwitch 

    static const int PROBABILITYSWITCH__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROBABILITYSWITCH__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int PROBABILITYSWITCH__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int PROBABILITYSWITCH__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class ProbabilitySwitchEntry 

    static const int PROBABILITYSWITCHENTRY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROBABILITYSWITCHENTRY__ITEMS = IACTIVITYGRAPHITEMCONTAINER__ITEMS;

    // IDs for classifiers for class Process 

    static const int PROCESS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESS__NAME = INAMED__NAME;

    static const int PROCESS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PROCESS__TAGS = ITAGGABLE__TAGS;

    static const int PROCESS__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int PROCESS__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    static const int PROCESS__REFERRINGCOMPONENTS = ABSTRACTPROCESS__REFERRINGCOMPONENTS;

    // IDs for classifiers for class ProcessAllocationConstraint 

    static const int PROCESSALLOCATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSALLOCATIONCONSTRAINT__CORECLASSIFICATION = COREALLOCATIONCONSTRAINT__CORECLASSIFICATION;

    // IDs for classifiers for class ProcessChain 

    static const int PROCESSCHAIN__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSCHAIN__NAME = INAMED__NAME;

    static const int PROCESSCHAIN__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSCHAIN__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class ProcessChainEvent 

    static const int PROCESSCHAINEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSCHAINEVENT__NAME = INAMED__NAME;

    static const int PROCESSCHAINEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSCHAINEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PROCESSCHAINEVENT__TAGS = ITAGGABLE__TAGS;

    static const int PROCESSCHAINEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class ProcessChainRequirement 

    static const int PROCESSCHAINREQUIREMENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSCHAINREQUIREMENT__NAME = INAMED__NAME;

    static const int PROCESSCHAINREQUIREMENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSCHAINREQUIREMENT__SEVERITY = REQUIREMENT__SEVERITY;

    static const int PROCESSCHAINREQUIREMENT__LIMIT = REQUIREMENT__LIMIT;

    // IDs for classifiers for class ProcessConstraint 

    // IDs for classifiers for class ProcessConstraintTarget 

    // IDs for classifiers for class ProcessEntityGroup 

    static const int PROCESSENTITYGROUP__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ProcessEvent 

    static const int PROCESSEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSEVENT__NAME = INAMED__NAME;

    static const int PROCESSEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PROCESSEVENT__TAGS = ITAGGABLE__TAGS;

    static const int PROCESSEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class ProcessGroup 

    // IDs for classifiers for class ProcessingUnit 

    static const int PROCESSINGUNIT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSINGUNIT__NAME = INAMED__NAME;

    static const int PROCESSINGUNIT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSINGUNIT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PROCESSINGUNIT__TAGS = ITAGGABLE__TAGS;

    static const int PROCESSINGUNIT__PORTS = HWMODULE__PORTS;

    static const int PROCESSINGUNIT__POWERDOMAIN = HWMODULE__POWERDOMAIN;

    static const int PROCESSINGUNIT__FREQUENCYDOMAIN = HWMODULE__FREQUENCYDOMAIN;

    // IDs for classifiers for class ProcessingUnitDefinition 

    static const int PROCESSINGUNITDEFINITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSINGUNITDEFINITION__NAME = INAMED__NAME;

    static const int PROCESSINGUNITDEFINITION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSINGUNITDEFINITION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PROCESSINGUNITDEFINITION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class ProcessPairingConstraint 

    static const int PROCESSPAIRINGCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSPAIRINGCONSTRAINT__NAME = INAMED__NAME;

    static const int PROCESSPAIRINGCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSPAIRINGCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PROCESSPAIRINGCONSTRAINT__TARGET = PROCESSCONSTRAINT__TARGET;

    // IDs for classifiers for class ProcessPrototype 

    static const int PROCESSPROTOTYPE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSPROTOTYPE__NAME = INAMED__NAME;

    static const int PROCESSPROTOTYPE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSPROTOTYPE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PROCESSPROTOTYPE__TAGS = ITAGGABLE__TAGS;

    static const int PROCESSPROTOTYPE__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int PROCESSPROTOTYPE__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    static const int PROCESSPROTOTYPE__REFERRINGCOMPONENTS = ABSTRACTPROCESS__REFERRINGCOMPONENTS;

    // IDs for classifiers for class ProcessPrototypeAllocationConstraint 

    static const int PROCESSPROTOTYPEALLOCATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSPROTOTYPEALLOCATIONCONSTRAINT__CORECLASSIFICATION = COREALLOCATIONCONSTRAINT__CORECLASSIFICATION;

    // IDs for classifiers for class ProcessRequirement 

    static const int PROCESSREQUIREMENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSREQUIREMENT__NAME = INAMED__NAME;

    static const int PROCESSREQUIREMENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSREQUIREMENT__SEVERITY = REQUIREMENT__SEVERITY;

    static const int PROCESSREQUIREMENT__LIMIT = REQUIREMENT__LIMIT;

    // IDs for classifiers for class ProcessScope 

    // IDs for classifiers for class ProcessSeparationConstraint 

    static const int PROCESSSEPARATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int PROCESSSEPARATIONCONSTRAINT__NAME = INAMED__NAME;

    static const int PROCESSSEPARATIONCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int PROCESSSEPARATIONCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int PROCESSSEPARATIONCONSTRAINT__TARGET = PROCESSCONSTRAINT__TARGET;

    // IDs for classifiers for class PropertyConstraintsModel 

    static const int PROPERTYCONSTRAINTSMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class QualifiedPort 

    static const int QUALIFIEDPORT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Quantity 

    // IDs for classifiers for class RateMonotonic 

    static const int RATEMONOTONIC__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class ReferableBaseObject 

    static const int REFERABLEBASEOBJECT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int REFERABLEBASEOBJECT__NAME = INAMED__NAME;

    static const int REFERABLEBASEOBJECT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int REFERABLEBASEOBJECT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class ReferableObject 

    static const int REFERABLEOBJECT__NAME = INAMED__NAME;

    static const int REFERABLEOBJECT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int REFERABLEOBJECT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class ReferenceObject 

    // IDs for classifiers for class RelativePeriodicStimulus 

    static const int RELATIVEPERIODICSTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RELATIVEPERIODICSTIMULUS__NAME = INAMED__NAME;

    static const int RELATIVEPERIODICSTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int RELATIVEPERIODICSTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int RELATIVEPERIODICSTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int RELATIVEPERIODICSTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int RELATIVEPERIODICSTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int RELATIVEPERIODICSTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    // IDs for classifiers for class RepetitionConstraint 

    static const int REPETITIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int REPETITIONCONSTRAINT__NAME = INAMED__NAME;

    static const int REPETITIONCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int REPETITIONCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class Requirement 

    static const int REQUIREMENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int REQUIREMENT__NAME = INAMED__NAME;

    static const int REQUIREMENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    // IDs for classifiers for class RequirementLimit 

    // IDs for classifiers for class ReservationBasedServer 

    static const int RESERVATIONBASEDSERVER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class RunEntityCallStatistic 

    static const int RUNENTITYCALLSTATISTIC__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Runnable 

    static const int RUNNABLE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RUNNABLE__NAME = INAMED__NAME;

    static const int RUNNABLE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int RUNNABLE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int RUNNABLE__TAGS = ITAGGABLE__TAGS;

    static const int RUNNABLE__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int RUNNABLE__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    static const int RUNNABLE__NAMESPACE = INAMESPACEMEMBER__NAMESPACE;

    // IDs for classifiers for class RunnableAllocation 

    static const int RUNNABLEALLOCATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class RunnableAllocationConstraint 

    static const int RUNNABLEALLOCATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RUNNABLEALLOCATIONCONSTRAINT__CORECLASSIFICATION = COREALLOCATIONCONSTRAINT__CORECLASSIFICATION;

    // IDs for classifiers for class RunnableCall 

    static const int RUNNABLECALL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RUNNABLECALL__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int RUNNABLECALL__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int RUNNABLECALL__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int RUNNABLECALL__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class RunnableConstraint 

    // IDs for classifiers for class RunnableConstraintTarget 

    // IDs for classifiers for class RunnableEntityGroup 

    static const int RUNNABLEENTITYGROUP__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class RunnableEvent 

    static const int RUNNABLEEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RUNNABLEEVENT__NAME = INAMED__NAME;

    static const int RUNNABLEEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int RUNNABLEEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int RUNNABLEEVENT__TAGS = ITAGGABLE__TAGS;

    static const int RUNNABLEEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class RunnableGroup 

    // IDs for classifiers for class RunnablePairingConstraint 

    static const int RUNNABLEPAIRINGCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RUNNABLEPAIRINGCONSTRAINT__NAME = INAMED__NAME;

    static const int RUNNABLEPAIRINGCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int RUNNABLEPAIRINGCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int RUNNABLEPAIRINGCONSTRAINT__TARGET = RUNNABLECONSTRAINT__TARGET;

    // IDs for classifiers for class RunnableParameter 

    static const int RUNNABLEPARAMETER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RUNNABLEPARAMETER__NAME = INAMED__NAME;

    static const int RUNNABLEPARAMETER__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int RUNNABLEPARAMETER__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int RUNNABLEPARAMETER__DEPENDSON = IDEPENDSON__DEPENDSON;

    // IDs for classifiers for class RunnableRequirement 

    static const int RUNNABLEREQUIREMENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RUNNABLEREQUIREMENT__NAME = INAMED__NAME;

    static const int RUNNABLEREQUIREMENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int RUNNABLEREQUIREMENT__SEVERITY = REQUIREMENT__SEVERITY;

    static const int RUNNABLEREQUIREMENT__LIMIT = REQUIREMENT__LIMIT;

    // IDs for classifiers for class RunnableScope 

    // IDs for classifiers for class RunnableSeparationConstraint 

    static const int RUNNABLESEPARATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RUNNABLESEPARATIONCONSTRAINT__NAME = INAMED__NAME;

    static const int RUNNABLESEPARATIONCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int RUNNABLESEPARATIONCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int RUNNABLESEPARATIONCONSTRAINT__TARGET = RUNNABLECONSTRAINT__TARGET;

    // IDs for classifiers for class RunnableSequencingConstraint 

    static const int RUNNABLESEQUENCINGCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int RUNNABLESEQUENCINGCONSTRAINT__NAME = INAMED__NAME;

    static const int RUNNABLESEQUENCINGCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int RUNNABLESEQUENCINGCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class Scenario 

    static const int SCENARIO__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class SchedulePoint 

    static const int SCHEDULEPOINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SCHEDULEPOINT__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int SCHEDULEPOINT__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int SCHEDULEPOINT__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class Scheduler 

    static const int SCHEDULER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SCHEDULER__NAME = INAMED__NAME;

    static const int SCHEDULER__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SCHEDULER__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class SchedulerAllocation 

    static const int SCHEDULERALLOCATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class SchedulerAssociation 

    // IDs for classifiers for class SchedulingParameters 

    // IDs for classifiers for class Section 

    static const int SECTION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SECTION__NAME = INAMED__NAME;

    static const int SECTION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SECTION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class Semaphore 

    static const int SEMAPHORE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SEMAPHORE__NAME = INAMED__NAME;

    static const int SEMAPHORE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SEMAPHORE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class SemaphoreAccess 

    static const int SEMAPHOREACCESS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SEMAPHOREACCESS__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int SEMAPHOREACCESS__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int SEMAPHOREACCESS__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class SemaphoreEvent 

    static const int SEMAPHOREEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SEMAPHOREEVENT__NAME = INAMED__NAME;

    static const int SEMAPHOREEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SEMAPHOREEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int SEMAPHOREEVENT__TAGS = ITAGGABLE__TAGS;

    static const int SEMAPHOREEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class SenderReceiverCommunication 

    static const int SENDERRECEIVERCOMMUNICATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SENDERRECEIVERCOMMUNICATION__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int SENDERRECEIVERCOMMUNICATION__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int SENDERRECEIVERCOMMUNICATION__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class SenderReceiverRead 

    static const int SENDERRECEIVERREAD__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SENDERRECEIVERREAD__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int SENDERRECEIVERREAD__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int SENDERRECEIVERREAD__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int SENDERRECEIVERREAD__BUFFERED = SENDERRECEIVERCOMMUNICATION__BUFFERED;

    static const int SENDERRECEIVERREAD__LABEL = SENDERRECEIVERCOMMUNICATION__LABEL;

    static const int SENDERRECEIVERREAD__PORT = SENDERRECEIVERCOMMUNICATION__PORT;

    // IDs for classifiers for class SenderReceiverWrite 

    static const int SENDERRECEIVERWRITE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SENDERRECEIVERWRITE__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int SENDERRECEIVERWRITE__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int SENDERRECEIVERWRITE__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int SENDERRECEIVERWRITE__BUFFERED = SENDERRECEIVERCOMMUNICATION__BUFFERED;

    static const int SENDERRECEIVERWRITE__LABEL = SENDERRECEIVERCOMMUNICATION__LABEL;

    static const int SENDERRECEIVERWRITE__PORT = SENDERRECEIVERCOMMUNICATION__PORT;

    // IDs for classifiers for class SeparationConstraint 

    static const int SEPARATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SEPARATIONCONSTRAINT__NAME = INAMED__NAME;

    static const int SEPARATIONCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SEPARATIONCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class ServerCall 

    static const int SERVERCALL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SERVERCALL__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int SERVERCALL__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int SERVERCALL__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class SetEvent 

    static const int SETEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SETEVENT__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int SETEVENT__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int SETEVENT__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class SingleActivation 

    static const int SINGLEACTIVATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SINGLEACTIVATION__NAME = INAMED__NAME;

    static const int SINGLEACTIVATION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SINGLEACTIVATION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int SINGLEACTIVATION__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class SingleStimulus 

    static const int SINGLESTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SINGLESTIMULUS__NAME = INAMED__NAME;

    static const int SINGLESTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SINGLESTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int SINGLESTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int SINGLESTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int SINGLESTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int SINGLESTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    // IDs for classifiers for class SingleValueStatistic 

    // IDs for classifiers for class SporadicActivation 

    static const int SPORADICACTIVATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SPORADICACTIVATION__NAME = INAMED__NAME;

    static const int SPORADICACTIVATION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SPORADICACTIVATION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int SPORADICACTIVATION__TAGS = ITAGGABLE__TAGS;

    static const int SPORADICACTIVATION__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class SporadicServer 

    static const int SPORADICSERVER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class StimuliModel 

    static const int STIMULIMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Stimulus 

    static const int STIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int STIMULUS__NAME = INAMED__NAME;

    static const int STIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int STIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int STIMULUS__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class StimulusEvent 

    static const int STIMULUSEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int STIMULUSEVENT__NAME = INAMED__NAME;

    static const int STIMULUSEVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int STIMULUSEVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int STIMULUSEVENT__TAGS = ITAGGABLE__TAGS;

    static const int STIMULUSEVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class StringObject 

    // IDs for classifiers for class Struct 

    static const int STRUCT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int STRUCT__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class StructEntry 

    static const int STRUCTENTRY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int STRUCTENTRY__NAME = INAMED__NAME;

    static const int STRUCTENTRY__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int STRUCTENTRY__TAGS = ITAGGABLE__TAGS;

    // IDs for classifiers for class SubEventChain 

    static const int SUBEVENTCHAIN__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SUBEVENTCHAIN__NAME = INAMED__NAME;

    static const int SUBEVENTCHAIN__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SUBEVENTCHAIN__STIMULUS = ABSTRACTEVENTCHAIN__STIMULUS;

    static const int SUBEVENTCHAIN__RESPONSE = ABSTRACTEVENTCHAIN__RESPONSE;

    static const int SUBEVENTCHAIN__ITEMS = ABSTRACTEVENTCHAIN__ITEMS;

    static const int SUBEVENTCHAIN__ITEMTYPE = ABSTRACTEVENTCHAIN__ITEMTYPE;

    static const int SUBEVENTCHAIN__MINITEMSCOMPLETED = ABSTRACTEVENTCHAIN__MINITEMSCOMPLETED;

    // IDs for classifiers for class SubInterface 

    static const int SUBINTERFACE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SUBINTERFACE__NAME = INAMED__NAME;

    static const int SUBINTERFACE__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SUBINTERFACE__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int SUBINTERFACE__TAGS = ITAGGABLE__TAGS;

    static const int SUBINTERFACE__DATATYPE = COMPONENTINTERFACE__DATATYPE;

    static const int SUBINTERFACE__SUBINTERFACES = COMPONENTINTERFACE__SUBINTERFACES;

    // IDs for classifiers for class SWModel 

    static const int SWMODEL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class SynchronizationConstraint 

    static const int SYNCHRONIZATIONCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SYNCHRONIZATIONCONSTRAINT__NAME = INAMED__NAME;

    static const int SYNCHRONIZATIONCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SYNCHRONIZATIONCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class SynchronousServerCall 

    static const int SYNCHRONOUSSERVERCALL__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SYNCHRONOUSSERVERCALL__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int SYNCHRONOUSSERVERCALL__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int SYNCHRONOUSSERVERCALL__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    static const int SYNCHRONOUSSERVERCALL__SERVERRUNNABLE = SERVERCALL__SERVERRUNNABLE;

    static const int SYNCHRONOUSSERVERCALL__PORT = SERVERCALL__PORT;

    // IDs for classifiers for class System 

    static const int SYSTEM__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int SYSTEM__NAME = INAMED__NAME;

    static const int SYSTEM__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int SYSTEM__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int SYSTEM__TAGS = ITAGGABLE__TAGS;

    static const int SYSTEM__COMPONENTINSTANCES = ISYSTEM__COMPONENTINSTANCES;

    static const int SYSTEM__CONNECTORS = ISYSTEM__CONNECTORS;

    static const int SYSTEM__GROUNDEDPORTS = ISYSTEM__GROUNDEDPORTS;

    static const int SYSTEM__INNERPORTS = ISYSTEM__INNERPORTS;

    // IDs for classifiers for class Tag 

    static const int TAG__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int TAG__NAME = INAMED__NAME;

    static const int TAG__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int TAG__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int TAG__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class TagGroup 

    static const int TAGGROUP__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class TargetCore 

    static const int TARGETCORE__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class TargetMemory 

    static const int TARGETMEMORY__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class TargetScheduler 

    static const int TARGETSCHEDULER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Task 

    static const int TASK__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int TASK__NAME = INAMED__NAME;

    static const int TASK__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int TASK__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int TASK__TAGS = ITAGGABLE__TAGS;

    static const int TASK__SIZE = ABSTRACTMEMORYELEMENT__SIZE;

    static const int TASK__MAPPINGS = ABSTRACTMEMORYELEMENT__MAPPINGS;

    static const int TASK__REFERRINGCOMPONENTS = ABSTRACTPROCESS__REFERRINGCOMPONENTS;

    static const int TASK__ACTIVITYGRAPH = PROCESS__ACTIVITYGRAPH;

    static const int TASK__STIMULI = PROCESS__STIMULI;

    // IDs for classifiers for class TaskAllocation 

    static const int TASKALLOCATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class TaskScheduler 

    static const int TASKSCHEDULER__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int TASKSCHEDULER__NAME = INAMED__NAME;

    static const int TASKSCHEDULER__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int TASKSCHEDULER__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int TASKSCHEDULER__COMPUTATIONITEMS = SCHEDULER__COMPUTATIONITEMS;

    static const int TASKSCHEDULER__SCHEDULERALLOCATIONS = SCHEDULER__SCHEDULERALLOCATIONS;

    static const int TASKSCHEDULER__RUNNABLEALLOCATIONS = SCHEDULER__RUNNABLEALLOCATIONS;

    // IDs for classifiers for class TaskSchedulingAlgorithm 

    static const int TASKSCHEDULINGALGORITHM__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class TerminateProcess 

    static const int TERMINATEPROCESS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int TERMINATEPROCESS__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int TERMINATEPROCESS__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int TERMINATEPROCESS__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class Ticks 

    static const int TICKS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int TICKS__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int TICKS__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int TICKS__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // IDs for classifiers for class TicksEntry 

    // IDs for classifiers for class Time 

    // IDs for classifiers for class TimeBetaDistribution 

    static const int TIMEBETADISTRIBUTION__LOWERBOUND = TIMEINTERVAL__LOWERBOUND;

    static const int TIMEBETADISTRIBUTION__UPPERBOUND = TIMEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class TimeBoundaries 

    static const int TIMEBOUNDARIES__LOWERBOUND = TIMEINTERVAL__LOWERBOUND;

    static const int TIMEBOUNDARIES__UPPERBOUND = TIMEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class TimeComparable 

    // IDs for classifiers for class TimeConstant 

    // IDs for classifiers for class TimeGaussDistribution 

    static const int TIMEGAUSSDISTRIBUTION__LOWERBOUND = TRUNCATEDTIMEDISTRIBUTION__LOWERBOUND;

    static const int TIMEGAUSSDISTRIBUTION__UPPERBOUND = TRUNCATEDTIMEDISTRIBUTION__UPPERBOUND;

    // IDs for classifiers for class TimeHistogram 

    // IDs for classifiers for class TimeHistogramEntry 

    static const int TIMEHISTOGRAMENTRY__LOWERBOUND = TIMEINTERVAL__LOWERBOUND;

    static const int TIMEHISTOGRAMENTRY__UPPERBOUND = TIMEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class TimeInterval 

    // IDs for classifiers for class TimeRequirementLimit 

    static const int TIMEREQUIREMENTLIMIT__LIMITTYPE = REQUIREMENTLIMIT__LIMITTYPE;

    // IDs for classifiers for class TimeStatistics 

    static const int TIMESTATISTICS__LOWERBOUND = TIMEINTERVAL__LOWERBOUND;

    static const int TIMESTATISTICS__UPPERBOUND = TIMEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class TimeUniformDistribution 

    static const int TIMEUNIFORMDISTRIBUTION__LOWERBOUND = TIMEINTERVAL__LOWERBOUND;

    static const int TIMEUNIFORMDISTRIBUTION__UPPERBOUND = TIMEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class TimeWeibullEstimatorsDistribution 

    static const int TIMEWEIBULLESTIMATORSDISTRIBUTION__LOWERBOUND = TIMEINTERVAL__LOWERBOUND;

    static const int TIMEWEIBULLESTIMATORSDISTRIBUTION__UPPERBOUND = TIMEINTERVAL__UPPERBOUND;

    // IDs for classifiers for class TimingConstraint 

    static const int TIMINGCONSTRAINT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int TIMINGCONSTRAINT__NAME = INAMED__NAME;

    static const int TIMINGCONSTRAINT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int TIMINGCONSTRAINT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    // IDs for classifiers for class TransmissionPolicy 

    // IDs for classifiers for class TriggerEvent 

    static const int TRIGGEREVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int TRIGGEREVENT__NAME = INAMED__NAME;

    static const int TRIGGEREVENT__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int TRIGGEREVENT__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int TRIGGEREVENT__TAGS = ITAGGABLE__TAGS;

    static const int TRIGGEREVENT__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class TruncatedContinuousValueDistribution 

    // IDs for classifiers for class TruncatedDiscreteValueDistribution 

    // IDs for classifiers for class TruncatedTimeDistribution 

    // IDs for classifiers for class TypeDefinition 

    static const int TYPEDEFINITION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int TYPEDEFINITION__NAME = INAMED__NAME;

    static const int TYPEDEFINITION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int TYPEDEFINITION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int TYPEDEFINITION__NAMESPACE = INAMESPACEMEMBER__NAMESPACE;

    // IDs for classifiers for class TypeRef 

    static const int TYPEREF__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class UserSpecificSchedulingAlgorithm 

    static const int USERSPECIFICSCHEDULINGALGORITHM__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    // IDs for classifiers for class Value 

    // IDs for classifiers for class VariableRateActivation 

    static const int VARIABLERATEACTIVATION__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int VARIABLERATEACTIVATION__NAME = INAMED__NAME;

    static const int VARIABLERATEACTIVATION__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int VARIABLERATEACTIVATION__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int VARIABLERATEACTIVATION__TAGS = ITAGGABLE__TAGS;

    static const int VARIABLERATEACTIVATION__DESCRIPTION = IDESCRIPTION__DESCRIPTION;

    // IDs for classifiers for class VariableRateStimulus 

    static const int VARIABLERATESTIMULUS__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int VARIABLERATESTIMULUS__NAME = INAMED__NAME;

    static const int VARIABLERATESTIMULUS__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int VARIABLERATESTIMULUS__UNIQUENAME = IREFERABLE__UNIQUENAME;

    static const int VARIABLERATESTIMULUS__TAGS = ITAGGABLE__TAGS;

    static const int VARIABLERATESTIMULUS__SETMODEVALUELIST = STIMULUS__SETMODEVALUELIST;

    static const int VARIABLERATESTIMULUS__EXECUTIONCONDITION = STIMULUS__EXECUTIONCONDITION;

    static const int VARIABLERATESTIMULUS__AFFECTEDPROCESSES = STIMULUS__AFFECTEDPROCESSES;

    // IDs for classifiers for class VendorOperatingSystem 

    static const int VENDOROPERATINGSYSTEM__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int VENDOROPERATINGSYSTEM__NAME = INAMED__NAME;

    static const int VENDOROPERATINGSYSTEM__QUALIFIEDNAME = INAMED__QUALIFIEDNAME;

    static const int VENDOROPERATINGSYSTEM__OVERHEAD = OPERATINGSYSTEM__OVERHEAD;

    static const int VENDOROPERATINGSYSTEM__TASKSCHEDULERS = OPERATINGSYSTEM__TASKSCHEDULERS;

    static const int VENDOROPERATINGSYSTEM__INTERRUPTCONTROLLERS = OPERATINGSYSTEM__INTERRUPTCONTROLLERS;

    static const int VENDOROPERATINGSYSTEM__OSDATACONSISTENCY = OPERATINGSYSTEM__OSDATACONSISTENCY;

    // IDs for classifiers for class Voltage 

    // IDs for classifiers for class WaitEvent 

    static const int WAITEVENT__CUSTOMPROPERTIES = IANNOTATABLE__CUSTOMPROPERTIES;

    static const int WAITEVENT__CONTAININGPROCESS = ACTIVITYGRAPHITEM__CONTAININGPROCESS;

    static const int WAITEVENT__CONTAININGRUNNABLE = ACTIVITYGRAPHITEM__CONTAININGRUNNABLE;

    static const int WAITEVENT__CONTAININGACTIVITYGRAPH = ACTIVITYGRAPHITEM__CONTAININGACTIVITYGRAPH;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getAmalthea();

    virtual ::ecore::EClass_ptr getCommonElements();

    virtual ::ecore::EClass_ptr getBaseObject();

    virtual ::ecore::EClass_ptr getReferableObject();

    virtual ::ecore::EClass_ptr getReferableBaseObject();

    virtual ::ecore::EClass_ptr getIAnnotatable();

    virtual ::ecore::EClass_ptr getITaggable();

    virtual ::ecore::EClass_ptr getINamed();

    virtual ::ecore::EClass_ptr getIReferable();

    virtual ::ecore::EClass_ptr getIDisplayName();

    virtual ::ecore::EClass_ptr getIDescription();

    virtual ::ecore::EClass_ptr getINamespaceMember();

    virtual ::ecore::EClass_ptr getTag();

    virtual ::ecore::EClass_ptr getNamespace();

    virtual ::ecore::EEnum_ptr getRelationalOperator();

    virtual ::ecore::EClass_ptr getClassifier();

    virtual ::ecore::EClass_ptr getCoreClassifier();

    virtual ::ecore::EClass_ptr getMemoryClassifier();

    virtual ::ecore::EClass_ptr getTransmissionPolicy();

    virtual ::ecore::EClass_ptr getQuantity();

    virtual ::ecore::EEnum_ptr getTimeUnit();

    virtual ::ecore::EClass_ptr getTimeComparable();

    virtual ::ecore::EClass_ptr getTime();

    virtual ::ecore::EEnum_ptr getFrequencyUnit();

    virtual ::ecore::EClass_ptr getFrequency();

    virtual ::ecore::EEnum_ptr getVoltageUnit();

    virtual ::ecore::EClass_ptr getVoltage();

    virtual ::ecore::EEnum_ptr getDataSizeUnit();

    virtual ::ecore::EClass_ptr getDataSize();

    virtual ::ecore::EEnum_ptr getDataRateUnit();

    virtual ::ecore::EClass_ptr getDataRateComparable();

    virtual ::ecore::EClass_ptr getDataRate();

    virtual ::ecore::EClass_ptr getCustomProperty();

    virtual ::ecore::EClass_ptr getValue();

    virtual ::ecore::EClass_ptr getListObject();

    virtual ::ecore::EClass_ptr getStringObject();

    virtual ::ecore::EClass_ptr getBigIntegerObject();

    virtual ::ecore::EClass_ptr getReferenceObject();

    virtual ::ecore::EClass_ptr getIntegerObject();

    virtual ::ecore::EClass_ptr getLongObject();

    virtual ::ecore::EClass_ptr getFloatObject();

    virtual ::ecore::EClass_ptr getDoubleObject();

    virtual ::ecore::EClass_ptr getBooleanObject();

    virtual ::ecore::EClass_ptr getNumericStatistic();

    virtual ::ecore::EClass_ptr getMinAvgMaxStatistic();

    virtual ::ecore::EClass_ptr getSingleValueStatistic();

    virtual ::ecore::EEnum_ptr getSamplingType();

    virtual ::ecore::EClass_ptr getITimeDeviation();

    virtual ::ecore::EClass_ptr getTimeInterval();

    virtual ::ecore::EClass_ptr getTimeConstant();

    virtual ::ecore::EClass_ptr getTimeHistogram();

    virtual ::ecore::EClass_ptr getTimeHistogramEntry();

    virtual ::ecore::EClass_ptr getBoundedTimeDistribution();

    virtual ::ecore::EClass_ptr getTruncatedTimeDistribution();

    virtual ::ecore::EClass_ptr getTimeBoundaries();

    virtual ::ecore::EClass_ptr getTimeStatistics();

    virtual ::ecore::EClass_ptr getTimeUniformDistribution();

    virtual ::ecore::EClass_ptr getTimeGaussDistribution();

    virtual ::ecore::EClass_ptr getTimeWeibullEstimatorsDistribution();

    virtual ::ecore::EClass_ptr getTimeBetaDistribution();

    virtual ::ecore::EClass_ptr getIDiscreteValueDeviation();

    virtual ::ecore::EClass_ptr getDiscreteValueInterval();

    virtual ::ecore::EClass_ptr getDiscreteValueConstant();

    virtual ::ecore::EClass_ptr getDiscreteValueHistogram();

    virtual ::ecore::EClass_ptr getDiscreteValueHistogramEntry();

    virtual ::ecore::EClass_ptr getBoundedDiscreteValueDistribution();

    virtual ::ecore::EClass_ptr getTruncatedDiscreteValueDistribution();

    virtual ::ecore::EClass_ptr getDiscreteValueBoundaries();

    virtual ::ecore::EClass_ptr getDiscreteValueStatistics();

    virtual ::ecore::EClass_ptr getDiscreteValueUniformDistribution();

    virtual ::ecore::EClass_ptr getDiscreteValueGaussDistribution();

    virtual ::ecore::EClass_ptr getDiscreteValueWeibullEstimatorsDistribution();

    virtual ::ecore::EClass_ptr getDiscreteValueBetaDistribution();

    virtual ::ecore::EClass_ptr getIContinuousValueDeviation();

    virtual ::ecore::EClass_ptr getContinuousValueInterval();

    virtual ::ecore::EClass_ptr getContinuousValueConstant();

    virtual ::ecore::EClass_ptr getContinuousValueHistogram();

    virtual ::ecore::EClass_ptr getContinuousValueHistogramEntry();

    virtual ::ecore::EClass_ptr getBoundedContinuousValueDistribution();

    virtual ::ecore::EClass_ptr getTruncatedContinuousValueDistribution();

    virtual ::ecore::EClass_ptr getContinuousValueBoundaries();

    virtual ::ecore::EClass_ptr getContinuousValueStatistics();

    virtual ::ecore::EClass_ptr getContinuousValueUniformDistribution();

    virtual ::ecore::EClass_ptr getContinuousValueGaussDistribution();

    virtual ::ecore::EClass_ptr getContinuousValueWeibullEstimatorsDistribution();

    virtual ::ecore::EClass_ptr getContinuousValueBetaDistribution();

    virtual ::ecore::EClass_ptr getMode();

    virtual ::ecore::EClass_ptr getNumericMode();

    virtual ::ecore::EClass_ptr getEnumMode();

    virtual ::ecore::EClass_ptr getModeLiteral();

    virtual ::ecore::EDataType_ptr getAddress();

    virtual ::ecore::EDataType_ptr getPositiveInt();

    virtual ::ecore::EDataType_ptr getPositiveLong();

    virtual ::ecore::EDataType_ptr getPositiveDouble();

    virtual ::ecore::EDataType_ptr getNonNegativeInt();

    virtual ::ecore::EDataType_ptr getNonNegativeLong();

    virtual ::ecore::EDataType_ptr getNonNegativeDouble();

    virtual ::ecore::EClass_ptr getComponentsModel();

    virtual ::ecore::EClass_ptr getIComponentContainer();

    virtual ::ecore::EClass_ptr getIInterfaceContainer();

    virtual ::ecore::EClass_ptr getISystem();

    virtual ::ecore::EClass_ptr getComponentInterface();

    virtual ::ecore::EClass_ptr getMainInterface();

    virtual ::ecore::EClass_ptr getSubInterface();

    virtual ::ecore::EClass_ptr getComponentPort();

    virtual ::ecore::EClass_ptr getComponentStructure();

    virtual ::ecore::EClass_ptr getIComponentStructureMember();

    virtual ::ecore::EClass_ptr getComponent();

    virtual ::ecore::EClass_ptr getComposite();

    virtual ::ecore::EClass_ptr getSystem();

    virtual ::ecore::EClass_ptr getComponentInstance();

    virtual ::ecore::EClass_ptr getConnector();

    virtual ::ecore::EClass_ptr getInterfaceChannel();

    virtual ::ecore::EClass_ptr getQualifiedPort();

    virtual ::ecore::EEnum_ptr getInterfaceKind();

    virtual ::ecore::EClass_ptr getConfigModel();

    virtual ::ecore::EClass_ptr getEventConfig();

    virtual ::ecore::EClass_ptr getConstraintsModel();

    virtual ::ecore::EEnum_ptr getRunnableOrderType();

    virtual ::ecore::EClass_ptr getRunnableSequencingConstraint();

    virtual ::ecore::EClass_ptr getAffinityConstraint();

    virtual ::ecore::EClass_ptr getSeparationConstraint();

    virtual ::ecore::EClass_ptr getPairingConstraint();

    virtual ::ecore::EClass_ptr getProcessConstraint();

    virtual ::ecore::EClass_ptr getRunnableConstraint();

    virtual ::ecore::EClass_ptr getDataConstraint();

    virtual ::ecore::EClass_ptr getRunnableSeparationConstraint();

    virtual ::ecore::EClass_ptr getProcessSeparationConstraint();

    virtual ::ecore::EClass_ptr getDataSeparationConstraint();

    virtual ::ecore::EClass_ptr getRunnablePairingConstraint();

    virtual ::ecore::EClass_ptr getProcessPairingConstraint();

    virtual ::ecore::EClass_ptr getDataPairingConstraint();

    virtual ::ecore::EClass_ptr getRunnableConstraintTarget();

    virtual ::ecore::EClass_ptr getProcessConstraintTarget();

    virtual ::ecore::EClass_ptr getDataConstraintTarget();

    virtual ::ecore::EClass_ptr getTargetMemory();

    virtual ::ecore::EClass_ptr getTargetCore();

    virtual ::ecore::EClass_ptr getTargetScheduler();

    virtual ::ecore::EClass_ptr getLabelGroup();

    virtual ::ecore::EClass_ptr getRunnableGroup();

    virtual ::ecore::EClass_ptr getProcessGroup();

    virtual ::ecore::EClass_ptr getLabelEntityGroup();

    virtual ::ecore::EClass_ptr getRunnableEntityGroup();

    virtual ::ecore::EClass_ptr getProcessEntityGroup();

    virtual ::ecore::EClass_ptr getTagGroup();

    virtual ::ecore::EClass_ptr getAbstractEventChain();

    virtual ::ecore::EEnum_ptr getEventChainItemType();

    virtual ::ecore::EClass_ptr getEventChain();

    virtual ::ecore::EClass_ptr getSubEventChain();

    virtual ::ecore::EClass_ptr getEventChainItem();

    virtual ::ecore::EClass_ptr getEventChainReference();

    virtual ::ecore::EClass_ptr getEventChainContainer();

    virtual ::ecore::EClass_ptr getTimingConstraint();

    virtual ::ecore::EClass_ptr getPhysicalSectionConstraint();

    virtual ::ecore::EClass_ptr getSynchronizationConstraint();

    virtual ::ecore::EClass_ptr getEventSynchronizationConstraint();

    virtual ::ecore::EEnum_ptr getSynchronizationType();

    virtual ::ecore::EClass_ptr getEventChainSynchronizationConstraint();

    virtual ::ecore::EEnum_ptr getMappingType();

    virtual ::ecore::EClass_ptr getDelayConstraint();

    virtual ::ecore::EEnum_ptr getLatencyType();

    virtual ::ecore::EClass_ptr getEventChainLatencyConstraint();

    virtual ::ecore::EClass_ptr getRepetitionConstraint();

    virtual ::ecore::EClass_ptr getDataAgeConstraint();

    virtual ::ecore::EClass_ptr getDataAge();

    virtual ::ecore::EClass_ptr getDataAgeCycle();

    virtual ::ecore::EClass_ptr getDataAgeTime();

    virtual ::ecore::EClass_ptr getRequirement();

    virtual ::ecore::EClass_ptr getProcessRequirement();

    virtual ::ecore::EClass_ptr getRunnableRequirement();

    virtual ::ecore::EClass_ptr getArchitectureRequirement();

    virtual ::ecore::EClass_ptr getProcessChainRequirement();

    virtual ::ecore::EClass_ptr getRequirementLimit();

    virtual ::ecore::EClass_ptr getCPUPercentageRequirementLimit();

    virtual ::ecore::EClass_ptr getFrequencyRequirementLimit();

    virtual ::ecore::EClass_ptr getPercentageRequirementLimit();

    virtual ::ecore::EClass_ptr getCountRequirementLimit();

    virtual ::ecore::EClass_ptr getTimeRequirementLimit();

    virtual ::ecore::EEnum_ptr getSeverity();

    virtual ::ecore::EEnum_ptr getLimitType();

    virtual ::ecore::EEnum_ptr getTimeMetric();

    virtual ::ecore::EEnum_ptr getCountMetric();

    virtual ::ecore::EEnum_ptr getPercentageMetric();

    virtual ::ecore::EEnum_ptr getCPUPercentageMetric();

    virtual ::ecore::EEnum_ptr getFrequencyMetric();

    virtual ::ecore::EClass_ptr getDataCoherencyGroup();

    virtual ::ecore::EEnum_ptr getCoherencyDirection();

    virtual ::ecore::EClass_ptr getDataStabilityGroup();

    virtual ::ecore::EClass_ptr getDataGroupScope();

    virtual ::ecore::EClass_ptr getProcessScope();

    virtual ::ecore::EClass_ptr getRunnableScope();

    virtual ::ecore::EClass_ptr getComponentScope();

    virtual ::ecore::EClass_ptr getEventModel();

    virtual ::ecore::EClass_ptr getEvent();

    virtual ::ecore::EClass_ptr getEventSet();

    virtual ::ecore::EClass_ptr getEntityEvent();

    virtual ::ecore::EClass_ptr getTriggerEvent();

    virtual ::ecore::EClass_ptr getCustomEvent();

    virtual ::ecore::EClass_ptr getStimulusEvent();

    virtual ::ecore::EClass_ptr getProcessEvent();

    virtual ::ecore::EClass_ptr getProcessChainEvent();

    virtual ::ecore::EClass_ptr getRunnableEvent();

    virtual ::ecore::EClass_ptr getLabelEvent();

    virtual ::ecore::EClass_ptr getChannelEvent();

    virtual ::ecore::EClass_ptr getSemaphoreEvent();

    virtual ::ecore::EClass_ptr getComponentEvent();

    virtual ::ecore::EEnum_ptr getProcessEventType();

    virtual ::ecore::EEnum_ptr getRunnableEventType();

    virtual ::ecore::EEnum_ptr getLabelEventType();

    virtual ::ecore::EEnum_ptr getChannelEventType();

    virtual ::ecore::EEnum_ptr getSemaphoreEventType();

    virtual ::ecore::EEnum_ptr getComponentEventType();

    virtual ::ecore::EClass_ptr getHWModel();

    virtual ::ecore::EClass_ptr getHwStructure();

    virtual ::ecore::EClass_ptr getHwModule();

    virtual ::ecore::EClass_ptr getHwDomain();

    virtual ::ecore::EClass_ptr getFrequencyDomain();

    virtual ::ecore::EClass_ptr getPowerDomain();

    virtual ::ecore::EClass_ptr getProcessingUnit();

    virtual ::ecore::EClass_ptr getMemory();

    virtual ::ecore::EEnum_ptr getMemoryType();

    virtual ::ecore::EClass_ptr getCache();

    virtual ::ecore::EClass_ptr getHwFeatureCategory();

    virtual ::ecore::EClass_ptr getHwFeature();

    virtual ::ecore::EClass_ptr getHwPort();

    virtual ::ecore::EClass_ptr getConnectionHandler();

    virtual ::ecore::EClass_ptr getHwConnection();

    virtual ::ecore::EClass_ptr getHwAccessElement();

    virtual ::ecore::EEnum_ptr getStructureType();

    virtual ::ecore::EEnum_ptr getCacheType();

    virtual ::ecore::EEnum_ptr getPortType();

    virtual ::ecore::EEnum_ptr getSchedPolicy();

    virtual ::ecore::EEnum_ptr getWriteStrategy();

    virtual ::ecore::EClass_ptr getHwDefinition();

    virtual ::ecore::EClass_ptr getProcessingUnitDefinition();

    virtual ::ecore::EClass_ptr getConnectionHandlerDefinition();

    virtual ::ecore::EClass_ptr getMemoryDefinition();

    virtual ::ecore::EClass_ptr getCacheDefinition();

    virtual ::ecore::EClass_ptr getHwPath();

    virtual ::ecore::EClass_ptr getHwAccessPath();

    virtual ::ecore::EClass_ptr getHwPathElement();

    virtual ::ecore::EClass_ptr getHwDestination();

    virtual ::ecore::EEnum_ptr getPuType();

    virtual ::ecore::EEnum_ptr getPortInterface();

    virtual ::ecore::EEnum_ptr getHwFeatureType();

    virtual ::ecore::EClass_ptr getMappingModel();

    virtual ::ecore::EEnum_ptr getMemoryAddressMappingType();

    virtual ::ecore::EClass_ptr getSchedulerAllocation();

    virtual ::ecore::EClass_ptr getTaskAllocation();

    virtual ::ecore::EClass_ptr getISRAllocation();

    virtual ::ecore::EClass_ptr getRunnableAllocation();

    virtual ::ecore::EClass_ptr getMemoryMapping();

    virtual ::ecore::EClass_ptr getPhysicalSectionMapping();

    virtual ::ecore::EClass_ptr getOSModel();

    virtual ::ecore::EClass_ptr getOsDataConsistency();

    virtual ::ecore::EClass_ptr getDataStability();

    virtual ::ecore::EClass_ptr getNonAtomicDataCoherency();

    virtual ::ecore::EEnum_ptr getOsDataConsistencyMode();

    virtual ::ecore::EEnum_ptr getAccessMultiplicity();

    virtual ::ecore::EEnum_ptr getDataStabilityLevel();

    virtual ::ecore::EClass_ptr getSemaphore();

    virtual ::ecore::EEnum_ptr getSemaphoreType();

    virtual ::ecore::EClass_ptr getScheduler();

    virtual ::ecore::EClass_ptr getTaskScheduler();

    virtual ::ecore::EClass_ptr getSchedulerAssociation();

    virtual ::ecore::EClass_ptr getInterruptController();

    virtual ::ecore::EClass_ptr getSchedulingParameters();

    virtual ::ecore::EClass_ptr getParameterExtension();

    virtual ::ecore::EClass_ptr getAlgorithm();

    virtual ::ecore::EClass_ptr getInterruptSchedulingAlgorithm();

    virtual ::ecore::EClass_ptr getTaskSchedulingAlgorithm();

    virtual ::ecore::EClass_ptr getFixedPriority();

    virtual ::ecore::EClass_ptr getFixedPriorityPreemptive();

    virtual ::ecore::EClass_ptr getFixedPriorityPreemptiveWithBudgetEnforcement();

    virtual ::ecore::EClass_ptr getOSEK();

    virtual ::ecore::EClass_ptr getDeadlineMonotonic();

    virtual ::ecore::EClass_ptr getRateMonotonic();

    virtual ::ecore::EClass_ptr getPfair();

    virtual ::ecore::EClass_ptr getPfairPD2();

    virtual ::ecore::EClass_ptr getPartlyPFairPD2();

    virtual ::ecore::EClass_ptr getEarlyReleaseFairPD2();

    virtual ::ecore::EClass_ptr getPartlyEarlyReleaseFairPD2();

    virtual ::ecore::EClass_ptr getDynamicPriority();

    virtual ::ecore::EClass_ptr getLeastLocalRemainingExecutionTimeFirst();

    virtual ::ecore::EClass_ptr getEarliestDeadlineFirst();

    virtual ::ecore::EClass_ptr getPriorityBasedRoundRobin();

    virtual ::ecore::EClass_ptr getReservationBasedServer();

    virtual ::ecore::EClass_ptr getDeferrableServer();

    virtual ::ecore::EClass_ptr getPollingPeriodicServer();

    virtual ::ecore::EClass_ptr getSporadicServer();

    virtual ::ecore::EClass_ptr getConstantBandwidthServer();

    virtual ::ecore::EClass_ptr getConstantBandwidthServerWithCASH();

    virtual ::ecore::EClass_ptr getGrouping();

    virtual ::ecore::EClass_ptr getUserSpecificSchedulingAlgorithm();

    virtual ::ecore::EClass_ptr getPriorityBased();

    virtual ::ecore::EClass_ptr getOperatingSystem();

    virtual ::ecore::EClass_ptr getVendorOperatingSystem();

    virtual ::ecore::EClass_ptr getOsOverhead();

    virtual ::ecore::EClass_ptr getOsAPIOverhead();

    virtual ::ecore::EClass_ptr getOsISROverhead();

    virtual ::ecore::EClass_ptr getPropertyConstraintsModel();

    virtual ::ecore::EClass_ptr getCoreAllocationConstraint();

    virtual ::ecore::EClass_ptr getMemoryMappingConstraint();

    virtual ::ecore::EClass_ptr getProcessAllocationConstraint();

    virtual ::ecore::EClass_ptr getProcessPrototypeAllocationConstraint();

    virtual ::ecore::EClass_ptr getRunnableAllocationConstraint();

    virtual ::ecore::EClass_ptr getAbstractElementMappingConstraint();

    virtual ::ecore::EClass_ptr getClassification();

    virtual ::ecore::EEnum_ptr getCondition();

    virtual ::ecore::EEnum_ptr getGroupingType();

    virtual ::ecore::EClass_ptr getCoreClassification();

    virtual ::ecore::EClass_ptr getMemoryClassification();

    virtual ::ecore::EClass_ptr getStimuliModel();

    virtual ::ecore::EClass_ptr getStimulus();

    virtual ::ecore::EClass_ptr getModeValueList();

    virtual ::ecore::EClass_ptr getModeValueMapEntry();

    virtual ::ecore::EClass_ptr getModeValue();

    virtual ::ecore::EClass_ptr getModeAssignment();

    virtual ::ecore::EClass_ptr getModeConditionDisjunction();

    virtual ::ecore::EClass_ptr getModeConditionDisjunctionEntry();

    virtual ::ecore::EClass_ptr getModeCondition();

    virtual ::ecore::EClass_ptr getModeValueCondition();

    virtual ::ecore::EClass_ptr getModeLabelCondition();

    virtual ::ecore::EClass_ptr getModeConditionConjunction();

    virtual ::ecore::EClass_ptr getFixedPeriodic();

    virtual ::ecore::EClass_ptr getPeriodicStimulus();

    virtual ::ecore::EClass_ptr getRelativePeriodicStimulus();

    virtual ::ecore::EClass_ptr getVariableRateStimulus();

    virtual ::ecore::EClass_ptr getScenario();

    virtual ::ecore::EClass_ptr getPeriodicSyntheticStimulus();

    virtual ::ecore::EClass_ptr getCustomStimulus();

    virtual ::ecore::EClass_ptr getSingleStimulus();

    virtual ::ecore::EClass_ptr getInterProcessStimulus();

    virtual ::ecore::EClass_ptr getPeriodicBurstStimulus();

    virtual ::ecore::EClass_ptr getEventStimulus();

    virtual ::ecore::EClass_ptr getArrivalCurveStimulus();

    virtual ::ecore::EClass_ptr getArrivalCurveEntry();

    virtual ::ecore::EClass_ptr getClock();

    virtual ::ecore::EClass_ptr getClockFunction();

    virtual ::ecore::EEnum_ptr getCurveType();

    virtual ::ecore::EClass_ptr getClockStepList();

    virtual ::ecore::EClass_ptr getClockStep();

    virtual ::ecore::EClass_ptr getSWModel();

    virtual ::ecore::EClass_ptr getAbstractMemoryElement();

    virtual ::ecore::EClass_ptr getAbstractProcess();

    virtual ::ecore::EClass_ptr getCustomEntity();

    virtual ::ecore::EClass_ptr getProcessChain();

    virtual ::ecore::EClass_ptr getProcess();

    virtual ::ecore::EClass_ptr getIActivityGraphItemContainer();

    virtual ::ecore::EClass_ptr getActivityGraph();

    virtual ::ecore::EClass_ptr getActivityGraphItem();

    virtual ::ecore::EClass_ptr getModeSwitch();

    virtual ::ecore::EClass_ptr getModeSwitchEntry();

    virtual ::ecore::EClass_ptr getModeSwitchDefault();

    virtual ::ecore::EClass_ptr getProbabilitySwitch();

    virtual ::ecore::EClass_ptr getProbabilitySwitchEntry();

    virtual ::ecore::EClass_ptr getCounter();

    virtual ::ecore::EClass_ptr getWaitEvent();

    virtual ::ecore::EEnum_ptr getWaitEventType();

    virtual ::ecore::EEnum_ptr getWaitingBehaviour();

    virtual ::ecore::EClass_ptr getSetEvent();

    virtual ::ecore::EClass_ptr getClearEvent();

    virtual ::ecore::EClass_ptr getEventMask();

    virtual ::ecore::EClass_ptr getOsEvent();

    virtual ::ecore::EClass_ptr getInterProcessTrigger();

    virtual ::ecore::EClass_ptr getEnforcedMigration();

    virtual ::ecore::EClass_ptr getSchedulePoint();

    virtual ::ecore::EClass_ptr getTerminateProcess();

    virtual ::ecore::EClass_ptr getTask();

    virtual ::ecore::EClass_ptr getISR();

    virtual ::ecore::EEnum_ptr getISRCategory();

    virtual ::ecore::EClass_ptr getProcessPrototype();

    virtual ::ecore::EClass_ptr getChainedProcessPrototype();

    virtual ::ecore::EClass_ptr getGeneralPrecedence();

    virtual ::ecore::EClass_ptr getAccessPrecedenceSpec();

    virtual ::ecore::EEnum_ptr getAccessPrecedenceType();

    virtual ::ecore::EClass_ptr getOrderPrecedenceSpec();

    virtual ::ecore::EEnum_ptr getOrderType();

    virtual ::ecore::EEnum_ptr getDirectionType();

    virtual ::ecore::EClass_ptr getIDependsOn();

    virtual ::ecore::EClass_ptr getDataDependency();

    virtual ::ecore::EClass_ptr getRunnableParameter();

    virtual ::ecore::EClass_ptr getRunnable();

    virtual ::ecore::EClass_ptr getLabel();

    virtual ::ecore::EClass_ptr getChannel();

    virtual ::ecore::EClass_ptr getModeLabel();

    virtual ::ecore::EEnum_ptr getLabelDataStability();

    virtual ::ecore::EClass_ptr getSection();

    virtual ::ecore::EClass_ptr getComputationItem();

    virtual ::ecore::EClass_ptr getExecutionNeed();

    virtual ::ecore::EClass_ptr getNeedEntry();

    virtual ::ecore::EClass_ptr getTicks();

    virtual ::ecore::EClass_ptr getTicksEntry();

    virtual ::ecore::EEnum_ptr getModeLabelAccessEnum();

    virtual ::ecore::EClass_ptr getModeLabelAccess();

    virtual ::ecore::EClass_ptr getLabelAccess();

    virtual ::ecore::EClass_ptr getChannelAccess();

    virtual ::ecore::EClass_ptr getChannelSend();

    virtual ::ecore::EClass_ptr getChannelReceive();

    virtual ::ecore::EEnum_ptr getReceiveOperation();

    virtual ::ecore::EEnum_ptr getLabelAccessDataStability();

    virtual ::ecore::EEnum_ptr getLabelAccessEnum();

    virtual ::ecore::EEnum_ptr getLabelAccessImplementation();

    virtual ::ecore::EClass_ptr getSemaphoreAccess();

    virtual ::ecore::EEnum_ptr getSemaphoreAccessEnum();

    virtual ::ecore::EClass_ptr getSenderReceiverCommunication();

    virtual ::ecore::EClass_ptr getSenderReceiverRead();

    virtual ::ecore::EClass_ptr getSenderReceiverWrite();

    virtual ::ecore::EClass_ptr getServerCall();

    virtual ::ecore::EClass_ptr getSynchronousServerCall();

    virtual ::ecore::EClass_ptr getAsynchronousServerCall();

    virtual ::ecore::EClass_ptr getGetResultServerCall();

    virtual ::ecore::EEnum_ptr getBlockingType();

    virtual ::ecore::EClass_ptr getGroup();

    virtual ::ecore::EClass_ptr getCallArgument();

    virtual ::ecore::EClass_ptr getRunnableCall();

    virtual ::ecore::EEnum_ptr getPreemption();

    virtual ::ecore::EEnum_ptr getConcurrencyType();

    virtual ::ecore::EClass_ptr getCustomEventTrigger();

    virtual ::ecore::EClass_ptr getDataType();

    virtual ::ecore::EClass_ptr getCompoundType();

    virtual ::ecore::EClass_ptr getStruct();

    virtual ::ecore::EClass_ptr getStructEntry();

    virtual ::ecore::EClass_ptr getArray();

    virtual ::ecore::EClass_ptr getPointer();

    virtual ::ecore::EClass_ptr getTypeRef();

    virtual ::ecore::EClass_ptr getAlias();

    virtual ::ecore::EClass_ptr getTypeDefinition();

    virtual ::ecore::EClass_ptr getDataTypeDefinition();

    virtual ::ecore::EClass_ptr getBaseTypeDefinition();

    virtual ::ecore::EClass_ptr getActivation();

    virtual ::ecore::EClass_ptr getPeriodicActivation();

    virtual ::ecore::EClass_ptr getVariableRateActivation();

    virtual ::ecore::EClass_ptr getSporadicActivation();

    virtual ::ecore::EClass_ptr getSingleActivation();

    virtual ::ecore::EClass_ptr getEventActivation();

    virtual ::ecore::EClass_ptr getCustomActivation();

    virtual ::ecore::EClass_ptr getLabelAccessStatistic();

    virtual ::ecore::EClass_ptr getRunEntityCallStatistic();

    virtual ::ecore::EEnum_ptr getASILType();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getIAnnotatable__customProperties();

    virtual ::ecore::EAttribute_ptr getAmalthea__version();

    virtual ::ecore::EReference_ptr getAmalthea__commonElements();

    virtual ::ecore::EReference_ptr getAmalthea__swModel();

    virtual ::ecore::EReference_ptr getAmalthea__hwModel();

    virtual ::ecore::EReference_ptr getAmalthea__osModel();

    virtual ::ecore::EReference_ptr getAmalthea__stimuliModel();

    virtual ::ecore::EReference_ptr getAmalthea__eventModel();

    virtual ::ecore::EReference_ptr getAmalthea__constraintsModel();

    virtual ::ecore::EReference_ptr getAmalthea__propertyConstraintsModel();

    virtual ::ecore::EReference_ptr getAmalthea__mappingModel();

    virtual ::ecore::EReference_ptr getAmalthea__componentsModel();

    virtual ::ecore::EReference_ptr getAmalthea__configModel();

    virtual ::ecore::EReference_ptr getCommonElements__tags();

    virtual ::ecore::EReference_ptr getCommonElements__namespaces();

    virtual ::ecore::EReference_ptr getCommonElements__coreClassifiers();

    virtual ::ecore::EReference_ptr getCommonElements__memoryClassifiers();

    virtual ::ecore::EAttribute_ptr getINamed__name();

    virtual ::ecore::EAttribute_ptr getINamed__qualifiedName();

    virtual ::ecore::EAttribute_ptr getIReferable__uniqueName();

    virtual ::ecore::EReference_ptr getITaggable__tags();

    virtual ::ecore::EAttribute_ptr getIDisplayName__displayName();

    virtual ::ecore::EAttribute_ptr getIDescription__description();

    virtual ::ecore::EReference_ptr getINamespaceMember__namespace();

    virtual ::ecore::EAttribute_ptr getTag__tagType();

    virtual ::ecore::EReference_ptr getTag__taggedObjects();

    virtual ::ecore::EReference_ptr getNamespace__nextSegments();

    virtual ::ecore::EReference_ptr getNamespace__previousSegment();

    virtual ::ecore::EReference_ptr getNamespace__memberObjects();

    virtual ::ecore::EReference_ptr getTransmissionPolicy__chunkSize();

    virtual ::ecore::EAttribute_ptr getTransmissionPolicy__chunkProcessingTicks();

    virtual ::ecore::EAttribute_ptr getTransmissionPolicy__transmitRatio();

    virtual ::ecore::EAttribute_ptr getTime__value();

    virtual ::ecore::EAttribute_ptr getTime__unit();

    virtual ::ecore::EAttribute_ptr getFrequency__value();

    virtual ::ecore::EAttribute_ptr getFrequency__unit();

    virtual ::ecore::EAttribute_ptr getVoltage__value();

    virtual ::ecore::EAttribute_ptr getVoltage__unit();

    virtual ::ecore::EAttribute_ptr getDataSize__value();

    virtual ::ecore::EAttribute_ptr getDataSize__unit();

    virtual ::ecore::EAttribute_ptr getDataRate__value();

    virtual ::ecore::EAttribute_ptr getDataRate__unit();

    virtual ::ecore::EAttribute_ptr getCustomProperty__key();

    virtual ::ecore::EReference_ptr getCustomProperty__value();

    virtual ::ecore::EReference_ptr getListObject__values();

    virtual ::ecore::EAttribute_ptr getStringObject__value();

    virtual ::ecore::EAttribute_ptr getBigIntegerObject__value();

    virtual ::ecore::EReference_ptr getReferenceObject__value();

    virtual ::ecore::EAttribute_ptr getIntegerObject__value();

    virtual ::ecore::EAttribute_ptr getLongObject__value();

    virtual ::ecore::EAttribute_ptr getFloatObject__value();

    virtual ::ecore::EAttribute_ptr getDoubleObject__value();

    virtual ::ecore::EAttribute_ptr getBooleanObject__value();

    virtual ::ecore::EAttribute_ptr getMinAvgMaxStatistic__min();

    virtual ::ecore::EAttribute_ptr getMinAvgMaxStatistic__avg();

    virtual ::ecore::EAttribute_ptr getMinAvgMaxStatistic__max();

    virtual ::ecore::EAttribute_ptr getSingleValueStatistic__value();

    virtual ::ecore::EReference_ptr getTimeInterval__lowerBound();

    virtual ::ecore::EReference_ptr getTimeInterval__upperBound();

    virtual ::ecore::EReference_ptr getTimeConstant__value();

    virtual ::ecore::EReference_ptr getTimeHistogram__entries();

    virtual ::ecore::EAttribute_ptr getTimeHistogramEntry__occurrences();

    virtual ::ecore::EReference_ptr getTruncatedTimeDistribution__lowerBound();

    virtual ::ecore::EReference_ptr getTruncatedTimeDistribution__upperBound();

    virtual ::ecore::EAttribute_ptr getTimeBoundaries__samplingType();

    virtual ::ecore::EReference_ptr getTimeStatistics__average();

    virtual ::ecore::EReference_ptr getTimeGaussDistribution__mean();

    virtual ::ecore::EReference_ptr getTimeGaussDistribution__sd();

    virtual ::ecore::EReference_ptr getTimeWeibullEstimatorsDistribution__average();

    virtual ::ecore::EAttribute_ptr getTimeWeibullEstimatorsDistribution__pRemainPromille();

    virtual ::ecore::EAttribute_ptr getTimeBetaDistribution__alpha();

    virtual ::ecore::EAttribute_ptr getTimeBetaDistribution__beta();

    virtual ::ecore::EAttribute_ptr getDiscreteValueInterval__lowerBound();

    virtual ::ecore::EAttribute_ptr getDiscreteValueInterval__upperBound();

    virtual ::ecore::EAttribute_ptr getDiscreteValueConstant__value();

    virtual ::ecore::EReference_ptr getDiscreteValueHistogram__entries();

    virtual ::ecore::EAttribute_ptr getDiscreteValueHistogramEntry__occurrences();

    virtual ::ecore::EAttribute_ptr getTruncatedDiscreteValueDistribution__lowerBound();

    virtual ::ecore::EAttribute_ptr getTruncatedDiscreteValueDistribution__upperBound();

    virtual ::ecore::EAttribute_ptr getDiscreteValueBoundaries__samplingType();

    virtual ::ecore::EAttribute_ptr getDiscreteValueStatistics__average();

    virtual ::ecore::EAttribute_ptr getDiscreteValueGaussDistribution__mean();

    virtual ::ecore::EAttribute_ptr getDiscreteValueGaussDistribution__sd();

    virtual ::ecore::EAttribute_ptr getDiscreteValueWeibullEstimatorsDistribution__average();

    virtual ::ecore::EAttribute_ptr getDiscreteValueWeibullEstimatorsDistribution__pRemainPromille();

    virtual ::ecore::EAttribute_ptr getDiscreteValueBetaDistribution__alpha();

    virtual ::ecore::EAttribute_ptr getDiscreteValueBetaDistribution__beta();

    virtual ::ecore::EAttribute_ptr getContinuousValueInterval__lowerBound();

    virtual ::ecore::EAttribute_ptr getContinuousValueInterval__upperBound();

    virtual ::ecore::EAttribute_ptr getContinuousValueConstant__value();

    virtual ::ecore::EReference_ptr getContinuousValueHistogram__entries();

    virtual ::ecore::EAttribute_ptr getContinuousValueHistogramEntry__occurrences();

    virtual ::ecore::EAttribute_ptr getTruncatedContinuousValueDistribution__lowerBound();

    virtual ::ecore::EAttribute_ptr getTruncatedContinuousValueDistribution__upperBound();

    virtual ::ecore::EAttribute_ptr getContinuousValueBoundaries__samplingType();

    virtual ::ecore::EAttribute_ptr getContinuousValueStatistics__average();

    virtual ::ecore::EAttribute_ptr getContinuousValueGaussDistribution__mean();

    virtual ::ecore::EAttribute_ptr getContinuousValueGaussDistribution__sd();

    virtual ::ecore::EAttribute_ptr getContinuousValueWeibullEstimatorsDistribution__average();

    virtual ::ecore::EAttribute_ptr getContinuousValueWeibullEstimatorsDistribution__pRemainPromille();

    virtual ::ecore::EAttribute_ptr getContinuousValueBetaDistribution__alpha();

    virtual ::ecore::EAttribute_ptr getContinuousValueBetaDistribution__beta();

    virtual ::ecore::EReference_ptr getEnumMode__literals();

    virtual ::ecore::EReference_ptr getModeLiteral__containingMode();

    virtual ::ecore::EReference_ptr getIComponentContainer__components();

    virtual ::ecore::EReference_ptr getIInterfaceContainer__interfaces();

    virtual ::ecore::EReference_ptr getComponentsModel__structures();

    virtual ::ecore::EReference_ptr getComponentsModel__systems();

    virtual ::ecore::EReference_ptr getISystem__componentInstances();

    virtual ::ecore::EReference_ptr getISystem__connectors();

    virtual ::ecore::EReference_ptr getISystem__groundedPorts();

    virtual ::ecore::EReference_ptr getISystem__innerPorts();

    virtual ::ecore::EReference_ptr getComponentInterface__datatype();

    virtual ::ecore::EReference_ptr getComponentInterface__subInterfaces();

    virtual ::ecore::EReference_ptr getIComponentStructureMember__structure();

    virtual ::ecore::EAttribute_ptr getMainInterface__version();

    virtual ::ecore::EReference_ptr getSubInterface__containingInterface();

    virtual ::ecore::EReference_ptr getComponentPort__containingComponent();

    virtual ::ecore::EAttribute_ptr getComponentPort__kind();

    virtual ::ecore::EReference_ptr getComponentPort__interface();

    virtual ::ecore::EAttribute_ptr getComponentStructure__structureType();

    virtual ::ecore::EReference_ptr getComponentStructure__subStructures();

    virtual ::ecore::EReference_ptr getComponentStructure__memberObjects();

    virtual ::ecore::EReference_ptr getComponent__ports();

    virtual ::ecore::EReference_ptr getComponent__processes();

    virtual ::ecore::EReference_ptr getComponent__runnables();

    virtual ::ecore::EReference_ptr getComponent__labels();

    virtual ::ecore::EReference_ptr getComponent__semaphores();

    virtual ::ecore::EReference_ptr getComponent__osEvents();

    virtual ::ecore::EReference_ptr getComponentInstance__containingSystem();

    virtual ::ecore::EReference_ptr getComponentInstance__type();

    virtual ::ecore::EReference_ptr getConnector__containingSystem();

    virtual ::ecore::EReference_ptr getConnector__sourcePort();

    virtual ::ecore::EReference_ptr getConnector__targetPort();

    virtual ::ecore::EReference_ptr getConnector__implementedInterfaces();

    virtual ::ecore::EReference_ptr getInterfaceChannel__key();

    virtual ::ecore::EReference_ptr getInterfaceChannel__value();

    virtual ::ecore::EReference_ptr getQualifiedPort__instance();

    virtual ::ecore::EReference_ptr getQualifiedPort__port();

    virtual ::ecore::EReference_ptr getConfigModel__eventsToTrace();

    virtual ::ecore::EReference_ptr getEventConfig__event();

    virtual ::ecore::EReference_ptr getConstraintsModel__eventChains();

    virtual ::ecore::EReference_ptr getConstraintsModel__timingConstraints();

    virtual ::ecore::EReference_ptr getConstraintsModel__affinityConstraints();

    virtual ::ecore::EReference_ptr getConstraintsModel__runnableSequencingConstraints();

    virtual ::ecore::EReference_ptr getConstraintsModel__dataAgeConstraints();

    virtual ::ecore::EReference_ptr getConstraintsModel__requirements();

    virtual ::ecore::EReference_ptr getConstraintsModel__dataCoherencyGroups();

    virtual ::ecore::EReference_ptr getConstraintsModel__dataStabilityGroups();

    virtual ::ecore::EReference_ptr getConstraintsModel__physicalSectionConstraints();

    virtual ::ecore::EAttribute_ptr getRunnableSequencingConstraint__orderType();

    virtual ::ecore::EReference_ptr getRunnableSequencingConstraint__runnableGroups();

    virtual ::ecore::EReference_ptr getRunnableSequencingConstraint__processScope();

    virtual ::ecore::EReference_ptr getProcessConstraint__target();

    virtual ::ecore::EReference_ptr getRunnableConstraint__target();

    virtual ::ecore::EReference_ptr getDataConstraint__target();

    virtual ::ecore::EReference_ptr getRunnableSeparationConstraint__groups();

    virtual ::ecore::EReference_ptr getProcessSeparationConstraint__groups();

    virtual ::ecore::EReference_ptr getDataSeparationConstraint__groups();

    virtual ::ecore::EReference_ptr getRunnablePairingConstraint__group();

    virtual ::ecore::EReference_ptr getProcessPairingConstraint__group();

    virtual ::ecore::EReference_ptr getDataPairingConstraint__group();

    virtual ::ecore::EReference_ptr getTargetMemory__memories();

    virtual ::ecore::EReference_ptr getTargetCore__cores();

    virtual ::ecore::EReference_ptr getTargetScheduler__schedulers();

    virtual ::ecore::EReference_ptr getLabelEntityGroup__labels();

    virtual ::ecore::EReference_ptr getRunnableEntityGroup__runnables();

    virtual ::ecore::EReference_ptr getProcessEntityGroup__processes();

    virtual ::ecore::EReference_ptr getTagGroup__tag();

    virtual ::ecore::EReference_ptr getAbstractEventChain__stimulus();

    virtual ::ecore::EReference_ptr getAbstractEventChain__response();

    virtual ::ecore::EReference_ptr getAbstractEventChain__items();

    virtual ::ecore::EAttribute_ptr getAbstractEventChain__itemType();

    virtual ::ecore::EAttribute_ptr getAbstractEventChain__minItemsCompleted();

    virtual ::ecore::EReference_ptr getEventChainReference__eventChain();

    virtual ::ecore::EReference_ptr getEventChainContainer__eventChain();

    virtual ::ecore::EReference_ptr getPhysicalSectionConstraint__section();

    virtual ::ecore::EReference_ptr getPhysicalSectionConstraint__memories();

    virtual ::ecore::EAttribute_ptr getSynchronizationConstraint__multipleOccurrencesAllowed();

    virtual ::ecore::EReference_ptr getSynchronizationConstraint__tolerance();

    virtual ::ecore::EReference_ptr getEventSynchronizationConstraint__events();

    virtual ::ecore::EReference_ptr getEventChainSynchronizationConstraint__scope();

    virtual ::ecore::EAttribute_ptr getEventChainSynchronizationConstraint__type();

    virtual ::ecore::EAttribute_ptr getDelayConstraint__mappingType();

    virtual ::ecore::EReference_ptr getDelayConstraint__source();

    virtual ::ecore::EReference_ptr getDelayConstraint__target();

    virtual ::ecore::EReference_ptr getDelayConstraint__upper();

    virtual ::ecore::EReference_ptr getDelayConstraint__lower();

    virtual ::ecore::EReference_ptr getEventChainLatencyConstraint__scope();

    virtual ::ecore::EAttribute_ptr getEventChainLatencyConstraint__type();

    virtual ::ecore::EReference_ptr getEventChainLatencyConstraint__minimum();

    virtual ::ecore::EReference_ptr getEventChainLatencyConstraint__maximum();

    virtual ::ecore::EReference_ptr getRepetitionConstraint__event();

    virtual ::ecore::EAttribute_ptr getRepetitionConstraint__span();

    virtual ::ecore::EReference_ptr getRepetitionConstraint__lower();

    virtual ::ecore::EReference_ptr getRepetitionConstraint__upper();

    virtual ::ecore::EReference_ptr getRepetitionConstraint__jitter();

    virtual ::ecore::EReference_ptr getRepetitionConstraint__period();

    virtual ::ecore::EReference_ptr getDataAgeConstraint__runnable();

    virtual ::ecore::EReference_ptr getDataAgeConstraint__label();

    virtual ::ecore::EReference_ptr getDataAgeConstraint__dataAge();

    virtual ::ecore::EAttribute_ptr getDataAgeCycle__minimumCycle();

    virtual ::ecore::EAttribute_ptr getDataAgeCycle__maximumCycle();

    virtual ::ecore::EReference_ptr getDataAgeTime__minimumTime();

    virtual ::ecore::EReference_ptr getDataAgeTime__maximumTime();

    virtual ::ecore::EAttribute_ptr getRequirement__severity();

    virtual ::ecore::EReference_ptr getRequirement__limit();

    virtual ::ecore::EReference_ptr getProcessRequirement__process();

    virtual ::ecore::EReference_ptr getRunnableRequirement__runnable();

    virtual ::ecore::EReference_ptr getArchitectureRequirement__component();

    virtual ::ecore::EReference_ptr getProcessChainRequirement__processChain();

    virtual ::ecore::EAttribute_ptr getRequirementLimit__limitType();

    virtual ::ecore::EAttribute_ptr getCPUPercentageRequirementLimit__metric();

    virtual ::ecore::EAttribute_ptr getCPUPercentageRequirementLimit__limitValue();

    virtual ::ecore::EReference_ptr getCPUPercentageRequirementLimit__hardwareContext();

    virtual ::ecore::EAttribute_ptr getFrequencyRequirementLimit__metric();

    virtual ::ecore::EReference_ptr getFrequencyRequirementLimit__limitValue();

    virtual ::ecore::EAttribute_ptr getPercentageRequirementLimit__metric();

    virtual ::ecore::EAttribute_ptr getPercentageRequirementLimit__limitValue();

    virtual ::ecore::EAttribute_ptr getCountRequirementLimit__metric();

    virtual ::ecore::EAttribute_ptr getCountRequirementLimit__limitValue();

    virtual ::ecore::EAttribute_ptr getTimeRequirementLimit__metric();

    virtual ::ecore::EReference_ptr getTimeRequirementLimit__limitValue();

    virtual ::ecore::EReference_ptr getDataCoherencyGroup__labels();

    virtual ::ecore::EReference_ptr getDataCoherencyGroup__scope();

    virtual ::ecore::EAttribute_ptr getDataCoherencyGroup__direction();

    virtual ::ecore::EReference_ptr getDataStabilityGroup__labels();

    virtual ::ecore::EReference_ptr getDataStabilityGroup__scope();

    virtual ::ecore::EReference_ptr getProcessScope__process();

    virtual ::ecore::EReference_ptr getRunnableScope__runnable();

    virtual ::ecore::EReference_ptr getComponentScope__component();

    virtual ::ecore::EReference_ptr getEventModel__events();

    virtual ::ecore::EReference_ptr getEventSet__events();

    virtual ::ecore::EAttribute_ptr getCustomEvent__eventType();

    virtual ::ecore::EReference_ptr getCustomEvent__explicitTriggers();

    virtual ::ecore::EReference_ptr getStimulusEvent__entity();

    virtual ::ecore::EAttribute_ptr getProcessEvent__eventType();

    virtual ::ecore::EReference_ptr getProcessEvent__entity();

    virtual ::ecore::EReference_ptr getProcessEvent__processingUnit();

    virtual ::ecore::EAttribute_ptr getProcessChainEvent__eventType();

    virtual ::ecore::EReference_ptr getProcessChainEvent__entity();

    virtual ::ecore::EReference_ptr getProcessChainEvent__processingUnit();

    virtual ::ecore::EAttribute_ptr getRunnableEvent__eventType();

    virtual ::ecore::EReference_ptr getRunnableEvent__entity();

    virtual ::ecore::EReference_ptr getRunnableEvent__process();

    virtual ::ecore::EReference_ptr getRunnableEvent__processingUnit();

    virtual ::ecore::EAttribute_ptr getLabelEvent__eventType();

    virtual ::ecore::EReference_ptr getLabelEvent__entity();

    virtual ::ecore::EReference_ptr getLabelEvent__runnable();

    virtual ::ecore::EReference_ptr getLabelEvent__process();

    virtual ::ecore::EAttribute_ptr getChannelEvent__eventType();

    virtual ::ecore::EReference_ptr getChannelEvent__entity();

    virtual ::ecore::EReference_ptr getChannelEvent__runnable();

    virtual ::ecore::EReference_ptr getChannelEvent__process();

    virtual ::ecore::EAttribute_ptr getSemaphoreEvent__eventType();

    virtual ::ecore::EReference_ptr getSemaphoreEvent__entity();

    virtual ::ecore::EReference_ptr getSemaphoreEvent__runnable();

    virtual ::ecore::EReference_ptr getSemaphoreEvent__process();

    virtual ::ecore::EReference_ptr getSemaphoreEvent__processingUnit();

    virtual ::ecore::EAttribute_ptr getComponentEvent__eventType();

    virtual ::ecore::EReference_ptr getComponentEvent__entity();

    virtual ::ecore::EReference_ptr getHWModel__definitions();

    virtual ::ecore::EReference_ptr getHWModel__featureCategories();

    virtual ::ecore::EReference_ptr getHWModel__structures();

    virtual ::ecore::EReference_ptr getHWModel__domains();

    virtual ::ecore::EAttribute_ptr getHwStructure__structureType();

    virtual ::ecore::EReference_ptr getHwStructure__ports();

    virtual ::ecore::EReference_ptr getHwStructure__structures();

    virtual ::ecore::EReference_ptr getHwStructure__modules();

    virtual ::ecore::EReference_ptr getHwStructure__connections();

    virtual ::ecore::EReference_ptr getHwStructure__innerPorts();

    virtual ::ecore::EReference_ptr getHwModule__ports();

    virtual ::ecore::EReference_ptr getHwModule__powerDomain();

    virtual ::ecore::EReference_ptr getHwModule__frequencyDomain();

    virtual ::ecore::EReference_ptr getFrequencyDomain__defaultValue();

    virtual ::ecore::EAttribute_ptr getFrequencyDomain__clockGating();

    virtual ::ecore::EReference_ptr getPowerDomain__defaultValue();

    virtual ::ecore::EAttribute_ptr getPowerDomain__powerGating();

    virtual ::ecore::EReference_ptr getProcessingUnit__definition();

    virtual ::ecore::EReference_ptr getProcessingUnit__accessElements();

    virtual ::ecore::EReference_ptr getProcessingUnit__caches();

    virtual ::ecore::EReference_ptr getMemory__definition();

    virtual ::ecore::EReference_ptr getMemory__mappings();

    virtual ::ecore::EReference_ptr getCache__definition();

    virtual ::ecore::EAttribute_ptr getHwFeatureCategory__featureType();

    virtual ::ecore::EReference_ptr getHwFeatureCategory__features();

    virtual ::ecore::EReference_ptr getHwFeature__containingCategory();

    virtual ::ecore::EAttribute_ptr getHwFeature__value();

    virtual ::ecore::EAttribute_ptr getHwPort__bitWidth();

    virtual ::ecore::EAttribute_ptr getHwPort__priority();

    virtual ::ecore::EAttribute_ptr getHwPort__portType();

    virtual ::ecore::EAttribute_ptr getHwPort__portInterface();

    virtual ::ecore::EAttribute_ptr getHwPort__delegated();

    virtual ::ecore::EReference_ptr getHwPort__connections();

    virtual ::ecore::EReference_ptr getConnectionHandler__definition();

    virtual ::ecore::EReference_ptr getConnectionHandler__internalConnections();

    virtual ::ecore::EReference_ptr getHwConnection__readLatency();

    virtual ::ecore::EReference_ptr getHwConnection__writeLatency();

    virtual ::ecore::EReference_ptr getHwConnection__dataRate();

    virtual ::ecore::EReference_ptr getHwConnection__port1();

    virtual ::ecore::EReference_ptr getHwConnection__port2();

    virtual ::ecore::EAttribute_ptr getHwConnection__internal();

    virtual ::ecore::EReference_ptr getHwAccessElement__source();

    virtual ::ecore::EReference_ptr getHwAccessElement__destination();

    virtual ::ecore::EReference_ptr getHwAccessElement__accessPath();

    virtual ::ecore::EReference_ptr getHwAccessElement__readLatency();

    virtual ::ecore::EReference_ptr getHwAccessElement__writeLatency();

    virtual ::ecore::EReference_ptr getHwAccessElement__dataRate();

    virtual ::ecore::EAttribute_ptr getProcessingUnitDefinition__puType();

    virtual ::ecore::EReference_ptr getProcessingUnitDefinition__features();

    virtual ::ecore::EReference_ptr getProcessingUnitDefinition__classifiers();

    virtual ::ecore::EAttribute_ptr getConnectionHandlerDefinition__policy();

    virtual ::ecore::EReference_ptr getConnectionHandlerDefinition__readLatency();

    virtual ::ecore::EReference_ptr getConnectionHandlerDefinition__writeLatency();

    virtual ::ecore::EReference_ptr getConnectionHandlerDefinition__dataRate();

    virtual ::ecore::EAttribute_ptr getConnectionHandlerDefinition__maxBurstSize();

    virtual ::ecore::EAttribute_ptr getConnectionHandlerDefinition__maxConcurrentTransfers();

    virtual ::ecore::EReference_ptr getMemoryDefinition__size();

    virtual ::ecore::EReference_ptr getMemoryDefinition__accessLatency();

    virtual ::ecore::EReference_ptr getMemoryDefinition__dataRate();

    virtual ::ecore::EAttribute_ptr getMemoryDefinition__memoryType();

    virtual ::ecore::EReference_ptr getMemoryDefinition__classifiers();

    virtual ::ecore::EReference_ptr getCacheDefinition__size();

    virtual ::ecore::EReference_ptr getCacheDefinition__lineSize();

    virtual ::ecore::EReference_ptr getCacheDefinition__accessLatency();

    virtual ::ecore::EAttribute_ptr getCacheDefinition__cacheType();

    virtual ::ecore::EAttribute_ptr getCacheDefinition__writeStrategy();

    virtual ::ecore::EAttribute_ptr getCacheDefinition__nWays();

    virtual ::ecore::EAttribute_ptr getCacheDefinition__coherency();

    virtual ::ecore::EAttribute_ptr getCacheDefinition__exclusive();

    virtual ::ecore::EAttribute_ptr getCacheDefinition__hitRate();

    virtual ::ecore::EReference_ptr getHwPath__source();

    virtual ::ecore::EReference_ptr getHwPath__destination();

    virtual ::ecore::EReference_ptr getHwAccessPath__containingAccessElement();

    virtual ::ecore::EReference_ptr getHwAccessPath__pathElements();

    virtual ::ecore::EAttribute_ptr getHwAccessPath__startAddress();

    virtual ::ecore::EAttribute_ptr getHwAccessPath__endAddress();

    virtual ::ecore::EAttribute_ptr getHwAccessPath__memOffset();

    virtual ::ecore::EReference_ptr getMappingModel__schedulerAllocation();

    virtual ::ecore::EReference_ptr getMappingModel__runnableAllocation();

    virtual ::ecore::EReference_ptr getMappingModel__taskAllocation();

    virtual ::ecore::EReference_ptr getMappingModel__isrAllocation();

    virtual ::ecore::EReference_ptr getMappingModel__memoryMapping();

    virtual ::ecore::EReference_ptr getMappingModel__physicalSectionMapping();

    virtual ::ecore::EAttribute_ptr getMappingModel__addressMappingType();

    virtual ::ecore::EReference_ptr getSchedulerAllocation__scheduler();

    virtual ::ecore::EReference_ptr getSchedulerAllocation__responsibility();

    virtual ::ecore::EReference_ptr getSchedulerAllocation__executingPU();

    virtual ::ecore::EReference_ptr getTaskAllocation__task();

    virtual ::ecore::EReference_ptr getTaskAllocation__scheduler();

    virtual ::ecore::EReference_ptr getTaskAllocation__affinity();

    virtual ::ecore::EReference_ptr getTaskAllocation__schedulingParameters();

    virtual ::ecore::EReference_ptr getTaskAllocation__parameterExtensions();

    virtual ::ecore::EReference_ptr getISRAllocation__isr();

    virtual ::ecore::EReference_ptr getISRAllocation__controller();

    virtual ::ecore::EAttribute_ptr getISRAllocation__priority();

    virtual ::ecore::EReference_ptr getRunnableAllocation__scheduler();

    virtual ::ecore::EReference_ptr getRunnableAllocation__entity();

    virtual ::ecore::EReference_ptr getMemoryMapping__abstractElement();

    virtual ::ecore::EReference_ptr getMemoryMapping__memory();

    virtual ::ecore::EAttribute_ptr getMemoryMapping__memoryPositionAddress();

    virtual ::ecore::EReference_ptr getPhysicalSectionMapping__origin();

    virtual ::ecore::EReference_ptr getPhysicalSectionMapping__memory();

    virtual ::ecore::EAttribute_ptr getPhysicalSectionMapping__startAddress();

    virtual ::ecore::EAttribute_ptr getPhysicalSectionMapping__endAddress();

    virtual ::ecore::EReference_ptr getPhysicalSectionMapping__labels();

    virtual ::ecore::EReference_ptr getPhysicalSectionMapping__runEntities();

    virtual ::ecore::EReference_ptr getOSModel__semaphores();

    virtual ::ecore::EReference_ptr getOSModel__operatingSystems();

    virtual ::ecore::EReference_ptr getOSModel__osOverheads();

    virtual ::ecore::EAttribute_ptr getOsDataConsistency__mode();

    virtual ::ecore::EReference_ptr getOsDataConsistency__dataStability();

    virtual ::ecore::EReference_ptr getOsDataConsistency__nonAtomicDataCoherency();

    virtual ::ecore::EAttribute_ptr getDataStability__enabled();

    virtual ::ecore::EAttribute_ptr getDataStability__algorithm();

    virtual ::ecore::EAttribute_ptr getDataStability__accessMultiplicity();

    virtual ::ecore::EAttribute_ptr getDataStability__level();

    virtual ::ecore::EAttribute_ptr getNonAtomicDataCoherency__enabled();

    virtual ::ecore::EAttribute_ptr getNonAtomicDataCoherency__algorithm();

    virtual ::ecore::EAttribute_ptr getNonAtomicDataCoherency__accessMultiplicity();

    virtual ::ecore::EAttribute_ptr getSemaphore__semaphoreType();

    virtual ::ecore::EAttribute_ptr getSemaphore__initialValue();

    virtual ::ecore::EAttribute_ptr getSemaphore__maxValue();

    virtual ::ecore::EAttribute_ptr getSemaphore__priorityCeilingProtocol();

    virtual ::ecore::EReference_ptr getSemaphore__semaphoreAccesses();

    virtual ::ecore::EReference_ptr getSemaphore__referringComponents();

    virtual ::ecore::EReference_ptr getScheduler__computationItems();

    virtual ::ecore::EReference_ptr getScheduler__schedulerAllocations();

    virtual ::ecore::EReference_ptr getScheduler__runnableAllocations();

    virtual ::ecore::EReference_ptr getTaskScheduler__schedulingAlgorithm();

    virtual ::ecore::EReference_ptr getTaskScheduler__parentAssociation();

    virtual ::ecore::EReference_ptr getTaskScheduler__childAssociations();

    virtual ::ecore::EReference_ptr getTaskScheduler__taskAllocations();

    virtual ::ecore::EReference_ptr getTaskScheduler__parentScheduler();

    virtual ::ecore::EReference_ptr getTaskScheduler__childSchedulers();

    virtual ::ecore::EReference_ptr getSchedulerAssociation__child();

    virtual ::ecore::EReference_ptr getSchedulerAssociation__parent();

    virtual ::ecore::EReference_ptr getSchedulerAssociation__schedulingParameters();

    virtual ::ecore::EReference_ptr getSchedulerAssociation__parameterExtensions();

    virtual ::ecore::EReference_ptr getInterruptController__schedulingAlgorithm();

    virtual ::ecore::EReference_ptr getInterruptController__isrAllocations();

    virtual ::ecore::EAttribute_ptr getSchedulingParameters__priority();

    virtual ::ecore::EReference_ptr getSchedulingParameters__minBudget();

    virtual ::ecore::EReference_ptr getSchedulingParameters__maxBudget();

    virtual ::ecore::EReference_ptr getSchedulingParameters__replenishment();

    virtual ::ecore::EAttribute_ptr getParameterExtension__key();

    virtual ::ecore::EAttribute_ptr getParameterExtension__value();

    virtual ::ecore::EAttribute_ptr getPfair__quantSizeNs();

    virtual ::ecore::EReference_ptr getUserSpecificSchedulingAlgorithm__parameterExtensions();

    virtual ::ecore::EReference_ptr getOperatingSystem__overhead();

    virtual ::ecore::EReference_ptr getOperatingSystem__taskSchedulers();

    virtual ::ecore::EReference_ptr getOperatingSystem__interruptControllers();

    virtual ::ecore::EReference_ptr getOperatingSystem__osDataConsistency();

    virtual ::ecore::EAttribute_ptr getVendorOperatingSystem__osName();

    virtual ::ecore::EAttribute_ptr getVendorOperatingSystem__vendor();

    virtual ::ecore::EAttribute_ptr getVendorOperatingSystem__version();

    virtual ::ecore::EReference_ptr getOsOverhead__apiOverhead();

    virtual ::ecore::EReference_ptr getOsOverhead__isrCategory1Overhead();

    virtual ::ecore::EReference_ptr getOsOverhead__isrCategory2Overhead();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiSendMessage();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiTerminateTask();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiSchedule();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiRequestResource();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiReleaseResource();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiSetEvent();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiWaitEvent();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiClearEvent();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiActivateTask();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiEnforcedMigration();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiSuspendOsInterrupts();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiResumeOsInterrupts();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiRequestSpinlock();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiReleaseSpinlock();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiSenderReceiverRead();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiSenderReceiverWrite();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiSynchronousServerCallPoint();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiIocRead();

    virtual ::ecore::EReference_ptr getOsAPIOverhead__apiIocWrite();

    virtual ::ecore::EReference_ptr getOsISROverhead__preExecutionOverhead();

    virtual ::ecore::EReference_ptr getOsISROverhead__postExecutionOverhead();

    virtual ::ecore::EReference_ptr getPropertyConstraintsModel__allocationConstraints();

    virtual ::ecore::EReference_ptr getPropertyConstraintsModel__mappingConstraints();

    virtual ::ecore::EReference_ptr getCoreAllocationConstraint__coreClassification();

    virtual ::ecore::EReference_ptr getMemoryMappingConstraint__memoryClassification();

    virtual ::ecore::EReference_ptr getProcessAllocationConstraint__process();

    virtual ::ecore::EReference_ptr getProcessPrototypeAllocationConstraint__processPrototype();

    virtual ::ecore::EReference_ptr getRunnableAllocationConstraint__runnable();

    virtual ::ecore::EReference_ptr getAbstractElementMappingConstraint__abstractElement();

    virtual ::ecore::EAttribute_ptr getClassification__condition();

    virtual ::ecore::EAttribute_ptr getClassification__grouping();

    virtual ::ecore::EReference_ptr getCoreClassification__classifiers();

    virtual ::ecore::EReference_ptr getMemoryClassification__classifiers();

    virtual ::ecore::EReference_ptr getStimuliModel__stimuli();

    virtual ::ecore::EReference_ptr getStimuliModel__clocks();

    virtual ::ecore::EReference_ptr getStimulus__setModeValueList();

    virtual ::ecore::EReference_ptr getStimulus__executionCondition();

    virtual ::ecore::EReference_ptr getStimulus__affectedProcesses();

    virtual ::ecore::EReference_ptr getModeValueList__entries();

    virtual ::ecore::EReference_ptr getModeValueMapEntry__key();

    virtual ::ecore::EAttribute_ptr getModeValueMapEntry__value();

    virtual ::ecore::EReference_ptr getModeValue__label();

    virtual ::ecore::EAttribute_ptr getModeValue__value();

    virtual ::ecore::EReference_ptr getModeConditionDisjunction__entries();

    virtual ::ecore::EAttribute_ptr getModeCondition__relation();

    virtual ::ecore::EReference_ptr getModeLabelCondition__label1();

    virtual ::ecore::EReference_ptr getModeLabelCondition__label2();

    virtual ::ecore::EReference_ptr getModeConditionConjunction__entries();

    virtual ::ecore::EReference_ptr getFixedPeriodic__recurrence();

    virtual ::ecore::EReference_ptr getFixedPeriodic__offset();

    virtual ::ecore::EReference_ptr getPeriodicStimulus__jitter();

    virtual ::ecore::EReference_ptr getPeriodicStimulus__minDistance();

    virtual ::ecore::EReference_ptr getRelativePeriodicStimulus__offset();

    virtual ::ecore::EReference_ptr getRelativePeriodicStimulus__nextOccurrence();

    virtual ::ecore::EReference_ptr getVariableRateStimulus__step();

    virtual ::ecore::EReference_ptr getVariableRateStimulus__occurrencesPerStep();

    virtual ::ecore::EAttribute_ptr getVariableRateStimulus__maxIncreasePerStep();

    virtual ::ecore::EAttribute_ptr getVariableRateStimulus__maxDecreasePerStep();

    virtual ::ecore::EReference_ptr getVariableRateStimulus__scenario();

    virtual ::ecore::EReference_ptr getScenario__clock();

    virtual ::ecore::EAttribute_ptr getScenario__samplingOffset();

    virtual ::ecore::EAttribute_ptr getScenario__samplingRecurrence();

    virtual ::ecore::EReference_ptr getPeriodicSyntheticStimulus__occurrenceTimes();

    virtual ::ecore::EReference_ptr getSingleStimulus__occurrence();

    virtual ::ecore::EReference_ptr getInterProcessStimulus__counter();

    virtual ::ecore::EReference_ptr getInterProcessStimulus__explicitTriggers();

    virtual ::ecore::EReference_ptr getPeriodicBurstStimulus__burstLength();

    virtual ::ecore::EReference_ptr getPeriodicBurstStimulus__occurrenceMinDistance();

    virtual ::ecore::EAttribute_ptr getPeriodicBurstStimulus__occurrenceCount();

    virtual ::ecore::EReference_ptr getEventStimulus__triggeringEvents();

    virtual ::ecore::EReference_ptr getEventStimulus__counter();

    virtual ::ecore::EReference_ptr getArrivalCurveStimulus__entries();

    virtual ::ecore::EAttribute_ptr getArrivalCurveEntry__numberOfOccurrences();

    virtual ::ecore::EReference_ptr getArrivalCurveEntry__lowerTimeBorder();

    virtual ::ecore::EReference_ptr getArrivalCurveEntry__upperTimeBorder();

    virtual ::ecore::EAttribute_ptr getClockFunction__curveType();

    virtual ::ecore::EReference_ptr getClockFunction__period();

    virtual ::ecore::EReference_ptr getClockFunction__peakToPeak();

    virtual ::ecore::EReference_ptr getClockFunction__xOffset();

    virtual ::ecore::EReference_ptr getClockFunction__yOffset();

    virtual ::ecore::EReference_ptr getClockStepList__entries();

    virtual ::ecore::EReference_ptr getClockStepList__period();

    virtual ::ecore::EReference_ptr getClockStep__frequency();

    virtual ::ecore::EReference_ptr getClockStep__time();

    virtual ::ecore::EReference_ptr getSWModel__isrs();

    virtual ::ecore::EReference_ptr getSWModel__tasks();

    virtual ::ecore::EReference_ptr getSWModel__runnables();

    virtual ::ecore::EReference_ptr getSWModel__labels();

    virtual ::ecore::EReference_ptr getSWModel__channels();

    virtual ::ecore::EReference_ptr getSWModel__processPrototypes();

    virtual ::ecore::EReference_ptr getSWModel__sections();

    virtual ::ecore::EReference_ptr getSWModel__activations();

    virtual ::ecore::EReference_ptr getSWModel__events();

    virtual ::ecore::EReference_ptr getSWModel__typeDefinitions();

    virtual ::ecore::EReference_ptr getSWModel__customEntities();

    virtual ::ecore::EReference_ptr getSWModel__processChains();

    virtual ::ecore::EReference_ptr getSWModel__modes();

    virtual ::ecore::EReference_ptr getSWModel__modeLabels();

    virtual ::ecore::EReference_ptr getAbstractMemoryElement__size();

    virtual ::ecore::EReference_ptr getAbstractMemoryElement__mappings();

    virtual ::ecore::EReference_ptr getAbstractProcess__referringComponents();

    virtual ::ecore::EAttribute_ptr getCustomEntity__typeName();

    virtual ::ecore::EReference_ptr getProcessChain__processes();

    virtual ::ecore::EReference_ptr getProcess__activityGraph();

    virtual ::ecore::EReference_ptr getProcess__stimuli();

    virtual ::ecore::EReference_ptr getIActivityGraphItemContainer__items();

    virtual ::ecore::EReference_ptr getActivityGraphItem__containingProcess();

    virtual ::ecore::EReference_ptr getActivityGraphItem__containingRunnable();

    virtual ::ecore::EReference_ptr getActivityGraphItem__containingActivityGraph();

    virtual ::ecore::EReference_ptr getModeSwitch__entries();

    virtual ::ecore::EReference_ptr getModeSwitch__defaultEntry();

    virtual ::ecore::EReference_ptr getModeSwitchEntry__condition();

    virtual ::ecore::EReference_ptr getProbabilitySwitch__entries();

    virtual ::ecore::EAttribute_ptr getProbabilitySwitchEntry__probability();

    virtual ::ecore::EAttribute_ptr getCounter__prescaler();

    virtual ::ecore::EAttribute_ptr getCounter__offset();

    virtual ::ecore::EReference_ptr getWaitEvent__eventMask();

    virtual ::ecore::EAttribute_ptr getWaitEvent__maskType();

    virtual ::ecore::EAttribute_ptr getWaitEvent__waitingBehaviour();

    virtual ::ecore::EReference_ptr getWaitEvent__counter();

    virtual ::ecore::EReference_ptr getSetEvent__eventMask();

    virtual ::ecore::EReference_ptr getSetEvent__process();

    virtual ::ecore::EReference_ptr getSetEvent__counter();

    virtual ::ecore::EReference_ptr getClearEvent__eventMask();

    virtual ::ecore::EReference_ptr getClearEvent__counter();

    virtual ::ecore::EReference_ptr getEventMask__events();

    virtual ::ecore::EAttribute_ptr getOsEvent__communicationOverheadInBit();

    virtual ::ecore::EReference_ptr getOsEvent__referringComponents();

    virtual ::ecore::EReference_ptr getInterProcessTrigger__stimulus();

    virtual ::ecore::EReference_ptr getInterProcessTrigger__counter();

    virtual ::ecore::EReference_ptr getEnforcedMigration__resourceOwner();

    virtual ::ecore::EReference_ptr getTerminateProcess__counter();

    virtual ::ecore::EAttribute_ptr getTask__preemption();

    virtual ::ecore::EAttribute_ptr getTask__multipleTaskActivationLimit();

    virtual ::ecore::EAttribute_ptr getISR__category();

    virtual ::ecore::EAttribute_ptr getProcessPrototype__preemption();

    virtual ::ecore::EReference_ptr getProcessPrototype__firstRunnable();

    virtual ::ecore::EReference_ptr getProcessPrototype__lastRunnable();

    virtual ::ecore::EReference_ptr getProcessPrototype__accessPrecedenceSpec();

    virtual ::ecore::EReference_ptr getProcessPrototype__orderPrecedenceSpec();

    virtual ::ecore::EReference_ptr getProcessPrototype__chainedPrototypes();

    virtual ::ecore::EReference_ptr getProcessPrototype__activation();

    virtual ::ecore::EReference_ptr getProcessPrototype__runnableCalls();

    virtual ::ecore::EReference_ptr getChainedProcessPrototype__prototype();

    virtual ::ecore::EAttribute_ptr getChainedProcessPrototype__apply();

    virtual ::ecore::EAttribute_ptr getChainedProcessPrototype__offset();

    virtual ::ecore::EReference_ptr getGeneralPrecedence__origin();

    virtual ::ecore::EReference_ptr getGeneralPrecedence__target();

    virtual ::ecore::EReference_ptr getAccessPrecedenceSpec__label();

    virtual ::ecore::EAttribute_ptr getAccessPrecedenceSpec__orderType();

    virtual ::ecore::EAttribute_ptr getOrderPrecedenceSpec__orderType();

    virtual ::ecore::EReference_ptr getIDependsOn__dependsOn();

    virtual ::ecore::EReference_ptr getDataDependency__labels();

    virtual ::ecore::EReference_ptr getDataDependency__parameters();

    virtual ::ecore::EReference_ptr getDataDependency__callArguments();

    virtual ::ecore::EReference_ptr getDataDependency__containingRunnable();

    virtual ::ecore::EReference_ptr getRunnableParameter__containingRunnable();

    virtual ::ecore::EAttribute_ptr getRunnableParameter__direction();

    virtual ::ecore::EReference_ptr getRunnableParameter__dataType();

    virtual ::ecore::EReference_ptr getRunnable__executionCondition();

    virtual ::ecore::EReference_ptr getRunnable__parameters();

    virtual ::ecore::EReference_ptr getRunnable__activityGraph();

    virtual ::ecore::EReference_ptr getRunnable__activations();

    virtual ::ecore::EAttribute_ptr getRunnable__callback();

    virtual ::ecore::EAttribute_ptr getRunnable__service();

    virtual ::ecore::EAttribute_ptr getRunnable__asilLevel();

    virtual ::ecore::EReference_ptr getRunnable__section();

    virtual ::ecore::EReference_ptr getRunnable__runnableCalls();

    virtual ::ecore::EReference_ptr getRunnable__referringComponents();

    virtual ::ecore::EReference_ptr getLabel__dataType();

    virtual ::ecore::EAttribute_ptr getLabel__constant();

    virtual ::ecore::EAttribute_ptr getLabel__bVolatile();

    virtual ::ecore::EAttribute_ptr getLabel__dataStability();

    virtual ::ecore::EAttribute_ptr getLabel__stabilityLevel();

    virtual ::ecore::EReference_ptr getLabel__section();

    virtual ::ecore::EReference_ptr getLabel__labelAccesses();

    virtual ::ecore::EReference_ptr getLabel__referringComponents();

    virtual ::ecore::EReference_ptr getChannel__elementType();

    virtual ::ecore::EAttribute_ptr getChannel__defaultElements();

    virtual ::ecore::EAttribute_ptr getChannel__maxElements();

    virtual ::ecore::EReference_ptr getChannel__channelAccesses();

    virtual ::ecore::EReference_ptr getModeLabel__mode();

    virtual ::ecore::EAttribute_ptr getModeLabel__initialValue();

    virtual ::ecore::EAttribute_ptr getSection__asilLevel();

    virtual ::ecore::EReference_ptr getSection__labels();

    virtual ::ecore::EReference_ptr getSection__runnables();

    virtual ::ecore::EReference_ptr getExecutionNeed__needs();

    virtual ::ecore::EAttribute_ptr getNeedEntry__key();

    virtual ::ecore::EReference_ptr getNeedEntry__value();

    virtual ::ecore::EReference_ptr getTicks__default();

    virtual ::ecore::EReference_ptr getTicks__extended();

    virtual ::ecore::EReference_ptr getTicksEntry__key();

    virtual ::ecore::EReference_ptr getTicksEntry__value();

    virtual ::ecore::EReference_ptr getModeLabelAccess__data();

    virtual ::ecore::EAttribute_ptr getModeLabelAccess__access();

    virtual ::ecore::EAttribute_ptr getModeLabelAccess__value();

    virtual ::ecore::EAttribute_ptr getModeLabelAccess__step();

    virtual ::ecore::EReference_ptr getLabelAccess__data();

    virtual ::ecore::EAttribute_ptr getLabelAccess__access();

    virtual ::ecore::EReference_ptr getLabelAccess__statistic();

    virtual ::ecore::EReference_ptr getLabelAccess__transmissionPolicy();

    virtual ::ecore::EAttribute_ptr getLabelAccess__dataStability();

    virtual ::ecore::EAttribute_ptr getLabelAccess__implementation();

    virtual ::ecore::EReference_ptr getChannelAccess__data();

    virtual ::ecore::EAttribute_ptr getChannelAccess__elements();

    virtual ::ecore::EReference_ptr getChannelAccess__transmissionPolicy();

    virtual ::ecore::EAttribute_ptr getChannelReceive__receiveOperation();

    virtual ::ecore::EAttribute_ptr getChannelReceive__dataMustBeNew();

    virtual ::ecore::EAttribute_ptr getChannelReceive__elementIndex();

    virtual ::ecore::EAttribute_ptr getChannelReceive__lowerBound();

    virtual ::ecore::EReference_ptr getSemaphoreAccess__semaphore();

    virtual ::ecore::EAttribute_ptr getSemaphoreAccess__access();

    virtual ::ecore::EAttribute_ptr getSemaphoreAccess__waitingBehaviour();

    virtual ::ecore::EAttribute_ptr getSenderReceiverCommunication__buffered();

    virtual ::ecore::EReference_ptr getSenderReceiverCommunication__label();

    virtual ::ecore::EReference_ptr getSenderReceiverCommunication__port();

    virtual ::ecore::EReference_ptr getSenderReceiverWrite__notifiedRunnables();

    virtual ::ecore::EReference_ptr getServerCall__serverRunnable();

    virtual ::ecore::EReference_ptr getServerCall__port();

    virtual ::ecore::EAttribute_ptr getSynchronousServerCall__waitingBehaviour();

    virtual ::ecore::EReference_ptr getAsynchronousServerCall__resultRunnable();

    virtual ::ecore::EAttribute_ptr getGetResultServerCall__blockingType();

    virtual ::ecore::EAttribute_ptr getGroup__ordered();

    virtual ::ecore::EReference_ptr getCallArgument__containingCall();

    virtual ::ecore::EReference_ptr getCallArgument__parameter();

    virtual ::ecore::EReference_ptr getRunnableCall__runnable();

    virtual ::ecore::EReference_ptr getRunnableCall__arguments();

    virtual ::ecore::EReference_ptr getRunnableCall__counter();

    virtual ::ecore::EReference_ptr getRunnableCall__statistic();

    virtual ::ecore::EReference_ptr getCustomEventTrigger__event();

    virtual ::ecore::EReference_ptr getStruct__entries();

    virtual ::ecore::EReference_ptr getStructEntry__dataType();

    virtual ::ecore::EAttribute_ptr getArray__numberElements();

    virtual ::ecore::EReference_ptr getArray__dataType();

    virtual ::ecore::EReference_ptr getPointer__dataType();

    virtual ::ecore::EReference_ptr getTypeRef__typeDef();

    virtual ::ecore::EAttribute_ptr getAlias__target();

    virtual ::ecore::EAttribute_ptr getAlias__alias();

    virtual ::ecore::EReference_ptr getTypeDefinition__size();

    virtual ::ecore::EReference_ptr getDataTypeDefinition__dataType();

    virtual ::ecore::EReference_ptr getBaseTypeDefinition__aliases();

    virtual ::ecore::EReference_ptr getPeriodicActivation__min();

    virtual ::ecore::EReference_ptr getPeriodicActivation__max();

    virtual ::ecore::EReference_ptr getPeriodicActivation__recurrence();

    virtual ::ecore::EReference_ptr getPeriodicActivation__offset();

    virtual ::ecore::EReference_ptr getVariableRateActivation__step();

    virtual ::ecore::EReference_ptr getVariableRateActivation__occurrencesPerStep();

    virtual ::ecore::EReference_ptr getSporadicActivation__occurrence();

    virtual ::ecore::EReference_ptr getSingleActivation__min();

    virtual ::ecore::EReference_ptr getSingleActivation__max();

    virtual ::ecore::EReference_ptr getEventActivation__triggeringEvents();

    virtual ::ecore::EReference_ptr getEventActivation__counter();

    virtual ::ecore::EReference_ptr getLabelAccessStatistic__value();

    virtual ::ecore::EReference_ptr getLabelAccessStatistic__cacheMisses();

    virtual ::ecore::EReference_ptr getRunEntityCallStatistic__statistic();

protected:

    static ::ecore::Ptr< AmaltheaPackage > s_instance;

    AmaltheaPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_AmaltheaEClass;

    ::ecore::EClass_ptr m_CommonElementsEClass;

    ::ecore::EClass_ptr m_BaseObjectEClass;

    ::ecore::EClass_ptr m_ReferableObjectEClass;

    ::ecore::EClass_ptr m_ReferableBaseObjectEClass;

    ::ecore::EClass_ptr m_IAnnotatableEClass;

    ::ecore::EClass_ptr m_ITaggableEClass;

    ::ecore::EClass_ptr m_INamedEClass;

    ::ecore::EClass_ptr m_IReferableEClass;

    ::ecore::EClass_ptr m_IDisplayNameEClass;

    ::ecore::EClass_ptr m_IDescriptionEClass;

    ::ecore::EClass_ptr m_INamespaceMemberEClass;

    ::ecore::EClass_ptr m_TagEClass;

    ::ecore::EClass_ptr m_NamespaceEClass;

    ::ecore::EClass_ptr m_ClassifierEClass;

    ::ecore::EClass_ptr m_CoreClassifierEClass;

    ::ecore::EClass_ptr m_MemoryClassifierEClass;

    ::ecore::EClass_ptr m_TransmissionPolicyEClass;

    ::ecore::EClass_ptr m_QuantityEClass;

    ::ecore::EClass_ptr m_TimeComparableEClass;

    ::ecore::EClass_ptr m_TimeEClass;

    ::ecore::EClass_ptr m_FrequencyEClass;

    ::ecore::EClass_ptr m_VoltageEClass;

    ::ecore::EClass_ptr m_DataSizeEClass;

    ::ecore::EClass_ptr m_DataRateComparableEClass;

    ::ecore::EClass_ptr m_DataRateEClass;

    ::ecore::EClass_ptr m_CustomPropertyEClass;

    ::ecore::EClass_ptr m_ValueEClass;

    ::ecore::EClass_ptr m_ListObjectEClass;

    ::ecore::EClass_ptr m_StringObjectEClass;

    ::ecore::EClass_ptr m_BigIntegerObjectEClass;

    ::ecore::EClass_ptr m_ReferenceObjectEClass;

    ::ecore::EClass_ptr m_IntegerObjectEClass;

    ::ecore::EClass_ptr m_LongObjectEClass;

    ::ecore::EClass_ptr m_FloatObjectEClass;

    ::ecore::EClass_ptr m_DoubleObjectEClass;

    ::ecore::EClass_ptr m_BooleanObjectEClass;

    ::ecore::EClass_ptr m_NumericStatisticEClass;

    ::ecore::EClass_ptr m_MinAvgMaxStatisticEClass;

    ::ecore::EClass_ptr m_SingleValueStatisticEClass;

    ::ecore::EClass_ptr m_ITimeDeviationEClass;

    ::ecore::EClass_ptr m_TimeIntervalEClass;

    ::ecore::EClass_ptr m_TimeConstantEClass;

    ::ecore::EClass_ptr m_TimeHistogramEClass;

    ::ecore::EClass_ptr m_TimeHistogramEntryEClass;

    ::ecore::EClass_ptr m_BoundedTimeDistributionEClass;

    ::ecore::EClass_ptr m_TruncatedTimeDistributionEClass;

    ::ecore::EClass_ptr m_TimeBoundariesEClass;

    ::ecore::EClass_ptr m_TimeStatisticsEClass;

    ::ecore::EClass_ptr m_TimeUniformDistributionEClass;

    ::ecore::EClass_ptr m_TimeGaussDistributionEClass;

    ::ecore::EClass_ptr m_TimeWeibullEstimatorsDistributionEClass;

    ::ecore::EClass_ptr m_TimeBetaDistributionEClass;

    ::ecore::EClass_ptr m_IDiscreteValueDeviationEClass;

    ::ecore::EClass_ptr m_DiscreteValueIntervalEClass;

    ::ecore::EClass_ptr m_DiscreteValueConstantEClass;

    ::ecore::EClass_ptr m_DiscreteValueHistogramEClass;

    ::ecore::EClass_ptr m_DiscreteValueHistogramEntryEClass;

    ::ecore::EClass_ptr m_BoundedDiscreteValueDistributionEClass;

    ::ecore::EClass_ptr m_TruncatedDiscreteValueDistributionEClass;

    ::ecore::EClass_ptr m_DiscreteValueBoundariesEClass;

    ::ecore::EClass_ptr m_DiscreteValueStatisticsEClass;

    ::ecore::EClass_ptr m_DiscreteValueUniformDistributionEClass;

    ::ecore::EClass_ptr m_DiscreteValueGaussDistributionEClass;

    ::ecore::EClass_ptr m_DiscreteValueWeibullEstimatorsDistributionEClass;

    ::ecore::EClass_ptr m_DiscreteValueBetaDistributionEClass;

    ::ecore::EClass_ptr m_IContinuousValueDeviationEClass;

    ::ecore::EClass_ptr m_ContinuousValueIntervalEClass;

    ::ecore::EClass_ptr m_ContinuousValueConstantEClass;

    ::ecore::EClass_ptr m_ContinuousValueHistogramEClass;

    ::ecore::EClass_ptr m_ContinuousValueHistogramEntryEClass;

    ::ecore::EClass_ptr m_BoundedContinuousValueDistributionEClass;

    ::ecore::EClass_ptr m_TruncatedContinuousValueDistributionEClass;

    ::ecore::EClass_ptr m_ContinuousValueBoundariesEClass;

    ::ecore::EClass_ptr m_ContinuousValueStatisticsEClass;

    ::ecore::EClass_ptr m_ContinuousValueUniformDistributionEClass;

    ::ecore::EClass_ptr m_ContinuousValueGaussDistributionEClass;

    ::ecore::EClass_ptr m_ContinuousValueWeibullEstimatorsDistributionEClass;

    ::ecore::EClass_ptr m_ContinuousValueBetaDistributionEClass;

    ::ecore::EClass_ptr m_ModeEClass;

    ::ecore::EClass_ptr m_NumericModeEClass;

    ::ecore::EClass_ptr m_EnumModeEClass;

    ::ecore::EClass_ptr m_ModeLiteralEClass;

    ::ecore::EClass_ptr m_ComponentsModelEClass;

    ::ecore::EClass_ptr m_IComponentContainerEClass;

    ::ecore::EClass_ptr m_IInterfaceContainerEClass;

    ::ecore::EClass_ptr m_ISystemEClass;

    ::ecore::EClass_ptr m_ComponentInterfaceEClass;

    ::ecore::EClass_ptr m_MainInterfaceEClass;

    ::ecore::EClass_ptr m_SubInterfaceEClass;

    ::ecore::EClass_ptr m_ComponentPortEClass;

    ::ecore::EClass_ptr m_ComponentStructureEClass;

    ::ecore::EClass_ptr m_IComponentStructureMemberEClass;

    ::ecore::EClass_ptr m_ComponentEClass;

    ::ecore::EClass_ptr m_CompositeEClass;

    ::ecore::EClass_ptr m_SystemEClass;

    ::ecore::EClass_ptr m_ComponentInstanceEClass;

    ::ecore::EClass_ptr m_ConnectorEClass;

    ::ecore::EClass_ptr m_InterfaceChannelEClass;

    ::ecore::EClass_ptr m_QualifiedPortEClass;

    ::ecore::EClass_ptr m_ConfigModelEClass;

    ::ecore::EClass_ptr m_EventConfigEClass;

    ::ecore::EClass_ptr m_ConstraintsModelEClass;

    ::ecore::EClass_ptr m_RunnableSequencingConstraintEClass;

    ::ecore::EClass_ptr m_AffinityConstraintEClass;

    ::ecore::EClass_ptr m_SeparationConstraintEClass;

    ::ecore::EClass_ptr m_PairingConstraintEClass;

    ::ecore::EClass_ptr m_ProcessConstraintEClass;

    ::ecore::EClass_ptr m_RunnableConstraintEClass;

    ::ecore::EClass_ptr m_DataConstraintEClass;

    ::ecore::EClass_ptr m_RunnableSeparationConstraintEClass;

    ::ecore::EClass_ptr m_ProcessSeparationConstraintEClass;

    ::ecore::EClass_ptr m_DataSeparationConstraintEClass;

    ::ecore::EClass_ptr m_RunnablePairingConstraintEClass;

    ::ecore::EClass_ptr m_ProcessPairingConstraintEClass;

    ::ecore::EClass_ptr m_DataPairingConstraintEClass;

    ::ecore::EClass_ptr m_RunnableConstraintTargetEClass;

    ::ecore::EClass_ptr m_ProcessConstraintTargetEClass;

    ::ecore::EClass_ptr m_DataConstraintTargetEClass;

    ::ecore::EClass_ptr m_TargetMemoryEClass;

    ::ecore::EClass_ptr m_TargetCoreEClass;

    ::ecore::EClass_ptr m_TargetSchedulerEClass;

    ::ecore::EClass_ptr m_LabelGroupEClass;

    ::ecore::EClass_ptr m_RunnableGroupEClass;

    ::ecore::EClass_ptr m_ProcessGroupEClass;

    ::ecore::EClass_ptr m_LabelEntityGroupEClass;

    ::ecore::EClass_ptr m_RunnableEntityGroupEClass;

    ::ecore::EClass_ptr m_ProcessEntityGroupEClass;

    ::ecore::EClass_ptr m_TagGroupEClass;

    ::ecore::EClass_ptr m_AbstractEventChainEClass;

    ::ecore::EClass_ptr m_EventChainEClass;

    ::ecore::EClass_ptr m_SubEventChainEClass;

    ::ecore::EClass_ptr m_EventChainItemEClass;

    ::ecore::EClass_ptr m_EventChainReferenceEClass;

    ::ecore::EClass_ptr m_EventChainContainerEClass;

    ::ecore::EClass_ptr m_TimingConstraintEClass;

    ::ecore::EClass_ptr m_PhysicalSectionConstraintEClass;

    ::ecore::EClass_ptr m_SynchronizationConstraintEClass;

    ::ecore::EClass_ptr m_EventSynchronizationConstraintEClass;

    ::ecore::EClass_ptr m_EventChainSynchronizationConstraintEClass;

    ::ecore::EClass_ptr m_DelayConstraintEClass;

    ::ecore::EClass_ptr m_EventChainLatencyConstraintEClass;

    ::ecore::EClass_ptr m_RepetitionConstraintEClass;

    ::ecore::EClass_ptr m_DataAgeConstraintEClass;

    ::ecore::EClass_ptr m_DataAgeEClass;

    ::ecore::EClass_ptr m_DataAgeCycleEClass;

    ::ecore::EClass_ptr m_DataAgeTimeEClass;

    ::ecore::EClass_ptr m_RequirementEClass;

    ::ecore::EClass_ptr m_ProcessRequirementEClass;

    ::ecore::EClass_ptr m_RunnableRequirementEClass;

    ::ecore::EClass_ptr m_ArchitectureRequirementEClass;

    ::ecore::EClass_ptr m_ProcessChainRequirementEClass;

    ::ecore::EClass_ptr m_RequirementLimitEClass;

    ::ecore::EClass_ptr m_CPUPercentageRequirementLimitEClass;

    ::ecore::EClass_ptr m_FrequencyRequirementLimitEClass;

    ::ecore::EClass_ptr m_PercentageRequirementLimitEClass;

    ::ecore::EClass_ptr m_CountRequirementLimitEClass;

    ::ecore::EClass_ptr m_TimeRequirementLimitEClass;

    ::ecore::EClass_ptr m_DataCoherencyGroupEClass;

    ::ecore::EClass_ptr m_DataStabilityGroupEClass;

    ::ecore::EClass_ptr m_DataGroupScopeEClass;

    ::ecore::EClass_ptr m_ProcessScopeEClass;

    ::ecore::EClass_ptr m_RunnableScopeEClass;

    ::ecore::EClass_ptr m_ComponentScopeEClass;

    ::ecore::EClass_ptr m_EventModelEClass;

    ::ecore::EClass_ptr m_EventEClass;

    ::ecore::EClass_ptr m_EventSetEClass;

    ::ecore::EClass_ptr m_EntityEventEClass;

    ::ecore::EClass_ptr m_TriggerEventEClass;

    ::ecore::EClass_ptr m_CustomEventEClass;

    ::ecore::EClass_ptr m_StimulusEventEClass;

    ::ecore::EClass_ptr m_ProcessEventEClass;

    ::ecore::EClass_ptr m_ProcessChainEventEClass;

    ::ecore::EClass_ptr m_RunnableEventEClass;

    ::ecore::EClass_ptr m_LabelEventEClass;

    ::ecore::EClass_ptr m_ChannelEventEClass;

    ::ecore::EClass_ptr m_SemaphoreEventEClass;

    ::ecore::EClass_ptr m_ComponentEventEClass;

    ::ecore::EClass_ptr m_HWModelEClass;

    ::ecore::EClass_ptr m_HwStructureEClass;

    ::ecore::EClass_ptr m_HwModuleEClass;

    ::ecore::EClass_ptr m_HwDomainEClass;

    ::ecore::EClass_ptr m_FrequencyDomainEClass;

    ::ecore::EClass_ptr m_PowerDomainEClass;

    ::ecore::EClass_ptr m_ProcessingUnitEClass;

    ::ecore::EClass_ptr m_MemoryEClass;

    ::ecore::EClass_ptr m_CacheEClass;

    ::ecore::EClass_ptr m_HwFeatureCategoryEClass;

    ::ecore::EClass_ptr m_HwFeatureEClass;

    ::ecore::EClass_ptr m_HwPortEClass;

    ::ecore::EClass_ptr m_ConnectionHandlerEClass;

    ::ecore::EClass_ptr m_HwConnectionEClass;

    ::ecore::EClass_ptr m_HwAccessElementEClass;

    ::ecore::EClass_ptr m_HwDefinitionEClass;

    ::ecore::EClass_ptr m_ProcessingUnitDefinitionEClass;

    ::ecore::EClass_ptr m_ConnectionHandlerDefinitionEClass;

    ::ecore::EClass_ptr m_MemoryDefinitionEClass;

    ::ecore::EClass_ptr m_CacheDefinitionEClass;

    ::ecore::EClass_ptr m_HwPathEClass;

    ::ecore::EClass_ptr m_HwAccessPathEClass;

    ::ecore::EClass_ptr m_HwPathElementEClass;

    ::ecore::EClass_ptr m_HwDestinationEClass;

    ::ecore::EClass_ptr m_MappingModelEClass;

    ::ecore::EClass_ptr m_SchedulerAllocationEClass;

    ::ecore::EClass_ptr m_TaskAllocationEClass;

    ::ecore::EClass_ptr m_ISRAllocationEClass;

    ::ecore::EClass_ptr m_RunnableAllocationEClass;

    ::ecore::EClass_ptr m_MemoryMappingEClass;

    ::ecore::EClass_ptr m_PhysicalSectionMappingEClass;

    ::ecore::EClass_ptr m_OSModelEClass;

    ::ecore::EClass_ptr m_OsDataConsistencyEClass;

    ::ecore::EClass_ptr m_DataStabilityEClass;

    ::ecore::EClass_ptr m_NonAtomicDataCoherencyEClass;

    ::ecore::EClass_ptr m_SemaphoreEClass;

    ::ecore::EClass_ptr m_SchedulerEClass;

    ::ecore::EClass_ptr m_TaskSchedulerEClass;

    ::ecore::EClass_ptr m_SchedulerAssociationEClass;

    ::ecore::EClass_ptr m_InterruptControllerEClass;

    ::ecore::EClass_ptr m_SchedulingParametersEClass;

    ::ecore::EClass_ptr m_ParameterExtensionEClass;

    ::ecore::EClass_ptr m_AlgorithmEClass;

    ::ecore::EClass_ptr m_InterruptSchedulingAlgorithmEClass;

    ::ecore::EClass_ptr m_TaskSchedulingAlgorithmEClass;

    ::ecore::EClass_ptr m_FixedPriorityEClass;

    ::ecore::EClass_ptr m_FixedPriorityPreemptiveEClass;

    ::ecore::EClass_ptr m_FixedPriorityPreemptiveWithBudgetEnforcementEClass;

    ::ecore::EClass_ptr m_OSEKEClass;

    ::ecore::EClass_ptr m_DeadlineMonotonicEClass;

    ::ecore::EClass_ptr m_RateMonotonicEClass;

    ::ecore::EClass_ptr m_PfairEClass;

    ::ecore::EClass_ptr m_PfairPD2EClass;

    ::ecore::EClass_ptr m_PartlyPFairPD2EClass;

    ::ecore::EClass_ptr m_EarlyReleaseFairPD2EClass;

    ::ecore::EClass_ptr m_PartlyEarlyReleaseFairPD2EClass;

    ::ecore::EClass_ptr m_DynamicPriorityEClass;

    ::ecore::EClass_ptr m_LeastLocalRemainingExecutionTimeFirstEClass;

    ::ecore::EClass_ptr m_EarliestDeadlineFirstEClass;

    ::ecore::EClass_ptr m_PriorityBasedRoundRobinEClass;

    ::ecore::EClass_ptr m_ReservationBasedServerEClass;

    ::ecore::EClass_ptr m_DeferrableServerEClass;

    ::ecore::EClass_ptr m_PollingPeriodicServerEClass;

    ::ecore::EClass_ptr m_SporadicServerEClass;

    ::ecore::EClass_ptr m_ConstantBandwidthServerEClass;

    ::ecore::EClass_ptr m_ConstantBandwidthServerWithCASHEClass;

    ::ecore::EClass_ptr m_GroupingEClass;

    ::ecore::EClass_ptr m_UserSpecificSchedulingAlgorithmEClass;

    ::ecore::EClass_ptr m_PriorityBasedEClass;

    ::ecore::EClass_ptr m_OperatingSystemEClass;

    ::ecore::EClass_ptr m_VendorOperatingSystemEClass;

    ::ecore::EClass_ptr m_OsOverheadEClass;

    ::ecore::EClass_ptr m_OsAPIOverheadEClass;

    ::ecore::EClass_ptr m_OsISROverheadEClass;

    ::ecore::EClass_ptr m_PropertyConstraintsModelEClass;

    ::ecore::EClass_ptr m_CoreAllocationConstraintEClass;

    ::ecore::EClass_ptr m_MemoryMappingConstraintEClass;

    ::ecore::EClass_ptr m_ProcessAllocationConstraintEClass;

    ::ecore::EClass_ptr m_ProcessPrototypeAllocationConstraintEClass;

    ::ecore::EClass_ptr m_RunnableAllocationConstraintEClass;

    ::ecore::EClass_ptr m_AbstractElementMappingConstraintEClass;

    ::ecore::EClass_ptr m_ClassificationEClass;

    ::ecore::EClass_ptr m_CoreClassificationEClass;

    ::ecore::EClass_ptr m_MemoryClassificationEClass;

    ::ecore::EClass_ptr m_StimuliModelEClass;

    ::ecore::EClass_ptr m_StimulusEClass;

    ::ecore::EClass_ptr m_ModeValueListEClass;

    ::ecore::EClass_ptr m_ModeValueMapEntryEClass;

    ::ecore::EClass_ptr m_ModeValueEClass;

    ::ecore::EClass_ptr m_ModeAssignmentEClass;

    ::ecore::EClass_ptr m_ModeConditionDisjunctionEClass;

    ::ecore::EClass_ptr m_ModeConditionDisjunctionEntryEClass;

    ::ecore::EClass_ptr m_ModeConditionEClass;

    ::ecore::EClass_ptr m_ModeValueConditionEClass;

    ::ecore::EClass_ptr m_ModeLabelConditionEClass;

    ::ecore::EClass_ptr m_ModeConditionConjunctionEClass;

    ::ecore::EClass_ptr m_FixedPeriodicEClass;

    ::ecore::EClass_ptr m_PeriodicStimulusEClass;

    ::ecore::EClass_ptr m_RelativePeriodicStimulusEClass;

    ::ecore::EClass_ptr m_VariableRateStimulusEClass;

    ::ecore::EClass_ptr m_ScenarioEClass;

    ::ecore::EClass_ptr m_PeriodicSyntheticStimulusEClass;

    ::ecore::EClass_ptr m_CustomStimulusEClass;

    ::ecore::EClass_ptr m_SingleStimulusEClass;

    ::ecore::EClass_ptr m_InterProcessStimulusEClass;

    ::ecore::EClass_ptr m_PeriodicBurstStimulusEClass;

    ::ecore::EClass_ptr m_EventStimulusEClass;

    ::ecore::EClass_ptr m_ArrivalCurveStimulusEClass;

    ::ecore::EClass_ptr m_ArrivalCurveEntryEClass;

    ::ecore::EClass_ptr m_ClockEClass;

    ::ecore::EClass_ptr m_ClockFunctionEClass;

    ::ecore::EClass_ptr m_ClockStepListEClass;

    ::ecore::EClass_ptr m_ClockStepEClass;

    ::ecore::EClass_ptr m_SWModelEClass;

    ::ecore::EClass_ptr m_AbstractMemoryElementEClass;

    ::ecore::EClass_ptr m_AbstractProcessEClass;

    ::ecore::EClass_ptr m_CustomEntityEClass;

    ::ecore::EClass_ptr m_ProcessChainEClass;

    ::ecore::EClass_ptr m_ProcessEClass;

    ::ecore::EClass_ptr m_IActivityGraphItemContainerEClass;

    ::ecore::EClass_ptr m_ActivityGraphEClass;

    ::ecore::EClass_ptr m_ActivityGraphItemEClass;

    ::ecore::EClass_ptr m_ModeSwitchEClass;

    ::ecore::EClass_ptr m_ModeSwitchEntryEClass;

    ::ecore::EClass_ptr m_ModeSwitchDefaultEClass;

    ::ecore::EClass_ptr m_ProbabilitySwitchEClass;

    ::ecore::EClass_ptr m_ProbabilitySwitchEntryEClass;

    ::ecore::EClass_ptr m_CounterEClass;

    ::ecore::EClass_ptr m_WaitEventEClass;

    ::ecore::EClass_ptr m_SetEventEClass;

    ::ecore::EClass_ptr m_ClearEventEClass;

    ::ecore::EClass_ptr m_EventMaskEClass;

    ::ecore::EClass_ptr m_OsEventEClass;

    ::ecore::EClass_ptr m_InterProcessTriggerEClass;

    ::ecore::EClass_ptr m_EnforcedMigrationEClass;

    ::ecore::EClass_ptr m_SchedulePointEClass;

    ::ecore::EClass_ptr m_TerminateProcessEClass;

    ::ecore::EClass_ptr m_TaskEClass;

    ::ecore::EClass_ptr m_ISREClass;

    ::ecore::EClass_ptr m_ProcessPrototypeEClass;

    ::ecore::EClass_ptr m_ChainedProcessPrototypeEClass;

    ::ecore::EClass_ptr m_GeneralPrecedenceEClass;

    ::ecore::EClass_ptr m_AccessPrecedenceSpecEClass;

    ::ecore::EClass_ptr m_OrderPrecedenceSpecEClass;

    ::ecore::EClass_ptr m_IDependsOnEClass;

    ::ecore::EClass_ptr m_DataDependencyEClass;

    ::ecore::EClass_ptr m_RunnableParameterEClass;

    ::ecore::EClass_ptr m_RunnableEClass;

    ::ecore::EClass_ptr m_LabelEClass;

    ::ecore::EClass_ptr m_ChannelEClass;

    ::ecore::EClass_ptr m_ModeLabelEClass;

    ::ecore::EClass_ptr m_SectionEClass;

    ::ecore::EClass_ptr m_ComputationItemEClass;

    ::ecore::EClass_ptr m_ExecutionNeedEClass;

    ::ecore::EClass_ptr m_NeedEntryEClass;

    ::ecore::EClass_ptr m_TicksEClass;

    ::ecore::EClass_ptr m_TicksEntryEClass;

    ::ecore::EClass_ptr m_ModeLabelAccessEClass;

    ::ecore::EClass_ptr m_LabelAccessEClass;

    ::ecore::EClass_ptr m_ChannelAccessEClass;

    ::ecore::EClass_ptr m_ChannelSendEClass;

    ::ecore::EClass_ptr m_ChannelReceiveEClass;

    ::ecore::EClass_ptr m_SemaphoreAccessEClass;

    ::ecore::EClass_ptr m_SenderReceiverCommunicationEClass;

    ::ecore::EClass_ptr m_SenderReceiverReadEClass;

    ::ecore::EClass_ptr m_SenderReceiverWriteEClass;

    ::ecore::EClass_ptr m_ServerCallEClass;

    ::ecore::EClass_ptr m_SynchronousServerCallEClass;

    ::ecore::EClass_ptr m_AsynchronousServerCallEClass;

    ::ecore::EClass_ptr m_GetResultServerCallEClass;

    ::ecore::EClass_ptr m_GroupEClass;

    ::ecore::EClass_ptr m_CallArgumentEClass;

    ::ecore::EClass_ptr m_RunnableCallEClass;

    ::ecore::EClass_ptr m_CustomEventTriggerEClass;

    ::ecore::EClass_ptr m_DataTypeEClass;

    ::ecore::EClass_ptr m_CompoundTypeEClass;

    ::ecore::EClass_ptr m_StructEClass;

    ::ecore::EClass_ptr m_StructEntryEClass;

    ::ecore::EClass_ptr m_ArrayEClass;

    ::ecore::EClass_ptr m_PointerEClass;

    ::ecore::EClass_ptr m_TypeRefEClass;

    ::ecore::EClass_ptr m_AliasEClass;

    ::ecore::EClass_ptr m_TypeDefinitionEClass;

    ::ecore::EClass_ptr m_DataTypeDefinitionEClass;

    ::ecore::EClass_ptr m_BaseTypeDefinitionEClass;

    ::ecore::EClass_ptr m_ActivationEClass;

    ::ecore::EClass_ptr m_PeriodicActivationEClass;

    ::ecore::EClass_ptr m_VariableRateActivationEClass;

    ::ecore::EClass_ptr m_SporadicActivationEClass;

    ::ecore::EClass_ptr m_SingleActivationEClass;

    ::ecore::EClass_ptr m_EventActivationEClass;

    ::ecore::EClass_ptr m_CustomActivationEClass;

    ::ecore::EClass_ptr m_LabelAccessStatisticEClass;

    ::ecore::EClass_ptr m_RunEntityCallStatisticEClass;

    // EEnuminstances 

    ::ecore::EEnum_ptr m_RelationalOperatorEEnum;

    ::ecore::EEnum_ptr m_TimeUnitEEnum;

    ::ecore::EEnum_ptr m_FrequencyUnitEEnum;

    ::ecore::EEnum_ptr m_VoltageUnitEEnum;

    ::ecore::EEnum_ptr m_DataSizeUnitEEnum;

    ::ecore::EEnum_ptr m_DataRateUnitEEnum;

    ::ecore::EEnum_ptr m_SamplingTypeEEnum;

    ::ecore::EEnum_ptr m_InterfaceKindEEnum;

    ::ecore::EEnum_ptr m_RunnableOrderTypeEEnum;

    ::ecore::EEnum_ptr m_EventChainItemTypeEEnum;

    ::ecore::EEnum_ptr m_SynchronizationTypeEEnum;

    ::ecore::EEnum_ptr m_MappingTypeEEnum;

    ::ecore::EEnum_ptr m_LatencyTypeEEnum;

    ::ecore::EEnum_ptr m_SeverityEEnum;

    ::ecore::EEnum_ptr m_LimitTypeEEnum;

    ::ecore::EEnum_ptr m_TimeMetricEEnum;

    ::ecore::EEnum_ptr m_CountMetricEEnum;

    ::ecore::EEnum_ptr m_PercentageMetricEEnum;

    ::ecore::EEnum_ptr m_CPUPercentageMetricEEnum;

    ::ecore::EEnum_ptr m_FrequencyMetricEEnum;

    ::ecore::EEnum_ptr m_CoherencyDirectionEEnum;

    ::ecore::EEnum_ptr m_ProcessEventTypeEEnum;

    ::ecore::EEnum_ptr m_RunnableEventTypeEEnum;

    ::ecore::EEnum_ptr m_LabelEventTypeEEnum;

    ::ecore::EEnum_ptr m_ChannelEventTypeEEnum;

    ::ecore::EEnum_ptr m_SemaphoreEventTypeEEnum;

    ::ecore::EEnum_ptr m_ComponentEventTypeEEnum;

    ::ecore::EEnum_ptr m_MemoryTypeEEnum;

    ::ecore::EEnum_ptr m_StructureTypeEEnum;

    ::ecore::EEnum_ptr m_CacheTypeEEnum;

    ::ecore::EEnum_ptr m_PortTypeEEnum;

    ::ecore::EEnum_ptr m_SchedPolicyEEnum;

    ::ecore::EEnum_ptr m_WriteStrategyEEnum;

    ::ecore::EEnum_ptr m_PuTypeEEnum;

    ::ecore::EEnum_ptr m_PortInterfaceEEnum;

    ::ecore::EEnum_ptr m_HwFeatureTypeEEnum;

    ::ecore::EEnum_ptr m_MemoryAddressMappingTypeEEnum;

    ::ecore::EEnum_ptr m_OsDataConsistencyModeEEnum;

    ::ecore::EEnum_ptr m_AccessMultiplicityEEnum;

    ::ecore::EEnum_ptr m_DataStabilityLevelEEnum;

    ::ecore::EEnum_ptr m_SemaphoreTypeEEnum;

    ::ecore::EEnum_ptr m_ConditionEEnum;

    ::ecore::EEnum_ptr m_GroupingTypeEEnum;

    ::ecore::EEnum_ptr m_CurveTypeEEnum;

    ::ecore::EEnum_ptr m_WaitEventTypeEEnum;

    ::ecore::EEnum_ptr m_WaitingBehaviourEEnum;

    ::ecore::EEnum_ptr m_ISRCategoryEEnum;

    ::ecore::EEnum_ptr m_AccessPrecedenceTypeEEnum;

    ::ecore::EEnum_ptr m_OrderTypeEEnum;

    ::ecore::EEnum_ptr m_DirectionTypeEEnum;

    ::ecore::EEnum_ptr m_LabelDataStabilityEEnum;

    ::ecore::EEnum_ptr m_ModeLabelAccessEnumEEnum;

    ::ecore::EEnum_ptr m_ReceiveOperationEEnum;

    ::ecore::EEnum_ptr m_LabelAccessDataStabilityEEnum;

    ::ecore::EEnum_ptr m_LabelAccessEnumEEnum;

    ::ecore::EEnum_ptr m_LabelAccessImplementationEEnum;

    ::ecore::EEnum_ptr m_SemaphoreAccessEnumEEnum;

    ::ecore::EEnum_ptr m_BlockingTypeEEnum;

    ::ecore::EEnum_ptr m_PreemptionEEnum;

    ::ecore::EEnum_ptr m_ConcurrencyTypeEEnum;

    ::ecore::EEnum_ptr m_ASILTypeEEnum;

    // EDataType instances 

    ::ecore::EDataType_ptr m_AddressEDataType;

    ::ecore::EDataType_ptr m_PositiveIntEDataType;

    ::ecore::EDataType_ptr m_PositiveLongEDataType;

    ::ecore::EDataType_ptr m_PositiveDoubleEDataType;

    ::ecore::EDataType_ptr m_NonNegativeIntEDataType;

    ::ecore::EDataType_ptr m_NonNegativeLongEDataType;

    ::ecore::EDataType_ptr m_NonNegativeDoubleEDataType;

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_IAnnotatable__customProperties;

    ::ecore::EAttribute_ptr m_Amalthea__version;

    ::ecore::EReference_ptr m_Amalthea__commonElements;

    ::ecore::EReference_ptr m_Amalthea__swModel;

    ::ecore::EReference_ptr m_Amalthea__hwModel;

    ::ecore::EReference_ptr m_Amalthea__osModel;

    ::ecore::EReference_ptr m_Amalthea__stimuliModel;

    ::ecore::EReference_ptr m_Amalthea__eventModel;

    ::ecore::EReference_ptr m_Amalthea__constraintsModel;

    ::ecore::EReference_ptr m_Amalthea__propertyConstraintsModel;

    ::ecore::EReference_ptr m_Amalthea__mappingModel;

    ::ecore::EReference_ptr m_Amalthea__componentsModel;

    ::ecore::EReference_ptr m_Amalthea__configModel;

    ::ecore::EReference_ptr m_CommonElements__tags;

    ::ecore::EReference_ptr m_CommonElements__namespaces;

    ::ecore::EReference_ptr m_CommonElements__coreClassifiers;

    ::ecore::EReference_ptr m_CommonElements__memoryClassifiers;

    ::ecore::EAttribute_ptr m_INamed__name;

    ::ecore::EAttribute_ptr m_INamed__qualifiedName;

    ::ecore::EAttribute_ptr m_IReferable__uniqueName;

    ::ecore::EReference_ptr m_ITaggable__tags;

    ::ecore::EAttribute_ptr m_IDisplayName__displayName;

    ::ecore::EAttribute_ptr m_IDescription__description;

    ::ecore::EReference_ptr m_INamespaceMember__namespace;

    ::ecore::EAttribute_ptr m_Tag__tagType;

    ::ecore::EReference_ptr m_Tag__taggedObjects;

    ::ecore::EReference_ptr m_Namespace__nextSegments;

    ::ecore::EReference_ptr m_Namespace__previousSegment;

    ::ecore::EReference_ptr m_Namespace__memberObjects;

    ::ecore::EReference_ptr m_TransmissionPolicy__chunkSize;

    ::ecore::EAttribute_ptr m_TransmissionPolicy__chunkProcessingTicks;

    ::ecore::EAttribute_ptr m_TransmissionPolicy__transmitRatio;

    ::ecore::EAttribute_ptr m_Time__value;

    ::ecore::EAttribute_ptr m_Time__unit;

    ::ecore::EAttribute_ptr m_Frequency__value;

    ::ecore::EAttribute_ptr m_Frequency__unit;

    ::ecore::EAttribute_ptr m_Voltage__value;

    ::ecore::EAttribute_ptr m_Voltage__unit;

    ::ecore::EAttribute_ptr m_DataSize__value;

    ::ecore::EAttribute_ptr m_DataSize__unit;

    ::ecore::EAttribute_ptr m_DataRate__value;

    ::ecore::EAttribute_ptr m_DataRate__unit;

    ::ecore::EAttribute_ptr m_CustomProperty__key;

    ::ecore::EReference_ptr m_CustomProperty__value;

    ::ecore::EReference_ptr m_ListObject__values;

    ::ecore::EAttribute_ptr m_StringObject__value;

    ::ecore::EAttribute_ptr m_BigIntegerObject__value;

    ::ecore::EReference_ptr m_ReferenceObject__value;

    ::ecore::EAttribute_ptr m_IntegerObject__value;

    ::ecore::EAttribute_ptr m_LongObject__value;

    ::ecore::EAttribute_ptr m_FloatObject__value;

    ::ecore::EAttribute_ptr m_DoubleObject__value;

    ::ecore::EAttribute_ptr m_BooleanObject__value;

    ::ecore::EAttribute_ptr m_MinAvgMaxStatistic__min;

    ::ecore::EAttribute_ptr m_MinAvgMaxStatistic__avg;

    ::ecore::EAttribute_ptr m_MinAvgMaxStatistic__max;

    ::ecore::EAttribute_ptr m_SingleValueStatistic__value;

    ::ecore::EReference_ptr m_TimeInterval__lowerBound;

    ::ecore::EReference_ptr m_TimeInterval__upperBound;

    ::ecore::EReference_ptr m_TimeConstant__value;

    ::ecore::EReference_ptr m_TimeHistogram__entries;

    ::ecore::EAttribute_ptr m_TimeHistogramEntry__occurrences;

    ::ecore::EReference_ptr m_TruncatedTimeDistribution__lowerBound;

    ::ecore::EReference_ptr m_TruncatedTimeDistribution__upperBound;

    ::ecore::EAttribute_ptr m_TimeBoundaries__samplingType;

    ::ecore::EReference_ptr m_TimeStatistics__average;

    ::ecore::EReference_ptr m_TimeGaussDistribution__mean;

    ::ecore::EReference_ptr m_TimeGaussDistribution__sd;

    ::ecore::EReference_ptr m_TimeWeibullEstimatorsDistribution__average;

    ::ecore::EAttribute_ptr m_TimeWeibullEstimatorsDistribution__pRemainPromille;

    ::ecore::EAttribute_ptr m_TimeBetaDistribution__alpha;

    ::ecore::EAttribute_ptr m_TimeBetaDistribution__beta;

    ::ecore::EAttribute_ptr m_DiscreteValueInterval__lowerBound;

    ::ecore::EAttribute_ptr m_DiscreteValueInterval__upperBound;

    ::ecore::EAttribute_ptr m_DiscreteValueConstant__value;

    ::ecore::EReference_ptr m_DiscreteValueHistogram__entries;

    ::ecore::EAttribute_ptr m_DiscreteValueHistogramEntry__occurrences;

    ::ecore::EAttribute_ptr m_TruncatedDiscreteValueDistribution__lowerBound;

    ::ecore::EAttribute_ptr m_TruncatedDiscreteValueDistribution__upperBound;

    ::ecore::EAttribute_ptr m_DiscreteValueBoundaries__samplingType;

    ::ecore::EAttribute_ptr m_DiscreteValueStatistics__average;

    ::ecore::EAttribute_ptr m_DiscreteValueGaussDistribution__mean;

    ::ecore::EAttribute_ptr m_DiscreteValueGaussDistribution__sd;

    ::ecore::EAttribute_ptr m_DiscreteValueWeibullEstimatorsDistribution__average;

    ::ecore::EAttribute_ptr m_DiscreteValueWeibullEstimatorsDistribution__pRemainPromille;

    ::ecore::EAttribute_ptr m_DiscreteValueBetaDistribution__alpha;

    ::ecore::EAttribute_ptr m_DiscreteValueBetaDistribution__beta;

    ::ecore::EAttribute_ptr m_ContinuousValueInterval__lowerBound;

    ::ecore::EAttribute_ptr m_ContinuousValueInterval__upperBound;

    ::ecore::EAttribute_ptr m_ContinuousValueConstant__value;

    ::ecore::EReference_ptr m_ContinuousValueHistogram__entries;

    ::ecore::EAttribute_ptr m_ContinuousValueHistogramEntry__occurrences;

    ::ecore::EAttribute_ptr m_TruncatedContinuousValueDistribution__lowerBound;

    ::ecore::EAttribute_ptr m_TruncatedContinuousValueDistribution__upperBound;

    ::ecore::EAttribute_ptr m_ContinuousValueBoundaries__samplingType;

    ::ecore::EAttribute_ptr m_ContinuousValueStatistics__average;

    ::ecore::EAttribute_ptr m_ContinuousValueGaussDistribution__mean;

    ::ecore::EAttribute_ptr m_ContinuousValueGaussDistribution__sd;

    ::ecore::EAttribute_ptr m_ContinuousValueWeibullEstimatorsDistribution__average;

    ::ecore::EAttribute_ptr m_ContinuousValueWeibullEstimatorsDistribution__pRemainPromille;

    ::ecore::EAttribute_ptr m_ContinuousValueBetaDistribution__alpha;

    ::ecore::EAttribute_ptr m_ContinuousValueBetaDistribution__beta;

    ::ecore::EReference_ptr m_EnumMode__literals;

    ::ecore::EReference_ptr m_ModeLiteral__containingMode;

    ::ecore::EReference_ptr m_IComponentContainer__components;

    ::ecore::EReference_ptr m_IInterfaceContainer__interfaces;

    ::ecore::EReference_ptr m_ComponentsModel__structures;

    ::ecore::EReference_ptr m_ComponentsModel__systems;

    ::ecore::EReference_ptr m_ISystem__componentInstances;

    ::ecore::EReference_ptr m_ISystem__connectors;

    ::ecore::EReference_ptr m_ISystem__groundedPorts;

    ::ecore::EReference_ptr m_ISystem__innerPorts;

    ::ecore::EReference_ptr m_ComponentInterface__datatype;

    ::ecore::EReference_ptr m_ComponentInterface__subInterfaces;

    ::ecore::EReference_ptr m_IComponentStructureMember__structure;

    ::ecore::EAttribute_ptr m_MainInterface__version;

    ::ecore::EReference_ptr m_SubInterface__containingInterface;

    ::ecore::EReference_ptr m_ComponentPort__containingComponent;

    ::ecore::EAttribute_ptr m_ComponentPort__kind;

    ::ecore::EReference_ptr m_ComponentPort__interface;

    ::ecore::EAttribute_ptr m_ComponentStructure__structureType;

    ::ecore::EReference_ptr m_ComponentStructure__subStructures;

    ::ecore::EReference_ptr m_ComponentStructure__memberObjects;

    ::ecore::EReference_ptr m_Component__ports;

    ::ecore::EReference_ptr m_Component__processes;

    ::ecore::EReference_ptr m_Component__runnables;

    ::ecore::EReference_ptr m_Component__labels;

    ::ecore::EReference_ptr m_Component__semaphores;

    ::ecore::EReference_ptr m_Component__osEvents;

    ::ecore::EReference_ptr m_ComponentInstance__containingSystem;

    ::ecore::EReference_ptr m_ComponentInstance__type;

    ::ecore::EReference_ptr m_Connector__containingSystem;

    ::ecore::EReference_ptr m_Connector__sourcePort;

    ::ecore::EReference_ptr m_Connector__targetPort;

    ::ecore::EReference_ptr m_Connector__implementedInterfaces;

    ::ecore::EReference_ptr m_InterfaceChannel__key;

    ::ecore::EReference_ptr m_InterfaceChannel__value;

    ::ecore::EReference_ptr m_QualifiedPort__instance;

    ::ecore::EReference_ptr m_QualifiedPort__port;

    ::ecore::EReference_ptr m_ConfigModel__eventsToTrace;

    ::ecore::EReference_ptr m_EventConfig__event;

    ::ecore::EReference_ptr m_ConstraintsModel__eventChains;

    ::ecore::EReference_ptr m_ConstraintsModel__timingConstraints;

    ::ecore::EReference_ptr m_ConstraintsModel__affinityConstraints;

    ::ecore::EReference_ptr m_ConstraintsModel__runnableSequencingConstraints;

    ::ecore::EReference_ptr m_ConstraintsModel__dataAgeConstraints;

    ::ecore::EReference_ptr m_ConstraintsModel__requirements;

    ::ecore::EReference_ptr m_ConstraintsModel__dataCoherencyGroups;

    ::ecore::EReference_ptr m_ConstraintsModel__dataStabilityGroups;

    ::ecore::EReference_ptr m_ConstraintsModel__physicalSectionConstraints;

    ::ecore::EAttribute_ptr m_RunnableSequencingConstraint__orderType;

    ::ecore::EReference_ptr m_RunnableSequencingConstraint__runnableGroups;

    ::ecore::EReference_ptr m_RunnableSequencingConstraint__processScope;

    ::ecore::EReference_ptr m_ProcessConstraint__target;

    ::ecore::EReference_ptr m_RunnableConstraint__target;

    ::ecore::EReference_ptr m_DataConstraint__target;

    ::ecore::EReference_ptr m_RunnableSeparationConstraint__groups;

    ::ecore::EReference_ptr m_ProcessSeparationConstraint__groups;

    ::ecore::EReference_ptr m_DataSeparationConstraint__groups;

    ::ecore::EReference_ptr m_RunnablePairingConstraint__group;

    ::ecore::EReference_ptr m_ProcessPairingConstraint__group;

    ::ecore::EReference_ptr m_DataPairingConstraint__group;

    ::ecore::EReference_ptr m_TargetMemory__memories;

    ::ecore::EReference_ptr m_TargetCore__cores;

    ::ecore::EReference_ptr m_TargetScheduler__schedulers;

    ::ecore::EReference_ptr m_LabelEntityGroup__labels;

    ::ecore::EReference_ptr m_RunnableEntityGroup__runnables;

    ::ecore::EReference_ptr m_ProcessEntityGroup__processes;

    ::ecore::EReference_ptr m_TagGroup__tag;

    ::ecore::EReference_ptr m_AbstractEventChain__stimulus;

    ::ecore::EReference_ptr m_AbstractEventChain__response;

    ::ecore::EReference_ptr m_AbstractEventChain__items;

    ::ecore::EAttribute_ptr m_AbstractEventChain__itemType;

    ::ecore::EAttribute_ptr m_AbstractEventChain__minItemsCompleted;

    ::ecore::EReference_ptr m_EventChainReference__eventChain;

    ::ecore::EReference_ptr m_EventChainContainer__eventChain;

    ::ecore::EReference_ptr m_PhysicalSectionConstraint__section;

    ::ecore::EReference_ptr m_PhysicalSectionConstraint__memories;

    ::ecore::EAttribute_ptr m_SynchronizationConstraint__multipleOccurrencesAllowed;

    ::ecore::EReference_ptr m_SynchronizationConstraint__tolerance;

    ::ecore::EReference_ptr m_EventSynchronizationConstraint__events;

    ::ecore::EReference_ptr m_EventChainSynchronizationConstraint__scope;

    ::ecore::EAttribute_ptr m_EventChainSynchronizationConstraint__type;

    ::ecore::EAttribute_ptr m_DelayConstraint__mappingType;

    ::ecore::EReference_ptr m_DelayConstraint__source;

    ::ecore::EReference_ptr m_DelayConstraint__target;

    ::ecore::EReference_ptr m_DelayConstraint__upper;

    ::ecore::EReference_ptr m_DelayConstraint__lower;

    ::ecore::EReference_ptr m_EventChainLatencyConstraint__scope;

    ::ecore::EAttribute_ptr m_EventChainLatencyConstraint__type;

    ::ecore::EReference_ptr m_EventChainLatencyConstraint__minimum;

    ::ecore::EReference_ptr m_EventChainLatencyConstraint__maximum;

    ::ecore::EReference_ptr m_RepetitionConstraint__event;

    ::ecore::EAttribute_ptr m_RepetitionConstraint__span;

    ::ecore::EReference_ptr m_RepetitionConstraint__lower;

    ::ecore::EReference_ptr m_RepetitionConstraint__upper;

    ::ecore::EReference_ptr m_RepetitionConstraint__jitter;

    ::ecore::EReference_ptr m_RepetitionConstraint__period;

    ::ecore::EReference_ptr m_DataAgeConstraint__runnable;

    ::ecore::EReference_ptr m_DataAgeConstraint__label;

    ::ecore::EReference_ptr m_DataAgeConstraint__dataAge;

    ::ecore::EAttribute_ptr m_DataAgeCycle__minimumCycle;

    ::ecore::EAttribute_ptr m_DataAgeCycle__maximumCycle;

    ::ecore::EReference_ptr m_DataAgeTime__minimumTime;

    ::ecore::EReference_ptr m_DataAgeTime__maximumTime;

    ::ecore::EAttribute_ptr m_Requirement__severity;

    ::ecore::EReference_ptr m_Requirement__limit;

    ::ecore::EReference_ptr m_ProcessRequirement__process;

    ::ecore::EReference_ptr m_RunnableRequirement__runnable;

    ::ecore::EReference_ptr m_ArchitectureRequirement__component;

    ::ecore::EReference_ptr m_ProcessChainRequirement__processChain;

    ::ecore::EAttribute_ptr m_RequirementLimit__limitType;

    ::ecore::EAttribute_ptr m_CPUPercentageRequirementLimit__metric;

    ::ecore::EAttribute_ptr m_CPUPercentageRequirementLimit__limitValue;

    ::ecore::EReference_ptr m_CPUPercentageRequirementLimit__hardwareContext;

    ::ecore::EAttribute_ptr m_FrequencyRequirementLimit__metric;

    ::ecore::EReference_ptr m_FrequencyRequirementLimit__limitValue;

    ::ecore::EAttribute_ptr m_PercentageRequirementLimit__metric;

    ::ecore::EAttribute_ptr m_PercentageRequirementLimit__limitValue;

    ::ecore::EAttribute_ptr m_CountRequirementLimit__metric;

    ::ecore::EAttribute_ptr m_CountRequirementLimit__limitValue;

    ::ecore::EAttribute_ptr m_TimeRequirementLimit__metric;

    ::ecore::EReference_ptr m_TimeRequirementLimit__limitValue;

    ::ecore::EReference_ptr m_DataCoherencyGroup__labels;

    ::ecore::EReference_ptr m_DataCoherencyGroup__scope;

    ::ecore::EAttribute_ptr m_DataCoherencyGroup__direction;

    ::ecore::EReference_ptr m_DataStabilityGroup__labels;

    ::ecore::EReference_ptr m_DataStabilityGroup__scope;

    ::ecore::EReference_ptr m_ProcessScope__process;

    ::ecore::EReference_ptr m_RunnableScope__runnable;

    ::ecore::EReference_ptr m_ComponentScope__component;

    ::ecore::EReference_ptr m_EventModel__events;

    ::ecore::EReference_ptr m_EventSet__events;

    ::ecore::EAttribute_ptr m_CustomEvent__eventType;

    ::ecore::EReference_ptr m_CustomEvent__explicitTriggers;

    ::ecore::EReference_ptr m_StimulusEvent__entity;

    ::ecore::EAttribute_ptr m_ProcessEvent__eventType;

    ::ecore::EReference_ptr m_ProcessEvent__entity;

    ::ecore::EReference_ptr m_ProcessEvent__processingUnit;

    ::ecore::EAttribute_ptr m_ProcessChainEvent__eventType;

    ::ecore::EReference_ptr m_ProcessChainEvent__entity;

    ::ecore::EReference_ptr m_ProcessChainEvent__processingUnit;

    ::ecore::EAttribute_ptr m_RunnableEvent__eventType;

    ::ecore::EReference_ptr m_RunnableEvent__entity;

    ::ecore::EReference_ptr m_RunnableEvent__process;

    ::ecore::EReference_ptr m_RunnableEvent__processingUnit;

    ::ecore::EAttribute_ptr m_LabelEvent__eventType;

    ::ecore::EReference_ptr m_LabelEvent__entity;

    ::ecore::EReference_ptr m_LabelEvent__runnable;

    ::ecore::EReference_ptr m_LabelEvent__process;

    ::ecore::EAttribute_ptr m_ChannelEvent__eventType;

    ::ecore::EReference_ptr m_ChannelEvent__entity;

    ::ecore::EReference_ptr m_ChannelEvent__runnable;

    ::ecore::EReference_ptr m_ChannelEvent__process;

    ::ecore::EAttribute_ptr m_SemaphoreEvent__eventType;

    ::ecore::EReference_ptr m_SemaphoreEvent__entity;

    ::ecore::EReference_ptr m_SemaphoreEvent__runnable;

    ::ecore::EReference_ptr m_SemaphoreEvent__process;

    ::ecore::EReference_ptr m_SemaphoreEvent__processingUnit;

    ::ecore::EAttribute_ptr m_ComponentEvent__eventType;

    ::ecore::EReference_ptr m_ComponentEvent__entity;

    ::ecore::EReference_ptr m_HWModel__definitions;

    ::ecore::EReference_ptr m_HWModel__featureCategories;

    ::ecore::EReference_ptr m_HWModel__structures;

    ::ecore::EReference_ptr m_HWModel__domains;

    ::ecore::EAttribute_ptr m_HwStructure__structureType;

    ::ecore::EReference_ptr m_HwStructure__ports;

    ::ecore::EReference_ptr m_HwStructure__structures;

    ::ecore::EReference_ptr m_HwStructure__modules;

    ::ecore::EReference_ptr m_HwStructure__connections;

    ::ecore::EReference_ptr m_HwStructure__innerPorts;

    ::ecore::EReference_ptr m_HwModule__ports;

    ::ecore::EReference_ptr m_HwModule__powerDomain;

    ::ecore::EReference_ptr m_HwModule__frequencyDomain;

    ::ecore::EReference_ptr m_FrequencyDomain__defaultValue;

    ::ecore::EAttribute_ptr m_FrequencyDomain__clockGating;

    ::ecore::EReference_ptr m_PowerDomain__defaultValue;

    ::ecore::EAttribute_ptr m_PowerDomain__powerGating;

    ::ecore::EReference_ptr m_ProcessingUnit__definition;

    ::ecore::EReference_ptr m_ProcessingUnit__accessElements;

    ::ecore::EReference_ptr m_ProcessingUnit__caches;

    ::ecore::EReference_ptr m_Memory__definition;

    ::ecore::EReference_ptr m_Memory__mappings;

    ::ecore::EReference_ptr m_Cache__definition;

    ::ecore::EAttribute_ptr m_HwFeatureCategory__featureType;

    ::ecore::EReference_ptr m_HwFeatureCategory__features;

    ::ecore::EReference_ptr m_HwFeature__containingCategory;

    ::ecore::EAttribute_ptr m_HwFeature__value;

    ::ecore::EAttribute_ptr m_HwPort__bitWidth;

    ::ecore::EAttribute_ptr m_HwPort__priority;

    ::ecore::EAttribute_ptr m_HwPort__portType;

    ::ecore::EAttribute_ptr m_HwPort__portInterface;

    ::ecore::EAttribute_ptr m_HwPort__delegated;

    ::ecore::EReference_ptr m_HwPort__connections;

    ::ecore::EReference_ptr m_ConnectionHandler__definition;

    ::ecore::EReference_ptr m_ConnectionHandler__internalConnections;

    ::ecore::EReference_ptr m_HwConnection__readLatency;

    ::ecore::EReference_ptr m_HwConnection__writeLatency;

    ::ecore::EReference_ptr m_HwConnection__dataRate;

    ::ecore::EReference_ptr m_HwConnection__port1;

    ::ecore::EReference_ptr m_HwConnection__port2;

    ::ecore::EAttribute_ptr m_HwConnection__internal;

    ::ecore::EReference_ptr m_HwAccessElement__source;

    ::ecore::EReference_ptr m_HwAccessElement__destination;

    ::ecore::EReference_ptr m_HwAccessElement__accessPath;

    ::ecore::EReference_ptr m_HwAccessElement__readLatency;

    ::ecore::EReference_ptr m_HwAccessElement__writeLatency;

    ::ecore::EReference_ptr m_HwAccessElement__dataRate;

    ::ecore::EAttribute_ptr m_ProcessingUnitDefinition__puType;

    ::ecore::EReference_ptr m_ProcessingUnitDefinition__features;

    ::ecore::EReference_ptr m_ProcessingUnitDefinition__classifiers;

    ::ecore::EAttribute_ptr m_ConnectionHandlerDefinition__policy;

    ::ecore::EReference_ptr m_ConnectionHandlerDefinition__readLatency;

    ::ecore::EReference_ptr m_ConnectionHandlerDefinition__writeLatency;

    ::ecore::EReference_ptr m_ConnectionHandlerDefinition__dataRate;

    ::ecore::EAttribute_ptr m_ConnectionHandlerDefinition__maxBurstSize;

    ::ecore::EAttribute_ptr m_ConnectionHandlerDefinition__maxConcurrentTransfers;

    ::ecore::EReference_ptr m_MemoryDefinition__size;

    ::ecore::EReference_ptr m_MemoryDefinition__accessLatency;

    ::ecore::EReference_ptr m_MemoryDefinition__dataRate;

    ::ecore::EAttribute_ptr m_MemoryDefinition__memoryType;

    ::ecore::EReference_ptr m_MemoryDefinition__classifiers;

    ::ecore::EReference_ptr m_CacheDefinition__size;

    ::ecore::EReference_ptr m_CacheDefinition__lineSize;

    ::ecore::EReference_ptr m_CacheDefinition__accessLatency;

    ::ecore::EAttribute_ptr m_CacheDefinition__cacheType;

    ::ecore::EAttribute_ptr m_CacheDefinition__writeStrategy;

    ::ecore::EAttribute_ptr m_CacheDefinition__nWays;

    ::ecore::EAttribute_ptr m_CacheDefinition__coherency;

    ::ecore::EAttribute_ptr m_CacheDefinition__exclusive;

    ::ecore::EAttribute_ptr m_CacheDefinition__hitRate;

    ::ecore::EReference_ptr m_HwPath__source;

    ::ecore::EReference_ptr m_HwPath__destination;

    ::ecore::EReference_ptr m_HwAccessPath__containingAccessElement;

    ::ecore::EReference_ptr m_HwAccessPath__pathElements;

    ::ecore::EAttribute_ptr m_HwAccessPath__startAddress;

    ::ecore::EAttribute_ptr m_HwAccessPath__endAddress;

    ::ecore::EAttribute_ptr m_HwAccessPath__memOffset;

    ::ecore::EReference_ptr m_MappingModel__schedulerAllocation;

    ::ecore::EReference_ptr m_MappingModel__runnableAllocation;

    ::ecore::EReference_ptr m_MappingModel__taskAllocation;

    ::ecore::EReference_ptr m_MappingModel__isrAllocation;

    ::ecore::EReference_ptr m_MappingModel__memoryMapping;

    ::ecore::EReference_ptr m_MappingModel__physicalSectionMapping;

    ::ecore::EAttribute_ptr m_MappingModel__addressMappingType;

    ::ecore::EReference_ptr m_SchedulerAllocation__scheduler;

    ::ecore::EReference_ptr m_SchedulerAllocation__responsibility;

    ::ecore::EReference_ptr m_SchedulerAllocation__executingPU;

    ::ecore::EReference_ptr m_TaskAllocation__task;

    ::ecore::EReference_ptr m_TaskAllocation__scheduler;

    ::ecore::EReference_ptr m_TaskAllocation__affinity;

    ::ecore::EReference_ptr m_TaskAllocation__schedulingParameters;

    ::ecore::EReference_ptr m_TaskAllocation__parameterExtensions;

    ::ecore::EReference_ptr m_ISRAllocation__isr;

    ::ecore::EReference_ptr m_ISRAllocation__controller;

    ::ecore::EAttribute_ptr m_ISRAllocation__priority;

    ::ecore::EReference_ptr m_RunnableAllocation__scheduler;

    ::ecore::EReference_ptr m_RunnableAllocation__entity;

    ::ecore::EReference_ptr m_MemoryMapping__abstractElement;

    ::ecore::EReference_ptr m_MemoryMapping__memory;

    ::ecore::EAttribute_ptr m_MemoryMapping__memoryPositionAddress;

    ::ecore::EReference_ptr m_PhysicalSectionMapping__origin;

    ::ecore::EReference_ptr m_PhysicalSectionMapping__memory;

    ::ecore::EAttribute_ptr m_PhysicalSectionMapping__startAddress;

    ::ecore::EAttribute_ptr m_PhysicalSectionMapping__endAddress;

    ::ecore::EReference_ptr m_PhysicalSectionMapping__labels;

    ::ecore::EReference_ptr m_PhysicalSectionMapping__runEntities;

    ::ecore::EReference_ptr m_OSModel__semaphores;

    ::ecore::EReference_ptr m_OSModel__operatingSystems;

    ::ecore::EReference_ptr m_OSModel__osOverheads;

    ::ecore::EAttribute_ptr m_OsDataConsistency__mode;

    ::ecore::EReference_ptr m_OsDataConsistency__dataStability;

    ::ecore::EReference_ptr m_OsDataConsistency__nonAtomicDataCoherency;

    ::ecore::EAttribute_ptr m_DataStability__enabled;

    ::ecore::EAttribute_ptr m_DataStability__algorithm;

    ::ecore::EAttribute_ptr m_DataStability__accessMultiplicity;

    ::ecore::EAttribute_ptr m_DataStability__level;

    ::ecore::EAttribute_ptr m_NonAtomicDataCoherency__enabled;

    ::ecore::EAttribute_ptr m_NonAtomicDataCoherency__algorithm;

    ::ecore::EAttribute_ptr m_NonAtomicDataCoherency__accessMultiplicity;

    ::ecore::EAttribute_ptr m_Semaphore__semaphoreType;

    ::ecore::EAttribute_ptr m_Semaphore__initialValue;

    ::ecore::EAttribute_ptr m_Semaphore__maxValue;

    ::ecore::EAttribute_ptr m_Semaphore__priorityCeilingProtocol;

    ::ecore::EReference_ptr m_Semaphore__semaphoreAccesses;

    ::ecore::EReference_ptr m_Semaphore__referringComponents;

    ::ecore::EReference_ptr m_Scheduler__computationItems;

    ::ecore::EReference_ptr m_Scheduler__schedulerAllocations;

    ::ecore::EReference_ptr m_Scheduler__runnableAllocations;

    ::ecore::EReference_ptr m_TaskScheduler__schedulingAlgorithm;

    ::ecore::EReference_ptr m_TaskScheduler__parentAssociation;

    ::ecore::EReference_ptr m_TaskScheduler__childAssociations;

    ::ecore::EReference_ptr m_TaskScheduler__taskAllocations;

    ::ecore::EReference_ptr m_TaskScheduler__parentScheduler;

    ::ecore::EReference_ptr m_TaskScheduler__childSchedulers;

    ::ecore::EReference_ptr m_SchedulerAssociation__child;

    ::ecore::EReference_ptr m_SchedulerAssociation__parent;

    ::ecore::EReference_ptr m_SchedulerAssociation__schedulingParameters;

    ::ecore::EReference_ptr m_SchedulerAssociation__parameterExtensions;

    ::ecore::EReference_ptr m_InterruptController__schedulingAlgorithm;

    ::ecore::EReference_ptr m_InterruptController__isrAllocations;

    ::ecore::EAttribute_ptr m_SchedulingParameters__priority;

    ::ecore::EReference_ptr m_SchedulingParameters__minBudget;

    ::ecore::EReference_ptr m_SchedulingParameters__maxBudget;

    ::ecore::EReference_ptr m_SchedulingParameters__replenishment;

    ::ecore::EAttribute_ptr m_ParameterExtension__key;

    ::ecore::EAttribute_ptr m_ParameterExtension__value;

    ::ecore::EAttribute_ptr m_Pfair__quantSizeNs;

    ::ecore::EReference_ptr m_UserSpecificSchedulingAlgorithm__parameterExtensions;

    ::ecore::EReference_ptr m_OperatingSystem__overhead;

    ::ecore::EReference_ptr m_OperatingSystem__taskSchedulers;

    ::ecore::EReference_ptr m_OperatingSystem__interruptControllers;

    ::ecore::EReference_ptr m_OperatingSystem__osDataConsistency;

    ::ecore::EAttribute_ptr m_VendorOperatingSystem__osName;

    ::ecore::EAttribute_ptr m_VendorOperatingSystem__vendor;

    ::ecore::EAttribute_ptr m_VendorOperatingSystem__version;

    ::ecore::EReference_ptr m_OsOverhead__apiOverhead;

    ::ecore::EReference_ptr m_OsOverhead__isrCategory1Overhead;

    ::ecore::EReference_ptr m_OsOverhead__isrCategory2Overhead;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiSendMessage;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiTerminateTask;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiSchedule;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiRequestResource;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiReleaseResource;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiSetEvent;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiWaitEvent;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiClearEvent;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiActivateTask;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiEnforcedMigration;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiSuspendOsInterrupts;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiResumeOsInterrupts;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiRequestSpinlock;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiReleaseSpinlock;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiSenderReceiverRead;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiSenderReceiverWrite;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiSynchronousServerCallPoint;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiIocRead;

    ::ecore::EReference_ptr m_OsAPIOverhead__apiIocWrite;

    ::ecore::EReference_ptr m_OsISROverhead__preExecutionOverhead;

    ::ecore::EReference_ptr m_OsISROverhead__postExecutionOverhead;

    ::ecore::EReference_ptr m_PropertyConstraintsModel__allocationConstraints;

    ::ecore::EReference_ptr m_PropertyConstraintsModel__mappingConstraints;

    ::ecore::EReference_ptr m_CoreAllocationConstraint__coreClassification;

    ::ecore::EReference_ptr m_MemoryMappingConstraint__memoryClassification;

    ::ecore::EReference_ptr m_ProcessAllocationConstraint__process;

    ::ecore::EReference_ptr m_ProcessPrototypeAllocationConstraint__processPrototype;

    ::ecore::EReference_ptr m_RunnableAllocationConstraint__runnable;

    ::ecore::EReference_ptr m_AbstractElementMappingConstraint__abstractElement;

    ::ecore::EAttribute_ptr m_Classification__condition;

    ::ecore::EAttribute_ptr m_Classification__grouping;

    ::ecore::EReference_ptr m_CoreClassification__classifiers;

    ::ecore::EReference_ptr m_MemoryClassification__classifiers;

    ::ecore::EReference_ptr m_StimuliModel__stimuli;

    ::ecore::EReference_ptr m_StimuliModel__clocks;

    ::ecore::EReference_ptr m_Stimulus__setModeValueList;

    ::ecore::EReference_ptr m_Stimulus__executionCondition;

    ::ecore::EReference_ptr m_Stimulus__affectedProcesses;

    ::ecore::EReference_ptr m_ModeValueList__entries;

    ::ecore::EReference_ptr m_ModeValueMapEntry__key;

    ::ecore::EAttribute_ptr m_ModeValueMapEntry__value;

    ::ecore::EReference_ptr m_ModeValue__label;

    ::ecore::EAttribute_ptr m_ModeValue__value;

    ::ecore::EReference_ptr m_ModeConditionDisjunction__entries;

    ::ecore::EAttribute_ptr m_ModeCondition__relation;

    ::ecore::EReference_ptr m_ModeLabelCondition__label1;

    ::ecore::EReference_ptr m_ModeLabelCondition__label2;

    ::ecore::EReference_ptr m_ModeConditionConjunction__entries;

    ::ecore::EReference_ptr m_FixedPeriodic__recurrence;

    ::ecore::EReference_ptr m_FixedPeriodic__offset;

    ::ecore::EReference_ptr m_PeriodicStimulus__jitter;

    ::ecore::EReference_ptr m_PeriodicStimulus__minDistance;

    ::ecore::EReference_ptr m_RelativePeriodicStimulus__offset;

    ::ecore::EReference_ptr m_RelativePeriodicStimulus__nextOccurrence;

    ::ecore::EReference_ptr m_VariableRateStimulus__step;

    ::ecore::EReference_ptr m_VariableRateStimulus__occurrencesPerStep;

    ::ecore::EAttribute_ptr m_VariableRateStimulus__maxIncreasePerStep;

    ::ecore::EAttribute_ptr m_VariableRateStimulus__maxDecreasePerStep;

    ::ecore::EReference_ptr m_VariableRateStimulus__scenario;

    ::ecore::EReference_ptr m_Scenario__clock;

    ::ecore::EAttribute_ptr m_Scenario__samplingOffset;

    ::ecore::EAttribute_ptr m_Scenario__samplingRecurrence;

    ::ecore::EReference_ptr m_PeriodicSyntheticStimulus__occurrenceTimes;

    ::ecore::EReference_ptr m_SingleStimulus__occurrence;

    ::ecore::EReference_ptr m_InterProcessStimulus__counter;

    ::ecore::EReference_ptr m_InterProcessStimulus__explicitTriggers;

    ::ecore::EReference_ptr m_PeriodicBurstStimulus__burstLength;

    ::ecore::EReference_ptr m_PeriodicBurstStimulus__occurrenceMinDistance;

    ::ecore::EAttribute_ptr m_PeriodicBurstStimulus__occurrenceCount;

    ::ecore::EReference_ptr m_EventStimulus__triggeringEvents;

    ::ecore::EReference_ptr m_EventStimulus__counter;

    ::ecore::EReference_ptr m_ArrivalCurveStimulus__entries;

    ::ecore::EAttribute_ptr m_ArrivalCurveEntry__numberOfOccurrences;

    ::ecore::EReference_ptr m_ArrivalCurveEntry__lowerTimeBorder;

    ::ecore::EReference_ptr m_ArrivalCurveEntry__upperTimeBorder;

    ::ecore::EAttribute_ptr m_ClockFunction__curveType;

    ::ecore::EReference_ptr m_ClockFunction__period;

    ::ecore::EReference_ptr m_ClockFunction__peakToPeak;

    ::ecore::EReference_ptr m_ClockFunction__xOffset;

    ::ecore::EReference_ptr m_ClockFunction__yOffset;

    ::ecore::EReference_ptr m_ClockStepList__entries;

    ::ecore::EReference_ptr m_ClockStepList__period;

    ::ecore::EReference_ptr m_ClockStep__frequency;

    ::ecore::EReference_ptr m_ClockStep__time;

    ::ecore::EReference_ptr m_SWModel__isrs;

    ::ecore::EReference_ptr m_SWModel__tasks;

    ::ecore::EReference_ptr m_SWModel__runnables;

    ::ecore::EReference_ptr m_SWModel__labels;

    ::ecore::EReference_ptr m_SWModel__channels;

    ::ecore::EReference_ptr m_SWModel__processPrototypes;

    ::ecore::EReference_ptr m_SWModel__sections;

    ::ecore::EReference_ptr m_SWModel__activations;

    ::ecore::EReference_ptr m_SWModel__events;

    ::ecore::EReference_ptr m_SWModel__typeDefinitions;

    ::ecore::EReference_ptr m_SWModel__customEntities;

    ::ecore::EReference_ptr m_SWModel__processChains;

    ::ecore::EReference_ptr m_SWModel__modes;

    ::ecore::EReference_ptr m_SWModel__modeLabels;

    ::ecore::EReference_ptr m_AbstractMemoryElement__size;

    ::ecore::EReference_ptr m_AbstractMemoryElement__mappings;

    ::ecore::EReference_ptr m_AbstractProcess__referringComponents;

    ::ecore::EAttribute_ptr m_CustomEntity__typeName;

    ::ecore::EReference_ptr m_ProcessChain__processes;

    ::ecore::EReference_ptr m_Process__activityGraph;

    ::ecore::EReference_ptr m_Process__stimuli;

    ::ecore::EReference_ptr m_IActivityGraphItemContainer__items;

    ::ecore::EReference_ptr m_ActivityGraphItem__containingProcess;

    ::ecore::EReference_ptr m_ActivityGraphItem__containingRunnable;

    ::ecore::EReference_ptr m_ActivityGraphItem__containingActivityGraph;

    ::ecore::EReference_ptr m_ModeSwitch__entries;

    ::ecore::EReference_ptr m_ModeSwitch__defaultEntry;

    ::ecore::EReference_ptr m_ModeSwitchEntry__condition;

    ::ecore::EReference_ptr m_ProbabilitySwitch__entries;

    ::ecore::EAttribute_ptr m_ProbabilitySwitchEntry__probability;

    ::ecore::EAttribute_ptr m_Counter__prescaler;

    ::ecore::EAttribute_ptr m_Counter__offset;

    ::ecore::EReference_ptr m_WaitEvent__eventMask;

    ::ecore::EAttribute_ptr m_WaitEvent__maskType;

    ::ecore::EAttribute_ptr m_WaitEvent__waitingBehaviour;

    ::ecore::EReference_ptr m_WaitEvent__counter;

    ::ecore::EReference_ptr m_SetEvent__eventMask;

    ::ecore::EReference_ptr m_SetEvent__process;

    ::ecore::EReference_ptr m_SetEvent__counter;

    ::ecore::EReference_ptr m_ClearEvent__eventMask;

    ::ecore::EReference_ptr m_ClearEvent__counter;

    ::ecore::EReference_ptr m_EventMask__events;

    ::ecore::EAttribute_ptr m_OsEvent__communicationOverheadInBit;

    ::ecore::EReference_ptr m_OsEvent__referringComponents;

    ::ecore::EReference_ptr m_InterProcessTrigger__stimulus;

    ::ecore::EReference_ptr m_InterProcessTrigger__counter;

    ::ecore::EReference_ptr m_EnforcedMigration__resourceOwner;

    ::ecore::EReference_ptr m_TerminateProcess__counter;

    ::ecore::EAttribute_ptr m_Task__preemption;

    ::ecore::EAttribute_ptr m_Task__multipleTaskActivationLimit;

    ::ecore::EAttribute_ptr m_ISR__category;

    ::ecore::EAttribute_ptr m_ProcessPrototype__preemption;

    ::ecore::EReference_ptr m_ProcessPrototype__firstRunnable;

    ::ecore::EReference_ptr m_ProcessPrototype__lastRunnable;

    ::ecore::EReference_ptr m_ProcessPrototype__accessPrecedenceSpec;

    ::ecore::EReference_ptr m_ProcessPrototype__orderPrecedenceSpec;

    ::ecore::EReference_ptr m_ProcessPrototype__chainedPrototypes;

    ::ecore::EReference_ptr m_ProcessPrototype__activation;

    ::ecore::EReference_ptr m_ProcessPrototype__runnableCalls;

    ::ecore::EReference_ptr m_ChainedProcessPrototype__prototype;

    ::ecore::EAttribute_ptr m_ChainedProcessPrototype__apply;

    ::ecore::EAttribute_ptr m_ChainedProcessPrototype__offset;

    ::ecore::EReference_ptr m_GeneralPrecedence__origin;

    ::ecore::EReference_ptr m_GeneralPrecedence__target;

    ::ecore::EReference_ptr m_AccessPrecedenceSpec__label;

    ::ecore::EAttribute_ptr m_AccessPrecedenceSpec__orderType;

    ::ecore::EAttribute_ptr m_OrderPrecedenceSpec__orderType;

    ::ecore::EReference_ptr m_IDependsOn__dependsOn;

    ::ecore::EReference_ptr m_DataDependency__labels;

    ::ecore::EReference_ptr m_DataDependency__parameters;

    ::ecore::EReference_ptr m_DataDependency__callArguments;

    ::ecore::EReference_ptr m_DataDependency__containingRunnable;

    ::ecore::EReference_ptr m_RunnableParameter__containingRunnable;

    ::ecore::EAttribute_ptr m_RunnableParameter__direction;

    ::ecore::EReference_ptr m_RunnableParameter__dataType;

    ::ecore::EReference_ptr m_Runnable__executionCondition;

    ::ecore::EReference_ptr m_Runnable__parameters;

    ::ecore::EReference_ptr m_Runnable__activityGraph;

    ::ecore::EReference_ptr m_Runnable__activations;

    ::ecore::EAttribute_ptr m_Runnable__callback;

    ::ecore::EAttribute_ptr m_Runnable__service;

    ::ecore::EAttribute_ptr m_Runnable__asilLevel;

    ::ecore::EReference_ptr m_Runnable__section;

    ::ecore::EReference_ptr m_Runnable__runnableCalls;

    ::ecore::EReference_ptr m_Runnable__referringComponents;

    ::ecore::EReference_ptr m_Label__dataType;

    ::ecore::EAttribute_ptr m_Label__constant;

    ::ecore::EAttribute_ptr m_Label__bVolatile;

    ::ecore::EAttribute_ptr m_Label__dataStability;

    ::ecore::EAttribute_ptr m_Label__stabilityLevel;

    ::ecore::EReference_ptr m_Label__section;

    ::ecore::EReference_ptr m_Label__labelAccesses;

    ::ecore::EReference_ptr m_Label__referringComponents;

    ::ecore::EReference_ptr m_Channel__elementType;

    ::ecore::EAttribute_ptr m_Channel__defaultElements;

    ::ecore::EAttribute_ptr m_Channel__maxElements;

    ::ecore::EReference_ptr m_Channel__channelAccesses;

    ::ecore::EReference_ptr m_ModeLabel__mode;

    ::ecore::EAttribute_ptr m_ModeLabel__initialValue;

    ::ecore::EAttribute_ptr m_Section__asilLevel;

    ::ecore::EReference_ptr m_Section__labels;

    ::ecore::EReference_ptr m_Section__runnables;

    ::ecore::EReference_ptr m_ExecutionNeed__needs;

    ::ecore::EAttribute_ptr m_NeedEntry__key;

    ::ecore::EReference_ptr m_NeedEntry__value;

    ::ecore::EReference_ptr m_Ticks__default;

    ::ecore::EReference_ptr m_Ticks__extended;

    ::ecore::EReference_ptr m_TicksEntry__key;

    ::ecore::EReference_ptr m_TicksEntry__value;

    ::ecore::EReference_ptr m_ModeLabelAccess__data;

    ::ecore::EAttribute_ptr m_ModeLabelAccess__access;

    ::ecore::EAttribute_ptr m_ModeLabelAccess__value;

    ::ecore::EAttribute_ptr m_ModeLabelAccess__step;

    ::ecore::EReference_ptr m_LabelAccess__data;

    ::ecore::EAttribute_ptr m_LabelAccess__access;

    ::ecore::EReference_ptr m_LabelAccess__statistic;

    ::ecore::EReference_ptr m_LabelAccess__transmissionPolicy;

    ::ecore::EAttribute_ptr m_LabelAccess__dataStability;

    ::ecore::EAttribute_ptr m_LabelAccess__implementation;

    ::ecore::EReference_ptr m_ChannelAccess__data;

    ::ecore::EAttribute_ptr m_ChannelAccess__elements;

    ::ecore::EReference_ptr m_ChannelAccess__transmissionPolicy;

    ::ecore::EAttribute_ptr m_ChannelReceive__receiveOperation;

    ::ecore::EAttribute_ptr m_ChannelReceive__dataMustBeNew;

    ::ecore::EAttribute_ptr m_ChannelReceive__elementIndex;

    ::ecore::EAttribute_ptr m_ChannelReceive__lowerBound;

    ::ecore::EReference_ptr m_SemaphoreAccess__semaphore;

    ::ecore::EAttribute_ptr m_SemaphoreAccess__access;

    ::ecore::EAttribute_ptr m_SemaphoreAccess__waitingBehaviour;

    ::ecore::EAttribute_ptr m_SenderReceiverCommunication__buffered;

    ::ecore::EReference_ptr m_SenderReceiverCommunication__label;

    ::ecore::EReference_ptr m_SenderReceiverCommunication__port;

    ::ecore::EReference_ptr m_SenderReceiverWrite__notifiedRunnables;

    ::ecore::EReference_ptr m_ServerCall__serverRunnable;

    ::ecore::EReference_ptr m_ServerCall__port;

    ::ecore::EAttribute_ptr m_SynchronousServerCall__waitingBehaviour;

    ::ecore::EReference_ptr m_AsynchronousServerCall__resultRunnable;

    ::ecore::EAttribute_ptr m_GetResultServerCall__blockingType;

    ::ecore::EAttribute_ptr m_Group__ordered;

    ::ecore::EReference_ptr m_CallArgument__containingCall;

    ::ecore::EReference_ptr m_CallArgument__parameter;

    ::ecore::EReference_ptr m_RunnableCall__runnable;

    ::ecore::EReference_ptr m_RunnableCall__arguments;

    ::ecore::EReference_ptr m_RunnableCall__counter;

    ::ecore::EReference_ptr m_RunnableCall__statistic;

    ::ecore::EReference_ptr m_CustomEventTrigger__event;

    ::ecore::EReference_ptr m_Struct__entries;

    ::ecore::EReference_ptr m_StructEntry__dataType;

    ::ecore::EAttribute_ptr m_Array__numberElements;

    ::ecore::EReference_ptr m_Array__dataType;

    ::ecore::EReference_ptr m_Pointer__dataType;

    ::ecore::EReference_ptr m_TypeRef__typeDef;

    ::ecore::EAttribute_ptr m_Alias__target;

    ::ecore::EAttribute_ptr m_Alias__alias;

    ::ecore::EReference_ptr m_TypeDefinition__size;

    ::ecore::EReference_ptr m_DataTypeDefinition__dataType;

    ::ecore::EReference_ptr m_BaseTypeDefinition__aliases;

    ::ecore::EReference_ptr m_PeriodicActivation__min;

    ::ecore::EReference_ptr m_PeriodicActivation__max;

    ::ecore::EReference_ptr m_PeriodicActivation__recurrence;

    ::ecore::EReference_ptr m_PeriodicActivation__offset;

    ::ecore::EReference_ptr m_VariableRateActivation__step;

    ::ecore::EReference_ptr m_VariableRateActivation__occurrencesPerStep;

    ::ecore::EReference_ptr m_SporadicActivation__occurrence;

    ::ecore::EReference_ptr m_SingleActivation__min;

    ::ecore::EReference_ptr m_SingleActivation__max;

    ::ecore::EReference_ptr m_EventActivation__triggeringEvents;

    ::ecore::EReference_ptr m_EventActivation__counter;

    ::ecore::EReference_ptr m_LabelAccessStatistic__value;

    ::ecore::EReference_ptr m_LabelAccessStatistic__cacheMisses;

    ::ecore::EReference_ptr m_RunEntityCallStatistic__statistic;

};

}
 // amalthea

#endif // _AMALTHEAPACKAGE_HPP

