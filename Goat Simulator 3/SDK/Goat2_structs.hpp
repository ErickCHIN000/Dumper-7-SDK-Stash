#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMoods : uint8
{
	M_None                         = 0,
	M_Carefree                     = 1,
	M_Agitated                     = 2,
	M_Happy                        = 3,
	M_Sad                          = 4,
	M_Scared                       = 5,
	M_Angry                        = 6,
	M_Loving                       = 7,
	M_MAX                          = 8,
};

enum class EStatusEffectTypes : uint8
{
	SET_None                       = 0,
	SET_Burning                    = 1,
	SET_Electric                   = 2,
	SET_Slippery                   = 3,
	SET_Bouncy                     = 4,
	SET_Disgusting                 = 5,
	SET_Rifted                     = 6,
	SET_All                        = 7,
	SET_MAX                        = 8,
};

enum class ELSGait : uint8
{
	Walking                        = 0,
	Running                        = 1,
	Sprinting                      = 2,
	ELSGait_MAX                    = 3,
};

enum class ELSStance : uint8
{
	Standing                       = 0,
	Crouching                      = 1,
	Prone                          = 2,
	ELSStance_MAX                  = 3,
};

enum class ELSViewMode : uint8
{
	FirstPerson                    = 0,
	ThirdPerson                    = 1,
	ELSViewMode_MAX                = 2,
};

enum class ELSRotationMode : uint8
{
	VelocityDirection              = 0,
	LookingDirection               = 1,
	Aiming                         = 2,
	FixedDirection                 = 3,
	ELSRotationMode_MAX            = 4,
};

enum class ELSMovementDirection : uint8
{
	Forward                        = 0,
	Backwards                      = 1,
	Left                           = 2,
	Right                          = 3,
	ELSMovementDirection_MAX       = 4,
};

enum class ERagdollChange : uint8
{
	None                           = 0,
	ToRagdoll                      = 1,
	UnRagdoll                      = 2,
	ERagdollChange_MAX             = 3,
};

enum class ERagdollChangeCollisionSettings : uint8
{
	UseDefaults                    = 0,
	KeepCurrent                    = 1,
	UseNewSetting                  = 2,
	ERagdollChangeCollisionSettings_MAX = 3,
};

enum class ERemovalReason : uint8
{
	RR_ManuallyCalled              = 0,
	RR_NewLoadingScreen            = 1,
	RR_NewTeleportLoadingScreen    = 2,
	RR_Finished                    = 3,
	RR_MAX                         = 4,
};

enum class ELoadingScreenType : uint8
{
	LST_None                       = 0,
	LST_LevelStart                 = 1,
	LST_TargetLocation             = 2,
	LST_Duration                   = 3,
	LST_MAX                        = 4,
};

enum class EMenuNavigationType : uint8
{
	None                           = 0,
	Enter                          = 1,
	Return                         = 2,
	Default                        = 3,
	Exit                           = 4,
	EMenuNavigationType_MAX        = 5,
};

enum class EActionHintVisibility : uint8
{
	Always                         = 0,
	Keyboard                       = 1,
	Gamepad                        = 2,
	Mobile                         = 3,
	Context                        = 4,
	EActionHintVisibility_MAX      = 5,
};

enum class EActionHintPosition : uint8
{
	Left                           = 0,
	Right                          = 1,
	Center                         = 2,
	EActionHintPosition_MAX        = 3,
};

enum class EPopupResponse : uint8
{
	Error                          = 0,
	Accepted                       = 1,
	Declined                       = 2,
	Canceled                       = 3,
	Custom                         = 4,
	EPopupResponse_MAX             = 5,
};

enum class EPostProcessCameraContext : uint8
{
	PlayerCamera                   = 0,
	VehicleCamera                  = 1,
	WorldCamera                    = 2,
	EPostProcessCameraContext_MAX  = 3,
};

enum class ELoadingScreenStage : uint8
{
	PreTeleport                    = 0,
	Teleported                     = 1,
	LoadingScreenRemoved           = 2,
	Canceled                       = 3,
	ELoadingScreenStage_MAX        = 4,
};

enum class EStateChangeSource : uint8
{
	SCS_Default                    = 0,
	SCS_SaveFile                   = 1,
	SCS_MAX                        = 2,
};

enum class EStretchGoalStates : uint8
{
	SGIS_Inactive                  = 0,
	SGIS_BeingRevealed             = 1,
	SGIS_Unlockable                = 2,
	SGIS_Unlocking                 = 3,
	SGIS_Unlocked                  = 4,
	SGIS_MAX                       = 5,
};

enum class EPlayerGamePhase : uint8
{
	WaitingForPlayers              = 0,
	GetReadyPhase                  = 1,
	PreGame                        = 2,
	InGame                         = 3,
	PostGame                       = 4,
	DrawPhase                      = 5,
	ResultPhase                    = 6,
	DestructGame                   = 7,
	EPlayerGamePhase_MAX           = 8,
};

enum class ENotificationRemoval : uint8
{
	Permanent                      = 0,
	Extendable                     = 1,
	Duration                       = 2,
	Timestamp                      = 3,
	Queue                          = 4,
	Custom                         = 5,
	ENotificationRemoval_MAX       = 6,
};

enum class ENotificationPriority : uint8
{
	Purge                          = 0,
	Blocking                       = 1,
	Sticky                         = 2,
	Immediate                      = 3,
	Prioritize                     = 4,
	Normal                         = 5,
	Optional                       = 6,
	Update                         = 7,
	Custom                         = 8,
	ENotificationPriority_MAX      = 9,
};

enum class ETowerSynchronizationEvent : uint8
{
	LoadedFromSave                 = 0,
	Synchronised                   = 1,
	PostCutscene                   = 2,
	ETowerSynchronizationEvent_MAX = 3,
};

enum class EGGEquation : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	Smaller                        = 2,
	EqualOrSmaller                 = 3,
	Larger                         = 4,
	EqualOrLarger                  = 5,
	EGGEquation_MAX                = 6,
};

enum class EGGDialogueLineContinueMode : uint8
{
	AfterSoundFinished             = 0,
	AfterMontageFinished           = 1,
	AfterDuration                  = 2,
	PlayerInteraction              = 3,
	FactExists                     = 4,
	FactIsTrue                     = 5,
	FactSatisfyEquation            = 6,
	EGGDialogueLineContinueMode_MAX = 7,
};

enum class EGGPerformanceImpact : uint8
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EGGPerformanceImpact_MAX       = 4,
};

enum class EGGGameSettingApplyMode : uint8
{
	Commit                         = 0,
	Explicit                       = 1,
	Instant                        = 2,
	EGGGameSettingApplyMode_MAX    = 3,
};

enum class EGGGameSettingsWidgetType : uint8
{
	Bool                           = 0,
	Float                          = 1,
	Integer                        = 2,
	Integer_DropDown               = 3,
	Button                         = 4,
	CustomClass                    = 5,
	EGGGameSettingsWidgetType_MAX  = 6,
};

enum class EGGGameSettingType : uint8
{
	Resolution                     = 0,
	NonResolution                  = 1,
	EGGGameSettingType_MAX         = 2,
};

enum class ECarryItemType : uint8
{
	CIT_Normal                     = 0,
	CIT_OneHand                    = 1,
	CIT_TwoHands                   = 2,
	CIT_Phone                      = 3,
	CIT_Sign                       = 4,
	CIT_FoodOrDrink                = 5,
	CIT_MAX                        = 6,
};

enum class EAttachmentHandSlot : uint8
{
	AHS_Right                      = 0,
	AHS_Left                       = 1,
	AHS_Both                       = 2,
	AHS_MAX                        = 3,
};

enum class EAppearanceParts : uint8
{
	AP_None                        = 0,
	AP_Head                        = 1,
	AP_Hair                        = 2,
	AP_UpperBody                   = 3,
	AP_LowerBody                   = 4,
	AP_Accessory                   = 5,
	AP_MAX                         = 6,
};

enum class EGGAccountConnectionResult : uint8
{
	Success                        = 0,
	NoConnecedId                   = 1,
	SuccessButDifferentAccountConnected = 2,
	NoConnecedIdButDifferentAccountConnected = 3,
	Error                          = 4,
	SignedOutEpicUsingSteam        = 5,
	Close                          = 6,
	EGGAccountConnectionResult_MAX = 7,
};

enum class ELoginState : uint8
{
	LS_NotLoggedIn                 = 0,
	LS_FailedToLogin               = 1,
	LS_LoggingIn                   = 2,
	LS_LoggedIn                    = 3,
	LS_MAX                         = 4,
};

enum class EGGLobbyUpdateType : uint8
{
	GG_LUT_FinishedUpdating        = 0,
	GG_LUT_LobbyUpdateReceived     = 1,
	GG_LUT_MemberUpdateReceived    = 2,
	GG_LUT_MemberStatusReceived    = 3,
	GG_LUT_PendingDataUpdate       = 4,
	GG_LUT_MAX                     = 5,
};

enum class EGGCachedNATType : uint8
{
	CNT_Open                       = 0,
	CNT_Moderate                   = 1,
	CNT_Strict                     = 2,
	CNT_TBD                        = 3,
	CNT_MAX                        = 4,
};

enum class ELobbyPrivacySetting : uint8
{
	LPS_Open                       = 0,
	LPS_InviteOnly                 = 1,
	LPS_Friends                    = 2,
	LPS_FriendsOfFriends           = 3,
	LPS_MAX                        = 4,
};

enum class EApplicationMethod : uint8
{
	AM_Direct                      = 0,
	AM_Overlap                     = 1,
	AM_Collision                   = 2,
	AM_MAX                         = 3,
};

enum class ESaveFileTypes : uint8
{
	SFT_Goat                       = 0,
	SFT_World                      = 1,
	SFT_WorldCollection            = 2,
	SFT_MAX                        = 3,
};

enum class ETopBarButtonVisibility : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	None                           = 3,
	ETopBarButtonVisibility_MAX    = 4,
};

enum class ECheckTypes : uint8
{
	CT_NPC                         = 0,
	CT_Goat                        = 1,
	CT_PhysicsActor                = 2,
	CT_Interactable                = 3,
	CT_Vehicle                     = 4,
	CT_MAX                         = 5,
};

enum class ECompareMode : uint8
{
	CM_Less                        = 0,
	CM_LessOrEqual                 = 1,
	CM_More                        = 2,
	CM_MoreOrEqual                 = 3,
	CM_Equal                       = 4,
	CM_MAX                         = 5,
};

enum class EEnvContainerData : uint8
{
	ECD_ActorA                     = 0,
	ECD_ActorB                     = 1,
	ECD_ActorArrayA                = 2,
	ECD_ActorArrayB                = 3,
	ECD_MAX                        = 4,
};

enum class EGoatLickCheckType : uint8
{
	GLCT_Default                   = 0,
	GLCT_IsLickingActor            = 1,
	GLCT_IdentifierTags            = 2,
	GLCT_DangerousPActor           = 3,
	GLCT_MAX                       = 4,
};

enum class EGrabbedCheckType : uint8
{
	GCT_Anything                   = 0,
	GCT_Goat                       = 1,
	GCT_NPC                        = 2,
	GCT_Self                       = 3,
	GCT_MAX                        = 4,
};

enum class ECheckType : uint8
{
	CT_Equals                      = 0,
	CT_More                        = 1,
	CT_MoreOrEqual                 = 2,
	CT_Less                        = 3,
	CT_LessOrEqual                 = 4,
	CT_MAX                         = 5,
};

enum class EGameplayTagCompareType : uint8
{
	GTCT_HasTagExact               = 0,
	GTCT_HasTag                    = 1,
	GTCT_MAX                       = 2,
};

enum class ELookForCharacter : uint8
{
	LFC_Goat                       = 0,
	LFC_NPC                        = 1,
	LFC_Both                       = 2,
	LFC_MAX                        = 3,
};

enum class EActorScanTypes : uint8
{
	AST_None                       = 0,
	AST_PaperboyPoint              = 1,
	AST_BurningActor               = 2,
	AST_PhysicsActors              = 3,
	AST_MAX                        = 4,
};

enum class EActorsToDrop : uint8
{
	ATD_None                       = 0,
	ATD_RightHand                  = 1,
	ATD_LeftHand                   = 2,
	ATD_BothtHands                 = 3,
	ATD_AllPActors                 = 4,
	ATD_AllActors                  = 5,
	ATD_MAX                        = 6,
};

enum class ENotifyNPCMode : uint8
{
	NNM_SingleNotify               = 0,
	NNM_ProximityNotify            = 1,
	NNM_SingleStartle              = 2,
	NNM_ProximityStartle           = 3,
	NNM_MAX                        = 4,
};

enum class EWIPickType : uint8
{
	WIPT_WaypointA                 = 0,
	WIPT_WaypointArrayA            = 1,
	WIPT_SingleRandom              = 2,
	WIPT_InOrder                   = 3,
	WIPT_MAX                       = 4,
};

enum class EPickingType : uint8
{
	PT_BehaviorContainer           = 0,
	PT_WorldInteraction            = 1,
	PT_MAX                         = 2,
};

enum class EPickupType : uint8
{
	PT_EnvBehaviorContainer        = 0,
	PT_ExistingPActor              = 1,
	PT_MAX                         = 2,
};

enum class ENPCAnimation : uint8
{
	NA_Dance                       = 0,
	NA_Greeting                    = 1,
	NA_Impressed                   = 2,
	NA_AnimalIdle                  = 3,
	NA_MAX                         = 4,
};

enum class EAnimationType : uint8
{
	AT_Default                     = 0,
	AT_BlackboardKey               = 1,
	AT_NPCMontages                 = 2,
	AT_MAX                         = 3,
};

enum class ETaskActorScanTypes : uint8
{
	TAST_None                      = 0,
	TAST_PaperboyPoint             = 1,
	TAST_BurningActor              = 2,
	TAST_PhysicsActors             = 3,
	TAST_MAX                       = 4,
};

enum class EMoodSetType : uint8
{
	MST_Default                    = 0,
	MST_RandomMood                 = 1,
	MST_BlackboardKey              = 2,
	MST_AngryWithTarget            = 3,
	MST_FleeFromLoc                = 4,
	MST_MAX                        = 5,
};

enum class EActorSpawnRotationType : uint8
{
	ASRT_WithRotation              = 0,
	ASRT_PawnRotation              = 1,
	ASRT_RandomRotation            = 2,
	ASRT_MAX                       = 3,
};

enum class EActorSpawnLocationType : uint8
{
	ASLT_AtLocation                = 0,
	ASLT_AtBBLocation              = 1,
	ASLT_Infront                   = 2,
	ASLT_InfrontOnGround           = 3,
	ASLT_OnSocket                  = 4,
	ASLT_Attached                  = 5,
	ASLT_MAX                       = 6,
};

enum class EActorSpawnType : uint8
{
	AST_Default                    = 0,
	AST_DuringAnimation            = 1,
	AST_MAX                        = 2,
};

enum class ENPCThrowObjectType : uint8
{
	NTOT_PhysicsActor              = 0,
	NTOT_PhysicsProjectile         = 1,
	NTOT_MAX                       = 2,
};

enum class EWaitType : uint8
{
	WT_Default                     = 0,
	WT_BlackboardKey               = 1,
	WT_FloatBBEntries              = 2,
	WT_StandupDelay                = 3,
	WT_AnimStartWait               = 4,
	WT_MAX                         = 5,
};

enum class EAlternateMode : uint8
{
	AM_TopDown                     = 0,
	AM_SideScroller                = 1,
	AM_MAX                         = 2,
};

enum class EHandIKTarget : uint8
{
	IKBone                         = 0,
	WorldLocation                  = 1,
	Pocket                         = 2,
	Hip                            = 3,
	EHandIKTarget_MAX              = 4,
};

enum class EValidReferenceResult : uint8
{
	Valid                          = 0,
	NotValid                       = 1,
	EValidReferenceResult_MAX      = 2,
};

enum class EBoatMovementMode : uint8
{
	BMM_None                       = 0,
	BMM_Motorboat                  = 1,
	BMM_Sailboat                   = 2,
	BMM_Rowboat                    = 3,
	BMM_MAX                        = 4,
};

enum class EGGCameraArmLengthMode : uint8
{
	Unchanged                      = 0,
	ClampMax                       = 1,
	SetLength                      = 2,
	EGGCameraArmLengthMode_MAX     = 3,
};

enum class EGGLocationSpace : uint8
{
	World                          = 0,
	Actor                          = 1,
	EGGLocationSpace_MAX           = 2,
};

enum class EChaosCounterMode : uint8
{
	ECM_AllowAll                   = 0,
	ECM_RecurringList              = 1,
	ECM_Cooldown                   = 2,
	ECM_RecurringAndCooldown       = 3,
	ECM_MAX                        = 4,
};

enum class ESameSocketAttach : uint8
{
	SSA_Nothing                    = 0,
	SSA_Destroy                    = 1,
	SSA_Detach                     = 2,
	SSA_DetachPActorOnly           = 3,
	SSA_MAX                        = 4,
};

enum class EPhysAnimProfiles : uint8
{
	PAP_None                       = 0,
	PAP_GoatGeneral                = 1,
	PAP_GoatFloppyLegs             = 2,
	PAP_GoatNeck                   = 3,
	PAP_MAX                        = 4,
};

enum class EDesiredBuoyancy : uint8
{
	Negative                       = 0,
	Neutral                        = 1,
	Positive                       = 2,
	EDesiredBuoyancy_MAX           = 3,
};

enum class ECanStandUpBelowVehicle : uint8
{
	Yes                            = 0,
	No                             = 1,
	ClosestValidLocation           = 2,
	ECanStandUpBelowVehicle_MAX    = 3,
};

enum class EGGImpactResult : uint8
{
	Nothing                        = 0,
	Push                           = 1,
	Stumble                        = 2,
	Ragdoll                        = 3,
	EGGImpactResult_MAX            = 4,
};

enum class EGGColorBlindness : uint8
{
	Off                            = 0,
	Deuteranopia                   = 1,
	Tritanopia                     = 2,
	Protanopia                     = 3,
	EGGColorBlindness_MAX          = 4,
};

enum class EVisualizerState : uint8
{
	VS_Normal                      = 0,
	VS_Valid                       = 1,
	VS_Invalid                     = 2,
	VS_MAX                         = 3,
};

enum class EUniqueOverlapType : uint8
{
	Actor                          = 0,
	Component                      = 1,
	EUniqueOverlapType_MAX         = 2,
};

enum class EEquipResult : uint8
{
	None                           = 0,
	Equipped                       = 1,
	Unequipped                     = 2,
	Unlocked                       = 3,
	UnlockedFailed                 = 4,
	StyleSelect                    = 5,
	NoChange                       = 6,
	Error                          = 7,
	EEquipResult_MAX               = 8,
};

enum class ECustomizationMode : uint8
{
	Overview                       = 0,
	Featured                       = 1,
	Customization                  = 2,
	Store                          = 3,
	ECustomizationMode_MAX         = 4,
};

enum class ETypeOfDamage : uint8
{
	TOD_None                       = 0,
	TOD_Goat                       = 1,
	TOD_NPC                        = 2,
	TOD_PhysActor                  = 3,
	TOD_Vehicle                    = 4,
	TOD_Explosion                  = 5,
	TOD_Burning                    = 6,
	TOD_Electric                   = 7,
	TOD_GoatTackle                 = 8,
	TOD_AttachedActor              = 9,
	TOD_GoatGear                   = 10,
	TOD_Impact                     = 11,
	TOD_MAX                        = 12,
};

enum class EGGDialogueInteractResponse : uint8
{
	Started                        = 0,
	AdvancedToNextLine             = 1,
	Canceled                       = 2,
	Ended                          = 3,
	Error                          = 4,
	WaitingForServer               = 5,
	EGGDialogueInteractResponse_MAX = 6,
};

enum class EGoatDLC : uint8
{
	Invalid                        = 0,
	PreUdder                       = 1,
	DigitalDowngrade               = 2,
	MajorUpdate1                   = 3,
	EGoatDLC_MAX                   = 4,
};

enum class EGGEngineScalabilityLevel_WithOff : uint8
{
	Off                            = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Epic                           = 4,
	Cinematic                      = 5,
	EGGEngineScalabilityLevel_MAX  = 6,
};

enum class EGGEngineScalabilityLevel : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	EGGEngineScalabilityLevel_MAX  = 5,
};

enum class EEventCompletedState : uint8
{
	Error                          = 0,
	Incompleted                    = 1,
	CompletedPreviously            = 2,
	CompletedBeforeJoining         = 3,
	CompletedRemotely              = 4,
	CompletedThisSession           = 5,
	EEventCompletedState_MAX       = 6,
};

enum class EEventActiveState : uint8
{
	Error                          = 0,
	NotSynced                      = 1,
	Inactive                       = 2,
	Active                         = 3,
	Finished                       = 4,
	EEventActiveState_MAX          = 5,
};

enum class EGGSoundType : uint8
{
	Footstep                       = 0,
	Jump                           = 1,
	Land                           = 2,
	EGGSoundType_MAX               = 3,
};

enum class EGGDamageWhileFreezeReaction : uint8
{
	None                           = 0,
	UnFreeze                       = 1,
	Explode                        = 2,
	EGGDamageWhileFreezeReaction_MAX = 3,
};

