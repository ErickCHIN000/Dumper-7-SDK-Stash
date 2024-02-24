#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENiagaraSystemSpawnSectionEndBehavior : int32
{
	SetSystemInactive              = 0,
	Deactivate                     = 1,
	None                           = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : int32
{
	ActivateIfInactive             = 0,
	None                           = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : int32
{
	Activate                       = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class ENiagaraCollisionMode : uint8
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4,
};

enum class ENiagaraLegacyTrailWidthMode : uint8
{
	FromCentre                     = 0,
	FromFirst                      = 1,
	FromSecond                     = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class ENiagaraIterationSource : uint8
{
	Particles                      = 0,
	DataInterface                  = 1,
	ENiagaraIterationSource_MAX    = 2,
};

enum class ENiagaraScriptGroup : uint8
{
	Particle                       = 0,
	Emitter                        = 1,
	System                         = 2,
	Max                            = 3,
};

enum class ENiagaraScriptUsage : uint8
{
	Function                       = 0,
	Module                         = 1,
	DynamicInput                   = 2,
	ParticleSpawnScript            = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript           = 5,
	ParticleEventScript            = 6,
	ParticleSimulationStageScript  = 7,
	ParticleGPUComputeScript       = 8,
	EmitterSpawnScript             = 9,
	EmitterUpdateScript            = 10,
	SystemSpawnScript              = 11,
	SystemUpdateScript             = 12,
	ENiagaraScriptUsage_MAX        = 13,
};

enum class ENiagaraScriptCompileStatus : uint8
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX                        = 7,
};

enum class ENiagaraInputNodeUsage : uint8
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	TranslatorConstant             = 4,
	RapidIterationParameter        = 5,
	ENiagaraInputNodeUsage_MAX     = 6,
};

enum class ENiagaraDataSetType : uint8
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3,
};

enum class ENiagaraAgeUpdateMode : uint8
{
	TickDeltaTime                  = 0,
	DesiredAge                     = 1,
	DesiredAgeNoSeek               = 2,
	ENiagaraAgeUpdateMode_MAX      = 3,
};

enum class ENiagaraSimTarget : uint8
{
	CPUSim                         = 0,
	GPUComputeSim                  = 1,
	ENiagaraSimTarget_MAX          = 2,
};

enum class ENiagaraDefaultMode : uint8
{
	Value                          = 0,
	Binding                        = 1,
	Custom                         = 2,
	ENiagaraDefaultMode_MAX        = 3,
};

enum class ENiagaraTickBehavior : uint8
{
	UsePrereqs                     = 0,
	UseComponentTickGroup          = 1,
	ForceTickFirst                 = 2,
	ForceTickLast                  = 3,
	ENiagaraTickBehavior_MAX       = 4,
};

enum class ENCPoolMethod : uint8
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	ENCPoolMethod_MAX              = 5,
};

enum class ENDISkeletalMesh_SkinningMode : uint8
{
	Invalid                        = 255,
	None                           = 0,
	SkinOnTheFly                   = 1,
	PreSkin                        = 2,
	ENDISkeletalMesh_MAX           = 256,
};

enum class ENiagaraScalabilityUpdateFrequency : int32
{
	SpawnOnly                      = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Continuous                     = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class ENiagaraCullReaction : int32
{
	Deactivate                     = 0,
	DeactivateImmediate            = 1,
	DeactivateResume               = 2,
	DeactivateImmediateResume      = 3,
	ENiagaraCullReaction_MAX       = 4,
};

enum class EParticleAllocationMode : uint8
{
	AutomaticEstimate              = 0,
	ManualEstimate                 = 1,
	EParticleAllocationMode_MAX    = 2,
};

enum class EScriptExecutionMode : uint8
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3,
};

enum class ENiagaraSortMode : uint8
{
	None                           = 0,
	ViewDepth                      = 1,
	ViewDistance                   = 2,
	CustomAscending                = 3,
	CustomDecending                = 4,
	ENiagaraSortMode_MAX           = 5,
};

