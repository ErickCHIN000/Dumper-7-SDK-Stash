#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGbxActionEndState : uint8
{
	NotFinished                    = 0,
	Success                        = 1,
	Interrupted                    = 2,
	Aborted                        = 3,
	Denied                         = 4,
	Error                          = 5,
	EGbxActionEndState_MAX         = 6,
};

enum class EStanceStackLayer : uint8
{
	Default                        = 0,
	AITree                         = 1,
	Blueprint                      = 2,
	Scripted                       = 3,
	Count                          = 4,
	EStanceStackLayer_MAX          = 5,
};

enum class EFacingChannel : uint8
{
	Body                           = 0,
	Aim                            = 1,
	Look                           = 2,
	Count                          = 3,
	EFacingChannel_MAX             = 4,
};

enum class EFacingInfoType : uint8
{
	None                           = 0,
	Actor                          = 1,
	ActorEyes                      = 2,
	Component                      = 3,
	Location                       = 4,
	Direction                      = 5,
	Rotation                       = 6,
	Controller                     = 7,
	ControllerAim                  = 8,
	Path                           = 9,
	Count                          = 10,
	EFacingInfoType_MAX            = 11,
};

enum class ENavAnimState : uint8
{
	None                           = 0,
	Idle                           = 1,
	Hop                            = 2,
	Start                          = 3,
	Move                           = 4,
	Stop                           = 5,
	TurnIdle                       = 6,
	TurnMoving                     = 7,
	TurnBlend                      = 8,
	Max                            = 9,
};

enum class EScriptedLadderType : uint8
{
	None                           = 0,
	GettingOnAtBottom              = 1,
	GettingOffAtBottom             = 2,
	GettingOnAtTop                 = 3,
	GettingOffAtTop                = 4,
	EScriptedLadderType_MAX        = 5,
};

enum class EUsabilityType : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Count                          = 2,
	EUsabilityType_MAX             = 3,
};

enum class EAIDodgeType : uint8
{
	None                           = 0,
	Bullet                         = 1,
	Grenade                        = 2,
	Random                         = 3,
	Zone                           = 4,
	EAIDodgeType_MAX               = 5,
};

enum class EGbxGlyphSetOption : uint8
{
	AutoDetect                     = 0,
	Set1                           = 1,
	Set2                           = 2,
	Set3                           = 3,
	Set4                           = 4,
	Set5                           = 5,
	Set6                           = 6,
	EGbxGlyphSetOption_MAX         = 7,
};

enum class EStatusEffectDurationType : uint8
{
	Timed                          = 0,
	Infinite                       = 1,
	EStatusEffectDurationType_MAX  = 2,
};

enum class EHoldToUseMode : uint8
{
	Disabled                       = 0,
	HoldOnly                       = 1,
	Both                           = 2,
	EHoldToUseMode_MAX             = 3,
};

enum class EPawnAttachStatus : uint8
{
	Unoccupied                     = 0,
	Attaching                      = 1,
	Attached                       = 2,
	Detaching                      = 3,
	EPawnAttachStatus_MAX          = 4,
};

enum class ESpawnCostSelection : uint8
{
	Preset                         = 0,
	Custom                         = 1,
	ESpawnCostSelection_MAX        = 2,
};

enum class EMassSelection : uint8
{
	Automatic                      = 0,
	Custom                         = 1,
	Preset                         = 2,
	EMassSelection_MAX             = 3,
};

enum class EStanceValueOverrideType : uint8
{
	None                           = 0,
	Relative                       = 1,
	Absolute                       = 2,
	EStanceValueOverrideType_MAX   = 3,
};

enum class ECritType : uint8
{
	CritChance                     = 0,
	CritDamage                     = 1,
	ECritType_MAX                  = 2,
};

enum class EDamageCausedModificationStrategy : int32
{
	UseSelfModifier                = 0,
	UseInstigatorModifier          = 1,
	EDamageCausedModificationStrategy_MAX = 2,
};

enum class ECriticalHitDamageOverride : uint8
{
	None                           = 0,
	ForceCrit                      = 1,
	ForceNotCrit                   = 2,
	ECriticalHitDamageOverride_MAX = 3,
};

enum class ERecentDamageFlags : uint8
{
	None                           = 0,
	CriticalHit                    = 1,
	Healing                        = 2,
	Shield                         = 4,
	Armor                          = 8,
	DamageOverTime                 = 16,
	Resist                         = 32,
	ZeroDamage                     = 64,
	Weapon                         = 128,
	ERecentDamageFlags_MAX         = 129,
};

enum class EUIStatComparisonResult : uint8
{
	None                           = 0,
	Better                         = 1,
	Worse                          = 2,
	Same                           = 3,
	EUIStatComparisonResult_MAX    = 4,
};

enum class EGbxParamValueMode : uint8
{
	Value                          = 0,
	ValueVariance                  = 1,
	MinMax                         = 2,
	Actor                          = 3,
	None                           = 4,
	BlackboardKey                  = 5,
	Condition                      = 6,
	AttributeInitializationData    = 7,
	Count                          = 8,
	EGbxParamValueMode_MAX         = 9,
};

enum class EGbxParamValueType : uint8
{
	Float                          = 0,
	Bool                           = 1,
	Int                            = 2,
	EnvQueryContext                = 3,
	Object                         = 4,
	Count                          = 5,
	EGbxParamValueType_MAX         = 6,
};

enum class ETeamCollisionChannel : uint8
{
	One                            = 0,
	Two                            = 1,
	Three                          = 2,
	Four                           = 3,
	ETeamCollisionChannel_MAX      = 4,
};

enum class EActorPartTypeSelectionOverrideMode : uint8
{
	PreferredParts                 = 0,
	OverrideParts                  = 1,
	EActorPartTypeSelectionOverrideMode_MAX = 2,
};

enum class EActorPartReplacementMode : uint8
{
	Additive                       = 0,
	Selective                      = 1,
	Complete                       = 2,
	EActorPartReplacementMode_MAX  = 3,
};

enum class EActorTagQueryMode : uint8
{
	HasAny                         = 0,
	HasNone                        = 1,
	HasAll                         = 2,
	EActorTagQueryMode_MAX         = 3,
};

enum class EChargeCurveType : uint8
{
	Relative                       = 0,
	Absolute                       = 1,
	EChargeCurveType_MAX           = 2,
};

enum class ERelativeSizeCharge : uint8
{
	Everyone                       = 0,
	SameAndBigger                  = 1,
	OnlyBigger                     = 2,
	None                           = 3,
	ERelativeSizeCharge_MAX        = 4,
};

enum class EAnimActionDefInput : uint8
{
	AnimAsset                      = 1,
	AnimAssetName                  = 2,
	EAnimActionDefInput_MAX        = 3,
};

enum class EAnimNotifyAlignType : uint8
{
	Self                           = 0,
	Partner                        = 1,
	EAnimNotifyAlignType_MAX       = 2,
};

enum class EAttributeInitializerUsageMode : uint8
{
	Set                            = 0,
	Add                            = 1,
	Scale                          = 2,
	Offset                         = 3,
	EAttributeInitializerUsageMode_MAX = 4,
};

enum class EBalanceValueType : uint8
{
	GameStage                      = 0,
	ExperienceLevel                = 1,
	EBalanceValueType_MAX          = 2,
};

enum class EChallengeType : uint8
{
	ECT_Stat                       = 0,
	ECT_LevelObject                = 1,
	ECT_DesignerTriggered          = 2,
	ECT_Blueprint                  = 3,
	ECT_MAX                        = 4,
};

enum class ECharacterMovementAttributeValueType : uint8
{
	Speed                          = 0,
	Speed2D                        = 1,
	ECharacterMovementAttributeValueType_MAX = 2,
};

enum class ECinematicAudioMode : uint8
{
	NormalWorldAudio               = 0,
	StandardCinematic              = 1,
	ExclusiveMode                  = 2,
	ECinematicAudioMode_MAX        = 3,
};

enum class EConditionalAreaDamageFilter : uint8
{
	MustNotBeRadiusDamage          = 0,
	MustBeRadiusDamage             = 1,
	EConditionalAreaDamageFilter_MAX = 2,
};

enum class EConditionalDamageCriticalFilter : uint8
{
	HitRegionMustBeCritical        = 0,
	HitRegioneMustNotBeCritical    = 1,
	MustBeAnyCritical              = 2,
	MustNotBeAnyCritical           = 3,
	EConditionalDamageCriticalFilter_MAX = 4,
};

enum class EDamageFilterExprMode : int32
{
	MustMatch                      = 0,
	MustNotMatch                   = 1,
	EDamageFilterExprMode_MAX      = 2,
};

enum class EConditionalModifierType : uint8
{
	Scale                          = 0,
	ScaleSimple                    = 1,
	FlatDamage                     = 2,
	EConditionalModifierType_MAX   = 3,
};

enum class EConditionalDamageTypeBonusMode : uint8
{
	AddBonusDamage                 = 0,
	AddBonusDamage_BackToAttacker  = 1,
	AddBonusDamage_BackToAttackerInstigator = 2,
	ConvertPartialDamage           = 3,
	ConvertAllDamage               = 4,
	EConditionalDamageTypeBonusMode_MAX = 5,
};

enum class EConditionalDamageModifierType : uint8
{
	Scale                          = 0,
	Add                            = 1,
	ScaleSimple                    = 2,
	EConditionalDamageModifierType_MAX = 3,
};

enum class ECMInheritVelocityType : uint8
{
	Forward                        = 0,
	Backward                       = 1,
	Right                          = 2,
	Left                           = 3,
	Up                             = 4,
	Down                           = 5,
	ECMInheritVelocityType_MAX     = 6,
};

enum class ECMTerminalVelocityModificationType : uint8
{
	OverrideTerminalVelocity       = 0,
	ScaleTerminalVelocity          = 1,
	ECMTerminalVelocityModificationType_MAX = 2,
};

enum class ECMGravityModificationType : uint8
{
	ScaleGravity                   = 0,
	ScaleDefaultGravity            = 1,
	OverrideGravity                = 2,
	ECMGravityModificationType_MAX = 3,
};

enum class ECMLedgeBehavior : uint8
{
	CanWalkOffLedges               = 0,
	CannotWalkOffLedges            = 1,
	StopOnReachedLedge             = 2,
	ECMLedgeBehavior_MAX           = 3,
};

enum class ECMTeleportPreferenceType : uint8
{
	Behind_TargetFacing            = 0,
	Ahead_TargetFacing             = 1,
	Behind_MoveDirection           = 2,
	Ahead_MoveDirection            = 3,
	ECMTeleportPreferenceType_MAX  = 4,
};

enum class ECMMoveLRControlType : uint8
{
	None                           = 0,
	Yaw                            = 1,
	Speed                          = 2,
	ECMMoveLRControlType_MAX       = 3,
};

enum class ECMMoveFBControlType : uint8
{
	None                           = 0,
	Pitch                          = 1,
	Speed                          = 2,
	ECMMoveFBControlType_MAX       = 3,
};

enum class ECMMovementType : uint8
{
	Ground                         = 0,
	Flying                         = 1,
	Falling                        = 2,
	MoveNoneRootMotion             = 3,
	ECMMovementType_MAX            = 4,
};

enum class EDamageAreaBoxOriginType : uint8
{
	Centered                       = 0,
	OffsetByDepth                  = 1,
	EDamageAreaBoxOriginType_MAX   = 2,
};

enum class EDamageAreaOverlapFilterType : uint8
{
	AllDynamicObjects              = 0,
	Profile                        = 1,
	Custom                         = 2,
	EDamageAreaOverlapFilterType_MAX = 3,
};

enum class EDamageComponentHealthMode : int32
{
	ResourcePools                  = 0,
	SimpleHealth                   = 1,
	EDamageComponentHealthMode_MAX = 2,
};

enum class EAdditionalDamageClassifier : uint8
{
	None                           = 0,
	BonusDamage                    = 1,
	ReflectedBonusDamage           = 2,
	ConvertedDamage                = 3,
	EAdditionalDamageClassifier_MAX = 4,
};

enum class EDebugDisplayVerbosityLevel : uint8
{
	Normal                         = 0,
	Verbose                        = 1,
	EDebugDisplayVerbosityLevel_MAX = 2,
};

enum class EExplosionTinnitusDuration : uint8
{
	None                           = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	EExplosionTinnitusDuration_MAX = 4,
};

enum class EFeedbackDataFirstPersonImpulseType : uint8
{
	None                           = 0,
	Custom                         = 1,
	EFeedbackDataFirstPersonImpulseType_MAX = 2,
};

enum class EFeedbackType : uint8
{
	Ranged                         = 0,
	Directional                    = 1,
	RandomRumble                   = 2,
	Continuous                     = 3,
	RandomShake                    = 4,
	EFeedbackType_MAX              = 255,
};

enum class EForceSelection : uint8
{
	Custom                         = 0,
	Attribute                      = 1,
	Preset                         = 2,
	EForceSelection_MAX            = 3,
};

enum class EContainsTagComponent : uint8
{
	HasTagComponent                = 0,
	NoTagComponent                 = 1,
	EContainsTagComponent_MAX      = 2,
};

enum class EGameResourcePoolState : uint8
{
	RPS_Depleted                   = 0,
	RPS_Depleting                  = 1,
	RPS_Filled                     = 2,
	RPS_Regenerating               = 3,
	RPS_MAX                        = 4,
};

enum class EGameResourcePoolReplicationType : uint8
{
	GRPRT_None                     = 0,
	GRPRT_Basic                    = 1,
	GRPRT_Full                     = 2,
	GRPRT_MAX                      = 3,
};

enum class EAIChargeAnim : uint8
{
	None                           = 0,
	Start                          = 1,
	Loop                           = 2,
	Miss                           = 3,
	Strike                         = 4,
	HitWall                        = 5,
	ReachCliff                     = 6,
	StopForFriendly                = 7,
	EAIChargeAnim_MAX              = 8,
};

enum class EActionSelectionMethod : uint8
{
	FIRST                          = 0,
	RANDOM                         = 1,
	EActionSelectionMethod_MAX     = 2,
};

enum class ECoordinatedOwnedParticleAction : uint8
{
	None                           = 0,
	Hide                           = 1,
	Suppress                       = 2,
	ECoordinatedOwnedParticleAction_MAX = 3,
};

enum class ECoordinatedParticleScaleMode : uint8
{
	None                           = 0,
	LargestAxis                    = 1,
	SmallestAxis                   = 2,
	HorizontalAxis                 = 3,
	VerticalAxis                   = 4,
	EachAxis                       = 5,
	ECoordinatedParticleScaleMode_MAX = 6,
};

enum class ECoordinatedEffectParamScaleMode : uint8
{
	None                           = 0,
	XBounds                        = 1,
	YBounds                        = 2,
	ZBounds                        = 3,
	ECoordinatedEffectParamScaleMode_MAX = 4,
};

enum class EDirectionPlane : int32
{
	Horizontal                     = 0,
	Vertical                       = 1,
	EDirectionPlane_MAX            = 2,
};

enum class EGbxPhysicalActionMovementLockMode : uint8
{
	MLM_None                       = 0,
	MLM_AquireOnBegin              = 1,
	MLM_ReleaseOnEnd               = 2,
	MLM_AquireRelease              = 3,
	MLM_MAX                        = 4,
};

enum class EGbxPhysicalActionDynamicBodyState : uint8
{
	DBS_Upright                    = 0,
	DBS_FaceDown                   = 1,
	DBS_FaceUp                     = 2,
	DBS_Unknown                    = 3,
	DBS_MAX                        = 4,
};

enum class EGbxPhysicalActionDynamicBoneActivationMode : uint8
{
	DBAM_HitBone                   = 0,
	DBAM_Recursive                 = 1,
	DBAM_FullBody                  = 2,
	DBAM_MAX                       = 3,
};

enum class EGbxPhysicalActionEndCondition : uint8
{
	EndCondition_AnimationMatch    = 0,
	EndCondition_NoFatigue         = 1,
	EndCondition_FullFatigue       = 2,
	EndCondition_AnimationEnd      = 3,
	EndCondition_NotAllFlagsMatch  = 4,
	EndCondition_NotAnyFlagsMatch  = 5,
	EndCondition_Undetermined      = 6,
	EndCondition_MAX               = 7,
};

enum class EGbxPhysicalActionBeginCondition : uint8
{
	BeginCondition_Immediate       = 0,
	BeginCondition_WaitUntilPoseMatch = 1,
	BeginCondition_NotAllFlagsMatch = 2,
	BeginCondition_NotAnyFlagsMatch = 3,
	BeginCondition_MAX             = 4,
};

enum class ERagdollState : uint8
{
	Start                          = 0,
	Anim                           = 1,
	Ragdoll                        = 2,
	IdlePoseDriving                = 3,
	StartBlend                     = 4,
	Blend                          = 5,
	Getup                          = 6,
	Done                           = 7,
	ERagdollState_MAX              = 8,
};

enum class EDynamicToKinematicTransition : int32
{
	NoTransition                   = 0,
	RagdollLandToStandUp           = 1,
	PredictiveLanding              = 2,
	AttemptPredictiveLanding       = 3,
	EDynamicToKinematicTransition_MAX = 4,
};

enum class EGbxActionEndCondition : uint8
{
	EndCondition_BlendOut          = 0,
	EndCondition_LastFrame         = 1,
	EndCondition_Loop              = 2,
	EndCondition_MAX               = 3,
};

enum class EGbxActionPriority : uint8
{
	Low                            = 0,
	Normal                         = 1,
	High                           = 2,
	Important                      = 3,
	EGbxActionPriority_MAX         = 4,
};

enum class EGbxActionNetMode : uint8
{
	ServerAuth                     = 0,
	AlwaysRep                      = 1,
	LocalOnly                      = 2,
	SkipNetOwner                   = 3,
	EGbxActionNetMode_MAX          = 4,
};

enum class EActionRegisterType : uint8
{
	NoType                         = 0,
	Float                          = 1,
	Int                            = 2,
	Object                         = 3,
	Name                           = 4,
	Vector                         = 5,
	EActionRegisterType_MAX        = 6,
};

enum class EAnimBPProfileImport : uint8
{
	All                            = 0,
	FootIK                         = 1,
	LookAt                         = 2,
	ForwardDynamics                = 3,
	EAnimBPProfileImport_MAX       = 4,
};