enum class EGGGameSettingChangeContext : uint8
{
	ResetToDefault                 = 0,
	Loaded                         = 1,
	UserInterface                  = 2,
	Code                           = 3,
	EGGGameSettingChangeContext_MAX = 4,
};

enum class EGameVersion : uint8
{
	Main                           = 0,
	Experimental                   = 1,
	Other                          = 2,
	EGameVersion_MAX               = 3,
};

enum class ETargetPriorityMode : uint8
{
	Closest                        = 0,
	Random                         = 1,
	Deactivated                    = 2,
	ETargetPriorityMode_MAX        = 3,
};

enum class EGoatAbilitySlot : uint8
{
	GAS_Headbutt                   = 0,
	GAS_ChargeHeadbutt             = 1,
	GAS_Backkick                   = 2,
	GAS_Lick                       = 4,
	GAS_MAX                        = 5,
};

enum class EGoatBlendSlots : uint8
{
	GBS_None                       = 0,
	GBS_Headbutt                   = 1,
	GBS_Lick                       = 2,
	GBS_Baa                        = 3,
	GBS_MAX                        = 4,
};

enum class EGGDerpyModeState : uint8
{
	Disabled                       = 0,
	SoonDisabled                   = 1,
	SoonEnabled                    = 2,
	Enabled                        = 3,
	EGGDerpyModeState_MAX          = 4,
};

enum class EGearItemType : uint8
{
	Gear                           = 0,
	None                           = 1,
	Store                          = 2,
	EGearItemType_MAX              = 3,
};

enum class EGiveOrRemove : uint8
{
	GOR_Give                       = 0,
	GOR_Remove                     = 1,
	GOR_MAX                        = 2,
};

enum class EGearEquipContext : uint8
{
	Invalid                        = 0,
	Cheat                          = 1,
	Preview                        = 2,
	Cinematic                      = 3,
	Startup                        = 4,
	Reward                         = 5,
	Manual                         = 6,
	GameplayEffect                 = 7,
	EGearEquipContext_MAX          = 8,
};

enum class ESkinnedMeshOverride : uint8
{
	SMO_NoOverride                 = 0,
	SMO_NotSkinned                 = 1,
	SMO_IsSkinned                  = 2,
	SMO_MAX                        = 3,
};

enum class EGoatSockets : uint8
{
	GS_None                        = 0,
	GS_HeadGearSocket              = 1,
	GS_EyewearGearSocket           = 2,
	GS_ShoulderGearSocket          = 3,
	GS_BackGearSocket              = 4,
	GS_BodyGearSocket              = 5,
	GS_FeetGear_FrontRSocket       = 6,
	GS_HornGearSocket              = 7,
	GS_MAX                         = 8,
};

enum class EGoatChildSockets : uint8
{
	GS_None                        = 0,
	GS_HeadGearSocket              = 1,
	GS_EyewearGearSocket           = 2,
	GS_ShoulderGearSocket          = 3,
	GS_BackGearSocket              = 4,
	GS_BodyGearSocket              = 5,
	GS_FeetGear_FrontRSocket       = 6,
	GS_FeetGear_FrontLSocket       = 7,
	GS_FeetGear_BackRSocket        = 8,
	GS_FeetGear_BackLSocket        = 9,
	GS_HornGearSocket              = 10,
	GS_MAX                         = 11,
};

enum class EGearSlot : uint8
{
	GS_None                        = 0,
	GS_Head                        = 1,
	GS_Body                        = 2,
	GS_Back                        = 3,
	GS_Feet                        = 4,
	GS_AltGoat                     = 5,
	GS_Fur                         = 6,
	GS_Horns                       = 7,
	GS_Baa                         = 8,
	GS_MAX                         = 9,
};

enum class EGGRaceTrackCheckpointAlignment : uint8
{
	None                           = 0,
	CenterHit                      = 1,
	CenterAndSides                 = 2,
	EGGRaceTrackCheckpointAlignment_MAX = 3,
};

enum class EStartGrindingFlags : uint8
{
	None                           = 0,
	ForceGrind                     = 1,
	AllowWhileGrinding             = 2,
	EStartGrindingFlags_MAX        = 3,
};

enum class ETowerRiseState : uint8
{
	TRS_None                       = 0,
	TRS_Rising                     = 1,
	TRS_RisingDone                 = 2,
	TRS_MAX                        = 3,
};

enum class EGGHandcuffState : uint8
{
	Free                           = 0,
	Hands                          = 1,
	HandsAndFeet                   = 2,
	EGGHandcuffState_MAX           = 3,
};

enum class EExplosionTrigger : uint8
{
	ET_Yes                         = 0,
	ET_WithTimer                   = 1,
	ET_No                          = 2,
	ET_MAX                         = 3,
};

enum class ESpawnStage : uint8
{
	RegisterFirstComponent         = 0,
	RegisterComponent              = 1,
	PostRegister                   = 2,
	BeforeFinishCallback           = 3,
	FinishSpawning                 = 4,
	PostActorConstruction          = 5,
	AfterFinishCallback            = 6,
	Done                           = 7,
	ESpawnStage_MAX                = 8,
};

enum class EInstinctDifficultyType : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EInstinctDifficultyType_MAX    = 3,
};

enum class EInstinctType : uint8
{
	Area                           = 0,
	Tutorial                       = 1,
	Gear                           = 2,
	Misc                           = 3,
	EInstinctType_MAX              = 4,
};

enum class EResourceCurrency : uint8
{
	Token                          = 0,
	EResourceCurrency_MAX          = 1,
};

enum class EResourceSpendType : uint8
{
	Cheat                          = 0,
	Gear                           = 1,
	Nonsense                       = 2,
	EResourceSpendType_MAX         = 3,
};

enum class EResourceAcquisitionType : uint8
{
	Cheat                          = 0,
	Reward                         = 1,
	EResourceAcquisitionType_MAX   = 2,
};

enum class EFadeState : uint8
{
	FS_None                        = 0,
	FS_FadingOut                   = 1,
	FS_FadedOut                    = 2,
	FS_MAX                         = 3,
};

enum class EMenuRequest : uint8
{
	Toggle                         = 0,
	Show                           = 1,
	Hide                           = 2,
	Replace                        = 3,
	EMenuRequest_MAX               = 4,
};

enum class EGGTileOrientation : uint8
{
	BottomLeft                     = 0,
	TopLeft                        = 1,
	EGGTileOrientation_MAX         = 2,
};

enum class EGoatSimNameImportance : uint8
{
	GSNI_NotImportant              = 0,
	GNSI_LittleImportant           = 1,
	GSNI_MediumImportant           = 2,
	GSNI_VeryImportant             = 4,
	GSNI_CriticalImportant         = 8,
	EGoatSimNameImportance_MAX     = 9,
};

enum class EGGNetworkSetting : uint8
{
	Online                         = 0,
	Offline                        = 1,
	EGGNetworkSetting_MAX          = 2,
};

enum class ENewsFeedURLTypes : uint8
{
	Base                           = 0,
	PreviewData                    = 1,
	PreviewImage                   = 2,
	NewsWebURL                     = 3,
	ENewsFeedURLTypes_MAX          = 4,
};

enum class ENotificationRemovalReason : uint8
{
	Unspecified                    = 0,
	Duration                       = 1,
	Self                           = 2,
	Replaced                       = 3,
	Forced                         = 4,
	ENotificationRemovalReason_MAX = 5,
};

enum class ENotificationDurationType : uint8
{
	Duration                       = 0,
	StartAnimation                 = 1,
	EndAnimation                   = 2,
	StartAndDuration               = 3,
	EndAndDuration                 = 4,
	StartAndEnd                    = 5,
	Total                          = 6,
	Custom                         = 7,
	ENotificationDurationType_MAX  = 8,
};

enum class ENotificationCommand : uint8
{
	None                           = 0,
	HideMatch                      = 1,
	ClearMatch                     = 2,
	HideMatchTag                   = 3,
	ClearMatchTag                  = 4,
	HideMatchContent               = 5,
	ClearMatchContent              = 6,
	HideActive                     = 7,
	ClearActive                    = 8,
	Purge                          = 9,
	Custom                         = 10,
	ENotificationCommand_MAX       = 11,
};

enum class ELookAtOverrideResets : uint8
{
	LAOR_Ragdoll                   = 0,
	LAOR_ProximityReact            = 1,
	LAOR_ExtremeMood               = 2,
	LAOR_Panic                     = 3,
	LAOR_MAX                       = 4,
};

enum class EHeadTurning : uint8
{
	HT_None                        = 0,
	HT_TurnAndLook                 = 1,
	HT_UpperBody                   = 2,
	HT_MAX                         = 3,
};

enum class EConversationStates : uint8
{
	CS_None                        = 0,
	CS_SayVoiceline                = 1,
	CS_Wait                        = 2,
	CS_Greeting                    = 3,
	CS_GreetingResponse            = 4,
	CS_Farewell                    = 5,
	CS_FarewellResponse            = 6,
	CS_MAX                         = 7,
};

enum class ECrowdTypes : uint8
{
	CT_None                        = 0,
	CT_SingleNPCs                  = 1,
	CT_NPCGroups                   = 2,
	CT_NPCQueues                   = 3,
	CT_NPCQueuesFirst              = 4,
	CT_MAX                         = 5,
};

enum class EBlendspaceOverride : uint8
{
	BO_None                        = 0,
	BO_Panic                       = 1,
	BO_Disgusted                   = 2,
	BO_StolenVehicle               = 3,
	BO_MAX                         = 4,
};

enum class ENPCMontageSlots : uint8
{
	NMS_Default                    = 0,
	NMS_UpperBody                  = 1,
	NMS_MAX                        = 2,
};

enum class EAppearanceTables : uint8
{
	AT_HeadTable                   = 0,
	AT_HairTable                   = 1,
	AT_UpperBodyTable              = 2,
	AT_LowerBodyTable              = 3,
	AT_AccessoryTable              = 4,
	AT_MAX                         = 5,
};

enum class EBodyParts : uint8
{
	BP_Head                        = 0,
	BP_Hair                        = 1,
	BP_UpperBody                   = 2,
	BP_LowerBody                   = 3,
	BP_MAX                         = 4,
};

enum class ESocialQueueDirections : uint8
{
	SQD_Forward                    = 0,
	SQD_Left                       = 1,
	SQD_Right                      = 2,
	SQD_MAX                        = 3,
};

enum class EStallSpawned : uint8
{
	SS_NoAttempt                   = 0,
	SS_Succeeded                   = 1,
	SS_Failed                      = 2,
	SS_MAX                         = 3,
};

enum class EEventType : uint8
{
	ET_EditorPlaced                = 0,
	ET_Dynamic                     = 1,
	ET_MAX                         = 2,
};

enum class EEventDeactivation : uint8
{
	ED_None                        = 0,
	ED_DisablePastRelevant         = 1,
	ED_RemovePastRelevant          = 2,
	ED_MAX                         = 3,
};

enum class EEventActivation : uint8
{
	EA_AtStart                     = 0,
	EA_EventTriggered              = 1,
	EA_PlayerProximity             = 2,
	EA_MAX                         = 3,
};

enum class EInteractChances : uint8
{
	IC_Zero                        = 0,
	IC_VeryLow                     = 1,
	IC_Low                         = 2,
	IC_Medium                      = 3,
	IC_High                        = 4,
	IC_VeryHigh                    = 5,
	IC_MAX                         = 6,
};

enum class EMoodChange : uint8
{
	MC_None                        = 0,
	MC_Positive                    = 1,
	MC_Negative                    = 2,
	MC_Negative_ScaredBias         = 3,
	MC_Negative_AngryBias          = 4,
	MC_Amplify                     = 5,
	MC_MAX                         = 6,
};

enum class EStartleVariations : uint8
{
	SV_Light                       = 0,
	SV_Medium                      = 1,
	SV_Heavy                       = 2,
	SV_Random                      = 3,
	SV_Chased                      = 4,
	SV_BraceForImpact              = 5,
	SV_MAX                         = 6,
};

enum class ELineOfSightSetting : uint8
{
	LoSS_None                      = 0,
	LoSS_Infront                   = 1,
	LoSS_Behind                    = 2,
	LoSS_InfrontNotBlocked         = 3,
	LoSS_MAX                       = 4,
};

enum class EBTGGBlackboardRestart : uint8
{
	ValueChange                    = 0,
	ResultChange                   = 1,
	EBTGGBlackboardRestart_MAX     = 2,
};

enum class EReactInitialized : uint8
{
	RI_No                          = 0,
	RI_BaseOnly                    = 1,
	RI_BaseAndSub                  = 2,
	RI_MAX                         = 3,
};

enum class EBehaviorActors : uint8
{
	BA_ActorA                      = 0,
	BA_ActorB                      = 1,
	BA_ActorArrayA                 = 2,
	BA_ActorArrayB                 = 3,
	BA_MAX                         = 4,
};

enum class ERoamAfterDisturbed : uint8
{
	RAD_Ragdolling                 = 0,
	RAD_ProximityReact             = 1,
	RAD_ExtremeMood                = 2,
	RAD_Panic                      = 3,
	RAD_NPCEvent                   = 4,
	RAD_ForceMove                  = 5,
	RAD_Stumble                    = 6,
	RAD_MAX                        = 7,
};

enum class ENPCInteractions : uint8
{
	NPCI_None                      = 0,
	NPCI_Discussion                = 1,
	NPCI_AngryRant                 = 2,
	NPCI_MovingWave                = 3,
	NPCI_Goat_Attack               = 4,
	NPCI_Goat_CloseGreet           = 5,
	NPCI_NoticeGoat                = 6,
	NPCI_MovingNoticeGoat          = 7,
	NPCI_PettingGoat               = 8,
	NPCI_PointingAtGoat            = 9,
	NPCI_MAX                       = 10,
};

enum class EAttackUseCase : uint8
{
	AUS_Default                    = 0,
	AUS_Character                  = 1,
	AUS_NonCharacter               = 2,
	AUS_Player                     = 3,
	AUS_NPC                        = 4,
	AUS_AnimalNPC                  = 5,
	AUS_HumanoidNPC                = 6,
	AUS_NoTarget                   = 7,
	AUS_MAX                        = 8,
};

enum class EPanicTypes : uint8
{
	PT_None                        = 0,
	PT_Random                      = 1,
	PT_RunAway                     = 2,
	PT_RunAwayAndHide              = 3,
	PT_InPlace                     = 4,
	PT_OnFire                      = 5,
	PT_OnFireInPlace               = 6,
	PT_RunFromActor                = 7,
	PT_MAX                         = 8,
};

enum class EGrabbedCharacterAnimationType : uint8
{
	NGCA_Default                   = 0,
	NGCA_Hug                       = 1,
	NGCA_OneHandInfront            = 2,
	NGCA_MAX                       = 3,
};

enum class EWasInStates : uint8
{
	WIS_None                       = 0,
	WIS_WasInEvent                 = 1,
	WIS_WasPanicking               = 2,
	WIS_WasActorInteracting        = 3,
	WIS_WasRagdolling              = 4,
	WIS_WasInMood                  = 5,
	WIS_WasInIdleState             = 6,
	WIS_WasForcedToMove            = 7,
	WIS_WasInLostObject            = 8,
	WIS_WasInvestigating           = 9,
	WIS_WasCharInteracting         = 10,
	WIS_WasStumbling               = 11,
	WIS_MAX                        = 12,
};

enum class ENavDataTypes : uint8
{
	NDT_Default                    = 0,
	NDT_Vehicle                    = 1,
	NDT_MAX                        = 2,
};

enum class ENPCMoveMode : uint8
{
	NMM_Walking                    = 0,
	NMM_Running                    = 1,
	NMM_MAX                        = 2,
};

enum class ENPCAnimationStates : uint8
{
	NAS_None                       = 0,
	NAS_Custom                     = 1,
	NAS_Talking                    = 2,
	NAS_Admiring                   = 3,
	NAS_Dancing                    = 4,
	NAS_Scared                     = 5,
	NAS_Ranting                    = 6,
	NAS_GoatRiding                 = 7,
	NAS_Pointing                   = 8,
	NAS_Stumbling                  = 9,
	NAS_MAX                        = 10,
};

enum class ENPCMaterialEffect : uint8
{
	NME_None                       = 0,
	NME_Shock                      = 1,
	NME_MAX                        = 2,
};

enum class EValidDrivers : uint8
{
	VD_Ghost                       = 0,
	VD_Player                      = 1,
	VD_NPC                         = 2,
	VD_MAX                         = 3,
};

enum class EPoolReason : uint8
{
	PL_Default                     = 0,
	PL_Relevancy                   = 1,
	PL_MAX                         = 2,
};

enum class EGender : uint8
{
	G_None                         = 0,
	G_Male                         = 1,
	G_Female                       = 2,
	G_MAX                          = 3,
};

enum class ENPCType : uint8
{
	NT_None                        = 0,
	NT_Civilian                    = 1,
	NT_Environmental               = 2,
	NT_Professional                = 3,
	NT_Special                     = 4,
	NT_Animal                      = 5,
	NT_MAX                         = 6,
};

enum class EAnimationSetting : uint8
{
	AS_NoAnimation                 = 0,
	AS_Montage                     = 1,
	AS_AnimationSequences          = 2,
	AS_MontageArray                = 3,
	AS_MAX                         = 4,
};

enum class ERotationSetting : uint8
{
	RS_WaypointRotation            = 0,
	RS_RandomRotation              = 1,
	RS_NoRotationChange            = 2,
	RS_MAX                         = 3,
};

enum class EQueryPrivilege : uint8
{
	PlayOnline                     = 0,
	VoiceChat                      = 1,
	EQueryPrivilege_MAX            = 2,
};

enum class EActiveOSSFlags : uint8
{
	None                           = 0,
	EOS                            = 1,
	Steam                          = 2,
	GDK                            = 4,
	PS5                            = 8,
	Switch                         = 16,
	EActiveOSSFlags_MAX            = 17,
};

enum class EGGPartyMemberSpawnType : uint8
{
	AtPoint                        = 0,
	InAir                          = 1,
	EGGPartyMemberSpawnType_MAX    = 2,
};

enum class EInviteButtonType : uint8
{
	World                          = 0,
	Screen                         = 1,
	EInviteButtonType_MAX          = 2,
};

enum class EFriendListState : uint8
{
	FLS_Invalid                    = 0,
	FLS_Valid                      = 1,
	FLS_MAX                        = 2,
};

enum class EFriendPlatform : uint8
{
	FP_Steam                       = 0,
	FP_Epic                        = 1,
	FP_Others                      = 2,
	FP_MAX                         = 3,
};

enum class EGameOwnershipState : uint8
{
	GOS_NotQueried                 = 0,
	GOS_BeingQueried               = 1,
	GOS_Owned                      = 2,
	GOS_NotOwned                   = 3,
	GOS_MAX                        = 4,
};

enum class ESelectionType : uint8
{
	ST_Vertex                      = 0,
	ST_Trianles                    = 1,
	ST_MAX                         = 2,
};

enum class ESplineSpawnType : uint8
{
	SST_Random                     = 0,
	SST_RandomPoint                = 1,
	SST_FollowSpline               = 2,
	SST_FollowSplineReverse        = 3,
	SST_FollowSplinePoints         = 4,
	SST_FollowSplinePointsReverse  = 5,
	SST_MAX                        = 6,
};

enum class EValidSectionType : uint8
{
	VST_Distances                  = 0,
	VST_InputKeys                  = 1,
	VST_MAX                        = 2,
};

enum class EPactorCulldistanceScaleIdentifier : uint8
{
	EPCSI_NotSpecified             = 0,
	EPCSI_Small                    = 1,
	EPCSI_Medium                   = 2,
	EPCSI_Large                    = 3,
	EPCSI_MAX                      = 4,
};

enum class EPactorCulldistanceDeviceTier : uint8
{
	EPCDT_Low                      = 0,
	EPCDT_Medium                   = 1,
	EPCDT_High                     = 2,
	EPCDT_MAX                      = 3,
};

enum class EGGProjectileHitResponse : uint8
{
	StickToTarget                  = 0,
	BecomePhysicsActor             = 1,
	Destroy                        = 2,
	EGGProjectileHitResponse_MAX   = 3,
};

enum class EKeyMappingInputMode : uint8
{
	InputMode_Current              = 0,
	InputMode_All                  = 1,
	InputMode_Keyboard             = 2,
	InputMode_Gamepad              = 3,
	InputMode_Mouse                = 4,
	InputMode_Touch                = 5,
	InputMode_MAX                  = 6,
};

enum class EPlayerGameOutcome : uint8
{
	Invalid                        = 0,
	Canceled                       = 1,
	AllLost                        = 2,
	Draw                           = 3,
	Walkover                       = 4,
	Winner                         = 5,
	EPlayerGameOutcome_MAX         = 6,
};

enum class EStartPositionSetup : uint8
{
	OneLine                        = 0,
	TwoLines                       = 1,
	EStartPositionSetup_MAX        = 2,
};

enum class EPlayerGamePlayerLobbyState : uint8
{
	Waiting                        = 0,
	Accepted                       = 1,
	Declined                       = 2,
	EPlayerGamePlayerLobbyState_MAX = 3,
};

enum class EPlayerGamePlayerState : uint8
{
	Alive                          = 0,
	Dead                           = 1,
	Left                           = 2,
	Tied                           = 3,
	Winner                         = 4,
	EPlayerGamePlayerState_MAX     = 5,
};