enum class ENiagaraMeshLockedAxisSpace : uint8
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class ENiagaraMeshFacingMode : uint8
{
	Default                        = 0,
	Velocity                       = 1,
	CameraPosition                 = 2,
	CameraPlane                    = 3,
	ENiagaraMeshFacingMode_MAX     = 4,
};

enum class ENiagaraPlatformSetState : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	Active                         = 2,
	Unknown                        = 3,
	ENiagaraPlatformSetState_MAX   = 4,
};

enum class ENiagaraPlatformSelectionState : uint8
{
	Default                        = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
};

enum class ENiagaraPreviewGridResetMode : uint8
{
	Never                          = 0,
	Individual                     = 1,
	All                            = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
};

enum class ENiagaraRibbonTessellationMode : uint8
{
	Automatic                      = 0,
	Custom                         = 1,
	Disabled                       = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class ENiagaraRibbonDrawDirection : uint8
{
	FrontToBack                    = 0,
	BackToFront                    = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8
{
	Scale                          = 0,
	Clip                           = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class ENiagaraRibbonFacingMode : uint8
{
	Screen                         = 0,
	Custom                         = 1,
	CustomSideVector               = 2,
	ENiagaraRibbonFacingMode_MAX   = 3,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8
{
	SameScript                     = 0,
	AllScripts                     = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class ENiagaraModuleDependencyType : uint8
{
	PreDependency                  = 0,
	PostDependency                 = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

enum class EUnusedAttributeBehaviour : uint8
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5,
};

enum class ENiagaraSpriteFacingMode : uint8
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	FaceCameraPosition             = 3,
	FaceCameraDistanceBlend        = 4,
	ENiagaraSpriteFacingMode_MAX   = 5,
};

enum class ENiagaraSpriteAlignment : uint8
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	ENiagaraSpriteAlignment_MAX    = 3,
};

enum class ENiagaraParameterPanelCategory : uint8
{
	Input                          = 0,
	Attributes                     = 1,
	Output                         = 2,
	Local                          = 3,
	User                           = 4,
	Engine                         = 5,
	Owner                          = 6,
	System                         = 7,
	Emitter                        = 8,
	Particles                      = 9,
	ScriptTransient                = 10,
	StaticSwitch                   = 11,
	None                           = 12,
	Num                            = 13,
	ENiagaraParameterPanelCategory_MAX = 14,
};

enum class ENiagaraScriptParameterUsage : uint32
{
	Input                          = 0,
	Output                         = 1,
	Local                          = 2,
	InputOutput                    = 3,
	InitialValueInput              = 4,
	None                           = 5,
	Num                            = 6,
	ENiagaraScriptParameterUsage_MAX = 7,
};

enum class ENiagaraParameterScope : uint32
{
	Input                          = 0,
	User                           = 1,
	Engine                         = 2,
	Owner                          = 3,
	System                         = 4,
	Emitter                        = 5,
	Particles                      = 6,
	ScriptPersistent               = 7,
	ScriptTransient                = 8,
	Local                          = 9,
	Custom                         = 10,
	DISPLAY_ONLY_StaticSwitch      = 11,
	Output                         = 12,
	None                           = 13,
	Num                            = 14,
	ENiagaraParameterScope_MAX     = 15,
};

enum class ENiagaraExecutionState : uint8
{
	Active                         = 0,
	Inactive                       = 1,
	InactiveClear                  = 2,
	Complete                       = 3,
	Disabled                       = 4,
	Num                            = 5,
	ENiagaraExecutionState_MAX     = 6,
};

enum class ENiagaraExecutionStateSource : uint8
{
	Scalability                    = 0,
	Internal                       = 1,
	Owner                          = 2,
	InternalCompletion             = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class ENiagaraVariantMode : int32
{
	None                           = 0,
	Object                         = 1,
	DataInterface                  = 2,
	Bytes                          = 3,
	ENiagaraVariantMode_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinition
struct FNiagaraTypeDefinition
{
public:
	class UObject*                               ClassStructOrEnum;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UnderlyingType;                                    // 0x8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FC[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraVariableBase
struct FNiagaraVariableBase
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraTypeDefinition                TypeDef;                                           // 0x8(0x10)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Niagara.NiagaraVariable
struct FNiagaraVariable : public FNiagaraVariableBase
{
public:
	TArray<uint8>                                VarData;                                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x48 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x20(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x90 (0xD8 - 0x48)
// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneBoolChannel                BoolChannel;                                       // 0x48(0x90)(NativeAccessSpecifierPrivate)
};

// 0x280 (0x2C8 - 0x48)
// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               RedChannel;                                        // 0x48(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               GreenChannel;                                      // 0xE8(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               BlueChannel;                                       // 0x188(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               AlphaChannel;                                      // 0x228(0xA0)(NativeAccessSpecifierPrivate)
};

// 0xA0 (0xE8 - 0x48)
// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               FloatChannel;                                      // 0x48(0xA0)(NativeAccessSpecifierPrivate)
};

// 0x90 (0xD8 - 0x48)
// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneIntegerChannel             IntegerChannel;                                    // 0x48(0x90)(NativeAccessSpecifierPrivate)
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
public:
	struct FFrameNumber                          SpawnSectionStartFrame;                            // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SpawnSectionEndFrame;                              // 0x14(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraAgeUpdateMode             AgeUpdateMode;                                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_929[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x288 (0x2D0 - 0x48)
// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               VectorChannels[0x4];                               // 0x48(0x280)(NativeAccessSpecifierPrivate)
	int32                                        ChannelsUsed;                                      // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_92F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraRandInfo
struct FNiagaraRandInfo
{
public:
	int32                                        Seed1;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed2;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed3;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraUserParameterBinding
struct FNiagaraUserParameterBinding
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x0(0x28)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptVariableBinding
struct FNiagaraScriptVariableBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
struct FNiagaraVariableDataInterfaceBinding
{
public:
	struct FNiagaraVariable                      BoundVariable;                                     // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Niagara.NiagaraVariableAttributeBinding
struct FNiagaraVariableAttributeBinding
{
public:
	struct FNiagaraVariable                      BoundVariable;                                     // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      DataSetVariable;                                   // 0x28(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      DefaultValueIfNonExistent;                         // 0x50(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraVariableInfo
struct FNiagaraVariableInfo
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Definition;                                        // 0x28(0x18)(NativeAccessSpecifierPublic)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraSystemUpdateContext
struct FNiagaraSystemUpdateContext
{
public:
	TArray<class UNiagaraComponent*>             ComponentsToReset;                                 // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>             ComponentsToReInit;                                // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSystem*>                SystemSimsToDestroy;                               // 0x20(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_96E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.VMFunctionSpecifier
struct FVMFunctionSpecifier
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.VMExternalFunctionBindingInfo
struct FVMExternalFunctionBindingInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OwnerName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 InputParamLocations;                               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumOutputs;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVMFunctionSpecifier>          FunctionSpecifiers;                                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraStatScope
struct FNiagaraStatScope
{
public:
	class FName                                  FullName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FriendlyName;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
struct FNiagaraScriptDataInterfaceCompileInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserPtrIdx;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraTypeDefinition                Type;                                              // 0x10(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapRead;                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapWrite;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlaceholder;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
struct FNiagaraScriptDataInterfaceInfo
{
public:
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserPtrIdx;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraTypeDefinition                Type;                                              // 0x18(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapRead;                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapWrite;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Niagara.NiagaraFunctionSignature
struct FNiagaraFunctionSignature
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Inputs;                                            // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Outputs;                                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OwnerName;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresContext : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMemberFunction : 1;                               // Mask: 0x2, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExperimental : 1;                                 // Mask: 0x4, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsCPU : 1;                                  // Mask: 0x8, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsGPU : 1;                                  // Mask: 0x10, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWriteFunction : 1;                                // Mask: 0x20, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_41 : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9E8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FName>               FunctionSpecifiers;                                // 0x38(0x50)(NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
struct FNiagaraScriptDataUsageInfo
{
public:
	bool                                         bReadsAttributeData;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraDataSetID
struct FNiagaraDataSetID
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDataSetType               Type;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetProperties
struct FNiagaraDataSetProperties
{
public:
	struct FNiagaraDataSetID                     ID;                                                // 0x0(0xC)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NCPoolElement
struct FNCPoolElement
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A02[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NCPool
struct FNCPool
{
public:
	TArray<struct FNCPoolElement>                FreeElements;                                      // 0x0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>             InUseComponents_Auto;                              // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>             InUseComponents_Manual;                            // 0x20(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Niagara.BasicParticleData
struct FBasicParticleData
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.MeshTriCoordinate
struct FMeshTriCoordinate
{
public:
	int32                                        Tri;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaryCoord;                                         // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NDIStaticMeshSectionFilter
struct FNDIStaticMeshSectionFilter
{
public:
	TArray<int32>                                AllowedMaterialSlots;                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraTypeLayoutInfo
struct FNiagaraTypeLayoutInfo
{
public:
	TArray<uint32>                               FloatComponentByteOffsets;                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               FloatComponentRegisterOffsets;                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               Int32ComponentByteOffsets;                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               Int32ComponentRegisterOffsets;                     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraVariableLayoutInfo
struct FNiagaraVariableLayoutInfo
{
public:
	uint32                                       FloatComponentStart;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Int32ComponentStart;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTypeLayoutInfo                LayoutInfo;                                        // 0x8(0x40)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetCompiledData
struct FNiagaraDataSetCompiledData
{
public:
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableLayoutInfo>    VariableLayouts;                                   // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalFloatComponents;                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalInt32Components;                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x28(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_43 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A7A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraDataSetID                     ID;                                                // 0x2C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraGraphViewSettings
struct FNiagaraGraphViewSettings
{
public:
	struct FVector2D                             Location;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Zoom;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsValid;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A8D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
struct FNiagaraDeviceProfileStateEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       QualityLevelMask;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SetQualityLevelMask;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSet
struct FNiagaraPlatformSet
{
public:
	int32                                        QualityLevelMask;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates;                               // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
struct FNiagaraEmitterScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bScaleSpawnCount : 1;                              // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_47 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnCountScale;                                   // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
public:
	uint8                                        bOverrideSpawnCountScale : 1;                      // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
struct FNiagaraEmitterScalabilityOverrides
{
public:
	TArray<struct FNiagaraEmitterScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
struct FNiagaraEmitterScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraEmitterScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
struct FNiagaraSystemScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bCullByDistance : 1;                               // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullMaxInstanceCount : 1;                         // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullByMaxTimeWithoutRender : 1;                   // Mask: 0x4, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_48 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AFF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistance;                                       // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxInstances;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeWithoutRender;                              // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x38 - 0x30)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
public:
	uint8                                        bOverrideDistanceSettings : 1;                     // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInstanceCountSettings : 1;                // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideTimeSinceRendererSettings : 1;            // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
struct FNiagaraSystemScalabilityOverrides
{
public:
	TArray<struct FNiagaraSystemScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
struct FNiagaraSystemScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraSystemScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
struct FNiagaraDetailsLevelScaleOverrides
{
public:
	float                                        Low;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Medium;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        High;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Epic;                                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cine;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraEventReceiverProperties
struct FNiagaraEventReceiverProperties
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEventGenerator;                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEmitter;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraEventGeneratorProperties
struct FNiagaraEventGeneratorProperties
{
public:
	int32                                        MaxEventsPerFrame;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x10(0x40)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScriptProperties
struct FNiagaraEmitterScriptProperties
{
public:
	class UNiagaraScript*                        Script;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventReceiverProperties> EventReceivers;                                    // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;                                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct Niagara.NiagaraEventScriptProperties
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
public:
	enum class EScriptExecutionMode              ExecutionMode;                                     // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       SpawnNumber;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxEventsPerFrame;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SourceEmitterID;                                   // 0x34(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEventName;                                   // 0x44(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomSpawnNumber;                                // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B82[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MinSpawnNumber;                                    // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B85[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterHandle
struct FNiagaraEmitterHandle
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  IdName;                                            // 0x10(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsEnabled;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B94[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraEmitter*                       Instance;                                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Niagara.NiagaraCollisionEventPayload
struct FNiagaraCollisionEventPayload
{
public:
	struct FVector                               CollisionPos;                                      // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionNormal;                                   // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionVelocity;                                 // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhysicalMaterialIndex;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraMeshMaterialOverride
struct FNiagaraMeshMaterialOverride
{
public:
	class UMaterialInterface*                    ExplicitMat;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          UserParamBinding;                                  // 0x8(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraParameters
struct FNiagaraParameters
{
public:
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Niagara.NiagaraVariableWithOffset
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
public:
	int32                                        Offset;                                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Niagara.NiagaraParameterStore
struct FNiagaraParameterStore
{
public:
	uint8                                        Pad_BD4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Owner;                                             // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraVariableWithOffset>    SortedParameterOffsets;                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint8>                                ParameterData;                                     // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraDataInterface*>         DataInterfaces;                                    // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       UObjects;                                          // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BE1[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraBoundParameter
struct FNiagaraBoundParameter
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SrcOffset;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DestOffset;                                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
struct FNiagaraPlatformSetConflictEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QualityLevelMask;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
struct FNiagaraPlatformSetConflictInfo
{
public:
	int32                                        SetAIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SetBIndex;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraScalabilityManager
struct FNiagaraScalabilityManager
{
public:
	class UNiagaraEffectType*                    EffectType;                                        // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>             ManagedComponents;                                 // 0x8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0B[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.SimulationStageMetaData
struct FSimulationStageMetaData
{
public:
	class FName                                  IterationSource;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSpawnOnly : 1;                                    // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWritesParticles : 1;                              // Mask: 0x2, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4F : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C1C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OutputDestinations;                                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinStage;                                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStage;                                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableData
struct FNiagaraVMExecutableData
{
public:
	TArray<uint8>                                ByteCode;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                OptimizedByteCode;                                 // 0x10(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumTempRegisters;                                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUserPtrs;                                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraParameters                    Parameters;                                        // 0x28(0x10)(NativeAccessSpecifierPublic)
	struct FNiagaraParameters                    InternalParameters;                                // 0x38(0x10)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FNiagaraParameters> DataSetToParameters;                               // 0x48(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Attributes;                                        // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraScriptDataUsageInfo           DataUsage;                                         // 0xA8(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C29[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                 // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;                         // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetID>             ReadDataSets;                                      // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetProperties>     WriteDataSets;                                     // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraStatScope>             StatScopes;                                        // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;                                       // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraScriptCompileStatus       LastCompileStatus;                                 // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C37[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSimulationStageMetaData>      SimulationStageMetaData;                           // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableDataId
struct FNiagaraVMExecutableDataId
{
public:
	struct FGuid                                 CompilerVersionID;                                 // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraScriptUsage               ScriptUsageType;                                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ScriptUsageTypeID;                                 // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesRapidIterationParams : 1;                     // Mask: 0x1, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterpolatedSpawn : 1;                            // Mask: 0x2, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x4, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_50 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C45[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 BaseScriptID;                                      // 0x28(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraCompileHash                   BaseScriptCompileHash;                             // 0x38(0x10)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraModuleDependency
struct FNiagaraModuleDependency
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraModuleDependencyType      Type;                                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint;                                  // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x10(0x18)(Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
struct FNiagaraScriptExecutionPaddingInfo
{
public:
	uint16                                       SrcOffset;                                         // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DestOffset;                                        // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SrcSize;                                           // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DestSize;                                          // 0x6(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xD8 - 0xB8)
// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
public:
	int32                                        ParameterSize;                                     // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       PaddedParameterSize;                               // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo;                                       // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bInitialized : 1;                                  // Mask: 0x1, PropSize: 0x10xD0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C8A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraScriptHighlight
struct FNiagaraScriptHighlight
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Niagara.NiagaraSystemCompileRequest
struct FNiagaraSystemCompileRequest
{
public:
	uint8                                        Pad_C9C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       RootObjects;                                       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9D[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Niagara.EmitterCompiledScriptPair
struct FEmitterCompiledScriptPair
{
public:
	uint8                                        Pad_CA2[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBinding
struct FNiagaraParameterDataSetBinding
{
public:
	int32                                        ParameterOffset;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataSetComponentOffset;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
struct FNiagaraParameterDataSetBindingCollection
{
public:
	TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x258 (0x258 - 0x0)
// ScriptStruct Niagara.NiagaraSystemCompiledData
struct FNiagaraSystemCompiledData
{
public:
	struct FNiagaraParameterStore                InstanceParamStore;                                // 0x0(0xB8)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0xB8(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           SpawnInstanceParamsDataSetCompiledData;            // 0xF8(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           UpdateInstanceParamsDataSetCompiledData;           // 0x138(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;                        // 0x178(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;                        // 0x198(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;                         // 0x1B8(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;                      // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;                       // 0x1E8(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;                       // 0x208(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;                        // 0x228(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;                     // 0x248(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterCompiledData
struct FNiagaraEmitterCompiledData
{
public:
	TArray<class FName>                          SpawnAttributes;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterSpawnIntervalVar;                           // 0x10(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterInterpSpawnStartDTVar;                      // 0x38(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterSpawnGroupVar;                              // 0x60(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterAgeVar;                                     // 0x88(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterRandomSeedVar;                              // 0xB0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterTotalSpawnedParticlesVar;                   // 0xD8(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x100(0x40)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraInputConditionMetadata
struct FNiagaraInputConditionMetadata
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TargetValues;                                      // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct Niagara.NiagaraVariableMetaData
struct FNiagaraVariableMetaData
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CategoryName;                                      // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bAdvancedDisplay;                                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EditorSortPriority;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInlineEditConditionToggle;                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D01[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraInputConditionMetadata        EditCondition;                                     // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraInputConditionMetadata        VisibleCondition;                                  // 0x58(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             PropertyMetaData;                                  // 0x70(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  ScopeName;                                         // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraScriptParameterUsage      Usage;                                             // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsStaticSwitch;                                   // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D06[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StaticSwitchDefaultValue;                          // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAddedToNodeGraphDeepCopy;                         // 0xD4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOutputIsPersistent;                               // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D09[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CachedNamespacelessVariableName;                   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCreatedInSystemEditor;                            // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseLegacyNameString;                              // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D11[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraParameterScopeInfo
struct FNiagaraParameterScopeInfo
{
public:
	enum class ENiagaraParameterScope            Scope;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D25[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NamespaceString;                                   // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
struct FNiagaraCompileHashVisitorDebugInfo
{
public:
	class FString                                Object;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PropertyKeys;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PropertyValues;                                    // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraID
struct FNiagaraID
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AcquireTag;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSpawnInfo
struct FNiagaraSpawnInfo
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpStartDt;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntervalDt;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnGroup;                                        // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraMatrix
struct FNiagaraMatrix
{
public:
	struct FVector4                              Row0;                                              // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Row1;                                              // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Row2;                                              // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Row3;                                              // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraTestStructInner
struct FNiagaraTestStructInner
{
public:
	struct FVector                               InnerVector1;                                      // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InnerVector2;                                      // 0xC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraTestStruct
struct FNiagaraTestStruct
{
public:
	struct FVector                               Vector1;                                           // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector2;                                           // 0xC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTestStructInner               InnerStruct1;                                      // 0x18(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraTestStructInner               InnerStruct2;                                      // 0x30(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraParameterMap
struct FNiagaraParameterMap
{
public:
	uint8                                        Pad_D6D[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraNumeric
struct FNiagaraNumeric
{
public:
	uint8                                        Pad_D73[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraBool
struct FNiagaraBool
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraInt32
struct FNiagaraInt32
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraFloat
struct FNiagaraFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x108 - 0xB8)
// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
public:
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                            // 0xB8(0x50)(NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraVariant
struct FNiagaraVariant
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint8>                                Bytes;                                             // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraVariantMode               CurrentMode;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D99[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_D9E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