enum class EForwardDynamicsActivation : int32
{
	PhysicsAssetSimulated          = 0,
	ForwardDynamicsProfileDefinition = 1,
	EForwardDynamicsActivation_MAX = 2,
};

enum class EGbxAreaDrawStyle : uint8
{
	None                           = 0,
	Wire                           = 1,
	Solid                          = 2,
	SolidAndWire                   = 3,
	EGbxAreaDrawStyle_MAX          = 4,
};

enum class EGbxAttributeModifierActionExecOutput : uint8
{
	Success                        = 0,
	Failure                        = 1,
	EGbxAttributeModifierActionExecOutput_MAX = 2,
};

enum class EGbxBoneModifyProfile_PoseMode : uint8
{
	Override                       = 0,
	Additive                       = 1,
	EGbxBoneModifyProfile_MAX      = 2,
};

enum class EBoneModifyTransition_TransformType : uint8
{
	Translation                    = 0,
	Rotation                       = 1,
	Scale                          = 2,
	EBoneModifyTransition_MAX      = 3,
};

enum class EGbxCharacterBlendPoints : uint8
{
	SixPoint                       = 0,
	EightPoint                     = 1,
	EGbxCharacterBlendPoints_MAX   = 2,
};

enum class EMantleUpCheckState : uint8
{
	Unknown                        = 0,
	WallCheck_NoWall               = 1,
	WallCheck_TooFlat              = 2,
	WallCheck_InvalidHitComponent  = 3,
	HeadRoomCheck_BlockedAhead     = 4,
	HeadRoomCheck_BlockedAbove     = 5,
	StandingSpotCheck_Initial_Ahead_NoFloor = 6,
	StandingSpotCheck_Initial_Ahead_InitiallyPenetrating = 7,
	StandingSpotCheck_Initial_Ahead_InvalidHitComponent = 8,
	StandingSpotCheck_Final_Ahead_NoFloor = 9,
	StandingSpotCheck_Final_Ahead_InitiallyPenetrating = 10,
	StandingSpotCheck_Final_Ahead_InvalidHitComponent = 11,
	StandingSpotCheck_Final_Ahead_UnwalkableSlope = 12,
	StandingSpotCheck_Final_Ahead_OutsideOfHeightTolerance = 13,
	StandingSpotCheck_Final_Ahead_BlockedAtHead = 14,
	StandingSpotCheck_Final_Ahead_TooHigh = 15,
	StandingSpotCheck_Initial_Rotated_NoFloor = 16,
	StandingSpotCheck_Initial_Rotated_InitiallyPenetrating = 17,
	StandingSpotCheck_Initial_Rotated_InvalidHitComponent = 18,
	StandingSpotCheck_Final_Rotated_NoFloor = 19,
	StandingSpotCheck_Final_Rotated_InitiallyPenetrating = 20,
	StandingSpotCheck_Final_Rotated_InvalidHitComponent = 21,
	StandingSpotCheck_Final_Rotated_UnwalkableSlope = 22,
	StandingSpotCheck_Final_Rotated_OutsideOfHeightTolerance = 23,
	StandingSpotCheck_Final_Rotated_BlockedAtHead = 24,
	StandingSpotCheck_Final_Rotated_TooHigh = 25,
	Good                           = 26,
	EMantleUpCheckState_MAX        = 27,
};

enum class EGbxMovementMode : uint8
{
	GBXMOVE_Ladder                 = 0,
	GBXMOVE_Mantle                 = 1,
	GBXMOVE_PawnAttached           = 2,
	GBXMOVE_PretendWalk            = 3,
	GBXMOVE_NoneWithRootMotion     = 4,
	GBXMOVE_MAX                    = 5,
};

enum class EMassComparison : uint8
{
	LessThanOrEqual                = 0,
	LessThan                       = 1,
	EqualTo                        = 2,
	NotEqualTo                     = 3,
	GreaterThan                    = 4,
	GreaterThanOrEqual             = 5,
	EMassComparison_MAX            = 6,
};

enum class EConditionComparisonOperatorType : uint8
{
	EqualTo                        = 0,
	NotEqualTo                     = 1,
	LessThan                       = 2,
	LessThanOrEqual                = 3,
	GreaterThan                    = 4,
	GreaterThanOrEqual             = 5,
	EConditionComparisonOperatorType_MAX = 6,
};

enum class ECompoundConditionOperatorType : uint8
{
	And                            = 0,
	Or                             = 1,
	Xor                            = 2,
	Not                            = 3,
	ECompoundConditionOperatorType_MAX = 4,
};

enum class ECustomizationCustomFloatType : uint8
{
	ComponentScale                 = 0,
	MorphTarget                    = 1,
	MorphTargetSet                 = 2,
	MaterialScalarParam            = 3,
	MaterialVectorParamX           = 4,
	MaterialVectorParamY           = 5,
	MaterialVectorParamZ           = 6,
	MaterialVectorParamW           = 7,
	AnimBlueprintPropertyX         = 8,
	AnimBlueprintPropertyY         = 9,
	AnimBlueprintPropertyZ         = 10,
	AnimBlueprintPropertyXYZ       = 11,
	ECustomizationCustomFloatType_MAX = 12,
};

enum class ELinkedParameterType : uint8
{
	Scalar                         = 0,
	Vector                         = 1,
	Texture                        = 2,
	ELinkedParameterType_MAX       = 3,
};

enum class EGbxCustomizationComponentInitSourceType : uint8
{
	None                           = 0,
	CopyFromInstigatorOnSpawn      = 1,
	LinkToInstigatorOnSpawn        = 2,
	EGbxCustomizationComponentInitSourceType_MAX = 3,
};

enum class EDamageSurfaceType : uint8
{
	Default                        = 0,
	Flesh                          = 1,
	Armor                          = 2,
	Shield                         = 3,
	EDamageSurfaceType_MAX         = 4,
};

enum class EGbxFeedbackType : uint8
{
	Ranged                         = 1,
	Directional                    = 2,
	RandomRumble                   = 4,
	Continuous                     = 8,
	RandomShake                    = 16,
	EFeedbackType_MAX              = 255,
	EGbxFeedbackType_MAX           = 256,
};

enum class EGbxFlagEval : uint8
{
	IsTrue                         = 0,
	IsFalse                        = 1,
	TrueForXSeconds                = 2,
	FalseForXSeconds               = 3,
	TrueWithinXSeconds             = 4,
	FalseWithinXSeconds            = 5,
	EGbxFlagEval_MAX               = 6,
};

enum class EPlayersOverlappingActorOutput : uint8
{
	Overlapping                    = 0,
	NotOverlapping                 = 1,
	EPlayersOverlappingActorOutput_MAX = 2,
};

enum class EPlayersInVolumeOutput : uint8
{
	InVolume                       = 0,
	NotInVolume                    = 1,
	EPlayersInVolumeOutput_MAX     = 2,
};

enum class EIsAutonomousOuput : uint8
{
	Autonomous                     = 0,
	NotAutonomous                  = 1,
	EIsAutonomousOuput_MAX         = 2,
};

enum class EIsPlayerExecOutput : uint8
{
	Player                         = 0,
	NotPlayer                      = 1,
	EIsPlayerExecOutput_MAX        = 2,
};

enum class EGbxButtonEvent : uint8
{
	Pressed                        = 0,
	Released                       = 1,
	EGbxButtonEvent_MAX            = 2,
};

enum class EGbxParamValueFlags : uint8
{
	ClampPositive                  = 0,
	AllBBKeyTypes                  = 1,
	EGbxParamValueFlags_MAX        = 2,
};

enum class EDestructibleDamageThresholdMagnitude : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Legacy                         = 3,
	EDestructibleDamageThresholdMagnitude_MAX = 4,
};

enum class EGraphicsMode : uint8
{
	Performance                    = 0,
	Resolution                     = 1,
	EGraphicsMode_MAX              = 2,
};

enum class ESpeakerSetup : uint8
{
	SmallSpeaker                   = 0,
	Hifi                           = 1,
	NightTime                      = 2,
	Mono                           = 3,
	Headphones                     = 4,
	ESpeakerSetup_MAX              = 5,
};

enum class ETimedUpdateBehavior : uint8
{
	DontDoTimedUpdates             = 0,
	UpdateRegularlyEvenWhenNavigating = 1,
	UpdateRegularlyExceptWhenNavigating = 2,
	ETimedUpdateBehavior_MAX       = 3,
};

enum class EQueryOwnerLocationUse : uint8
{
	Never                          = 0,
	Always                         = 1,
	Only                           = 2,
	EQueryOwnerLocationUse_MAX     = 3,
};

enum class ESimpleMotionType : uint8
{
	None                           = 0,
	ScaleByValue                   = 1,
	Interpolate                    = 2,
	Loop                           = 3,
	Alternate                      = 4,
	ESimpleMotionType_MAX          = 5,
};

enum class EGlobalBoneModifyProfile_PoseMode : uint8
{
	Override                       = 0,
	Multiplicative                 = 1,
	EGlobalBoneModifyProfile_MAX   = 2,
};

enum class EHitReactionConditionCombine : uint8
{
	And                            = 0,
	Or                             = 1,
	EHitReactionConditionCombine_MAX = 2,
};

enum class EHitReactionConditionContext : uint8
{
	ReceiverOwner                  = 0,
	Receiver                       = 1,
	CauserOwner                    = 2,
	Causer                         = 3,
	DamageType                     = 4,
	DamageSource                   = 5,
	HitRegion                      = 6,
	EHitReactionConditionContext_MAX = 7,
};

enum class EDamageReactionEventType : uint8
{
	Health                         = 0,
	HealthPersistent               = 1,
	Damage                         = 2,
	DamageOverTime                 = 3,
	EDamageReactionEventType_MAX   = 4,
};

enum class EHitRegionDamageRule : uint8
{
	IndependentHealth              = 0,
	OwnerHealth_DamageCap          = 1,
	OwnerHealth_NoDamageCap        = 2,
	EHitRegionDamageRule_MAX       = 3,
};

enum class EImpactUsage : uint8
{
	Default                        = 0,
	Footstep                       = 1,
	EImpactUsage_MAX               = 2,
};

enum class EInstigatorAttributeEffectModifierValueContext : uint8
{
	Instigator                     = 0,
	ThisInventoryActor             = 1,
	EInstigatorAttributeEffectModifierValueContext_MAX = 2,
};

enum class EInstigatorAttributeEffectAttributeToModifyContextSource : uint8
{
	ThisInventoryActorWithInstigatorFallback = 0,
	InstigatorOnly                 = 1,
	EInstigatorAttributeEffectAttributeToModifyContextSource_MAX = 2,
};

enum class EInterpMode : uint8
{
	None                           = 0,
	Linear                         = 1,
	NonLinear                      = 2,
	Count                          = 3,
	EInterpMode_MAX                = 4,
};

enum class EMantleType : uint8
{
	MantleUp                       = 0,
	WallHop                        = 1,
	EMantleType_MAX                = 255,
};

enum class ENavAnimType : uint8
{
	None                           = 0,
	Direction                      = 1,
	Destination                    = 2,
	Rotation                       = 3,
	ENavAnimType_MAX               = 4,
};

enum class EAttachmentTransitionTiming : uint8
{
	ChangePawnBeforeTransition     = 0,
	ChangePawnAfterTransition      = 1,
	AttachBaseDuringTransition     = 2,
	EAttachmentTransitionTiming_MAX = 3,
};

enum class EAttachmentPossessionRule : uint8
{
	PossessBase                    = 0,
	Unchanged                      = 1,
	EAttachmentPossessionRule_MAX  = 2,
};

enum class EPhysicalAnimationBlendToKinematicMode : int32
{
	KinematicLerp                  = 0,
	DynamicMatchesAnimation        = 1,
	Immediate                      = 2,
	EPhysicalAnimationBlendToKinematicMode_MAX = 3,
};

enum class EPhysicalAnimationRootMotionControl : uint8
{
	PARMC_DrivenByAnimated         = 0,
	PARMC_PureDynamic              = 1,
	PARMC_SimulatedPointDrive      = 2,
	PARMC_SimulatedOrientationDrive = 3,
	PARMC_MAX                      = 4,
};

enum class EAggregateBoneStatusFlag : uint8
{
	ABS_HasDynamic                 = 0,
	ABS_HasMotion                  = 1,
	ABS_HasPoseVariance            = 2,
	ABS_HasFatigue                 = 3,
	ABS_HasPlayingAnimation        = 4,
	ABS_MAX                        = 5,
};

enum class EAggregateBoneFatigueStatus : uint8
{
	ABFS_FullyFatigued             = 0,
	ABFS_NoFatigue                 = 1,
	ABFS_FullyDivergedFatigue      = 2,
	ABFS_VariedFatigue             = 3,
	ABFS_MAX                       = 4,
};

enum class ECycleDirection : uint8
{
	Backward                       = 0,
	Forward                        = 1,
	ECycleDirection_MAX            = 2,
};

enum class ERelativeDirectionType : uint8
{
	Default                        = 0,
	ParentOrientation              = 1,
	ParentOrientation2D            = 2,
	InverseParentOrientation       = 3,
	ParentVelocity                 = 4,
	ParentVelocity2D               = 5,
	InverseParentVelocity          = 6,
	InverseParentVelocity2D        = 7,
	Random                         = 8,
	RandomUpwards                  = 9,
	RandomDownwards                = 10,
	RandomOnHorizontalPlane        = 11,
	StraightUp                     = 12,
	StraightDown                   = 13,
	StraightTowardTarget           = 14,
	StraightAwayFromTarget         = 15,
	ParentAimDirection             = 16,
	InverseParentAimDirection      = 17,
	ParentAimDirection2D           = 18,
	InverseParentAimDirection2D    = 19,
	ParentAcceleration2D           = 20,
	InverseParentAimOffset         = 21,
	ERelativeDirectionType_MAX     = 22,
};

enum class EScreenParticleScalingMode : uint8
{
	FitToHorizontal                = 0,
	FitToVertical                  = 1,
	FitToExterior                  = 2,
	FitToInterior                  = 3,
	FitToViewport                  = 4,
	DontAdjustScaling              = 5,
	FitToViewportAndKeepContentAspectRatio = 6,
	EScreenParticleScalingMode_MAX = 7,
};

enum class ESimpleMathValueResolverOperatorType : uint8
{
	Add                            = 0,
	Subtract                       = 1,
	Multiply                       = 2,
	Divide                         = 3,
	ESimpleMathValueResolverOperatorType_MAX = 4,
};

enum class ESplitScreenViewportType : uint8
{
	Standard                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Quad                           = 3,
	ESplitScreenViewportType_MAX   = 4,
};

enum class EStatusEffectStackingInstanceReplacementCriteria : uint8
{
	ChooseSpec                     = 0,
	ChooseLowerDPS                 = 1,
	ChooseHigherDPS                = 2,
	ChooseLongerDuration           = 3,
	ChooseShorterDuration          = 4,
	EStatusEffectStackingInstanceReplacementCriteria_MAX = 5,
};

enum class EStatusEffectStackingInstanceSelectionCriteria : uint8
{
	NewestInstance                 = 0,
	OldestInstance                 = 1,
	MostTimeRemaining              = 2,
	LeastTimeRemaining             = 3,
	EStatusEffectStackingInstanceSelectionCriteria_MAX = 4,
};

enum class EStretchBonesMarkerMode : uint8
{
	BeforeMarker                   = 0,
	AttachedMarker                 = 1,
	AfterMarker                    = 2,
	EStretchBonesMarkerMode_MAX    = 3,
};

enum class EStretchBonesActorTrackingStyle : uint8
{
	FirstFrame                     = 0,
	PredictedFirstFrame            = 1,
	Track                          = 2,
	TrackUntilNotify               = 3,
	NavEntry                       = 4,
	NavExit                        = 5,
	NavMidpoint                    = 6,
	EStretchBonesActorTrackingStyle_MAX = 7,
};

enum class EAimAssistSnapTargetType : uint8
{
	Default                        = 0,
	Disabled                       = 1,
	Horizontal                     = 2,
	Center                         = 3,
	EAimAssistSnapTargetType_MAX   = 4,
};

enum class EAITargetScoringBoost : uint8
{
	ReduceExtreme                  = 0,
	ReduceModerate                 = 1,
	ReduceLight                    = 2,
	NoBoost                        = 3,
	AmplifyLight                   = 4,
	AmplifyModerate                = 5,
	AmplifyExtreme                 = 6,
	MAX                            = 7,
};

enum class ETerritoryCombatProxyType : uint8
{
	Threat                         = 0,
	Patrol                         = 1,
	ETerritoryCombatProxyType_MAX  = 2,
};

enum class ETerritoryType : uint8
{
	Patrol                         = 0,
	Threat                         = 1,
	Combat                         = 2,
	ETerritoryType_MAX             = 3,
};

enum class ETerritoryDrawStyle : uint8
{
	None                           = 0,
	Wire                           = 1,
	Solid                          = 2,
	SolidAndWire                   = 3,
	ETerritoryDrawStyle_MAX        = 4,
};

enum class EThreatReason : uint8
{
	ThreatReason_None              = 0,
	ThreatReason_TerritoryEverywhereThreat = 1,
	ThreatReason_TerritoryIncursionAuto = 2,
	ThreatReason_TerritoryIncursionSeen = 3,
	ThreatReason_ShotAt            = 4,
	ThreatReason_Damaged           = 5,
	ThreatReason_Proximity         = 6,
	ThreatReason_TeamNotification  = 7,
	ThreatReason_Scripted          = 8,
	ThreatReason_MAX               = 9,
};

enum class EUIStatCombinationMethod : uint8
{
	Multiply                       = 0,
	Divide                         = 1,
	Add                            = 2,
	Subtract                       = 3,
	DontCombine                    = 4,
	EUIStatCombinationMethod_MAX   = 5,
};

enum class EUIStatValueRoundingMode : uint8
{
	None                           = 0,
	RoundToInt                     = 1,
	FloorToInt                     = 2,
	CeilToInt                      = 3,
	EUIStatValueRoundingMode_MAX   = 4,
};

enum class EUIStatValueSignStyle : uint8
{
	AsIs                           = 0,
	Positive                       = 1,
	Negative                       = 2,
	OppositeSign                   = 3,
	EUIStatValueSignStyle_MAX      = 4,
};

enum class EUIStatValueStyle : uint8
{
	AttributeValue                 = 0,
	AbsoluteModification           = 1,
	ScaleModification              = 2,
	OnlyScaleModification          = 3,
	EUIStatValueStyle_MAX          = 4,
};