enum class ECheckpointVisibilityType : uint8
{
	AllNotCrossed                  = 0,
	OnlyNext                       = 1,
	ECheckpointVisibilityType_MAX  = 2,
};

enum class EColorRequestMode : uint8
{
	NotLoaded                      = 0,
	GotRandom                      = 1,
	GotLast                        = 2,
	GotFavorite                    = 3,
	NoSaveFile                     = 4,
	EColorRequestMode_MAX          = 5,
};

enum class EPopupButtonLayout : uint8
{
	OK                             = 0,
	ConfirmCancel                  = 1,
	YesNo                          = 2,
	EPopupButtonLayout_MAX         = 3,
};

enum class EWorldSaveFileName : uint8
{
	Invalid                        = 0,
	Map_Island_01                  = 1,
	MV                             = 2,
	EWorldSaveFileName_MAX         = 3,
};

enum class ESaveSlotProvider : uint8
{
	Default                        = 0,
	MajorUpdate1                   = 1,
	ESaveSlotProvider_MAX          = 2,
};

enum class EQuestProgression : uint8
{
	Tiers                          = 0,
	Collection                     = 1,
	Steps                          = 2,
	EQuestProgression_MAX          = 3,
};

enum class EQuestReplication : uint8
{
	Local                          = 0,
	Shared                         = 1,
	EQuestReplication_MAX          = 2,
};

enum class EQuestDebugType : uint8
{
	Event                          = 0,
	Warning                        = 1,
	Error                          = 2,
	EQuestDebugType_MAX            = 3,
};

enum class ERelevancyFlag : uint8
{
	NONE                           = 0,
	COMPASS                        = 1,
	MAP                            = 2,
	TRACKER                        = 4,
	ERelevancyFlag_MAX             = 5,
};

enum class ERadarPointVisibilityState : uint8
{
	Undefined                      = 0,
	Invalid                        = 1,
	NotRelevant                    = 2,
	InvalidPosition                = 3,
	OutOfRange                     = 4,
	OutOfSight                     = 5,
	WaitingForReveal               = 6,
	Revealed                       = 7,
	Valid                          = 8,
	ERadarPointVisibilityState_MAX = 9,
};

enum class EClassRepNodeMapping : uint8
{
	NotRouted                      = 0,
	RelevantAllConnections         = 1,
	FrequencyBuckets               = 2,
	Spatialize_Frequency           = 3,
	SpatializeGrid_Static          = 4,
	SpatializeGrid_Dynamic         = 5,
	SpatializeGrid_Dormancy        = 6,
	EClassRepNodeMapping_MAX       = 7,
};

enum class EInlineImageSizeType : uint8
{
	FitLineHeight                  = 0,
	TextSize                       = 1,
	EInlineImageSizeType_MAX       = 2,
};

enum class EIconType : uint8
{
	Icon                           = 0,
	Input                          = 1,
	None                           = 2,
	EIconType_MAX                  = 3,
};

enum class EMismatchResult : uint8
{
	MR_NothingSpecial              = 0,
	MR_NumPoints0                  = 1,
	MR_MAX                         = 2,
};

enum class EConnectionSpline : uint8
{
	CS_SingleLaneSpline            = 0,
	CS_RightLaneSpline             = 1,
	CS_LeftLaneSpline              = 2,
	CS_MAX                         = 3,
};

enum class ELaneDirection : uint8
{
	LD_IndexIncreases              = 0,
	LD_IndexDecreases              = 1,
	LD_MAX                         = 2,
};

enum class EKeyValueType : uint8
{
	None                           = 0,
	Bool                           = 1,
	Int                            = 2,
	Float                          = 3,
	String                         = 4,
	EKeyValueType_MAX              = 5,
};

enum class ESaveGameType : uint8
{
	Player                         = 0,
	World                          = 1,
	ESaveGameType_MAX              = 2,
};

enum class EGGSplineMeshSpawnMode : uint8
{
	OneMeshBetweenSplinePoints     = 0,
	GivenNumberOfMeshesAlongSpline = 1,
	EGGSplineMeshSpawnMode_MAX     = 2,
};

enum class EGGSplineAlignment : uint8
{
	SplineTangentAtMeshStart       = 0,
	SplineTangentAtMeshMiddle      = 1,
	FollowSpline                   = 2,
	EGGSplineAlignment_MAX         = 3,
};

enum class EFollowMode : uint8
{
	None                           = 0,
	Kinematic                      = 1,
	MovementInput                  = 2,
	EFollowMode_MAX                = 3,
};

enum class EGGFenceSpacing : uint8
{
	StretchMesh                    = 0,
	NoStretchAndNoSpacing          = 1,
	SpaceEvenly                    = 2,
	FillSpline                     = 3,
	EGGFenceSpacing_MAX            = 4,
};

enum class ERotationPreset : uint8
{
	NoRotation                     = 0,
	YawOnly                        = 1,
	Full                           = 2,
	ERotationPreset_MAX            = 3,
};

enum class EGGSnapMode : uint8
{
	EntityLocation                 = 0,
	BoundsCenter                   = 1,
	BoundsBottom                   = 2,
	EGGSnapMode_MAX                = 3,
};

enum class EGGSplineToolSpawnMode : uint8
{
	Individual                     = 0,
	Together                       = 1,
	EGGSplineToolSpawnMode_MAX     = 2,
};

enum class ECanStartSplitScreenResult : uint8
{
	Yes                            = 0,
	No                             = 1,
	NeedToEndSession               = 2,
	ECanStartSplitScreenResult_MAX = 3,
};

enum class EAbilityInput : uint8
{
	GearAbility                    = 0,
	Headbutt                       = 1,
	Lick                           = 2,
	Baa                            = 3,
	Backkick                       = 4,
	Jump                           = 5,
	ChargeHeadbutt                 = 6,
	VehicleAbility                 = 0,
	Vehicle1                       = 1,
	Vehicle2                       = 2,
	EAbilityInput_MAX              = 7,
};

enum class EInputMode : uint8
{
	IM_Unknown                     = 0,
	IM_GameAndUI                   = 1,
	IM_UIOnly                      = 2,
	IM_GameOnly                    = 3,
	IM_MAX                         = 4,
};

enum class ECastResult : uint8
{
	Successful                     = 0,
	Failed                         = 1,
	ECastResult_MAX                = 2,
};

enum class EGGMultiplayerAutomationRoles : uint8
{
	Server                         = 0,
	Client                         = 1,
	ServerAndClient                = 2,
	MaxPlayers                     = 4,
	EGGMultiplayerAutomationRoles_MAX = 5,
};

enum class EStatusShapes : uint8
{
	SS_Sphere                      = 0,
	SS_Box                         = 1,
	SS_Capsule                     = 2,
	SS_MAX                         = 3,
};

enum class ECanSpreadOverride : uint8
{
	CSO_Default                    = 0,
	CSO_CannotSpread               = 1,
	CSO_CanSpread                  = 2,
	CSO_MAX                        = 3,
};

enum class EHasDurationOverride : uint8
{
	HDO_Default                    = 0,
	HDO_NoDuration                 = 1,
	HDO_HasDuration                = 2,
	HDO_MAX                        = 3,
};

enum class EStiffBodypart : uint8
{
	SB_Chest                       = 0,
	SB_Head                        = 1,
	SB_RightArm                    = 2,
	SB_LeftArm                     = 3,
	SB_RightLeg                    = 4,
	SB_LeftLeg                     = 5,
	SB_BackRightLeg                = 6,
	SB_BackLeftLeg                 = 7,
	SB_MAX                         = 8,
};

enum class EQueueDirections : uint8
{
	QD_Forward                     = 0,
	QD_Left                        = 1,
	QD_Right                       = 2,
	QD_MAX                         = 3,
};

enum class EGGSubtitlesEnabled : uint8
{
	Off                            = 0,
	Dialogue                       = 1,
	ClosedCaptions                 = 2,
	EGGSubtitlesEnabled_MAX        = 3,
};

enum class ESynchronizeActionState : uint8
{
	None                           = 0,
	GatherGoats                    = 1,
	ReadyToSynchronize             = 2,
	Synchronizing                  = 3,
	Synchronized                   = 4,
	ESynchronizeActionState_MAX    = 5,
};

enum class ETelemetryEvent : uint8
{
	Game_start                     = 0,
	Game_stop                      = 1,
	Item_rewarded                  = 2,
	Item_bought                    = 3,
	Item_equipped                  = 4,
	Minigame_played                = 5,
	Area_entered                   = 6,
	Area_left                      = 7,
	Event_discovered               = 8,
	Event_completed                = 9,
	Castle_goal_unlocked           = 10,
	Castle_boss_phase_started      = 11,
	Castle_boss_phase_completed    = 12,
	Trinket_found                  = 13,
	Ramp_jumped                    = 14,
	Performance_report             = 15,
	Network_failure                = 16,
	Client_travel                  = 17,
	ETelemetryEvent_MAX            = 18,
};

enum class ETelemetryState : uint8
{
	build_cl                       = 0,
	build_name                     = 1,
	World_id                       = 2,
	Game_mode                      = 3,
	Hardware_info                  = 4,
	Graphics_settings              = 5,
	ETelemetryState_MAX            = 6,
};

enum class EAreaEntranceType : uint8
{
	AET_Entrance                   = 0,
	AET_Exit                       = 1,
	AET_MAX                        = 2,
};

enum class EAreaSlotState : uint8
{
	ASS_Empty                      = 0,
	ASS_Loading                    = 1,
	ASS_Active                     = 2,
	ASS_Unloading                  = 3,
	ASS_MAX                        = 4,
};

enum class EInAreaState : uint8
{
	IAS_NotInArea                  = 0,
	IAS_TravelingTo                = 1,
	IAS_Inside                     = 2,
	IAS_TravelingFrom              = 3,
	IAS_MAX                        = 4,
};

enum class ETeleportAreaLoadingType : uint8
{
	TALT_InPersistentLevel         = 0,
	TALT_InstancedLevel            = 1,
	TALT_MAX                       = 2,
};

enum class ETeleportVehicleHandle : uint8
{
	TVH_ExitVehicle                = 0,
	TVH_TeleportWithVehicle        = 1,
	TVH_MAX                        = 2,
};

enum class ECallMode : uint8
{
	Queue                          = 0,
	Skip                           = 1,
	ForceQueue                     = 2,
	ECallMode_MAX                  = 3,
};

enum class EHookState : uint8
{
	HS_Active                      = 0,
	HS_Hidden                      = 1,
	HS_Attached                    = 2,
	HS_Retracting                  = 3,
	HS_MAX                         = 4,
};

enum class ETutorialSplitScreenBehaviour : uint8
{
	None                           = 0,
	OnlyPrimaryPlayer              = 1,
	SpawnForPrimaryPlayer          = 2,
	SpawnForPrimaryPlayerCompletedByAll = 3,
	CompletedByAll                 = 4,
	ETutorialSplitScreenBehaviour_MAX = 5,
};

enum class ETutorialInputVisibility : uint8
{
	Always                         = 0,
	Keyboard                       = 1,
	Gamepad                        = 2,
	ETutorialInputVisibility_MAX   = 3,
};

enum class ETutorialPersistence : uint8
{
	OncePerSave                    = 0,
	OncePerSession                 = 1,
	Always                         = 2,
	CountPerSave                   = 3,
	Custom                         = 4,
	ETutorialPersistence_MAX       = 5,
};

enum class EGGUpdate : uint8
{
	BaseGame                       = 0,
	Update1_Christmas              = 1,
	Update2_Eastern                = 2,
	Update3_Summer                 = 3,
	Update4_Vehicles               = 4,
	Multiverse                     = 5,
	EGGUpdate_MAX                  = 6,
};

enum class EUpdateNotificationMode : uint8
{
	None                           = 0,
	NewPlayers                     = 1,
	OldPlayers                     = 2,
	Both                           = 3,
	EUpdateNotificationMode_MAX    = 4,
};

enum class EHealthParticleState : uint8
{
	HPS_None                       = 0,
	HPS_LowHealth                  = 1,
	HPS_OnFire                     = 2,
	HPS_MAX                        = 3,
};

enum class EVehicleCrashType : uint8
{
	VCT_Other                      = 0,
	VCT_Character                  = 1,
	VCT_MAX                        = 2,
};

enum class EExitReason : uint8
{
	ER_Default                     = 0,
	ER_PoolingNPC                  = 1,
	ER_Teleporting                 = 2,
	ER_MAX                         = 3,
};

enum class EVehicleType : uint8
{
	VT_Car                         = 0,
	VT_Bike                        = 1,
	VT_Boat                        = 2,
	VT_MAX                         = 3,
};

enum class EVehicleState : uint8
{
	VS_Idle                        = 0,
	VS_GhostControlled             = 1,
	VS_PlayerControlled            = 2,
	VS_NPCControlled               = 3,
	VS_MAX                         = 4,
};

enum class ERoadVehicleType : uint8
{
	RVT_Car                        = 0,
	RVT_Boat                       = 1,
	RVT_MAX                        = 2,
};

enum class EVehicleDefaultState : uint8
{
	VDS_Idle                       = 0,
	VDS_Driven                     = 1,
	VDS_MAX                        = 2,
};

enum class EVehicleSpawnPool : uint8
{
	VSP_Both                       = 0,
	VSP_Driven                     = 1,
	VSP_Parked                     = 2,
	VSP_MAX                        = 3,
};

enum class EFloatingTypes : uint8
{
	FT_Character                   = 0,
	FT_RagdolledCharacter          = 1,
	FT_PActor                      = 2,
	FT_Vehicle                     = 3,
	FT_MAX                         = 4,
};

enum class EFloatSoundClassTypes : uint8
{
	FSCT_NPC                       = 0,
	FSCT_Goat                      = 1,
	FSCT_PActor                    = 2,
	FSCT_Vehicle                   = 3,
	FSCT_MAX                       = 4,
};

enum class EDateTimeStyleBP : uint8
{
	Default                        = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	Full                           = 4,
	EDateTimeStyleBP_MAX           = 5,
};

enum class ELSMovementState : uint8
{
	None                           = 0,
	Grounded                       = 1,
	InAir                          = 2,
	Ragdoll                        = 3,
	ELSMovementState_MAX           = 4,
};

enum class ERagdollAuthorityState : uint8
{
	Owner                          = 0,
	Server                         = 1,
	Other                          = 2,
	ERagdollAuthorityState_MAX     = 3,
};

enum class ERagdollStateOutputPins : uint8
{
	IsRagdoll                      = 0,
	IsNotRagdoll                   = 1,
	NotACharacter                  = 2,
	ERagdollStateOutputPins_MAX    = 3,
};

enum class ECustomMovementModes : uint8
{
	CMOVE_None                     = 0,
	CMOVE_WallRunning              = 1,
	CMOVE_Ladder                   = 2,
	CMOVE_Grinding                 = 3,
	CMOVE_GodMode                  = 4,
	CMOVE_External                 = 5,
	CMOVE_IdleNPC                  = 6,
	CMOVE_Diving                   = 7,
	CMOVE_MAX                      = 8,
};

enum class ELSIdleEntryState : uint8
{
	Normal                         = 0,
	LeftFoot                       = 1,
	RightFoot                      = 2,
	CrouchLeftFloot                = 3,
	CrouchRightFoot                = 4,
	ELSIdleEntryState_MAX          = 5,
};

enum class ELSLocomotionState : uint8
{
	None                           = 0,
	NotMoving                      = 1,
	Moving                         = 2,
	Pivot                          = 3,
	Stopping                       = 4,
	ELSLocomotionState_MAX         = 5,
};

enum class ELSPhysicsSimulationReplicationType : uint8
{
	Owner                          = 0,
	Server                         = 1,
	OverridePlayer                 = 2,
	ELSPhysicsSimulationReplicationType_MAX = 3,
};

enum class ERagdollChangePreset : uint8
{
	None                           = 0,
	ForceStateChange               = 1,
	IgnoreMinimalTimeInRagdoll     = 2,
	IgnoreMaxVelocity              = 3,
	ERagdollChangePreset_MAX       = 4,
};

enum class ELSInAirRotationMode : uint8
{
	LookingDirection               = 0,
	NoRotation                     = 1,
	AlignToHorizon                 = 2,
	MovementInput                  = 3,
	Helicopter                     = 4,
	ELSInAirRotationMode_MAX       = 5,
};

