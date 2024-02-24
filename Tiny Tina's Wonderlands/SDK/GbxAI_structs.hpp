#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAIActionResult : uint8
{
	None                           = 0,
	Succeeded                      = 1,
	Failed                         = 2,
	Interrupted                    = 3,
	Aborted                        = 4,
	Count                          = 5,
	EAIActionResult_MAX            = 6,
};

enum class ECoverUserAnimState : uint8
{
	None                           = 0,
	Idle                           = 1,
	Exit                           = 2,
	FireIdle                       = 3,
	FireEnter                      = 4,
	FireExit                       = 5,
	FireToIdle                     = 6,
	Transition                     = 7,
	ViewSwitch                     = 8,
	ECoverUserAnimState_MAX        = 9,
};

enum class EScriptedActionRule : uint8
{
	Any                            = 0,
	All                            = 1,
	EScriptedActionRule_MAX        = 2,
};

enum class ESmartActionResult : uint8
{
	Success                        = 0,
	Interrupt                      = 1,
	Unreserve                      = 2,
	ESmartActionResult_MAX         = 3,
};

enum class EMeleeRotationOption : uint8
{
	HoldStill                      = 0,
	AlignToTarget                  = 1,
	FollowTarget                   = 2,
	EMeleeRotationOption_MAX       = 3,
};

enum class EAIActionSequenceCanStartCheck : uint8
{
	FirstChild                     = 0,
	EachChild                      = 1,
	EAIActionSequenceCanStartCheck_MAX = 2,
};

enum class EAIActionCreationMethod : uint8
{
	Unknown                        = 0,
	Composition                    = 1,
	PropertyPanel                  = 2,
	Graph                          = 3,
	EAIActionCreationMethod_MAX    = 4,
};

enum class EAIActionResultTransition : uint8
{
	Stop                           = 0,
	Continue                       = 1,
	Restart                        = 2,
	EAIActionResultTransition_MAX  = 3,
};

enum class EAIActionResultDirective : uint8
{
	Continue                       = 0,
	Succeed                        = 1,
	Fail                           = 2,
	EAIActionResultDirective_MAX   = 3,
};

enum class EAIActionExecutionStage : uint8
{
	Starting                       = 0,
	Running                        = 1,
	Stopping                       = 2,
	Stopped                        = 3,
	CleaningUp                     = 4,
	EAIActionExecutionStage_MAX    = 5,
};

enum class EAIActionState : uint8
{
	Idle                           = 0,
	Starting                       = 1,
	Running                        = 2,
	Stopped                        = 3,
	EAIActionState_MAX             = 4,
};

enum class EAIActionLayer : uint8
{
	Default                        = 0,
	Script                         = 1,
	Count                          = 2,
	EAIActionLayer_MAX             = 3,
};

enum class EAIGroupConditionType : uint8
{
	AllFalse                       = 0,
	AllTrue                        = 1,
	SomeFalse                      = 2,
	SomeTrue                       = 3,
	EAIGroupConditionType_MAX      = 4,
};

enum class ECircleDirection : uint8
{
	Left                           = 0,
	Right                          = 1,
	Random                         = 2,
	ECircleDirection_MAX           = 3,
};

enum class EGbxQueryPreset : uint8
{
	UseBestLocation                = 0,
	TryCurrentLocation             = 1,
	OnlyCurrentLocation            = 2,
	QueryFrequencyLow              = 3,
	QueryOnStart                   = 4,
	EGbxQueryPreset_MAX            = 5,
};

enum class ECompareMethod : uint8
{
	Equals                         = 0,
	NotEquals                      = 1,
	Smaller                        = 2,
	SmallerOrEqual                 = 3,
	Greater                        = 4,
	GreaterOrEqual                 = 5,
	ECompareMethod_MAX             = 6,
};

enum class EIsInRangeAspectDistanceTest : uint8
{
	Direct                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	VerticalOffset                 = 3,
	Count                          = 4,
	EIsInRangeAspectDistanceTest_MAX = 5,
};

enum class EOrbitDirection : uint8
{
	Left                           = 0,
	Right                          = 1,
	Random                         = 2,
	EOrbitDirection_MAX            = 3,
};

enum class EAIAspectSettingsDefaults_Rotation : uint8
{
	Custom                         = 0,
	None                           = 1,
	NoBodyRotationAllowed          = 2,
	FullBody                       = 3,
	AimOffsetsOnly                 = 4,
	FullBodyWithAim                = 5,
	EAIAspectSettingsDefaults_MAX  = 6,
};

enum class EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset : uint8
{
	Front                          = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	Custom                         = 4,
	EAIAspectSettingsDefaults_Rotation_MAX = 5,
};

enum class ESweepDirection : uint8
{
	Left                           = 0,
	Right                          = 1,
	Random                         = 2,
	ESweepDirection_MAX            = 3,
};

enum class ECloakAction : uint8
{
	OnStart                        = 0,
	OnStop                         = 1,
	ECloakAction_MAX               = 2,
};

enum class EPlanMemberReplacement : uint8
{
	AbandonPlanIfKilled            = 0,
	ReplaceMemberIfKilled          = 1,
	DoNotReplaceAndKeepGoing       = 2,
	EPlanMemberReplacement_MAX     = 3,
};

enum class EPlanValidityCode : uint8
{
	Unknown                        = 0,
	PlanIsValid                    = 1,
	NoPlanData                     = 2,
	NotEnoughRoleSlots             = 3,
	MissingRoleTag                 = 4,
	BadPlanInstanceNumber          = 5,
	BadMinMaxRoleInstanceNumbers   = 6,
	BadDistanceValues              = 7,
	InsufficientCandidates         = 8,
	EPlanValidityCode_MAX          = 9,
};