enum class EUsableTypeCostContext : uint8
{
	UsableObject                   = 0,
	Player                         = 1,
	EUsableTypeCostContext_MAX     = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.StanceChangedEventArgs
struct FStanceChangedEventArgs
{
public:
	enum class EStanceStackLayer                 PreviousLayer;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceType*                           PreviousStanceType;                                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceData*                           PreviousStance;                                    // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStanceStackLayer                 NextLayer;                                         // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceType*                           NextStanceType;                                    // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceData*                           NextStance;                                        // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.ControlledMoveStopSummary
struct FControlledMoveStopSummary
{
public:
	bool                                         bInterrupted;                                      // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStoppedBecauseHitTargetable;                      // 0x1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BCC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LastHitActor;                                      // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StopVelocity;                                      // 0x10(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BCD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ControlledMoveNetCorrection
struct FControlledMoveNetCorrection
{
public:
	float                                        Runtime;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UControlledMove>           ControlledMove;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct GbxGameSystemCore.FacingInfo
struct FFacingInfo
{
public:
	enum class EFacingInfoType                   Type;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0xC(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x14(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x20(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x2C(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BD1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.MantleAttemptInfo
struct FMantleAttemptInfo
{
public:
	int32                                        ActionIndex;                                       // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x4(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   MovementBase;                                      // 0x10(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GbxGameSystemCore.CharacterMoveToCommand
struct FCharacterMoveToCommand
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x8(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bContinuouslyUpdate : 1;                           // Mask: 0x1, PropSize: 0x10x18(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnforceMaxSpeed : 1;                              // Mask: 0x2, PropSize: 0x10x18(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnforceMaxSpeedOnEnding : 1;                      // Mask: 0x4, PropSize: 0x10x18(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMoveZAxis : 1;                                    // Mask: 0x8, PropSize: 0x10x18(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BD4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.GbxEasingFunc
struct FGbxEasingFunc
{
public:
	enum class EEasingFunc                       Func;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendExp;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Steps;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.CharacterRotateToCommand
struct FCharacterRotateToCommand
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetSocket;                                      // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x10(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BD8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFreezeRotation;                                   // 0x30(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpSpeed;                                       // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxYawRate;                                        // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPitchRate;                                      // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEasing;                                        // 0x40(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxEasingFunc                        Easing;                                            // 0x44(0xC)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxGameSystemCore.RootMotionStateData
struct FRootMotionStateData
{
public:
	uint8                                        Pad_5BDB[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCharacterMovementComponent*        GbxCharMoveComp;                                   // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCharacterAnimInstance*             GbxAnimInstance;                                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.IdleVelocityData
struct FIdleVelocityData
{
public:
	uint8                                        Pad_5BDE[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxInterpData
struct FGbxInterpData
{
public:
	uint8                                        Pad_5BDF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AController*                           Controller;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovementComponent*                    MoveComp;                                          // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BE1[0x120];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GbxGameSystemCore.RotationDeltaMatchingInfo
struct FRotationDeltaMatchingInfo
{
public:
	struct FFloatCurve                           RotationTimeCurve;                                 // 0x0(0x90)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BE4[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GbxGameSystemCore.NavAnimClientData
struct FNavAnimClientData
{
public:
	struct FVector_NetQuantizeNormal             Direction;                                         // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   GoalLoc;                                           // 0xC(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GoalRadius;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GbxGameSystemCore.NavAnimServerData
struct FNavAnimServerData
{
public:
	uint8                                        Pad_5BE5[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Areas;                                             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               UserEdges;                                         // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.NavAnimMachineData
struct FNavAnimMachineData
{
public:
	int32                                        MachineIdx;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENavAnimState                     ServerBaseState;                                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENavAnimState                     CurrState;                                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BE6[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.NavAnimDesiredInfo
struct FNavAnimDesiredInfo
{
public:
	float                                        Yaw;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   FaceLoc;                                           // 0x4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.NavAnimTransition
struct FNavAnimTransition
{
public:
	enum class ENavAnimState                     State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavAnimDesiredInfo                   Info;                                              // 0x4(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RowName;                                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MachineIdx;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RunIdx;                                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.NavAnimState
struct FNavAnimState
{
public:
	uint8                                        Pad_5BEB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CachedAnimInst;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNavAnimMachineData>           MachineList;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FNavAnimTransition                    ServerTransition;                                  // 0x20(0x28)(NoDestructor, NativeAccessSpecifierPrivate)
	int32                                        ClientTransitionIdx;                               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BEC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxCharacterNavWalking
struct FGbxCharacterNavWalking
{
public:
	class UGbxCharacterMovementComponent*        MoveComp;                                          // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5BEE[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.ReplicatedMantleState
struct FReplicatedMantleState
{
public:
	uint8                                        Counter;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActionIndex;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.MantleActiveActionData
struct FMantleActiveActionData
{
public:
	struct FMantleAttemptInfo                    MantleAttempt;                                     // 0x0(0x18)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BF2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxGameSystemCore.MantleTraceInputs
struct FMantleTraceInputs
{
public:
	uint8                                        Pad_5BF3[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                World;                                             // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMantleData*                           MantleData;                                        // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGameplayGlobals*                   Globals;                                           // 0x58(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x60(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x278 (0x278 - 0x0)
// ScriptStruct GbxGameSystemCore.MantleTraceCheck
struct FMantleTraceCheck
{
public:
	struct FMantleTraceInputs                    Inputs;                                            // 0x0(0x68)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BF5[0x210];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x6E8 (0x6E8 - 0x0)
// ScriptStruct GbxGameSystemCore.MantleState
struct FMantleState
{
public:
	class UGbxCharacterMovementComponent*        MovementComponentOwner;                            // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMantleData*                           MantleData;                                        // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxGameplayGlobals*                   GameplayGlobals;                                   // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BF8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMantleActiveActionData               ActiveActionData;                                  // 0x20(0x20)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BF9[0x430];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMantleTraceCheck                     CurrentTrace;                                      // 0x470(0x278)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.ControlledMoveParameters
struct FControlledMoveParameters
{
public:
	float                                        SpeedOverride;                                     // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DurationOverride;                                  // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LaunchAngleOverride;                               // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               TargetLocation;                                    // 0x18(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BFC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.ControlledMoveReplicationData
struct FControlledMoveReplicationData
{
public:
	uint8                                        DirtyCounter;                                      // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UControlledMove>           ControlledMove;                                    // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FControlledMoveParameters             Parameters;                                        // 0x10(0x28)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FVector                               PackedDirection;                                   // 0x38(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bZeroVelocity : 1;                                 // Mask: 0x1, PropSize: 0x10x44(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bInterrupted : 1;                                  // Mask: 0x2, PropSize: 0x10x44(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BFE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct GbxGameSystemCore.ControlledMoveState
struct FControlledMoveState
{
public:
	class UGbxCharacterMovementComponent*        MovementComponentOwner;                            // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UControlledMove*                       CurrentMove;                                       // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseSpeed;                                         // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C00[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Runtime;                                           // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C01[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C03[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialDirection;                                  // 0xA8(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurrentDirection;                                  // 0xB4(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C04[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FrameMoveVelocity;                                 // 0xF0(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C05[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LastHitActor;                                      // 0x130(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C06[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AForwardInput;                                     // 0x13C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AStrafeInput;                                      // 0x140(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C07[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GbxGameSystemCore.ReplicatedLadderState
struct FReplicatedLadderState
{
public:
	uint8                                        DirtyCounter;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScriptedLadderType               LadderType;                                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.LadderAnimState
struct FLadderAnimState
{
public:
	enum class EScriptedLadderType               PendingType;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C0D[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EScriptedLadderType               CurrentType;                                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C0E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// ScriptStruct GbxGameSystemCore.CharacterScriptedMeshOffsetCommand
struct FCharacterScriptedMeshOffsetCommand
{
public:
	uint8                                        Pad_5C11[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         RootMotionSourceAnim;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HorzCurv;                                          // 0x18(0x78)(NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    VertCurv;                                          // 0x90(0x78)(NativeAccessSpecifierPublic)
	uint8                                        Pad_5C12[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct GbxGameSystemCore.CharacterScriptedMeshOffsetState
struct FCharacterScriptedMeshOffsetState
{
public:
	uint8                                        Pad_5C13[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterScriptedMeshOffsetCommand   Cmd;                                               // 0x8(0x138)(NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxGameSystemCore.CharacterRotateToState
struct FCharacterRotateToState
{
public:
	struct FCharacterRotateToCommand             CommandData;                                       // 0x0(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_5C14[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.CharacterMoveToState
struct FCharacterMoveToState
{
public:
	struct FCharacterMoveToCommand               CommandData;                                       // 0x0(0x1C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C15[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.UseEvent
struct FUseEvent
{
public:
	class AController*                           UserController;                                    // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UsedComponent;                                     // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsabilityType                    UseType;                                           // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasHeld;                                          // 0x11(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C19[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.LandingInfo
struct FLandingInfo
{
public:
	bool                                         bNoMinVelIfJumped;                                 // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LandedMinVel;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           LandedImpact;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayLandedImpactAtSpecificFeet;                   // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                LandedAction;                                      // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCharacterSoundTag*                    VocalizationTag;                                   // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.HealthTypeDamageSummary
struct FHealthTypeDamageSummary
{
public:
	class UHealthTypeData*                       HealthType;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C1D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxGameSystemCore.ReceivedDamageDetails
struct FReceivedDamageDetails
{
public:
	bool                                         bWasCrit;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitDirection;                                      // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   HitComponent;                                      // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitRegionData*                        HitRegion;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHealthTypeDamageSummary>      DamagePerHealthType;                               // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               RadiusDamageOrigin;                                // 0x40(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasBulletReflected;                               // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C24[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxGameSystemCore.CausedDamageDetails
struct FCausedDamageDetails
{
public:
	bool                                         bWasCrit;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitDirection;                                      // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DamageCauser;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitRegionData*                        HitRegion;                                         // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHealthTypeDamageSummary>      DamagePerHealthType;                               // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               RadiusDamageOrigin;                                // 0x48(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDamageOverTime;                                 // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDirectMelee;                                    // 0x59(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMeleeFinisher;                                  // 0x5A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C28[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxGameSystemCore.CausedDeathDetails
struct FCausedDeathDetails
{
public:
	class UDamageSource*                         DamageSource;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxDamageType*                        DamageType;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 DamageInstigator;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverkillDamage;                                    // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasCrit;                                          // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasAwareOfKiller;                                 // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasFullyHealthy;                                  // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C2A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x2C(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitDirection;                                      // 0x38(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RadiusDamageOrigin;                                // 0x44(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHealthTypeDamageSummary>      DamagePerHealthType;                               // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.CausedHealingDetails
struct FCausedHealingDetails
{
public:
	class AActor*                                HealTarget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                HealInstigator;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Healing;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageSource*                         DamageSource;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxDamageType*                        DamageType;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.HitFriendlyEventDetails
struct FHitFriendlyEventDetails
{
public:
	class AActor*                                HitTarget;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                HitInstigator;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageSource*                         DamageSource;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxDamageType*                        DamageType;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.HitByFriendlyEventDetails
struct FHitByFriendlyEventDetails
{
public:
	class AActor*                                DamageInstigator;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxDamageType*                        DamageType;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageSource*                         DamageSource;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.GameResourcePoolReference
struct FGameResourcePoolReference
{
public:
	uint8                                        PoolIndexInManager;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameResourcePoolManagerComponent*     PoolManager;                                       // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C35[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.PlayerDamageDataPresentation
struct FPlayerDamageDataPresentation
{
public:
	class UParticleSystem*                       ScreenParticle;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             HitDirection;                                      // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C38[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.RangedDistanceOverrides
struct FRangedDistanceOverrides
{
public:
	bool                                         bOverrideRangedDistances;                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDistanceOverride;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistanceOverride;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxGameSystemCore.ActiveTrackedFeedback
struct FActiveTrackedFeedback
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastStartTime;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastRandomShakeTime;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomCameraShake;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseScale;                                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentScale;                                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentCameraShakeScale;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraShakeXScale;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraShakeYScale;                                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x28(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRangedDistanceOverrides              RangedDistanceOverrides;                           // 0x34(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRumbleFinished;                                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShakeFinished;                                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C3B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                AdditionalCameraShakeScales;                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                SourceContext;                                     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.StatusEffectSpec
struct FStatusEffectSpec
{
public:
	class UStatusEffectData*                     StatusEffectData;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                EffectOwner;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                EffectOwnerContextOverride;                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatusEffectDurationType         DurationType;                                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           EffectInstigator;                                  // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamagePerSecond;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C3E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.UsabilityInfo
struct FUsabilityInfo
{
public:
	bool                                         bCanUse;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanInteractWith;                                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanPrimaryUse;                                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanPrimaryHoldUse;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanSecondaryUse;                                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanSecondaryHoldUse;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowUseDef;                                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C3F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OptionalErrorText;                                 // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class UUsableTypeDefinition*                 PrimaryUseDef;                                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUsableTypeDefinition*                 PrimaryHoldUseDef;                                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUsableTypeDefinition*                 SecondaryUseDef;                                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUsableTypeDefinition*                 SecondaryHoldUseDef;                               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GbxGameSystemCore.ResourceLock
struct FResourceLock
{
public:
	bool                                         bLocked;                                           // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5C41[0x97];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.UsableCostCache
struct FUsableCostCache
{
public:
	int32                                        PrimaryCost;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryCost;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimaryHoldUseCost;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryHoldUseCost;                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.LatentUseState
struct FLatentUseState
{
public:
	class UUsableComponent*                      UsableComponent;                                   // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C45[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxGameSystemCore.UseTraceResult
struct FUseTraceResult
{
public:
	class UUsableComponent*                      UsableComponent;                                   // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUsabilityInfo                        Usability;                                         // 0x10(0x40)(NativeAccessSpecifierPublic)
	uint8                                        Pad_5C47[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.DataTableValueHandle
struct FDataTableValueHandle
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ValueName;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.AttributeInitializationData
struct FAttributeInitializationData
{
public:
	float                                        BaseValueConstant;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DataTableValue;                                    // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxAttributeData*                     BaseValueAttribute;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAttributeInitializer>     AttributeInitializer;                              // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseValueScale;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C4A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxGameSystemCore.HealthType
struct FHealthType
{
public:
	class UHealthTypeData*                       HealthTypeData;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameResourcePoolData*                 HealthPoolData;                                    // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                HealthSectionPercentages;                          // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bResetIdleTimerIfNoDamage : 1;                     // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseChanceToExist : 1;                             // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15E : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5C4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ChanceToExist;                                     // 0x28(0x38)(Edit, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameResourcePoolReference            HealthPool;                                        // 0x60(0x18)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.UsabilityQuery
struct FUsabilityQuery
{
public:
	class AController*                           UserController;                                    // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UsedComponent;                                     // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsabilityType                    UseType;                                           // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHeld;                                          // 0x11(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C50[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.UsableAngleRestriction
struct FUsableAngleRestriction
{
public:
	float                                        AngleOffset;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleWidth;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.UseDefinitionConditional
struct FUseDefinitionConditional
{
public:
	class UUsableTypeDefinition*                 UseDefinition;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         UseCondition;                                      // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.UseDefSelection
struct FUseDefSelection
{
public:
	uint8                                        bOverrideDefaultUseDefinition : 1;                 // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideConditionalDefs : 1;                      // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15F : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5C52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUsableTypeDefinition*                 DefaultUseDefinition;                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUseDefinitionConditional>     ConditionalUseDefs;                                // 0x10(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GbxGameSystemCore.HoldToUseSettings
struct FHoldToUseSettings
{
public:
	enum class EHoldToUseMode                    Mode;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C53[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoldToUseStartTime;                                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldToUseTime;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseInteractionBreakDistance;                      // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InteractionBreakDistance;                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.StatusEffectInstanceReference
struct FStatusEffectInstanceReference
{
public:
	class UStatusEffectManagerComponent*         StatusEffectManagerComponent;                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffectData*                     StatusEffectData;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        StatusEffectInstanceID;                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5C55[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.AnimGraphBoneSet
struct FAnimGraphBoneSet
{
public:
	class UGbxBoneSet*                           BoneSet;                                           // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnimGraphMachineName;                              // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.SavedCollisionItem
struct FSavedCollisionItem
{
public:
	class UPrimitiveComponent*                   Primitive;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCollisionResponseContainer           Responses;                                         // 0x8(0x20)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.SavedTeamCollision
struct FSavedTeamCollision
{
public:
	class UTeamComponent*                        TeamComponent;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTeamCollision;                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollideWithTeam;                                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C57[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.SavedCollision
struct FSavedCollision
{
public:
	TArray<struct FSavedCollisionItem>           SavedItems;                                        // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FSavedTeamCollision>           SavedTeamItems;                                    // 0x10(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GbxGameSystemCore.RemoteFacingChannel
struct FRemoteFacingChannel
{
public:
	uint8                                        Pitch;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Yaw;                                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct GbxGameSystemCore.FacingController
struct FFacingController
{
public:
	uint8                                        Pad_5C58[0x109];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRemoteFacingChannel                  RemoteChannels[0x3];                               // 0x109(0x6)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5C59[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ReplicatedPawnAttachState
struct FReplicatedPawnAttachState
{
public:
	class UPawnAttachSlotComponent*              Slot;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPawnAttachStatus                 Status;                                            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C5A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       StatusFlag;                                        // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C5B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.SpawnCostSelection
struct FSpawnCostSelection
{
public:
	enum class ESpawnCostSelection               Selection;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Preset;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnCost;                                         // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C5D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.MassSelection
struct FMassSelection
{
public:
	enum class EMassSelection                    Selection;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Preset;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C61[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.SoundPerceptionProperties
struct FSoundPerceptionProperties
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C62[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Loudness;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.BulletPerceptionProperties
struct FBulletPerceptionProperties
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Strength;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.ActorPartTypeSelectionOverrideData
struct FActorPartTypeSelectionOverrideData
{
public:
	uint8                                        Pad_5C65[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorPartData*>                Parts;                                             // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ActorPartSelectionOverrideData
struct FActorPartSelectionOverrideData
{
public:
	TArray<struct FActorPartTypeSelectionOverrideData> PartTypeOverrides;                                 // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GbxGameSystemCore.MinimalStaticRigidBodyState
struct FMinimalStaticRigidBodyState
{
public:
	uint32                                       BoneIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                Position;                                          // 0x4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x10(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.StaticRagdollReplicationData
struct FStaticRagdollReplicationData
{
public:
	TArray<struct FMinimalStaticRigidBodyState>  Bodies;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxAttributeModifierHandle
struct FGbxAttributeModifierHandle
{
public:
	uint8                                        Pad_5C67[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.ReplicatedImpactHitResult
struct FReplicatedImpactHitResult
{
public:
	bool                                         bLocalSpace;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   ImpactPoint;                                       // 0x4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             Normal;                                            // 0x10(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>      PhysMaterial;                                      // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>    Component;                                         // 0x2C(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.ImpactAudioParam
struct FImpactAudioParam
{
public:
	class UWwiseRtpc*                            Parameter;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseSwitch*                          Switch;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C6A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct GbxGameSystemCore.ImpactResponseParams
struct FImpactResponseParams
{
public:
	TArray<struct FParticleSysParam>             ParticleParameters;                                // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FImpactAudioParam>             AudioParameters;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UWwiseSwitch*                          AudioSurfaceSwitch;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C6B[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    DecalOverride;                                     // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C6C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageDataEventDetails
struct FDamageDataEventDetails
{
public:
	float                                        DamageDealt;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHealthTypeDamageSummary>      DamagePerHealthType;                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGbxDamageType*                        DamageType;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageSource*                         DamageSource;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitDirection;                                      // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x34(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasCrit;                                          // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasDirectMelee;                                   // 0x41(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C71[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.StanceFloatValue
struct FStanceFloatValue
{
public:
	enum class EStanceValueOverrideType          ValueType;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.RegisteredConditionalDamageModifierBase
struct FRegisteredConditionalDamageModifierBase
{
public:
	class UObject*                               Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GbxGameSystemCore.RegisteredConditionalHitRegionModifier
struct FRegisteredConditionalHitRegionModifier : public FRegisteredConditionalDamageModifierBase
{
public:
	class UConditionalDamageHitRegionModifier*   Modifier;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GbxGameSystemCore.RegisteredConditionalDamageTypeModifier
struct FRegisteredConditionalDamageTypeModifier : public FRegisteredConditionalDamageModifierBase
{
public:
	class UConditionalDamageTypeModifier*        Modifier;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C73[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GbxGameSystemCore.RegisteredConditionalDamageCriticalModifier
struct FRegisteredConditionalDamageCriticalModifier : public FRegisteredConditionalDamageModifierBase
{
public:
	class UConditionalDamageCriticalModifier*    Modifier;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ModifierValueContextOverride;                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GbxGameSystemCore.RegisteredConditionalDamageValueModifier
struct FRegisteredConditionalDamageValueModifier : public FRegisteredConditionalDamageModifierBase
{
public:
	class UConditionalDamageValueModifier*       Modifier;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               DamageValueContextOverride;                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.CritSourceModifiers
struct FCritSourceModifiers
{
public:
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    CritModifierPreAdd;                                // 0x8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    CritModifierSimpleScale;                           // 0x14(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    CritModifierScale;                                 // 0x20(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    CritModifierPostAdd;                               // 0x2C(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.ReflectedDamageParams
struct FReflectedDamageParams
{
public:
	float                                        DamageScale;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageTakenScale;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReflectTowardAttacker;                            // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.StatusEffectModifiers
struct FStatusEffectModifiers
{
public:
	class UStatusEffectData*                     StatusEffectData;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    EffectChanceModifier;                              // 0x8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    EffectDurationModifier;                            // 0x14(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    EffectDamageModifier;                              // 0x20(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C79[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GbxGameSystemCore.AttitudeDamageRules
struct FAttitudeDamageRules
{
public:
	uint8                                        bAllowHostileDamage : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowNeutralDamage : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowFriendlyDamage : 1;                          // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C7A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageGoreModifiers
struct FDamageGoreModifiers
{
public:
	float                                        GoreModifier;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GibModifier;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.CriticalHitDamageOverrides
struct FCriticalHitDamageOverrides
{
public:
	enum class ECriticalHitDamageOverride        Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultCriticalHitMultiplier;                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C7C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdditionalCriticalMultiplier;                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct GbxGameSystemCore.SpawnPatternResult
struct FSpawnPatternResult
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearImpulse;                                     // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinearVelocityChange;                             // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AngularImpulse;                                    // 0x1C(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAngularVelocityChange;                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C7F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxGameSystemCore.AimControlParameters
struct FAimControlParameters
{
public:
	class UAimControlData*                       AimControlData;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C80[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxUIFormattedText
struct FGbxUIFormattedText
{
public:
	class FText                                  FormatText;                                        // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<class FString, TScriptInterface<class IGbxUIFormattableParameter>> FormatParams;                                      // 0x18(0x50)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.CachedUIStatData
struct FCachedUIStatData
{
public:
	class UUIStatData*                           Stat;                                              // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  Description;                                       // 0x8(0x18)(Transient, NativeAccessSpecifierPrivate)
	class FText                                  ValueText;                                         // 0x20(0x18)(Transient, NativeAccessSpecifierPrivate)
	float                                        ComparisonValue;                                   // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EUIStatComparisonResult           ComparisonResult;                                  // 0x3C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5C81[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.CachedUIStatSectionData
struct FCachedUIStatSectionData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FCachedUIStatData>             Stats;                                             // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.CachedUIStatCollectionData
struct FCachedUIStatCollectionData
{
public:
	TArray<struct FCachedUIStatSectionData>      Sections;                                          // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxBlackboardKeySelector
struct FGbxBlackboardKeySelector
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRuntimeKey;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C83[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxParam
struct FGbxParam
{
public:
	enum class EGbxParamValueType                ValueType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DisabledValueModes;                                // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ValueFlags;                                        // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxParamValueMode                ValueMode;                                         // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNumericRange                         Range;                                             // 0x4(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAttributeInitializer>     AttributeInitializer;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxAttributeData*                     AttributeData;                                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAttributeInitializationData          AttributeInitializationData;                       // 0x20(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             BlackboardKey;                                     // 0x58(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxCondition*                         Condition;                                         // 0x68(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C87[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x88 - 0x80)
// ScriptStruct GbxGameSystemCore.GbxNamedParam
struct FGbxNamedParam : public FGbxParam
{
public:
	class FName                                  Name;                                              // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct GbxGameSystemCore.EnvQueryParams
struct FEnvQueryParams
{
public:
	class UEnvQuery*                             Query;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEnvQueryTest*>                 AdditionalTests;                                   // 0x8(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UEnvQueryTestAsset*>            AdditionalTestAssets;                              // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableRunModeEditing;                            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C89[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxNamedParam>                Contexts;                                          // 0x30(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NoClear, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bDisableContextEditing;                            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowEmptyContexts;                               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C8A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UClass*, int32>                   ContextTypeTable;                                  // 0x48(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C8B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxNamedParam>                Params;                                            // 0xA0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NoClear, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EGbxSignificance                  RequiredSignificanceRating;                        // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C8C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.StatusEffectQueryResult
struct FStatusEffectQueryResult
{
public:
	int32                                        NumberOfInstances;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DPS;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C8D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.StatusEffectQuery
struct FStatusEffectQuery
{
public:
	class UStatusEffectData*                     StatusEffectData;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Owner;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C8E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.StatusEffectRemoveSpec
struct FStatusEffectRemoveSpec
{
public:
	class UStatusEffectData*                     StatusEffectData;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EffectOwner;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.AttributeEffectReference
struct FAttributeEffectReference
{
public:
	class UStatusEffectData*                     StatusEffectData;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C8F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.AppliedAttributeEffect
struct FAppliedAttributeEffect
{
public:
	struct FAttributeEffectReference             AttributeEffectRef;                                // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               AttributeResolutionContext;                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffectManagerComponent*         Owner;                                             // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C92[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.StatusEffectInstance
struct FStatusEffectInstance
{
public:
	struct FStatusEffectSpec                     Spec;                                              // 0x0(0x38)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C93[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct GbxGameSystemCore.PipelineDamageInput
struct FPipelineDamageInput
{
public:
	class UDamageComponent*                      DamageReceiverComp;                                // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IDamageableInterface> Damageable;                                        // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APawn*                                 InstigatorPawn;                                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 AdditionalEventListenerPawn;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageModifierComponent*              DamageModifierComp;                                // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           InstigatorController;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C94[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           ImpactData;                                        // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           CritImpactData;                                    // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         InstigatorFeedback;                                // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSimulatedOnClient : 1;                            // Mask: 0x1, PropSize: 0x10xF8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_162 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5C96[0x97];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCriticalHitDamageOverrides           CriticalHitOverrides;                              // 0x190(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C97[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageGoreModifiers                  GoreModifiers;                                     // 0x19C(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C98[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageOverTimeContribution
struct FDamageOverTimeContribution
{
public:
	struct FPipelineDamageInput                  PipelineInput;                                     // 0x0(0x1C0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C99[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxGameSystemCore.StatusEffectInstanceStack
struct FStatusEffectInstanceStack
{
public:
	class UStatusEffectManagerComponent*         Owner;                                             // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffectData*                     StatusEffectData;                                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageComponent*                      DoTDamageComponent;                                // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAppliedAttributeEffect>       AttributeEffects;                                  // 0x18(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C9C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDamageOverTimeContribution>   DPSContributions;                                  // 0x38(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FStatusEffectInstance>         Instances;                                         // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C9D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.HitRegionInfo
struct FHitRegionInfo
{
public:
	class UHitRegionData*                        Data;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StateIndex;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C9E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageReactionEventSummary
struct FDamageReactionEventSummary
{
public:
	class APawn*                                 DamageCauser;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitDirection;                                      // 0x14(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitRegionInfo                        HitRegion;                                         // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x48(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EventIndex;                                        // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C9F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxQueryOriginOptions
struct FGbxQueryOriginOptions
{
public:
	struct FGbxParam                             UpdatePeriod;                                      // 0x0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             UpdateCondition;                                   // 0x80(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bInvertCondition;                                  // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CBA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x238 (0x238 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxQueryOptions
struct FGbxQueryOptions
{
public:
	enum class EQueryOwnerLocationUse            OwnerLocationUse;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReplaceLastResultThreshold;                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceLastResult;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepValidValues;                                  // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CBC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinUpdatePeriod;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PauseUpdatesWhenNotPingedForTime;                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateAlways;                                     // 0x14(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimedUpdateBehavior              WhenToDoFullQueryUpdates;                          // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUpdateWhileActive;                             // 0x16(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CBF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             OwnerMoveThreshold;                                // 0x18(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUpdateWhenOwnerMoves;                             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             PrimaryContextMoveThreshold;                       // 0xA0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUpdateWhenPrimaryContextMoves;                    // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxQueryOriginOptions                Origin;                                            // 0x128(0x108)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUpdateOrigin;                                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyUpdateWhenCanPath;                            // 0x231(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateWhenHotSpotsListChanges;                    // 0x232(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CC5[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.AnimActionDef
struct FAnimActionDef
{
public:
	enum class EAnimActionDefInput               InputType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationAsset*                       AnimAsset;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnimAssetName;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct GbxGameSystemCore.GbxAnimTableRow
struct FGbxAnimTableRow : public FTableRowBase
{
public:
	struct FAnimActionDef                        Animation;                                         // 0x8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct GbxGameSystemCore.ActionState_Base
struct FActionState_Base
{
public:
	uint8                                        Pad_5CC7[0xC8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A0 (0x468 - 0xC8)
// ScriptStruct GbxGameSystemCore.ActionState_SimpleAnim
struct FActionState_SimpleAnim : public FActionState_Base
{
public:
	uint8                                        Pad_5CC8[0x3A0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.AnimMeshExtra
struct FAnimMeshExtra
{
public:
	struct FAnimActionDef                        Anim;                                              // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  MeshName;                                          // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnimSlotOverride;                                  // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAnimSlotOverride;                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendInOverride;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBlendInOverride;                               // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CCA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendOutOverride;                                  // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBlendOutOverride;                              // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CCB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxGameSystemCore.AnimMeshList
struct FAnimMeshList
{
public:
	struct FAnimActionDef                        Body3rd;                                           // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnimActionDef                        Body1st;                                           // 0x18(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnimActionDef                        Weapon3rd;                                         // 0x30(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnimActionDef                        Weapon1st;                                         // 0x48(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimMeshExtra>                Extras;                                            // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CCC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxGameSystemCore.PreviewActorManager
struct FPreviewActorManager
{
public:
	class USceneComponent*                       AttachComponent;                                   // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                Actor;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                ActorTemplate;                                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5CCD[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct GbxGameSystemCore.PreviewState
struct FPreviewState
{
public:
	uint8                                        Pad_5CCE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnabled;                                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5CCF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPreviewActorManager                  PreviewActorManager;                               // 0x10(0x80)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AActor>                    PreviewClass;                                      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox                                  PreviewBounds;                                     // 0x98(0x1C)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoCycle;                                        // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5CD1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreviewIdx;                                        // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5CD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                PreviewAction;                                     // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ElapsedTime;                                       // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPlayingAction;                                    // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bQueuedAction;                                     // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowAction;                                       // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRepeatAction;                                     // 0xD3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5CD3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x4F8 - 0x468)
// ScriptStruct GbxGameSystemCore.ActionState_Anim
struct FActionState_Anim : public FActionState_SimpleAnim
{
public:
	uint8                                        Pad_5CD4[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.AttributeBaseValueData
struct FAttributeBaseValueData
{
public:
	class UGbxAttributeData*                     AttributeToSetBaseValueOf;                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          BaseValue;                                         // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxSignificanceEvent
struct FGbxSignificanceEvent
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct GbxGameSystemCore.ImpactResponseEffect
struct FImpactResponseEffect
{
public:
	bool                                         bHighPriority;                                     // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCensorThisEffect;                                 // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CD5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           CensoredEffectAlternative;                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideImpactWwiseEvent;                         // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CD6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           ImpactWwiseEvent;                                  // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleTemplate;                                  // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAttachParticleToHitActor : 1;                     // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAttachParticleToHitBone : 1;                      // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHideEffectFromHitActor : 1;                       // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNoOverlapDecal : 1;                               // Mask: 0x8, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_166 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5CD9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NoOverlapDecalGroupName;                           // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            DecalMaterials;                                    // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        DecalWidth;                                        // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalHeight;                                       // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalThickness;                                    // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalMinScale;                                     // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalMaxScale;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDecalRandomRotation;                              // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DecalRandomRotationLimit;                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalLifetime;                                     // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalFadeDuration;                                 // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CDC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxSignificanceEvent                 SignificanceEvent;                                 // 0x70(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bPlayFeedbackOnHitActor;                           // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFeedbackData*                         HitFeedback;                                       // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         AreaFeedback;                                      // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactResponseParams                 EffectParameters;                                  // 0x90(0xB0)(NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct GbxGameSystemCore.ImpactResponseInfo
struct FImpactResponseInfo
{
public:
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CDF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImpactResponseEffect                 Response;                                          // 0x10(0x140)(Edit, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.AttributeEffectData
struct FAttributeEffectData
{
public:
	class UGbxAttributeData*                     AttributeToModify;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxAttributeModifierType         ModifierType;                                      // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ModifierValue;                                     // 0x10(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.ForceSelection
struct FForceSelection
{
public:
	enum class EForceSelection                   Selection;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Preset;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAttributeData*                     Attribute;                                         // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CE3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0x1C0 - 0xC8)
// ScriptStruct GbxGameSystemCore.ActionState_CoordinatedEffect
struct FActionState_CoordinatedEffect : public FActionState_Base
{
public:
	uint8                                        Pad_5CE4[0xF8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct GbxGameSystemCore.ActionState_Gib
struct FActionState_Gib : public FActionState_Base
{
public:
	uint8                                        Pad_5CE5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0x540 - 0x468)
// ScriptStruct GbxGameSystemCore.ActionState_Loop
struct FActionState_Loop : public FActionState_SimpleAnim
{
public:
	uint8                                        Pad_5CE6[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x510 - 0x4F8)
// ScriptStruct GbxGameSystemCore.ActionState_PhysicalAnim
struct FActionState_PhysicalAnim : public FActionState_Anim
{
public:
	uint8                                        Pad_5CE7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x540 - 0x510)
// ScriptStruct GbxGameSystemCore.ActionState_PhysicalDeath
struct FActionState_PhysicalDeath : public FActionState_PhysicalAnim
{
public:
	uint8                                        Pad_5CE8[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct GbxGameSystemCore.AttributeDefinedValueRow
struct FAttributeDefinedValueRow : public FTableRowBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationLinkedParameter
struct FCustomizationLinkedParameter
{
public:
	class FName                                  LinkedParameterName;                               // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELinkedParameterType              LinkedParameterType;                               // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CEA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct GbxGameSystemCore.HealthTypeBalanceData
struct FHealthTypeBalanceData : public FTableRowBase
{
public:
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.WeightedActorPartData
struct FWeightedActorPartData
{
public:
	class UActorPartData*                        PartData;                                          // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          Weight;                                            // 0x8(0x38)(Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x6D0 - 0x6C0)
// ScriptStruct GbxGameSystemCore.GbxAnimInstanceProxy
struct FGbxAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_5CEC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct GbxGameSystemCore.GbxInputActionEventInterpreter
struct FGbxInputActionEventInterpreter : public FGbxHasStructType
{
public:
};

// 0x0 (0x6D0 - 0x6D0)
// ScriptStruct GbxGameSystemCore.GbxCharacterAnimInstanceProxy
struct FGbxCharacterAnimInstanceProxy : public FGbxAnimInstanceProxy
{
public:
};

// 0x3C (0x3C - 0x0)
// ScriptStruct GbxGameSystemCore.ViewLeadingRotationInfo
struct FViewLeadingRotationInfo
{
public:
	struct FRotator                              Effect;                                            // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               EffectFromTranslation;                             // 0xC(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TiltFromRotationYaw;                               // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelRate;                                         // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecelRate;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Max;                                               // 0x24(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Min;                                               // 0x30(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct GbxGameSystemCore.ViewLeadingTranslationInfo
struct FViewLeadingTranslationInfo
{
public:
	struct FVector                               Effect;                                            // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelRate;                                         // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecelRate;                                         // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Max;                                               // 0x14(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Min;                                               // 0x20(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.ChallengeStatInstanceData
struct FChallengeStatInstanceData
{
public:
	class UGameStatData*                         StatId;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UGameStatData>          ChallengeStatPath;                                 // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentStatValue;                                  // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CEE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxGameSystemCore.ChallengePersistentState
struct FChallengePersistentState
{
public:
	class UClass*                                ChallengeClass;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UChallenge>              ChallengeClassPath;                                // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedCount;                                    // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedProgressLevel;                            // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChallengeStatInstanceData>    StatInstanceState;                                 // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrentlyCompleted;                               // 0x49(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CF1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ProgressCounter;                                   // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomChallengePersistentState*       CustomPersistentData;                              // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CF2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxGameSystemCore.ChallengeInstanceData
struct FChallengeInstanceData
{
public:
	class AActor*                                CCOwner;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChallengePersistentState             ChallengeState;                                    // 0x8(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UChallenge*                            ChallengeInstance;                                 // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CF3[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.DataActionPair_Base
struct FDataActionPair_Base
{
public:
	TSubclassOf<class UGbxAction>                ActionValue;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GbxGameSystemCore.DataActionPair_SmartObject
struct FDataActionPair_SmartObject : public FDataActionPair_Base
{
public:
	struct FGameplayTag                          ActionKey;                                         // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxBoneSet*                           BoneSetFilter;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GbxGameSystemCore.DataActionPair_SpawnMesh
struct FDataActionPair_SpawnMesh : public FDataActionPair_Base
{
public:
	struct FGameplayTag                          ActionKey;                                         // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GbxGameSystemCore.DataActionPair_Spawn
struct FDataActionPair_Spawn : public FDataActionPair_Base
{
public:
	struct FGameplayTag                          ActionKey;                                         // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.ActorPartListData
struct FActorPartListData
{
public:
	class UEnum*                                 PartTypeEnum;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        PartType;                                          // 0x8(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanSelectMultipleParts;                           // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseWeightWithMultiplePartSelection;               // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5CF5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInt32Interval                        MultiplePartSelectionRange;                        // 0xC(0x8)(Edit, DisableEditOnTemplate, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabled;                                          // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5CF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeightedActorPartData>        Parts;                                             // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWeightedActorPartData>        RuntimeParts;                                      // 0x28(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_5CF8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.StaticMeshAttachmentsData
struct FStaticMeshAttachmentsData
{
public:
	uint8                                        Pad_5CF9[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.ConditionalMultiSelectionGestaltPartNameData
struct FConditionalMultiSelectionGestaltPartNameData
{
public:
	TArray<class UActorPartData*>                OtherParts;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          GestaltMeshPartNames;                              // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.MultiSelectionGestaltPartNameData
struct FMultiSelectionGestaltPartNameData
{
public:
	int32                                        IndexOfType;                                       // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5CFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          GestaltMeshPartNames;                              // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<struct FConditionalMultiSelectionGestaltPartNameData> ConditionalGestaltMeshPartNames;                   // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.RuntimeActorPartListPartTypeData
struct FRuntimeActorPartListPartTypeData
{
public:
	int32                                        StartIndex;                                        // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumParts;                                          // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.RuntimeActorPartListData
struct FRuntimeActorPartListData
{
public:
	uint8                                        bIsInitialized : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_167 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5CFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRuntimeActorPartListPartTypeData> PartTypeTOC;                                       // 0x8(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FWeightedActorPartData>        AllParts;                                          // 0x18(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.ActorTagQuery
struct FActorTagQuery
{
public:
	bool                                         bIncludeComponents;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EActorTagQueryMode                Mode;                                              // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D00[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Tags;                                              // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ActorTagCompositeQuery
struct FActorTagCompositeQuery
{
public:
	TArray<struct FActorTagQuery>                Queries;                                           // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.AIChargeState
struct FAIChargeState
{
public:
	uint8                                        Pad_5D02[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.AIDodgeInstance
struct FAIDodgeInstance
{
public:
	TSubclassOf<class UGbxAction>                Action;                                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D03[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GbxGameSystemCore.AIDodgeBasicData
struct FAIDodgeBasicData
{
public:
	struct FGbxParam                             Cooldown;                                          // 0x0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                Action;                                            // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         Condition;                                         // 0x88(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D05[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x1B8 - 0x98)
// ScriptStruct GbxGameSystemCore.AIDodgeData
struct FAIDodgeData : public FAIDodgeBasicData
{
public:
	struct FGbxParam                             Chance;                                            // 0x98(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             Delay;                                             // 0x118(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bRemoveAllDelay;                                   // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAngle;                                          // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitAngle;                                       // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D07[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistance;                                       // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitDistance;                                    // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinShooterDistance;                                // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitShooterDistance;                             // 0x1B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D09[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.AimAssistSmoothingProperties
struct FAimAssistSmoothingProperties
{
public:
	uint8                                        Pad_5D0A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LastTarget;                                        // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTeam*                                 LastTargetTeam;                                    // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D0B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GbxGameSystemCore.AimSensitivityLevelParameters
struct FAimSensitivityLevelParameters
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawMaxRotationRate;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMaxRotationRate;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningExtraYaw;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningExtraPitch;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningRampUpTime;                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningRampUpDelay;                                // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.AIBulletEvent
struct FAIBulletEvent
{
public:
	uint8                                        Pad_5D11[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Strength;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Instigator;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D14[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.PredictionSource
struct FPredictionSource
{
public:
	uint8                                        Pad_5D15[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxAISightEvent
struct FGbxAISightEvent
{
public:
	uint8                                        Pad_5D16[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SeenActor;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Observer;                                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct GbxGameSystemCore.WeightedAnim
struct FWeightedAnim
{
public:
	struct FAnimMeshList                         Anims;                                             // 0x0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          Weight;                                            // 0x78(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct GbxGameSystemCore.StretchAnimData
struct FStretchAnimData
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequence*                         AnimSeq;                                           // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5D17[0x1D0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x168 - 0x0)
// ScriptStruct GbxGameSystemCore.AsyncExplosionImpactRequest
struct FAsyncExplosionImpactRequest
{
public:
	class UImpactData*                           ExplosionImpact;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ExplodingActor;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D19[0x150];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GbxGameSystemCore.AsyncExplosionImpactRequestEntry
struct FAsyncExplosionImpactRequestEntry
{
public:
	uint8                                        Pad_5D1A[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.AttributePropertyValueResolverTestStruct
struct FAttributePropertyValueResolverTestStruct
{
public:
	float                                        FloatProp;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatPropStaticArray[0x3];                         // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FloatPropDynamicArray;                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UAttributePropertyValueResolverTestContext* ObjectProp;                                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAttributePropertyValueResolverTestContext* ObjectPropStaticArray[0x3];                        // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAttributePropertyValueResolverTestContext*> ObjectPropDynamicArray;                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxGameSystemCore.GameStageGradeWeightData
struct FGameStageGradeWeightData
{
public:
	struct FAttributeInitializationData          MinGameStage;                                      // 0x0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FAttributeInitializationData          MaxGameStage;                                      // 0x38(0x38)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.ChallengeGoalValue
struct FChallengeGoalValue
{
public:
	int32                                        GoalValue;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NotificationThreshold;                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.StatChallengeTest
struct FStatChallengeTest
{
public:
	class UGameStatData*                         StatId;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChallengeGoalValue>           GoalInfo;                                          // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                GoalValues;                                        // 0x18(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	bool                                         bUseLocalStat;                                     // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetLocalStatWhenGoalReached;                    // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D1F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ChallengeDataType
struct FChallengeDataType
{
public:
	class UEnum*                                 ChallengeDataTypeEnum;                             // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ChallengeDataType;                                 // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D20[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x28 - 0xC)
// ScriptStruct GbxGameSystemCore.ReplicatedChallengeData
struct FReplicatedChallengeData : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_5D22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UChallenge>                ChallengeClass;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       ChallengeHash;                                     // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumCompleted;                                      // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumChallenges;                                     // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5D23[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xC8 - 0xB0)
// ScriptStruct GbxGameSystemCore.ReplicatedChallengeDataArray
struct FReplicatedChallengeDataArray : public FFastArraySerializer
{
public:
	class AChallengeManager*                     OwnerChallengeManager;                             // 0xB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FReplicatedChallengeData>      Items;                                             // 0xB8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.AttributeConditionalValue
struct FAttributeConditionalValue
{
public:
	struct FAttributeInitializationData          ValueIfAllConditionsAreTrue;                       // 0x0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UGbxCondition*>                 Conditions;                                        // 0x38(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ConditionalDamageDamageTypeConditional
struct FConditionalDamageDamageTypeConditional
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.ConditionalDamageDamageConditionalValue
struct FConditionalDamageDamageConditionalValue
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          DamageValue;                                       // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct GbxGameSystemCore.CMMotionData
struct FCMMotionData
{
public:
	struct FRuntimeFloatCurve                    X;                                                 // 0x0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Y;                                                 // 0x78(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Z;                                                 // 0xF0(0x78)(Edit, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct GbxGameSystemCore.DamagedActor
struct FDamagedActor
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageComponent*                      DamageComponent;                                   // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D24[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x198 (0x198 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageTargetResult
struct FDamageTargetResult
{
public:
	class UDamageComponent*                      DamageComponent;                                   // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D25[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamagedActor                         AsyncDamagedActor;                                 // 0x20(0xE0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D26[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageContextSource
struct FDamageContextSource
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 Instigator;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct GbxGameSystemCore.CauseDamageAsyncRequest
struct FCauseDamageAsyncRequest
{
public:
	class UDamageData*                           DamageData;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageContextSource                  DamageContext;                                     // 0x8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                DamageTarget;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D27[0x210];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0x2E0 - 0x230)
// ScriptStruct GbxGameSystemCore.CauseDamageAsyncRequestEntry
struct FCauseDamageAsyncRequestEntry : public FCauseDamageAsyncRequest
{
public:
	uint8                                        Pad_5D28[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDamageTargetResult>           Results;                                           // 0x2C8(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D29[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageReactionEvent_DamageComponent
struct FDamageReactionEvent_DamageComponent
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameResourcePoolData*                 HealthPool;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EventHealthPercent;                                // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageReactionEventType          EVENTTYPE;                                         // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageFilter*                         Filter;                                            // 0x18(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageTime;                                        // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetriggerDelay;                                    // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTriggerCount;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D2B[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.SyncedHitReactionData
struct FSyncedHitReactionData
{
public:
	class UHitReactionTag*                       Tag;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                Action;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                CensoredAction;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageAmount;                                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             Direction;                                         // 0x1C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HitBoneIndex;                                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                HitLocation;                                       // 0x30(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Flags;                                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxGameSystemCore.SimpleHealthInfo
struct FSimpleHealthInfo
{
public:
	struct FAttributeInitializationData          MaxHealthFormula;                                  // 0x0(0x38)(Edit, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	class UHealthTypeData*                       HealthType;                                        // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    MaxHealth;                                         // 0x40(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentHealth;                                     // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5D2C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageLocalizationSettings
struct FDamageLocalizationSettings
{
public:
	class UTexture2D*                            CriticalTexture;                                   // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ResistTexture;                                     // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ImmuneTexture;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.ProtectionTimerSettings
struct FProtectionTimerSettings
{
public:
	float                                        TimerDuration;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Threshold;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaintainedMaxHealthPct;                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.LevelBasedDamageScale
struct FLevelBasedDamageScale
{
public:
	int32                                        LevelDifference;                                   // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HigherLevelAttackerDmgScale;                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowerLevelAttackerDmgScale;                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageModifierAttributeCollection
struct FDamageModifierAttributeCollection
{
public:
	class UGbxAttributeData*                     InstigatedModifier;                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxAttributeData*                     ReceivedModifier;                                  // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x270 (0x270 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageOverTimeInstance
struct FDamageOverTimeInstance
{
public:
	uint8                                        Pad_5D2F[0x220];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageData*                           DamageData;                                        // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D30[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageScaleConditionalData
struct FDamageScaleConditionalData
{
public:
	bool                                         bEvaluateUsingAttacker;                            // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         Condition;                                         // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddValueToDamage;                                 // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          DamageScale;                                       // 0x18(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageSourceHealthTypeModifier
struct FDamageSourceHealthTypeModifier
{
public:
	class UHealthTypeData*                       HealthTypeData;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAttributeData*                     InstigatedFriendlyFireHealingModifier;             // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.HitRegionDamagePreview
struct FHitRegionDamagePreview
{
public:
	struct FHitRegionInfo                        HitRegion;                                         // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D33[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x80 - 0x50)
// ScriptStruct GbxGameSystemCore.DynamicPhysicalAnimationTickFunction
struct FDynamicPhysicalAnimationTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_5D34[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ExplosionImpactOverride
struct FExplosionImpactOverride
{
public:
	class UMaterialInterface*                    DecalOverride;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D35[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageInfo
struct FDamageInfo
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactForce;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         InstigatorFeedback;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageModifierComponent*              DamageModifierComponent;                           // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, RepSkip, NativeAccessSpecifierPublic)
	bool                                         bApplyCriticalHitModsToAoEDamage;                  // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D37[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCriticalHitDamageOverrides           CriticalHitOverrides;                              // 0x4C(0x8)(Edit, BlueprintVisible, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D38[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageTypeExplosionAssociation
struct FDamageTypeExplosionAssociation
{
public:
	TSubclassOf<class UDamageType>               DamageType;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExplosionSizeSelectionData*           ExplosionSizeData;                                 // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.ExplosionSizeProperties
struct FExplosionSizeProperties
{
public:
	float                                        ExplosionSize;                                     // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFeedbackData*                         ExplosionFeedback;                                 // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ExplosionParticleSystem;                           // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       CensoredExplosionParticleSystem;                   // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           ExplosionAudioEvent;                               // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ExplosionImpact;                                   // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCensorThisExplosion : 1;                          // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseExplosionRadialBlur : 1;                       // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideTinnitusDuration : 1;                     // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_168 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5D3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRadialBlurSelection                  ExplosionRadialBlur;                               // 0x34(0xC)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	enum class EExplosionTinnitusDuration        TinnitusDuration;                                  // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxSignificanceEvent                 SignificanceEvent;                                 // 0x48(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxGameSystemCore.FeedbackDataFirstPersonImpulse
struct FFeedbackDataFirstPersonImpulse
{
public:
	bool                                         bUseDurationFromCameraShake;                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraShakeDurationEaseInWeight;                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EaseInDuration;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EaseOutDuration;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxEasingFunc                        EaseInFunc;                                        // 0x10(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxEasingFunc                        EaseOutFunc;                                       // 0x1C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RandomRotationOffset;                              // 0x28(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RotationExtent;                                    // 0x34(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOffsetRotationByDirection;                        // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RandomTranslationOffset;                           // 0x44(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TranslationExtent;                                 // 0x50(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomedEffectScale;                                 // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.LoopingShakeInfo
struct FLoopingShakeInfo
{
public:
	class APlayerController*                     AssociatedController;                              // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ContextObject;                                     // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          TimerHandle;                                       // 0x18(0x8)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               FeedbackLocation;                                  // 0x20(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D43[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// ScriptStruct GbxGameSystemCore.ShakeScaleAssociation
struct FShakeScaleAssociation
{
public:
	TSubclassOf<class UCameraShake>              CameraShake;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          BaseScale;                                         // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bContinuous;                                       // 0x40(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleDownOverTime;                                // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseScaleOverTimeCurve;                            // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D44[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ScaleOverTimeCurve;                                // 0x48(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          ContinuousScale;                                   // 0xC0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    ContinuousScaleCurve;                              // 0xF8(0x78)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.HapticFeedbackData
struct FHapticFeedbackData
{
public:
	class UHapticFeedbackEffect_Curve*           HapticFeedbackEffect;                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerHand                   Hand;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D46[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct GbxGameSystemCore.FeedbackTableRowHandle
struct FFeedbackTableRowHandle : public FDataTableRowHandle
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GbxGameSystemCore.FeedbackAssociationRow
struct FFeedbackAssociationRow : public FTableRowBase
{
public:
	class UFeedbackData*                         Feedback;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.TrackedFirstPersonComponent
struct FTrackedFirstPersonComponent
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D49[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.GameplayTagToValueMap
struct FGameplayTagToValueMap
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          ValueIfContextHasTag;                              // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct GbxGameSystemCore.GameResourcePool
struct FGameResourcePool
{
public:
	uint8                                        Pad_5D4A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameResourcePoolData*                 ResourcePoolData;                                  // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    MinValue;                                          // 0x10(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    MaxValue;                                          // 0x1C(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    PercentOfMaxValueReserved;                         // 0x28(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    ConsumptionRate;                                   // 0x34(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    ActiveRegenerationRate;                            // 0x40(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    OnIdleRegenerationRate;                            // 0x4C(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    OnIdleRegenerationDelay;                           // 0x58(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    OnDepletedIdleRegenerationDelay;                   // 0x64(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    PassiveRegenerationRate;                           // 0x70(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    PassivePercentRegenerationRate;                    // 0x7C(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    PassiveMissingPercentRegenerationRate;             // 0x88(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeInteger                  RegenerationDisabled;                              // 0x94(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0xA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastTotalRegenerationRateValue;                    // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastTotalPercentRegenerationRateValue;             // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastEffectiveMaxValue;                             // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxAttributeFloat                    PostAddedRegenerationRate;                         // 0xB0(0xC)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxAttributeFloat                    PostAddedPercentRegenerationRate;                  // 0xBC(0xC)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5D4C[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.ExternalResourcePoolInfo
struct FExternalResourcePoolInfo
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D4D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GbxGameSystemCore.GameResourceUserEvent
struct FGameResourceUserEvent
{
public:
	class UGameResourceData*                     ResourceData;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResourceNowDepleted;                             // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResourceNowNotDepleted;                          // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResourceNowFilled;                               // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResourceNowNotFilled;                            // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResourceNowRegenerating;                         // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResourceNowNotRegenerating;                      // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResourceNowDepleting;                            // 0x68(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResourceNowNotDepleting;                         // 0x78(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnResourceNowIdle;                                 // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.GameResourcePoolNet
struct FGameResourcePoolNet
{
public:
	class UGameResourcePoolManagerComponent*     Manager;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D4E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.GameStat
struct FGameStat
{
public:
	class UGameStatData*                         GameStat;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StatValue;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D50[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.QueuedGameStatEvent
struct FQueuedGameStatEvent
{
public:
	TWeakObjectPtr<class AActor>                 StatContext;                                       // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGameStatData>          GameStat;                                          // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D52[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x488 - 0x468)
// ScriptStruct GbxGameSystemCore.ActionState_AICharge
struct FActionState_AICharge : public FActionState_SimpleAnim
{
public:
	uint8                                        Pad_5D53[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.ExtraAnimationSettings
struct FExtraAnimationSettings
{
public:
	class FName                                  SkeletalMeshComponentName;                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimActionDef                        AnimDef;                                           // 0x8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AnimSlotOverride;                                  // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAnimSlotOverride;                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D55[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0xC8 - 0xC8)
// ScriptStruct GbxGameSystemCore.ActionState_BlueprintBase
struct FActionState_BlueprintBase : public FActionState_Base
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ConditionActionPair
struct FConditionActionPair
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.CoordinatedAppliedMesh
struct FCoordinatedAppliedMesh
{
public:
	uint8                                        Pad_5D56[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x268 (0x268 - 0x0)
// ScriptStruct GbxGameSystemCore.CoordinatedVectorParameter
struct FCoordinatedVectorParameter
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeCurveLinearColor              ParamValueOverTime;                                // 0x8(0x1C8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        bLoop : 1;                                         // Mask: 0x1, PropSize: 0x10x1D0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBlendFromInitialValue : 1;                        // Mask: 0x2, PropSize: 0x10x1D0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBlendUsingHSV : 1;                                // Mask: 0x4, PropSize: 0x10x1D0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_169 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5D57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    BlendCurve;                                        // 0x1D8(0x78)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        bSpecificMaterial : 1;                             // Mask: 0x1, PropSize: 0x10x250(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5D58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                SpecificMaterialList;                              // 0x258(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// ScriptStruct GbxGameSystemCore.CoordinatedScalarParameter
struct FCoordinatedScalarParameter
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    ParamValueOverTime;                                // 0x8(0x78)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ECoordinatedEffectParamScaleMode  ScaleMode;                                         // 0x80(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             WorldSpaceAxis;                                    // 0x81(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLoop : 1;                                         // Mask: 0x1, PropSize: 0x10x82(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBlendFromInitialValue : 1;                        // Mask: 0x2, PropSize: 0x10x82(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16B : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5D59[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    BlendCurve;                                        // 0x88(0x78)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        bApplyAttribute : 1;                               // Mask: 0x1, PropSize: 0x10x100(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleAttributeByValueOverTime : 1;                // Mask: 0x2, PropSize: 0x10x100(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16C : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5D5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ParamAttributeValue;                               // 0x108(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bSpecificMaterial : 1;                             // Mask: 0x1, PropSize: 0x10x140(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5D5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                SpecificMaterialList;                              // 0x148(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x3D0 (0x3D0 - 0x0)
// ScriptStruct GbxGameSystemCore.CoordinatedLightParameterData
struct FCoordinatedLightParameterData
{
public:
	class FName                                  LightName;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetColor : 1;                                     // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetIntensity : 1;                                 // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16E : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5D5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoordinatedVectorParameter           Color;                                             // 0x10(0x268)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCoordinatedScalarParameter           Intensity;                                         // 0x278(0x158)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.CoordinatedConditionalMaterialData
struct FCoordinatedConditionalMaterialData
{
public:
	class UMaterial*                             BaseMaterial;                                      // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeshElementIndex;                                  // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMatchMaterialStaticParameters : 1;                // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseGlobalInheritedMaterialParameters : 1;         // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritAllMaterialParameters : 1;                 // Mask: 0x4, PropSize: 0x10x18(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16F : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5D61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          InheritedMaterialParameters;                       // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GbxGameSystemCore.CoordinatedAudioData
struct FCoordinatedAudioData
{
public:
	class UWwiseEvent*                           WwiseEvent;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachmentName;                                    // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeactivateTime;                                    // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            RtpcParam;                                         // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    RtpcValueOverTime;                                 // 0x20(0x78)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.CoordinatedParticleSystemParameterData
struct FCoordinatedParticleSystemParameterData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleSystem;                                    // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCoordinatedScalarParameter>   ScalarParameters;                                  // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCoordinatedVectorParameter>   VectorParameters;                                  // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxGameSystemCore.CoordinatedParticleSystemData
struct FCoordinatedParticleSystemData
{
public:
	class UParticleSystem*                       ParticleSystem;                                    // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D63[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x10(0x30)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AttachmentName;                                    // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeactivateTime;                                    // 0x4C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCoordinatedScalarParameter>   ScalarParameters;                                  // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCoordinatedVectorParameter>   VectorParameters;                                  // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ECoordinatedParticleScaleMode     ScaleMode;                                         // 0x70(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyPlayerOwnerCanSee : 1;                        // Mask: 0x1, PropSize: 0x10x71(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForegroundLayer : 1;                              // Mask: 0x2, PropSize: 0x10x71(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritViewFlags : 1;                             // Mask: 0x4, PropSize: 0x10x71(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPermanent : 1;                                    // Mask: 0x8, PropSize: 0x10x71(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D64[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.DirectionActionData
struct FDirectionActionData
{
public:
	struct FNumericRange                         AngleRange;                                        // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x4D0 - 0x468)
// ScriptStruct GbxGameSystemCore.ActionState_DropshipSpawn
struct FActionState_DropshipSpawn : public FActionState_SimpleAnim
{
public:
	uint8                                        Pad_5D66[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.GibData
struct FGibData
{
public:
	int32                                        MaxCount;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelectionWeight;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideGlobalScale;                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinScale;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxScale;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Mesh;                                              // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*             MaterialOverride;                                  // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x480 - 0x468)
// ScriptStruct GbxGameSystemCore.ActionState_Launch
struct FActionState_Launch : public FActionState_SimpleAnim
{
public:
	uint8                                        Pad_5D6A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.LoopAnimData
struct FLoopAnimData
{
public:
	class UAnimSequenceBase*                     AnimStart;                                         // 0x0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     AnimLoop;                                          // 0x8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     AnimStop;                                          // 0x10(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x5B0 - 0x468)
// ScriptStruct GbxGameSystemCore.ActionState_Ragdoll
struct FActionState_Ragdoll : public FActionState_SimpleAnim
{
public:
	uint8                                        Pad_5D6B[0x148];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.AttachedObjectCache
struct FAttachedObjectCache
{
public:
	uint8                                        Pad_5D6D[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.AttachedObjectFollow
struct FAttachedObjectFollow
{
public:
	class FName                                  ObjectBoneName;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ObjectHoldBoneName;                                // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ObjectHoldBodyName;                                // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x80 - 0x20)
// ScriptStruct GbxGameSystemCore.MotionMatchedAnimationRow
struct FMotionMatchedAnimationRow : public FGbxAnimTableRow
{
public:
	struct FVector                               Forward;                                           // 0x20(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Up;                                                // 0x2C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x38(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x44(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OverrideForward;                                   // 0x50(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideForward;                                  // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OverrideUp;                                        // 0x60(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideUp;                                       // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RootBoneToRootBodyOffset;                          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             OffsetCalculationAxis;                             // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetCalculationAxisIsNegative;                  // 0x75(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D72[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SampleTime;                                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoseDriverStrength;                                // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.RandomActionPair
struct FRandomActionPair
{
public:
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D73[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x468 - 0x468)
// ScriptStruct GbxGameSystemCore.ActionState_StretchBones
struct FActionState_StretchBones : public FActionState_SimpleAnim
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.StretchBonesSettings
struct FStretchBonesSettings
{
public:
	bool                                         bUniformStretch;                                   // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxBlackboardKeySelector             TargetKey;                                         // 0x8(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x18(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretchBonesActorTrackingStyle   ActorTrackingStyle;                                // 0x24(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceToGround;                                    // 0x25(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D75[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceToGroundDistance;                             // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPredictionDistance;                             // 0x2C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GbxGameSystemCore.DataActionPair
struct FDataActionPair : public FDataActionPair_Base
{
public:
	struct FGameplayTag                          ActionKey;                                         // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.ExampleStruct
struct FExampleStruct
{
public:
	struct FGameplayTag                          ActionKey;                                         // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct GbxGameSystemCore.ActionStateNet
struct FActionStateNet
{
public:
	uint8                                        Pad_5D77[0x108];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxActionRegister
struct FGbxActionRegister
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EActionRegisterType               Type;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntValue;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ObjectValue;                                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameValue;                                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VecValue;                                          // 0x28(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D7B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxActionSlot
struct FGbxActionSlot
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D7C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxGameSystemCore.ForwardDynamicsNodeProfile
struct FForwardDynamicsNodeProfile
{
public:
	class UPhysicalAnimationProfileAsset*        ForwardDynamicsProfile;                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EForwardDynamicsActivation        ForwardDynamicsActivation;                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PhysicsAssetStrengthDefinitionProfileName;         // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetSimulationFrequency;                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSubstepCount;                                   // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTranslationDistanceUntilReset;                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearJointDivergentTolerence;                     // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldSpaceVelocityBlend;                           // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldSpaceAngularVelocityBlend;                    // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBypassSkelMeshSimulatePhysOption;                 // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStripAnimationFromNonSimulationRelevantBones;     // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreBoneScaling;                                // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D7F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OverrideWorldGravity;                              // 0x40(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalForce;                                     // 0x4C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableWorldGeometry;                              // 0x59(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D81[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESimulationSpace                  SimulationSpace;                                   // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideWorldGravity;                             // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CachedBoundsScale;                                 // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransferBoneVelocities;                           // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFreezeIncomingPoseOnStart;                        // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D83[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODThreshold;                                      // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODInterpolationSpeed;                             // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D84[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x180 - 0x140)
// ScriptStruct GbxGameSystemCore.GbxAnimNode_ApplyBoneModifyProfile
struct FGbxAnimNode_ApplyBoneModifyProfile : public FAnimNode_SkeletalControlBase
{
public:
	class UGbxBoneModifyProfile*                 Config;                                            // 0x140(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D85[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.GlobalBMPCachedTransform
struct FGlobalBMPCachedTransform
{
public:
	uint8                                        Pad_5D86[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x1A0 - 0x140)
// ScriptStruct GbxGameSystemCore.GbxAnimNode_CachedPoseBlend
struct FGbxAnimNode_CachedPoseBlend : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_5D87[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x730 - 0x5C0)
// ScriptStruct GbxGameSystemCore.GbxAnimNode_ForwardDynamics
struct FGbxAnimNode_ForwardDynamics : public FAnimNode_RigidBody
{
public:
	class UPhysicalAnimationProfileAsset*        ForwardDynamicsProfile;                            // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EForwardDynamicsActivation        ForwardDynamicsActivation;                         // 0x5C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PhysicsAssetStrengthDefinitionProfileName;         // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetSimulationFrequency;                         // 0x5D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSubstepCount;                                   // 0x5DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTranslationDistanceUntilReset;                  // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldSpaceVelocityBlend;                           // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldSpaceAngularVelocityBlend;                    // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JointAnchorPoseAlpha;                              // 0x5EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearJointDivergentTolerence;                     // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBypassSkelMeshSimulatePhysOption;                 // 0x5F4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStripAnimationFromNonSimulationRelevantBones;     // 0x5F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreBoneScaling;                                // 0x5F6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D8A[0x139];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxRefPoseBoneConstraint
struct FGbxRefPoseBoneConstraint
{
public:
	struct FBoneReference                        Bone;                                              // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D8D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x160 - 0x140)
// ScriptStruct GbxGameSystemCore.GbxAnimNode_RefPoseConstraints
struct FGbxAnimNode_RefPoseConstraints : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FGbxRefPoseBoneConstraint>     Constraints;                                       // 0x140(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D8E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.SimpleMotionState
struct FSimpleMotionState
{
public:
	enum class ESimpleMotionType                 MotionType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSpeed;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           SpeedControlCurve;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleTransformByValue : 1;                        // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleSpeedByValue : 1;                            // Mask: 0x2, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleAccelerationByValue : 1;                     // Mask: 0x4, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D91[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x208 (0x348 - 0x140)
// ScriptStruct GbxGameSystemCore.GbxAnimNode_SimpleMotionBoneControl
struct FGbxAnimNode_SimpleMotionBoneControl : public FAnimNode_SkeletalControlBase
{
public:
	float                                        ControlValue;                                      // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x144(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoActivate;                                     // 0x145(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPaused;                                           // 0x146(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateAfterRecovery;                            // 0x147(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        BoneToModify;                                      // 0x148(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        IdleSpeedControlValue;                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveSpeedControlValue;                           // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoverySpeedControlValue;                         // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             TranslationMode;                                   // 0x16C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x16D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D92[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IdleTranslation;                                   // 0x170(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActiveTranslation;                                 // 0x17C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    IdleTranslationState;                              // 0x188(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    ActiveTranslationState;                            // 0x1A8(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    RecoveryTranslationState;                          // 0x1C8(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0x1E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x1E9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D93[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              IdleRotation;                                      // 0x1EC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ActiveRotation;                                    // 0x1F8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionState                    IdleRotationState;                                 // 0x208(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    ActiveRotationState;                               // 0x228(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    RecoveryRotationState;                             // 0x248(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x269(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D96[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IdleScale;                                         // 0x26C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActiveScale;                                       // 0x278(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D97[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionState                    IdleScaleState;                                    // 0x288(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    ActiveScaleState;                                  // 0x2A8(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    RecoveryScaleState;                                // 0x2C8(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ControlImpulseSpeed;                               // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlImpulseMaxValue;                            // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlImpulseDecayDelay;                          // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlImpulseDecaySpeed;                          // 0x2F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D98[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x2D0 - 0x140)
// ScriptStruct GbxGameSystemCore.GbxAnimNode_StretchBones
struct FGbxAnimNode_StretchBones : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        StartBone;                                         // 0x140(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        EndBone;                                           // 0x158(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUniformStretch;                                   // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimatedTargetDistance;                            // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndAnimatedTargetDistance;                         // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x17C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D9A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUsingStretchDistance;                             // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchDistance;                                   // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceToGround;                                    // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceToGroundDistance;                             // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretchBonesMarkerMode           MarkerMode;                                        // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BoneToModify;                                      // 0x1A8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LookAtBone;                                        // 0x1C0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LookAtSocket;                                      // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAtLocation;                                    // 0x1E0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAXIS                                 LookAt_Axis;                                       // 0x1EC(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAXIS                                 EndLookAt_Axis;                                    // 0x1FC(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLookUpAxis;                                    // 0x20C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAXIS                                 LookUp_Axis;                                       // 0x210(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LookAtClamp;                                       // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpolationBlend               InterpolationType;                                 // 0x224(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpolationTime;                                 // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTriggerThreashold;                    // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DA1[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxAnimPoseMatch
struct FGbxAnimPoseMatch
{
public:
	TArray<class FName>                          PoseMatchBones;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5DA2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.AnimStateGroup
struct FAnimStateGroup
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          States;                                            // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.RuntimeStateMachineData
struct FRuntimeStateMachineData
{
public:
	uint8                                        Pad_5DA3[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.BakedMachineInfo
struct FBakedMachineInfo
{
public:
	uint8                                        Pad_5DA4[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxAnimTableMapItem
struct FGbxAnimTableMapItem
{
public:
	bool                                         bCanUse;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       LastFrame;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DA6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxAttributeDelegateBindingHandle
struct FGbxAttributeDelegateBindingHandle
{
public:
	uint8                                        Pad_5DA7[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.PropertyToAttributeMapping
struct FPropertyToAttributeMapping
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PropertyGuid;                                      // 0x8(0x10)(Edit, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       AttributeDataReference;                            // 0x18(0x18)(Edit, DisableEditOnInstance, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.BoneModifyState_RepData
struct FBoneModifyState_RepData
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.BoneModifyProfileData
struct FBoneModifyProfileData
{
public:
	class UGbxBoneModifyProfile*                 Profile;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneModifyState_RepData>      States;                                            // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.BoneModifyInfo
struct FBoneModifyInfo
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x14(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x20(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DAA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxGameSystemCore.BoneModifyState
struct FBoneModifyState
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxBoneModifyProfile_PoseMode    PoseMode;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartActive;                                      // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DAC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlphaBlend                           Blend;                                             // 0x10(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneModifyInfo>               Bones;                                             // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxGameSystemCore.BoneModifyTransition
struct FBoneModifyTransition
{
public:
	struct FBoneReference                        BoneRef;                                           // 0x0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneModifyTransition_TransformType Type;                                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlphaBlend                           Blend;                                             // 0x20(0x38)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Base;                                              // 0x58(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Desired;                                           // 0x64(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x208 (0x208 - 0x0)
// ScriptStruct GbxGameSystemCore.MantleCheckData
struct FMantleCheckData
{
public:
	uint8                                        Pad_5DAE[0x208];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct GbxGameSystemCore.MantleCheckTypeData
struct FMantleCheckTypeData
{
public:
	uint8                                        Pad_5DAF[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0xBC - 0xB8)
// ScriptStruct GbxGameSystemCore.MantleCheckTypeData_MantleUp
struct FMantleCheckTypeData_MantleUp : public FMantleCheckTypeData
{
public:
	uint8                                        Pad_5DB0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C (0x3C - 0x0)
// ScriptStruct GbxGameSystemCore.MantleStandData
struct FMantleStandData
{
public:
	uint8                                        Pad_5DB1[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxGameSystemCore.DistanceMatchingInfo
struct FDistanceMatchingInfo
{
public:
	TMap<int32, struct FFloatCurve>              DistanceCurveMap;                                  // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DB2[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GbxGameSystemCore.CachedStoppingInfo
struct FCachedStoppingInfo
{
public:
	uint8                                        Pad_5DB3[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0xC0 - 0x70)
// ScriptStruct GbxGameSystemCore.StopDistanceMatchingInfo
struct FStopDistanceMatchingInfo : public FDistanceMatchingInfo
{
public:
	TMap<int32, struct FCachedStoppingInfo>      StoppingInfoMap;                                   // 0x70(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationCollectionCustomColorData
struct FCustomizationCollectionCustomColorData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetColor : 1;                                     // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetSplitColor : 1;                                // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_170 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5DB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xC(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SplitColor;                                        // 0x1C(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DB8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationCustomFloatEntry
struct FCustomizationCustomFloatEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomizationCustomFloatType     Type;                                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParamName;                                         // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxCustomizationTargetData*>   CustomizationTargets;                              // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationCustomTextureData
struct FCustomizationCustomTextureData
{
public:
	class FName                                  MaterialSlotName;                                  // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialParameterName;                             // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              Texture;                                           // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationCustomTextureDataList
struct FCustomizationCustomTextureDataList
{
public:
	TArray<struct FCustomizationCustomTextureData> List;                                              // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.MaterialArray
struct FMaterialArray
{
public:
	TArray<class UMaterialInterface*>            Materials;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationInheritedTextureBaseMaterial
struct FCustomizationInheritedTextureBaseMaterial
{
public:
	class UGbxCustomizationTargetData*           Target;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DBD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    BaseMaterial;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.InheritedCustomizationTextureExtraParam
struct FInheritedCustomizationTextureExtraParam
{
public:
	class UGbxCustomizationTargetData*           Target;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParamName;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              Texture;                                           // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationTextureInheritanceSettings
struct FCustomizationTextureInheritanceSettings
{
public:
	TArray<class FName>                          OnlyInheritCustomizationTextureParameters;         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    BaseMaterial;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationInheritedTextureBaseMaterial> CustomizationTargetSpecificBaseMaterials;          // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInheritedCustomizationTextureExtraParam> ExtraParams;                                       // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationColorApplication
struct FCustomizationColorApplication
{
public:
	bool                                         bUseDefaultColor;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultSplitColor;                             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportsSplitColor;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DC1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          AppliedColor;                                      // 0x4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SplitColor;                                        // 0x14(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultColor;                                      // 0x24(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultSplitColor;                                 // 0x34(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationLinkedParameterEntry
struct FCustomizationLinkedParameterEntry
{
public:
	TArray<struct FCustomizationLinkedParameter> LinkedParameters;                                  // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGbxCustomizationTargetData*           LinkedParameterSource;                             // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCustomizationTargetData*           LinkedParameterTarget;                             // 0x18(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxCustomizationTargetData*>   LinkedParameterTargets;                            // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationColorEntry
struct FCustomizationColorEntry
{
public:
	TArray<class UGbxCustomizationTargetData*>   ColorCustomizationTargets;                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  ColorCustomizationParameter;                       // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SplitColorCustomizationParameter;                  // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ColorCustomizationDisplayName;                     // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x1C (0x28 - 0xC)
// ScriptStruct GbxGameSystemCore.GbxCustomizationContainerEntry
struct FGbxCustomizationContainerEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_5DC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCustomizationData*                 CustomizationData;                                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OptionalCustomizationId;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCustomizationData*                 ClientCachedCustomizationData;                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxCustomizationCacheEntry
struct FGbxCustomizationCacheEntry
{
public:
	TArray<class UObject*>                       AssetRefs;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UGbxCustomizationData*                 CustomizationData;                                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0xD8 - 0xB0)
// ScriptStruct GbxGameSystemCore.GbxCustomizationContainer
struct FGbxCustomizationContainer : public FFastArraySerializer
{
public:
	TArray<struct FGbxCustomizationContainerEntry> Customizations;                                    // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGbxCustomizationCacheEntry>   CustomizationCache;                                // 0xC0(0x10)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	class UGbxCustomizationComponent*            Owner;                                             // 0xD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationAssetInfo
struct FCustomizationAssetInfo
{
public:
	class FName                                  AssetReferenceTargetName;                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       AssetReference;                                    // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationSocketRemapEntry
struct FCustomizationSocketRemapEntry
{
public:
	class FName                                  MappedName;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UniqueSocketName;                                  // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationAssetEntry
struct FCustomizationAssetEntry
{
public:
	class UGbxCustomizationTargetData*           CustomizationTarget;                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationAssetInfo>       CustomizationAssetInfoReferences;                  // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FSoftClassPath>                CustomizationClassReferences;                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          CustomizationActiveBoneModifyStates;               // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          CustomizationInactiveBoneModifyStates;             // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationSocketRemapEntry> SocketRemappings;                                  // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         LoadForPreview;                                    // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DC9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationCustomFloatOverrideEntry
struct FCustomizationCustomFloatOverrideEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DCA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationAssetMorphTargetEntry
struct FCustomizationAssetMorphTargetEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DCB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.CustomizationStreamingEntry
struct FCustomizationStreamingEntry
{
public:
	class UGbxCustomizationData*                 CustomizationData;                                 // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DCC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxCustomizationComponent*>    WaitingComponents;                                 // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DCE[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageSurfaceModifier
struct FDamageSurfaceModifier
{
public:
	enum class EDamageSurfaceType                PhysicalSurface;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DD0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          Modifier;                                          // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxBlueprintlegateBinding
struct FGbxBlueprintlegateBinding
{
public:
	class FString                                SubobjectPath;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FParsedProperty                       ParsedDelegateOwnerPath;                           // 0x10(0x80)(NoDestructor, NativeAccessSpecifierPublic)
	struct FParsedProperty                       ParsedDelegatePath;                                // 0x90(0x80)(NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  FunctionNameToBind;                                // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxGameSystemCore.ActiveGbxFeedbackEffect
struct FActiveGbxFeedbackEffect
{
public:
	class UGbxFeedbackData*                      ActiveData;                                        // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AGbxPlayerController>   Controller;                                        // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DD4[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                SourceContext;                                     // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DD5[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.GbxFlag
struct FGbxFlag
{
public:
	uint8                                        Pad_5DD6[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxFlagEval
struct FGbxFlagEval
{
public:
	class UGbxFlagData*                          FlagData;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxFlagEval                      EvalType;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5DD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          TimeSeconds;                                       // 0x10(0x38)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.FlagPropertyTestStruct
struct FFlagPropertyTestStruct
{
public:
	struct FGbxFlag                              TestFlag;                                          // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.StartupAssetTypeData
struct FStartupAssetTypeData
{
public:
	class FName                                  Path;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ClassType;                                         // 0x8(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                ResolvedClassType;                                 // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBlueprint;                                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DDA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AssetCategory;                                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.SharedPickupInventoryActor
struct FSharedPickupInventoryActor
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DDB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.MenuStash
struct FMenuStash
{
public:
	TArray<class UBaseMenuStackMenuInfo*>        StashedMenus;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.DefaultExplosionSettings
struct FDefaultExplosionSettings
{
public:
	float                                        ExplosionSize;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRadialBlurSelection                  RadialBlur;                                        // 0x4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxHUDFeedbackImpulse
struct FGbxHUDFeedbackImpulse
{
public:
	struct FVector                               Velocity;                                          // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationalVelocity;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Springiness;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCircularMotion;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCameraTranslation;                           // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DDE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraTranslationWeight;                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCameraRotation;                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DDF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraRotationWeight;                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyOriginWorldSpace;                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OriginWorldSpace;                                  // 0x2C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OriginWorldSpaceWeight;                            // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tag;                                               // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DE2[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxInputKey
struct FGbxInputKey
{
public:
	uint8                                        Pad_5DE3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxInputAxisKey
struct FGbxInputAxisKey
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale3D;                                           // 0x18(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DE4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GbxGameSystemCore.GbxInputAxis
struct FGbxInputAxis : public FGbxInputKey
{
public:
	TArray<struct FGbxInputAxisKey>              Keys;                                              // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GbxGameSystemCore.GbxInputButton
struct FGbxInputButton : public FGbxInputKey
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxInputEvent
struct FGbxInputEvent
{
public:
	uint8                                        Pad_5DE5[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x68 - 0x50)
// ScriptStruct GbxGameSystemCore.GbxInputEvent_Axis_Core
struct FGbxInputEvent_Axis_Core : public FGbxInputEvent
{
public:
	uint8                                        Pad_5DE6[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct GbxGameSystemCore.GbxInputEvent_Button_Core
struct FGbxInputEvent_Button_Core : public FGbxInputEvent
{
public:
	uint8                                        Pad_5DE7[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x88 - 0x50)
// ScriptStruct GbxGameSystemCore.GbxInputEvent_Button_DoubleTap
struct FGbxInputEvent_Button_DoubleTap : public FGbxInputEvent
{
public:
	uint8                                        Pad_5DE9[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x88 - 0x88)
// ScriptStruct GbxGameSystemCore.GbxInputEvent_Button_DoubleTap4Way
struct FGbxInputEvent_Button_DoubleTap4Way : public FGbxInputEvent_Button_DoubleTap
{
public:
};

// 0x0 (0x110 - 0x110)
// ScriptStruct GbxGameSystemCore.GbxInputEvent_Button_PressRelease
struct FGbxInputEvent_Button_PressRelease : public FGbxInputEvent_Button_Core
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxInputFeelDef
struct FGbxInputFeelDef
{
public:
	uint8                                        Pad_5DEB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct GbxGameSystemCore.GbxInputFeelDef_DoubleTap
struct FGbxInputFeelDef_DoubleTap : public FGbxInputFeelDef
{
public:
	uint8                                        Pad_5DEC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x58 - 0x10)
// ScriptStruct GbxGameSystemCore.GbxInputFeelDef_VectorAxis
struct FGbxInputFeelDef_VectorAxis : public FGbxInputFeelDef
{
public:
	uint8                                        Pad_5DED[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxObjectReplicatorProxyItem
struct FGbxObjectReplicatorProxyItem
{
public:
	TScriptInterface<class IGbxReplicatorProxyData> Object;                                            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UActorComponent*                       Component;                                         // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxObjectReplicatorProxy
struct FGbxObjectReplicatorProxy
{
public:
	TArray<struct FGbxObjectReplicatorProxyItem> Items;                                             // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5DEF[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.PhysicalMaterialImpactPair
struct FPhysicalMaterialImpactPair
{
public:
	class UPhysicalMaterial*                     MaterialA;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     MaterialB;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct GbxGameSystemCore.RigidBodyImpactSettings
struct FRigidBodyImpactSettings
{
public:
	TMap<struct FPhysicalMaterialImpactPair, class UImpactData*> RigidBodyImpactData;                               // 0x0(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class UPhysicalMaterial*, class UImpactData*> DefaultRigidBodyImpactData;                        // 0x50(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            ImpactSpeedAudioParameter;                         // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            ImpactMassAudioParameter;                          // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.DestructionForceSmoothing
struct FDestructionForceSmoothing
{
public:
	float                                        MaxResultantVelocity;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizationFactor;                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalScale;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.SurfaceTypeInfo
struct FSurfaceTypeInfo
{
public:
	enum class EDamageSurfaceType                DamageSurfaceType;                                 // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseSwitch*                          AudioMaterialSwitch;                               // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxGameSystemCore.RecentlyMetPlayer
struct FRecentlyMetPlayer
{
public:
	struct FUniqueNetIdRepl                      FirstPartyPlayerId;                                // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      ShiftPlayerId;                                     // 0x28(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseShiftId;                                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DF2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.PlayerInputBinding_Button
struct FPlayerInputBinding_Button
{
public:
	class FName                                  RebindName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          KeyNames;                                          // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.PlayerInputBinding_Axis_Key
struct FPlayerInputBinding_Axis_Key
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale3D;                                           // 0x8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DF5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.PlayerInputBinding_Axis
struct FPlayerInputBinding_Axis
{
public:
	class FName                                  RebindName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerInputBinding_Axis_Key>  Keys;                                              // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.PlayerInputBinding_Schema
struct FPlayerInputBinding_Schema
{
public:
	class FName                                  SchemaName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerInputBinding_Button>    ButtonBindings;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlayerInputBinding_Axis>      AxisBindings;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.PlayerInputBindings
struct FPlayerInputBindings
{
public:
	TArray<struct FPlayerInputBinding_Schema>    Schemas;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x3B0 (0x3B0 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxQuery
struct FGbxQuery
{
public:
	class AActor*                                Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       Params;                                            // 0x8(0xB8)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxQueryOptions                      Options;                                           // 0xC0(0x238)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                PrimaryContext;                                    // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComp;                                    // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavComponent*                         NavComp;                                           // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DF8[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.GbxSignificanceEventLimitData
struct FGbxSignificanceEventLimitData
{
public:
	int32                                        LimitCount;                                        // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimitTimeSec;                                      // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InfluenceMultiplier;                               // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxSignificanceEventLimits
struct FGbxSignificanceEventLimits
{
public:
	struct FGbxSignificanceEventLimitData        Low;                                               // 0x0(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxSignificanceEventLimitData        Med;                                               // 0xC(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxSignificanceEventLimitData        High;                                              // 0x18(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.GbxSignificanceEventData
struct FGbxSignificanceEventData
{
public:
	bool                                         bTestVisibility;                                   // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlwaysSignificantDistance;                         // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinScreenPercent;                                  // 0xC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistantThreshold;                                  // 0x10(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerSourceInfluence;                             // 0x14(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAggressiveLOD;                                 // 0x18(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxSignificanceEventLimits           Limits;                                            // 0x1C(0x24)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.CachedInterp
struct FCachedInterp
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Interp;                                            // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DFC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.SimpleMotionInstanceState
struct FSimpleMotionInstanceState
{
public:
	float                                        Speed;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMotionReversed : 1;                               // Mask: 0x1, PropSize: 0x10x4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReachedTarget : 1;                                // Mask: 0x2, PropSize: 0x10x4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReachedMaxSpeed : 1;                              // Mask: 0x4, PropSize: 0x10x4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInTransition : 1;                                 // Mask: 0x8, PropSize: 0x10x4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DFE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.GestaltPartFoleyAccessory
struct FGestaltPartFoleyAccessory
{
public:
	int32                                        Priority;                                          // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           WwiseEvent;                                        // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachmentPoint;                                   // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.GestaltChildPartData
struct FGestaltChildPartData
{
public:
	class UGestaltPartData*                      GestaltPart;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Probability;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5E00[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.GestaltRandomPartData
struct FGestaltRandomPartData
{
public:
	class UGestaltPartData*                      GestaltPart;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Weight;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5E02[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.ReplicatedGestaltPartsData
struct FReplicatedGestaltPartsData
{
public:
	uint8                                        Pad_5E03[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.GesaltOptionalPartData
struct FGesaltOptionalPartData
{
public:
	class UGestaltPartData*                      GestaltPart;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Probability;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSuppressChildParts;                               // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5E04[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.BMPOverrideBone
struct FBMPOverrideBone
{
public:
	struct FBoneReference                        BoneRef;                                           // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E06[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.BMPOverride
struct FBMPOverride
{
public:
	TArray<struct FBMPOverrideBone>              Bones;                                             // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EGlobalBoneModifyProfile_PoseMode PoseMode;                                          // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E07[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.HitReactionPair
struct FHitReactionPair
{
public:
	class UHitReactionTag*                       Tag;                                               // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                Action;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.HitReactionCondition
struct FHitReactionCondition
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHitReactionConditionContext      Context;                                           // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHitReactionConditionContext      OptionalContext;                                   // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E09[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.HitReactionCooldownData
struct FHitReactionCooldownData
{
public:
	class UHitReactionTag*                       Tag;                                               // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHitReactionTag*                       TagFallback;                                       // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCooldownFromStartTime;                            // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E0B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.HitReactionMapItem
struct FHitReactionMapItem
{
public:
	class UHitReactionTag*                       FromTag;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitReactionTag*                       ToTag;                                             // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxGameSystemCore.HitReactionParams
struct FHitReactionParams
{
public:
	class UDamageComponent*                      Receiver;                                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageCauserComponent*                Causer;                                            // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageAmount;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        DamageType;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageSource*                         DamageSource;                                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x28(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitRegionData*                        HitRegion;                                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HitBoneIndex;                                      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x44(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCooldowns;                                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceInterruptSelf;                               // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E0E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x290 (0x290 - 0x0)
// ScriptStruct GbxGameSystemCore.HitReactionState
struct FHitReactionState
{
public:
	uint8                                        Pad_5E0F[0x130];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UHitReactionData*                      HitReactionData;                                   // 0x130(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UHitReactionTag*>               NoLockTags;                                        // 0x138(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UHitReactionTag*                       BackupDeathTag;                                    // 0x148(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                DefaultDeathAction;                                // 0x150(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCensorDeaths;                                     // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHitReactionData*                      CurrHitReactionData;                               // 0x160(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDamageComponent*                      DamageComp;                                        // 0x168(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAIDodgeComponent*                     DodgeComp;                                         // 0x170(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxActionComponent*                   ActionComp;                                        // 0x178(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                       BrainComp;                                         // 0x180(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DeathOverrideId;                                   // 0x188(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHitReactionTag*                       DeathOverride;                                     // 0x190(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UHitReactionLayer>> LiveLayers;                                        // 0x198(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UHitReactionLayer>> DeathLayers;                                       // 0x1A8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class UHitReactionTag*, float>          TagTimeStartMap;                                   // 0x1B8(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class UHitReactionTag*, float>          TagTimeEndMap;                                     // 0x208(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UHitReactionTag*                       ActiveTag;                                         // 0x258(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E14[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitReactionParams>            Hits;                                              // 0x270(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class AGbxCharacter*                         SoundCharacter;                                    // 0x280(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E16[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.DamageReactionEvent
struct FDamageReactionEvent
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EventHealthPercent;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageReactionEventType          EVENTTYPE;                                         // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageFilter*                         Filter;                                            // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageTime;                                        // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetriggerDelay;                                    // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTriggerCount;                                   // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DamageBoneName;                                    // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeDamageBoneChildren : 1;                    // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCensored : 1;                                     // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTriggerOnlyOnDeath : 1;                           // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E1B[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxGameSystemCore.HitRegionState
struct FHitRegionState
{
public:
	class UHitRegionData*                        HitRegion;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          AssociatedComponentNames;                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FDamageReactionEvent>          DamageEvents;                                      // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        StateIndex;                                        // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           AssociatedPrimitives;                              // 0x30(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UChildActorComponent*>          AssociatedChildActorComponents;                    // 0x40(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        MaxHealth;                                         // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentHealth;                                     // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x58(0x18)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.HitRegionHealthParams
struct FHitRegionHealthParams
{
public:
	float                                        OwnerHealthPercent;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameResourcePoolData*                 ResourcePool;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHitRegionDamageRule              DamageRule;                                        // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E20[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.HomingTargetedActorInfo
struct FHomingTargetedActorInfo
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProjectileCount;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E23[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.InspectionInfo
struct FInspectionInfo
{
public:
	uint8                                        Pad_5E24[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.ImpactTriggerInfo
struct FImpactTriggerInfo
{
public:
	float                                        RigidBodyRefireDelay;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RigidBodyMinimumVelocity;                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.ImpactEffectEventInfo
struct FImpactEffectEventInfo
{
public:
	class AActor*                                InstigatorActor;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                HitActor;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     HitMaterial;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E27[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ImpactFXManagerTrackingData
struct FImpactFXManagerTrackingData
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x50 - 0x48)
// ScriptStruct GbxGameSystemCore.InstigatorAttributeEffectData
struct FInstigatorAttributeEffectData : public FAttributeEffectData
{
public:
	enum class EInstigatorAttributeEffectAttributeToModifyContextSource AttributeToModifyContextSource;                    // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInstigatorAttributeEffectModifierValueContext ModifierValueContext;                              // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E29[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct GbxGameSystemCore.MantleActionData
struct FMantleActionData
{
public:
	enum class EMantleType                       Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                Animation;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightMinimum;                                     // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlignTime;                                         // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HorizontalCurve;                                   // 0x18(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    VerticalCurve;                                     // 0x90(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        PercentThroughAnimationToFinishMantle;             // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlignRotation : 1;                                // Mask: 0x1, PropSize: 0x10x10C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMustLookAt : 1;                                   // Mask: 0x2, PropSize: 0x10x10C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E2B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GbxGameSystemCore.MantleGlobalData
struct FMantleGlobalData
{
public:
	int32                                        DistanceToLookAheadForWalls;                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootCollisionHeight;                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadCollisionHeight;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinWallSlope;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngleToKeepMantleCache;                         // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToHoldValidClimbLocationSeconds;               // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDegreeAngleFromForward;                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAngleRange;                                    // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowPromptWhenAvailable : 1;                      // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_171 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5E2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayBeforeShowingPrompt;                          // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AActor>>            ValidActorClasses;                                 // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AActor>>            InvalidActorClasses;                               // 0x38(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UPrimitiveComponent>> ValidPrimitiveComponentClasses;                    // 0x48(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<enum class EMovementMode>             ValidMovementModes;                                // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MaxAscendingSpeedZ;                                // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDescendingSpeedZ;                               // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinLedgeHeightToStillAllowMantle;                  // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxMantleTraceHeightFromFeet;                      // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPossibleLedgeHeight;                            // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPossibleLedgeDistance;                          // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientValidationTolerance;                         // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPassiveMantleHeight_Default;                    // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPassiveMantleHeight_ForwardInput;               // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreTeamCollision;                              // 0x8C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E2E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.ModifierMathAttributeValueResolverStackEntry
struct FModifierMathAttributeValueResolverStackEntry
{
public:
	enum class EGbxAttributeModifierType         ModifierType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ModifierValue;                                     // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GbxGameSystemCore.MontageLoopHelper
struct FMontageLoopHelper
{
public:
	uint8                                        Pad_5E30[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.MontageLoopRecord
struct FMontageLoopRecord
{
public:
	uint8                                        Pad_5E31[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxGameSystemCore.OrbitOscillationInfo
struct FOrbitOscillationInfo
{
public:
	struct FRuntimeFloatCurve                    Cycle;                                             // 0x0(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        OverrideDuration;                                  // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentTime;                                       // 0x7C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.PawnAttachmentQueryResult
struct FPawnAttachmentQueryResult
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                AttachBase;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.AttachSlotAnimSet
struct FAttachSlotAnimSet
{
public:
	TSoftObjectPtr<class UObject>                AssociatedCharacter;                               // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAnimSet*                           AnimSet;                                           // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.PawnSceneAttachmentInfo
struct FPawnSceneAttachmentInfo
{
public:
	bool                                         bAttachToBaseOwner;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainWorldLocation;                            // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyMeshOffset;                                  // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E33[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AttachOffset;                                      // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddOffsetFromSocket;                              // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketNameForAdditionalOffset;                     // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.PawnAttachmentTransition
struct FPawnAttachmentTransition
{
public:
	TSubclassOf<class UGbxAction>                BaseAction;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                PawnAction;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceStopTransitionActions;                       // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentTransitionTiming       AttachTiming;                                      // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAttachInfo;                               // 0x12(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E35[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPawnSceneAttachmentInfo              AttachInfo;                                        // 0x18(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxCondition*                         Conditions;                                        // 0x40(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x68 - 0x48)
// ScriptStruct GbxGameSystemCore.PawnDetachTransition
struct FPawnDetachTransition : public FPawnAttachmentTransition
{
public:
	bool                                         bValidateDetachLocation;                           // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ValidationMaxOffset;                               // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValidationToleranceSize;                           // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bComputeDetachLocationFromAction;                  // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbsoluteDetachLocation;                           // 0x55(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E37[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DetachLocationOffset;                              // 0x58(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E38[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x48 - 0x48)
// ScriptStruct GbxGameSystemCore.PawnAttachTransition
struct FPawnAttachTransition : public FPawnAttachmentTransition
{
public:
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.PawnAttachSlotState
struct FPawnAttachSlotState
{
public:
	class UPawnAttachSlotComponent*              Owner;                                             // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class APawn*                                 Pawn;                                              // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AController*                           Controller;                                        // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EPawnAttachStatus                 Status;                                            // 0x18(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSkipDetachPlacement;                              // 0x19(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSkipStopTransitionAction;                         // 0x1A(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E39[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DetachTransitionIndex;                             // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E3A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.PhysicalAnimationBoneData
struct FPhysicalAnimationBoneData
{
public:
	class FName                                  BodyName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChildren;                                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsLocalSimulation : 1;                            // Mask: 0x1, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_172 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5E3B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OrientationStrength;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularVelocityStrength;                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionStrength;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityStrength;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E3D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GbxGameSystemCore.BoneFatigueParams
struct FBoneFatigueParams
{
public:
	float                                        CurrentFatigue;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FatigueDissipationRate;                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E3E[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxGameSystemCore.PropertyUtilsTestStruct
struct FPropertyUtilsTestStruct
{
public:
	float                                        FloatProp;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatPropStaticArray[0x3];                         // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FloatPropDynamicArray;                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UPropertyUtilsTestContext*             ObjectProp;                                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPropertyUtilsTestContext*             ObjectPropStaticArray[0x3];                        // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPropertyUtilsTestContext*>     ObjectPropDynamicArray;                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       DoubleProp;                                        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Int8Prop;                                          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UInt8Prop;                                         // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        Int16Prop;                                         // 0x5A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UInt16Prop;                                        // 0x5C(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E3F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Int32Prop;                                         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UInt32Prop;                                        // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Int64Prop;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       UInt64Prop;                                        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x50 - 0x40)
// ScriptStruct GbxGameSystemCore.ArticulatedRigidBodyState
struct FArticulatedRigidBodyState : public FRigidBodyState
{
public:
	class FName                                  BodyName;                                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E40[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.RagdollReplicationData
struct FRagdollReplicationData
{
public:
	uint8                                        Pad_5E44[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArticulatedRigidBodyState>    Bodies;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.RecentlyCausedDamageInstance
struct FRecentlyCausedDamageInstance
{
public:
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   DamageLocation;                                    // 0x10(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalDamage;                                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DirtyCounter;                                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E46[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHitRegionData*                        HitRegion;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecentDamageFlags                DamageFlags;                                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DamagedActor;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E49[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.ReferenceActorClasses
struct FReferenceActorClasses
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ActorAsset;                                        // 0x8(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.RelativeDirectionData
struct FRelativeDirectionData
{
public:
	enum class ERelativeDirectionType            RelativeDirection;                                 // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ConeAroundDirection;                               // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSnapToCone;                                       // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              AdditionalRotation;                                // 0x44(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.EmitterWwiseEventRTPCParam
struct FEmitterWwiseEventRTPCParam
{
public:
	class UWwiseRtpc*                            RTPC;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E4E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxGameSystemCore.EmitterWwiseEvent
struct FEmitterWwiseEvent
{
public:
	class UObject*                               ParamsProvider;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           Event;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEmitterWwiseEventRTPCParam>   RTPCs;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UWwiseSwitch*>                  Switches;                                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               PlaybackLocation;                                  // 0x30(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E51[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.EmitterColorParam
struct FEmitterColorParam
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Value;                                             // 0x8(0x4)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E52[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.EmitterVectorParam
struct FEmitterVectorParam
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E53[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.EmitterFloatParam
struct FEmitterFloatParam
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E55[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.ReplicatedEmitterTemplateOptions
struct FReplicatedEmitterTemplateOptions
{
public:
	class UParticleSystem*                       DefaultTemplate;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       CensoredTemplate;                                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEligibleForCensoring;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E56[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxGameSystemCore.SceneComponentSwitchRecord
struct FSceneComponentSwitchRecord
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       ParentComponent;                                   // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneBodySwitchAction*                DetachAction;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E57[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.ScreenParticleInitParams
struct FScreenParticleInitParams
{
public:
	class UParticleSystem*                       Template;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHideWhenFinished : 1;                             // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDestroyWhenFinished : 1;                          // Mask: 0x2, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyOwnerSee : 1;                                 // Mask: 0x4, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysVisible : 1;                                // Mask: 0x8, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowMultipleInstances : 1;                       // Mask: 0x10, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTickEvenWhenPaused : 1;                           // Mask: 0x20, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHideDuringInGameMenu : 1;                         // Mask: 0x40, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDepthPriorityWorld : 1;                           // Mask: 0x80, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ContentDims;                                       // 0xC(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParticleDepth;                                     // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScreenParticleScalingMode        ScalingMode;                                       // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tag;                                               // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OwnerOverride;                                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.ParticlePropertyTracker
struct FParticlePropertyTracker
{
public:
	class UParticlePropertyTrackingData*         TrackingData;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       Template;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatParamValue;                                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastUpdateTime;                                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Material;                                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialPropertyName;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxGameSystemCore.ScreenParticleRecord
struct FScreenParticleRecord
{
public:
	uint8                                        Pad_5E61[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Template;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              Component;                                         // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E62[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.SharedAnimInstanceData
struct FSharedAnimInstanceData
{
public:
	uint8                                        Pad_5E63[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.SpawnPatternInputs
struct FSpawnPatternInputs
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaseLocation;                                      // 0x10(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              BaseRotation;                                      // 0x1C(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               IncomingImpulse;                                   // 0x28(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E65[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.StanceVectorValue
struct FStanceVectorValue
{
public:
	enum class EStanceValueOverrideType          ValueType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Value;                                             // 0x4(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ConditionalStance
struct FConditionalStance
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceDataProvider*                   StanceProvider;                                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.StanceStack
struct FStanceStack
{
public:
	uint8                                        Pad_5E69[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Owner;                                             // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EStanceStackLayer                 Top;                                               // 0x18(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceDataProvider*                   Stack[0x4];                                        // 0x20(0x20)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EStanceStackLayer                 LayerCurr;                                         // 0x40(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceData*                           StanceCurr;                                        // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x118 (0x120 - 0x8)
// ScriptStruct GbxGameSystemCore.BalanceFormulaDefinedValueRow
struct FBalanceFormulaDefinedValueRow : public FAttributeDefinedValueRow
{
public:
	struct FAttributeInitializationData          Multiplier;                                        // 0x8(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          Level;                                             // 0x40(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          Power;                                             // 0x78(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          Offset;                                            // 0xB0(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          Scalar;                                            // 0xE8(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct GbxGameSystemCore.RandomValueRow
struct FRandomValueRow : public FAttributeDefinedValueRow
{
public:
	struct FAttributeInitializationData          RNG_LowerBound;                                    // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          RNG_UpperBound;                                    // 0x40(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIntegerOnlyValues;                                // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          OptionalOutputMinValue;                            // 0x80(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampToOutputMinValue;                            // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          OptionalOutputMaxValue;                            // 0xC0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampToOutputMaxValue;                            // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E71[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x88 - 0x8)
// ScriptStruct GbxGameSystemCore.GbxParamDefinedSingleValueRow
struct FGbxParamDefinedSingleValueRow : public FAttributeDefinedValueRow
{
public:
	struct FGbxParam                             Value;                                             // 0x8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct GbxGameSystemCore.AttributeDefinedSingleValueRow
struct FAttributeDefinedSingleValueRow : public FAttributeDefinedValueRow
{
public:
	struct FAttributeInitializationData          Value;                                             // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxGameSystemCore.AttributeEffect
struct FAttributeEffect
{
public:
	class UGbxAttributeData*                     AttributeData;                                     // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxAttributeModifierType         ModifierType;                                      // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          BaseModifierValue;                                 // 0x10(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UAttributeEffectMutatorData*           Mutator;                                           // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.AttributeEffectValueContextHardRef
struct FAttributeEffectValueContextHardRef
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextResolverOverride;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E74[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.StatusEffectStackingStrategyData_DurationRefundData
struct FStatusEffectStackingStrategyData_DurationRefundData
{
public:
	bool                                         bApplyReplacementRefund;                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RefundPercent;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GbxGameSystemCore.StretchBonesInstance
struct FStretchBonesInstance
{
public:
	class FName                                  StartBoneName;                                     // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBoneName;                                       // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniformStretch;                                   // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetPosition;                                    // 0x24(0xC)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E7A[0x6C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.OverrideMeleeSocket
struct FOverrideMeleeSocket
{
public:
	class UGbxCondition*                         OverrideCondition;                                 // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OverrideSockets;                                   // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.TargetLocationData
struct FTargetLocationData
{
public:
	struct FVector                               TargetLocation;                                    // 0x0(0xC)(Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetBoundsCenter;                                // 0xC(0xC)(Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetBoundsRadius;                                // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetBoundsHalfHeight;                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.TargetLocationBoundsSettings
struct FTargetLocationBoundsSettings
{
public:
	float                                        BoundsRadius;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoundsHalfHeight;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBoundsHalfHeight;                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E7D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8C (0x98 - 0xC)
// ScriptStruct GbxGameSystemCore.TargetLocationSettings
struct FTargetLocationSettings : public FTargetLocationBoundsSettings
{
public:
	uint8                                        Pad_5E7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             Enabled;                                           // 0x10(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x390 (0x390 - 0x0)
// ScriptStruct GbxGameSystemCore.TargetActorInfo
struct FTargetActorInfo
{
public:
	TWeakObjectPtr<class AActor>                 Target;                                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class USceneComponent>        Proxy;                                             // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UTargetableComponent>   TargetableComponent;                               // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UTargetingComponent>    OwnerTargetingComponent;                           // 0x18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E80[0x35C];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetScore;                                       // 0x37C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     AttitudeTowardTarget;                              // 0x380(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     AttitudeFromTarget;                                // 0x381(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E81[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetListIndex;                                   // 0x384(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E82[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.TargetQueryTestDebugDesc
struct FTargetQueryTestDebugDesc
{
public:
	float                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Score;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.TargetQueryDebugDesc
struct FTargetQueryDebugDesc
{
public:
	class FString                                DebugGroup;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTeam*                                 Team;                                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Score;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FailReason;                                        // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.TeamAttitudeSetEntry
struct FTeamAttitudeSetEntry
{
public:
	class UTeam*                                 OtherTeam;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     Attitude;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E85[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxGameSystemCore.TerritoryData
struct FTerritoryData
{
public:
	bool                                         bEverywhere;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AVolume*>                       Volumes;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.TargetPersistentNotes
struct FTargetPersistentNotes
{
public:
	uint8                                        Pad_5E8A[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct GbxGameSystemCore.UIStatValueRemappingData
struct FUIStatValueRemappingData
{
public:
	uint8                                        bUseContextOverride : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_173 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5E8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          InputValueMin;                                     // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          InputValueMax;                                     // 0x40(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          OutputValueMin;                                    // 0x78(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          OutputValueMax;                                    // 0xB0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x590 (0x590 - 0x0)
// ScriptStruct GbxGameSystemCore.UIStatCollector
struct FUIStatCollector
{
public:
	uint8                                        Pad_5E8C[0x590];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.UIStatPriorityData
struct FUIStatPriorityData
{
public:
	class UUIStatData*                           UIStat;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PriorityIncrease;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E8D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.ReplicatedUIStatCollectionData
struct FReplicatedUIStatCollectionData
{
public:
	uint8                                        Pad_5E8E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxGameSystemCore.CompiledUserSet
struct FCompiledUserSet
{
public:
	struct FMemberReference                      StateProperty;                                     // 0x0(0x38)(NativeAccessSpecifierPublic)
	TArray<class FName>                          EnableConditionVariableNames;                      // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.CompiledUserStatesData
struct FCompiledUserStatesData
{
public:
	TArray<struct FCompiledUserSet>              CompiledSets;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxGameSystemCore.UserStatesReplicationData
struct FUserStatesReplicationData
{
public:
	bool                                         bInitialized;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       PackedStateBits;                                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxGameSystemCore.UserStateSetRuntimeData
struct FUserStateSetRuntimeData
{
public:
	class UByteProperty*                         Property;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ActiveState;                                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxCondition*>                 EnableConditions;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E91[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxGameSystemCore.UserStatesRuntimeData
struct FUserStatesRuntimeData
{
public:
	TArray<struct FUserStateSetRuntimeData>      States;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.UserStateEnumValue
struct FUserStateEnumValue
{
public:
	struct FSimpleMemberReference                StateProperty;                                     // 0x0(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x20(0x8)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnum*                                 Enum;                                              // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EnumValue;                                         // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E95[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxGameSystemCore.ViewModelOffsetImpulseInfo
struct FViewModelOffsetImpulseInfo
{
public:
	float                                        EaseInDuration;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxEasingFunc                        EaseInFunc;                                        // 0x4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EaseOutDuration;                                   // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxEasingFunc                        EaseOutFunc;                                       // 0x14(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RotationExtent;                                    // 0x20(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               TranslationExtent;                                 // 0x2C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxGameSystemCore.FloatWaveform
struct FFloatWaveform
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amplitude;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Phase;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxGameSystemCore.Vector2DWaveform
struct FVector2DWaveform
{
public:
	struct FFloatWaveform                        X;                                                 // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFloatWaveform                        Y;                                                 // 0xC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GbxGameSystemCore.VectorWaveform
struct FVectorWaveform
{
public:
	struct FFloatWaveform                        X;                                                 // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFloatWaveform                        Y;                                                 // 0xC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFloatWaveform                        Z;                                                 // 0x18(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

}