enum class ENoticeBehaviour : uint8
{
	InViewOnly                     = 0,
	InViewAndSurrounding           = 1,
	Everywhere                     = 2,
	ENoticeBehaviour_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.MatElement
struct FMatElement
{
public:
	class UMaterialInterface*                    MatIns;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C08[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Goat2.RagdollStateChangeSettings
struct FRagdollStateChangeSettings
{
public:
	bool                                         bForceStateChange;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERagdollChangeCollisionSettings   CollisionSetting;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C09[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          NewCapsuleCollisionProfile;                        // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NewMeshCollisionProfile;                           // 0xC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 IgnoreEffectSources;                               // 0x18(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERagdollChange                    RagdollChange;                                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreMinimalTimeInRagdoll;                       // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreRagdollVelocity;                            // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   StandupLocation;                                   // 0x3C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   Impulse;                                           // 0x48(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   Spin;                                              // 0x54(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocallyPredictToRagdoll;                          // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.MenuNavigationContext
struct FMenuNavigationContext
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Asset;                                             // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMenuNavigationType               Type;                                              // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.ActionHintStruct
struct FActionHintStruct
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ActionDescription;                                 // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ActionOverride;                                    // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EActionHintPosition               Position;                                          // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EActionHintVisibility             Visibility;                                        // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Interactable;                                      // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.MenuNavigationContextContainer
struct FMenuNavigationContextContainer
{
public:
	struct FGameplayTag                          MenuTag;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMenuNavigationContext                Context;                                           // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHold;                                             // 0x3C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPermanent;                                        // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0F[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.QuestReward
struct FQuestReward
{
public:
	int32                                        Tokens;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UGGGoatGearInfoDataAsset>> GoatGear;                                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UGGGoatGearInfoDataAsset>> StoreUnlocks;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         AutoEquipGear;                                     // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C11[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.QuestTier
struct FQuestTier
{
public:
	int32                                        TargetProgress;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpdateInterval;                                    // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuestReward                          Reward;                                            // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bCompleted;                                        // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C12[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Goat2.NotificationProperties
struct FNotificationProperties
{
public:
	float                                        Duration;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ContentTag;                                        // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENotificationPriority             Priority;                                          // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENotificationRemoval              Removal;                                           // 0xD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C13[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timestamp;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Goat2.Notification
struct FNotification
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNotificationProperties               Properties;                                        // 0x48(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C14[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.DistanceData
struct FDistanceData
{
public:
	int32                                        TypeFlag;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistance;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStickToEdge;                                      // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           FadeCurveOverride;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.RadarCoordinateData
struct FRadarCoordinateData
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStatic;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ActorLocationOffset;                               // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisibleDistance;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDistanceData>                 DistanceData;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Relevancy;                                         // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        WaypointOwners;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAlwaysTreatAsWaypoint;                            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C19[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Goat2.GGDialogueLine
struct FGGDialogueLine
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class USoundBase>             Sound;                                             // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneToAttachSound;                                 // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           Montage;                                           // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGGDialogueLineContinueMode       ContinueMode;                                      // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DisplayDuration;                                   // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Fact;                                              // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGGEquation                       Equation;                                          // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FactComparisonValue;                               // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          UpdateFactOnLineEnded;                             // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FactValueOnLineEnded;                              // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsingFactForAdvancing;                          // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowDisplayDuration;                              // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpdateFactOnLineEnded;                            // 0x96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C1C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.WorldStats
struct FWorldStats
{
public:
	int32                                        CompletedQuests;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SyncedGoatTowers;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChaosEarned;                                       // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  LastWorldAreas;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.GGSettingOption
struct FGGSettingOption
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct Goat2.GGGameSetting
struct FGGGameSetting
{
public:
	uint8                                        Pad_2C1E[0x80];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EngineConsoleVariableName;                         // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C1F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGGGameSettingType                SettingType;                                       // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldBeSaved;                                    // 0x99(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGGGameSettingsWidgetType         WidgetType;                                        // 0x9A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C20[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UGGGameSettingOptionUserWidget> CustomWidgetClass;                                 // 0xA0(0x28)(BlueprintVisible, BlueprintReadOnly, Transient, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MirroredSettingName;                               // 0xC8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MirroredCategory;                                  // 0xD0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C21[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EnabledThroughOtherSetting;                        // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGGGameSettingApplyMode           ApplyMode;                                         // 0xE8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGGPerformanceImpact              GPUPerformanceImpact;                              // 0xE9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGGPerformanceImpact              CPUPerformanceImpact;                              // 0xEA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGGPerformanceImpact              VRAMPerformanceImpact;                             // 0xEB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGGGameSettingAction>      SettingAction;                                     // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGGGameSettingEnableCondition> CustomEnableCondition;                             // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CategoryName;                                      // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlatformFlags                    PlatformRestrictions;                              // 0x108(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C23[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedPropertyPath                   CustomGetter;                                      // 0x110(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FCachedPropertyPath                   CustomSetter;                                      // 0x138(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bOnlyVisibleForPrimaryPlayer;                      // 0x160(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ValueRange;                                        // 0x164(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SliderStepSize;                                    // 0x16C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SliderStepSizeMouse;                               // 0x170(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ValueTextFactor;                                   // 0x174(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxFractionalDigits;                               // 0x178(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGGSettingOptionFactory>   OptionFactory;                                     // 0x180(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGGSettingOption>              Options;                                           // 0x188(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGGGameSettingOptionUserWidget> OptionWidget;                                      // 0x198(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentValue;                                      // 0x1A0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C26[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.PActorAttachmentSettings
struct FPActorAttachmentSettings
{
public:
	TSoftClassPtr<class AGGPhysicsActor>         PActorClass;                                       // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToHandSlot;                                 // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentHandSlot               HandSlot;                                          // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECarryItemType                    CarryItemType;                                     // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C27[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDropOnRagdoll;                                    // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanTakeDamage;                                    // 0x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBecomeLostObject;                              // 0x36(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDropOnStartle;                                 // 0x37(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Goat2.AccessorySettings
struct FAccessorySettings
{
public:
	class FName                                  Socket;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkinnedMesh;                                    // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideHair;                                         // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAccessoryAPActor;                               // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C28[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPActorAttachmentSettings             PActorAttachmentSettings;                          // 0x10(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FVector                               RelativeLocation;                                  // 0x48(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x54(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RelativeScale;                                     // 0x60(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C29[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Goat2.LoadedAppearancePart
struct FLoadedAppearancePart
{
public:
	class FString                                AppearanceString;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAppearanceParts                  AppearancePart;                                    // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           StaticMesh;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAccessorySettings                    AccessorySettings;                                 // 0x30(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	bool                                         bHideLowerBody;                                    // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.DownloadedImage
struct FDownloadedImage
{
public:
	class FString                                URL;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2DDynamic*                     Texture;                                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.GGLobbyAttributes
struct FGGLobbyAttributes
{
public:
	class FString                                HostStatus;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OwnerProductVersion;                               // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLobbyLocked;                                      // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                JoinCode;                                          // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelRequiresDLC;                                  // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.GGMemberAttributes
struct FGGMemberAttributes
{
public:
	class FString                                MemberStatus;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EquippedGear;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OwnedDLCs;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SteamNetId;                                        // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Goat2.GGLobbyMember
struct FGGLobbyMember
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueNetId;                                       // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UniqueIdentifier;                                  // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLobbyOwner;                                     // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSearchResult;                                   // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDataPending;                                    // 0x4A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGMemberAttributes                   MemberAttributes;                                  // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C30[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Goat2.GGLobbyInformation
struct FGGLobbyInformation
{
public:
	bool                                         bValidLobby;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LobbyId;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OwnerDisplayName;                                  // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      OwnerNetID;                                        // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OpenSlots;                                         // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSlots;                                          // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSearchResult;                                   // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOwnerDataPending;                               // 0x59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C32[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGGLobbyMember>                Members;                                           // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FGGLobbyAttributes                    LobbyAttributes;                                   // 0x70(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Goat2.NewsPreviewEntry
struct FNewsPreviewEntry
{
public:
	class FString                                ImageURL;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2DDynamic*                     PreviewImage;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           LocaTitles;                                        // 0x18(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        NewsSlot;                                          // 0x68(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C33[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.ParsedNews
struct FParsedNews
{
public:
	TArray<struct FNewsPreviewEntry>             Previews;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Goat2.WeightedElement
struct FWeightedElement
{
public:
	int32                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_TargetLoc
struct FWeightedElement_TargetLoc : public FWeightedElement
{
public:
	uint8                                        Pad_2C34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGNPCTargetLocation*                  TargetLocation;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x68 - 0x4)
// ScriptStruct Goat2.WeightedElement_ThrowingObject
struct FWeightedElement_ThrowingObject : public FWeightedElement
{
public:
	enum class ENPCThrowObjectType               ThrowObjectType;                                   // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSoftPointer;                                   // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C35[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGGPhysicsActor>           PActorClass;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AGGPhysicsActor>         SoftPActorClass;                                   // 0x10(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AGGPhysicsProjectile>      PhysicsProjectileClass;                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AGGPhysicsProjectile>    SoftPhysicsProjectileClass;                        // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct Goat2.AchievementDataRow
struct FAchievementDataRow : public FTableRowBase
{
public:
	class FText                                  AchievementName;                                   // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  AchievementDescription;                            // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                UnlockedIcon;                                      // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDifferentLockedIcon;                              // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LockedIcon;                                        // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AchievementIcon;                                   // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AGGAchievement>            AchievementClass;                                  // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C37[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EpicXP;                                            // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.RecentAchievementRPCs
struct FRecentAchievementRPCs
{
public:
	class AGGPlayerController*                   Player;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, float>                   RecentlySentAchievements;                          // 0x8(0x50)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGSettingsCategory_Base
struct FGGSettingsCategory_Base
{
public:
	uint8                                        Pad_2C38[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF08 (0xF20 - 0x18)
// ScriptStruct Goat2.GGAccessibilitySettings
struct FGGAccessibilitySettings : public FGGSettingsCategory_Base
{
public:
	uint8                                        Pad_2C39[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGGameSetting                        CameraSmoothing;                                   // 0x20(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        CameraShakes;                                      // 0x200(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ColorBlindness;                                    // 0x3E0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        FlipGamepadSticks;                                 // 0x5C0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ControllerRumble;                                  // 0x7A0(0x1E0)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGGGameSetting                        Subtitles;                                         // 0x980(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        SubtitlesTextSize;                                 // 0xB60(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ShowSubtitlesBackground;                           // 0xD40(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x12C8 (0x12E0 - 0x18)
// ScriptStruct Goat2.GGControlsSettings
struct FGGControlsSettings : public FGGSettingsCategory_Base
{
public:
	uint8                                        Pad_2C3A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGGameSetting                        ToggleSprint;                                      // 0x20(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        FlipSprint;                                        // 0x200(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        MouseSensitivity;                                  // 0x3E0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        FlipMouseCameraRotationX;                          // 0x5C0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        FlipMouseCameraRotationY;                          // 0x7A0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ControllerRumble;                                  // 0x980(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ControllerSensitivityX;                            // 0xB60(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        FlipControllerCameraRotationX;                     // 0xD40(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ControllerSensitivityY;                            // 0xF20(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        FlipControllerCameraRotationY;                     // 0x1100(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x788 (0x7A0 - 0x18)
// ScriptStruct Goat2.GGAudioSettings
struct FGGAudioSettings : public FGGSettingsCategory_Base
{
public:
	uint8                                        Pad_2C3B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGGameSetting                        MasterVolume;                                      // 0x20(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        SFXVolume;                                         // 0x200(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        VoiceVolume;                                       // 0x3E0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        MusicVolume;                                       // 0x5C0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x2B28 (0x2B40 - 0x18)
// ScriptStruct Goat2.GGGraphicsSettings
struct FGGGraphicsSettings : public FGGSettingsCategory_Base
{
public:
	uint8                                        Pad_2C3C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGGameSetting                        AutoDetectGraphicsSettings;                        // 0x20(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        CPUWeight;                                         // 0x200(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        GPUWeight;                                         // 0x3E0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ScreenMode;                                        // 0x5C0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        Resolution;                                        // 0x7A0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        VerticalSync;                                      // 0x980(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ConstrainAspectRatio;                              // 0xB60(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        FieldOfView;                                       // 0xD40(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        LimitFrameRate;                                    // 0xF20(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        FrameRateLimit;                                    // 0x1100(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ScreenScale;                                       // 0x12E0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        OverallQuality;                                    // 0x14C0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ViewDistance;                                      // 0x16A0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        AntiAliasing;                                      // 0x1880(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        Shadows;                                           // 0x1A60(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        TextureQuality;                                    // 0x1C40(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        CharacterModelQuality;                             // 0x1E20(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        FoliageQuality;                                    // 0x2000(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        PostProcessing;                                    // 0x21E0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        EffectsQuality;                                    // 0x23C0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ShadingQuality;                                    // 0x25A0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        MotionBlurQuality;                                 // 0x2780(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        MotionBlurAmount;                                  // 0x2960(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xB48 (0xB60 - 0x18)
// ScriptStruct Goat2.GGGeneralSettings
struct FGGGeneralSettings : public FGGSettingsCategory_Base
{
public:
	uint8                                        Pad_2C3D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGGameSetting                        TextLanguage;                                      // 0x20(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        ResetSave;                                         // 0x200(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        NetworkSetting;                                    // 0x3E0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        OnlineAccount;                                     // 0x5C0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        DLC_OST;                                           // 0x7A0(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGGGameSetting                        DemoPressMode;                                     // 0x980(0x1E0)(BlueprintVisible, Config, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGAggregatedTick
struct FGGAggregatedTick
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.GGAltGoatMeshTransformsForVehicles
struct FGGAltGoatMeshTransformsForVehicles
{
public:
	struct FVector                               LocationAsDriver;                                  // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationAsDriver;                                  // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LocationAsPassenger;                               // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationAsPassenger;                               // 0x24(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GGRagdollMovementSettings
struct FGGRagdollMovementSettings
{
public:
	class FName                                  MovementBone;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseForceLocation;                                 // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ForceLocationOffset;                               // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.GGLimbBones
struct FGGLimbBones
{
public:
	class FName                                  LeftArm;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightArm;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftHand;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightHand;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftFoot;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightFoot;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NeckBone;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Goat2.GearSlotPreviewSettings
struct FGearSlotPreviewSettings
{
public:
	bool                                         bUseDistanceInsteadOfSize;                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Size;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               OffsetLocation;                                    // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketOverride;                                    // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.SurfaceSounds
struct FSurfaceSounds
{
public:
	class USoundCue*                             Default;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Override;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Concrete;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Dirt;                                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Grass;                                             // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Metal;                                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             MetalHollow;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Parkett;                                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Rock;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Wet;                                               // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Wood;                                              // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Goat2.DefaultGearOverrides
struct FDefaultGearOverrides
{
public:
	enum class EGearSlot                         Slot;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetLocOverride;                                 // 0x4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotOverride;                                 // 0x10(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ScaleOverride;                                     // 0x1C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetLocAffectChildMeshes;                       // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetRotAffectChildMeshes;                       // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleAffectChildMeshes;                           // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C42[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Goat2.HandIKValue
struct FHandIKValue
{
public:
	struct FVector                               HandIKBoneLocation;                                // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandIKAlpha;                                       // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransformHandIKAlpha;                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.HandIKBones
struct FHandIKBones
{
public:
	class FName                                  Hand;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HandSocket;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HandIK;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Pocket;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Hip;                                               // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Goat2.AsyncDispatcherTickFunction
struct FAsyncDispatcherTickFunction : public FTickFunction
{
public:
	class UGGAsyncOverlapSubsystem*              Target;                                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Goat2.OverlapUpdateResult
struct FOverlapUpdateResult
{
public:
	uint8                                        Pad_2C43[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// ScriptStruct Goat2.PendingOverlapUpdate
struct FPendingOverlapUpdate
{
public:
	uint8                                        Pad_2C44[0x100];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.PendingImageRequest
struct FPendingImageRequest
{
public:
	uint8                                        Pad_2C45[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.DestroyedFenceLocations
struct FDestroyedFenceLocations
{
public:
	TArray<float>                                DestroyedLocations;                                // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C46[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GGStiffBones
struct FGGStiffBones
{
public:
	float                                        Chest;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Head;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightArm;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftArm;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightLeg;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftLeg;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackRightLeg;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackLeftLeg;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct Goat2.GGBaseAnimInstanceProxy_NPC
struct FGGBaseAnimInstanceProxy_NPC
{
public:
	uint8                                        Pad_2C47[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMoods                            Mood;                                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECarryItemType                    CarryItemType;                                     // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGrabbingCharacter;                              // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInVehicle;                                      // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPassenger;                                      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRiding;                                         // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENPCAnimationStates               CurrentAnimationState;                             // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPanicTypes                       PanicType;                                         // 0x17(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFrozen;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGStiffBones                         StiffBodyParts;                                    // 0x1C(0x20)(Edit, BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               HeadBoneScale;                                     // 0x3C(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C49[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PointingAtLocation;                                // 0x50(0x30)(Edit, BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AlphaPointAtTargetIKNode;                          // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlphaElbowBlendingPointAtTarget;                   // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     CurrentWalkCycleAnimation;                         // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     CurrentRunCycleAnimation;                          // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequenceEntryPinArray                RandomSequencesAsPin;                              // 0x98(0x10)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	float                                        FootLockAlphaIdle;                                 // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4A[0x4C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGGRandomPlayerSequenceEntry>  CurrentRandomSequences;                            // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C4B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x4 - 0x4)
// ScriptStruct Goat2.WeightedElement_Test
struct FWeightedElement_Test : public FWeightedElement
{
public:
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.GGChangedInputActionMapping
struct FGGChangedInputActionMapping
{
public:
	struct FInputActionKeyMapping                DefaultMapping;                                    // 0x0(0x28)(Config, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                NewMapping;                                        // 0x28(0x28)(Config, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.GGChangedInputAxisMapping
struct FGGChangedInputAxisMapping
{
public:
	struct FKey                                  DefaultKey;                                        // 0x0(0x18)(Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                  NewMapping;                                        // 0x18(0x28)(Config, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.ReplicatedStretchGoalState
struct FReplicatedStretchGoalState
{
public:
	class AGGCastleStretchGoal*                  StretchGoal;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretchGoalStates                State;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x40 - 0x10)
// ScriptStruct Goat2.ImpulseDamageEvent
struct FImpulseDamageEvent : public FDamageEvent
{
public:
	struct FVector                               Impulse;                                           // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VelChange;                                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanTriggerRagdoll;                                 // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExplosionTrigger                 CanTriggerExplosion;                               // 0x1E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TriggerTimer;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DamageLocation;                                    // 0x24(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamagedBodyIndex;                                  // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCauseMoodChange;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBreakDestructibles;                            // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClientSidePredictedEvent;                         // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Goat2.GGReleaseOptions
struct FGGReleaseOptions
{
public:
	float                                        TimeToScale;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetScale;                                       // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageType>               DamageType;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpulseDamageEvent                   DamageEvent;                                       // 0x20(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GGCatchOptions
struct FGGCatchOptions
{
public:
	struct FVector                               TargetScale;                                       // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToScale;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HoldingLocation;                                   // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGGLocationSpace                  LocationSpace;                                     // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C50[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Goat2.ChaosSourceTableRow
struct FChaosSourceTableRow : public FTableRowBase
{
public:
	int32                                        ChaosAward;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRecurring;                                   // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideCooldown;                                 // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C51[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverriddenCooldown;                                // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SourceComment;                                     // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.ChaosCounterCooldownSetting
struct FChaosCounterCooldownSetting
{
public:
	class FString                                ChaosSourceFilter;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownLength;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C53[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.ChaosCounterCooldownEntry
struct FChaosCounterCooldownEntry
{
public:
	class FString                                ChaosSource;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownLength;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EntryTimestamp;                                    // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.MountedOnCharacter
struct FMountedOnCharacter
{
public:
	class AGGCharacter*                          CurrentMount;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGCharacter*                          LastMount;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.EffectSourcesPair
struct FEffectSourcesPair
{
public:
	struct FGameplayTag                          EffectTag;                                         // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SourceTag;                                         // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.CharacterAttachmentSettings
struct FCharacterAttachmentSettings
{
public:
	bool                                         bDropOnRagdoll;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTakeDamage;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESameSocketAttach                 SameSocketAttachAction;                            // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C54[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RelativeLocation;                                  // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ActorScale;                                        // 0x1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               MeshOverride;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBecomeLostObject;                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDropOnStartle;                                 // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNonPActorDisableCollision;                        // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C55[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.AttachedActor
struct FAttachedActor
{
public:
	class AActor*                                AttachedActor;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDropOnRagdoll;                                    // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanTakeDamage;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBecomeLostObject;                              // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDropOnStartle;                                 // 0xB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C56[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.OriginalSkelMassElement
struct FOriginalSkelMassElement
{
public:
	float                                        OriginalDensity;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OriginalMass;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.CharacterCollisionState
struct FCharacterCollisionState
{
public:
	struct FGameplayTag                          CapsuleProfile;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DefaultCapsuleProfile;                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DefaultCapsuleProfileRagdoll;                      // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MeshProfile;                                       // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DefaultMeshProfile;                                // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DefaultMeshProfileRagdoll;                         // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct Goat2.NPCCollisionState
struct FNPCCollisionState : public FCharacterCollisionState
{
public:
	struct FGameplayTag                          OverlapCapsuleProfile;                             // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DefaultOverlapCapsuleProfile;                      // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.GGClientMovementOverrideData
struct FGGClientMovementOverrideData
{
public:
	float                                        Duration;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGCharacter*                          ControllingCharacter;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C57[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.TimestampedActorReference
struct FTimestampedActorReference
{
public:
	uint8                                        Pad_2C58[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Goat2.GGHitRespondFlag
struct FGGHitRespondFlag
{
public:
	bool                                         bShouldRespond;                                    // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGGImpactResult                   RespondsWhenCrouched;                              // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGGImpactResult                   RespondsWhenProne;                                 // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C59[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.GGHitRespond
struct FGGHitRespond
{
public:
	struct FGGHitRespondFlag                     IsPushable;                                        // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGGHitRespondFlag                     IsStumbleable;                                     // 0x4(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGGHitRespondFlag                     IsRagdollable;                                     // 0x8(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GGRecentlyHitActor
struct FGGRecentlyHitActor
{
public:
	class AActor*                                HitActor;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGStumblingCharacter
struct FGGStumblingCharacter
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.ChatFormat
struct FChatFormat
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FName                                  DefaultStyle;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.OverlappingComponent
struct FOverlappingComponent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Goat2.ComponentToSweep
struct FComponentToSweep
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5D[0xA8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOverlappingComponent>         OverlappingComponents;                             // 0xB0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct Goat2.GGControllerRumbleEffectRow
struct FGGControllerRumbleEffectRow : public FTableRowBase
{
public:
	struct FGameplayTag                          EffectTag;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UForceFeedbackEffect>   ForceFeedbackEffect;                               // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UForceFeedbackAttenuation> Attenuation;                                       // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundWave>             HapticFeedback;                                    // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.MoodAnimationArray
struct FMoodAnimationArray
{
public:
	enum class EMoods                            Mood;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGGRandomPlayerSequenceEntry>  OverrideAnimations;                                // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x8 - 0x4)
// ScriptStruct Goat2.WeightedElement_CrowdType
struct FWeightedElement_CrowdType : public FWeightedElement
{
public:
	enum class ECrowdTypes                       Type;                                              // 0x4(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.CommandCooldown
struct FCommandCooldown
{
public:
	class AGGNPC*                                NPC;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownTimestamp;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownLength;                                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.NPCGroupElement
struct FNPCGroupElement
{
public:
	class AGGNPC*                                NPC;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C60[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.NPCGroup
struct FNPCGroup
{
public:
	TArray<struct FNPCGroupElement>              NPCElements;                                       // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       StandLocations;                                    // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                OpenStandLocations;                                // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               LookAtLocation;                                    // 0x30(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C61[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RecentRequest
struct FRecentRequest
{
public:
	class AGGNPC*                                NPC;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C62[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.GGCustomInputMapping
struct FGGCustomInputMapping
{
public:
	class FName                                  InputMappingName;                                  // 0x0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputChord                           InputChord;                                        // 0x8(0x20)(Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x28(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x2C(0x8)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C63[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GGDelegateHandleWrapper
struct FGGDelegateHandleWrapper
{
public:
	uint8                                        Pad_2C64[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Goat2.GGDestructibleInfo
struct FGGDestructibleInfo
{
public:
	int32                                        MinShardCount;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxShardCount;                                     // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnAllShards;                                   // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinShardLifetime;                                  // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxShardLifetime;                                  // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpulseMultiplier;                                 // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularImpulseMin;                                 // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularImpulseMax;                                 // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMesh*>                   ShardMeshes;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UStaticMesh*>                   PActorMeshes;                                      // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UParticleSystem*                       DestructionParticle;                               // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             DestructionSound;                                  // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeDestroyedByDamage;                           // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeDestroyedByImpact;                           // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C66[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageThreshold;                                   // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactThreshold;                                   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ETypeOfDamage>             DamageTypeWhiteList;                               // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.GGDialogueBranch
struct FGGDialogueBranch
{
public:
	bool                                         bActivateBranchIfPreviousIsFinished;               // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          EntryCondition;                                    // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyCheckIfFactExists;                            // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGGEquation                       Equation;                                          // 0xD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C69[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FactComparisonValue;                               // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGGDialogueLine>               DialogueLines;                                     // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GGHideDialogueSettings
struct FGGHideDialogueSettings
{
public:
	struct FGameplayTag                          FactForHidingDialogue;                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGGEquation                       Equation;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FactComparisonValue;                               // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.GGDialogueLineIndex
struct FGGDialogueLineIndex
{
public:
	int32                                        Branch;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGDisguiseState
struct FGGDisguiseState
{
public:
	class AGGPhysicsActor_Base*                  PhysicsActorDisguise;                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGNPC*                                NPCDisguise;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRevertDisguiseOnAbilityPress;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GGDisguiseAsNPCParams
struct FGGDisguiseAsNPCParams
{
public:
	bool                                         bRevertDisguiseOnAbilityPress;                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGGDisguiseComponent>      DisguiseComponentClass;                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GGDisguiseAsPactorParams
struct FGGDisguiseAsPactorParams
{
public:
	bool                                         bRevertDisguiseOnAbilityPress;                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleportToDisguiseLocation;                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGGDisguiseComponent>      DisguiseComponentClass;                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.DLCAssetLink
struct FDLCAssetLink
{
public:
	enum class EGoatDLC                          DLC;                                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AssetPath;                                         // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.DLCLevelData
struct FDLCLevelData
{
public:
	class FString                                LevelDataID;                                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGoatDLC                          DLC;                                               // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Level;                                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESaveSlotProvider                 SaveSlotProvider;                                  // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerWorldAreaAsset;                              // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelThumbnailPath;                                // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.DLCSettingEntry
struct FDLCSettingEntry
{
public:
	TMap<enum class EGoatDLC, class FName>       EntitlementIds;                                    // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x54 (0x58 - 0x4)
// ScriptStruct Goat2.WeightedElement_ActorAttachment
struct FWeightedElement_ActorAttachment : public FWeightedElement
{
public:
	uint8                                        Pad_2C72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToHandSlot;                                 // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentHandSlot               HandSlot;                                          // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECarryItemType                    CarryItemType;                                     // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C73[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeLocation;                                  // 0x1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ActorScale;                                        // 0x34(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDropOnRagdoll;                                    // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanTakeDamage;                                    // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C74[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MeshOverride;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBecomeLostObject;                              // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDropOnStartle;                                 // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C75[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4C (0x50 - 0x4)
// ScriptStruct Goat2.WeightedElement_BehaviorActor
struct FWeightedElement_BehaviorActor : public FWeightedElement
{
public:
	uint8                                        Pad_2C76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AActor>                 Actor;                                             // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanEditPickupActors;                              // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeightedElement_ActorAttachment> PickupActors;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimMontage*                          PickupAnimation;                                   // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.QuestHint
struct FQuestHint
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        BroadcastRadius;                                   // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeverActivate;                                    // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        HintSequence;                                      // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Activated;                                         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C79[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x28 - 0x4)
// ScriptStruct Goat2.WeightedElement_PerformerElement
struct FWeightedElement_PerformerElement : public FWeightedElement
{
public:
	uint8                                        Pad_2C7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGGNPC>                    StreetPerformerClass;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttractChance;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                             StandLocationQuery;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         OverridePerformBT;                                 // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x8 - 0x4)
// ScriptStruct Goat2.WeightedElement_Mood
struct FWeightedElement_Mood : public FWeightedElement
{
public:
	enum class EMoods                            Mood;                                              // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C7B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4C (0x50 - 0x4)
// ScriptStruct Goat2.StallSpawnElement
struct FStallSpawnElement : public FWeightedElement
{
public:
	uint8                                        Pad_2C7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGGNPC>                    VendorNPCClass;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AGGStreetStall>            StallActorClass;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttractChance;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChanceToSetMood;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeightedElement_Mood>         PotentialMoodChanges;                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSellItems;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeightedElement_ActorAttachment> SellItems;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GoatInTriggers
struct FGoatInTriggers
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AGGExponentialFogTrigger*>      Triggers;                                          // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.GGFact
struct FGGFact
{
public:
	struct FGameplayTag                          Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGCachedMeshMaterial
struct FGGCachedMeshMaterial
{
public:
	class UMeshComponent*                        Mesh;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Goat2.GGGameSettingHandle
struct FGGGameSettingHandle
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Category;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalPlayerID;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GGFact_GearListPair
struct FGGFact_GearListPair
{
public:
	struct FGameplayTag                          Fact;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGGoatGearList*                       GearList;                                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Goat2.GGQuest_GearListPair
struct FGGQuest_GearListPair
{
public:
	class FString                                EventID;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGGoatGearList*                       GearList;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AGGQuestBase>            Quest;                                             // 0x18(0x28)(Edit, RepSkip, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEventCompleted;                                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C7F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GGPlayerInputMappings
struct FGGPlayerInputMappings
{
public:
	TArray<struct FGGChangedInputAxisMapping>    InputAxisMappings;                                 // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGGChangedInputActionMapping>  InputActionMappings;                               // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GatherGoatParameters
struct FGatherGoatParameters
{
public:
	class AActor*                                GatherAroundActor;                                 // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceConsideredNear;                            // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C80[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGGPlayerState*>                PlayersToIgnore;                                   // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.InviteNotificationParameters
struct FInviteNotificationParameters
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAutoAppendHoldPrompt;                             // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.CountNotificationParameters
struct FCountNotificationParameters
{
public:
	bool                                         bRemoveAutomatically;                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManuallySetReachedTarget;                         // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C82[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Goat2.CurrentGatherEvent
struct FCurrentGatherEvent
{
public:
	class FString                                GatherID;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGatherGoatParameters                 GatherParameters;                                  // 0x10(0x20)(RepSkip, NativeAccessSpecifierPrivate)
	struct FInviteNotificationParameters         InviteNotificationParameters;                      // 0x30(0x40)(RepSkip, NativeAccessSpecifierPrivate)
	bool                                         bShowGoatCountNotification;                        // 0x70(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCountNotificationParameters          CounterNotificationParameters;                     // 0x78(0x38)(RepSkip, NativeAccessSpecifierPrivate)
	TArray<class AGGPlayerState*>                GatheredPlayers;                                   // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.CommanderSoundPairing
struct FCommanderSoundPairing
{
public:
	class USoundCue*                             NPCSelectVoice;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             NPCMoveVoice;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_DropMeshes
struct FWeightedElement_DropMeshes : public FWeightedElement
{
public:
	uint8                                        Pad_2C84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Goat2.GGAppearanceSet
struct FGGAppearanceSet
{
public:
	struct FSoftObjectPath                       HairMeshPath;                                      // 0x0(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       HairMaterialPath;                                  // 0x18(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       HeadMeshPath;                                      // 0x30(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       SkinMaterialPath;                                  // 0x48(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideUpperBody;                                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       UpperBodyMeshPath;                                 // 0x68(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       UpperBodyClothMaterialPath;                        // 0x80(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideLowerBody;                                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       LowerBodyMeshPath;                                 // 0xA0(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       LowerBodyClothMaterialPath;                        // 0xB8(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.RapturedNPC
struct FRapturedNPC
{
public:
	class AGGNPC*                                NPC;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   TargetLocation;                                    // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RaptureTimestamp;                                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VODelay;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayedVO;                                         // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C87[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_FishMeshes
struct FWeightedElement_FishMeshes : public FWeightedElement
{
public:
	uint8                                        Pad_2C88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Goat2.GhostParameters
struct FGhostParameters
{
public:
	bool                                         bInfiniteSearchRadius;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInfiniteSearchTime;                               // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C89[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GhostSearchRadius;                                 // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GhostSearchFrequency;                              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GhostLifeSpanBeforeVanishing;                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInfinitePossessTime;                              // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GhostPossessTime;                                  // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrusterForce;                                     // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GoatRagdollImpactParticles
struct FGoatRagdollImpactParticles
{
public:
	float                                        ImpulseThreshold;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ParticleSystem;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.LickedComponent
struct FLickedComponent
{
public:
	class UPrimitiveComponent*                   GrabbedComp;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              MeshLickRotation;                                  // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RelativeLickLocation;                              // 0x1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                IKCollisionResponse;                               // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C8C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.BaaSoundOverride
struct FBaaSoundOverride
{
public:
	struct FGameplayTag                          Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            BaaSound;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C8D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.ChargeHeadbuttParticleStage
struct FChargeHeadbuttParticleStage
{
public:
	class UParticleSystem*                       ChargeParticle;                                    // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ReleaseParticle;                                   // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Threshold;                                         // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C8E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Goat2.RepelModifiers
struct FRepelModifiers
{
public:
	float                                        PowerMultiplier;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizeMultiplier;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFromGoatMultiplier;                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDistanceFromGoatMultiplier;                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AdditionalImpulse;                                 // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct Goat2.GGTargetData
struct FGGTargetData : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_2C8F[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.LSGaitsFloat
struct FLSGaitsFloat
{
public:
	float                                        Walking;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Running;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sprinting;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x210 (0x980 - 0x770)
// ScriptStruct Goat2.LSAnimInstanceProxy
struct FLSAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	float                                        Speed;                                             // 0x770(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x778(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InputDirection;                                    // 0x77C(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSGait                           Gait;                                              // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     MovementMode;                                      // 0x789(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PreviousMovementMode;                              // 0x78A(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSStance                         Stance;                                            // 0x78B(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAiming;                                         // 0x78C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRagdoll;                                        // 0x78D(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStandingUp;                                     // 0x78E(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSRotationMode                   RotationMode;                                      // 0x78F(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSViewMode                       ViewMode;                                          // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLSGaitsFloat                         MovementSpeeds;                                    // 0x794(0xC)(Edit, BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AimOffset;                                         // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkRunBlend;                                      // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRightFood;                                        // 0x7AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartPosition;                                     // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanRotation;                                      // 0x7B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanAcceleration;                                  // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanInAir;                                         // 0x7BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandPredictionAlpha;                               // 0x7C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeanGrounded;                                      // 0x7C4(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSLocomotionState                ActiveLocomotionState;                             // 0x7CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             FeetPosition;                                      // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSIdleEntryState                 IdleEntryState;                                    // 0x7D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSMovementDirection              MovementDirection;                                 // 0x7D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C94[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FlailRate;                                         // 0x7DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlailBlendAlpha;                                   // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWantsToTurnInPlace;                               // 0x7E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetMeshLocation;                                // 0x7E8(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetMeshRotation;                                // 0x7F4(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x800(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalPlayRate;                                    // 0x804(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OverlayState;                                      // 0x808(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrideBlend;                                       // 0x80C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootBoneAdjustmentAlpha;                           // 0x810(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RootBoneTargetLocation;                            // 0x814(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RootBoneTargetRotation;                            // 0x820(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         PoseSnapshot;                                      // 0x830(0x38)(BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C97[0x118];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x9D0 - 0x980)
// ScriptStruct Goat2.GGGoatAnimInstanceProxy
struct FGGGoatAnimInstanceProxy : public FLSAnimInstanceProxy
{
public:
	struct FVector                               TongueLocation;                                    // 0x980(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TongueActive;                                      // 0x98C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInShallowWater;                                 // 0x990(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UnderWaterPitchAngle;                              // 0x994(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDiving;                                         // 0x998(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHeadbuttCharging;                               // 0x999(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C99[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGoatAnimInstance*                   GoatAnimInstance;                                  // 0x9A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGGGoatMovementComponent*              GoatMovementComponent;                             // 0x9A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C9A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.EmoteNotify
struct FEmoteNotify
{
public:
	struct FGameplayTag                          ReactType;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EMoods>                    SkipMoods;                                         // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         SkipRagdolls;                                      // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipPanicking;                                     // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipCannotChangeMood;                              // 0x22(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C9C[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.FeetMeshElement
struct FFeetMeshElement
{
public:
	class UObject*                               Mesh;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGoatChildSockets                 Socket;                                            // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOtherSocket;                                      // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C9D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0xC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OffsetLocation;                                    // 0x14(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0x20(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x2C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>             AnimBlueprint;                                     // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.FeetMeshOverrideElement
struct FFeetMeshOverrideElement
{
public:
	struct FGameplayTag                          AltGoatTag;                                        // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagString;                                         // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFeetMeshElement>              FeetMeshes;                                        // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.BeatInfo
struct FBeatInfo
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             KickSound;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             SnareSound;                                        // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             HiHatSound;                                        // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.CableAttachLocation
struct FCableAttachLocation
{
public:
	bool                                         bAbilityActive;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   StickLocation;                                     // 0x4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       AttachComp;                                        // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCharacter;                                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C9F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.LaserHit
struct FLaserHit
{
public:
	class AActor*                                HitActor;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0x10(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x1C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.TraceEndPoint
struct FTraceEndPoint
{
public:
	struct FVector_NetQuantize10                 TraceEndLocation;                                  // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceHitStatus;                                   // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.VRHeadsetCameraPlacementInfo
struct FVRHeadsetCameraPlacementInfo
{
public:
	enum class EGoatSockets                      Socket;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomSocket;                                     // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomSocketName;                                  // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FPSCameraLocationOffset;                           // 0xC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              FPSCameraRotationOffset;                           // 0x18(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAbsolutePitch;                                    // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbsoluteRoll;                                     // 0x25(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFaithfulRotationWhenGoatIsRagdolled;              // 0x26(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFaithfulRotationWhenGoatIsMidAir;                 // 0x27(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Goat2.ThumbnailGenerationSettings
struct FThumbnailGenerationSettings
{
public:
	bool                                         bNeedsUpdate;                                      // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOptimalCameraTransform;                        // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateThumbnail;                                // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA2[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CameraBoomTransform;                               // 0x10(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CameraTargetArmLength;                             // 0x40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA3[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GearPartRelativeTransform;                         // 0x50(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       Animation;                                         // 0x80(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationPosition;                                 // 0x88(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.SplitScreenStyleData
struct FSplitScreenStyleData
{
public:
	int32                                        ControllerId;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA5[0x2C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGoatGearStyleDataAsset*             CurrentStyleData;                                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.GGFolderFilter
struct FGGFolderFilter
{
public:
	class FString                                FolderToInclude;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        SubFoldersToIgnore;                                // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIgnoreDefaultUnlocks;                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GearSlot
struct FGearSlot
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGGoatGearInfoDataAsset*              DataAsset;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x10(0x4)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGiveAbility;                                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGearSlotDefinition*                 Definition;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Goat2.GearLoadElement
struct FGearLoadElement
{
public:
	TSoftClassPtr<class USceneComponent>         GearClass;                                         // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGGoatGearInfoDataAsset*              DataAsset;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGiveAbility;                                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGearEquipContext                 EquipContext;                                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA8[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GearEquipElementData
struct FGearEquipElementData
{
public:
	class UGGGoatGearInfoDataAsset*              DataAsset;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGiveAbility;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGoatGearStyleDataAsset*             StyleData;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GearEquipElement
struct FGearEquipElement
{
public:
	TSubclassOf<class USceneComponent>           GearClass;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGGoatGearInfoDataAsset*              DataAsset;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGiveAbility;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CAA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GearParticleSystem
struct FGearParticleSystem
{
public:
	class UParticleSystem*                       StaticMesh;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ModuleNameSM;                                      // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       SkeletalMesh;                                      // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ModuleNameSK;                                      // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.PreviewQueueData
struct FPreviewQueueData
{
public:
	class UGGGoatGearInfoDataAsset*              DataAsset;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CAB[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.PreviewGearData
struct FPreviewGearData
{
public:
	class UGGGoatGearInfoDataAsset*              DataAsset;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CAC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.FurSplineOverride
struct FFurSplineOverride
{
public:
	class UGGGoatGear_Skel_Body*                 BodyGear;                                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFurSplines*                           FurSplineOverride;                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.MeshLocModifierOverrideElement
struct FMeshLocModifierOverrideElement
{
public:
	struct FGameplayTag                          AltGoatTag;                                        // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagString;                                         // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MeshLocModifierOverride;                           // 0x18(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Goat2.AltGoatOverride
struct FAltGoatOverride
{
public:
	struct FGameplayTag                          AltGoatTag;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagString;                                         // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketOverride;                                    // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OffsetLocOverride;                                 // 0x20(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotOverride;                                 // 0x2C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ScaleOverride;                                     // 0x38(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetLocAffectChildMeshes;                       // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetRotAffectChildMeshes;                       // 0x45(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleAffectChildMeshes;                           // 0x46(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CAD[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.CanEquipGear
struct FCanEquipGear
{
public:
	struct FGameplayTag                          AltGoatTag;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagString;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.GoatGearData
struct FGoatGearData
{
public:
	class FString                                AssetID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGearSlot                         Slot;                                              // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MeshLocModifier;                                   // 0x14(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeshLocModifierPriority;                           // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CAF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Goat2.AltGoatChildMeshOverride
struct FAltGoatChildMeshOverride
{
public:
	struct FGameplayTag                          AltGoatTag;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagString;                                         // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableChildMesh;                                 // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ChildMesh;                                         // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGoatChildSockets                 Socket;                                            // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOtherSocket;                                      // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x2C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OffsetLocation;                                    // 0x34(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x4C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkinnedMeshOverride              SkinnedMesh;                                       // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAnimInstance>             AnimBlueprint;                                     // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.ChildMeshElement
struct FChildMeshElement
{
public:
	class UObject*                               ChildMesh;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGoatChildSockets                 Socket;                                            // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOtherSocket;                                      // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0xC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToGearPart;                                 // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetLocation;                                    // 0x18(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0x24(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x30(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachIncludeScale;                               // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreDefaultTransOverride;                        // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkinnedMesh;                                      // 0x3E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAnimInstance>             AnimBlueprint;                                     // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAltGoatChildMeshOverride>     AltGoatOverrides;                                  // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.ChildMeshDefaultMaterials
struct FChildMeshDefaultMaterials
{
public:
	TArray<struct FMatElement>                   Materials;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GoatKartCircuitResult
struct FGoatKartCircuitResult
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGRoadSplineComponent*                Spline;                                            // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SplinePoint;                                       // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGRoadPath
struct FGGRoadPath
{
public:
	TArray<struct FGoatKartCircuitResult>        Points;                                            // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGForwardSpline
struct FGGForwardSpline
{
public:
	class UGGGrindableSplineComponent*           Spline;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Goat2.GGGrindingVariables
struct FGGGrindingVariables
{
public:
	uint8                                        Pad_2CBA[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGrindableSplineComponent*           CurrentSpline;                                     // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGGrindableSplineComponent*           LastSpline;                                        // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CBB[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              WindParticleSystem;                                // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              BlueTrailParticleSystem;                           // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              WhiteWindBigParticleSystem;                        // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              WhiteWindSmallLeftParticleSystem;                  // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              WhiteWindSmallRightParticleSystem;                 // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Goat2.GGGrindingParams
struct FGGGrindingParams
{
public:
	float                                        Acceleration;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartGrindingSplineDistanceCondition;              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactRagdollThreshold;                            // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterUpAdjust;                                 // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JumpZHeight;                                       // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SidewaysJumpFactor;                                // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HyperspeedAcceleration;                            // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HyperspeedMaxSpeed;                                // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HyperspeedActivationTime;                          // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          HyperspeedCameraShakeClass;                        // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          InitialHyperspeedCameraShakeClass;                 // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          TurnRightMontage;                                  // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          TurnLeftMontage;                                   // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultTurnDuration;                               // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputBlockDurationWhileTurning;                    // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoJumpOffDelayWhenStuck;                         // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialLerpSpeed;                                  // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartGrindingTurnAroundDistance;                   // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CBC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.Braking
struct FBraking
{
public:
	bool                                         bIsBraking;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartBrakingSpeed;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Goat2.RotationTrick
struct FRotationTrick
{
public:
	class FString                                TrickName;                                         // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CustomTextFormat;                                  // 0x28(0x18)(Edit, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GGUpdate
struct FGGUpdate
{
public:
	enum class EGGUpdate                         EnumValue;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlugin;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CBF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGTargetConnectionInfo
struct FGGTargetConnectionInfo
{
public:
	class AGGGrindablePowerLineBase*             TargetToConnectTo;                                 // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartConnectPoint;                                 // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndConnectPoint;                                   // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct Goat2.HelpMenuDataRow
struct FHelpMenuDataRow : public FTableRowBase
{
public:
	class FText                                  HelpEntryTitle;                                    // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HelpEntryBody;                                     // 0x20(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  MobileHelpEntryBody;                               // 0x38(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             HelpEntryTexture;                                  // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct Goat2.SpawnParams
struct FSpawnParams
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorToSpawnClass;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                Owner;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 Instigator;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;                         // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnIncrementalSpawnFailed;                          // 0x58(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIncrementalSpawnBeforeFinish;                    // 0x68(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIncrementalSpawnPostActorConstruction;           // 0x78(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIncrementalSpawnAfterFinish;                     // 0x88(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC1[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct Goat2.SpawnData
struct FSpawnData
{
public:
	struct FSpawnParams                          Params;                                            // 0x0(0x100)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.GGVirtualInputAction
struct FGGVirtualInputAction
{
public:
	uint8                                        Pad_2CC3[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGInputBindingHandle
struct FGGInputBindingHandle
{
public:
	uint8                                        Pad_2CC4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Goat2.GGInputBindingDataTableRow
struct FGGInputBindingDataTableRow : public FTableRowBase
{
public:
	class FText                                  Description;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  InverseBinding;                                    // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CategoryName;                                      // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeBoundToGamepad;                              // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeBoundToKeyboard;                             // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.LevelSequenceSignificanceActorSettings
struct FLevelSequenceSignificanceActorSettings
{
public:
	TSoftObjectPtr<class AActor>                 TargetActor;                                       // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionEnabled                 CollisionEnabled;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateOverlapEvents;                            // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGeneratePhysicsVolumeEvents;                      // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoSkeletonUpdate;                                 // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.LevelSequenceSignificanceReaction
struct FLevelSequenceSignificanceReaction
{
public:
	float                                        SignificanceLowLimit;                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SignificanceHighLimit;                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TickInterval;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLevelSequenceSignificanceActorSettings> ActorSettings;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.PathPrioMapping
struct FPathPrioMapping
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Prio;                                              // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.OverrideLocationsParameters
struct FOverrideLocationsParameters
{
public:
	TArray<struct FVector>                       Locations;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         TrackedActors;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        AutomaticallyRemoveAfterDuration;                  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectSignificance;                               // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.OverrideLocations
struct FOverrideLocations
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SourceTag;                                         // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CombinedName;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOverrideLocationsParameters          Parameters;                                        // 0x20(0x28)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2CCA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.TravelSettings
struct FTravelSettings
{
public:
	bool                                         bDoFadeOut;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CCB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                FadeColor;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeDuration;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManualLevelStartLoadingScreen;                    // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UWorld>                 OverrideTransitionLevel;                           // 0x10(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OverrideTransitionLevelStr;                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDefaultPlayerStart;                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CCD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.LoadingScreenHint
struct FLoadingScreenHint
{
public:
	class FText                                  HintCaption;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Hint;                                              // 0x18(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  MobileHint;                                        // 0x30(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Goat2.LoadingScreenHintRow
struct FLoadingScreenHintRow : public FTableRowBase
{
public:
	TArray<struct FLoadingScreenHint>            Hints;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CCE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.LoadingWidgetParameter
struct FLoadingWidgetParameter
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CCF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Goat2.LoadingScreenParameters
struct FLoadingScreenParameters
{
public:
	bool                                         bAutomaticallyRemove;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoFadeOut;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeOutDuration;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForceTimeInFadeOut;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoFadeIn;                                         // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeInDuration;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FadeColor;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseWidget;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeAfterFadeForWidget;                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGGTeleportLoadingScreen>  OverrideLoadingScreen;                             // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLoadingWidgetParameter>       WidgetParameters;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAddSoundMix;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEffectSources;                                 // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckForStreamingLevels;                          // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckForPActors;                                  // 0x3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckForNPC;                                      // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeLimit;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForTeleport;                                      // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBeforeIntroSeq;                                   // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD4[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Goat2.CurrentLoadingScreen
struct FCurrentLoadingScreen
{
public:
	bool                                         bInLoadingScreen;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoadingScreenType                LoadingScreenType;                                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetLocation;                                    // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoadingScreenDuration;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoadingScreenStartTimestamp;                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFinishedLoading;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFadeState                        FadeState;                                         // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeOutFinishedTimestamp;                          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLoadingScreenParameters              Parameters;                                        // 0x20(0x48)(NativeAccessSpecifierPublic)
	class UUserWidget*                           ActiveLoadingScreen;                               // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.MapAreaStat
struct FMapAreaStat
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Total;                                             // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.MapAreaStats
struct FMapAreaStats
{
public:
	int32                                        CompletedSecretEvents;                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSecretEvents;                                 // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedEvents;                                   // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalEvents;                                       // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedGearPickups;                              // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalGearPickups;                                  // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UnlockedInstinctShrines;                           // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalInstinctShrines;                              // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedTrinkets;                                 // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalTrinkets;                                     // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedRamps;                                    // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRamps;                                        // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.UnSynchronizedTowerOverlay
struct FUnSynchronizedTowerOverlay
{
public:
	class FString                                MatchingGoatTowerName;                             // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverlayImageName;                                  // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                OverlayImage;                                      // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverlayButtonName;                                 // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsideredHovered;                                // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGButton*                             OverlayButton;                                     // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              MatInst;                                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                AreaContextActor;                                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IsHoveredMaterialParamName;                        // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FogMaterialParamName;                              // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Goat2.DLCMenuReplacementData
struct FDLCMenuReplacementData
{
public:
	class FName                                  DLCName;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGPlayerWorldAreaDataAsset*           PlayerWorldAreaDataAsset;                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGGMenuDataAsset*>              DLCMenuData;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FGameplayTag> ReplacementMenuTags;                               // 0x20(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Goat2.MenuLoadingData
struct FMenuLoadingData
{
public:
	uint8                                        Pad_2CD8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGMenuDataAsset*                      MenuData;                                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD9[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.AreaTrackMapping
struct FAreaTrackMapping
{
public:
	struct FGameplayTag                          AreaTag;                                           // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMusicTrack*                           AreaTrack;                                         // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Goat2.NameModifierTableRow
struct FNameModifierTableRow : public FTableRowBase
{
public:
	struct FGameplayTag                          ModifierTag;                                       // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGoatSimNameImportance            Importance;                                        // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CDA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ModifierText;                                      // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ColorFormat;                                       // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GGNamedActorNameModifier
struct FGGNamedActorNameModifier
{
public:
	struct FGameplayTag                          ModifierTag;                                       // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ModifierOverrideText;                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.GGActorName
struct FGGActorName
{
public:
	class FText                                  CurrentName;                                       // 0x0(0x18)(RepSkip, Protected, NativeAccessSpecifierProtected)
	class FString                                OverrideName;                                      // 0x18(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGGNamedActorNameModifier>     CurrentModifiers;                                  // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int8                                         NameIndex;                                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CDB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.GGNamedActorInfo
struct FGGNamedActorInfo
{
public:
	TArray<class FText>                          AvailableNames;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<struct FGGNamedActorNameModifier>     AvailableRandomModifiers;                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	float                                        RandomModifierChance;                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CDC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.FakeNews
struct FFakeNews
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Headline;                                          // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            PreviewImage;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.NewsWebContent
struct FNewsWebContent
{
public:
	class FString                                Content;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewsSlot;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CDD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.PendingNewsRequest
struct FPendingNewsRequest
{
public:
	uint8                                        Pad_2CDE[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.NewsFeedMap
struct FNewsFeedMap
{
public:
	enum class EGameVersion                      GameVersion;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                URL;                                               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.NotificationWidgetClassData
struct FNotificationWidgetClassData
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             Class;                                             // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Goat2.NotificationWidgetClassDataRow
struct FNotificationWidgetClassDataRow : public FTableRowBase
{
public:
	struct FGameplayTag                          ContainerTag;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNotificationWidgetClassData>  WidgetClasses;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.NotificationDelay
struct FNotificationDelay
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Delay;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Timestamp;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.AdvancedRule
struct FAdvancedRule
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TagExactMatch;                                     // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ContentTag;                                        // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ContentTagExactMatch;                              // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE1[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.AdvancedNotificationTagRuleset
struct FAdvancedNotificationTagRuleset
{
public:
	TArray<struct FAdvancedRule>                 Rules;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.LostObject
struct FLostObject
{
public:
	class AActor*                                LostActor;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForgetAfterOverride;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasAttachedBefore;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasAttachedToHand;                                // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentHandSlot               HandSlot;                                          // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachmentSocket;                                  // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeLocation;                                  // 0x1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDropOnRagdoll;                                    // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanTakeDamage;                                    // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECarryItemType                    CarryType;                                         // 0x36(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDropOnStartle;                                 // 0x37(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.NPCNameIndexes
struct FNPCNameIndexes
{
public:
	uint32                                       FirstNameInt;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       LastNameInt;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Goat2.NPCNameRow
struct FNPCNameRow : public FTableRowBase
{
public:
	TArray<class FText>                          Names;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RecentlyGrabbedCharacter
struct FRecentlyGrabbedCharacter
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Goat2.NPCPropertyCollection
struct FNPCPropertyCollection
{
public:
	TArray<class FString>                        NPCAppearance;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class AGGNPC>                    NPCClass;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGGNamedActorInfo                     NameInfo;                                          // 0x18(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EGender                           NPCGender;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            OverriddenHeadMaterials;                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverriddenUpperBodyMaterials;                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverriddenLowerBodyMaterials;                      // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.LookAtOverride
struct FLookAtOverride
{
public:
	class AActor*                                LookAtActor;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetOnRagdoll;                                   // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetOnProximityReact;                            // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetOnExtremeMood;                               // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetOnPanic;                                     // 0xF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.HeadTurnState
struct FHeadTurnState
{
public:
	enum class EHeadTurning                      HeadTurningState;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LookAtActor;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlackboardValue;                                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaypointValue;                                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Goat2.RecentlyStarledBy
struct FRecentlyStarledBy
{
public:
	TWeakObjectPtr<class AActor>                 StartledByActor;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StartledByContext;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartleTimestamp;                                  // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.SoftMatElement
struct FSoftMatElement
{
public:
	TSoftObjectPtr<class UMaterialInterface>     MatIns;                                            // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x18 - 0x4)
// ScriptStruct Goat2.AnimalMaterialCollection
struct FAnimalMaterialCollection : public FWeightedElement
{
public:
	uint8                                        Pad_2CEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoftMatElement>               MatElements;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.MoodSpeedElement
struct FMoodSpeedElement
{
public:
	enum class EMoods                            Mood;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkSpeed;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.MoodTree
struct FMoodTree
{
public:
	enum class EMoods                            Mood;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBehaviorTree*                         MoodBehaviorTree;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0xAB8 - 0x980)
// ScriptStruct Goat2.GGNPCAnimInstanceProxy
struct FGGNPCAnimInstanceProxy : public FLSAnimInstanceProxy
{
public:
	enum class EMoods                            CurrentMood;                                       // 0x980(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFalling;                                        // 0x981(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBurning;                                        // 0x982(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGrabbedCharacter;                                 // 0x983(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasNPCBSOverride;                                 // 0x984(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpaceBase*                       NPCMovementBSOverride;                             // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementBSValue;                                   // 0x990(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationBSValue;                                   // 0x994(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRotating;                                       // 0x998(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentIdleBlendValue;                             // 0x99C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HeadBoneScale;                                     // 0x9A0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGGRandomPlayerSequenceEntry>  CurrentRandomSequences;                            // 0x9B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FSequenceEntryPinArray                RandomSequencesAsPin;                              // 0x9C0(0x10)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                         bHasCustomAnimations;                              // 0x9D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENPCAnimationStates               CurrentAnimationState;                             // 0x9D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF0[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PointingAtLocation;                                // 0x9E0(0x30)(Edit, BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHeadTurning                      HeadTurningState;                                  // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HeadLookAtLocation;                                // 0xA14(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TorsoLookAtLocation;                               // 0xA20(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MoveDirection;                                     // 0xA2C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF2[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PreviousLookAtActor;                               // 0xA50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGGNPCMovementComponent*               NPCMovementComponent;                              // 0xA58(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CF3[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0xAE0 - 0xAB8)
// ScriptStruct Goat2.GGNPCAnimInstanceAnimalProxy
struct FGGNPCAnimInstanceAnimalProxy : public FGGNPCAnimInstanceProxy
{
public:
	struct FGGStiffBones                         StiffBodyParts;                                    // 0xAB8(0x20)(Edit, BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0xB00 - 0xAB8)
// ScriptStruct Goat2.GGNPCAnimInstanceHumanoidProxy
struct FGGNPCAnimInstanceHumanoidProxy : public FGGNPCAnimInstanceProxy
{
public:
	enum class ENPCMontageSlots                  CurrentMontageSlot;                                // 0xAB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlendspaceOverride               BlendSpaceOverride;                                // 0xAB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPanicking;                                      // 0xABA(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDisgusted;                                      // 0xABB(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInVehicle;                                      // 0xABC(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPassenger;                                      // 0xABD(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NPCMovementBSValueOverZero;                        // 0xABE(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGStiffBones                         StiffBodyParts;                                    // 0xAC0(0x20)(Edit, BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECarryItemType                    NPCCarryItemType;                                  // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlphaPointAtTargetIKNode;                          // 0xAE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlphaElbowBlendingPointAtTarget;                   // 0xAE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxTimePointingAtTarget;                           // 0xAF0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF8[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Goat2.AreaBodyParts
struct FAreaBodyParts
{
public:
	uint8                                        Pad_2CF9[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.AccessoryElement
struct FAccessoryElement
{
public:
	class FString                                AccessoryString;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RowName;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Type;                                              // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAccessoryAPActor;                               // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideHair;                                         // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceHatFriendlyHair;                             // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CFA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshComponent*                        AccessoryComponent;                                // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGPhysicsActor*                       PActor;                                            // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMatElement>                   DefaultMaterials;                                  // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.AppearanceArrayElement
struct FAppearanceArrayElement
{
public:
	class FString                                Accessory;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CFB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct Goat2.AppearanceSetRow
struct FAppearanceSetRow : public FTableRowBase
{
public:
	enum class EGender                           Gender;                                            // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HeadPart;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SkinMatIndex;                                      // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HairPart;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HairMatIndex;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CFE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UpperBodyPart;                                     // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBodyMatIndex;                                 // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LowerBodyPart;                                     // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LowerBodyMatIndex;                                 // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAppearanceArrayElement>       Accessories;                                       // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.PredeterminedElement
struct FPredeterminedElement
{
public:
	enum class EAppearanceTables                 DataTable;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RowName;                                           // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.BodyPartRowElement
struct FBodyPartRowElement
{
public:
	enum class EBodyParts                        Part;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RowName;                                           // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.AppearanceRowElement
struct FAppearanceRowElement
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.PrioritizedArea
struct FPrioritizedArea : public FWeightedElement
{
public:
	struct FGameplayTag                          AreaTag;                                           // 0x4(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysPick;                                       // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D03[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Goat2.AppearanceTableRow
struct FAppearanceTableRow : public FTableRowBase
{
public:
	bool                                         bCanBeRandomlySelected;                            // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 AreaTags;                                          // 0x10(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FPrioritizedArea>              PrioritizedInAreas;                                // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EGender                           Gender;                                            // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D05[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0x128 - 0x48)
// ScriptStruct Goat2.AccessoryRow
struct FAccessoryRow : public FAppearanceTableRow
{
public:
	struct FGameplayTag                          Type;                                              // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAccessoryAPActor;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPActorAttachmentSettings             PActorAttachmentSettings;                          // 0x58(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x98(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0xC0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkinnedMesh;                                      // 0xE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D07[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bRemoveHair;                                       // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceHatFriendlyHair;                             // 0x101(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D08[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RelativeLocation;                                  // 0x104(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x110(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RelativeScale;                                     // 0x11C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.NPCMaterialCollection
struct FNPCMaterialCollection
{
public:
	TMap<class FName, TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x0(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x98 - 0x48)
// ScriptStruct Goat2.LowerBodyRow
struct FLowerBodyRow : public FAppearanceTableRow
{
public:
	TSoftObjectPtr<class USkeletalMesh>          LowerBodyMesh;                                     // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bUseMaterialCollections;                           // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNPCMaterialCollection>        MaterialCollections;                               // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0xA0 - 0x48)
// ScriptStruct Goat2.UpperBodyRow
struct FUpperBodyRow : public FAppearanceTableRow
{
public:
	TSoftObjectPtr<class USkeletalMesh>          UpperBodyMesh;                                     // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideLowerBody;                                    // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bUseMaterialCollections;                           // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNPCMaterialCollection>        MaterialCollections;                               // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0xA0 - 0x48)
// ScriptStruct Goat2.HairRow
struct FHairRow : public FAppearanceTableRow
{
public:
	bool                                         bBald;                                             // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHatFriendly;                                      // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D0C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            HairMesh;                                          // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bUseMaterialCollections;                           // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNPCMaterialCollection>        MaterialCollections;                               // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xE8 - 0x48)
// ScriptStruct Goat2.HeadRow
struct FHeadRow : public FAppearanceTableRow
{
public:
	TSoftObjectPtr<class USkeletalMesh>          HeadMesh;                                          // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> SkinMaterials;                                     // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bUseMaterialCollections;                           // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNPCMaterialCollection>        MaterialCollections;                               // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bHideUpperBody;                                    // 0x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideLowerBody;                                    // 0x99(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D0F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UAnimInstance>           OverrideAnimationBlueprint;                        // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 NPCVoiceAreas;                                     // 0xC8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_AppearanceRow
struct FWeightedElement_AppearanceRow : public FWeightedElement
{
public:
	class FName                                  RowName;                                           // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysPick;                                       // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D10[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.AppearanceStreamingElement
struct FAppearanceStreamingElement
{
public:
	TArray<struct FSoftObjectPath>               ItemsToStream;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       AlreadyLoadedObjects;                              // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        AppearanceStringsToStream;                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D11[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RecentNPC
struct FRecentNPC
{
public:
	class AGGNPC*                                RecentNPC;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftEventTimestamp;                                // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D12[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.PerformerInitParameters
struct FPerformerInitParameters
{
public:
	TSubclassOf<class AGGNPC>                    StreetPerformerClass;                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StreetPerformerLocation;                           // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              StreetPerformerRotation;                           // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttractChance;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SpawnerArea;                                       // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                             StandLocationQuery;                                // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         OverridePerformBT;                                 // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Goat2.StallInitParameters
struct FStallInitParameters
{
public:
	uint8                                        Pad_2D13[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.StreetStallSpawner
struct FStreetStallSpawner
{
public:
	uint8                                        Pad_2D14[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.AreaEventSpawners
struct FAreaEventSpawners
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        EventSpawners;                                     // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Goat2.EventSpawnElement
struct FEventSpawnElement
{
public:
	uint8                                        Pad_2D15[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AGGNPCEvent>             EventClass;                                        // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D16[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGNPC*                                StartNPC;                                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D17[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                StartActor;                                        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D18[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.EventActorCooldown
struct FEventActorCooldown
{
public:
	TSubclassOf<class AGGNPCEvent>               EventClass;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTag;                                          // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                CooldownActor;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentCooldown;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D19[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.EventCooldown
struct FEventCooldown
{
public:
	TSubclassOf<class AGGNPCEvent>               EventClass;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTag;                                          // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentCooldown;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct Goat2.NPCEvents
struct FNPCEvents : public FTableRowBase
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeRandomlySelected;                            // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AGGNPCEvent>             EventClass;                                        // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownVariation;                                 // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActorCooldown;                                     // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.NPCInteractionCooldown
struct FNPCInteractionCooldown
{
public:
	enum class ENPCInteractions                  Interaction;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CooldownTime;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.InteractionCooldownElement
struct FInteractionCooldownElement
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENPCInteractions                  Interaction;                                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InteractionTimestamp;                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Goat2.GoatInteractions
struct FGoatInteractions
{
public:
	enum class ENPCInteractions                  Interaction;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoods                            Mood;                                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractChances                  InteractChance;                                    // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.DiscussMoodChange
struct FDiscussMoodChange
{
public:
	enum class EMoods                            Mood1;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoods                            Mood2;                                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EMoods>                    MoodChangeArray;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct Goat2.MoodCombination
struct FMoodCombination
{
public:
	enum class ENPCInteractions                  Interaction;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoods                            Mood1;                                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoods                            Mood2;                                             // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractChances                  InteractChance;                                    // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoods                            RequiredInstigatorMood;                            // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.InteractChanceElement
struct FInteractChanceElement
{
public:
	enum class EInteractChances                  InteractChance;                                    // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Chance;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Goat2.AreaSpawners
struct FAreaSpawners
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AGGNPCSpawner_Civilian*>        CivilianSpawners;                                  // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPCSpawner_Environment*>     EnvironmentSpawners;                               // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPCSpawner_Environment*>     ImportantEnvironmentSpawners;                      // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPCSpawner_Professional*>    ProfessionalSpawners;                              // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPCSpawner_Animal*>          AnimalSpawners;                                    // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPCSpawner_Animal*>          ImportantAnimalSpawners;                           // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.ActiveNPCAreaContainer
struct FActiveNPCAreaContainer
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AGGNPC*>                        ActiveCivilianNPCs;                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPC*>                        ActiveEnvironmentalNPCs;                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPC*>                        ActiveProfessionalNPCs;                            // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPC*>                        ActiveSpecialNPCs;                                 // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPC*>                        ActiveAnimalNPCs;                                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.MissingNPCsInArea
struct FMissingNPCsInArea
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissingCivilianCount;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissingEnvironmentalCount;                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissingProfessionalCount;                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissingAnimalCount;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.AreaData
struct FAreaData
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetCivilianCount;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetEnvironmentalCount;                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetProffesionalCount;                           // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimalCount;                                 // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetIdleVehicleCount;                            // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetIdleBikeCount;                               // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetIdleBoatCount;                               // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RoadSpawnedVehiclesCountModifier;                  // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Goat2.PlayerViewPoint
struct FPlayerViewPoint
{
public:
	struct FVector                               ViewPointLocation;                                 // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerSpeed;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlayerVelocity;                                    // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.ReactionCooldown
struct FReactionCooldown
{
public:
	uint8                                        Pad_2D21[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.MoodChangeAreaElement
struct FMoodChangeAreaElement
{
public:
	enum class EMoodChange                       Direction;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChanceToChange;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EMoods>                    SkipMoods;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSkipRagdolls;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D24[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.StartleDetailsSettings
struct FStartleDetailsSettings
{
public:
	bool                                         bShouldStartle;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStartleVariations                StartleType;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELineOfSightSetting               LineOfSightSetting;                                // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D25[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartleRadius;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StartleContext;                                    // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScarierWhenBehind;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RequireTimeSinceLastStartle;                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequireTimeSinceLastStartleWithActor;              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequireTimeSinceLastStartleWithContext;            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequireTimeSinceLastStartleWithActorAndContext;    // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChanceToStartle;                                   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysStartleWhenBehind;                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLookAtIfNotStartled;                              // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D27[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtDuration;                                    // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DelayedStartleRange;                               // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EMoods>                    SkipMoods;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSkipRagdolls;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipPanicking;                                    // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipCannotChangeMood;                             // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipMatchingReactType;                            // 0x4B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipStumbling;                                    // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForSingleNotify;                                  // 0x4D(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D28[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// ScriptStruct Goat2.StartleParameters
struct FStartleParameters
{
public:
	bool                                         bShouldStartle;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          StartleContext;                                    // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScarierWhenBehind;                                // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RequireTimeSinceLastStartle;                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequireTimeSinceLastStartleWithActor;              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequireTimeSinceLastStartleWithContext;            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequireTimeSinceLastStartleWithActorAndContext;    // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChanceToStartle;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysStartleWhenBehind;                          // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLookAtIfNotStartled;                              // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D2B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtDuration;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DelayedStartleRange;                               // 0x2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.NotifyParameters
struct FNotifyParameters
{
public:
	class AActor*                                NotifyAboutActor;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EMoods>                    SkipMoods;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGNPC*>                        IgnoredNPCs;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ELineOfSightSetting               LineOfSightSetting;                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipRagdolls;                                     // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipPanicking;                                    // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipCannotChangeMood;                             // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipMatchingReactType;                            // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipStumbling;                                    // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNonStartleCanBypassStartle;                       // 0x2E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D2C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChanceToNotify;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PutOnCooldownFor;                                  // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x8 - 0x4)
// ScriptStruct Goat2.WeightedElement_StartleVariation
struct FWeightedElement_StartleVariation : public FWeightedElement
{
public:
	enum class EStartleVariations                Variation;                                         // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D2D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_Animal
struct FWeightedElement_Animal : public FWeightedElement
{
public:
	uint8                                        Pad_2D2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGGNPC_Animal>             AnimalClass;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.NPCElement
struct FNPCElement
{
public:
	TSubclassOf<class AGGNPC>                    NPCClass;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGender                           Gender;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x38 - 0x4)
// ScriptStruct Goat2.WeightedElement_SoftProfessionalClass
struct FWeightedElement_SoftProfessionalClass : public FWeightedElement
{
public:
	uint8                                        Pad_2D30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AGGNPC>                  NPCClass;                                          // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoods                            StartMood;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D31[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x18 - 0x4)
// ScriptStruct Goat2.WeightedElement_Professional
struct FWeightedElement_Professional : public FWeightedElement
{
public:
	uint8                                        Pad_2D32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGGNPC>                    NPCClass;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoods                            StartMood;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D33[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.VehicleSpawnParameters
struct FVehicleSpawnParameters
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x14(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bForceRelevant;                                    // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanGetFromPool;                                   // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnActorCollisionHandlingMethod CollisionHandling;                                 // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateNewAppearance;                            // 0x23(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AppearanceRow;                                     // 0x24(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVehicleDefaultState              DefaultState;                                      // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGVehicleSpawner*                     VehicleSpawner;                                    // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBypassMaxNum;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnIncremental;                                 // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D35[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Goat2.NPCSpawnParameters
struct FNPCSpawnParameters
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x14(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMoods                            StartingMood;                                      // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRelevant;                                    // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanGetFromPool;                                   // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAsRagdoll;                                        // 0x23(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableCanChangeRagdollState;                     // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Impulse;                                           // 0x28(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayNameOverride;                               // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           FemFirstName;                                      // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           MaleFirstName;                                     // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           LastName;                                          // 0x70(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoiceIdentity;                                     // 0x80(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnActorCollisionHandlingMethod CollisionHandling;                                 // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGNPCSpawner*                         NPCSpawner;                                        // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnIncremental;                                 // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D39[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Goat2.NPCAppearanceInfo
struct FNPCAppearanceInfo
{
public:
	TArray<class FString>                        NPCAppearance;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class AGGNPC>                    NPCClass;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGender                           NPCGender;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NPCName;                                           // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverriddenHeadMaterials;                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverriddenUpperBodyMaterials;                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverriddenLowerBodyMaterials;                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x9C (0xA0 - 0x4)
// ScriptStruct Goat2.NPCAttackVariation
struct FNPCAttackVariation : public FWeightedElement
{
public:
	uint8                                        Pad_2D3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAnimMontage>           AttackAnimation;                                   // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          AnimationHardRef;                                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NotifyTag;                                         // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EAttackUseCase>            VariationUseCases;                                 // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCanBeUsedForRagdolledCharacters;                  // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFromCharacter;                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightAdjust;                                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackPower;                                       // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterAttackPower;                              // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZDirection;                                        // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NotificationTextFormat;                            // 0x78(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EStatusEffectTypes                StatusEffectToApply;                               // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChanceToBeUsed;                                    // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDefault;                                        // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D3F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.TimedRagdollAuthorityOfNPC
struct FTimedRagdollAuthorityOfNPC
{
public:
	class AGGNPC*                                NPC;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Goat2.NPCGrabbedCharacter
struct FNPCGrabbedCharacter
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConstraintAttachSocket;                            // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttachBone;                                        // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GrabBone;                                          // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGrabbedCharacterAnimationType    AnimationType;                                     // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              AngularRotationOffset;                             // 0x3C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLockRotation;                                     // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize10                 RelativeGoatPosition;                              // 0x4C(0xC)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 RelativeNPCPosition;                               // 0x58(0xC)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreventUnragdollFor;                               // 0x64(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.MontageElement
struct FMontageElement
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AfterAnimationWait;                                // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartCallbackID;                                   // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackID;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallbackTags;                                      // 0x18(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.GGCachedOnlineImage
struct FGGCachedOnlineImage
{
public:
	uint8                                        Pad_2D43[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D44[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.GGPartyMemberGoat
struct FGGPartyMemberGoat
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetComponent*                      GoatStatusWidgetComponent;                         // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D45[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGSpawnOffset
struct FGGSpawnOffset
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.GGPlayerID
struct FGGPlayerID
{
public:
	uint8                                        Pad_2D46[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Goat2.GGPendingLobbyJoin
struct FGGPendingLobbyJoin
{
public:
	uint8                                        Pad_2D47[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Goat2.GGOnlineFriend
struct FGGOnlineFriend
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueNetId;                                       // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GamerPicURL;                                       // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GGStatus;                                          // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOnline;                                         // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingAGame;                                   // 0x59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingThisGame;                                // 0x5A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLobby;                                          // 0x5B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LobbyId;                                           // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OpenSlots;                                         // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProductId;                                         // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProductVersion;                                    // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentPlatform;                                   // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingInALevel;                                // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingSplitscreen;                             // 0xA9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMultiplayerLocked;                              // 0xAA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFriendPlatform                   FriendPlatform;                                    // 0xAB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D4A[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Goat2.GGLobbyAttribute
struct FGGLobbyAttribute
{
public:
	uint8                                        Pad_2D4B[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.GGOnlineSessionSettings
struct FGGOnlineSessionSettings
{
public:
	struct FUniqueNetIdRepl                      HostId;                                            // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HostName;                                          // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGGCachedNATType                  NATType;                                           // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D4C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Goat2.QueuedOnlinePopups
struct FQueuedOnlinePopups
{
public:
	uint8                                        Pad_2D4D[0xA4];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Event;                                             // 0xA4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D4E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x8 - 0x4)
// ScriptStruct Goat2.WeightedElement_SplineSection
struct FWeightedElement_SplineSection : public FWeightedElement
{
public:
	int32                                        ArrayIndex;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.ParticleSplineSection
struct FParticleSplineSection
{
public:
	float                                        StartValue;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RecentlyHitCharacter
struct FRecentlyHitCharacter
{
public:
	class AGGCharacter*                          HitCharacter;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D4F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Goat2.PhysicsActorImpactSettings
struct FPhysicsActorImpactSettings
{
public:
	bool                                         PlayOnHit;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinVelocity;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayOnDamgeTaken;                                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpactDamageThreshold;                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactTriggerMinInterval;                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ETypeOfDamage>             AcceptedTypesOfDamage;                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ShouldPlayImpactSounds;                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D53[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             ImpactSound;                                       // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundCue>              ImpactSoundSoftPtr;                                // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSoundVolume;                                    // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSoundVolume;                                    // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVolumeImpactVelocity;                           // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpawnImpactParticleComp;                           // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ImpactEffect;                                      // 0x70(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        ImpactEffectSoftPtr;                               // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpawnParticleOnHit;                                // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpawnParticleOnDamage;                             // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayAtHitLocation;                                 // 0xA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D55[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ImpactEffectOffset;                                // 0xA4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ImpactEffectRotation;                              // 0xB0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D56[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.OriginalMassElement
struct FOriginalMassElement
{
public:
	float                                        OriginalDensity;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OriginalMass;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.PlayerPostProcessValue
struct FPlayerPostProcessValue
{
public:
	class UPostProcessComponent*                 PostProcessComponent;                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D57[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.ReplicatedObjectControl
struct FReplicatedObjectControl
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FViewTargetTransitionParams           ViewTransition;                                    // 0x10(0x10)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.TeleportData
struct FTeleportData
{
public:
	uint8                                        Pad_2D58[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGVehicle*                            Vehicle;                                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.PlayerGameScoreBoardData
struct FPlayerGameScoreBoardData
{
public:
	class FText                                  PlayerName;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class AGGPlayerState*                        GGPlayerState;                                     // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerGamePlayerState            PlayerState;                                       // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayerScore;                                       // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PlayerColor;                                       // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.PlayerGamePlayerInfo
struct FPlayerGamePlayerInfo
{
public:
	float                                        Score;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 Pawn;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGGoat*                               Goat;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGPlayerState*                        GGPlayerState;                                     // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGPlayerController*                   PC;                                                // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerIndex;                                       // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerGamePlayerState            PlayerState;                                       // 0x2C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EPlayerGamePlayerLobbyState       LobbyState;                                        // 0x2D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D5B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutOfBoundsTimestamp;                              // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D5C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Goat2.QueuedSavePopups
struct FQueuedSavePopups
{
public:
	uint8                                        Pad_2D5D[0xA4];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Event;                                             // 0xA4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D5E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.TrackedPlaytimeSession
struct FTrackedPlaytimeSession
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCountPlaytime;                                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeSinceSave;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Goat2.PlayerWorldAreaLocation
struct FPlayerWorldAreaLocation
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bOverrideLocation;                                 // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AActor>                 LocationActor;                                     // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseVectorLocation;                                // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D61[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x54(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// ScriptStruct Goat2.PopupButton
struct FPopupButton
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          Style;                                             // 0x28(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EPopupResponse                    Response;                                          // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D62[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateChildSize                       Size;                                              // 0x2A4(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D63[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct Goat2.PopupDataRow
struct FPopupDataRow : public FTableRowBase
{
public:
	class FText                                  Title;                                             // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UGGPopupUserWidget>      WidgetClass;                                       // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPopupButtonLayout                ButtonLayout;                                      // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPopupButton>                  OverrideButtonLayout;                              // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Image_IconSetName;                                 // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageURL;                                          // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.SavedQuestStep
struct FSavedQuestStep
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompleted;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CompletionOrderIndex;                              // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.SavedQuestStepTier
struct FSavedQuestStepTier
{
public:
	TArray<struct FSavedQuestStep>               Steps;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.SavedQuestData
struct FSavedQuestData
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Progress;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompleted;                                        // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDiscovered;                                       // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D66[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSavedQuestStepTier>           StepTiers;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.QueuedSavedQuestData
struct FQueuedSavedQuestData
{
public:
	struct FSavedQuestData                       Data;                                              // 0x0(0x28)(NativeAccessSpecifierPublic)
	enum class ESaveGameType                     SaveMethod;                                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D67[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.ActorDataMap
struct FActorDataMap
{
public:
	bool                                         HasServerData;                                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D68[0x57];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.ActorReference
struct FActorReference
{
public:
	uint8                                        Pad_2D69[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.QuestStep
struct FQuestStep
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bCompleted;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CompletedOrderIndex;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.QuestStepTier
struct FQuestStepTier
{
public:
	bool                                         bMustBeCompletedInOrder;                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceCompletePrevious;                            // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesSavedCompletedOrderIndex;                     // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D6B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestStep>                    Steps;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.QuestSharedProgress
struct FQuestSharedProgress
{
public:
	int32                                        Progress;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestStepTier>                StepProgress;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompleted;                                        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDiscovered;                                       // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreviouslyDiscovered;                             // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadedOnServer;                                   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D6D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.QuestDebugMessage
struct FQuestDebugMessage
{
public:
	enum class EQuestDebugType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timestamp;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Function;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.DistanceDataSource
struct FDistanceDataSource
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDistanceData>                 DistanceData;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.RadarWidgetClassData
struct FRadarWidgetClassData
{
public:
	int32                                        TypeFlag;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UUserWidget>             Class;                                             // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.RadarSystemVisibilityRule
struct FRadarSystemVisibilityRule
{
public:
	class AActor*                                AffectedActor;                                     // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AffectedTag;                                       // 0x8(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Source;                                            // 0x10(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Scope;                                             // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x1C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExactTagMatching;                                 // 0x1D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D70[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.PlayerWaypointMapping
struct FPlayerWaypointMapping
{
public:
	class AGGPlayerState*                        WaypointOwner;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                WaypointActor;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Goat2.RadarWidgetData
struct FRadarWidgetData
{
public:
	struct FRadarCoordinateData                  Data;                                              // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UGGRadarPointUserWidgetBase*           Widget;                                            // 0x58(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D71[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RecentVector
struct FRecentVector
{
public:
	struct FVector                               Vector;                                            // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RecentActor
struct FRecentActor
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D72[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.GGReplayKeyframe
struct FGGReplayKeyframe
{
public:
	float                                        Timestamp;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D73[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            KeyframeTransform;                                 // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.ReplicatedMovementState
struct FReplicatedMovementState
{
public:
	struct FVector_NetQuantize10                 InputDirection;                                    // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandbrakeInput;                                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.FontObjectScaleRelationship
struct FFontObjectScaleRelationship
{
public:
	class UObject*                               FontObject;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IconScale;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D74[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct Goat2.RichInputRow
struct FRichInputRow : public FTableRowBase
{
public:
	struct FSlateBrush                           Brush;                                             // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D75[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonText;                                        // 0x98(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FVector2D                             TextOffset;                                        // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IconScale;                                         // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IconPadding;                                       // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TextPadding;                                       // 0xC0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInlineImageSizeType              SizeType;                                          // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportsInputText;                                // 0xD1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D76[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Goat2.SplinePointIdentifier
struct FSplinePointIdentifier
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplinePointType                  Type;                                              // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D77[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x38 - 0x4)
// ScriptStruct Goat2.WeightedElement_ConnectedSpline
struct FWeightedElement_ConnectedSpline : public FWeightedElement
{
public:
	uint8                                        Pad_2D78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AGGRoadPathSpline>      SplineActorPtr;                                    // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConnectionSpline                 SplineComponent;                                   // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D79[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConnectingPointIndex;                              // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.SplinePointData
struct FSplinePointData
{
public:
	int32                                        PointIndex;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LaneWidth;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedMultiplier;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContinueWeight;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSplinePointIdentifier                SelfManagerPoint;                                  // 0x10(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeightedElement_ConnectedSpline> ConnectedSplines;                                  // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.HardStartRoadSpline
struct FHardStartRoadSpline
{
public:
	class AGGRoadPathSpline*                     SplineActorPtr;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConnectionSpline                 SplineComponent;                                   // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D7B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartPointIndex;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.StartRoadSpline
struct FStartRoadSpline
{
public:
	TSoftObjectPtr<class AGGRoadPathSpline>      SplineActorPtr;                                    // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConnectionSpline                 SplineComponent;                                   // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartPointIndex;                                   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.ManagerPoint
struct FManagerPoint
{
public:
	bool                                         IsFirstElement;                                    // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLastElement;                                     // 0x1(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D7D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSplinePointIdentifier                SelfPoint;                                         // 0x4(0x1C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSplinePointIdentifier                PreviousPoint;                                     // 0x20(0x1C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSplinePointIdentifier                NextPoint;                                         // 0x3C(0x1C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.SavedGearData
struct FSavedGearData
{
public:
	class FString                                GearID;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGiveAbility;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StyleID;                                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.SavedGearPreset
struct FSavedGearPreset
{
public:
	TArray<struct FSavedGearData>                GearData;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.TutorialSaveData
struct FTutorialSaveData
{
public:
	class FString                                TutorialID;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompleted;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.PerLocalPlayerSaveData
struct FPerLocalPlayerSaveData
{
public:
	struct FSavedGearPreset                      EquippedGoatGear;                                  // 0x0(0x10)(Edit, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FTutorialSaveData>             SavedTutorials;                                    // 0x10(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Goat2.MiniGameSave
struct FMiniGameSave
{
public:
	bool                                         Unlocked;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.KeyValueBase
struct FKeyValueBase
{
public:
	uint8                                        Pad_2D80[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsValid;                                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKeyValueType                     ValueType;                                         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D81[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntValue;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringValue;                                       // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.SeasonalTag
struct FSeasonalTag
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        GoatGearTags;                                      // 0x10(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        ActorTags;                                         // 0x20(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D83[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GGQueuedSignificanceEntry
struct FGGQueuedSignificanceEntry
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D84[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.SkeletalPhysicsActorState
struct FSkeletalPhysicsActorState
{
public:
	bool                                         bHasBecomePhysicsActor;                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPhysicsActor_Skeletal*              SpawnedPhysicsActor;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Goat2.GGSkyLightSettings
struct FGGSkyLightSettings
{
public:
	float                                        SkyLightIntensity;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldLightIntensity;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldLightTemperature;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HightFogDensity;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HightFogScatteringColorIntensity;                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkySphereStarBrightness;                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkySphereSunBrightness;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.SlipperySection
struct FSlipperySection
{
public:
	int32                                        StartIndex;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndIndex;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineMeshComponent*                  SplineMeshComponent;                               // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                       DecalComponent;                                    // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnFire;                                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFadedOut;                                         // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D86[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.SoundCollectionEntry
struct FSoundCollectionEntry
{
public:
	class FName                                  EntryName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             SoundCue;                                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Goat2.GGSpawnTransform
struct FGGSpawnTransform
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                      Bounds;                                            // 0x30(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSpawnerInterface*                   OwningSpawner;                                     // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D88[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.GGSpawnerWrapper
struct FGGSpawnerWrapper
{
public:
	class UGGSpawnerInterface*                   Spawner;                                           // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.InputUser
struct FInputUser
{
public:
	int32                                        UserIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClaimedGamepadIndex;                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGLocalPlayer*                        ClaimedByPlayer;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.Gamepad
struct FGamepad
{
public:
	int32                                        GamepadIndex;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConnected;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DisconnectedTimestamp;                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.DelayedSplitScreenStartParameters
struct FDelayedSplitScreenStartParameters
{
public:
	uint8                                        Pad_2D8A[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.SplitScreenPlayerData
struct FSplitScreenPlayerData
{
public:
	class AGGPlayerState*                        PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGPlayerController*                   PlayerController;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGLocalPlayer*                        LocalPlayer;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControllerId;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D8B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.LatestInstigator
struct FLatestInstigator
{
public:
	class APawn*                                 Instigator;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          InteractionType;                                   // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExpireTs;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bResetOnUnragdoll;                                 // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D8C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.CustomPrimitiveDataScalarProperty
struct FCustomPrimitiveDataScalarProperty
{
public:
	float                                        ScalarProperty;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MaterialParameterGUID;                             // 0xC(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PrimitiveDataIndex;                                // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D8D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.CustomPrimitiveDataVectorProperty
struct FCustomPrimitiveDataVectorProperty
{
public:
	struct FVector4                              VectorProperty;                                    // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MaterialParameterGUID;                             // 0x18(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PrimitiveDataIndex;                                // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D8E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Goat2.CustomPrimitiveDataColorProperty
struct FCustomPrimitiveDataColorProperty
{
public:
	struct FLinearColor                          ColorProperty;                                     // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MaterialParameterGUID;                             // 0x18(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimitiveDataIndex;                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.CustomPrimitiveDataParameters
struct FCustomPrimitiveDataParameters
{
public:
	TArray<struct FCustomPrimitiveDataScalarProperty> ScalarParameters;                                  // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomPrimitiveDataVectorProperty> VectorParameters;                                  // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomPrimitiveDataColorProperty> ColorParameters;                                   // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Goat2.PerMaterialCustomPrimitiveData
struct FPerMaterialCustomPrimitiveData
{
public:
	class UMaterial*                             Material;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MaterialName;                                      // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomPrimitiveDataParameters        CustomPrimitiveDataParameters;                     // 0x18(0x30)(Edit, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Goat2.PhysicsActorState
struct FPhysicsActorState
{
public:
	bool                                         bHasBecomePhysicsActor;                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AGGPhysicsActor>        SpawnedPhysicsActor;                               // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Goat2.ElectrocutionState
struct FElectrocutionState
{
public:
	bool                                         bElectrocuting;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bElectrocutingGoat;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.StatusShapeData
struct FStatusShapeData
{
public:
	float                                        ExtentX;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentY;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentZ;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ShapeOffset;                                       // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ShapeRotation;                                     // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EStatusShapes                     OverlapShape;                                      // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Goat2.StatusParticleData
struct FStatusParticleData
{
public:
	class UParticleSystem*                       ParticleSystem;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ParticleOffset;                                    // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ParticleRotation;                                  // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAttachToMesh;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbsoluteRotation;                                 // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SetAffectedActorAsParameter;                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Goat2.StatusEffectOverride
struct FStatusEffectOverride
{
public:
	enum class EStatusEffectTypes                StatusEffectType;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class AGGStatusEffectBase>> StatusEffectClasses;                               // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EHasDurationOverride              HasDurationOverride;                               // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurationOverride;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECanSpreadOverride                CanSpreadOverride;                                 // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStatusShapeData>              ShapesOverrides;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStatusParticleData>           ParticleOverrides;                                 // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Goat2.StatusBlockRule
struct FStatusBlockRule
{
public:
	enum class EStatusEffectTypes                Status1;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatusEffectTypes                Status2;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.StatusEffectSerializationStruct
struct FStatusEffectSerializationStruct
{
public:
	TArray<enum class EStatusEffectTypes>        StartingStatusEffects;                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EStatusEffectTypes>        CanBeAffectedBy;                                   // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               RelativeStatusLocation;                            // 0x20(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneAttachName;                                    // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStatusBlockRule>              BlockRules;                                        // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStatusEffectOverride>         StatusEffectOverrides;                             // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.SourceActiveState
struct FSourceActiveState
{
public:
	bool                                         bIsSourceActive;                                   // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActivatedBy;                                       // 0x8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.DelayedSpreadActorEffect
struct FDelayedSpreadActorEffect
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              ParticleSystemComp;                                // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       AudioComp;                                         // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D98[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GGStiffBodyPartBoneArray
struct FGGStiffBodyPartBoneArray
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.GGActiveSubtitleWidget
struct FGGActiveSubtitleWidget
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D99[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.SyringeData
struct FSyringeData
{
public:
	uint8                                        Pad_2D9A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ChildBonesIndices;                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D9B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SyringeActor;                                      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.AreaCheckpoint
struct FAreaCheckpoint
{
public:
	class FString                                CheckpointName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGTeleportAreaEntrance*               EntranceToMakeMain;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGTeleportAreaPlayerStart*            RespawnPlayerStart;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.AreaAssetOnSlot
struct FAreaAssetOnSlot
{
public:
	class UGGTeleportAreaDataAsset*              AreaAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Slot;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D9C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.InAreaState
struct FInAreaState
{
public:
	class UGGTeleportAreaDataAsset*              CurrentArea;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentSlot;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInAreaState                      State;                                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFinishedLoadingOnServer;                          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D9D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.PendingAreaExit
struct FPendingAreaExit
{
public:
	class AGGPlayerController*                   Player;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasStartedFinalTeleport;                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D9E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.PendingAreaEnter
struct FPendingAreaEnter
{
public:
	class AGGPlayerController*                   Player;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGTeleportAreaDataAsset*              AreaAsset;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Slot;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasStartedFinalTeleport;                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D9F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.AreaSlotData
struct FAreaSlotData
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAreaSlotState                    CurrentState;                                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGTeleportAreaDataAsset*              AreaAsset;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ULevelStreaming*>               AreaLevelStreams;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class ULevelStreaming*>               AreaLevelsGarbageCollected;                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UGGTeleportAreaDataAsset*              ReservedForAreaAsset;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReservedTogether;                                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGTeleportAreaLogic*                  AreaLogic;                                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SetActiveTimestamp;                                // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DelayedStreamTH;                                   // 0x50(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Goat2.AreaEnterParameters
struct FAreaEnterParameters
{
public:
	uint8                                        Pad_2DA3[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Goat2.SpecialLocationAdjust
struct FSpecialLocationAdjust
{
public:
	bool                                         bForceOffset;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreOtherGoats;                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayerTeleportMaxHeightDifference;                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeleportMaxTries;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerTeleportMaxRadius;                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerTeleportDistanceFromOtherPlayers;            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.TeleportParameters
struct FTeleportParameters
{
public:
	int32                                        Priority;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeleportVehicleHandle            VehicleHandle;                                     // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGVehicle*                            TeleportIntoVehicle;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayRemoveLoadingScreen;                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireTargetLocationLoaded;                      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyLoadAfterFadeOut;                             // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnragdollAfterFade;                               // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopMovement;                                     // 0x17(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideGoat;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayBeforeLoadingScreen;                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TeleportStartGameplayCue;                          // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TeleportEndGameplayCue;                            // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LocationRelativeToActor;                           // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetMovementModeAfterTeleport;                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     NewMovementMode;                                   // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoSpecialAdjust;                                  // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpecialLocationAdjust                SpecialLocationAdjust;                             // 0x3C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShouldApplyLoadingScreen;                         // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Goat2.CurrentTeleport
struct FCurrentTeleport
{
public:
	bool                                         bIsTeleporting;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   TargetLocation;                                    // 0x4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLookAtLocation;                                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtLocation;                                    // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTeleportParameters                   TeleportParameters;                                // 0x30(0x58)(NoDestructor, NativeAccessSpecifierPublic)
	struct FLoadingScreenParameters              LoadingScreenParameters;                           // 0x88(0x48)(NativeAccessSpecifierPublic)
	bool                                         bLocationRelativeToActor;                          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnTeleportStageUpdate;                             // 0xD4(0x10)(ZeroConstructor, InstancedReference, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWaitingForDelayedRemoval;                         // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasStartedPlayerMove;                             // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DAD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FramesSincePlayerMovedStart;                       // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DAE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Goat2.HookElement
struct FHookElement
{
public:
	class AActor*                                HookActor;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  HookMeshComp;                                      // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHookState                        HookState;                                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   HitComp;                                           // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   ImpactPoint;                                       // 0x20(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Goat2.TrackerMarkerOffsetScale
struct FTrackerMarkerOffsetScale
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OffsetScale;                                       // 0x8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.TutorialActionInputStruct
struct FTutorialActionInputStruct
{
public:
	enum class ETutorialInputVisibility          Visibility;                                        // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionInput;                                       // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OverrideText;                                      // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.TutorialData
struct FTutorialData
{
public:
	enum class ETutorialPersistence              Persistence;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ActionKeys;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTutorialActionInputStruct>    Actions;                                           // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETutorialSplitScreenBehaviour     SplitScreenBehaviour;                              // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct Goat2.TutorialDataRow
struct FTutorialDataRow : public FTableRowBase
{
public:
	struct FGameplayTag                          Type;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTutorialData                         Data;                                              // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSubclassOf<class AGGTutorial>               TutorialClass;                                     // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlatformTypeFlags;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotification                         Notification;                                      // 0x50(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Goat2.AudioFunctionLibrarySourceTableRow
struct FAudioFunctionLibrarySourceTableRow : public FTableRowBase
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Goat2.GGAwaitingStandup
struct FGGAwaitingStandup
{
public:
	class ULSCharacterMovementComponent*         MovementComponent;                                 // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRagdollStateChangeSettings           Settings;                                          // 0x8(0x68)(NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Goat2.UpdateNotificationData
struct FUpdateNotificationData
{
public:
	uint8                                        Pad_2DB6[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.EffectSourceTargetsPair
struct FEffectSourceTargetsPair
{
public:
	struct FGameplayTag                          Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Targets;                                           // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.EffectSourceTargetsStruct
struct FEffectSourceTargetsStruct
{
public:
	TArray<struct FEffectSourceTargetsPair>      Sources;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Goat2.MenuStructureData
struct FMenuStructureData
{
public:
	struct FGameplayTag                          ID;                                                // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UGGUserWidget>           WidgetClass;                                       // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UGGUserWidget>           MobileOverrideWidgetClass;                         // 0x30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvailableInMainMenu;                              // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGUserWidget*                         WidgetRef;                                         // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.MeshDefaultMaterials
struct FMeshDefaultMaterials
{
public:
	class UMeshComponent*                        Mesh;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMatElement>                   DefaultMaterials;                                  // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.ClientInterpolationSettings
struct FClientInterpolationSettings
{
public:
	float                                        LocationInterpolationSpeed;                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationInterpolationSpeed;                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearVelocityInterpolationSpeed;                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularVelocityInterpolationSpeed;                 // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationInterpolationTolerance;                    // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationInterpolationTolerance;                    // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearVelocityInterpolationTolerance;              // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularVelocityInterpolationTolerance;             // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RecentPrimComponent
struct FRecentPrimComponent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstTimestamp;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdatedTimestamp;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.VehicleCrashSound
struct FVehicleCrashSound
{
public:
	enum class EVehicleCrashType                 CrashType;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinImpactSize;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             Sound;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.ImpactParticleRange
struct FImpactParticleRange
{
public:
	struct FVector2D                             SizeRange;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       Particle;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          CameraShake;                                       // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.PActorImpactSettings
struct FPActorImpactSettings
{
public:
	struct FVector2D                             ValidPActorSize;                                   // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FImpactParticleRange>          ImpactParticleRanges;                              // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVehicleCrashSound>            VehicleCrashSounds;                                // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RecentlyOverlapped
struct FRecentlyOverlapped
{
public:
	float                                        Timestamp;                                         // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OverlappedActor;                                   // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.AppearanceRepElement
struct FAppearanceRepElement
{
public:
	uint16                                       AppearanceInt;                                     // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DBA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint16>                               AttachmentInts;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DBB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.AttachmentElement
struct FAttachmentElement
{
public:
	bool                                         bIsGuaranteed;                                     // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ArrayIndex;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RowName;                                           // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Type;                                              // 0x18(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                        AttachmentComponent;                               // 0x20(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.VehicleMaterialCollection
struct FVehicleMaterialCollection
{
public:
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x9C (0xA0 - 0x4)
// ScriptStruct Goat2.VehiclePotentialAttachment
struct FVehiclePotentialAttachment : public FWeightedElement
{
public:
	bool                                         bCanBeRandomlySelected;                            // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Socket;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Type;                                              // 0x10(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x68(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector                               RelativeLocation;                                  // 0x78(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x84(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RelativeScale;                                     // 0x90(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DBE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Goat2.VehicleGuaranteedAttachment
struct FVehicleGuaranteedAttachment
{
public:
	class FName                                  Socket;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Type;                                              // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x10(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x38(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     MaterialOverride;                                  // 0x60(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeLocation;                                  // 0x88(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x94(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RelativeScale;                                     // 0xA0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DBF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct Goat2.VehicleAppearanceRow
struct FVehicleAppearanceRow : public FTableRowBase
{
public:
	bool                                         bCanBeRandomlySelected;                            // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Weight;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  VehicleDisplayNameOverride;                        // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FVehicleMaterialCollection>    MaterialCollections;                               // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ChanceToEquipAttachment;                           // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChanceToEquipTwo;                                  // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVehiclePotentialAttachment>   PotentialAttachments;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVehicleGuaranteedAttachment>  GuaranteedAttachments;                             // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.EngineAudioRPMOutput
struct FEngineAudioRPMOutput
{
public:
	float                                        CurrentAudioRPM;                                   // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AudioRPM;                                          // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetLOAD;                                        // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineLOAD;                                        // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Goat2.EngineAudioRPMInput
struct FEngineAudioRPMInput
{
public:
	float                                        CurrentAudioRPM;                                   // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineRPM;                                         // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RPMSmooth;                                         // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRPM;                                            // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoadScale;                                         // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineLOAD;                                        // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoadSmooth;                                        // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Goat2.RoadPathQueryResult
struct FRoadPathQueryResult
{
public:
	struct FVector                               ClosestPointOnSpline;                              // 0x0(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NextPoint;                                         // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGRoadSplineComponent*                ClosestSpline;                                     // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGRoadPathSpline*                     RoadPathSpline;                                    // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2.VehicleManagerPlayerInfo
struct FVehicleManagerPlayerInfo
{
public:
	uint8                                        Pad_2DC1[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.PendingVehicleLocation
struct FPendingVehicleLocation
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.SpawnLocationCooldown
struct FSpawnLocationCooldown
{
public:
	uint8                                        Pad_2DC3[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Goat2.VehicleSpawnPoint
struct FVehicleSpawnPoint
{
public:
	class UGGRoadSplineComponent*                Spline;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC4[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.ActiveVehicleAreaContainer
struct FActiveVehicleAreaContainer
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AGGVehicle*>                    ActiveIdleVehicles;                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGVehicle*>                    ActiveDrivenVehicles;                              // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Goat2.MissingVehiclesInArea
struct FMissingVehiclesInArea
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissingIdleCarsCount;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissingIdleBikeCount;                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissingIdleBoatCount;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RelevantVehSpawner
struct FRelevantVehSpawner
{
public:
	class AGGVehicleSpawner*                     Spawner;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AGGVehicle>                VehicleClass;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Goat2.VehicleAreaSpawners
struct FVehicleAreaSpawners
{
public:
	struct FGameplayTag                          Area;                                              // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AGGVehicleSpawner*>             IdleVehicleSpawners;                               // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AGGVehicleSpawner*>             ImportantIdleVehicleSpawners;                      // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_VehicleClass
struct FWeightedElement_VehicleClass : public FWeightedElement
{
public:
	uint8                                        Pad_2DC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGGVehicle>                VehicleClass;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct Goat2.VoiceLine
struct FVoiceLine : public FTableRowBase
{
public:
	struct FGameplayTag                          VoiceLineTag;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MoodTag;                                           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          IdentityTag;                                       // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AreaTags;                                          // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundWave>             SoundWave;                                         // 0x40(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Subtitle;                                          // 0x68(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, Protected, NativeAccessSpecifierProtected)
	int32                                        Priority;                                          // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Goat2.VoiceIdentity
struct FVoiceIdentity : public FTableRowBase
{
public:
	enum class EGender                           Gender;                                            // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeRandomlySelected;                            // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC6[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Goat2.AreasToConsider
struct FAreasToConsider
{
public:
	TSet<struct FGameplayTag>                    AreaTags;                                          // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIncludeNoAreaLines;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.RecentSplash
struct FRecentSplash
{
public:
	class AActor*                                SplashedActor;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_StaticMesh
struct FWeightedElement_StaticMesh : public FWeightedElement
{
public:
	uint8                                        Pad_2DC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_SoundCue
struct FWeightedElement_SoundCue : public FWeightedElement
{
public:
	uint8                                        Pad_2DCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             SoundCue;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x30 - 0x4)
// ScriptStruct Goat2.WeightedElement_NPCWaypoint
struct FWeightedElement_NPCWaypoint : public FWeightedElement
{
public:
	uint8                                        Pad_2DCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AGGNPCWaypoint>         Waypoint;                                          // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_AnimMontage
struct FWeightedElement_AnimMontage : public FWeightedElement
{
public:
	uint8                                        Pad_2DCC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          Animation;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_Object
struct FWeightedElement_Object : public FWeightedElement
{
public:
	uint8                                        Pad_2DCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Object;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Goat2.WeightedElement_ActorClass
struct FWeightedElement_ActorClass : public FWeightedElement
{
public:
	uint8                                        Pad_2DCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x30 - 0x4)
// ScriptStruct Goat2.WeightedElement_SoftActorClass
struct FWeightedElement_SoftActorClass : public FWeightedElement
{
public:
	uint8                                        Pad_2DCF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x30 - 0x4)
// ScriptStruct Goat2.WeightedElement_SoftActor
struct FWeightedElement_SoftActor : public FWeightedElement
{
public:
	uint8                                        Pad_2DD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AActor>                 Actor;                                             // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xC - 0x4)
// ScriptStruct Goat2.WeightedElement_GameplayTag
struct FWeightedElement_GameplayTag : public FWeightedElement
{
public:
	struct FGameplayTag                          Tag;                                               // 0x4(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x18 - 0x4)
// ScriptStruct Goat2.WeightedElement_String
struct FWeightedElement_String : public FWeightedElement
{
public:
	uint8                                        Pad_2DD1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringValue;                                       // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Goat2.VehicleHandling
struct FVehicleHandling
{
public:
	float                                        CurrentMaxRPM;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNPCControlled;                                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DD2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Goat2.WorldCollection
struct FWorldCollection
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             DateCreated;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDateTime                             LastPlayed;                                        // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimecode                             Playtime;                                          // 0x18(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPlayedIntroSequence;                              // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBossDefeated;                                     // 0x2D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DD4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FWorldStats>      SavedWorldStats;                                   // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.LSAnimationSpeeds
struct FLSAnimationSpeeds
{
public:
	float                                        Walking;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Running;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sprinting;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Crouching;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x870 - 0x770)
// ScriptStruct Goat2.LSAnimInstanceProxy_MovementStates
struct FLSAnimInstanceProxy_MovementStates : public FAnimInstanceProxy
{
public:
	float                                        FallBlendSpaceControl;                             // 0x770(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPassenger;                                      // 0x774(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BikePedalRotationAlpha;                            // 0x778(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               NormalizedVelocityLocalSpace;                      // 0x77C(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GrindSpeed;                                        // 0x788(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsGrindBraking;                                   // 0x78C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DD6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UnderWaterPitchAngle;                              // 0x790(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SwimDirection;                                     // 0x794(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSequenceEntryPinArray                CustomStateAnimSequences;                          // 0x7A0(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        HeadbuttChargePercentage;                          // 0x7B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimationPlayRate;                                 // 0x7B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StrideBlend;                                       // 0x7B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsMoving;                                         // 0x7BC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELSMovementDirection              MovementDirection;                                 // 0x7BD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDoingTricks;                                    // 0x7BE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DD7[0x81];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULSAnimInstance_MovementStates*        LSAnimInstance;                                    // 0x840(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DD8[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x7F0 - 0x770)
// ScriptStruct Goat2.LSAnimInstanceProxy_PostProcess
struct FLSAnimInstanceProxy_PostProcess : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_2DD9[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULSAnimInstance_PostProcess*           LSAnimInstance;                                    // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DDA[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x7E0 - 0x770)
// ScriptStruct Goat2.DirectionBlendingProxy
struct FDirectionBlendingProxy : public FAnimInstanceProxy
{
public:
	float                                        BlendForward;                                      // 0x770(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendBackward;                                     // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendLeft;                                         // 0x778(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendRight;                                        // 0x77C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DDB[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Goat2.LayerCurves
struct FLayerCurves
{
public:
	class FName                                  CurveLayeringLegs;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveLayeringPelvis;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveLayeringSpine;                                // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveLayeringHead;                                 // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveLayeringArmLeft;                              // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveLayeringArmRight;                             // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x50 - 0x30)
// ScriptStruct Goat2.BasePoseAdditiveAlphaCurves
struct FBasePoseAdditiveAlphaCurves : public FLayerCurves
{
public:
	class FName                                  CurveLayeringArmLeft_LS;                           // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveLayeringArmRight_LS;                          // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveLayeringHandLeft;                             // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveLayeringHandRight;                            // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.LSAnimMontage
struct FLSAnimMontage
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x170 (0x8E0 - 0x770)
// ScriptStruct Goat2.BaseAnimInstanceProxy
struct FBaseAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	enum class ELSMovementDirection              MovementDirection;                                 // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     MovementMode;                                      // 0x771(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSGait                           Gait;                                              // 0x772(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSStance                         Stance;                                            // 0x773(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrideBlend;                                       // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkRunBlend;                                      // 0x778(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x77C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRateCrouch;                                    // 0x780(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanForward;                                       // 0x784(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanSideways;                                      // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x78C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldMove;                                       // 0x78D(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJumped;                                           // 0x78E(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMovingOnGround;                                 // 0x78F(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMovementInput;                                 // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRagdoll;                                        // 0x791(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStandingUp;                                     // 0x792(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DDC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FootIKAlpha;                                       // 0x794(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateLeft;                                       // 0x798(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateRight;                                      // 0x799(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DDD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotateAnimationPlayRate;                           // 0x79C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlailRate;                                         // 0x7A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStumbling;                                      // 0x7A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtLocation;                                    // 0x7A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtAlpha;                                       // 0x7B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtAlphaTorso;                                  // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetMeshLocation;                                // 0x7BC(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetMeshRotation;                                // 0x7C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DDF[0x10C];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.GGPendingForce
struct FGGPendingForce
{
public:
	uint8                                        Pad_2DE0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Goat2.GGPendingRadialForce
struct FGGPendingRadialForce
{
public:
	uint8                                        Pad_2DE1[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.LSDirectionBlend
struct FLSDirectionBlend
{
public:
	float                                        Forward;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Backward;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Left;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Right;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Goat2.LSEssentialVariables
struct FLSEssentialVariables
{
public:
	struct FVector                               LastInputVector;                                   // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlAndCharacterRotDelta;                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlYawRate;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputAndVelocityVectorDelta;                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityAndCharacterRotDelta;                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              VelocityRotation;                                  // 0x1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMovementInput;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSMovementDirection              MovementDirection;                                 // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE2[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Goat2.LSPivotParams
struct FLSPivotParams
{
public:
	float                                        Direction;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSMovementDirection              CompletedMovementDirection;                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CompletedStartTime;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELSMovementDirection              InterruptedMovmentDirection;                       // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterruptedStartTime;                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2.LSTurnAnims
struct FLSTurnAnims
{
public:
	class UAnimMontage*                          TurnLeftAnim;                                      // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          TurnRightAnim;                                     // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.LSTurnInPlaceAsset
struct FLSTurnInPlaceAsset
{
public:
	class UAnimMontage*                          Animation;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimatedAngle;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanScaleTurnAngle;                                // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGAnnoyingActor
struct FGGAnnoyingActor
{
public:
	float                                        Timestamp;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayedVoicelines;                                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2.GGStolenActor
struct FGGStolenActor
{
public:
	class AGGPhysicsActor_Base*                  PActorPtr;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