enum class EPlanStage : uint8
{
	NeedLeader                     = 0,
	NeedFollowers                  = 1,
	HasMinimumRoster               = 2,
	HasFullRoster                  = 3,
	EveryoneCheckedIn              = 4,
	ShuttingDown                   = 5,
	EPlanStage_MAX                 = 6,
};

enum class ESmartObjectLookAtRule : uint8
{
	None                           = 0,
	ActorCenter                    = 1,
	ActorEyes                      = 2,
	ActorSocket                    = 3,
	ESmartObjectLookAtRule_MAX     = 4,
};

enum class ESlotAlignRule : uint8
{
	None                           = 0,
	Center                         = 1,
	Align                          = 2,
	ESlotAlignRule_MAX             = 3,
};

enum class ESmartObjectNotify : uint8
{
	LerpToSlot                     = 0,
	LerpToGround                   = 1,
	ESmartObjectNotify_MAX         = 2,
};

enum class ECoverFaceDirection : uint8
{
	Toward                         = 0,
	Away                           = 1,
	ECoverFaceDirection_MAX        = 2,
};

enum class ECoverAdjustFailReason : uint8
{
	None                           = 0,
	NoRoom                         = 1,
	NoView                         = 2,
	Invalid                        = 3,
	ECoverAdjustFailReason_MAX     = 4,
};

enum class ECoverSlotHeight : uint8
{
	Low                            = 0,
	High                           = 1,
	ECoverSlotHeight_MAX           = 2,
};

enum class ECoverStyleAnimType : uint8
{
	TimedMoveOut                   = 0,
	TimedStayIn                    = 1,
	SingleAnim                     = 2,
	ECoverStyleAnimType_MAX        = 3,
};

enum class ECoverUserState : uint8
{
	NotInCover                     = 0,
	Idling                         = 1,
	Firing                         = 2,
	ECoverUserState_MAX            = 3,
};

enum class ETerritoryMovementType : uint8
{
	Ground                         = 0,
	Flight                         = 1,
	Dynamic                        = 2,
	ETerritoryMovementType_MAX     = 3,
};

enum class EUberTraceMultiTraceRequirement : uint8
{
	AtLeastOneMustPassTest         = 0,
	AllMustPassTest                = 1,
	EUberTraceMultiTraceRequirement_MAX = 2,
};

enum class ENavJumpStage : uint8
{
	None                           = 0,
	Enter                          = 1,
	Idle                           = 2,
	Exit                           = 3,
	End                            = 4,
	ENavJumpStage_MAX              = 5,
};

enum class ENavJumpRotation : uint8
{
	None                           = 0,
	FaceJumpOrigin                 = 1,
	FaceJumpTarget                 = 2,
	FaceJumpTargetFaceDir          = 3,
	ENavJumpRotation_MAX           = 4,
};

enum class ELookAtPointType : uint8
{
	Interrupt                      = 0,
	Persist                        = 1,
	Any                            = 2,
	ELookAtPointType_MAX           = 3,
};

enum class ESmartObjectTaskState : uint8
{
	Uninitialized                  = 0,
	Movement                       = 1,
	Alignment                      = 2,
	Usage                          = 3,
	Complete                       = 4,
	ESmartObjectTaskState_MAX      = 5,
};

enum class ESmartObjectTaskResult : uint8
{
	Aborted                        = 0,
	Failed                         = 1,
	Succeeded                      = 2,
	ESmartObjectTaskResult_MAX     = 3,
};

enum class ESmartObjectUseResult : uint8
{
	Failure                        = 0,
	Running                        = 1,
	Blocking                       = 2,
	Success                        = 3,
	ESmartObjectUseResult_MAX      = 4,
};

enum class EInitialPathAction : uint8
{
	None                           = 0,
	PatrolPath                     = 1,
	ScriptedPath                   = 2,
	ScriptedRoute                  = 3,
	ScriptedWait                   = 4,
	EInitialPathAction_MAX         = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.AIActionBlueprintContext
struct FAIActionBlueprintContext
{
public:
	class AGbxAIController*                      Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E64[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.SmartActionUseInfo
struct FSmartActionUseInfo
{
public:
	struct FGameplayTag                          ActionTag;                                         // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupting;                                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UseDuration;                                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownTime;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPassiveAction;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCombatAction;                                     // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E97[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxAI.SmartActionInfoContext
struct FSmartActionInfoContext
{
public:
	TWeakObjectPtr<class AActor>                 SmartObject;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartActionUseInfo                   UseInfo;                                           // 0x8(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ContextLoc;                                        // 0x20(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAI.AIActionSettings_Plan
struct FAIActionSettings_Plan
{
public:
	TArray<class UAIPlanData*>                   PlansAlwaysAvailableToMe;                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  RoleTags;                                          // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxAI.AIActionExecutionSettings
struct FAIActionExecutionSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIActionResultTransition         SuccessTransition;                                 // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIActionResultTransition         FailureTransition;                                 // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysReportSuccess;                              // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheckCanStartPeriod;                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxAI.AIActionInstance
struct FAIActionInstance
{
public:
	class UGameplayTask*                         ScriptedGameplayTask;                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIAction*                             Action;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5 (0x5 - 0x0)
// ScriptStruct GbxAI.AIAspectExecutionSettings
struct FAIAspectExecutionSettings
{
public:
	bool                                         bCanPreventActionFromStarting;                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCauseActionToSucceed;                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanForceActionToSucceed;                          // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCauseActionToFail;                             // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustFinish;                                       // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_ActorCollision
struct FAIAspectSettings_ActorCollision
{
public:
	struct FGbxBlackboardKeySelector             Target;                                            // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAIActionResultDirective          OnCollision;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_AIGroupCondition
struct FAIAspectSettings_AIGroupCondition
{
public:
	int32                                        FullfillmentQuantity;                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPartialFullfillment;                              // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F75[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_BlackboardKey
struct FAIAspectSettings_BlackboardKey
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInvertResult;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIActionResultDirective          WhenConditionFails;                                // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIActionResult                   OnBecomeFalse;                                     // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbortOnChange;                                    // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefreshImmediatelyOnChange;                       // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F80[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Charge
struct FAIAspectSettings_Charge
{
public:
	class UAIChargeData*                         ChargeData;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             Target;                                            // 0x8(0x10)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3A0 (0x3A0 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_EnvQuery
struct FAIAspectSettings_EnvQuery
{
public:
	struct FEnvQueryParams                       Query;                                             // 0x0(0xB8)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             QueryBlackboardKey;                                // 0xB8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRefreshAITreeOnQuerySuccess;                      // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRequeryOnSuccess;                            // 0xC9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearQueryOnSuccess;                              // 0xCA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxQueryOptions                      Options;                                           // 0xD0(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EGbxQueryPreset                   Preset;                                            // 0x308(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePreset;                                        // 0x309(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             QueryPeriod;                                       // 0x310(0x80)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bQueryContinuously;                                // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateValueWhileRunning;                          // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepValidValues;                                  // 0x392(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseSelf;                                       // 0x393(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UseSelfDistance;                                   // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSucceedIfHasValue;                                // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMigrated;                                         // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAD[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x478 (0x478 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_UseSmartObject
struct FAIAspectSettings_UseSmartObject
{
public:
	struct FGbxBlackboardKeySelector             SmartAction;                                       // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAbortExisting;                                    // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUntilInterrupted;                                 // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeInterrupted;                                 // 0x12(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       SmartObjectQuery;                                  // 0x18(0xB8)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseQuery;                                         // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_EnvQuery            QuerySettings;                                     // 0xD8(0x3A0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_ConditionData
struct FAIAspectSettings_ConditionData
{
public:
	struct FGbxParam                             Condition;                                         // 0x0(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UAttributeContextResolver*             ContextResolver;                                   // 0x80(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertCondition;                                  // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x248 (0x248 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Condition
struct FAIAspectSettings_Condition
{
public:
	struct FAIAspectSettings_ConditionData       CanStartCondition;                                 // 0x0(0x90)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_ConditionData       SucceedCondition;                                  // 0x90(0x90)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_ConditionData       FailCondition;                                     // 0x120(0x90)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_ConditionData       CanAbortCondition;                                 // 0x1B0(0x90)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseCanStartCondition;                             // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSucceedCondition;                              // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFailCondition;                                 // 0x242(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCanAbortCondition;                             // 0x243(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x220 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Cooldown
struct FAIAspectSettings_Cooldown
{
public:
	struct FGbxParam                             SucceedTimer;                                      // 0x0(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseSucceedTimer;                                  // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2000[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             FailTimer;                                         // 0x88(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseFailTimer;                                     // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2006[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             AbortTimer;                                        // 0x110(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseAbortTimer;                                    // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2010[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             InitialTimer;                                      // 0x198(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseInitialTimer;                                  // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Crouch
struct FAIAspectSettings_Crouch
{
public:
	struct FGbxParam                             CanCrouchWhileIdle;                                // 0x0(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseCanCrouchWhileMoving;                          // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2027[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             CanCrouchWhileMoving;                              // 0x88(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_DropshipSpawn
struct FAIAspectSettings_DropshipSpawn
{
public:
	TSubclassOf<class UGbxAction>                StartAction;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                StopAction;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_FindClosestPlayer
struct FAIAspectSettings_FindClosestPlayer
{
public:
	struct FGbxBlackboardKeySelector             BlackboardKey;                                     // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOnlyRunIfKeyIsValid;                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearKeyOnStop;                                   // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2034[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdatePeriod;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInternal;                                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2035[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_FlyToNavMesh
struct FAIAspectSettings_FlyToNavMesh
{
public:
	float                                        GroundSearchDistance;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAheadDistance;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlySearchDistance;                                 // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdatePeriod;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Follow
struct FAIAspectSettings_Follow
{
public:
	struct FGbxBlackboardKeySelector             FollowActorKey;                                    // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNumericRange                         TargetDistance;                                    // 0x10(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxSpeedScale;                                     // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeedScale;                                     // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GoalUpdatePeriod;                                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InvalidWaitPeriod;                                 // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportWaitPeriod;                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowTeleport;                                    // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TeleportDistance;                                  // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleportWhenFar;                                  // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bContinueWhileClose;                               // 0x35(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205F[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x238 (0x238 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_GbxAction
struct FAIAspectSettings_GbxAction
{
public:
	TSubclassOf<class UGbxAction>                ActionType;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseActionType;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2069[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ActionKey;                                         // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseActionKey;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxBlackboardKeySelector             ActionBlackboardKey;                               // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseActionBlackboardKey;                           // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2073[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             Count;                                             // 0x38(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             CanBeInterrupted;                                  // 0xB8(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             CanBeInterruptedOnFailure;                         // 0x138(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             PlayRate;                                          // 0x1B8(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_GroupLocation
struct FAIAspectSettings_GroupLocation
{
public:
	struct FGbxBlackboardKeySelector             GroupLocationKey;                                  // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxParam                             GroupDistance;                                     // 0x10(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        UpdatePeriod;                                      // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateWhileActive;                                // 0x94(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_IntCompare
struct FAIAspectSettings_IntCompare
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAIActionResultDirective          WhenConditionFails;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECompareMethod                    CompareMethod;                                     // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2091[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             CompareAgainst;                                    // 0x18(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bAbortOnChange;                                    // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefreshImmediatelyOnChange;                       // 0x99(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2095[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_IsInRangeData
struct FAIAspectSettings_IsInRangeData
{
public:
	struct FGbxParam                             Range;                                             // 0x0(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bInvertRange;                                      // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct GbxAI.AIAspectIsInRangeAdvancedData
struct FAIAspectIsInRangeAdvancedData
{
public:
	struct FAIAspectSettings_IsInRangeData       CanStartRange;                                     // 0x0(0x88)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_IsInRangeData       SucceedRange;                                      // 0x88(0x88)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_IsInRangeData       FailRange;                                         // 0x110(0x88)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseCanStartRange;                                 // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSucceedRange;                                  // 0x199(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFailRange;                                     // 0x19A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B1[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x248 (0x248 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_IsInRange
struct FAIAspectSettings_IsInRange
{
public:
	struct FGbxBlackboardKeySelector             Target;                                            // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EIsInRangeAspectDistanceTest      DistanceTest;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_IsInRangeData       CanRunRange;                                       // 0x18(0x88)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectIsInRangeAdvancedData        AdvancedRanges;                                    // 0xA0(0x1A0)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseAdvancedRanges;                                // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20CA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_IsInTerritory
struct FAIAspectSettings_IsInTerritory
{
public:
	struct FGbxBlackboardKeySelector             GoalKey;                                           // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETerritoryType                    TerritoryArea;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeThreshold;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Land
struct FAIAspectSettings_Land
{
public:
	float                                        GroundSearchDistance;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlySearchDistance;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdatePeriod;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_LeadRoute
struct FAIAspectSettings_LeadRoute
{
public:
	struct FGbxBlackboardKeySelector             LeadActorKey;                                      // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             DestinationNodeKey;                                // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SegmentDistance;                                   // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWanderingOffset;                                // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArrivalDistance;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNumericRange                         TargetRouteDistance;                               // 0x2C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNumericRange                         SpeedScaleRange;                                   // 0x34(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RouteOffsetFromTarget;                             // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportDist;                                      // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowBackwards;                                   // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowTeleport;                                    // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FindNavRadius;                                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2100[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Leap
struct FAIAspectSettings_Leap
{
public:
	TSubclassOf<class UGbxAction>                Action;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             Target;                                            // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LocalOffset;                                       // 0x18(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x24(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetSocket;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnglePercent;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPrediction;                                     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNavigationTest;                                 // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoCollisionTest;                                  // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddTargetRadius;                                  // 0x46(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2120[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UseExactLocationDistance;                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TestPeriod;                                        // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStartWhileFalling;                             // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2123[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Move
struct FAIAspectSettings_Move
{
public:
	float                                        PathUpdateThreshold;                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenInPosition;                               // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowStrafe;                                      // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPartialPath;                                 // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireDirectPath;                                // 0x7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Location
struct FAIAspectSettings_Location
{
public:
	struct FGbxBlackboardKeySelector             Target;                                            // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAIActionResultTransition         TargetChangeTransition;                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             Distance;                                          // 0x18(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       TargetQuery;                                       // 0x98(0xB8)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             TargetQueryPeriod;                                 // 0x150(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseTargetQuery;                                   // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_Move                MoveSettings;                                      // 0x1D4(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCanMove;                                          // 0x1DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxAI.LookAroundRandomlySettings
struct FLookAroundRandomlySettings
{
public:
	float                                        MinAngleChangeEachIterationDeg;                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngleChangeEachIterationDeg;                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeSpentEachScan;                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x198 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Loop
struct FAIAspectSettings_Loop
{
public:
	struct FGbxParam                             LoopCondition;                                     // 0x0(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseLoopCondition;                                 // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             LoopCount;                                         // 0x88(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseLoopCount;                                     // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2170[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             LoopDuration;                                      // 0x110(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseLoopDuration;                                  // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopImmediately;                                  // 0x191(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreFailure;                                    // 0x192(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2175[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_MoveSpline
struct FAIAspectSettings_MoveSpline
{
public:
	struct FGbxBlackboardKeySelector             SplineKey;                                         // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             OffsetKey;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             ReverseKey;                                        // 0x20(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LookDistance;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MissNavigationStep;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MissNavigationStepDistance;                        // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionnalLookDistanceSpeedFactor;                // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnapToNavigation;                                  // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToNavigation;                                 // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2185[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GoalUpdateDistance;                                // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxNavGoalReach                  Reach;                                             // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x120 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_NavFlyOffset
struct FAIAspectSettings_NavFlyOffset
{
public:
	struct FGbxBlackboardKeySelector             CenterKey;                                         // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxParam                             Distance;                                          // 0x10(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             Height;                                            // 0x90(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        SearchRadius;                                      // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitSearchRadius;                                // 0x114(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2199[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdatePeriod;                                      // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        bForward;                                          // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_NavigationAdvanced
struct FAIAspectSettings_NavigationAdvanced
{
public:
	bool                                         bCanMove;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReachedRequiresDirect;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxStrafeType                    StrafeType;                                        // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxPathType                      PathType;                                          // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenReached;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanRunWhenAtGoal;                                 // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateGoalWhileRunning;                           // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGbxNavGoalCheats                 Cheats;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxNavGoalModifiers                  GoalModifiers;                                     // 0xC(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCanStartWhenGoalIsUncertain;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoveEvenIfUnreachable;                            // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B7[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Navigation
struct FAIAspectSettings_Navigation
{
public:
	struct FGbxParam                             ReachedHeight;                                     // 0x0(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             ReachedDistance;                                   // 0x80(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_NavigationAdvanced  Advanced;                                          // 0x100(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCanMove;                                          // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReachedRequiresDirect;                            // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxStrafeType                    StrafeType;                                        // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxPathType                      PathType;                                          // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopWhenReached;                                  // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanRunWhenAtGoal;                                 // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpdateGoalWhileRunning;                           // 0x13E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21CC[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x220 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Orbit
struct FAIAspectSettings_Orbit
{
public:
	struct FGbxBlackboardKeySelector             CenterKey;                                         // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxParam                             HeightOffset;                                      // 0x10(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             OrbitRadius;                                       // 0x90(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             OrbitAngle;                                        // 0x110(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             OrbitAngleInterval;                                // 0x190(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EOrbitDirection                   Direction;                                         // 0x210(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SearchRadius;                                      // 0x214(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRespectCombatTerritory;                           // 0x218(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Plan
struct FAIAspectSettings_Plan
{
public:
	TArray<class UAIPlanData*>                   PlansAlwaysAvailableToMe;                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  RoleTags;                                          // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_RotationChannel
struct FAIAspectSettings_RotationChannel
{
public:
	struct FGbxBlackboardKeySelector             Target;                                            // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x10(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             Angle;                                             // 0x20(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseAngle;                                         // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             MaxRotateAngle;                                    // 0xA8(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseMaxRotateAngle;                                // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             ConditionalEnable;                                 // 0x130(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseConditionalEnable;                             // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x550 (0x550 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Rotation
struct FAIAspectSettings_Rotation
{
public:
	bool                                         bCanRotate;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrackTargetOverTime;                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset BodyHeadingOffsetPresets;                          // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2205[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BodyHeadingOffset;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIAspectSettingsDefaults_Rotation PremadeSettings;                                   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_RotationChannel     Body;                                              // 0x10(0x1B8)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseBody;                                          // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_RotationChannel     Aim;                                               // 0x1D0(0x1B8)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseAim;                                           // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2216[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_RotationChannel     Look;                                              // 0x390(0x1B8)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseLook;                                          // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepFacingTargetOnStop;                           // 0x549(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2219[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Route
struct FAIAspectSettings_Route
{
public:
	struct FGbxBlackboardKeySelector             NodeKey;                                           // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SegmentDistance;                                   // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWanderingOffset;                                // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArrivalDistance;                                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerchCooldown;                                     // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPassiveAction;                                    // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCombatAction;                                     // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Stance
struct FAIAspectSettings_Stance
{
public:
	class UStanceDataProvider*                   Stance;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideBlueprint;                                // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2231[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Sweep
struct FAIAspectSettings_Sweep
{
public:
	struct FGbxBlackboardKeySelector             CenterKey;                                         // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxParam                             HeightOffset;                                      // 0x10(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        SweepRadius;                                       // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SweepAngle;                                        // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SweepAngleInterval;                                // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESweepDirection                   Direction;                                         // 0x9C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2245[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SearchRadius;                                      // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2249[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x320 (0x320 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Swoop
struct FAIAspectSettings_Swoop
{
public:
	struct FGbxBlackboardKeySelector             CenterKey;                                         // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxParam                             FarDistance;                                       // 0x10(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             FarHeight;                                         // 0x90(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             NearDistance;                                      // 0x110(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             NearHeight;                                        // 0x190(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             PassDistance;                                      // 0x210(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             PassHeight;                                        // 0x290(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        SearchRadius;                                      // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitSearchRadius;                                // 0x314(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2264[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdatePeriod;                                      // 0x318(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2265[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Teleport
struct FAIAspectSettings_Teleport
{
public:
	struct FGbxBlackboardKeySelector             GoalKey;                                           // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCloak;                                            // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceToGround;                                    // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearVelocity;                                    // 0x12(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeRotation;                                   // 0x13(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearGoalOnStop;                                  // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2271[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxBlackboardKeySelector             RotationKey;                                       // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxParam                             TravelTime;                                        // 0x28(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseSpeedInsteadOfTime;                            // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2277[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             TravelSpeed;                                       // 0xB0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUpdateGoal;                                       // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_227A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x128 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Ticket
struct FAIAspectSettings_Ticket
{
public:
	bool                                         bPriority;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterruptible;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_227E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             Value;                                             // 0x8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             HoldDuration;                                      // 0x88(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UAITicketDataAsset*                    AITicket;                                          // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             ActorBlackboardKey;                                // 0x110(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideActorBlackboardKey;                       // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyHoldOnSuccess;                               // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyHoldOnFailure;                               // 0x122(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyHoldOnAbort;                                 // 0x123(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAcquireTicket;                                    // 0x124(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2289[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_TimedCondition
struct FAIAspectSettings_TimedCondition
{
public:
	struct FAIAspectSettings_ConditionData       Condition;                                         // 0x0(0x90)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             Timer;                                             // 0x90(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EAIActionResultDirective          WhenConditionFails;                                // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIActionResult                   FalseResult;                                       // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2293[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_TimeLimit
struct FAIAspectSettings_TimeLimit
{
public:
	struct FGbxParam                             SucceedTime;                                       // 0x0(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             FailTime;                                          // 0x80(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseSucceedTime;                                   // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFailTime;                                      // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22A6[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4C8 (0x4C8 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_Timer
struct FAIAspectSettings_Timer
{
public:
	struct FGbxParam                             CanStartWarmup;                                    // 0x0(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseCanStartWarmup;                                // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             SpawnedWarmup;                                     // 0x88(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseSpawnedWarmup;                                 // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             CombatStartedWarmup;                               // 0x110(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseCombatStartedWarmup;                           // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             TargetChangedWarmup;                               // 0x198(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseTargetChangedWarmup;                           // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             SucceededCooldown;                                 // 0x220(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseSucceededCooldown;                             // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             FailedCooldown;                                    // 0x2A8(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseFailedCooldown;                                // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             AbortedCooldown;                                   // 0x330(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseAbortedCooldown;                               // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             SucceedTimeLimit;                                  // 0x3B8(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseSucceedTimeLimit;                              // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             FailTimeLimit;                                     // 0x440(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseFailTimeLimit;                                 // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2301[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// ScriptStruct GbxAI.CoverUseParams
struct FCoverUseParams
{
public:
	bool                                         bMustHaveViewToTarget;                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustBeHiddenFromThreats;                          // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InCoverExposurePercent;                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideIdleTime;                                 // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2312[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             IdleTimeOverride;                                  // 0x10(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bOverrideFireTime;                                 // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_231C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             FireTimeOverride;                                  // 0x98(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_UseCover
struct FAIAspectSettings_UseCover
{
public:
	struct FGbxBlackboardKeySelector             Target;                                            // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             Cover;                                             // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FCoverUseParams                       UseParams;                                         // 0x20(0x118)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x238 (0x238 - 0x0)
// ScriptStruct GbxAI.AIWeaponUseSettings
struct FAIWeaponUseSettings
{
public:
	float                                        FireConeAngle;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideFireConeAngle;                            // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2338[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             BurstCountOverride;                                // 0x8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bOverrideBurstCount;                               // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2341[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             BurstDelayOverride;                                // 0x90(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bOverrideBurstDelay;                               // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2345[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             AccuracyOverride;                                  // 0x118(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bOverrideAccuracy;                                 // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_234B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             SuppressingFireTime;                               // 0x1A0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseSuppressingFireTime;                           // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2354[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNumericRange                         DesiredRangeOverride;                              // 0x224(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideDesiredRange;                             // 0x22C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2357[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWeaponLeadingDistance;                          // 0x230(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x198 (0x3D0 - 0x238)
// ScriptStruct GbxAI.AIAspectSettings_Weapon
struct FAIAspectSettings_Weapon : public FAIWeaponUseSettings
{
public:
	TArray<class UGbxWeaponSlotData*>            WeaponSlots;                                       // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGbxParam                             WeaponUseModeIndex;                                // 0x248(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             CanUseWeapon;                                      // 0x2C8(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             CanUseWeaponWhileMoving;                           // 0x348(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseCanUseWeaponWhileMoving;                       // 0x3C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyShootWhenTargetIsKnown;                       // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2370[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_ZeroRotationChannel
struct FAIAspectSettings_ZeroRotationChannel
{
public:
	bool                                         bZeroPitch;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZeroYaw;                                          // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZeroRoll;                                         // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxAI.AIAspectSettings_ZeroRotation
struct FAIAspectSettings_ZeroRotation
{
public:
	struct FAIAspectSettings_ZeroRotationChannel Body;                                              // 0x0(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseBody;                                          // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_ZeroRotationChannel Aim;                                               // 0x4(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseAim;                                           // 0x7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_ZeroRotationChannel Look;                                              // 0x8(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLook;                                          // 0xB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GbxAI.CloakRepData
struct FCloakRepData
{
public:
	bool                                         bCloaked;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanPlayActions;                                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.CloakPrimData
struct FCloakPrimData
{
public:
	bool                                         bWasHidden;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   PrimComp;                                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.CloakCondition
struct FCloakCondition
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloaked;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxAI.AICommunicationManager
struct FAICommunicationManager
{
public:
	uint8                                        Pad_23AC[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.AITicketHandle
struct FAITicketHandle
{
public:
	class UAITicketDataAsset*                    Ticket;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxAIController*                      AIController;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.AINodeSmartObjectData
struct FAINodeSmartObjectData
{
public:
	class AActor*                                Object;                                            // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAI.AINodeLink
struct FAINodeLink
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrevWeight;                                        // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAINodeSmartObjectData>        SmartObjects;                                      // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct GbxAI.PlanRoleRequirements
struct FPlanRoleRequirements
{
public:
	struct FGameplayTag                          RoleTag;                                           // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinInstancesOfRole;                                // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxInstancesOfRole;                                // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             DistanceToLeaderForParticipation;                  // 0x10(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             DistanceToLeaderToRemove;                          // 0x90(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGbxCondition*                         AdditionalStartCondition;                          // 0x110(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlsoUseStartConditionAsStopCondition;             // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         AdditionalStopCondition;                           // 0x120(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlanMemberReplacement            MemberReplacementStrategy;                         // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxAI.PlanState
struct FPlanState
{
public:
	uint8                                        Pad_23F9[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.RoleCandidates
struct FRoleCandidates
{
public:
	uint8                                        Pad_23FF[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxAI.AIPlanManager
struct FAIPlanManager
{
public:
	TArray<TWeakObjectPtr<class UAIPlanData>>    AvailablePlans;                                    // 0x0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FPlanState>                    ActivePlans;                                       // 0x10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2409[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FRoleCandidates>    PotentialCandidatesByRole;                         // 0x28(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_240B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.PlanRoleMapping
struct FPlanRoleMapping
{
public:
	uint8                                        Pad_240F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxAI.RoleController
struct FRoleController
{
public:
	uint8                                        Pad_2413[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxAI.ProximitySource
struct FProximitySource
{
public:
	uint8                                        Pad_2418[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxAI.ThreatSource
struct FThreatSource
{
public:
	uint8                                        Pad_241D[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.ThreatTerritory
struct FThreatTerritory
{
public:
	uint8                                        Pad_2420[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// ScriptStruct GbxAI.AITicketUseData
struct FAITicketUseData
{
public:
	struct FGbxParam                             Value;                                             // 0x0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             HoldDuration;                                      // 0x80(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UAITicketDataAsset*                    Ticket;                                            // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2718 (0x2718 - 0x0)
// ScriptStruct GbxAI.AITicketManager
struct FAITicketManager
{
public:
	uint8                                        Pad_2430[0x2718];                                  // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GbxAI.ActionUseState
struct FActionUseState
{
public:
	class AGbxAIController*                      Controller;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USmartObjectComponent*                 SmartObjectComponent;                              // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAIUseSlotComponent*                   AIUseSlotComponent;                                // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSmartActionUseInfo                   UseInfo;                                           // 0x18(0x18)(NoDestructor, NativeAccessSpecifierPrivate)
	enum class ESmartObjectTaskState             State;                                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2445[0x8F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.ActionCooldownInfo
struct FActionCooldownInfo
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActionTag;                                         // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownTime;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2454[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct GbxAI.BTRandomEntrySettings
struct FBTRandomEntrySettings
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             Weight;                                            // 0x8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             LoopCountMax;                                      // 0x88(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseLoopCountMax;                                  // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2461[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.BTGbxLoopConditionData
struct FBTGbxLoopConditionData
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GbxAI.CoverFaceDirections
struct FCoverFaceDirections
{
public:
	enum class ECoverFaceDirection               Low;                                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECoverFaceDirection               HighLeft;                                          // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECoverFaceDirection               HighRight;                                         // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GbxAI.CoverLineOfSightBlockData
struct FCoverLineOfSightBlockData
{
public:
	float                                        Distance;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.CoverLineOfSightSectionData
struct FCoverLineOfSightSectionData
{
public:
	TArray<struct FCoverLineOfSightBlockData>    Blocks;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxAI.CoverLineOfSightParams
struct FCoverLineOfSightParams
{
public:
	int32                                        NumVerticalSections;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumHorizontalSections;                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalAngleUp;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalAngleDown;                                 // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizontalAngle;                                   // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBlockSubdivisions;                              // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x1C(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct GbxAI.CoverLineOfSightData
struct FCoverLineOfSightData
{
public:
	struct FTransform                            LocalToWorld;                                      // 0x0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               WorldToLocal;                                      // 0x30(0x40)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FCoverLineOfSightSectionData>  Sections;                                          // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCoverLineOfSightParams               Params;                                            // 0x80(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_249D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxAI.CoverAdjustParams
struct FCoverAdjustParams
{
public:
	float                                        AdjustDistanceDown;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoDownAdjustment;                                 // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdjustDistanceUp;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoUpAdjustment;                                   // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdjustDistanceForward;                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoForwardAdjustment;                              // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEdgeTestLeft;                                     // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEdgeTestRight;                                    // 0x16(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24BC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EdgeTestSections;                                  // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EdgeTestHeightPct;                                 // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EdgeTestDistancePct;                               // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EdgeTestWalkBackDistance;                          // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EdgeTestAngleThreshold;                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlockTestHitPct;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlockTestDistancePct;                              // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockTestHorizontalSections;                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockTestVerticalSections;                         // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockTestAngleThreshold;                           // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAI.CoverSlotViewFailData
struct FCoverSlotViewFailData
{
public:
	class UCoverViewData*                        View;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECoverAdjustFailReason            FailReason;                                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FailDescription;                                   // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GbxAI.CoverSlotViewData
struct FCoverSlotViewData
{
public:
	class UCoverViewData*                        View;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24CA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoverLineOfSightData                 LosData;                                           // 0x10(0xB0)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAI.CoverTransitionStanceFilter
struct FCoverTransitionStanceFilter
{
public:
	class FString                                Filter;                                            // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceDataProvider*                   Stance;                                            // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxAI.CoverTransitionFilters
struct FCoverTransitionFilters
{
public:
	TArray<class FString>                        Use;                                               // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Corner;                                            // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        High;                                              // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Away;                                              // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCoverTransitionStanceFilter>  Stances;                                           // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxAI.CoverTransitionData
struct FCoverTransitionData
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxAnimSet*                           AnimSet;                                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCoverTransitionFilters               Filters;                                           // 0x10(0x50)(Edit, NativeAccessSpecifierPrivate)
};

// 0x70 (0x90 - 0x20)
// ScriptStruct GbxAI.CoverTransitionTableRow
struct FCoverTransitionTableRow : public FGbxAnimTableRow
{
public:
	struct FNumericRange                         Angle;                                             // 0x20(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNumericRange                         Distance;                                          // 0x28(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECoverFaceDirection               FaceDirection;                                     // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECoverSlotHeight                  SlotHeight;                                        // 0x35(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCoverStyleData*>               CoverStyles;                                       // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCoverViewData*>                ViewsFrom;                                         // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCoverViewData*>                ViewsTo;                                           // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCornerTransition;                                 // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceDataProvider*                   Stance;                                            // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoFill;                                         // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNumericRange                         AutoFillAngle;                                     // 0x7C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNumericRange                         AutoFillDistance;                                  // 0x84(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_24FA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxAI.CoverTransitionInput
struct FCoverTransitionInput
{
public:
	uint8                                        Pad_2500[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxAI.CoverClientData
struct FCoverClientData
{
public:
	class UCoverStyleData*                       Style;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoverSlotComponent*                   Slot;                                              // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECoverUserState                   DesiredState;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2515[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TransitionName;                                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlanked;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2517[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// ScriptStruct GbxAI.CoverAction
struct FCoverAction
{
public:
	class UCoverSlotComponent*                   Slot;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoverStyleData*                       Style;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCoverUseParams                       Params;                                            // 0x18(0x118)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2A8 - 0x0)
// ScriptStruct GbxAI.CoverStyleUserData
struct FCoverStyleUserData
{
public:
	class UCoverStyleData*                       Style;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             Weight;                                            // 0x8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bOverrideIdleTime;                                 // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2544[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             IdleTimeOverride;                                  // 0x90(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bOverrideFireTime;                                 // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2546[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             FireTimeOverride;                                  // 0x118(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAITicketUseData                      TicketData;                                        // 0x198(0x108)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGbxCondition*                         ForceUseCondition;                                 // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct GbxAI.CoverWalk
struct FCoverWalk
{
public:
	uint8                                        Pad_254B[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.EQSDynamicPointRange
struct FEQSDynamicPointRange
{
public:
	int32                                        MinPoints;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPoints;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdealSpacing;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpacing;                                        // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct GbxAI.SmartGridSearchSet
struct FSmartGridSearchSet
{
public:
	class FName                                  SetName;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPoints;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_255E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UEnvQueryContext>          Center;                                            // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyGenerateDensePoints;                          // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2562[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             InnerRadius;                                       // 0x20(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             OuterRadius;                                       // 0x50(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D0 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_256B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvDirection                         ArcDirection;                                      // 0x88(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0xA8(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        PointSeparationDistanceNormal;                     // 0xD8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointSeparationDistanceDenseSpots;                 // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiusApplyDenserSeparation;                       // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2575[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UEnvQueryContext>          DenseSpotProvider;                                 // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct GbxAI.ExtendedTraceInfo
struct FExtendedTraceInfo
{
public:
	class FString                                ReadableName;                                      // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TestComment;                                       // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoArcTrace;                                       // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2581[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             ArcSpeed;                                          // 0x28(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ArcAnglePercent;                                   // 0x58(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        NumSegments;                                       // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2583[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvTraceData                         TraceData;                                         // 0x90(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUberTraceMultiTraceRequirement   MultipleContextRequirement;                        // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2587[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxScoreIfFails;                                   // 0xD4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinScoreIfSucceeds;                                // 0xD8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopIfSucceeds;                                   // 0xDC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopIfFails;                                      // 0xDD(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_258B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             PassTestIfTrue;                                    // 0xE0(0x80)(Edit, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             FailTestIfTrue;                                    // 0x160(0x80)(Edit, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x468 - 0x468)
// ScriptStruct GbxAI.ActionState_CoverHitReaction
struct FActionState_CoverHitReaction : public FActionState_SimpleAnim
{
public:
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GbxAI.CoverHitReactionItem
struct FCoverHitReactionItem
{
public:
	struct FAnimMeshList                         Anims;                                             // 0x0(0x78)(Edit, NativeAccessSpecifierPublic)
	TArray<class UCoverStyleData*>               Styles;                                            // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct GbxAI.ActionState_CoverTransition
struct FActionState_CoverTransition : public FActionState_Base
{
public:
	uint8                                        Pad_25AD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x470 - 0x468)
// ScriptStruct GbxAI.ActionState_Navigation
struct FActionState_Navigation : public FActionState_SimpleAnim
{
public:
	uint8                                        Pad_25B4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x470 - 0x470)
// ScriptStruct GbxAI.ActionState_NavAnim
struct FActionState_NavAnim : public FActionState_Navigation
{
public:
};

// 0xB0 (0x520 - 0x470)
// ScriptStruct GbxAI.ActionState_NavJump
struct FActionState_NavJump : public FActionState_Navigation
{
public:
	uint8                                        Pad_25BD[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x560 - 0x520)
// ScriptStruct GbxAI.ActionState_NavHomingJump
struct FActionState_NavHomingJump : public FActionState_NavJump
{
public:
	uint8                                        Pad_25C3[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GbxAI.ReplicatedJumpParams
struct FReplicatedJumpParams
{
public:
	bool                                         bStarted;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EndLoc;                                            // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetVel;                                         // 0x10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0x538 - 0x470)
// ScriptStruct GbxAI.ActionState_NavLerp
struct FActionState_NavLerp : public FActionState_Navigation
{
public:
	uint8                                        Pad_25CE[0xC8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.SmartActionUser
struct FSmartActionUser
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UseDuration;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESmartObjectTaskState             State;                                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25D4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxAI.SmartObjectActionState
struct FSmartObjectActionState
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ActionTag;                                         // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmartObjectAction*                    ActionDefinition;                                  // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                DebugColor;                                        // 0x18(0x4)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownTime;                                      // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSmartActionUser>              Users;                                             // 0x20(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class AController*, float>              CooldownMap;                                       // 0x30(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.RouteSection
struct FRouteSection
{
public:
	class AActor*                                Start;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                End;                                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0xF0 - 0xD8)
// ScriptStruct GbxAI.SmartObjectPreviewState
struct FSmartObjectPreviewState : public FPreviewState
{
public:
	class UAIUseSlotComponent*                   AIUseSlotComponent;                                // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USpawnFactory*>                 PreviewFactories;                                  // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAI.SmartAction
struct FSmartAction
{
public:
	TWeakObjectPtr<class AActor>                 SmartObject;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActionTag;                                         // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxAI.SmartObjectUseRequest
struct FSmartObjectUseRequest
{
public:
	uint8                                        Pad_2600[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAI.SmartObjectActionSet
struct FSmartObjectActionSet
{
public:
	struct FGameplayTagContainer                 Actions;                                           // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


