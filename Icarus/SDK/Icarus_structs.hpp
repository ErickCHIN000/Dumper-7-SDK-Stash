#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGOAPCharacterStance : uint8
{
	Standing                       = 0,
	Sitting                        = 1,
	Lying                          = 2,
	EGOAPCharacterStance_MAX       = 3,
};

enum class EBuildingDestroyReason : uint8
{
	Stability                      = 0,
	Player                         = 1,
	Damaged                        = 2,
	Replaced                       = 3,
	EBuildingDestroyReason_MAX     = 4,
};

enum class EStealthAttackType : uint8
{
	NoStealth                      = 0,
	PartialStealth                 = 1,
	FullStealth                    = 2,
	EStealthAttackType_MAX         = 3,
};

enum class EProjectileBreakModifier : uint8
{
	NoChange                       = 0,
	Unbreakable                    = 1,
	MustBreak                      = 2,
	EProjectileBreakModifier_MAX   = 3,
};

enum class EViewTraceResultPriority : uint8
{
	Blocking                       = 0,
	Ignore                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	EViewTraceResultPriority_MAX   = 5,
};

enum class EViewTraceHitType : uint8
{
	None                           = 0,
	LineTrace                      = 1,
	VolumeTrace                    = 2,
	EViewTraceHitType_MAX          = 3,
};

enum class EDynamicItemProperties : uint8
{
	AssociatedItemInventoryId      = 0,
	AssociatedItemInventorySlot    = 1,
	DynamicState                   = 2,
	GunCurrentMagSize              = 3,
	CurrentAmmoType                = 4,
	BuildingVariation              = 5,
	Durability                     = 6,
	ItemableStack                  = 7,
	MillijoulesRemaining           = 8,
	TransmutableUnits              = 9,
	Fillable_StoredUnits           = 10,
	Fillable_Type                  = 11,
	Decayable_CurrentSpoilTime     = 12,
	InventoryContainer_LinkedInventoryId = 13,
	MaxDynamicItemProperties       = 14,
	EDynamicItemProperties_MAX     = 15,
};

enum class EBestiaryUnlockPopup : uint8
{
	Creature                       = 0,
	Stat1                          = 1,
	Stat2                          = 2,
	Lore1                          = 3,
	Lore2                          = 4,
	Lore3                          = 5,
	Weaknesses                     = 6,
	Loot                           = 7,
	EBestiaryUnlockPopup_MAX       = 8,
};

enum class ETalentState : uint8
{
	Locked                         = 0,
	Available                      = 1,
	Unlocked                       = 2,
	Completed                      = 3,
	ETalentState_MAX               = 4,
};

enum class ELastProspectHostType : uint8
{
	LocalHost                      = 0,
	SteamP2P                       = 1,
	DedicatedServer                = 2,
	ELastProspectHostType_MAX      = 3,
};

enum class EEndProspectSessionContext : uint8
{
	Undefined                      = 0,
	HostLeavingSession             = 1,
	ExpiredProspect                = 2,
	Error_InvalidHost              = 3,
	Error_FailedToHostSession      = 4,
	EEndProspectSessionContext_MAX = 5,
};

enum class EOverallSetting : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	EOverallSetting_MAX            = 256,
};

enum class EViewDistanceSetting : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	EViewDistanceSetting_MAX       = 256,
};

enum class EPostProcessingSetting : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	EPostProcessingSetting_MAX     = 256,
};

enum class EShadowsSetting : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	EShadowsSetting_MAX            = 256,
};

enum class EShadowFilterMethodSetting : uint8
{
	PCF                            = 0,
	PCSS                           = 1,
	NumSettings                    = 2,
	Custom                         = 255,
	EShadowFilterMethodSetting_MAX = 256,
};

enum class ETexturesSetting : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	ETexturesSetting_MAX           = 256,
};

enum class EEffectsSetting : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	EEffectsSetting_MAX            = 256,
};

enum class EFoliageSetting : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	EFoliageSetting_MAX            = 256,
};

enum class EShadingSetting : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	EShadingSetting_MAX            = 256,
};

enum class EAntiAliasingSetting : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	EAntiAliasingSetting_MAX       = 256,
};

enum class ESkyboxQualitySetting : uint8
{
	Low                            = 0,
	Normal                         = 1,
	NumSettings                    = 2,
	Custom                         = 255,
	ESkyboxQualitySetting_MAX      = 256,
};

enum class ESuperResolutionSetting : uint8
{
	Off                            = 0,
	Auto                           = 1,
	Quality                        = 2,
	Balanced                       = 3,
	Performance                    = 4,
	Ultra_Performance              = 5,
	NumSettings                    = 6,
	Custom                         = 255,
	ESuperResolutionSetting_MAX    = 256,
};

enum class ENVIDIAReflexLowLatencySetting : uint8
{
	Off                            = 0,
	On                             = 1,
	On_Plus_Boost                  = 2,
	NumSettings                    = 3,
	Custom                         = 255,
	ENVIDIAReflexLowLatencySetting_MAX = 256,
};

enum class EFSRModeSetting : uint8
{
	Off                            = 0,
	Performance                    = 1,
	Balanced                       = 2,
	Quality                        = 3,
	Ultra_Quality                  = 4,
	NumSettings                    = 5,
	Custom                         = 255,
	EFSRModeSetting_MAX            = 256,
};

enum class EDisplayTemperatureSetting : uint8
{
	Celsius                        = 0,
	Fahrenheit                     = 1,
	NumSettings                    = 2,
	Custom                         = 255,
	EDisplayTemperatureSetting_MAX = 256,
};

enum class EInputTypeSetting : uint8
{
	Keyboard                       = 0,
	Controller                     = 1,
	NumSettings                    = 2,
	Custom                         = 255,
	EInputTypeSetting_MAX          = 256,
};

enum class EControllerIconsSetting : uint8
{
	Xbox                           = 0,
	Playstation                    = 1,
	Switch                         = 2,
	NumSettings                    = 3,
	Custom                         = 255,
	EControllerIconsSetting_MAX    = 256,
};

enum class ERemoteUserSetting : uint8
{
	DisableCameraFocusOnProcessor  = 0,
	ERemoteUserSetting_MAX         = 1,
};

enum class EEventEndReason : uint8
{
	InvalidReason                  = 0,
	Completed                      = 1,
	Timeout                        = 2,
	Aborted                        = 3,
	EEventEndReason_MAX            = 4,
};

enum class ELevel : uint8
{
	NoLogging                      = 0,
	Error                          = 1,
	Warning                        = 2,
	Info                           = 3,
	ELevel_MAX                     = 4,
};

enum class ERequestPlayerPersonaErrorCode : uint8
{
	NoError                        = 0,
	InvalidId                      = 1,
	RequestTimedOut                = 2,
	ERequestPlayerPersonaErrorCode_MAX = 3,
};

enum class EActionableEventType : uint8
{
	Undefined                      = 0,
	Primary                        = 1,
	Secondary                      = 2,
	Tertiary                       = 3,
	Reload                         = 4,
	MAX_VALUE                      = 5,
	EActionableEventType_MAX       = 6,
};

enum class EActionableTrigger : uint8
{
	ActionPressed                  = 0,
	ActionReleased                 = 1,
	ActionHeld                     = 2,
	EActionableTrigger_MAX         = 3,
};

enum class EPlantGrowthStates : uint8
{
	Unseeded                       = 0,
	Stage1                         = 1,
	Stage2                         = 2,
	Stage3                         = 3,
	Stage4                         = 4,
	Mature                         = 5,
	Decayed                        = 6,
	EPlantGrowthStates_MAX         = 7,
};

enum class EProcessorStoppedReason : uint8
{
	GenericFailure                 = 0,
	NoEnergy                       = 1,
	NoResources                    = 2,
	NoRecipe                       = 3,
	NoQueue                        = 4,
	NoSpace                        = 5,
	NotTurnedOn                    = 6,
	NoResourceRemaining            = 7,
	PlayerStopped                  = 8,
	EProcessorStoppedReason_MAX    = 9,
};

enum class ECaveLightType : uint8
{
	Spot                           = 0,
	Rect                           = 1,
	ECaveLightType_MAX             = 2,
};

enum class EAliveState : uint8
{
	Alive                          = 0,
	Dead                           = 1,
	EAliveState_MAX                = 2,
};

enum class EAIAudioState : uint8
{
	Undefined                      = 0,
	Idle                           = 1,
	Fleeing                        = 2,
	Attacking                      = 3,
	Dead                           = 4,
	Relaxing                       = 5,
	Mounted                        = 6,
	Stalking                       = 7,
	EAIAudioState_MAX              = 8,
};

enum class EAIEventRequestResponse : uint8
{
	Invalid                        = 0,
	FailedToStart                  = 1,
	EventStarted                   = 2,
	PendingLoad                    = 3,
	EAIEventRequestResponse_MAX    = 4,
};

enum class EHeatmapColorChannel : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	AnyChannel                     = 4,
	EHeatmapColorChannel_MAX       = 5,
};

enum class ERelationshipType : uint8
{
	Neutral                        = 0,
	Hostile                        = 1,
	Friendly                       = 2,
	ERelationshipType_MAX          = 3,
};

enum class EAIVocalisationType : uint8
{
	Attack                         = 0,
	Flinch                         = 1,
	Death                          = 2,
	EAIVocalisationType_MAX        = 3,
};

enum class EAnimStateFMODParam : uint8
{
	NotAnimating                   = 0,
	Animating                      = 1,
	EAnimStateFMODParam_MAX        = 2,
};

enum class EGenderedArmourType : uint8
{
	Invalid                        = 0,
	MaleThirdPerson                = 1,
	FemaleThirdPerson              = 2,
	GenericFirstPerson             = 3,
	EGenderedArmourType_MAX        = 4,
};

enum class EArmourType : uint8
{
	Undefined                      = 0,
	Head                           = 1,
	Chest                          = 2,
	Hands                          = 3,
	Legs                           = 4,
	Feet                           = 5,
	Undersuit                      = 6,
	Skin_Head                      = 7,
	Undersuit_Helmet               = 8,
	Skin_Head_Hair                 = 9,
	Backpack                       = 10,
	EArmourType_MAX                = 11,
};

enum class EAssetType : uint8
{
	Object                         = 0,
	Class                          = 1,
	EAssetType_MAX                 = 2,
};

enum class EAudioOcclusionMode : uint8
{
	Complex                        = 0,
	SourceSimple                   = 1,
	SourceAndListenerSimple        = 2,
	EAudioOcclusionMode_MAX        = 3,
};

enum class EAudioShelterState : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EAudioShelterState_MAX         = 3,
};

enum class EAuthorityType : uint8
{
	ClientOnly                     = 0,
	ServerOnly                     = 1,
	Both                           = 2,
	EAuthorityType_MAX             = 3,
};

enum class ERateLimitedRequests : uint8
{
	None                           = 0,
	GetDropships                   = 1,
	GetMetaResources               = 2,
	GetMetaInventory               = 3,
	GetDropInventory               = 4,
	GetWorkshopPacks               = 5,
	GetCredits                     = 6,
	GetNotifications               = 7,
	SyncTalents                    = 8,
	ERateLimitedRequests_MAX       = 9,
};

enum class EPayloadDeploymentType : uint8
{
	OnProjectileMovementComplete   = 0,
	OnLaunch                       = 1,
	OnBounceImmediate              = 2,
	OnBounceWaitForHalt            = 3,
	OnTimerElapsed                 = 4,
	EPayloadDeploymentType_MAX     = 5,
};

enum class EBiomeImageType : uint8
{
	None                           = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	EBiomeImageType_MAX            = 4,
};

enum class EBuildingPieceType : uint8
{
	Floor                          = 0,
	Wall                           = 1,
	Frame                          = 2,
	Ramp                           = 3,
	EBuildingPieceType_MAX         = 4,
};

enum class EBuildingOpenFMODParam : uint8
{
	Closed                         = 0,
	Open                           = 1,
	EBuildingOpenFMODParam_MAX     = 2,
};

enum class EBuildingMeshType : uint8
{
	Invalid                        = 0,
	BaseMesh                       = 1,
	FrameMesh                      = 2,
	EBuildingMeshType_MAX          = 3,
};

enum class EBuildingUnzipFMODParam : uint8
{
	Normal                         = 0,
	Unzipping                      = 1,
	EBuildingUnzipFMODParam_MAX    = 2,
};

enum class ECaveContextFMODParam : uint8
{
	None                           = 0,
	ListenerOutSourceOut           = 1,
	ListenerOutSourceInCave        = 2,
	ListenerInCaveSourceOut        = 3,
	ListenerInCaveSourceInCave     = 4,
	ECaveContextFMODParam_MAX      = 5,
};

enum class ECombinedCaveComponentFlags : uint8
{
	None                           = 0,
	EntranceComponent              = 1,
	Void                           = 2,
	ECombinedCaveComponentFlags_MAX = 3,
};

enum class EChallengeTypes : uint8
{
	KillCreature                   = 0,
	CriticalHit                    = 1,
	StealthAttack                  = 2,
	SkinCreature                   = 3,
	HarvestCreatureItem            = 4,
	HarvestPlant                   = 5,
	FellTree                       = 6,
	CollectTreeItem                = 7,
	FullyMineVoxel                 = 8,
	MineResource                   = 9,
	EChallengeTypes_MAX            = 10,
};

enum class ECharacterCustomisationContext : uint8
{
	Undefined                      = 0,
	CharacterCreation              = 1,
	HABCustomisation               = 2,
	ECharacterCustomisationContext_MAX = 3,
};

enum class ECharacterBodyType : uint8
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neutral                        = 2,
	ECharacterBodyType_MAX         = 3,
};

enum class ECharacterOptionCategory : uint8
{
	Head                           = 0,
	Body                           = 1,
	BodyColor                      = 2,
	HairStyle                      = 3,
	HairColor                      = 4,
	Head_Tattoo                    = 5,
	Head_Scar                      = 6,
	Head_FacialHair                = 7,
	SkinTone                       = 8,
	Color                          = 9,
	EyeColor                       = 10,
	Decal                          = 11,
	ECharacterOptionCategory_MAX   = 12,
};

enum class EControllerIconSet : uint8
{
	None                           = 0,
	Xbox                           = 1,
	Playstation                    = 2,
	NintendoSwitch                 = 3,
	EControllerIconSet_MAX         = 4,
};

enum class ERefundPermission : uint8
{
	Inherit                        = 0,
	Block                          = 1,
	Allow                          = 2,
	ERefundPermission_MAX          = 3,
};

enum class ECreatureAudioThreatTargetType : uint8
{
	Invalid                        = 0,
	OtherPlayer                    = 1,
	LocalPlayer                    = 2,
	OtherCreature                  = 3,
	Stimulus                       = 4,
	ECreatureAudioThreatTargetType_MAX = 5,
};

enum class ECreatureFoliageFMODParam : uint8
{
	NotInFoliage                   = 0,
	InFoliage                      = 1,
	ECreatureFoliageFMODParam_MAX  = 2,
};

enum class ECreatureFootstepTypeFMODParam : uint8
{
	FrontFoot                      = 0,
	RearFoot                       = 1,
	Jump                           = 2,
	JumpLand                       = 3,
	ECreatureFootstepTypeFMODParam_MAX = 4,
};

enum class EDamageTypeFMODParam : uint8
{
	Undefined                      = 0,
	Pure                           = 1,
	Physical                       = 2,
	Melee                          = 3,
	Ranged                         = 4,
	Fire                           = 5,
	FallDamage                     = 6,
	Collision                      = 7,
	Poison                         = 8,
	Wind                           = 9,
	EDamageTypeFMODParam_MAX       = 10,
};

enum class EWorldPlacementType : uint8
{
	GroundPlacement                = 0,
	WallPlacement                  = 1,
	WaterPlacement                 = 2,
	GroundOrWallPlacement          = 3,
	CeilingPlacement               = 4,
	LavaPlacement                  = 5,
	EWorldPlacementType_MAX        = 6,
};

enum class EDeployableSnapBehaviour : uint8
{
	WorldPlacementOnly             = 0,
	SnapPlacementOnly              = 1,
	WorldAndSnap                   = 2,
	EDeployableSnapBehaviour_MAX   = 3,
};

enum class EDialogueRedirectCondition : uint8
{
	None                           = 0,
	IsOpenWorldProspect            = 1,
	IsMissionProspect              = 2,
	EDialogueRedirectCondition_MAX = 3,
};

enum class EDropAbundance : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EDropAbundance_MAX             = 3,
};

enum class EDropTemperature : uint8
{
	Cold                           = 0,
	Normal                         = 1,
	Hot                            = 2,
	EDropTemperature_MAX           = 3,
};

enum class EDropshipDescentStateFMODParam : uint8
{
	MainEngines                    = 0,
	Booster                        = 1,
	Freefall                       = 2,
	Landed                         = 3,
	EnterSeat                      = 4,
	EDropshipDescentStateFMODParam_MAX = 5,
};

enum class EDynamicQuestDifficulty : uint8
{
	None                           = 0,
	Easy                           = 1,
	Medium                         = 2,
	Hard                           = 3,
	EDynamicQuestDifficulty_MAX    = 4,
};

enum class EEnvironmentLightningTargetFMODParam : uint8
{
	Random                         = 0,
	Player                         = 1,
	Tree                           = 2,
	Building                       = 3,
	EEnvironmentLightningTargetFMODParam_MAX = 4,
};

enum class EExperienceSource : uint8
{
	XP_None                        = 0,
	XP_OnAction                    = 1,
	XP_OnInteract                  = 2,
	XP_OnHit                       = 3,
	XP_OnDamaged                   = 4,
	XP_OnDeath                     = 5,
	XP_OnCraft                     = 6,
	XP_OnAchievement               = 7,
	XP_Misc                        = 8,
	XP_MAX                         = 9,
};

enum class ECropMeshRotationType : uint8
{
	NoRotation                     = 0,
	Random90                       = 1,
	FullyRandom                    = 2,
	ECropMeshRotationType_MAX      = 3,
};

enum class EFieldGuideItemHotToObtain : uint8
{
	Unobtainium                    = 0,
	Harvest                        = 1,
	Craft                          = 2,
	Kill                           = 4,
	Fishing                        = 8,
	PickAxe                        = 16,
	SledgeHammer                   = 32,
	DrillOrExtract                 = 64,
	Buy_At_Workshop                = 128,
	EFieldGuideItemHotToObtain_MAX = 129,
};

enum class EFirearmAttachType : uint8
{
	Weapon                         = 0,
	Player                         = 1,
	EFirearmAttachType_MAX         = 2,
};

enum class EFireExtinguishResult : uint8
{
	Failed                         = 0,
	ExtinguishedCombustion         = 1,
	ExtinguishedPyrolysis          = 2,
	EFireExtinguishResult_MAX      = 3,
};

enum class EFireMode : uint8
{
	Semiauto                       = 0,
	Burst                          = 1,
	Auto                           = 2,
	EFireMode_MAX                  = 3,
};

enum class EFireStateFMODParam : uint8
{
	NotOnFire                      = 0,
	OnFire                         = 1,
	EFireStateFMODParam_MAX        = 2,
};

enum class EFishType : uint8
{
	None                           = 0,
	Saltwater                      = 1,
	Freshwater                     = 2,
	EFishType_MAX                  = 3,
};

enum class EFishRarity : uint8
{
	None                           = 0,
	Common                         = 1,
	Uncommon                       = 2,
	Rare                           = 3,
	Unique                         = 4,
	EFishRarity_MAX                = 5,
};

enum class EFlagsTableType : uint8
{
	D_CharacterFlags               = 0,
	D_SessionFlags                 = 1,
	D_AccountFlags                 = 2,
	D_DLCPackageData               = 3,
	None                           = 255,
	EFlagsTableType_MAX            = 256,
};

enum class EFlammableAudioLocationType : uint8
{
	ActorLocation                  = 0,
	BoundsOrigin                   = 1,
	BoundsBase                     = 2,
	EFlammableAudioLocationType_MAX = 3,
};

enum class EFlammablePropagationType : uint8
{
	None                           = 0,
	Self                           = 1,
	FireInstance                   = 2,
	EFlammablePropagationType_MAX  = 3,
};

enum class EFlammableState : uint8
{
	None                           = 0,
	Detached                       = 1,
	Pyrolysis                      = 2,
	Combusting                     = 3,
	Combusted                      = 4,
	Destroyed                      = 5,
	EFlammableState_MAX            = 6,
};

enum class EFLODActorState : uint8
{
	Undefined                      = 0,
	Revealing                      = 2,
	Revealed                       = 4,
	Concealing                     = 8,
	Concealed                      = 16,
	EFLODActorState_MAX            = 17,
};

enum class EFLODLevelInfluenceType : uint8
{
	None                           = 0,
	ViewTrace                      = 1,
	Distance                       = 2,
	EFLODLevelInfluenceType_MAX    = 3,
};

enum class EAnimOverlayState : uint8
{
	Default                        = 0,
	OneHanded                      = 1,
	Bow                            = 2,
	TwoHandedRifle                 = 3,
	Driving                        = 4,
	Spear                          = 5,
	Carrying                       = 6,
	Firearm                        = 7,
	Fishing                        = 8,
	EAnimOverlayState_MAX          = 9,
};

enum class EGlobalDropStateFMODParam : uint8
{
	Hab                            = 0,
	Dropship                       = 1,
	Prospect                       = 2,
	LoadingProspect                = 3,
	EGlobalDropStateFMODParam_MAX  = 4,
};

enum class EGlobalEnvironmentBiomeFMODParam : uint8
{
	None                           = 0,
	Conifer                        = 1,
	Arctic                         = 2,
	Desert                         = 3,
	Lava                           = 4,
	Wetlands                       = 5,
	Grasslands                     = 6,
	EGlobalEnvironmentBiomeFMODParam_MAX = 7,
};

enum class EGlobalEnvironmentTerrainZoneFMODParam : uint8
{
	Default                        = 0,
	Canyon_Narrow                  = 1,
	Canyon_Med                     = 2,
	Canyon_Wide                    = 3,
	EGlobalEnvironmentTerrainZoneFMODParam_MAX = 4,
};

enum class EGlobalLoadingScreenStateFMODParam : uint8
{
	LoadingScreen_Inactive         = 0,
	LoadingScreen_Active           = 1,
	LoadingScreen_MAX              = 2,
};

enum class EGlobalPlayerCharacterVoiceFMODParam : uint8
{
	None                           = 0,
	VoiceA                         = 1,
	VoiceB                         = 2,
	EGlobalPlayerCharacterVoiceFMODParam_MAX = 3,
};

enum class EActionRangeCheckBehaviour : uint8
{
	ValidMove                      = 0,
	CustomFunction                 = 1,
	Both                           = 2,
	EActionRangeCheckBehaviour_MAX = 3,
};

enum class EGraphicsCardVendor : uint8
{
	Invalid                        = 0,
	Unknown                        = 1,
	Nvidia                         = 2,
	AMD                            = 3,
	Intel                          = 4,
	EGraphicsCardVendor_MAX        = 5,
};

enum class EHuntingClueType : uint8
{
	Footprint                      = 0,
	BloodTrail                     = 1,
	EHuntingClueType_MAX           = 2,
};

enum class EIcarusActorDestroyReason : uint8
{
	Other                          = 0,
	Pickup                         = 1,
	Durability                     = 2,
	EIcarusActorDestroyReason_MAX  = 3,
};

enum class EProgressState : uint8
{
	Prototype                      = 0,
	Review                         = 1,
	Complete                       = 2,
	NumStates                      = 3,
	EProgressState_MAX             = 4,
};

enum class ERollResult : uint8
{
	Success                        = 0,
	Failure                        = 1,
	ERollResult_MAX                = 2,
};

enum class ECheatsEnabled : uint8
{
	Enabled                        = 0,
	NotEnabled                     = 1,
	ECheatsEnabled_MAX             = 2,
};

enum class EIcarusClaimLaunchConfirmationStep : uint8
{
	ClaimingProspect               = 0,
	LoadingProspect                = 1,
	EIcarusClaimLaunchConfirmationStep_MAX = 2,
};

enum class ELookAtType : uint8
{
	PitchAndYaw                    = 0,
	VectorLocation                 = 1,
	AbsoluteLocation               = 2,
	ELookAtType_MAX                = 3,
};

enum class EIcarusDamageType : uint8
{
	Undefined                      = 0,
	Pure                           = 1,
	Melee                          = 2,
	Projectile                     = 3,
	Fire                           = 4,
	FallDamage                     = 5,
	Collision                      = 6,
	Poison                         = 7,
	Wind                           = 8,
	Shield                         = 9,
	Returned                       = 10,
	Frost                          = 11,
	Electric                       = 12,
	Explosive                      = 13,
	Shatter                        = 14,
	Felling                        = 15,
	EIcarusDamageType_MAX          = 16,
};

enum class EErrorTarget : uint8
{
	Log                            = 0,
	Widget                         = 1,
	Dialog                         = 2,
	EErrorTarget_MAX               = 3,
};

enum class EErrorAction : uint8
{
	Immediate                      = 0,
	Kick                           = 1,
	Queue                          = 2,
	AppClose                       = 3,
	EErrorAction_MAX               = 4,
};

enum class ECanHitResult : uint8
{
	CantHit                        = 0,
	Miss                           = 1,
	Hit                            = 2,
	ECanHitResult_MAX              = 3,
};

enum class EFound : uint8
{
	Found                          = 0,
	NotFound                       = 1,
	EFound_MAX                     = 2,
};

enum class EMissionState : uint8
{
	InProgress                     = 0,
	Completed                      = 1,
	Abandoned                      = 2,
	Failed                         = 3,
	MAX                            = 4,
};

enum class ESettingsCategory : uint8
{
	Display                        = 0,
	Audio                          = 1,
	Gameplay                       = 2,
	Controls                       = 3,
	ESettingsCategory_MAX          = 4,
};

enum class EDisplayMode : uint8
{
	Fullscreen                     = 0,
	Borderless                     = 1,
	Windowed                       = 2,
	EDisplayMode_MAX               = 3,
};

enum class ESettingType : uint8
{
	Bool                           = 0,
	Int                            = 1,
	Float                          = 2,
	Enum                           = 3,
	String                         = 4,
	ESettingType_MAX               = 5,
};

enum class EGOAPFactSource : uint8
{
	VisionPerception               = 0,
	SoundPerception                = 1,
	DamagePerception               = 2,
	ProtectiveMotivation           = 3,
	EGOAPFactSource_MAX            = 4,
};

enum class EGOAPObjectType : uint8
{
	Food                           = 0,
	Water                          = 1,
	Enemy                          = 2,
	MaxObjectTypes                 = 3,
	EGOAPObjectType_MAX            = 4,
};

enum class EGOAPProperty : uint8
{
	Hungry                         = 0,
	Thirsty                        = 1,
	HasFood                        = 2,
	HasWater                       = 3,
	FoundFood                      = 4,
	FoundWater                     = 5,
	Wander                         = 6,
	Scared                         = 7,
	RunForSafety                   = 8,
	MaxProperties                  = 9,
	EGOAPProperty_MAX              = 10,
};

enum class EIcarusItemContext : uint8
{
	None                           = 0,
	World                          = 1,
	EquipHand                      = 2,
	EquipBack                      = 3,
	Vehicle                        = 4,
	Deployable                     = 5,
	Slotable                       = 6,
	Buildable                      = 7,
	DropshipPart                   = 8,
	Gravestone                     = 9,
	Light                          = 10,
	EIcarusItemContext_MAX         = 11,
};

enum class EIcarusJoinConfirmationStep : uint8
{
	FindingSession                 = 0,
	JoiningProspect                = 1,
	LoadingProspect                = 2,
	EIcarusJoinConfirmationStep_MAX = 3,
};

enum class EDestroyPattern : uint8
{
	RadialOutward                  = 0,
	RadialInward                   = 1,
	Random                         = 2,
	EDestroyPattern_MAX            = 3,
};

enum class EDirtierMode : uint8
{
	OwningActor                    = 0,
	AffectedObjectsList            = 1,
	EDirtierMode_MAX               = 2,
};

enum class EGOAPControllerState : uint8
{
	Idle                           = 0,
	GetNewAction                   = 1,
	MoveToAction                   = 2,
	PerformAction                  = 3,
	EGOAPControllerState_MAX       = 4,
};

enum class EIcarusOrchestrationStateFlag : uint8
{
	None                           = 0,
	DatabaseReloadRequired         = 1,
	DatabaseReloadBegin            = 2,
	DatabaseReloadComplete         = 3,
	ActorsReloadedToDatabaseState  = 4,
	IcarusBeginPlay                = 5,
	ClearedAllConcerns             = 6,
	RaiseCurtain                   = 7,
	GameModeBeginPlay              = 8,
	AllRequiredActorsSpawned       = 9,
	EIcarusOrchestrationStateFlag_MAX = 10,
};

enum class EMetaHashResult : uint8
{
	None                           = 0,
	FilesNotFound                  = 1,
	BadFileSize                    = 2,
	ExtraFilesFound                = 4,
	ModFilesFound                  = 8,
	All                            = 255,
	EMetaHashResult_MAX            = 256,
};

enum class EInteractableHitLookupType : uint8
{
	None                           = 0,
	FLOD_Instance                  = 1,
	EInteractableHitLookupType_MAX = 2,
};

enum class EDataValidity : uint8
{
	Valid                          = 0,
	Invalid                        = 1,
	EDataValidity_MAX              = 2,
};

enum class ESurvivalConsumableType : uint8
{
	Food                           = 0,
	Water                          = 1,
	Oxygen                         = 2,
	ESurvivalConsumableType_MAX    = 3,
};

enum class EForceRemovePlayerReason : uint8
{
	Initialisation_NotApproved     = 0,
	KickedByHostingPlayer          = 1,
	EForceRemovePlayerReason_MAX   = 2,
};

enum class ELeaveProspectSessionType : uint8
{
	None                           = 0,
	Quit                           = 1,
	ReturnToCharacterSelect        = 2,
	LeaveByDropship                = 3,
	ReturnToTitlescreen            = 4,
	Disconnected                   = 5,
	ELeaveProspectSessionType_MAX  = 6,
};

enum class EIcarusResourceType : uint8
{
	None                           = 0,
	Energy                         = 1,
	Water                          = 2,
	Fuel                           = 3,
	Oxygen                         = 4,
	Chute                          = 5,
	MaxResourceTypes               = 6,
	EIcarusResourceType_MAX        = 7,
};

enum class EIcarusResumeConfirmationStep : uint8
{
	ResumeRequest                  = 0,
	ConfirmationHost               = 1,
	ConfirmationJoin               = 2,
	LoadingProspectHost            = 3,
	FindingSessionJoin             = 4,
	LoadingProspectJoin            = 5,
	Mismatch                       = 6,
	EIcarusResumeConfirmationStep_MAX = 7,
};

enum class EResumeStep : uint8
{
	None                           = 0,
	AskHost                        = 1,
	AskJoin                        = 2,
	ShouldHost                     = 3,
	ShouldJoin                     = 4,
	ShouldMismatch                 = 5,
	EResumeStep_MAX                = 6,
};

enum class ERocketState : uint8
{
	Inactive                       = 0,
	Descending                     = 1,
	Landed                         = 2,
	Ascending                      = 3,
	ERocketState_MAX               = 4,
};

enum class ERocketPartConnectionType : uint8
{
	Undefined                      = 0,
	MK1_TOP                        = 1,
	MK1_BOTTOM                     = 2,
	MK2_TOP                        = 3,
	MK2_BOTTOM                     = 4,
	ERocketPartConnectionType_MAX  = 5,
};

enum class ENavigationType : uint8
{
	Jump                           = 0,
	Teleport                       = 1,
	MaxNavigationTypes             = 2,
	ENavigationType_MAX            = 3,
};

enum class EStatDisplayOperation : uint8
{
	None                           = 0,
	Multiply                       = 1,
	Division                       = 2,
	Addition                       = 3,
	EStatDisplayOperation_MAX      = 4,
};

enum class EStateRecorderOwnerResolvePolicy : uint8
{
	FindOnly                       = 0,
	RespawnOnly                    = 1,
	FindOrRespawn                  = 2,
	ManuallyResolved               = 3,
	EStateRecorderOwnerResolvePolicy_MAX = 4,
};

enum class ETamingTemperatureState : uint8
{
	JustRight                      = 0,
	TooHot                         = 1,
	TooCold                        = 2,
	ETamingTemperatureState_MAX    = 3,
};

enum class ETamedState : uint8
{
	NotTamed                       = 0,
	Tamed                          = 1,
	Domesticated                   = 2,
	ETamedState_MAX                = 3,
};

enum class ETestRailState : uint8
{
	Inactive                       = 0,
	Initialising                   = 1,
	Running                        = 2,
	Complete                       = 3,
	ETestRailState_MAX             = 4,
};

enum class EIcarusWeatherDifficulty : uint8
{
	Light                          = 0,
	Medium                         = 1,
	Heavy                          = 2,
	Extreme                        = 3,
	EIcarusWeatherDifficulty_MAX   = 4,
};

enum class EFeatureLevelCheckResult : uint8
{
	Unchecked                      = 0,
	Fail_FeatureLevel              = 1,
	Fail_Flag                      = 2,
	Unknown_CouldNotCheckFlag      = 3,
	Pass                           = 4,
	EFeatureLevelCheckResult_MAX   = 5,
};

enum class EInteractType : uint8
{
	Undefined                      = 0,
	WorldPress                     = 1,
	WorldHold                      = 2,
	WorldAltHold                   = 3,
	EInteractType_MAX              = 4,
};

enum class EItemDestructionContext : uint8
{
	Decayed                        = 0,
	Dismantled                     = 1,
	FellOutOfWorld                 = 2,
	EItemDestructionContext_MAX    = 3,
};

enum class ESetDataSuccess : uint8
{
	Success                        = 0,
	Failed                         = 1,
	ESetDataSuccess_MAX            = 2,
};

enum class EDataValid : uint8
{
	DataValid                      = 0,
	DataInvalid                    = 1,
	EDataValid_MAX                 = 2,
};

enum class EInventorySortType : uint8
{
	ByTag                          = 0,
	ByWeight                       = 1,
	ByStackCount                   = 2,
	ByAlphaNumeric                 = 3,
	EInventorySortType_MAX         = 4,
};

enum class EHandedness : uint8
{
	Right                          = 0,
	Left                           = 1,
	Both                           = 2,
	EHandedness_MAX                = 3,
};

enum class EItemCraftingTypeFMODParam : uint8
{
	Player                         = 0,
	World                          = 1,
	EItemCraftingTypeFMODParam_MAX = 2,
};

enum class ECanUseItemResult : uint8
{
	VisibleAndEnabled              = 0,
	VisibleAndDisabled             = 1,
	Hidden                         = 2,
	ECanUseItemResult_MAX          = 3,
};

enum class ESecondaryItemTypes : uint8
{
	Generic                        = 0,
	Helmet                         = 1,
	Chest                          = 2,
	Gloves                         = 3,
	Pants                          = 4,
	Boots                          = 5,
	Envirosuit                     = 6,
	FoodResource                   = 7,
	WaterResource                  = 8,
	OxygenResource                 = 9,
	Utility                        = 10,
	FuelA                          = 11,
	FuelB                          = 12,
	FuelC                          = 13,
	ESecondaryItemTypes_MAX        = 14,
};

enum class EPrimaryItemTypes : uint8
{
	Generic                        = 0,
	Actionable                     = 1,
	Armor                          = 2,
	Ballistic                      = 3,
	Buildable                      = 4,
	Consumable                     = 5,
	Combustible                    = 6,
	Deployable                     = 7,
	Energy                         = 8,
	Equippable                     = 9,
	Highlightable                  = 10,
	Interactable                   = 11,
	Itemable                       = 12,
	Meshable                       = 13,
	Processing                     = 14,
	Useable                        = 15,
	Weight                         = 16,
	Tool                           = 17,
	Resource                       = 18,
	Rocketable                     = 19,
	EPrimaryItemTypes_MAX          = 20,
};

enum class EKeybindVisibility : uint8
{
	VisibleRemap                   = 0,
	VisibleNoRemap                 = 1,
	Invisible                      = 2,
	EKeybindVisibility_MAX         = 3,
};

enum class EInputContext : uint8
{
	Both                           = 0,
	KeyboardOnly                   = 1,
	ControllerOnly                 = 2,
	EInputContext_MAX              = 3,
};

enum class ELineDrawMethod : uint8
{
	Unspecified                    = 0,
	NoLine                         = 1,
	ShortestDistance               = 2,
	XThenY                         = 3,
	YThenX                         = 4,
	ELineDrawMethod_MAX            = 5,
};

enum class ELobbyPrivacy : uint8
{
	Unknown                        = 0,
	FriendsOnly                    = 1,
	Private                        = 2,
	ELobbyPrivacy_MAX              = 3,
};

enum class EMapTileRadarFlag : uint8
{
	NotScanned                     = 0,
	NoResource                     = 1,
	FoundResource                  = 2,
	Scanning                       = 3,
	FogOfWar                       = 4,
	EMapTileRadarFlag_MAX          = 5,
};

enum class ESessionFilterState : uint8
{
	None                           = 0,
	ShowOnly                       = 1,
	HideOnly                       = 2,
	ESessionFilterState_MAX        = 3,
};

enum class ESessionSortDirection : uint8
{
	Ascending                      = 0,
	Descending                     = 1,
	ESessionSortDirection_MAX      = 2,
};

enum class ESessionSortType : uint8
{
	None                           = 0,
	LobbyName                      = 1,
	ProspectName                   = 2,
	Duration                       = 3,
	Difficulty                     = 4,
	PlayerCount                    = 5,
	Ping                           = 6,
	Hardcore                       = 7,
	ESessionSortType_MAX           = 8,
};

enum class ESteamSearchType : uint8
{
	Internet                       = 0,
	Favorites                      = 1,
	History                        = 2,
	Spectate                       = 3,
	Lan                            = 4,
	Friends                        = 5,
	ESteamSearchType_MAX           = 6,
};

enum class ESessionSearchType : uint8
{
	PlayerHosted                   = 0,
	Dedicated                      = 1,
	ESessionSearchType_MAX         = 2,
};

enum class EModifierMergeType : uint8
{
	Stack                          = 0,
	LongestDuration                = 1,
	Replace                        = 2,
	Count                          = 3,
	EModifierMergeType_MAX         = 4,
};

enum class EModifierType : uint8
{
	Buff                           = 0,
	Debuff                         = 1,
	EModifierType_MAX              = 2,
};

enum class EMountCombatBehaviourState : uint8
{
	Invalid                        = 0,
	DoNotEngage                    = 1,
	NeutralEngagement              = 2,
	AggressiveEngagement           = 3,
	EMountCombatBehaviourState_MAX = 4,
};

enum class EMountMovementBehaviourState : uint8
{
	Invalid                        = 0,
	Follow                         = 1,
	IdleWander                     = 2,
	IdleStanding                   = 3,
	IdleLying                      = 4,
	EMountMovementBehaviourState_MAX = 5,
};

enum class EMovementState : uint8
{
	Undefined                      = 0,
	Stationary                     = 1,
	Sneak                          = 2,
	Walk                           = 3,
	Jog                            = 4,
	Run                            = 5,
	Sprint                         = 6,
	Attacking                      = 7,
	EMovementState_MAX             = 8,
};

enum class EMusicConditionCombatState : uint8
{
	None                           = 0,
	Idle                           = 1,
	InCombat                       = 2,
	InCombat_Boss                  = 4,
	InCombat_EpicBoss              = 8,
	EMusicConditionCombatState_MAX = 9,
};

enum class EMusicConditionDisaster : uint8
{
	None                           = 0,
	Normal                         = 1,
	Fire                           = 2,
	EMusicConditionDisaster_MAX    = 3,
};

enum class EMusicConditionDropState : uint8
{
	None                           = 0,
	DropShipDescending             = 1,
	Prospect                       = 2,
	DropShipAscending              = 4,
	Hab                            = 8,
	LoadingProspect                = 16,
	EMusicConditionDropState_MAX   = 17,
};

enum class EMusicConditionDropTime : uint8
{
	None                           = 0,
	Normal                         = 1,
	TimeRunningOut                 = 2,
	EMusicConditionDropTime_MAX    = 3,
};

enum class EMusicConditionGameplayEvent : uint8
{
	None                           = 0,
	DiscoveredMetaResource         = 1,
	Revived                        = 2,
	EMusicConditionGameplayEvent_MAX = 3,
};

enum class EMusicConditionPlayerState : uint8
{
	None                           = 0,
	Alive                          = 1,
	Dead                           = 2,
	LowHealth                      = 4,
	EMusicConditionPlayerState_MAX = 5,
};

enum class EMusicConditionTimeOfDay : uint8
{
	None                           = 0,
	Dawn                           = 1,
	Day                            = 2,
	Dusk                           = 4,
	Night                          = 8,
	EMusicConditionTimeOfDay_MAX   = 9,
};

enum class EMusicConditionWeather : uint8
{
	None                           = 0,
	Normal                         = 1,
	Storm_Ramp                     = 2,
	Storm_Damage                   = 4,
	Storm_Chaos                    = 8,
	EMusicConditionWeather_MAX     = 9,
};

enum class EObjectSlotType : uint8
{
	ObjectSlotInput                = 0,
	ObjectSlotOutput               = 1,
	ObjectSlotStorage              = 2,
	EObjectSlotType_MAX            = 3,
};

enum class EOcclusionShelterContextFMODParam : uint8
{
	None                           = 0,
	ListenerLowSourceLow           = 1,
	ListenerLowSourceMed           = 2,
	ListenerLowSourceHigh          = 3,
	ListenerMedSourceLow           = 4,
	ListenerMedSourceMed           = 5,
	ListenerMedSourceHigh          = 6,
	ListenerHighSourceLow          = 7,
	ListenerHighSourceMed          = 8,
	ListenerHighSourceHigh         = 9,
	EOcclusionShelterContextFMODParam_MAX = 10,
};

enum class EMigrationStep : uint8
{
	Start                          = 0,
	CreatePlayerDataFolder         = 1,
	MigrateMetaInventoryFormat     = 2,
	OnlineGetUserProfile           = 3,
	OnlineGetCharacterData         = 4,
	OnlineGetCharacterLoadouts     = 5,
	OnlineGetMetaInventory         = 6,
	SwitchToOffline                = 7,
	CacheOfflineManagers           = 8,
	OfflineGetUserProfile          = 9,
	OfflineGetCharacterData        = 10,
	OfflineGetCharacterLoadouts    = 11,
	OfflineGetMetaInventory        = 12,
	MergeProfileData               = 13,
	MergeCharacterData             = 14,
	MergeLoadoutData               = 15,
	MergeMetaInventories           = 16,
	MergeOutpostFiles              = 17,
	UpdateLoadoutData              = 18,
	MigrateSaveFormat              = 19,
	DeletingOldFiles               = 20,
	FinaliseMigration              = 21,
	EMigrationStep_MAX             = 22,
};

enum class EPlayerArmourTypeFMODParam : uint8
{
	None                           = 0,
	Fiber                          = 1,
	Fur                            = 2,
	Leather                        = 3,
	Ghillie                        = 4,
	Carbon                         = 5,
	Composite                      = 6,
	Polar                          = 7,
	Scale                          = 8,
	Bone                           = 9,
	Obsidian                       = 10,
	EPlayerArmourTypeFMODParam_MAX = 11,
};

enum class EPlayerAudioFoliageType : uint8
{
	Undefined                      = 0,
	Tree                           = 1,
	Bush                           = 2,
	EPlayerAudioFoliageType_MAX    = 3,
};

enum class EFishUnlockPopup : uint8
{
	None                           = 0,
	FishCaught                     = 1,
	Quality                        = 2,
	Weight                         = 4,
	Length                         = 8,
	All                            = 255,
	EFishUnlockPopup_MAX           = 256,
};

enum class EPlayerFoliageFMODParam : uint8
{
	None                           = 0,
	Bush                           = 1,
	BushDry                        = 2,
	BushLow                        = 3,
	BushTwiggy                     = 4,
	Flower                         = 5,
	Bramble                        = 6,
	EPlayerFoliageFMODParam_MAX    = 7,
};

enum class EPlayerGroundStateFMODParam : uint8
{
	Earth                          = 0,
	Air                            = 1,
	Water                          = 2,
	EPlayerGroundStateFMODParam_MAX = 3,
};

enum class EPlayerStanceFMODParam : uint8
{
	Jogging                        = 0,
	Sprinting                      = 1,
	Crouching                      = 2,
	Walking                        = 3,
	EPlayerStanceFMODParam_MAX     = 4,
};

enum class ETrackerSetType : uint8
{
	Overwrite                      = 0,
	KeepHighest                    = 1,
	ETrackerSetType_MAX            = 2,
};

enum class ETagRequirement : uint8
{
	HasAllTags                     = 0,
	HasAnyTags                     = 1,
	ETagRequirement_MAX            = 2,
};

enum class EPlayerTypeFMODParam : uint8
{
	LocalPlayerFirstPerson         = 0,
	LocalPlayerThirdPerson         = 1,
	OtherPlayer                    = 2,
	EPlayerTypeFMODParam_MAX       = 3,
};

enum class EProcessorPurpose : uint8
{
	Crafting                       = 0,
	Repairing                      = 1,
	EProcessorPurpose_MAX          = 2,
};

enum class EOnProspectAvailability : uint8
{
	None                           = 0,
	Base                           = 1,
	Upgrade1                       = 2,
	Upgrade2                       = 3,
	EOnProspectAvailability_MAX    = 4,
};

enum class EProspectRequiredTech : uint8
{
	None                           = 0,
	Tier1                          = 1,
	Tier2                          = 2,
	Tier3                          = 3,
	Tier4                          = 4,
	EProspectRequiredTech_MAX      = 5,
};

enum class EIcarusProspectDifficulty : uint8
{
	Easy                           = 0,
	Normal                         = 1,
	Hard                           = 2,
	Extreme                        = 3,
	EIcarusProspectDifficulty_MAX  = 4,
};

enum class EQuestModifiersTableType : uint8
{
	D_QuestWeatherModifiers        = 0,
	D_QuestEnemyModifiers          = 1,
	D_QuestVocalisationModifiers   = 2,
	None                           = 255,
	EQuestModifiersTableType_MAX   = 256,
};

enum class EDialogueEvents : uint8
{
	None                           = 0,
	QuestStart                     = 1,
	QuestEnd                       = 2,
	EDialogueEvents_MAX            = 3,
};

enum class EQuestActorState : uint8
{
	Valid                          = 0,
	Invalid                        = 1,
	EQuestActorState_MAX           = 2,
};

enum class EQuestState : uint8
{
	Complete                       = 0,
	Incomplete                     = 1,
	EQuestState_MAX                = 2,
};

enum class EQuestVocalisationType : uint8
{
	InitialAudio                   = 0,
	UpdateAudio                    = 1,
	FinishAudio                    = 2,
	EQuestVocalisationType_MAX     = 3,
};

enum class ERCONCommandPlatformContext : uint8
{
	Any                            = 0,
	DedicatedServer                = 1,
	P2P                            = 2,
	ERCONCommandPlatformContext_MAX = 3,
};

enum class ERCONCommandContext : uint8
{
	Any                            = 0,
	ServerLobby                    = 1,
	Survival                       = 2,
	ERCONCommandContext_MAX        = 3,
};

enum class EReloadType : uint8
{
	Magazine                       = 0,
	Chambered                      = 1,
	EReloadType_MAX                = 2,
};

enum class ERepairItemTier : uint8
{
	RepairTierUnknown              = 0,
	RepairTier1                    = 1,
	RepairTier2                    = 2,
	RepairTier3                    = 3,
	RepairTier4                    = 4,
	RepairTierWorkshop             = 5,
	ERepairItemTier_MAX            = 6,
};

enum class ECanRepair : uint8
{
	HaveIngredients                = 0,
	RequiresIngredients            = 1,
	NeedsPower                     = 2,
	ToResolve                      = 3,
	ECanRepair_MAX                 = 4,
};

enum class EClassRepPolicy : uint8
{
	NotRouted                      = 0,
	ManuallyRouted                 = 1,
	RelevantAllConnections         = 2,
	Spatialize_Static              = 3,
	Spatialize_Dynamic             = 4,
	Spatialize_Dormancy            = 5,
	EClassRepPolicy_MAX            = 6,
};

enum class ERiverAudioState : uint8
{
	InfrequentlyChecking           = 0,
	FrequentlyChecking             = 1,
	ActivelyUpdating               = 2,
	RiverAudioState_MAX            = 3,
};

enum class ERocketPartType : uint8
{
	Undefined                      = 0,
	ERocketPartType_MAX            = 1,
};

enum class ESplineLoopDirection : uint8
{
	Undetermined                   = 0,
	Anticlockwise                  = 1,
	Clockwise                      = 2,
	ESplineLoopDirection_MAX       = 3,
};

enum class EStaminaBracket : uint8
{
	Empty                          = 0,
	Low                            = 1,
	Normal                         = 2,
	Full                           = 3,
	EStaminaBracket_MAX            = 4,
};

enum class EComparisonType : uint8
{
	Equals                         = 0,
	NotEquals                      = 1,
	LessThan                       = 2,
	LessThanOrEqual                = 3,
	GreaterThan                    = 4,
	GreaterThanOrEqual             = 5,
	EComparisonType_MAX            = 6,
};

enum class EFunctionOutcome : uint8
{
	Success                        = 0,
	Failure                        = 1,
	EFunctionOutcome_MAX           = 2,
};

enum class EInputStatSourceType : uint8
{
	Aiming                         = 0,
	EInputStatSourceType_MAX       = 1,
};

enum class EStatSources : uint8
{
	Base                           = 0,
	FromServer                     = 1,
	Armour                         = 2,
	Buff                           = 3,
	Item                           = 4,
	Durable                        = 5,
	Buildable                      = 6,
	DropShip                       = 7,
	Attributes                     = 8,
	Perks                          = 9,
	Projectile                     = 10,
	GOAP                           = 11,
	EquippedItems                  = 12,
	MapManager                     = 13,
	ArmourSetBonus                 = 14,
	AIManager                      = 15,
	Talents                        = 16,
	Biome                          = 17,
	TimeOfDay                      = 18,
	Weather                        = 19,
	BackingStatsContainer          = 20,
	Weight                         = 21,
	World                          = 22,
	Ruleset                        = 23,
	AISetup                        = 24,
	AISpawner                      = 25,
	EpicCreature                   = 26,
	DamageEnabledAnimNotify        = 27,
	BTTaskPerformAction            = 28,
	Input                          = 29,
	GOAPAction                     = 30,
	CriticalHit                    = 31,
	GenericBehaviourTree           = 32,
	Alteration                     = 33,
	TamingComponent                = 34,
	Atmosphere                     = 35,
	Shield                         = 36,
	Mount                          = 37,
	CreatureModifiers              = 38,
	BestiaryProgress               = 39,
	IcarusMountCharacter           = 40,
	EStatSources_MAX               = 41,
};

enum class ESurfaceFMODParam : uint8
{
	Default                        = 0,
	Dirt                           = 1,
	Sand                           = 2,
	Grass                          = 3,
	Wood                           = 4,
	Rock                           = 5,
	Plastic                        = 6,
	Metal                          = 7,
	Carpet                         = 8,
	Snow                           = 9,
	Water                          = 10,
	Gravel                         = 11,
	Flesh                          = 12,
	Concrete                       = 13,
	Mud                            = 14,
	Ice                            = 15,
	Tree                           = 16,
	VoxelRock                      = 17,
	VoxelMetal                     = 18,
	Bush                           = 19,
	Glass                          = 20,
	Thatch                         = 21,
	Cactus                         = 22,
	Bone                           = 23,
	CorrugatedIron                 = 24,
	Lava                           = 25,
	Slime                          = 26,
	ESurfaceFMODParam_MAX          = 27,
};

enum class ESurveyLaserFMODParam : uint8
{
	LaserOff                       = 0,
	LaserOn                        = 1,
	ESurveyLaserFMODParam_MAX      = 2,
};

enum class ESurveyTransmitFMODParam : uint8
{
	NotTransmitting                = 0,
	Transmitting                   = 1,
	ESurveyTransmitFMODParam_MAX   = 2,
};

enum class ESurvivalStatType : uint8
{
	Food                           = 0,
	Water                          = 1,
	Oxygen                         = 2,
	ESurvivalStatType_MAX          = 3,
};

enum class ETalentModelStorage : uint8
{
	None                           = 0,
	Character                      = 1,
	Account                        = 2,
	ETalentModelStorage_MAX        = 3,
};

enum class ERefundTalentResponse : uint8
{
	Invalid                        = 0,
	Success                        = 1,
	NullModel                      = 2,
	NotUnlocked                    = 3,
	IsDependency                   = 4,
	InvalidatesRank                = 5,
	ERefundTalentResponse_MAX      = 6,
};

enum class ETamedCreatureType : uint8
{
	Juvenile                       = 0,
	TamedCreature                  = 1,
	Both                           = 2,
	ETamedCreatureType_MAX         = 3,
};

enum class ETargetRangeState : uint8
{
	Waiting                        = 0,
	Active                         = 1,
	ETargetRangeState_MAX          = 2,
};

enum class ETerrainAnchorState : uint8
{
	Undefined                      = 0,
	Valid                          = 1,
	Invalid                        = 2,
	ETerrainAnchorState_MAX        = 3,
};

enum class ESleepResult : uint8
{
	Valid                          = 0,
	InvalidTime                    = 1,
	ESleepResult_MAX               = 2,
};

enum class ETreeDetachContextFMODParam : uint8
{
	Collision                      = 0,
	PlayerCollision                = 1,
	PlayerActionIndirect           = 2,
	PlayerActionDirect             = 3,
	ETreeDetachContextFMODParam_MAX = 4,
};

enum class ETreePrimitiveDetachContext : uint8
{
	None                           = 0,
	PlayerAction_Direct            = 1,
	PlayerAction_Indirect          = 2,
	Collision                      = 3,
	Fire                           = 4,
	Storm                          = 5,
	ETreePrimitiveDetachContext_MAX = 6,
};

enum class ETreePrimitiveItemReplaceMethod : uint8
{
	None                           = 0,
	SpawnWorldItem                 = 1,
	DirectIntoInventory            = 2,
	ETreePrimitiveItemReplaceMethod_MAX = 3,
};

enum class ETreePrimitiveType : uint8
{
	None                           = 0,
	Root                           = 1,
	Trunk                          = 2,
	Branch                         = 3,
	Leaf                           = 4,
	Socketable                     = 5,
	ETreePrimitiveType_MAX         = 6,
};

enum class EFloatRoundingMode : uint8
{
	Round                          = 0,
	Floor                          = 1,
	Ceiling                        = 2,
	EFloatRoundingMode_MAX         = 3,
};

enum class EIcarusGameVersionFlags : uint8
{
	None                           = 0,
	Major                          = 1,
	Minor                          = 2,
	Patch                          = 4,
	Changelist                     = 8,
	BuildType                      = 16,
	FeatureLevel                   = 32,
	Numbers                        = 15,
	All                            = 63,
	EIcarusGameVersionFlags_MAX    = 64,
};

enum class EVocalisationPlayResult : uint8
{
	Cancelled                      = 0,
	Played                         = 1,
	Queued                         = 2,
	EVocalisationPlayResult_MAX    = 3,
};

enum class EVocalisationPriority : uint8
{
	Lowest                         = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Highest                        = 4,
	EVocalisationPriority_MAX      = 5,
};

enum class EVocalisationInterruptType : uint8
{
	Interrupt                      = 0,
	Cancel                         = 1,
	Queue                          = 2,
	EVocalisationInterruptType_MAX = 3,
};

enum class EVoxelMinedState : uint8
{
	NotMined                       = 0,
	PartiallyMined                 = 1,
	FullyMined                     = 2,
	EVoxelMinedState_MAX           = 3,
};

enum class EUVWrapMethod : uint8
{
	UV_TripleProjection            = 0,
	UV_ZProjection                 = 1,
	UV_Spherical                   = 2,
	UV_MAX                         = 3,
};

enum class EVoxelResourceCategory : uint8
{
	None                           = 0,
	Stone                          = 1,
	Metal                          = 2,
	Oxite                          = 3,
	Copper                         = 4,
	Gold                           = 5,
	Bauxite                        = 6,
	Sulfur                         = 7,
	Silica                         = 8,
	Ice                            = 9,
	Platinum                       = 10,
	Titanium                       = 11,
	Coal                           = 12,
	Exotic_A                       = 13,
	Salt                           = 14,
	Limestone                      = 15,
	EVoxelResourceCategory_MAX     = 16,
};

enum class EWeaponAimingFMODParam : uint8
{
	NotAiming                      = 0,
	Aiming                         = 1,
	EWeaponAimingFMODParam_MAX     = 2,
};

enum class EWeaponChargingFMODParam : uint8
{
	NotCharging                    = 0,
	Charging                       = 1,
	EWeaponChargingFMODParam_MAX   = 2,
};

enum class EWeaponReloadingFMODParam : uint8
{
	NotReloading                   = 0,
	Reloading                      = 1,
	EWeaponReloadingFMODParam_MAX  = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CriticalHitAreasEnum
struct FCriticalHitAreasEnum : public FRowEnum
{
public:
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct Icarus.IcarusDamagePacket
struct FIcarusDamagePacket
{
public:
	struct FDamageEvent                          DamageEvent;                                       // 0x0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        TotalDamage;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppliedDamage;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressDamageNumbers;                            // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           EventInstigator;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitResult;                                         // 0x30(0x88)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasRadialDamage;                                  // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsKillCam;                                        // 0xBD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89C9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCriticalHitAreasEnum                 CriticalHitArea;                                   // 0xC0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStealthHit;                                     // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89CA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ExperienceEventsRowHandle
struct FExperienceEventsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.StatCategoriesEnum
struct FStatCategoriesEnum : public FRowEnum
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.ProjectileFireParams
struct FProjectileFireParams
{
public:
	float                                        RangedWeaponDamageMultiplier;                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnbreakable;                                      // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProjectileBreakModifier          ProjectileBreakModifier;                           // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStealthAttackType                StealthAttack;                                     // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOwnerHighlightProjectile;                         // 0x7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8C (0x8C - 0x0)
// ScriptStruct Icarus.ViewTraceResult
struct FViewTraceResult
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EViewTraceHitType                 Type;                                              // 0x88(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89CB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GOAPPropertiesRowHandle
struct FGOAPPropertiesRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.FLODInstanceID
struct FFLODInstanceID
{
public:
	TWeakObjectPtr<class AFLODTile>              FLODTile;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecordIndex;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceIndex;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x1C - 0x10)
// ScriptStruct Icarus.FLODActorRecordInstance
struct FFLODActorRecordInstance : public FFLODInstanceID
{
public:
	int32                                        LevelIndex;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TileName;                                          // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TalentsRowHandle
struct FTalentsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WeatherEventsRowHandle
struct FWeatherEventsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemsStaticRowHandle
struct FItemsStaticRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.StatsEnum
struct FStatsEnum : public FRowEnum
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.IcarusStatReplicated
struct FIcarusStatReplicated
{
public:
	struct FStatsEnum                            Stat;                                              // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89CC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AlterationsEnum
struct FAlterationsEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.LivingItemUpgradesEnum
struct FLivingItemUpgradesEnum : public FRowEnum
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.LivingItemUpgradeSlot
struct FLivingItemUpgradeSlot
{
public:
	struct FLivingItemUpgradesEnum               UpgradeSelection;                                  // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UnlockProgress;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.CustomProperties
struct FCustomProperties
{
public:
	TArray<struct FIcarusStatReplicated>         StaticWorldStats;                                  // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FIcarusStatReplicated>         StaticWorldHeldStats;                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FIcarusStatReplicated>         Stats;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAlterationsEnum>              Alterations;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLivingItemUpgradeSlot>        LivingItemSlots;                                   // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.ItemDynamicData
struct FItemDynamicData : public FIcarusTableRowBase
{
public:
	enum class EDynamicItemProperties            PropertyType;                                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct Icarus.StatContainer
struct FStatContainer
{
public:
	uint8                                        Pad_89CF[0xF8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusStatContainer*                  IcarusStatComponent;                               // 0xF8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_89D0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct Icarus.CachedItemStatContainer
struct FCachedItemStatContainer
{
public:
	struct FStatContainer                        StatContainer;                                     // 0x0(0x108)(Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHasBuilt;                                         // 0x108(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHeldItem;                                       // 0x109(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludesAlterations;                              // 0x10A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D1[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D8 (0x1F0 - 0x18)
// ScriptStruct Icarus.ItemData
struct FItemData : public FIcarusTableRowBase
{
public:
	struct FItemsStaticRowHandle                 ItemStaticData;                                    // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemDynamicData>              ItemDynamicData;                                   // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FIcarusStatReplicated>         ItemCustomStats;                                   // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCustomProperties                     CustomProperties;                                  // 0x50(0x50)(NativeAccessSpecifierPublic)
	struct FCachedItemStatContainer              CachedStats;                                       // 0xA0(0x110)(Transient, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bIsItemInstance;                                   // 0x1B0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DatabaseGUID;                                      // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemOwnerLookupId;                                 // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 RuntimeTags;                                       // 0x1D0(0x20)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.IcarusPlayerChatMessage
struct FIcarusPlayerChatMessage
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            PlayerIcon;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                PlayerColour;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BestiaryDataRowHandle
struct FBestiaryDataRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FishDataRowHandle
struct FFishDataRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.FishTypeTracking
struct FFishTypeTracking
{
public:
	struct FFishDataRowHandle                    FishRow;                                           // 0x0(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxQuality;                                        // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxWeight;                                         // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLength;                                         // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CaughtCount;                                       // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.TalentModelData
struct FTalentModelData
{
public:
	enum class ETalentState                      State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rank;                                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRank;                                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocked;                                           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.LastProspectHostInfo
struct FLastProspectHostInfo
{
public:
	enum class ELastProspectHostType             LastHostType;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SteamP2PHostId;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DedicatedServerIP;                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CachedServerName;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Icarus.AssociatedProspectInfo
struct FAssociatedProspectInfo
{
public:
	struct FProspectInfo                         AssociatedProspect;                                // 0x0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLastProspectHostInfo                 HostedBy;                                          // 0x90(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FieldGuideCategoriesRowHandle
struct FFieldGuideCategoriesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DialogueRowHandle
struct FDialogueRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FactionMissionsRowHandle
struct FFactionMissionsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ProspectForecastRowHandle
struct FProspectForecastRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ProcessorRecipesRowHandle
struct FProcessorRecipesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FarmingSeedsRowHandle
struct FFarmingSeedsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.StatsRowHandle
struct FStatsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.StatAfflictionsRowHandle
struct FStatAfflictionsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.IcarusAttachmentsRowHandle
struct FIcarusAttachmentsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MetaCurrencyRowHandle
struct FMetaCurrencyRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.TimeLockedMissionInfo
struct FTimeLockedMissionInfo
{
public:
	struct FFactionMissionsRowHandle             Mission;                                           // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LockedUntilProspectTime;                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3D0 (0x3D0 - 0x0)
// ScriptStruct Icarus.PlayerLoadoutData
struct FPlayerLoadoutData
{
public:
	struct FItemData                             EnviroSuit;                                        // 0x0(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FDropship                             Dropship;                                          // 0x1F0(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FItemData>                     MetaItems;                                         // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FProspectInfo                         AssociatedProspect;                                // 0x2E0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLastProspectHostInfo                 HostedBy;                                          // 0x370(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bInsured;                                          // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSettled;                                          // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        LoadoutClaimTime;                                  // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Guid;                                              // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ErrorCodesEnum
struct FErrorCodesEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.LogCategoriesEnum
struct FLogCategoriesEnum : public FRowEnum
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.IcarusLogEntry
struct FIcarusLogEntry
{
public:
	struct FLogCategoriesEnum                    OutputCategory;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELevel                            LogLevel;                                          // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LogMessage;                                        // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Timestamp;                                         // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AccoladesRowHandle
struct FAccoladesRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.AccoladeCompletedState
struct FAccoladeCompletedState
{
public:
	struct FAccoladesRowHandle                   Accolade;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             TimeCompleted;                                     // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProspectID;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.IcarusPlayerPersona
struct FIcarusPlayerPersona
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	class UTexture2D*                            Avatar;                                            // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.GetIcarusPlayerPersonaResult
struct FGetIcarusPlayerPersonaResult
{
public:
	struct FIcarusPlayerPersona                  Persona;                                           // 0x0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERequestPlayerPersonaErrorCode    ErrorCode;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89DB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.PlayerCharacterID
struct FPlayerCharacterID
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89DC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.ConnectedPlayer
struct FConnectedPlayer
{
public:
	struct FPlayerCharacterID                    PlayerCharacterID;                                 // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AIcarusPlayerController*               PlayerController;                                  // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AIcarusPlayerCharacter*                PlayerCharacter;                                   // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AIcarusPlayerState*                    PlayerState;                                       // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConnectionStartTime;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConnectionCompleteTime;                            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.PlayerTrackersRowHandle
struct FPlayerTrackersRowHandle : public FRowHandle
{
public:
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.Subtitle
struct FSubtitle
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  SpeakerName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BiomesRowHandle
struct FBiomesRowHandle : public FRowHandle
{
public:
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Icarus.ProcessingItem
struct FProcessingItem
{
public:
	TWeakObjectPtr<class AIcarusPlayerCharacter> CraftingPlayer;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftCount;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.PlayerAccoladeCategoriesEnum
struct FPlayerAccoladeCategoriesEnum : public FRowEnum
{
public:
};

// 0xE8 (0x100 - 0x18)
// ScriptStruct Icarus.AccoladeData
struct FAccoladeData : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAccoladeImpl>           AccoladeImpl;                                      // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerAccoladeCategoriesEnum         Category;                                          // 0x98(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerTrackersRowHandle              Tracker;                                           // 0xA8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0xC0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FRowHandle>                    ExtraDatas;                                        // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        GoalCount;                                         // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SteamAchievementId;                                // 0xF4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89DD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.TrackerTaskListProgress
struct FTrackerTaskListProgress
{
public:
	TSet<class FName>                            CompletedTasks;                                    // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Icarus.AccoladeSaveData
struct FAccoladeSaveData
{
public:
	TArray<struct FAccoladeCompletedState>       CompletedAccolades;                                // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TMap<struct FPlayerTrackersRowHandle, int32> PlayerTrackers;                                    // 0x10(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<struct FPlayerTrackersRowHandle, struct FTrackerTaskListProgress> PlayerTaskListTrackers;                            // 0x60(0x50)(SaveGame, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AccoladesEnum
struct FAccoladesEnum : public FRowEnum
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.AccoladeTaskState
struct FAccoladeTaskState
{
public:
	class FText                                  TaskName;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	bool                                         bComplete;                                         // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89DE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AccountFlag
struct FAccountFlag : public FIcarusTableRowBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AccountFlagsEnum
struct FAccountFlagsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AccountFlagsRowHandle
struct FAccountFlagsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.StaminaActionCostsRowHandle
struct FStaminaActionCostsRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.ActionStaminaCostEventPairing
struct FActionStaminaCostEventPairing
{
public:
	enum class EActionableEventType              Event;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStaminaActionCostsRowHandle          StaminaCost;                                       // 0x4(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ActionsRowHandle
struct FActionsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ModifierStatesRowHandle
struct FModifierStatesRowHandle : public FRowHandle
{
public:
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Icarus.ActionList
struct FActionList
{
public:
	TMap<enum class EActionableEventType, struct FStaminaActionCostsRowHandle> InputTypes;                                        // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModifierStatesRowHandle              ModifierState;                                     // 0x50(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Icarus.ActionableData
struct FActionableData : public FIcarusTableRowBase
{
public:
	TMap<struct FActionsRowHandle, struct FActionList> ActionMapping;                                     // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bUseClientPrediction;                              // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRowHandle>                    GenericData;                                       // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ActionableEnum
struct FActionableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ActionableRowHandle
struct FActionableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ValidHitTypesRowHandle
struct FValidHitTypesRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.SuccessAnimSet
struct FSuccessAnimSet
{
public:
	struct FValidHitTypesRowHandle               SuccessType;                                       // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SuccessMontageVariations;                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0x100 - 0x18)
// ScriptStruct Icarus.ActionData
struct FActionData : public FIcarusTableRowBase
{
public:
	TSubclassOf<class UActionableBehaviour>      Behaviour;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           TP_ActionMontage;                                  // 0x20(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSuccessAnimSet>               TP_SuccessAnimations;                              // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          TP_ActionFailMontageVariations;                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class FName>                          TP_ActionMissMontageVariations;                    // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           FP_ActionMontage;                                  // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSuccessAnimSet>               FP_SuccessAnimations;                              // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          FP_ActionFailMontageVariations;                    // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class FName>                          FP_ActionMissMontageVariations;                    // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class FName                                  BeginStaminaActionNotify;                          // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WaitForActionComplete;                             // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActionCooldown;                                    // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatsEnum>                    CooldownMultipliers;                               // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FStatsEnum                            RequiredStat;                                      // 0xF0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ActionsEnum
struct FActionsEnum : public FRowEnum
{
public:
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.PrefabTriggerBox
struct FPrefabTriggerBox
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               BoxExtent;                                         // 0x30(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.PrefabFoliage
struct FPrefabFoliage
{
public:
	TSoftObjectPtr<class UFoliageType>           FoliageType;                                       // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Instances;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.PrefabLavaFlowPoint
struct FPrefabLavaFlowPoint
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FlowSpeed;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseToFlowing;                                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Dryness;                                           // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EdgeTaper;                                         // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EdgeNoise;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.PrefabWaterfall
struct FPrefabWaterfall
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Curve;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeshType;                                          // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCalmVariant;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInCave;                                         // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLava;                                           // 0x42(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E4[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WaterSetupRowHandle
struct FWaterSetupRowHandle : public FRowHandle
{
public:
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Icarus.PrefabLake
struct FPrefabLake
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaterSetupRowHandle                  WaterSetup;                                        // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplineLoopDirection              SplineDirection;                                   // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       EdgeSplinePoints;                                  // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        EdgeSplineDensity;                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E6[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.PrefabTransform
struct FPrefabTransform
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.PrefabActorClass
struct FPrefabActorClass
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Icarus.PrefabCaveLight
struct FPrefabCaveLight
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECaveLightType                    LightType;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrackSun;                                         // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunlightPercentage;                                // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                LightTint;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadows;                                      // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumetricScatteringIntensity;                     // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastVolumetricShadow;                             // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDrawDistance;                                   // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Temperature;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTemperature;                                   // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttenuationRadius;                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerConeAngle;                                    // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterConeAngle;                                    // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceRadius;                                      // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceWidth;                                       // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceHeight;                                      // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BarnDoorAngle;                                     // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89EC[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Icarus.PrefabStaticMesh
struct FPrefabStaticMesh
{
public:
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, TSoftObjectPtr<class UMaterialInterface>> MaterialOverrides;                                 // 0x28(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_89ED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x80(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.ModifierStateSaveData
struct FModifierStateSaveData
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRemaining;                                     // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialModifierLifeTime;                           // 0xC(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationBuffModifier;                              // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ModifierEffectiveness;                             // 0x14(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.SerializedActorArray
struct FSerializedActorArray
{
public:
	uint8                                        Pad_89EE[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.SerializedIcarusActorRef
struct FSerializedIcarusActorRef
{
public:
	uint8                                        Pad_89EF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.FLODActorComponentSaveData
struct FFLODActorComponentSaveData
{
public:
	class FName                                  TileName;                                          // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelIndex;                                        // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecordIndex;                                       // 0xC(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceIndex;                                     // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnedFromPool;                                  // 0x14(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReservingInstance;                              // 0x15(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentFLODState;                                  // 0x18(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.InventorySlotDynamicData
struct FInventorySlotDynamicData
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.InventorySlotStatData
struct FInventorySlotStatData
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x18(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.InventorySlotAlterationData
struct FInventorySlotAlterationData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.LivingItemSlotSaveData
struct FLivingItemSlotSaveData
{
public:
	int32                                        CurrentProgress;                                   // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentUpgrade;                                    // 0x8(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Icarus.InventorySlotSaveData
struct FInventorySlotSaveData
{
public:
	int32                                        Location;                                          // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemStaticData;                                    // 0x4(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemGuid;                                          // 0x10(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemOwnerLookupId;                                 // 0x20(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventorySlotDynamicData>     DynamicData;                                       // 0x28(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FInventorySlotStatData>        AdditionalStats;                                   // 0x38(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FInventorySlotAlterationData>  Alterations;                                       // 0x48(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FLivingItemSlotSaveData>       LivingItemSlots;                                   // 0x58(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.InventorySaveData
struct FInventorySaveData
{
public:
	TArray<struct FInventorySlotSaveData>        Slots;                                             // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int32                                        InventoryID;                                       // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Icarus.GeneratorTraitRecord
struct FGeneratorTraitRecord
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Icarus.WaterTraitRecord
struct FWaterTraitRecord
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Icarus.EnergyTraitRecord
struct FEnergyTraitRecord
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.LinearColorVariableRecord
struct FLinearColorVariableRecord
{
public:
	class FName                                  VariableName;                                      // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Variable;                                          // 0x8(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.ActorNameVariableRecord
struct FActorNameVariableRecord
{
public:
	class FName                                  VariableName;                                      // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Variable;                                          // 0x8(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.ActorBoolVariableRecord
struct FActorBoolVariableRecord
{
public:
	class FName                                  VariableName;                                      // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVariable;                                         // 0x8(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.ActorIntVariableRecord
struct FActorIntVariableRecord
{
public:
	class FName                                  VariableName;                                      // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IVariable;                                         // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.AfflictionChance
struct FAfflictionChance : public FIcarusTableRowBase
{
public:
	TArray<struct FModifierStatesRowHandle>      Afflictions;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FStatsEnum                            ChanceStat;                                        // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChanceInPercent;                                   // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationInSeconds;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AfflictionChanceEnum
struct FAfflictionChanceEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AfflictionChanceRowHandle
struct FAfflictionChanceRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.VocalisationsRowHandle
struct FVocalisationsRowHandle : public FRowHandle
{
public:
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Icarus.AIStateVocalisation
struct FAIStateVocalisation
{
public:
	struct FVocalisationsRowHandle               StateEnteredVocalisation;                          // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVocalisationsRowHandle               StatePersistentVocalisation;                       // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVocalisationsRowHandle               StateExitedVocalisation;                           // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CreatureAudioThreatDataRowHandle
struct FCreatureAudioThreatDataRowHandle : public FRowHandle
{
public:
};

// 0x1B8 (0x1D0 - 0x18)
// ScriptStruct Icarus.AIAudioData
struct FAIAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             FootstepSound;                                     // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FrontFootSocket;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RearFootSocket;                                    // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  JumpSocket;                                        // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             MovementSound;                                     // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             DeathCollisionSound;                               // 0x80(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DeathCollisionSocket;                              // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             WaterDeathSound;                                   // 0xB0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VocalisationSocket;                                // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVocalisationsRowHandle               AttackVocalisation;                                // 0xE0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVocalisationsRowHandle               FlinchVocalisation;                                // 0xF8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVocalisationsRowHandle               DeathVocalisation;                                 // 0x110(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EAIAudioState, struct FAIStateVocalisation> StateVocalisations;                                // 0x128(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCreatureAudioThreatComponent> ThreatComponentClass;                              // 0x178(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThreatLevel;                                       // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreatureAudioThreatDataRowHandle     ThreatConfig;                                      // 0x1A4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMusicConditionCombatState        CombatMusicConditionOverride;                      // 0x1BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MusicConditionOverrideMinThreatLevel;              // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootstepMaxDistance;                               // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoliageCheckMaxDistance;                           // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesShelter;                                      // 0x1CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AIAudioDataEnum
struct FAIAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AIAudioDataRowHandle
struct FAIAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.EventCooldownList
struct FEventCooldownList
{
public:
	TArray<float>                                Cooldowns;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.ActiveEvent
struct FActiveEvent
{
public:
	class AAIEvent*                              Event;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InstigatorActor;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.VirtualStatsEnum
struct FVirtualStatsEnum : public FStatsEnum
{
public:
};

// 0x70 (0x88 - 0x18)
// ScriptStruct Icarus.AICreatureType
struct FAICreatureType : public FIcarusTableRowBase
{
public:
	class FText                                  CreatureName;                                      // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualStatsEnum                     SpawnStat;                                         // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualStatsEnum                     AdditionalDamageStat;                              // 0x48(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualStatsEnum                     AdditionalResistanceStat;                          // 0x58(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceEventsRowHandle            SkinningXPEvent;                                   // 0x68(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParentCreatureTag;                                 // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AICreatureTypeEnum
struct FAICreatureTypeEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AICreatureTypeRowHandle
struct FAICreatureTypeRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.AIDescriptor
struct FAIDescriptor : public FIcarusTableRowBase
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x18(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FStatsEnum>                    DescriptorStats;                                   // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AIDescriptorsEnum
struct FAIDescriptorsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AIDescriptorsRowHandle
struct FAIDescriptorsRowHandle : public FRowHandle
{
public:
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.AIEventData
struct FAIEventData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class AAIEvent>                AIEventBehaviourClass;                             // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSimultaneousEvents;                             // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CooldownDuration;                                  // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CooldownRandomDeviation;                           // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartOnCooldown;                                  // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89FA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AIEventsEnum
struct FAIEventsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AIEventsRowHandle
struct FAIEventsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BaseStatsEnum
struct FBaseStatsEnum : public FStatsEnum
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.CustomScaledStat
struct FCustomScaledStat
{
public:
	struct FBaseStatsEnum                        Stat;                                              // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           Curve;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct Icarus.AIGrowth
struct FAIGrowth : public FIcarusTableRowBase
{
public:
	TMap<struct FBaseStatsEnum, int32>           Base;                                              // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UCurveFloat*                           Health;                                            // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           MeleeDamage;                                       // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           MovementSpeed;                                     // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomScaledStat>             CustomStats;                                       // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ExperienceMultiplier;                              // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ProtectiveThreatOverDistance;                      // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AIGrowthEnum
struct FAIGrowthEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AIGrowthRowHandle
struct FAIGrowthRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AIRelationshipsRowHandle
struct FAIRelationshipsRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.AIRelationshipData
struct FAIRelationshipData : public FIcarusTableRowBase
{
public:
	TArray<struct FAIRelationshipsRowHandle>     HostileRelationships;                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAIRelationshipsRowHandle>     NeutralRelationships;                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAIRelationshipsRowHandle>     FriendlyRelationships;                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AIRelationshipsEnum
struct FAIRelationshipsEnum : public FRowEnum
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.MovementStateData
struct FMovementStateData
{
public:
	float                                        MaxWalkSpeed;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundFriction;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakingFriction;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAcceleration;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakingDeceleration;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationRate;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSwimSpeed;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GOAPSetupRowHandle
struct FGOAPSetupRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TagQueriesRowHandle
struct FTagQueriesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.HuntingSetupRowHandle
struct FHuntingSetupRowHandle : public FRowHandle
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.CriticalHitLocation
struct FCriticalHitLocation
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AffectsChildren;                                   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89FB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemRewardsRowHandle
struct FItemRewardsRowHandle : public FRowHandle
{
public:
};

// 0x218 (0x230 - 0x18)
// ScriptStruct Icarus.AISetup
struct FAISetup : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AController>             ControllerClass;                                   // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAICreatureTypeRowHandle              CreatureType;                                      // 0x68(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIDescriptorsRowHandle>       Descriptors;                                       // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FItemsStaticRowHandle                 DeadItem;                                          // 0x90(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGOAPSetupRowHandle                   GOAPSetup;                                         // 0xA8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    DefaultNavigationFilter;                           // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIRelationshipsRowHandle             Relationships;                                     // 0xC8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTagQueriesRowHandle>          NotifiedNPCTypes;                                  // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bNotifySelfType;                                   // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIGrowthRowHandle                    AIGrowth;                                          // 0xF4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EMovementState, struct FMovementStateData> MovementMapping;                                   // 0x110(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FHuntingSetupRowHandle                HuntingSetup;                                      // 0x160(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCriticalHitLocation>          CriticalHitBones;                                  // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAIAudioDataRowHandle                 Audio;                                             // 0x188(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          CollisionHitEventBones;                            // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LatentDeathDuration;                               // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemRewardsRowHandle                 Trophy;                                            // 0x1B4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemRewardsRowHandle                 Loot;                                              // 0x1CC(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemRewardsRowHandle                 Hitable;                                           // 0x1E4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSurvivalCharacterState;                        // 0x1FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartWithSurvivalTickDisabled;                    // 0x1FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryDataRowHandle                BestiaryGroup;                                     // 0x200(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCriticalHitLocation>          BlacklistBones;                                    // 0x218(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MinimumSpawnGroupSize;                             // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumSpawnGroupSize;                             // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AISetupEnum
struct FAISetupEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AISetupRowHandle
struct FAISetupRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AISpawnZonesRowHandle
struct FAISpawnZonesRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.AISpawnZoneSetup
struct FAISpawnZoneSetup
{
public:
	struct FColor                                Color;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISpawnZonesRowHandle                SpawnZone;                                         // 0x4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AISpawnRulesEnum
struct FAISpawnRulesEnum : public FRowEnum
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.AISpawnRulesList
struct FAISpawnRulesList
{
public:
	TArray<struct FAISpawnRulesEnum>             SpawnRules;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct Icarus.AISpawnConfigData
struct FAISpawnConfigData : public FIcarusTableRowBase
{
public:
	TMap<struct FAISetupEnum, struct FAISpawnRulesList> AISpawnRules;                                      // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UGameplayTexture>       SpawnMap;                                          // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAISpawnZoneSetup>             SpawnZones;                                        // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.HeatmapAISpawnData
struct FHeatmapAISpawnData
{
public:
	TSoftObjectPtr<class UGameplayTexture>       HeatmapTexture;                                    // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeatmapColorChannel              HeatmapTextureChannel;                             // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HeatmapSpawnWeight;                                // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AutonomousSpawnsRowHandle
struct FAutonomousSpawnsRowHandle : public FRowHandle
{
public:
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Icarus.BiomeAISpawnData
struct FBiomeAISpawnData
{
public:
	TMap<struct FAISetupEnum, int32>             SpawnList;                                         // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        BiomeSpawnDensity;                                 // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAutonomousSpawnsRowHandle>    RelevantAutonomousSpawners;                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AISpawnConfigEnum
struct FAISpawnConfigEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AISpawnConfigRowHandle
struct FAISpawnConfigRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.SpawnBlocker
struct FSpawnBlocker
{
public:
	struct FVector                               BlockerLocation;                                   // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpirationTime;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPlayerLeftArea;                                // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A01[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.TileSpawnData
struct FTileSpawnData
{
public:
	TArray<struct FVector>                       SpawnPoints;                                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x80 (0x98 - 0x18)
// ScriptStruct Icarus.AISpawnRuleData
struct FAISpawnRuleData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UIcarusAISpawnFilter>    SpawnFilter;                                       // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InverseCondition;                                  // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, int32>                   FilterParams;                                      // 0x48(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AISpawnRulesRowHandle
struct FAISpawnRulesRowHandle : public FRowHandle
{
public:
};

// 0x78 (0x90 - 0x18)
// ScriptStruct Icarus.AISpawnZones
struct FAISpawnZones : public FIcarusTableRowBase
{
public:
	struct FBiomeAISpawnData                     Creatures;                                         // 0x18(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MinLevel;                                          // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MedianLevel;                                       // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevel;                                          // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A03[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AISpawnZonesEnum
struct FAISpawnZonesEnum : public FRowEnum
{
public:
};

// 0xB8 (0xD0 - 0x18)
// ScriptStruct Icarus.Alteration
struct FAlteration : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             RankIcon;                                          // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x80(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AlterationsRowHandle
struct FAlterationsRowHandle : public FRowHandle
{
public:
};

// 0x60 (0x78 - 0x18)
// ScriptStruct Icarus.AmmoTypeData
struct FAmmoTypeData : public FIcarusTableRowBase
{
public:
	int32                                        ProjectileCount;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProjectileDamage;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ProjectileAccuracy;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x28(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AmmoTypesEnum
struct FAmmoTypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AmmoTypesRowHandle
struct FAmmoTypesRowHandle : public FRowHandle
{
public:
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Icarus.ExtensionLimitLimbDefinition
struct FExtensionLimitLimbDefinition
{
public:
	struct FBoneReference                        IKLimbBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKLimbBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct Icarus.AnimNode_ExtensionLimit
struct FAnimNode_ExtensionLimit : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FExtensionLimitLimbDefinition> LimbDefinitions;                                   // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct Icarus.SpeedWarping3DLimbDefinition
struct FSpeedWarping3DLimbDefinition
{
public:
	struct FBoneReference                        IKLimbBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKLimbBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        IKLimbTargetBone;                                  // 0x20(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct Icarus.AnimNode_SpeedWarping3D
struct FAnimNode_SpeedWarping3D : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FSpeedWarping3DLimbDefinition> LimbDefinitions;                                   // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 Space;                                             // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceProfile;                                      // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A04[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0xDC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedScaling;                                      // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A05[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ArmourSetBonusRowHandle
struct FArmourSetBonusRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.ArmourSet
struct FArmourSet : public FIcarusTableRowBase
{
public:
	TArray<struct FArmourSetBonusRowHandle>      SetBonus;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EPlayerArmourTypeFMODParam        FMODParam;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A06[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x88 - 0x18)
// ScriptStruct Icarus.ArmourSetBonus
struct FArmourSetBonus : public FIcarusTableRowBase
{
public:
	int32                                        RequiredGear;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FBaseStatsEnum, int32>           StatsGranted;                                      // 0x38(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ArmourSetsRowHandle
struct FArmourSetsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ArmourRowHandle
struct FArmourRowHandle : public FRowHandle
{
public:
};

// 0x2E8 (0x300 - 0x18)
// ScriptStruct Icarus.ArmourData
struct FArmourData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class USkeletalMesh>          ArmourMesh;                                        // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          HabArmourMesh;                                     // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          FemaleMeshVariant;                                 // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          FirstPersonMeshVariant;                            // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideFirstPersonUndersuit;                         // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UAnimInstance>           AnimBlueprintClass;                                // 0xC0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           FemaleAnimBlueprintClass;                          // 0xE8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           FirstPersonAnimBlueprintClass;                     // 0x110(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UGFurComponent>          TPFurClass;                                        // 0x138(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UGFurComponent>          FPFurClass;                                        // 0x160(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FBaseStatsEnum, int32>           ArmourStats;                                       // 0x188(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EArmourType                       ArmourType;                                        // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FArmourSetsRowHandle                  ArmourSet;                                         // 0x1DC(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArmourRowHandle>              ImplicitDefaultArmour;                             // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultMaterials;                         // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, TSoftObjectPtr<class UMaterialInterface>> ArmourMeshMaterialOverrides;                       // 0x210(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<int32, TSoftObjectPtr<class UMaterialInterface>> FemaleArmourMeshMaterialOverrides;                 // 0x260(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<int32, TSoftObjectPtr<class UMaterialInterface>> FPArmourMeshMaterialOverrides;                     // 0x2B0(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ArmourEnum
struct FArmourEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ArmourSetBonusEnum
struct FArmourSetBonusEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ArmourSetsEnum
struct FArmourSetsEnum : public FRowEnum
{
public:
};

// 0x70 (0x88 - 0x18)
// ScriptStruct Icarus.AssetReferenceData
struct FAssetReferenceData : public FIcarusTableRowBase
{
public:
	enum class EAssetType                        AssetType;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UObject>                 SoftClassPtr;                                      // 0x20(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                SoftObjectPtr;                                     // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                HardClassPtr;                                      // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               HardObjectPtr;                                     // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHardReference;                                    // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreload;                                          // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A0D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AssetReferencesEnum
struct FAssetReferencesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AssetReferencesRowHandle
struct FAssetReferencesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AtmospheresEnum
struct FAtmospheresEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AtmospheresRowHandle
struct FAtmospheresRowHandle : public FRowHandle
{
public:
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.AttachmentIcon
struct FAttachmentIcon : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  TagQuery;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AttachmentIconsEnum
struct FAttachmentIconsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.AttachmentIconsRowHandle
struct FAttachmentIconsRowHandle : public FRowHandle
{
public:
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.AudioContextCaveColliderSet
struct FAudioContextCaveColliderSet
{
public:
	TSet<class UPrimitiveComponent*>             Colliders;                                         // 0x0(0x50)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.AudioContextSubscriber
struct FAudioContextSubscriber
{
public:
	class UFMODAudioComponent*                   AudioComponent;                                    // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A0E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.AudioOcclusionSocketTracePoint
struct FAudioOcclusionSocketTracePoint
{
public:
	class FName                                  TraceName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetSocket;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Target;                                            // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Icarus.AudioOcclusionTracePoint
struct FAudioOcclusionTracePoint
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.AudioOcclusionTraceResult
struct FAudioOcclusionTraceResult
{
public:
	uint8                                        Pad_8A0F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.AuraInfo
struct FAuraInfo : public FIcarusTableRowBase
{
public:
	struct FModifierStatesRowHandle              Modifier;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            Stat;                                              // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.FindAuraResult
struct FFindAuraResult
{
public:
	struct FModifierStatesRowHandle              AuraType;                                          // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModifierStateComponent*               Component;                                         // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Icarus.AuraFlags
struct FAuraFlags
{
public:
	bool                                         EffectsSelf;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EffectsPlayers;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EffectsNPCs;                                       // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EffectsDeployables;                                // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ModifierStateAudioDataRowHandle
struct FModifierStateAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.RandomRangeValue
struct FRandomRangeValue
{
public:
	float                                        BaseValue;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Deviation;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x238 (0x250 - 0x18)
// ScriptStruct Icarus.ModifierStateData
struct FModifierStateData : public FIcarusTableRowBase
{
public:
	class UTexture2D*                            ModifierIcon;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModifierType                     Type;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ModifierName;                                      // 0x28(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ModifierDescription;                               // 0x40(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         VisibleToPlayer;                                   // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class USceneComponent>         CosmeticAttachComponent;                           // 0x60(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifierStateAudioDataRowHandle      AudioData;                                         // 0x88(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               GrantedStats;                                      // 0xA0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FStatsEnum>                    ModifierEffectivenessAffectors;                    // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bAura;                                             // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AuraRange;                                         // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAuraFlags                            AuraFlags;                                         // 0x108(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FModifierStatesRowHandle              ModifierGrantedByAura;                             // 0x10C(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEscalates;                                        // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAfflictionChanceRowHandle            Escalation;                                        // 0x128(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EscalationTime;                                    // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemovedOnEscalation;                              // 0x144(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UModifierStateComponent> Behaviour;                                         // 0x148(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FRandomRangeValue> ModifierVariables;                                 // 0x170(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         ShouldTick;                                        // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TickOnApply;                                       // 0x1C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A15[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModifierTickRate;                                  // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatsEnum>                    ModifierLifetimeAffectors;                         // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         RemovedOnDeath;                                    // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModifierMergeType                MergeType;                                         // 0x1D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A16[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxStackNum;                                       // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ModifierTags;                                      // 0x1E0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     ModifierAllowedQuery;                              // 0x200(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bEffectsObjects;                                   // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEffectsNPCs;                                      // 0x249(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEffectsPlayers;                                   // 0x24A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SaveToDatabase;                                    // 0x24B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemovedOnClick;                                    // 0x24C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A17[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C8 (0x2C8 - 0x0)
// ScriptStruct Icarus.AuraInstance
struct FAuraInstance
{
public:
	struct FModifierStateData                    AuraModifier;                                      // 0x0(0x250)(NativeAccessSpecifierPublic)
	struct FModifierStatesRowHandle              ModifierRow;                                       // 0x250(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModifierStateComponent*               OwningStateComp;                                   // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class AActor*, int32>                   CurrentAffectedActors;                             // 0x270(0x50)(NativeAccessSpecifierPublic)
	int32                                        AuraRange;                                         // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A18[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.AuraInstances
struct FAuraInstances
{
public:
	TArray<struct FAuraInstance>                 Instances;                                         // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct Icarus.AutonomousSpawnData
struct FAutonomousSpawnData : public FIcarusTableRowBase
{
public:
	struct FAISetupEnum                          AISetup;                                           // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AIcarusActor>            IcarusActorClass;                                  // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UObject>                 AISpawnBehaviour;                                  // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumAroundPlayers;                               // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSpawnCount;                                     // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDistanceToPlayers;                              // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayTagsToApply;                               // 0x88(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.AutonomousSpawnsEnum
struct FAutonomousSpawnsEnum : public FRowEnum
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.PendingInventorySwap
struct FPendingInventorySwap
{
public:
	uint8                                        Pad_8A1A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.BagPriorityData
struct FBagPriorityData : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  ItemQuery;                                         // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemsStaticRowHandle>         BagItems;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BagPriorityEnum
struct FBagPriorityEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BagPriorityRowHandle
struct FBagPriorityRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.BounceSettings
struct FBounceSettings
{
public:
	bool                                         bBounceAngleAffectsFriction;                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Bounciness;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Friction;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BounceVelocityStopSimulatingThreshold;             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFrictionFraction;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeBetweenBounces;                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Icarus.BallisticAudioData
struct FBallisticAudioData
{
public:
	TSoftObjectPtr<class UFMODEvent>             FlySound;                                          // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             ImpactSound;                                       // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayImpactSoundOnPayload;                         // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A1C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C8 (0x1E0 - 0x18)
// ScriptStruct Icarus.BallisticData
struct FBallisticData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UBallisticComponent>     Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageVariationPercentage;                         // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStealthAttack;                                 // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHomingProjectile;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanKillCam;                                       // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnbreakableDuringKillCam;                         // 0x4B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowPickupAfterSettle;                            // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AIcarusPayload>          PayloadClass;                                      // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPayloadDeploymentType            PayloadDeploymentType;                             // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PayloadDeploymentTimerDelay;                       // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFXSystemAsset>         TrailParticle;                                     // 0x88(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreakChance;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurabilityDamage;                                  // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostDeployLifetime;                                // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CullDistanceSquared;                               // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttachOnHit;                                       // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBounceSettings                       ProjectileBounceSettings;                          // 0xC4(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            OverrideStaticMesh;                                // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          OverrideSkeletalMesh;                              // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPhysicsAsset>          OverridePhysicsAsset;                              // 0x130(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RotationFollowsVelocity;                           // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              VelocityRotationOffset;                            // 0x15C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              AngularRotation;                                   // 0x168(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SpawnPositionOffset;                               // 0x174(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBallisticAudioData                   AudioData;                                         // 0x180(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bUseActorPooling;                                  // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableRecorderComponent;                         // 0x1D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A22[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OnHitAINoiseEventRange;                            // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BallisticEnum
struct FBallisticEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BallisticRowHandle
struct FBallisticRowHandle : public FRowHandle
{
public:
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.FiredProjectileInfo
struct FFiredProjectileInfo
{
public:
	struct FTransform                            SpawnTransform;                                    // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpawnTimeInGameSeconds;                            // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AIcarusItem>            Projectile;                                        // 0x34(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A23[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x34 - 0xC)
// ScriptStruct Icarus.FishDataFastArrayItem
struct FFishDataFastArrayItem : public FFastArraySerializerItem
{
public:
	struct FFishDataRowHandle                    FishRow;                                           // 0xC(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxQuality;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxWeight;                                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLength;                                         // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CaughtCount;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x158 - 0x108)
// ScriptStruct Icarus.FishDataFastArray
struct FFishDataFastArray : public FFastArraySerializer
{
public:
	TArray<struct FFishDataFastArrayItem>        FishEntries;                                       // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A24[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x28 - 0xC)
// ScriptStruct Icarus.BestiaryFastArrayItem
struct FBestiaryFastArrayItem : public FFastArraySerializerItem
{
public:
	struct FBestiaryDataRowHandle                BestiaryRowHandle;                                 // 0xC(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointScore;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x158 - 0x108)
// ScriptStruct Icarus.BestiaryFastArray
struct FBestiaryFastArray : public FFastArraySerializer
{
public:
	TArray<struct FBestiaryFastArrayItem>        BestiaryEntries;                                   // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A25[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TerrainsRowHandle
struct FTerrainsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BestiaryTraitsRowHandle
struct FBestiaryTraitsRowHandle : public FRowHandle
{
public:
};

// 0x1C0 (0x1D8 - 0x18)
// ScriptStruct Icarus.BestiaryData
struct FBestiaryData : public FIcarusTableRowBase
{
public:
	class FText                                  CreatureName;                                      // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PopupImageScale;                                   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PopupImageOffset;                                  // 0x5C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBiomeImageType                   BiomeImageType;                                    // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             CreatureSound;                                     // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAISetupRowHandle>             SpecificCreatures;                                 // 0x90(0x10)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAtmospheresRowHandle>         Biomes;                                            // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTerrainsRowHandle>            Maps;                                              // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TotalPointsRequired;                               // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Lore1;                                             // 0xC8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Lore2;                                             // 0xE0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Lore3;                                             // 0xF8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FBestiaryTraitsRowHandle>      Traits;                                            // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FBaseStatsEnum, int32>           StatsUnlock1;                                      // 0x120(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FBaseStatsEnum, int32>           StatsUnlock2;                                      // 0x170(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FBaseStatsEnum>                ProgressiveStat;                                   // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsBoss;                                           // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A28[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BestiaryDataEnum
struct FBestiaryDataEnum : public FRowEnum
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.FishRarity
struct FFishRarity
{
public:
	TArray<struct FFishDataRowHandle>            Fish;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.FishCategory
struct FFishCategory
{
public:
	TMap<enum class EFishRarity, struct FFishRarity> Rarity;                                            // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.BestiaryBiome
struct FBestiaryBiome
{
public:
	TArray<struct FBestiaryDataRowHandle>        Creatures;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.BestiaryCategory
struct FBestiaryCategory
{
public:
	TMap<struct FAtmospheresRowHandle, struct FBestiaryBiome> Biomes;                                            // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.BestiaryPoints
struct FBestiaryPoints : public FIcarusTableRowBase
{
public:
	int32                                        PointsAwarded;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A29[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BestiaryPointsEnum
struct FBestiaryPointsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BestiaryPointsRowHandle
struct FBestiaryPointsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BestiaryTraitTypesRowHandle
struct FBestiaryTraitTypesRowHandle : public FRowHandle
{
public:
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Icarus.BestiaryTraitData
struct FBestiaryTraitData : public FIcarusTableRowBase
{
public:
	class FText                                  TraitName;                                         // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBestiaryTraitTypesRowHandle          Type;                                              // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OverrideColor;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             OverrideIcon;                                      // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BestiaryTraitsEnum
struct FBestiaryTraitsEnum : public FRowEnum
{
public:
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.BestiaryTraitType
struct FBestiaryTraitType : public FIcarusTableRowBase
{
public:
	struct FLinearColor                          Color;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BestiaryTraitTypesEnum
struct FBestiaryTraitTypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MusicLocationConditionsRowHandle
struct FMusicLocationConditionsRowHandle : public FRowHandle
{
public:
};

// 0x70 (0x88 - 0x18)
// ScriptStruct Icarus.BiomeAudioData
struct FBiomeAudioData : public FIcarusTableRowBase
{
public:
	enum class EGlobalEnvironmentBiomeFMODParam  BiomeFMODParam;                                    // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMusicLocationConditionsRowHandle     MusicLocationCondition;                            // 0x1C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             AudioAmbienceBase;                                 // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             AudioAmbienceTransitional;                         // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BiomeAudioDataEnum
struct FBiomeAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BiomeAudioDataRowHandle
struct FBiomeAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BiomesEnum
struct FBiomesEnum : public FRowEnum
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.PersistentBlockerRecord
struct FPersistentBlockerRecord
{
public:
	uint8                                        Pad_8A2C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BlockerActorClassName;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockerActorIcarusUID;                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A2D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CharacterFlagsRowHandle
struct FCharacterFlagsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemableRowHandle
struct FItemableRowHandle : public FRowHandle
{
public:
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.BlueprintUnlock
struct FBlueprintUnlock : public FIcarusTableRowBase
{
public:
	struct FItemableRowHandle                    Itemable;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharacterFlagsRowHandle>      Requirements;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCharacterFlagsRowHandle>      Unlocks;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        RequiredPointsToUnlock;                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredLevel;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BlueprintUnlocksEnum
struct FBlueprintUnlocksEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BlueprintUnlocksRowHandle
struct FBlueprintUnlocksRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemTemplateRowHandle
struct FItemTemplateRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DurableRowHandle
struct FDurableRowHandle : public FRowHandle
{
public:
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct Icarus.BreakableRockData
struct FBreakableRockData : public FIcarusTableRowBase
{
public:
	struct FItemRewardsRowHandle                 ItemReward;                                        // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                PyriticCrustItemType;                              // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDurableRowHandle                     Durable;                                           // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x60(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BreakSound;                                        // 0x80(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BreakableRockDataEnum
struct FBreakableRockDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BreakableRockDataRowHandle
struct FBreakableRockDataRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.FunctionContext
struct FFunctionContext
{
public:
	TSubclassOf<class UObject>                   ContextClass;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionToExecute;                                 // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x170 (0x188 - 0x18)
// ScriptStruct Icarus.BuildableAudioData
struct FBuildableAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             BuildingPlacedSound;                               // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BuildingStressDamageSound;                         // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BuildingDestroyedSound;                            // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BuildingDamagedSound;                              // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BuildingDestructibleDamagedSound;                  // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BuildingWeatherDamageSound;                        // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BuildingWeatherDamageStrippedSound;                // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BuildingWeatherUnzippingSound;                     // 0x130(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BuildingRepairedSound;                             // 0x158(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuildingOcclusionValue;                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A2E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BuildableAudioDataEnum
struct FBuildableAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BuildableAudioDataRowHandle
struct FBuildableAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BuildingTypesRowHandle
struct FBuildingTypesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BuildingStabilityRowHandle
struct FBuildingStabilityRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BuildingPiecesRowHandle
struct FBuildingPiecesRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.BuildingVariation
struct FBuildingVariation
{
public:
	struct FTalentsRowHandle                     Requirement;                                       // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Piece;                                             // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct Icarus.BuildableData
struct FBuildableData : public FIcarusTableRowBase
{
public:
	TSubclassOf<class UBuildableComponent>       Behaviour;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingStabilityRowHandle           Stability;                                         // 0x20(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingTypesRowHandle               Type;                                              // 0x38(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuildingPieceType                PieceType;                                         // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBuildingVariation>            Variations;                                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x68(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BuildableEnum
struct FBuildableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BuildableRowHandle
struct FBuildableRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.GridPoint
struct FGridPoint
{
public:
	TArray<class ABuildingBase*>                 Buildings;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.VectorPair
struct FVectorPair
{
public:
	struct FVector                               StartPoint;                                        // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndPoint;                                          // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.BuildingList
struct FBuildingList
{
public:
	TArray<class ABuildingBase*>                 Buildings;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Icarus.SerializedGrid
struct FSerializedGrid
{
public:
	struct FTransform                            GridTrans;                                         // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ABuildingBase>>     BuildingClasses;                                   // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    BuildingTrans;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FItemData>                     BuildingItemData;                                  // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.BuildingInstance
struct FBuildingInstance
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Variation;                                         // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IcarusUID;                                         // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BurnTimeRemaining;                                 // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A30[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.DatabaseBuildingType
struct FDatabaseBuildingType
{
public:
	class FName                                  BuildableRowName;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildingItemStaticRowName;                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBuildingInstance>             BuildingInstances;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.DatabaseBuildingGrid
struct FDatabaseBuildingGrid
{
public:
	struct FTransform                            GridTransform;                                     // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FDatabaseBuildingType>         BuildingTypes;                                     // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.BuildingRecordStatData
struct FBuildingRecordStatData
{
public:
	class FName                                  Stat;                                              // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.BuildingRecordAlterationData
struct FBuildingRecordAlterationData
{
public:
	class FName                                  Alteration;                                        // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Icarus.BuildingInfo
struct FBuildingInfo
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Variation;                                         // 0x30(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IcarusUID;                                         // 0x34(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BurnTimeRemaining;                                 // 0x38(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HealthPercentage;                                  // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBuildingRecordStatData>       AdditionalStats;                                   // 0x40(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FBuildingRecordAlterationData> Alterations;                                       // 0x50(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                         bIsInCave;                                         // 0x60(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportedByGround;                                // 0x61(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A31[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnchorStrength;                                    // 0x64(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A32[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.DatabaseBuildingData
struct FDatabaseBuildingData
{
public:
	class FName                                  BuildableRowName;                                  // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BuildingItemStaticRowName;                         // 0x8(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBuildingInfo>                 BuildingInstances;                                 // 0x10(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.BuildingGridSaveData
struct FBuildingGridSaveData
{
public:
	uint8                                        Pad_8A33[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridTransform;                                     // 0x10(0x30)(BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FDatabaseBuildingData>         BuildingTypes;                                     // 0x40(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x120 (0x138 - 0x18)
// ScriptStruct Icarus.BuildingLookup
struct FBuildingLookup : public FIcarusTableRowBase
{
public:
	class FText                                  PieceName;                                         // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Thatch;                                            // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Wood;                                              // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Refined_Wood;                                      // 0x60(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Stone;                                             // 0x78(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Concrete;                                          // 0x90(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Aluminium;                                         // 0xA8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Glass;                                             // 0xC0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              ClayBrick;                                         // 0xD8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Scoria;                                            // 0xF0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              ScoriaBrick;                                       // 0x108(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingPiecesRowHandle              Ice;                                               // 0x120(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BuildingLookupEnum
struct FBuildingLookupEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BuildingLookupRowHandle
struct FBuildingLookupRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.BuildingSkinsRowHandle
struct FBuildingSkinsRowHandle : public FRowHandle
{
public:
};

// 0x98 (0xB0 - 0x18)
// ScriptStruct Icarus.BuildingPiece
struct FBuildingPiece : public FIcarusTableRowBase
{
public:
	struct FBuildingLookupRowHandle              Type;                                              // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ABuildingBase>           Blueprint;                                         // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildableAudioDataRowHandle          Audio;                                             // 0x80(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildingSkinsRowHandle               Skin;                                              // 0x98(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BuildingPiecesEnum
struct FBuildingPiecesEnum : public FRowEnum
{
public:
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct Icarus.BuildingSkin
struct FBuildingSkin : public FIcarusTableRowBase
{
public:
	TMap<int32, TSoftObjectPtr<class UMaterialInterface>> BaseMeshMaterialSlotOverrides;                     // 0x18(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<int32, TSoftObjectPtr<class UMaterialInterface>> FrameMaterialSlotOverrides;                        // 0x68(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BuildingSkinsEnum
struct FBuildingSkinsEnum : public FRowEnum
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.BuildingStability
struct FBuildingStability : public FIcarusTableRowBase
{
public:
	float                                        BuildingTier;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHardStability;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HardStabilityMaxRange;                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumUnstableStability;                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StabilityPassMultiplier;                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAnchoredStability;                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowestGreenStability;                              // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YellowStability;                                   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighestRedStability;                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A34[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BuildingStabilityEnum
struct FBuildingStabilityEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.BuildingTypesEnum
struct FBuildingTypesEnum : public FRowEnum
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.CargoLandingPadRecord
struct FCargoLandingPadRecord
{
public:
	int32                                        LeftSlotUID;                                       // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RightSlotUID;                                      // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.CaveActorSpawnTimeStamp
struct FCaveActorSpawnTimeStamp
{
public:
	class FString                                CaveActorClassName;                                // 0x0(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                SpawnTimestamps;                                   // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x58 (0x70 - 0x18)
// ScriptStruct Icarus.Challenge
struct FChallenge : public FIcarusTableRowBase
{
public:
	class FText                                  ChallengeName;                                     // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ChallengeDescription;                              // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EChallengeTypes                   Type;                                              // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequiredCount;                                     // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 OptionalRequiredTags;                              // 0x50(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ChallengesEnum
struct FChallengesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ChallengesRowHandle
struct FChallengesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DLCPackageDataRowHandle
struct FDLCPackageDataRowHandle : public FRowHandle
{
public:
};

// 0x110 (0x128 - 0x18)
// ScriptStruct Icarus.CharacterCreationData
struct FCharacterCreationData : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ECharacterOptionCategory          Category;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterBodyType                BodyType;                                          // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A36[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                Item;                                              // 0x60(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FColor>                        Color;                                             // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ScalarParamValue;                                  // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             TextureParamValue;                                 // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UMaterialInterface>, TSoftObjectPtr<class UMaterialInterface>> MaterialOverrides;                                 // 0xB8(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDLCPackageDataRowHandle              RequiredPackageID;                                 // 0x10C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A39[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CharacterCreationDataEnum
struct FCharacterCreationDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CharacterCreationDataRowHandle
struct FCharacterCreationDataRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.CharacterFlag
struct FCharacterFlag : public FIcarusTableRowBase
{
public:
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CharacterFlagsEnum
struct FCharacterFlagsEnum : public FRowEnum
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.CharacterGrowth
struct FCharacterGrowth : public FIcarusTableRowBase
{
public:
	class UCurveFloat*                           ExperienceCurve;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           AttributeCurve;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           BlueprintPointsPerLevel;                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TalentPointsPerLevel;                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           SoloPointsPerLevel;                                // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDisplayLevel;                                   // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevel;                                          // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CharacterGrowthEnum
struct FCharacterGrowthEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CharacterGrowthRowHandle
struct FCharacterGrowthRowHandle : public FRowHandle
{
public:
};

// 0xB0 (0xC8 - 0x18)
// ScriptStruct Icarus.CharacterPerk
struct FCharacterPerk : public FIcarusTableRowBase
{
public:
	class FText                                  Name;                                              // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterAttribute               Attribute;                                         // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A3A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequiredAttributeLevel;                            // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               StatsGranted;                                      // 0x78(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CharacterPerksEnum
struct FCharacterPerksEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CharacterPerksRowHandle
struct FCharacterPerksRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CharacterStartingStatsEnum
struct FCharacterStartingStatsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CharacterStartingStatsRowHandle
struct FCharacterStartingStatsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TimelineRanksRowHandle
struct FTimelineRanksRowHandle : public FRowHandle
{
public:
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.CharacterTimeline
struct FCharacterTimeline : public FIcarusTableRowBase
{
public:
	int32                                        Level;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x20(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTimelineRanksRowHandle>       TimelineRanks;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         FeatureLocked;                                     // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A3C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CharacterTimelineEnum
struct FCharacterTimelineEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CharacterTimelineRowHandle
struct FCharacterTimelineRowHandle : public FRowHandle
{
public:
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.CharacterVoiceData
struct FCharacterVoiceData : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EGlobalPlayerCharacterVoiceFMODParam VoiceFMODParam;                                    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A3D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CharacterVoicesEnum
struct FCharacterVoicesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CharacterVoicesRowHandle
struct FCharacterVoicesRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.CombustibleData
struct FCombustibleData : public FIcarusTableRowBase
{
public:
	int32                                        MillijoulesProvided;                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                ProducesItem;                                      // 0x1C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DescriptionText;                                   // 0x34(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A3E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CombustibleEnum
struct FCombustibleEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CombustibleRowHandle
struct FCombustibleRowHandle : public FRowHandle
{
public:
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Icarus.ConfirmationPopupDetails
struct FConfirmationPopupDetails
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  OptionA;                                           // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  OptionB;                                           // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UFMODEvent*                            OptionAAudioOverride;                              // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            OptionBAudioOverride;                              // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ContentWidget;                                     // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               ContentWidgetClass;                                // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            OptionAIcon;                                       // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            OptionBIcon;                                       // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OptionATint;                                       // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OptionBTint;                                       // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.Modifier
struct FModifier
{
public:
	struct FModifierStatesRowHandle              Modifier;                                          // 0x0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModifierLifetime;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ModifierEffectiveness;                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct Icarus.ConsumableData
struct FConsumableData : public FIcarusTableRowBase
{
public:
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModifier                             Modifier;                                          // 0x68(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  DescriptionText;                                   // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemTemplateRowHandle>        Byproducts;                                        // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ConsumableEnum
struct FConsumableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ConsumableRowHandle
struct FConsumableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ContextMenuGroupTypesRowHandle
struct FContextMenuGroupTypesRowHandle : public FRowHandle
{
public:
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Icarus.ContextMenuItemData
struct FContextMenuItemData
{
public:
	class FName                                  ItemIdentifier;                                    // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemPayload;                                       // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextMenuGroupTypesRowHandle       GroupType;                                         // 0xC(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label;                                             // 0x28(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x48(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFeatureLevelsRowHandle               FeatureLevel;                                      // 0x74(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ItemClickedDelegate;                               // 0x8C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       ContextWidgets;                                    // 0xA0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.ContextMenuGroupType
struct FContextMenuGroupType : public FIcarusTableRowBase
{
public:
	class FText                                  GroupName;                                         // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            GroupIcon;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ContextMenuGroupTypesEnum
struct FContextMenuGroupTypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ProcessingRowHandle
struct FProcessingRowHandle : public FRowHandle
{
public:
};

// 0x80 (0x98 - 0x18)
// ScriptStruct Icarus.CraftingAudioData
struct FCraftingAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             RecipeCraftedSound;                                // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FProcessingRowHandle, TSoftObjectPtr<class UFMODEvent>> ProcessorOverrideSounds;                           // 0x40(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bOnlyPlayForLastItemInQueue;                       // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A43[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CraftingAudioDataEnum
struct FCraftingAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CraftingAudioDataRowHandle
struct FCraftingAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.ResourceItem
struct FResourceItem
{
public:
	enum class EIcarusResourceType               Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequiredUnits;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct Icarus.FlagsMultiRowHandle
struct FFlagsMultiRowHandle : public FMultiRowHandle
{
public:
	enum class EFlagsTableType                   DataTableName;                                     // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8A45[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RecipeSetsRowHandle
struct FRecipeSetsRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.CraftingInput
struct FCraftingInput : public FIcarusTableRowBase
{
public:
	struct FItemsStaticRowHandle                 Element;                                           // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemDynamicData>              DynamicProperties;                                 // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.CraftingOutput
struct FCraftingOutput : public FIcarusTableRowBase
{
public:
	struct FItemTemplateRowHandle                Element;                                           // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemDynamicData>              DynamicProperties;                                 // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAlterationsRowHandle>         Alterations;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2D0 (0x2E8 - 0x18)
// ScriptStruct Icarus.ProcessorRecipe
struct FProcessorRecipe : public FIcarusTableRowBase
{
public:
	bool                                         bForceDisableRecipe;                               // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalentsRowHandle                     Requirement;                                       // 0x1C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlagsMultiRowHandle                  SessionRequirement;                                // 0x38(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterFlagsRowHandle              CharacterRequirement;                              // 0x50(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredMillijoules;                               // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRecipeSetsRowHandle>          RecipeSets;                                        // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStatsEnum>                    ResourceCostMultipliers;                           // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCraftingInput>                Inputs;                                            // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FResourceItem>                 ResourceInputs;                                    // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSelectOutputItemRandomly;                         // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemRandomSelect;                                  // 0xB8(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FCraftingOutput>               Outputs;                                           // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FResourceItem>                 ResourceOutputs;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERefundPermission                 Refundable;                                        // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExperienceMultiplier;                              // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingAudioDataRowHandle           Audio;                                             // 0x2D0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x78 - 0x18)
// ScriptStruct Icarus.RecipeSet
struct FRecipeSet : public FIcarusTableRowBase
{
public:
	class FText                                  RecipeSetName;                                     // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             RecipeSetIcon;                                     // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExperienceMultiplier;                              // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRefundOfRecipesOnDestroy;                    // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.ResourceRequirement
struct FResourceRequirement
{
public:
	enum class EIcarusResourceType               Resource;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FlowRate;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.CraftingModifications
struct FCraftingModifications : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  Query;                                             // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            StatRequirement;                                   // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAlterationsEnum>              StatGrantedAlteration;                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FResourceRequirement                  ResourceRequirement;                               // 0x50(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAlterationsEnum                      ResourceGrantedAlteration;                         // 0x58(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CraftingModificationsEnum
struct FCraftingModificationsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CraftingModificationsRowHandle
struct FCraftingModificationsRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.CreatureAudioThreatSetting
struct FCreatureAudioThreatSetting
{
public:
	class UCurveFloat*                           DistanceModifierCurve;                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GracePeriod;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.CreatureAudioThreatData
struct FCreatureAudioThreatData : public FIcarusTableRowBase
{
public:
	TMap<enum class ECreatureAudioThreatTargetType, struct FCreatureAudioThreatSetting> ThreatSettings;                                    // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CreatureAudioThreatDataEnum
struct FCreatureAudioThreatDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CriticalHitAreaAudioDataRowHandle
struct FCriticalHitAreaAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Icarus.CriticalHitArea
struct FCriticalHitArea : public FIcarusTableRowBase
{
public:
	struct FStatsEnum                            DamageReductionStat;                               // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            DamageReductionMitigatingStat;                     // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            DamageMultiplierStat;                              // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReductionStatMultiplier;                           // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MultiplierStatMultiplier;                          // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FModifierStatesRowHandle>      ModifiersToApply;                                  // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCriticalHitAreaAudioDataRowHandle    AudioData;                                         // 0x64(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A50[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.CriticalHitAreaAudioData
struct FCriticalHitAreaAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             PlayerFeedbackSound;                               // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldCritZoneSuppressHitAudio;                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A51[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CriticalHitAreaAudioDataEnum
struct FCriticalHitAreaAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CriticalHitAreasRowHandle
struct FCriticalHitAreasRowHandle : public FRowHandle
{
public:
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.CriticalHitPlayer
struct FCriticalHitPlayer : public FIcarusTableRowBase
{
public:
	float                                        TimeScale;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLength;                                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationOffset;                                    // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PivotOffset;                                       // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CameraOffset;                                      // 0x34(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CameraRotationOffset;                              // 0x40(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A52[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.CriticalHitProjectile
struct FCriticalHitProjectile : public FIcarusTableRowBase
{
public:
	float                                        TimeScale;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CameraOffset;                                      // 0x1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CameraRotationOffset;                              // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       CameraShake;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.CritialHitTarget
struct FCritialHitTarget : public FIcarusTableRowBase
{
public:
	float                                        TimeScale;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLength;                                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationOffset;                                    // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PivotOffset;                                       // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CameraOffset;                                      // 0x34(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CameraRotationOffset;                              // 0x40(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A53[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0x100 - 0x18)
// ScriptStruct Icarus.CriticalHitSetup
struct FCriticalHitSetup : public FIcarusTableRowBase
{
public:
	struct FCriticalHitPlayer                    PlayerConfig;                                      // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCriticalHitProjectile                ProjectileConfig;                                  // 0x68(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCritialHitTarget                     TargetConfig;                                      // 0xA8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        FinishTime;                                        // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A54[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CriticalHitSetupEnum
struct FCriticalHitSetupEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CriticalHitSetupRowHandle
struct FCriticalHitSetupRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.CultivationSaveData
struct FCultivationSaveData
{
public:
	class FName                                  Seed;                                              // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrowthTime;                                        // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GrowthState;                                       // 0xC(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.CurrencyConversion
struct FCurrencyConversion : public FIcarusTableRowBase
{
public:
	struct FMetaCurrencyRowHandle                StartingCurrency;                                  // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartingAmount;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetaCurrencyRowHandle                ConvertedCurrency;                                 // 0x34(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConvertedAmount;                                   // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.CurrencyConversionsEnum
struct FCurrencyConversionsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.CurrencyConversionsRowHandle
struct FCurrencyConversionsRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.DamageTypeInfoModifier
struct FDamageTypeInfoModifier
{
public:
	struct FTagQueriesRowHandle                  Tag;                                               // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            Stat;                                              // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x90 - 0x18)
// ScriptStruct Icarus.DamageTypeInfo
struct FDamageTypeInfo : public FIcarusTableRowBase
{
public:
	enum class EIcarusDamageType                 DamageType;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                Color;                                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  RequiredDefenderQuery;                             // 0x20(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            DamageStat;                                        // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            DamageVariationStat;                               // 0x48(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            ResistanceStat;                                    // 0x58(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDamageTypeInfoModifier>       ResistanceOverride;                                // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDamageTypeInfoModifier>       DefenderMultipliers;                               // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAddStealthMultiplier;                             // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A56[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DamageTypeInfoEnum
struct FDamageTypeInfoEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DamageTypeInfoRowHandle
struct FDamageTypeInfoRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.DecayableData
struct FDecayableData : public FIcarusTableRowBase
{
public:
	int32                                        DecayTime;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpoilTime;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                SpoiledItem;                                       // 0x20(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResourceLeakage;                                   // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A57[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DecayableEnum
struct FDecayableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DecayableRowHandle
struct FDecayableRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.DensityAudioRecordSet
struct FDensityAudioRecordSet
{
public:
	TArray<class UObject*>                       Records;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8A58[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Icarus.SerializedDeployable
struct FSerializedDeployable
{
public:
	struct FItemData                             Deployable;                                        // 0x0(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTransform                            DeployableTransform;                               // 0x1F0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DeployableSetupRowHandle
struct FDeployableSetupRowHandle : public FRowHandle
{
public:
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct Icarus.DeployableData
struct FDeployableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UDeployableComponent>    Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x40(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FDeployableSetupRowHandle>     Variants;                                          // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        AudioOcclusionAmount;                              // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EffectedByWeather;                                 // 0xA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceShowShelterIcon;                             // 0xA5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustBeOutside;                                    // 0xA6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A59[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DeployableEnum
struct FDeployableEnum : public FRowEnum
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.DeployableRecord
struct FDeployableRecord
{
public:
	uint8                                        Pad_8A5A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FoundationActorClassName;                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FoundationActorIcarusUID;                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A5B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DeployableRowHandle
struct FDeployableRowHandle : public FRowHandle
{
public:
};

// 0x170 (0x188 - 0x18)
// ScriptStruct Icarus.DeployableSetup
struct FDeployableSetup : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class AIcarusItem>             DeployableBlueprint;                               // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             DeployableIcon;                                    // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DeployableName;                                    // 0x68(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            PreviewStaticMesh;                                 // 0x80(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             DeployedSound;                                     // 0xA8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FItemsStaticRowHandle, TSoftObjectPtr<class UFMODEvent>> ItemAddedSounds;                                   // 0xD0(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        AudioOcclusionAmount;                              // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SnapToSurfaceNormal;                               // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSurfaceSnapAngle;                               // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SupportsCustomRotation;                            // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWorldPlacementType               WorldPlacementType;                                // 0x12D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideInvalidPlacementPreview;                       // 0x12E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDeployableSnapBehaviour          SnapBehaviour;                                     // 0x12F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SnapActorTags;                                     // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          SnapSocketsOrTags;                                 // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IgnoreCollisionWhenSnapped;                        // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSnapSocketRotation;                             // 0x151(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSnapSocketScale;                                // 0x152(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanAffectNavigation;                              // 0x153(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavArea>                  NavAreaClass;                                      // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NavigationFallbackExtents;                         // 0x160(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRestackingAmount;                               // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DeployCollisionExtentOffset;                       // 0x170(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DeployCollisionLocationOffset;                     // 0x17C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DeployableSetupEnum
struct FDeployableSetupEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DeployableTypesEnum
struct FDeployableTypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DeployableTypesRowHandle
struct FDeployableTypesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DialogueSpeakerRowHandle
struct FDialogueSpeakerRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.DialogueSubtitleOverride
struct FDialogueSubtitleOverride
{
public:
	class FString                                ReferenceText;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideLength;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueSpeakerRowHandle             SpeakerOverride;                                   // 0x14(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A5E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xE0 - 0x18)
// ScriptStruct Icarus.Dialogue
struct FDialogue : public FIcarusTableRowBase
{
public:
	TMap<enum class EDialogueRedirectCondition, struct FDialogueRowHandle> Redirects;                                         // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             Audio;                                             // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AudioLength;                                       // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueSpeakerRowHandle             Speaker;                                           // 0x9C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          Text;                                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseSubtitleOverrides;                             // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDialogueSubtitleOverride>     SubtitleOverrides;                                 // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DialogueEnum
struct FDialogueEnum : public FRowEnum
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.DialoguePool
struct FDialoguePool : public FIcarusTableRowBase
{
public:
	TArray<struct FDialogueRowHandle>            Pool;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DialoguePoolEnum
struct FDialoguePoolEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DialoguePoolRowHandle
struct FDialoguePoolRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.DialogueSpeaker
struct FDialogueSpeaker : public FIcarusTableRowBase
{
public:
	class FText                                  Speaker;                                           // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DialogueSpeakerEnum
struct FDialogueSpeakerEnum : public FRowEnum
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.DLCPackageData
struct FDLCPackageData : public FIcarusTableRowBase
{
public:
	int32                                        PackageID;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DLCName;                                           // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                WebsiteAddress;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DLCPackageDataEnum
struct FDLCPackageDataEnum : public FRowEnum
{
public:
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Icarus.DrillSaveData
struct FDrillSaveData
{
public:
	bool                                         bDrillActive;                                      // 0x0(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrillCanAutoRestart;                              // 0x1(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xC8 - 0x18)
// ScriptStruct Icarus.DropGroupCosmeticData
struct FDropGroupCosmeticData : public FIcarusTableRowBase
{
public:
	class FText                                  DropGroupName;                                     // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DropGroupDescription;                              // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             DropGroupIcon;                                     // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             DropGroupBackground;                               // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisibleInDropSelectionScreen;                     // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A62[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTerrainsRowHandle                    AssociatedTerrain;                                 // 0x9C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DropGroupIndex;                                    // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRecommended;                                    // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropTemperature                  Temperature;                                       // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropAbundance                    Food;                                              // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropAbundance                    Water;                                             // 0xBB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropAbundance                    Oxygen;                                            // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropAbundance                    Wood;                                              // 0xBD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropAbundance                    Rock;                                              // 0xBE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropAbundance                    Ore;                                               // 0xBF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropAbundance                    AggressiveCreatures;                               // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropAbundance                    PassiveCreatures;                                  // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A63[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Icarus.DropGroupAttribute
struct FDropGroupAttribute
{
public:
	class FText                                  AttributeTitle;                                    // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             AttributeIcon;                                     // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AttributeQuality;                                  // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DropGroupsEnum
struct FDropGroupsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DropGroupsRowHandle
struct FDropGroupsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DropShipActionsEnum
struct FDropShipActionsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DropShipActionsRowHandle
struct FDropShipActionsRowHandle : public FRowHandle
{
public:
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.DropShipEvent
struct FDropShipEvent : public FIcarusTableRowBase
{
public:
	struct FDropShipActionsRowHandle             Action;                                            // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TriggerTime;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Complete;                                          // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A64[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DropShipAction
struct FDropShipAction : public FIcarusTableRowBase
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.DropShipSequence
struct FDropShipSequence : public FIcarusTableRowBase
{
public:
	TArray<struct FDropShipEvent>                Events;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           Trajectory;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DropShipSequencesEnum
struct FDropShipSequencesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DropShipSequencesRowHandle
struct FDropShipSequencesRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.RepairData
struct FRepairData
{
public:
	struct FItemsStaticRowHandle                 Item;                                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.DurableData
struct FDurableData : public FIcarusTableRowBase
{
public:
	int32                                        Max_Durability;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Destroyed_At_Zero;                                 // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRepairData>                   ItemsForRepair;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRecipeSetsRowHandle>          NoRecipe_RequiredRecipeSet;                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DurableEnum
struct FDurableEnum : public FRowEnum
{
public:
};

// 0x78 (0x90 - 0x18)
// ScriptStruct Icarus.DynamicQuest
struct FDynamicQuest : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFactionMissionsRowHandle             Quest;                                             // 0x70(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weighting;                                         // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A66[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DynamicQuestRewardItemsRowHandle
struct FDynamicQuestRewardItemsRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.QuestRewardItemEntry
struct FQuestRewardItemEntry
{
public:
	struct FDynamicQuestRewardItemsRowHandle     Item;                                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScales;                                           // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A67[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.DynamicQuestReward
struct FDynamicQuestReward : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FQuestRewardItemEntry>         PotentialRewards;                                  // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Weighting;                                         // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A68[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Icarus.RewardItemEntry
struct FRewardItemEntry
{
public:
	struct FItemTemplateRowHandle                Item;                                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumStack;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumStack;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weighting;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.DynamicQuestRewardItem
struct FDynamicQuestRewardItem : public FIcarusTableRowBase
{
public:
	TArray<struct FRewardItemEntry>              Rewards;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DynamicQuestRewardItemsEnum
struct FDynamicQuestRewardItemsEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DynamicQuestRewardsEnum
struct FDynamicQuestRewardsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DynamicQuestRewardsRowHandle
struct FDynamicQuestRewardsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.DynamicQuestsEnum
struct FDynamicQuestsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.DynamicQuestsRowHandle
struct FDynamicQuestsRowHandle : public FRowHandle
{
public:
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.ResourceNetworkData
struct FResourceNetworkData : public FIcarusTableRowBase
{
public:
	bool                                         Provider;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Receiver;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoActivate;                                      // 0x1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A69[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ResourceFlowRate;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Icarus.EnergyData
struct FEnergyData : public FResourceNetworkData
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.EnergyEnum
struct FEnergyEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.EnergyRowHandle
struct FEnergyRowHandle : public FRowHandle
{
public:
};

// 0x78 (0x90 - 0x18)
// ScriptStruct Icarus.EpicCreatures
struct FEpicCreatures : public FIcarusTableRowBase
{
public:
	TArray<class FText>                          CreatureNames;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAISetupRowHandle                     AISetup;                                           // 0x28(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FBaseStatsEnum, int32>           AdditionalStats;                                   // 0x40(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.EpicCreaturesEnum
struct FEpicCreaturesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.EpicCreaturesRowHandle
struct FEpicCreaturesRowHandle : public FRowHandle
{
public:
};

// 0x100 (0x118 - 0x18)
// ScriptStruct Icarus.EquippableData
struct FEquippableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UEquippableModifier>     EquippableModifier;                                // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               GrantedStats;                                      // 0x40(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bStackedModifiersGiveDiminishingReturns;           // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  GlobalStat_ActorClass;                             // 0x98(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               GlobalStat_GrantedStats;                           // 0xC0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAppliesInAllInventories;                          // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBindToAllInventoryUpdates;                        // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.EquippableEnum
struct FEquippableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.EquippableRowHandle
struct FEquippableRowHandle : public FRowHandle
{
public:
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.ErrorCode
struct FErrorCode : public FIcarusTableRowBase
{
public:
	class FText                                  Code;                                              // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bReportToSentry;                                   // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ErrorCodesRowHandle
struct FErrorCodesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ExoticSpawn
struct FExoticSpawn : public FIcarusTableRowBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ExoticSpawnEnum
struct FExoticSpawnEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ExoticSpawnRowHandle
struct FExoticSpawnRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.ExperienceInfo
struct FExperienceInfo
{
public:
	struct FExperienceEventsRowHandle            ExperienceEvent;                                   // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GainedExperience;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.ExperienceData
struct FExperienceData : public FIcarusTableRowBase
{
public:
	TMap<enum class EExperienceSource, struct FExperienceInfo> ExperienceEvents;                                  // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ExperienceEnum
struct FExperienceEnum : public FRowEnum
{
public:
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.ExperienceEvent
struct FExperienceEvent : public FIcarusTableRowBase
{
public:
	class FText                                  EventDescription;                                  // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         SharedExperience;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExperienceGranted;                                 // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ExperienceEventsEnum
struct FExperienceEventsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ExperienceRowHandle
struct FExperienceRowHandle : public FRowHandle
{
public:
};

// 0x80 (0x98 - 0x18)
// ScriptStruct Icarus.FactionInfo
struct FFactionInfo : public FIcarusTableRowBase
{
public:
	class UTexture2D*                            Icon;                                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FactionName;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDialoguePoolRowHandle                BriefingPool;                                      // 0x50(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialoguePoolRowHandle                LandingPool;                                       // 0x68(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialoguePoolRowHandle                MissionCompletePool;                               // 0x80(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FactionInfoEnum
struct FFactionInfoEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FactionInfoRowHandle
struct FFactionInfoRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.QuestsRowHandle
struct FQuestsRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.MissionObjectiveEntry
struct FMissionObjectiveEntry
{
public:
	struct FQuestsRowHandle                      QuestRow;                                          // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Depth;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.WorkshopCost
struct FWorkshopCost
{
public:
	struct FMetaCurrencyRowHandle                Meta;                                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RulesetsRowHandle
struct FRulesetsRowHandle : public FRowHandle
{
public:
};

// 0xD8 (0xF0 - 0x18)
// ScriptStruct Icarus.FactionMission
struct FFactionMission : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMissionObjectiveEntry>        MissionObjectives;                                 // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFactionInfoRowHandle                 Faction;                                           // 0x50(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWorkshopCost>                 CurrencyCost;                                      // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuestsRowHandle                      InitialQuest;                                      // 0x78(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOpenWorldRetryTimeout;                         // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRulesetsRowHandle>            AdditionalRulesets;                                // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FItemTemplateRowHandle>        ItemsRewarded;                                     // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCharacterFlagsRowHandle>      CharacterFlagsRewarded;                            // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTalentsRowHandle>             TalentsRewarded;                                   // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWorkshopCost>                 CurrencyRewarded;                                  // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        AccountExperience;                                 // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FactionExperience;                                 // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FactionMissionsEnum
struct FFactionMissionsEnum : public FRowEnum
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.FarmableData
struct FFarmableData : public FIcarusTableRowBase
{
public:
	TArray<struct FFarmingSeedsRowHandle>        AllowedSeeds;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumberOfCultivations;                              // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReseedsAfterHarvest;                              // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FarmableEnum
struct FFarmableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FarmableRowHandle
struct FFarmableRowHandle : public FRowHandle
{
public:
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.FarmingGrowthState
struct FFarmingGrowthState : public FIcarusTableRowBase
{
public:
	float                                        TimeToNextState;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            StageMesh;                                         // 0x20(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MeshScale;                                         // 0x48(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A71[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FarmingGrowthStatesEnum
struct FFarmingGrowthStatesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FarmingGrowthStatesRowHandle
struct FFarmingGrowthStatesRowHandle : public FRowHandle
{
public:
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Icarus.FarmingSeedAudioData
struct FFarmingSeedAudioData
{
public:
	TSoftObjectPtr<class UFMODEvent>             PlantedSound;                                      // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             HarvestedSound;                                    // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             ClearedSound;                                      // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x188 (0x1A0 - 0x18)
// ScriptStruct Icarus.FarmingSeedData
struct FFarmingSeedData : public FIcarusTableRowBase
{
public:
	struct FItemRewardsRowHandle                 CropRewards;                                       // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemRewardsRowHandle                 DecayedRewards;                                    // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFarmingSeedAudioData                 Audio;                                             // 0x48(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFarmingGrowthStatesRowHandle         Stage1;                                            // 0xC0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFarmingGrowthStatesRowHandle         Stage2;                                            // 0xD8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFarmingGrowthStatesRowHandle         Stage3;                                            // 0xF0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFarmingGrowthStatesRowHandle         Stage4;                                            // 0x108(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFarmingGrowthStatesRowHandle         Mature;                                            // 0x120(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFarmingGrowthStatesRowHandle         Decayed;                                           // 0x138(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemableRowHandle                    Itemable;                                          // 0x150(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeployableRowHandle                  Deployable;                                        // 0x168(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECropMeshRotationType             RotationType;                                      // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifierStatesRowHandle              FatigueModifier;                                   // 0x184(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FatigueIncreaseEachHarvest;                        // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.CropRewards
struct FCropRewards
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemsStaticRowHandle                 ItemType;                                          // 0x4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FarmingSeedsEnum
struct FFarmingSeedsEnum : public FRowEnum
{
public:
};

// 0x70 (0x88 - 0x18)
// ScriptStruct Icarus.FieldGuideCategories
struct FFieldGuideCategories : public FIcarusTableRowBase
{
public:
	TSubclassOf<class UFieldGuidePageWidgetBase> IndexView;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFieldGuidePageWidgetBase> DetailView;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplayOrder;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             DisplayIcon;                                       // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  TagQuery;                                          // 0x70(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FieldGuideCategoriesEnum
struct FFieldGuideCategoriesEnum : public FRowEnum
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.FieldGuideRecipeInfo
struct FFieldGuideRecipeInfo
{
public:
	TArray<struct FCraftingInput>                CraftingInputsOut;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FItemsStaticRowHandle>         CraftedAtOut;                                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCraftAtCharacter;                                 // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OutputCount;                                       // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.FieldGuideBackButtonItem
struct FFieldGuideBackButtonItem
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xB0 - 0x18)
// ScriptStruct Icarus.FieldGuideMetaData
struct FFieldGuideMetaData : public FIcarusTableRowBase
{
public:
	struct FItemsStaticRowHandle                 Item;                                              // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image1;                                            // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description1;                                      // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image2;                                            // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description2;                                      // 0x98(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FieldGuideMetaDataEnum
struct FFieldGuideMetaDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FieldGuideMetaDataRowHandle
struct FFieldGuideMetaDataRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.FieldGuideSets
struct FFieldGuideSets : public FIcarusTableRowBase
{
public:
	TArray<struct FItemsStaticRowHandle>         SetItems;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FieldGuideSetsEnum
struct FFieldGuideSetsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FieldGuideSetsRowHandle
struct FFieldGuideSetsRowHandle : public FRowHandle
{
public:
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.FillableData
struct FFillableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UFillableComponent>      Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EIcarusResourceType>       ResourceTypes;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaximumStoredUnits;                                // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A75[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FillableEnum
struct FFillableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FillableRowHandle
struct FFillableRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.FindItemSlotInfo
struct FFindItemSlotInfo
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Slot;                                              // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A76[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.FirearmSoundData
struct FFirearmSoundData
{
public:
	TSoftObjectPtr<class UFMODEvent>             Event;                                             // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachPoint;                                       // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseChargeParameter;                               // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseChargingParameter;                             // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAmmoCountParameter;                            // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseReloadingParameter;                            // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAimingParameter;                               // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A77[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.FirearmAudioData
struct FFirearmAudioData : public FIcarusTableRowBase
{
public:
	TArray<struct FFirearmSoundData>             FireSounds;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFirearmSoundData>             PersistentSounds;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFirearmSoundData>             NoFireSounds;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FirearmAudioDataEnum
struct FFirearmAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FirearmAudioDataRowHandle
struct FFirearmAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.FirearmStaminaData
struct FFirearmStaminaData : public FIcarusTableRowBase
{
public:
	int32                                        StaminaChargeCost;                                 // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StaminaChargeHoldCost;                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.FirearmChargeData
struct FFirearmChargeData : public FIcarusTableRowBase
{
public:
	bool                                         bCanCharge;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChargeSpeed;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnchargeSpeed;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumChargeRequired;                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFireCanCharge;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimCanCharge;                                     // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReloadCanCancel;                                  // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A79[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           LaunchForceMultiplier;                             // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x130 - 0x18)
// ScriptStruct Icarus.FirearmAnimData
struct FFirearmAnimData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UAnimSequence>          Idle;                                              // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          Charge;                                            // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          Aim;                                               // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          AimCharge;                                         // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           Fire;                                              // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           AimFire;                                           // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           Reload;                                            // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x158 - 0x18)
// ScriptStruct Icarus.Firearm3PAnimData
struct FFirearm3PAnimData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UAnimSequence>          Idle;                                              // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          Charge;                                            // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          Aim;                                               // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          AimCharge;                                         // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlendSpace1D>          Fire;                                              // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlendSpace1D>          AimFire;                                           // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlendSpace1D>          Reload;                                            // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           ReloadMontage;                                     // 0x130(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x158 - 0x18)
// ScriptStruct Icarus.Firearm3PNewAnimData
struct FFirearm3PNewAnimData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UAnimSequence>          Poses;                                             // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          Run;                                               // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          Sprint;                                            // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          Impulse;                                           // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          Aim_Sweep;                                         // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          Crouch_Aim_Sweep;                                  // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           Reload;                                            // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           Fire;                                              // 0x130(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x598 (0x5B0 - 0x18)
// ScriptStruct Icarus.FirearmVisualData
struct FFirearmVisualData : public FIcarusTableRowBase
{
public:
	bool                                         bUsesPreviewItem;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFirearmAttachType                PreviewItemAttachType;                             // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A7A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PreviewItemAttachSocket1P;                         // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PreviewItemAttachSocket3P;                         // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMatineeCameraShake>       FireShake;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFireShakeHold;                                    // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FireShakeScale;                                    // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireShakeAimScale;                                 // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireShakeCrouchScale;                              // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       ChargeShake;                                       // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeShakeScale;                                  // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeShakeAimScale;                               // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeShakeCrouchScale;                            // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeShakeStartDelay;                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeShakeApplyDelay;                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeShakeAccuracyMultiplier;                     // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFXSystemAsset>         FireParticle;                                      // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisualRecoil;                                      // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdleFOVMultiplier;                                 // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimFOVMultiplier;                                  // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeFOVMultiplier;                               // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFirearmAnimData                      SkeletalItemAnimData;                              // 0xA0(0x130)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFirearmAnimData                      FirstPersonAnimData;                               // 0x1D0(0x130)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFirearm3PAnimData                    ThirdPersonAnimData;                               // 0x300(0x158)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFirearm3PNewAnimData                 NewThirdPersonAnimData;                            // 0x458(0x158)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ValidAmmoTypesRowHandle
struct FValidAmmoTypesRowHandle : public FRowHandle
{
public:
};

// 0x6E0 (0x6F8 - 0x18)
// ScriptStruct Icarus.FirearmData
struct FFirearmData : public FIcarusTableRowBase
{
public:
	struct FVector2D                             HipAccuracy;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AimAccuracy;                                       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LaunchForce;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFirearmChargeData                    ChargeData;                                        // 0x30(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFirearmVisualData                    VisualData;                                        // 0x68(0x5B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFirearmStaminaData                   StaminaData;                                       // 0x618(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             RecoilAmount;                                      // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageMultiplier;                                  // 0x640(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFireMode>                 FireModes;                                         // 0x648(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EReloadType                       ReloadType;                                        // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FValidAmmoTypesRowHandle              ValidAmmoTypes;                                    // 0x65C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnlimitedAmmo;                                    // 0x674(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AmmoCapacity;                                      // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RoundsPerMinute;                                   // 0x67C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReloadTime;                                        // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x688(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFirearmAudioDataRowHandle            AudioData;                                         // 0x6D8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponLoudness;                                    // 0x6F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A82[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FirearmDataEnum
struct FFirearmDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FirearmDataRowHandle
struct FFirearmDataRowHandle : public FRowHandle
{
public:
};

// 0xB0 (0xC8 - 0x18)
// ScriptStruct Icarus.FishSetup
struct FFishSetup : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class AFishActor>              FishActor;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementSpeed;                                     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SizeRange;                                         // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemRewardsRowHandle                 ItemReward;                                        // 0x4C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAwarenessEnabled;                                 // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AwarenessMovementSpeed;                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAwarenessDistance;                              // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAggressive;                                       // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttackDamage;                                      // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             MovementSound;                                     // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             AttackSound;                                       // 0xA0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xC8 - 0x18)
// ScriptStruct Icarus.FishData
struct FFishData : public FIcarusTableRowBase
{
public:
	struct FItemTemplateRowHandle                Fish;                                              // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Lore;                                              // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EFishRarity                       Rarity;                                            // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFishType                         Type;                                              // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A85[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTerrainsRowHandle>            Maps;                                              // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBiomesEnum>                   Biomes;                                            // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MinWeight;                                         // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxWeight;                                         // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLength;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLength;                                         // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemsStaticRowHandle>         Lures;                                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FStatsEnum                            CaptureStat;                                       // 0xB8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FishDataEnum
struct FFishDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FishSetupEnum
struct FFishSetupEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FishSetupRowHandle
struct FFishSetupRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FishSpawnZonesRowHandle
struct FFishSpawnZonesRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.FIshSpawnZoneSetup
struct FFIshSpawnZoneSetup
{
public:
	struct FColor                                Color;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFishSpawnZonesRowHandle              SpawnZone;                                         // 0x4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.FishSpawnConfig
struct FFishSpawnConfig : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UGameplayTexture>       SpawnMap;                                          // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFIshSpawnZoneSetup>           SpawnZones;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FishSpawnConfigEnum
struct FFishSpawnConfigEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FishSpawnConfigRowHandle
struct FFishSpawnConfigRowHandle : public FRowHandle
{
public:
};

// 0x58 (0x70 - 0x18)
// ScriptStruct Icarus.FishSpawnZones
struct FFishSpawnZones : public FIcarusTableRowBase
{
public:
	TMap<struct FFishDataEnum, int32>            SpawnList;                                         // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        ZoneFishQuality;                                   // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A86[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FishSpawnZonesEnum
struct FFishSpawnZonesEnum : public FRowEnum
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.FlammableAudioData
struct FFlammableAudioData
{
public:
	float                                        Weighting;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFlammableAudioLocationType       LocationType;                                      // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A87[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x88 - 0x18)
// ScriptStruct Icarus.FlammableData
struct FFlammableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UFlammableComponent>     Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFlammableAudioData                   AudioData;                                         // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CombustionFuelDensity;                             // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CombustionFuelDensityVariance;                     // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInfiniteCombustionFuel;                           // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThermalConductivity;                               // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeatCapacity;                                      // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceAreaMultiplier;                             // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CombustingBoundsScale;                             // 0x60(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeatOfCombustion;                                  // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeatReleaseRate;                                   // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDetachAfterCombusted;                             // 0x74(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinCombustionTemperature;                          // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCombustionTemperature;                          // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsTemperature;                               // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TemperatureFalloffStrength;                        // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FlammableEnum
struct FFlammableEnum : public FRowEnum
{
public:
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Icarus.FlammableFISMVQueuedVisualData
struct FFlammableFISMVQueuedVisualData
{
public:
	bool                                         bFISMDirty;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEffectsMeshDirty;                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.FlammableFISMVisualData
struct FFlammableFISMVisualData
{
public:
	float                                        MainFireSpread;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MainFireTemperature;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectsMeshFireSpread;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x18 - 0xC)
// ScriptStruct Icarus.FlammableRepState
struct FFlammableRepState : public FFastArraySerializerItem
{
public:
	enum class EFlammableState                   FlammableState;                                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DesiredTemperature;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceIndex;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Icarus.FlammableRepStateArray
struct FFlammableRepStateArray : public FFastArraySerializer
{
public:
	TArray<struct FFlammableRepState>            States;                                            // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A8C[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FlammableRowHandle
struct FFlammableRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.FlammableTarget
struct FFlammableTarget
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFLODFISMComponent*                    FISM;                                              // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FISMInstanceIndex;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Causer;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A8E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct Icarus.FlammableTargetExtinguish
struct FFlammableTargetExtinguish : public FFlammableTarget
{
public:
	float                                        ExtinguishRampTime;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtinguishTime;                                    // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopCombustionImmediately;                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A8F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Icarus.FlammableTargetIgnite
struct FFlammableTargetIgnite : public FFlammableTarget
{
public:
	float                                        DesiredTemperatureValue;                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromPropagation;                                  // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A90[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.FloatableData
struct FFloatableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UFloatableComponent>     Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeshDensity;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FluidDensity;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FluidLinearDamping;                                // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FluidAngularDamping;                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampMaxVelocity;                                 // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxUnderwaterVelocity;                             // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FloatableEnum
struct FFloatableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FloatableRowHandle
struct FFloatableRowHandle : public FRowHandle
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.PendingRegisterFISM
struct FPendingRegisterFISM
{
public:
	int32                                        CachedDescriptionIndex;                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFLODFISMComponent>     FISM;                                              // 0x4(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FLODDescriptionsEnum
struct FFLODDescriptionsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FLODDescriptionsRowHandle
struct FFLODDescriptionsRowHandle : public FRowHandle
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.FLODInstanceInfluence
struct FFLODInstanceInfluence
{
public:
	struct FFLODInstanceID                       InfluencedInstance;                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InfluenceLevelIndex;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimeoutHandle;                                     // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.FLODRecordPendingInstanceChange
struct FFLODRecordPendingInstanceChange
{
public:
	int32                                        InstanceIndex;                                     // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FromLevelIndex;                                    // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ToLevelIndex;                                      // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.FLODRecordInstanceChangeDetails
struct FFLODRecordInstanceChangeDetails
{
public:
	int32                                        LevelIndex;                                        // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x4(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       AddedFrame;                                        // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Icarus.FLODRecordInstanceChange
struct FFLODRecordInstanceChange
{
public:
	int32                                        InstanceIndex;                                     // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFLODRecordInstanceChangeDetails      From;                                              // 0x4(0x10)(Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FFLODRecordInstanceChangeDetails      To;                                                // 0x14(0x10)(Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TransitionFrame;                                   // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransitionFinishFrame;                             // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.FLODRecordInstanceChangeSet
struct FFLODRecordInstanceChangeSet
{
public:
	TArray<int32>                                ConcealIndices;                                    // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<int32>                                RevealIndices;                                     // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<struct FFLODRecordInstanceChange>     InstanceChanges;                                   // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.FLODRecordInstanceIndices
struct FFLODRecordInstanceIndices
{
public:
	TSet<int32>                                  InstanceIndices;                                   // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x14 (0x20 - 0xC)
// ScriptStruct Icarus.FLODRecordInstance
struct FFLODRecordInstance : public FFastArraySerializerItem
{
public:
	int32                                        InstanceIndex;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelIndex;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       AddedFrame;                                        // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0xC0 - 0x50)
// ScriptStruct Icarus.FLODRecordStateView
struct FFLODRecordStateView : public FFLODRecordInstanceIndices
{
public:
	TArray<struct FFLODRecordInstance>           Instances;                                         // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<struct FFLODRecordInstanceIndices>    LevelStateViews;                                   // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TSet<int32>                                  DestroyedIndices;                                  // 0x70(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x28 (0x34 - 0xC)
// ScriptStruct Icarus.FLODRecordDynamicInstance
struct FFLODRecordDynamicInstance : public FFastArraySerializerItem
{
public:
	int32                                        InstanceIndex;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                WorldLocation;                                     // 0x10(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                WorldRotation;                                     // 0x1C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                WorldScale;                                        // 0x28(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Icarus.FLODRecordDynamicInstanceArray
struct FFLODRecordDynamicInstanceArray : public FFastArraySerializer
{
public:
	TArray<struct FFLODRecordDynamicInstance>    Instances;                                         // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A93[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Icarus.FLODRecordInstanceArray
struct FFLODRecordInstanceArray : public FFastArraySerializer
{
public:
	TArray<struct FFLODRecordInstance>           Instances;                                         // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A94[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Icarus.FLODRecorderRecord
struct FFLODRecorderRecord
{
public:
	int32                                        NumTiles;                                          // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.FLODDescriptionDVInfo
struct FFLODDescriptionDVInfo
{
public:
	TSubclassOf<class UFoliageInstancedStaticMeshComponent> FoliageClass;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FoliageCollisionProfile;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.FLODLevelDescription
struct FFLODLevelDescription
{
public:
	int32                                        LevelIndex;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFLODLevelInfluenceType           InfluenceType;                                     // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClientPredictive;                                 // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A95[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InfluenceDistance;                                 // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActorPoolBufferSize;                               // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorReplacementClass;                             // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                ItemTemplate;                                      // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemRewardsRowHandle                 ItemRewards;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A96[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Icarus.FLODDistanceLevelDescription
struct FFLODDistanceLevelDescription
{
public:
	TSoftClassPtr<class AActor>                  Actor;                                             // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InfluenceDistance;                                 // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                ActorItemTemplate;                                 // 0x2C(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemRewardsRowHandle                 ActorItemRewards;                                  // 0x44(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A97[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x138 - 0x18)
// ScriptStruct Icarus.FLODDescription
struct FFLODDescription : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFoliageType>           FoliageType;                                       // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FoliageTags;                                       // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bDisabled;                                         // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseViewTraceInfluence;                            // 0x61(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A98[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  ViewTraceActor;                                    // 0x68(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                ViewTraceActorItemTemplate;                        // 0x90(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemableRowHandle                    ViewTraceActorItemable;                            // 0xA8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemRewardsRowHandle                 ViewTraceActorItemRewards;                         // 0xC0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViewTraceClientPredictive;                        // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDistanceInfluence;                             // 0xD9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A99[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFLODDistanceLevelDescription> DistanceLevels;                                    // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsFlammable;                                      // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlammableRowHandle                   Flammable;                                         // 0xF4(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFLODDescriptionsRowHandle            BurntFLODEntry;                                    // 0x10C(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecordIndex;                                       // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFLODLevelDescription>         Levels;                                            // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.FLODTileRecordRecordInstance
struct FFLODTileRecordRecordInstance
{
public:
	int32                                        InstanceIndex;                                     // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelIndex;                                        // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.FLODTileRecordRecordInstanceDynamic
struct FFLODTileRecordRecordInstanceDynamic
{
public:
	int32                                        InstanceIndex;                                     // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9B[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.FLODTileRecordRecord
struct FFLODTileRecordRecord
{
public:
	int32                                        RecordIndex;                                       // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RecorderName;                                      // 0x4(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFLODTileRecordRecordInstance> Instances;                                         // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FFLODTileRecordRecordInstanceDynamic> DynamicInstances;                                  // 0x20(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<int32>                                DestroyedInstanceIndices;                          // 0x30(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Icarus.FLODTileRecorderRecord
struct FFLODTileRecorderRecord
{
public:
	class FName                                  TileName;                                          // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RelevancyRadius;                                   // 0x40(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFLODTileRecordRecord>         Records;                                           // 0x48(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemAttachmentRowHandle
struct FItemAttachmentRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemAnimationsRowHandle
struct FItemAnimationsRowHandle : public FRowHandle
{
public:
};

// 0x1D8 (0x1F0 - 0x18)
// ScriptStruct Icarus.FocusableData
struct FFocusableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UFocusableComponent>     Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemAttachmentRowHandle              AttachmentData;                                    // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachmentOffset;                                  // 0x60(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimOverlayState                 AnimOverlayType;                                   // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemAnimationsRowHandle              AnimationData;                                     // 0x94(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyAutomaticSpineBend;                          // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAnimMontage>           FPFocusedMontage;                                  // 0xB0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlendSpace1D>          FPLocoBlendSpaceOverride;                          // 0xD8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          FPIdleAnim;                                        // 0x100(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           TPFocusedMontage;                                  // 0x128(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          TPUprightIdle;                                     // 0x150(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          TPCrouchedIdle;                                    // 0x178(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          TPPoses;                                           // 0x1A0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           ItemFocusedMontage;                                // 0x1C8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FocusableEnum
struct FFocusableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FocusableRowHandle
struct FFocusableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FoodTypesEnum
struct FFoodTypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FoodTypesRowHandle
struct FFoodTypesRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.FoundItemEntry
struct FFoundItemEntry
{
public:
	uint8                                        Pad_8AA3[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Icarus.FuelData
struct FFuelData : public FResourceNetworkData
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.FuelEnum
struct FFuelEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.FuelRowHandle
struct FFuelRowHandle : public FRowHandle
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Icarus.SpawnRecord
struct FSpawnRecord
{
public:
	bool                                         bSpawnedExoticPlants;                              // 0x0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.GameModeRecord
struct FGameModeRecord
{
public:
	int32                                        GameStateSeed;                                     // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeOfDay;                                         // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProspectGameTime;                                  // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondsPerGameDay;                                 // 0xC(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ApprovedPlayerIDs;                                 // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<class FName>                          SessionFlagRecords;                                // 0x20(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int32                                        LevelTimeElapsedSec;                               // 0x30(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalExoticsExported;                              // 0x34(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRedExoticsExported;                           // 0x38(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.StoredPlayerItemsRecord
struct FStoredPlayerItemsRecord
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInventorySlotSaveData>        Items;                                             // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.MissionHistoryRecord
struct FMissionHistoryRecord
{
public:
	class FString                                Mission;                                           // 0x0(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Status;                                            // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissionEndTime;                                    // 0x14(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.PlayerRewardScheduleRecord
struct FPlayerRewardScheduleRecord
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastExoticsExported;                               // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalExoticsExported;                              // 0x14(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastRedExoticsExported;                            // 0x18(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRedExoticsExported;                           // 0x1C(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMissionCompleted;                                 // 0x20(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentMissionIndex;                               // 0x24(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.GameplayConfig
struct FGameplayConfig : public FIcarusTableRowBase
{
public:
	float                                        FloatValue;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GameplayConfigEnum
struct FGameplayConfigEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GameplayConfigRowHandle
struct FGameplayConfigRowHandle : public FRowHandle
{
public:
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.GeneratorData
struct FGeneratorData : public FIcarusTableRowBase
{
public:
	enum class EIcarusResourceType               Resource;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GenerationRate;                                    // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GenerationRatio;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResourceUnitsRequired;                             // 0x24(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemsStaticRowHandle>         TransmutableItems;                                 // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EIcarusResourceType>       TransmutableResources;                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         RequiresManualActivation;                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GeneratorEnum
struct FGeneratorEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GeneratorRowHandle
struct FGeneratorRowHandle : public FRowHandle
{
public:
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.PoseSnapshotRecorder
struct FPoseSnapshotRecorder
{
public:
	TArray<struct FTransform>                    LocalTransforms;                                   // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<class FName>                          BoneNames;                                         // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class FName                                  SkeletalMeshName;                                  // 0x20(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SnapshotName;                                      // 0x28(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0x30(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AA9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Icarus.CharacterCosmeticsRecorder
struct FCharacterCosmeticsRecorder
{
public:
	class FString                                Customization_Head;                                // 0x0(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_Hair;                                // 0x10(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_HairColor;                           // 0x20(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_Body;                                // 0x30(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_BodyColor;                           // 0x40(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_SkinTone;                            // 0x50(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_HeadTattoo;                          // 0x60(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_HeadScar;                            // 0x70(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_HeadFacialHair;                      // 0x80(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_CapLogo;                             // 0x90(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsMale;                                            // 0xA0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Customization_Voice;                               // 0xA8(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Customization_EyeColor;                            // 0xB8(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Icarus.GlobalCheatData
struct FGlobalCheatData
{
public:
	bool                                         bBuildingIntegrityDisabled;                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShelteredRequiredDisabled;                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GOAPActionsEnum
struct FGOAPActionsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GOAPActionsRowHandle
struct FGOAPActionsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GOAPGoalsEnum
struct FGOAPGoalsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GOAPGoalsRowHandle
struct FGOAPGoalsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GOAPMotivationsEnum
struct FGOAPMotivationsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GOAPMotivationsRowHandle
struct FGOAPMotivationsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GOAPPropertiesEnum
struct FGOAPPropertiesEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GOAPSetupEnum
struct FGOAPSetupEnum : public FRowEnum
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.GOAPProperty
struct FGOAPProperty
{
public:
	struct FGOAPPropertiesRowHandle              Property;                                          // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AAB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.GOAPState
struct FGOAPState
{
public:
	TArray<struct FGOAPProperty>                 Properties;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xC0 - 0x18)
// ScriptStruct Icarus.GOAPSetup
struct FGOAPSetup : public FIcarusTableRowBase
{
public:
	TArray<struct FGOAPMotivationsRowHandle>     Motivations;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGOAPActionsRowHandle>         Actions;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGOAPGoalsRowHandle>           Goals;                                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGOAPGoalsRowHandle                   DefaultGoal;                                       // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGOAPState                            DefaultState;                                      // 0x60(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UBehaviorTree*> DynamicSubtreeOverrides;                           // 0x70(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Icarus.GOAPMotivationTrigger
struct FGOAPMotivationTrigger
{
public:
	int32                                        TriggerThreshold;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGOAPState                            ThresholdOutcome;                                  // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               ThresholdStats;                                    // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x58 (0x70 - 0x18)
// ScriptStruct Icarus.GOAPMotivation
struct FGOAPMotivation : public FIcarusTableRowBase
{
public:
	class FName                                  Description;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateTick;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinValue;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxValue;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartingValue;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartingValueDeviation;                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGOAPMotivationTrigger>        MotivationTriggers;                                // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UIcarusGOAPMotivation>   MotivationBP;                                      // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.GOAPGoal
struct FGOAPGoal : public FIcarusTableRowBase
{
public:
	class FName                                  Description;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGOAPState                            State;                                             // 0x20(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRepeatable;                                     // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRepeatOnlyOnSuccess;                              // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AAE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CooldownTime;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UIcarusGOAPGoal>         GoalBP;                                            // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0x108 - 0x18)
// ScriptStruct Icarus.GOAPAction
struct FGOAPAction : public FIcarusTableRowBase
{
public:
	class FName                                  Description;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGOAPProperty>                 Preconditions;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGOAPProperty>                 Effects;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Cost;                                              // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TickRate;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavigationQueryFilter>    DefaultNavFilterOverride;                          // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementState                    AssociatedMovementState;                           // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EActionRangeCheckBehaviour        RangeCheckBehaviour;                               // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UIcarusGOAPAction>       ActionBP;                                          // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBehaviorTree>          BehaviourTree;                                     // 0x88(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIAudioState                     AudioState;                                        // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FBaseStatsEnum, int32>           ActionStats;                                       // 0xB8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.GOAPProperties
struct FGOAPProperties : public FIcarusTableRowBase
{
public:
	class FName                                  Description;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GrantedAurasEnum
struct FGrantedAurasEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GrantedAurasRowHandle
struct FGrantedAurasRowHandle : public FRowHandle
{
public:
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Icarus.IcarusGraphicsExtraInfo
struct FIcarusGraphicsExtraInfo
{
public:
	class FString                                GPUDeviceName;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GPUDedicatedMemoryGb;                              // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GPUDedicatedSystemMemoryGb;                        // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GPUSharedSystemMemoryGb;                           // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CPUVendorName;                                     // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CPUDeviceName;                                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CPUCoreCount;                                      // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CPUPhysicalMemoryGb;                               // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.GraphicsTierDescriptionMods
struct FGraphicsTierDescriptionMods : public FIcarusTableRowBase
{
public:
	enum class EGraphicsCardVendor               CardVendor;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CardDescriptionModProbe;                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CardModPercent;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.GraphicsTierDescription
struct FGraphicsTierDescription : public FIcarusTableRowBase
{
public:
	enum class EGraphicsCardVendor               CardVendor;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CardDescriptionProbe;                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CardPercent;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GraphicsTierDescriptionEnum
struct FGraphicsTierDescriptionEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.GraphicsTierDescriptionModsEnum
struct FGraphicsTierDescriptionModsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GraphicsTierDescriptionModsRowHandle
struct FGraphicsTierDescriptionModsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.GraphicsTierDescriptionRowHandle
struct FGraphicsTierDescriptionRowHandle : public FRowHandle
{
public:
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Icarus.GravestoneData
struct FGravestoneData
{
public:
	struct FPoseSnapshot                         DeathPose;                                         // 0x0(0x38)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FVector                               DeathVelocity;                                     // 0x38(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterCosmetics                   PlayerCosmetics;                                   // 0x44(0x34)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  UserID;                                            // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasSettled;                                       // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDataValid;                                      // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LootBagPosition;                                   // 0x84(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct Icarus.GravestoneDataRecord
struct FGravestoneDataRecord
{
public:
	struct FPoseSnapshotRecorder                 DeathPose;                                         // 0x0(0x38)(SaveGame, NativeAccessSpecifierPublic)
	struct FVector                               DeathVelocity;                                     // 0x38(0xC)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCosmeticsRecorder           PlayerCosmetics;                                   // 0x48(0xC8)(SaveGame, NativeAccessSpecifierPublic)
	class FName                                  UserID;                                            // 0x110(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasSettled;                                       // 0x118(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ABA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LootBagPosition;                                   // 0x11C(0xC)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x78 - 0x18)
// ScriptStruct Icarus.HighlightableData
struct FHighlightableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UHighlightableComponent> Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bDisableMeshOutline;                               // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ABB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.HighlightableEnum
struct FHighlightableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.HighlightableRowHandle
struct FHighlightableRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.HintsData
struct FHintsData : public FIcarusTableRowBase
{
public:
	class FText                                  Text;                                              // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.HintsEnum
struct FHintsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.HintsRowHandle
struct FHintsRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.HitableData
struct FHitableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UHitableComponent>       Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.HitableEnum
struct FHitableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.HitableRowHandle
struct FHitableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.HordeWaveRowHandle
struct FHordeWaveRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.QuestQueriesRowHandle
struct FQuestQueriesRowHandle : public FRowHandle
{
public:
};

// 0x60 (0x78 - 0x18)
// ScriptStruct Icarus.Horde
struct FHorde : public FIcarusTableRowBase
{
public:
	TArray<struct FHordeWaveRowHandle>           Waves;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FExperienceEventsRowHandle            ExperienceEvent;                                   // 0x28(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletionsBeforeInert;                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ABC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemRewardsRowHandle>         ItemReward;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FItemRewardsRowHandle>         InertItemReward;                                   // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestQueriesRowHandle>        LocationQueries;                                   // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.HordeEnum
struct FHordeEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.HordeRowHandle
struct FHordeRowHandle : public FRowHandle
{
public:
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Icarus.HordeCreatureSetup
struct FHordeCreatureSetup
{
public:
	struct FAISetupRowHandle                     Creature;                                          // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEpicCreaturesRowHandle               Epic;                                              // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FBaseStatsEnum, int32>           AdditionalStats;                                   // 0x30(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        LevelOverride;                                     // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NumberToSpawnAtATime;                              // 0x84(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalToSpawn;                                      // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExtraSpawnCountPerAdditionalNearbyPlayer;          // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialSpawnDelay;                                 // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TimeBetweenSpawns;                                 // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.HordeWave
struct FHordeWave : public FIcarusTableRowBase
{
public:
	TArray<struct FHordeCreatureSetup>           Creatures;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.HordeWaveEnum
struct FHordeWaveEnum : public FRowEnum
{
public:
};

// 0x78 (0x90 - 0x18)
// ScriptStruct Icarus.HuntingClueSetup
struct FHuntingClueSetup : public FIcarusTableRowBase
{
public:
	enum class EHuntingClueType                  ClueType;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ABD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClueLifespan;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxClueDistance;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceBetweenClues;                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistanceBetweenClues;                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeBetweenClues;                               // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeBetweenClues;                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ABE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AHuntingClue>            HuntingClue;                                       // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UHuntingWidget>          HuntingWidget;                                     // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasTrail;                                          // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ABF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TrailSegmentLength;                                // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.HuntingClueSetupEnum
struct FHuntingClueSetupEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.HuntingClueSetupRowHandle
struct FHuntingClueSetupRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.HuntingSetup
struct FHuntingSetup : public FIcarusTableRowBase
{
public:
	TArray<struct FHuntingClueSetupRowHandle>    HuntingClues;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.HuntingSetupEnum
struct FHuntingSetupEnum : public FRowEnum
{
public:
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct Icarus.IcarusAtmosphere
struct FIcarusAtmosphere : public FIcarusTableRowBase
{
public:
	class FText                                  AtmosphereName;                                    // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image_Small;                                       // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image_Medium;                                      // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image_Large;                                       // 0x80(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.IcarusAttachment
struct FIcarusAttachment : public FIcarusTableRowBase
{
public:
	struct FAlterationsRowHandle                 GrantedAlteration;                                 // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.IcarusAttachmentsEnum
struct FIcarusAttachmentsEnum : public FRowEnum
{
public:
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Icarus.IcarusBiome
struct FIcarusBiome : public FIcarusTableRowBase
{
public:
	class FName                                  BiomeName;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           BiomeTemperatureCurve;                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WeatherFrequency;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAtmospheresRowHandle                 AtmosphereType;                                    // 0x4C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBiomeAudioDataRowHandle              Audio;                                             // 0x64(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Icarus.IcarusBuildingType
struct FIcarusBuildingType : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  TagQuery;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x30(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.CaveSpawnLoadedData
struct FCaveSpawnLoadedData
{
public:
	class FString                                CaveActorClassName;                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                TimeStamps;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.CaveSpawnConfig
struct FCaveSpawnConfig
{
public:
	int32                                        MinSpawnNumber;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSpawnNumber;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    SpawnPoints;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        SpawnedActors;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<float>                                DeathTimestamps;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Icarus.IcarusCharacterRecord
struct FIcarusCharacterRecord
{
public:
	int32                                        CurrentHealth;                                     // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.SavedInventoryContainerData
struct FSavedInventoryContainerData
{
public:
	int32                                        InventoryIndex;                                    // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InventoryInfo;                                     // 0x4(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventorySaveData                    InventorySaveData;                                 // 0x10(0x18)(SaveGame, NativeAccessSpecifierPublic)
	bool                                         bInventoryWantsTick;                               // 0x28(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.IcarusDeployableType
struct FIcarusDeployableType : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  TagQuery;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.IcarusFoodType
struct FIcarusFoodType : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  TagQuery;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.StaticMeshCapsuleCollider
struct FStaticMeshCapsuleCollider
{
public:
	struct FVector                               Center;                                            // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.TransientLandingPadInfo
struct FTransientLandingPadInfo
{
public:
	TSoftObjectPtr<class AIcarusPlayerControllerSurvival> PlayerController;                                  // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 LandingPad;                                        // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.TransientDropshipInfo
struct FTransientDropshipInfo
{
public:
	class AIcarusPlayerControllerSurvival*       PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AIcarusDropShipSpawnLocator*           SpawnLocator;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupIndex;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.MissionStatus
struct FMissionStatus
{
public:
	struct FFactionMissionsRowHandle             Mission;                                           // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionState                     MissionState;                                      // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionEndTime;                                    // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.StoredPlayerItems
struct FStoredPlayerItems
{
public:
	TArray<struct FItemData>                     Items;                                             // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.PlayerRewardSchedule
struct FPlayerRewardSchedule
{
public:
	int32                                        LastExoticCount;                                   // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalExoticsReceived;                              // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastRedExoticCount;                                // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRedExoticsReceived;                           // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMissionCompleteRewardCollected;                   // 0x10(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentMissionIndex;                               // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Icarus.BanInfo
struct FBanInfo
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountJson;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  BanReason;                                         // 0x20(0x18)(NativeAccessSpecifierPublic)
	class FString                                PlayerNameDuringBan;                               // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.RefreshData
struct FRefreshData
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC7[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Icarus.IcarusGOAPAIFact
struct FIcarusGOAPAIFact
{
public:
	uint8                                        Pad_8AC8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Target;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGOAPObjectType                   ObjectType;                                        // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIStimulus                           LastAIStimulus;                                    // 0x20(0x3C)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGOAPFactSource                   FactSource;                                        // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ACA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Icarus.IcarusGOAPProperty
struct FIcarusGOAPProperty
{
public:
	enum class EGOAPProperty                     Key;                                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValue;                                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.IcarusGOAPSearchNode
struct FIcarusGOAPSearchNode
{
public:
	uint8                                        Pad_8ACB[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.IcarusGOAPState
struct FIcarusGOAPState
{
public:
	TArray<struct FIcarusGOAPProperty>           Properties;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.IcarusIntRange
struct FIcarusIntRange
{
public:
	int32                                        Min;                                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.IcarusItemConstructionParameters
struct FIcarusItemConstructionParameters
{
public:
	bool                                         bSimulatePhysics;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ACC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MeshAssetPath;                                     // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CollisionProfile;                                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                Mobility;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHiddenInGame;                                     // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableItemStaticDataTraits;                      // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateStatArray;                               // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceNoReplication;                               // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ACD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.IcarusItemSpawnParametersAdvanced
struct FIcarusItemSpawnParametersAdvanced
{
public:
	TSubclassOf<class AIcarusItem>               OverrideActorClass;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStreamableRenderAsset> OverrideMeshPtr;                                   // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableActorRecording;                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoFail;                                           // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferConstruction;                                // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuringConstructionScript;                    // 0x33(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ACE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Icarus.IcarusItemSpawnParameters
struct FIcarusItemSpawnParameters
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Template;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Owner;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 Instigator;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;                    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ACF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusItemConstructionParameters     ConstructionParameters;                            // 0x28(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        ForcedUID;                                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusItemSpawnParametersAdvanced    Advanced;                                          // 0x58(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.LargeScaleDestroyParams
struct FLargeScaleDestroyParams
{
public:
	enum class EIcarusDamageType                 DamageType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDestroyPattern                   Pattern;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DamageToDestroyRatio;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StructuresDamageAmount;                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NPCDamageAmount;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerDamageAmount;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageRadiusCm;                                    // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerDamageRadiusCm;                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDurationSec;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CleanupAfterDelay;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.PreviewCameraSettingsRowHandle
struct FPreviewCameraSettingsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MapIconsRowHandle
struct FMapIconsRowHandle : public FRowHandle
{
public:
};

// 0xF8 (0x110 - 0x18)
// ScriptStruct Icarus.IcarusMount
struct FIcarusMount : public FIcarusTableRowBase
{
public:
	struct FAISetupRowHandle                     AISetup;                                           // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  RelevantSaddleQuery;                               // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EMountCombatBehaviourState> SupportedCombatStates;                             // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EMountMovementBehaviourState> SupportedMovementStates;                           // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UAnimMontage>> Animations;                                        // 0x68(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FPreviewCameraSettingsRowHandle       InventoryPreviewCameraSettings;                    // 0xB8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          DefaultNames;                                      // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMapIconsRowHandle                    MapIcon;                                           // 0xE0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeFeetOffset;                                // 0xF8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeHandsOffset;                               // 0x104(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Icarus.ActionAnimData
struct FActionAnimData
{
public:
	TSoftObjectPtr<class UAnimMontage>           ActionMontage;                                     // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     PossibleMontageSections;                           // 0x28(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  ActionNotify;                                      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.PakFileNameAndSize
struct FPakFileNameAndSize
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        FileSize;                                          // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.PakFileDetails
struct FPakFileDetails
{
public:
	TArray<struct FPakFileNameAndSize>           PakFiles;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class FString                                PakHash;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Icarus.PakMetaDetail
struct FPakMetaDetail
{
public:
	struct FPakFileDetails                       MissingFilesPak;                                   // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FPakFileDetails                       BadFileSizesPak;                                   // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FPakFileDetails                       ExtraFilesPak;                                     // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FPakFileDetails                       ModFilesPak;                                       // 0x60(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	class FString                                Path;                                              // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PakHash;                                           // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Icarus.InteractableHitLookup
struct FInteractableHitLookup
{
public:
	enum class EInteractableHitLookupType        Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Hit;                                               // 0x4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFLODTile*                             Tile;                                              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecordIndex;                                       // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceIndex;                                     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.ArmourComponentData
struct FArmourComponentData
{
public:
	uint8                                        Pad_8AD5[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArmourRowHandle>              AssociatedRowHandles;                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class USkeletalMeshComponent*>        ArmourComponents;                                  // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USkeletalMeshComponent*>        SimpleTPArmourComponents;                          // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USkeletalMeshComponent*>        FPArmourComponents;                                // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.FocusedItemData
struct FFocusedItemData
{
public:
	class UInventory*                            FocusedItemInventory;                              // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FocusedItemSlot;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.InventoryIDEnum
struct FInventoryIDEnum : public FRowEnum
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.ItemPriority
struct FItemPriority
{
public:
	struct FTagQueriesRowHandle                  QueryRow;                                          // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryIDEnum                      InventoryID;                                       // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.IcarusProjectileType
struct FIcarusProjectileType : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  TagQuery;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.InitialQuestRecord
struct FInitialQuestRecord
{
public:
	class FString                                QuestActorName;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RelevantActorIcarusUID;                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.QuestVariableRecord
struct FQuestVariableRecord
{
public:
	class FString                                VariableName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVariable;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FVariable;                                         // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IVariable;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.SubQuestRecord
struct FSubQuestRecord
{
public:
	class FString                                SubQuestName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SubQuestRowName;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RelevantActorIcarusUID;                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ADA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.RelevantQuestActorRecord
struct FRelevantQuestActorRecord
{
public:
	class FString                                RelevantActorClassName;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RelevantActorIcarusUID;                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ADB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct Icarus.IcarusSession
struct FIcarusSession
{
public:
	struct FProspectInfo                         ProspectInfo;                                      // 0x0(0x90)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult               Session;                                           // 0x90(0x108)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         FromServer;                                        // 0x198(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x199(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DedicatedServer;                                   // 0x19A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ADC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GameVersion;                                       // 0x1A0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.IcarusSortTypePriority
struct FIcarusSortTypePriority : public FIcarusTableRowBase
{
public:
	TArray<struct FTagQueriesRowHandle>          TagPriority;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.IcarusStat
struct FIcarusStat
{
public:
	struct FStatsRowHandle                       Stat;                                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.StatDisplayCalculation
struct FStatDisplayCalculation
{
public:
	enum class EStatDisplayOperation             Operation;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ADD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.StatCategoriesRowHandle
struct FStatCategoriesRowHandle : public FRowHandle
{
public:
};

// 0xD8 (0xF0 - 0x18)
// ScriptStruct Icarus.IcarusStatDescription
struct FIcarusStatDescription : public FIcarusTableRowBase
{
public:
	class FText                                  Title;                                             // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PositiveTitleFormat;                               // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  NegativeTitleFormat;                               // 0x70(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  PositiveDescription;                               // 0x88(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  NegativeDescription;                               // 0xA0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsReplicated;                                     // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ADE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStatDisplayCalculation>       DisplayOperations;                                 // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsWorldStat;                                      // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ADF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatCategoriesRowHandle              StatCategory;                                      // 0xD4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideStatInUserInterface;                          // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AE0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.BackingStatContainer
struct FBackingStatContainer
{
public:
	uint8                                        Pad_8AE1[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.StatList
struct FStatList
{
public:
	uint8                                        Pad_8AE2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.StatSource
struct FStatSource
{
public:
	uint8                                        Pad_8AE3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x14 - 0xC)
// ScriptStruct Icarus.StatPairRepState
struct FStatPairRepState : public FFastArraySerializerItem
{
public:
	int32                                        Stat;                                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct Icarus.StatsRepArray
struct FStatsRepArray : public FFastArraySerializer
{
public:
	TArray<struct FStatPairRepState>             StatList;                                          // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0xB8 (0xD0 - 0x18)
// ScriptStruct Icarus.IcarusTamingData
struct FIcarusTamingData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UIcarusTamingComponent>  Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TameDurationInSeconds;                             // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DesiredTemperatureRange;                           // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DesiredShelterPercentage;                          // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DesiredNutritionPercentage;                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModifierStatesRowHandle>      RequiredTamingModifiers;                           // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FModifierStatesRowHandle>      ProhibitedTamingModifiers;                         // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAISetupRowHandle                     TamedAI;                                           // 0x78(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISetupRowHandle                     MatureCreatureType;                                // 0x90(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISetupRowHandle                     JuvenileCreatureType;                              // 0xA8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutomaticallySpawnJuvenileWithParent;             // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PercentChanceToSpawnJuvenile;                      // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNearbyAutoSpawnedJuveniles;                     // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AE6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x130 - 0x18)
// ScriptStruct Icarus.IcarusTerrain
struct FIcarusTerrain : public FIcarusTableRowBase
{
public:
	class FText                                  TerrainName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                 Level;                                             // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UGameplayTexture>       TemperatureMap;                                    // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TemperatureMapRange;                               // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UGameplayTexture>       BiomeMap;                                          // 0x88(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UGameplayTexture>       Bounds;                                            // 0xB0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISpawnConfigRowHandle               SpawnConfig;                                       // 0xD8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFishSpawnConfigRowHandle             FishConfig;                                        // 0xF0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UGameplayTexture>       AudioZoneMap;                                      // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Icarus.TestProfileData
struct FTestProfileData
{
public:
	uint8                                        Pad_8AE7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LatestWindowedFrameAverage;                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinWindowedFrameAverage;                           // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWindowedFrameAverage;                           // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWindowedFrametimeRailPosition;                  // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFrametime;                                      // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFrametime;                                      // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFrametimeRailPosition;                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AE8[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.IcarusTimeSpan
struct FIcarusTimeSpan
{
public:
	struct FIcarusIntRange                       Days;                                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FIcarusIntRange                       Hours;                                             // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FIcarusIntRange                       Mins;                                              // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FIcarusIntRange                       Seconds;                                           // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.IcarusToolType
struct FIcarusToolType : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  TagQuery;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x558 (0x570 - 0x18)
// ScriptStruct Icarus.IcarusWeatherActionData
struct FIcarusWeatherActionData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UIcarusWeatherAction>    WeatherActionComponent;                            // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRampingUp;                                      // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             TimelineIcon;                                      // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           TimelineTailBrush;                                 // 0x70(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        ExposureMultiplier;                                // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<float, struct FModifier>                ExposureModifiers;                                 // 0xA0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Rain;                               // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_RainStart;                                // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_RainEnd;                                  // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_Rain;                                        // 0x100(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFillable_Rain;                              // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rainfall_Millilitre_Start;                         // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rainfall_Millilitre_End;                           // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Clouds;                             // 0x134(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_CloudsStart;                              // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_CloudsEnd;                                // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveFloat>            Curve_Clouds;                                      // 0x140(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGeneratesLightning;                               // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinLightningInterval;                              // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLightningInterval;                              // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGeneratesThunder;                                 // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThunderIntensity;                                  // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Debris;                             // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_DebrisStart;                              // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_DebrisEnd;                                // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveFloat>            Curve_Debris;                                      // 0x188(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAction_Temperature;                         // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temperature_Start;                                 // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Temperature_End;                                   // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Perception_Percentage;                             // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Wind;                               // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAction_Wind;                                // 0x1C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_WindStart;                                // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_WindEnd;                                  // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_Wind;                                        // 0x1D0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StormTier;                                         // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StormWindDamagePeriod;                             // 0x1FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnzipChance;                                       // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnzipbuildingCountMultiplier;                      // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnzipbuildingDamageMultiplier;                     // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableEndAllWindDamageTrigger;                    // 0x20C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_EndAllWindDamageTrigger;                     // 0x210(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWindTopplesTrees;                                 // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TreeToppleMinInterval;                             // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TreeToppleMaxInterval;                             // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TreeToppleStrengthThreshold;                       // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDamage_Deployables;                         // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Damage_Deployables_MinInterval;                    // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage_Deployables_MaxInterval;                    // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage_Deployables_Intensity;                      // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDamage_Players;                             // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Damage_Players_MinInterval;                        // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage_Players_MaxInterval;                        // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage_Players_Intensity;                          // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFireExtinguish;                             // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FireExtinguish_RollChanceMulti;                    // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireExtinguish_MinInterval;                        // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireExtinguish_MaxInterval;                        // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Sand;                               // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_SandStart;                                // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_SandEnd;                                  // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_Sand;                                        // 0x288(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Snow;                               // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_SnowStart;                                // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_SnowEnd;                                  // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_Snow;                                        // 0x2C0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Snow_Buildup;                       // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_Snow_BuildupStart;                        // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_Snow_BuildupEnd;                          // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Snow_Storm;                         // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_Snow_StormStart;                          // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_Snow_StormEnd;                            // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Ash;                                // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_AshStart;                                 // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_AshEnd;                                   // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B01[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_Ash;                                         // 0x310(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Embers;                             // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_EmbersStart;                              // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_EmbersEnd;                                // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_Embers;                                      // 0x348(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Smoke;                              // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_SmokeStart;                               // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_SmokeEnd;                                 // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_Smoke;                                       // 0x380(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_AcidRain;                           // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_AcidRainStart;                            // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_AcidRainEnd;                              // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_AcidRain;                                    // 0x3B8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_Hail;                               // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_HailStart;                                // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_HailEnd;                                  // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_HailRain;                                    // 0x3F0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_FogDensity;                         // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B0A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_FogDensityStart;                          // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_FogDensityEnd;                            // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_FogDensity;                                  // 0x428(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVisuals_FogExtinction;                      // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Severity_FogExtinctionStart;                       // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Severity_FogExtinctionEnd;                         // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_FogExtinction;                               // 0x460(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDamageTag;                                  // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_DamageTag;                                   // 0x490(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageTag_Intensity;                               // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageTag_DutyCycle;                               // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  DamageTag_Query;                                   // 0x4C0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIcarusDamageType                 DamageTag_DamageType;                              // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProcessorClog;                              // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B0F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_ProcessorClog;                               // 0x4E0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePlayerItemDamageTag;                        // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageFocusedItem;                                // 0x509(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B10[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            Curve_PlayerItemDamageTag;                         // 0x510(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerItemDamageTag_Intensity;                     // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerItemDamageTag_DutyCycle;                     // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  PlayerItemDamageTag_Query;                         // 0x540(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryIDEnum                      InventoryID;                                       // 0x558(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIcarusDamageType                 PlayerItemDamageTag_DamageType;                    // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B11[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.IcarusWeatherBiomeGroup
struct FIcarusWeatherBiomeGroup : public FIcarusTableRowBase
{
public:
	TArray<struct FBiomesRowHandle>              AvaliableBiomes;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WeatherBiomeGroupsRowHandle
struct FWeatherBiomeGroupsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WeatherActionsRowHandle
struct FWeatherActionsRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.WeatherAction
struct FWeatherAction
{
public:
	struct FWeatherActionsRowHandle              Action;                                            // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInSeconds;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.WeatherMusicCue
struct FWeatherMusicCue
{
public:
	enum class EMusicConditionWeather            MusicCondition;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TriggerTime;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ScriptedEventsRowHandle
struct FScriptedEventsRowHandle : public FRowHandle
{
public:
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Icarus.ScriptedEventSetup
struct FScriptedEventSetup
{
public:
	struct FScriptedEventsRowHandle              ScriptedEvent;                                     // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RandomChanceWeight;                                // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<int32>                                  ActiveWeatherStages;                               // 0x20(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct Icarus.IcarusWeatherEvent
struct FIcarusWeatherEvent : public FIcarusTableRowBase
{
public:
	enum class EIcarusWeatherDifficulty          Difficulty;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Tier;                                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationSeconds;                                   // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationMinutes;                                   // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeatherBiomeGroupsRowHandle>  BiomeGroups;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                            WeatherImage;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  WeatherName;                                       // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  WeatherDescription;                                // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FWeatherAction>                WeatherActions;                                    // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWeatherMusicCue>              MusicCues;                                         // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FScriptedEventSetup>           ScriptedEventConfig;                               // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ChanceToActivateScriptedEvent;                     // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B15[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.WeatherPoolEntryMeta
struct FWeatherPoolEntryMeta
{
public:
	int32                                        Tier;                                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumEvents;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinEventDurationMinutes;                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        BiomesGroupsIncluded;                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.WeatherPoolEntry
struct FWeatherPoolEntry
{
public:
	struct FWeatherEventsRowHandle               Event;                                             // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.IcarusWeatherPoolData
struct FIcarusWeatherPoolData : public FIcarusTableRowBase
{
public:
	TArray<struct FWeatherPoolEntry>             WeatherEvents;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWeatherPoolEntryMeta>         ContainedTiers;                                    // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.CaveLocation
struct FCaveLocation
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCavePrefabAsset>       Prefab;                                            // 0x10(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.InteractStack
struct FInteractStack
{
public:
	TArray<class UInteractableBehaviour*>        Stack;                                             // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x78 - 0x18)
// ScriptStruct Icarus.InteractData
struct FInteractData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UInteractableBehaviour>  Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAuthorityType                    AuthorityType;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InteractCooldown;                                  // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InteractionText;                                   // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FStaminaActionCostsRowHandle          InteractStaminaCost;                               // 0x60(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.InteractionsRowHandle
struct FInteractionsRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.InteractionHandleWithRequiredTag
struct FInteractionHandleWithRequiredTag
{
public:
	struct FInteractionsRowHandle                InteractionRow;                                    // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tag;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.InteractableData
struct FInteractableData : public FIcarusTableRowBase
{
public:
	TArray<struct FInteractionHandleWithRequiredTag> WorldPressInteracts;                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInteractionHandleWithRequiredTag> WorldHoldInteracts;                                // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInteractionHandleWithRequiredTag> WorldAltHoldInteracts;                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRowHandle>                    GenericData;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.InteractableEnum
struct FInteractableEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.InteractableRowHandle
struct FInteractableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.InteractionsEnum
struct FInteractionsEnum : public FRowEnum
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.InventoryBag
struct FInventoryBag
{
public:
	TWeakObjectPtr<class UInventory>             Inventory;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentSlotIndex;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.EquippableModifierList
struct FEquippableModifierList
{
public:
	TArray<class UEquippableModifier*>           Modifiers;                                         // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x208 (0x208 - 0x0)
// ScriptStruct Icarus.FindAllStacksResult
struct FFindAllStacksResult
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InventorySlotIndex;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemTypeInstance;                                  // 0x10(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        TotalStacksCount;                                  // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B1A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Icarus.ItemRewardEntry
struct FItemRewardEntry
{
public:
	struct FItemTemplateRowHandle                Item;                                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropChance;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsRowHandle                       DropChanceAdditiveStat;                            // 0x1C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsRowHandle                       RequiredStatToDrop;                                // 0x34(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRandomStackCount;                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRandomStackCount;                               // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRewardsScale;                                     // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsRowHandle                       StackAdditiveStat;                                 // 0x58(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsRowHandle                       StackMultiplicativeStat;                           // 0x70(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.ManuallyAddedInventoryItems
struct FManuallyAddedInventoryItems
{
public:
	TArray<struct FItemRewardEntry>              ItemRewards;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.InventoryInfoRowHandle
struct FInventoryInfoRowHandle : public FRowHandle
{
public:
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.InventoryContainerData
struct FInventoryContainerData : public FIcarusTableRowBase
{
public:
	struct FInventoryInfoRowHandle               InventoryInfo;                                     // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AttachmentSlot;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanInventoryTick;                                 // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B1C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.InventoryContainerEnum
struct FInventoryContainerEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.InventoryContainerRowHandle
struct FInventoryContainerRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.InventoryData
struct FInventoryData : public FIcarusTableRowBase
{
public:
	TArray<struct FInventoryInfoRowHandle>       Inventories;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.InventorySlotOverride
struct FInventorySlotOverride : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  Query;                                             // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Location;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B1D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xB0 - 0x18)
// ScriptStruct Icarus.InventoryInfo
struct FInventoryInfo : public FIcarusTableRowBase
{
public:
	struct FInventoryIDEnum                      InventoryID;                                       // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  SlotTemplate;                                      // 0x28(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartingSlots;                                     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventorySlotOverride>        SlotOverrides;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         RemoveOnly;                                        // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsClientSideOnly;                                 // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B1F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x60(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x234 (0x240 - 0xC)
// ScriptStruct Icarus.InventorySlot
struct FInventorySlot : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_8B20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemData;                                          // 0x10(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  Query;                                             // 0x200(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemsStaticRowHandle                 LastItem;                                          // 0x21C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Slotable;                                          // 0x234(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B23[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x158 - 0x108)
// ScriptStruct Icarus.InventorySlotsFastArray
struct FInventorySlotsFastArray : public FFastArraySerializer
{
public:
	TArray<struct FInventorySlot>                Slots;                                             // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B24[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.InventoryIdentification
struct FInventoryIdentification
{
public:
	struct FInventoryIDEnum                      ID;                                                // 0x0(0x10)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.InventoryEnum
struct FInventoryEnum : public FRowEnum
{
public:
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.InventoryID
struct FInventoryID : public FIcarusTableRowBase
{
public:
	bool                                         PlayerInventory;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B25[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.InventoryIDRowHandle
struct FInventoryIDRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.InventoryInfoEnum
struct FInventoryInfoEnum : public FRowEnum
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.ProcessorRecipeResult
struct FProcessorRecipeResult
{
public:
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x0(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTagQueriesRowHandle>          SuccessfulQueries;                                 // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.RefundItem
struct FRefundItem
{
public:
	struct FItemsStaticRowHandle                 ItemType;                                          // 0x0(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackSize;                                         // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.RefundResult
struct FRefundResult
{
public:
	TArray<struct FRefundItem>                   RefundedItems;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.InventoryRowHandle
struct FInventoryRowHandle : public FRowHandle
{
public:
};

// 0xD0 (0xE8 - 0x18)
// ScriptStruct Icarus.ItemableData
struct FItemableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UItemableComponent>      Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Override_Glow_Icon;                                // 0x80(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0xA8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  FlavorText;                                        // 0xC0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowZeroWeight;                                  // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxStack;                                          // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B27[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemableEnum
struct FItemableEnum : public FRowEnum
{
public:
};

// 0x208 (0x208 - 0x0)
// ScriptStruct Icarus.LocomotionAnims
struct FLocomotionAnims
{
public:
	TSoftObjectPtr<class UAnimSequence>          WalkF;                                             // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          WalkR;                                             // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          WalkB;                                             // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          WalkL;                                             // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          RunF;                                              // 0xA0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          RunR;                                              // 0xC8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          RunB;                                              // 0xF0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          RunL;                                              // 0x118(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          SprintF;                                           // 0x140(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          CrouchWalkF;                                       // 0x168(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          CrouchWalkR;                                       // 0x190(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          CrouchWalkB;                                       // 0x1B8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          CrouchWalkL;                                       // 0x1E0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x348 (0x360 - 0x18)
// ScriptStruct Icarus.ItemAnimationData
struct FItemAnimationData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UAnimSequence>          FPJumpStart;                                       // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          FPJumpLoop;                                        // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          FPJumpEnd;                                         // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlendSpace1D>          FPLocoBlendSpace;                                  // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          TPJumpStart;                                       // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          TPJumpLoop;                                        // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          TPJumpEnd;                                         // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocomotionAnims                      TPLocomotionAnims;                                 // 0x130(0x208)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlendSpace1D>          UpToDownBlendSpace;                                // 0x338(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemAnimationsEnum
struct FItemAnimationsEnum : public FRowEnum
{
public:
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.ItemAttachmentData
struct FItemAttachmentData : public FIcarusTableRowBase
{
public:
	class FName                                  TPAttachmentSocketName;                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FPAttachmentSocketName;                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BackAttachmentSocketName;                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHandedness                       EquippableHandedness;                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B28[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemAttachmentEnum
struct FItemAttachmentEnum : public FRowEnum
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.ItemAudioAnimData
struct FItemAudioAnimData
{
public:
	TArray<TSoftObjectPtr<class UFMODEvent>>     FMODEvents;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2C0 - 0x18)
// ScriptStruct Icarus.ItemAudioData
struct FItemAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             PickUpSound;                                       // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             DropSound;                                         // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             HitSound;                                          // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             DamagedSound;                                      // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BrokenSound;                                       // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             UseWhenBrokenSound;                                // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             RepairedSound;                                     // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             DestroyedSound;                                    // 0x130(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             SlottedSound;                                      // 0x158(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             ConsumedSound;                                     // 0x180(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             ConsumeFailedSound;                                // 0x1A8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             ConsumableExpiredSound;                            // 0x1D0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BackpackSound;                                     // 0x1F8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             BackpackFootstepSound;                             // 0x220(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             WeatherSound;                                      // 0x248(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FItemAudioAnimData> AnimSounds;                                        // 0x270(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemAudioDataEnum
struct FItemAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemAudioDataRowHandle
struct FItemAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.ItemClassificationsIconsData
struct FItemClassificationsIconsData : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  TagQuery;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Tooltip;                                           // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemClassificationsIconsEnum
struct FItemClassificationsIconsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemClassificationsIconsRowHandle
struct FItemClassificationsIconsRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.ItemDynamicContainer
struct FItemDynamicContainer : public FIcarusTableRowBase
{
public:
	TSubclassOf<class UTraitComponent>           Component;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemDynamicData>              Properties;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.ItemConstructionData
struct FItemConstructionData : public FIcarusTableRowBase
{
public:
	struct FItemsStaticRowHandle                 ItemStatic;                                        // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemDynamicContainer>         ItemDynamic;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MeshableRowHandle
struct FMeshableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.UsableRowHandle
struct FUsableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.LivingItemRowHandle
struct FLivingItemRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RocketableRowHandle
struct FRocketableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RangedWeaponDataRowHandle
struct FRangedWeaponDataRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ThermalRowHandle
struct FThermalRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.SlotableRowHandle
struct FSlotableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TransmutableRowHandle
struct FTransmutableRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WeightRowHandle
struct FWeightRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WaterRowHandle
struct FWaterRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.OxygenRowHandle
struct FOxygenRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ToolDamageRowHandle
struct FToolDamageRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TurretRowHandle
struct FTurretRowHandle : public FRowHandle
{
public:
};

// 0x4B8 (0x4D0 - 0x18)
// ScriptStruct Icarus.ItemStaticData
struct FItemStaticData : public FIcarusTableRowBase
{
public:
	struct FMeshableRowHandle                    Meshable;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemableRowHandle                    Itemable;                                          // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInteractableRowHandle                Interactable;                                      // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitableRowHandle                     Hitable;                                           // 0x60(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquippableRowHandle                  Equippable;                                        // 0x78(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFocusableRowHandle                   Focusable;                                         // 0x90(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHighlightableRowHandle               Highlightable;                                     // 0xA8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionableRowHandle                  Actionable;                                        // 0xC0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildableRowHandle                   Buildable;                                         // 0xD8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConsumableRowHandle                  Consumable;                                        // 0xF0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUsableRowHandle                      Usable;                                            // 0x108(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCombustibleRowHandle                 Combustible;                                       // 0x120(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeployableRowHandle                  Deployable;                                        // 0x138(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FArmourRowHandle                      Armour;                                            // 0x150(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBallisticRowHandle                   Ballistic;                                         // 0x168(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFillableRowHandle                    Fillable;                                          // 0x180(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDurableRowHandle                     Durable;                                           // 0x198(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatableRowHandle                   Floatable;                                         // 0x1B0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRocketableRowHandle                  Rocketable;                                        // 0x1C8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryRowHandle                   Inventory;                                         // 0x1E0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProcessingRowHandle                  Processing;                                        // 0x1F8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FThermalRowHandle                     Thermal;                                           // 0x210(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceRowHandle                  Experience;                                        // 0x228(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlotableRowHandle                    Slotable;                                          // 0x240(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDecayableRowHandle                   Decayable;                                         // 0x258(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFlammableRowHandle                   Flammable;                                         // 0x270(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransmutableRowHandle                Transmutable;                                      // 0x288(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeneratorRowHandle                   Generator;                                         // 0x2A0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeightRowHandle                      Weight;                                            // 0x2B8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFarmableRowHandle                    Farmable;                                          // 0x2D0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryContainerRowHandle          InventoryContainer;                                // 0x2E8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLivingItemRowHandle                  LivingItem;                                        // 0x300(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnergyRowHandle                      Energy;                                            // 0x318(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaterRowHandle                       Water;                                             // 0x330(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOxygenRowHandle                      Oxygen;                                            // 0x348(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFuelRowHandle                        Fuel;                                              // 0x360(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToolDamageRowHandle                  ToolDamage;                                        // 0x378(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAmmoTypesRowHandle                   AmmoType;                                          // 0x390(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemAudioDataRowHandle               Audio;                                             // 0x3A8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRangedWeaponDataRowHandle            RangedWeaponData;                                  // 0x3C0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFirearmDataRowHandle                 FirearmData;                                       // 0x3D8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFLODDescriptionsRowHandle            FLODData;                                          // 0x3F0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTurretRowHandle                      TurretData;                                        // 0x408(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FBaseStatsEnum, int32>           AdditionalStats;                                   // 0x420(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FIcarusAttachmentsRowHandle           Attachments;                                       // 0x470(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CraftingExperience;                                // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Manual_Tags;                                       // 0x490(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Generated_Tags;                                    // 0x4B0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.ItemRank
struct FItemRank : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  TagQuery;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemRanksEnum
struct FItemRanksEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemRanksRowHandle
struct FItemRanksRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.ItemRewards
struct FItemRewards : public FIcarusTableRowBase
{
public:
	TArray<struct FItemRewardEntry>              Rewards;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Icarus.ItemReward
struct FItemReward
{
public:
	struct FItemTemplateRowHandle                ItemTemplate;                                      // 0x0(0x18)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseRandomStackCount;                              // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinRandomStackCount;                               // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRandomStackCount;                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemRewardsEnum
struct FItemRewardsEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemsStaticEnum
struct FItemsStaticEnum : public FRowEnum
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.ItemStack
struct FItemStack
{
public:
	struct FItemsStaticRowHandle                 Item;                                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.ItemRecordAlterationData
struct FItemRecordAlterationData
{
public:
	class FName                                  Alteration;                                        // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.ItemRecordStatData
struct FItemRecordStatData
{
public:
	class FName                                  Stat;                                              // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.ItemRecordDynamicData
struct FItemRecordDynamicData
{
public:
	int32                                        Type;                                              // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemTemplateEnum
struct FItemTemplateEnum : public FRowEnum
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.ItemTraitMask
struct FItemTraitMask : public FIcarusTableRowBase
{
public:
	bool                                         bMeshable;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bItemable;                                         // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInteractable;                                     // 0x1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitable;                                          // 0x1B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEquippable;                                       // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFocusable;                                        // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHighlightable;                                    // 0x1E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActionable;                                       // 0x1F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBuildable;                                        // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsumable;                                       // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsable;                                           // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCombustible;                                      // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeployable;                                       // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArmour;                                           // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBallistic;                                        // 0x26(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillable;                                         // 0x27(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDurable;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFloatable;                                        // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRocketable;                                       // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInventory;                                        // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProcessing;                                       // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnergy;                                           // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWater;                                            // 0x2E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOxygen;                                           // 0x2F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFuel;                                             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bThermal;                                          // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExperience;                                       // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSlotable;                                         // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDecayable;                                        // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlammable;                                        // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransmutable;                                     // 0x36(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerator;                                        // 0x37(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeight;                                           // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFarmable;                                         // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInventoryContainer;                               // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLivingItem;                                       // 0x3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B2B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemTraitMasksEnum
struct FItemTraitMasksEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemTraitMasksRowHandle
struct FItemTraitMasksRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.ItemWeightStatQueries
struct FItemWeightStatQueries : public FIcarusTableRowBase
{
public:
	struct FStatsEnum                            WeightStatToApply;                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  ItemTagQuery;                                      // 0x28(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ItemWeightStatQueriesEnum
struct FItemWeightStatQueriesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ItemWeightStatQueriesRowHandle
struct FItemWeightStatQueriesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.KeybindContextsEnum
struct FKeybindContextsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.KeybindContextsRowHandle
struct FKeybindContextsRowHandle : public FRowHandle
{
public:
};

// 0xF0 (0x108 - 0x18)
// ScriptStruct Icarus.KeybindData
struct FKeybindData : public FIcarusTableRowBase
{
public:
	class FName                                  ActionName;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideActionName;                               // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionNameOverride;                                // 0x24(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FKeybindContextsRowHandle             BindContext;                                       // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputContext                     InputContext;                                      // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAxis;                                           // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKeybindVisibility                Visibility;                                        // 0x62(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B2E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                KeyboardActionMapping;                             // 0x68(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                  KeyboardAxisMapping;                               // 0x90(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                GamepadActionMapping;                              // 0xB8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                  GamepadAxisMapping;                                // 0xE0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.KeybindContext
struct FKeybindContext : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FKeybindContextsRowHandle>     SharedWithContexts;                                // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.KeybindingsEnum
struct FKeybindingsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.KeybindingsRowHandle
struct FKeybindingsRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.KeyData
struct FKeyData : public FIcarusTableRowBase
{
public:
	struct FKey                                  Key;                                               // 0x18(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayNameOverride;                               // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.KeyIconData
struct FKeyIconData : public FIcarusTableRowBase
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bHideText;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerIconSet                IconSet;                                           // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B2F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconPress;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            IconHold;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          IconTint;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextColor;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.KeyIconsEnum
struct FKeyIconsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.KeyIconsRowHandle
struct FKeyIconsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.KeysEnum
struct FKeysEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.KeysRowHandle
struct FKeysRowHandle : public FRowHandle
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.LandingPadRecord
struct FLandingPadRecord
{
public:
	int32                                        LeveTimeBuilt;                                     // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerCharacterID                    PlayerID;                                          // 0x8(0x18)(SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.LanguagesData
struct FLanguagesData : public FIcarusTableRowBase
{
public:
	bool                                         bEnabled;                                          // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Coverage;                                          // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.LanguagesEnum
struct FLanguagesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.LanguagesRowHandle
struct FLanguagesRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.LavaRiverFlowPointData
struct FLavaRiverFlowPointData
{
public:
	struct FVector2D                             Location;                                          // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Extent;                                            // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlowSpeed;                                         // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseToFlowing;                                     // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x90 - 0x18)
// ScriptStruct Icarus.LevelSequencesData
struct FLevelSequencesData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UWorld>                 Level;                                             // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class ULevelSequence*>     LevelSequences;                                    // 0x40(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.LevelSequencesEnum
struct FLevelSequencesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.LevelSequencesRowHandle
struct FLevelSequencesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.LivingItemUpgradesRowHandle
struct FLivingItemUpgradesRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.MeshCustomisationData
struct FMeshCustomisationData
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            StaticMeshToSocket;                                // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Icarus.LivingItemUpgradeSlotData
struct FLivingItemUpgradeSlotData
{
public:
	struct FVector2D                             SlotPosition2D;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PinPosition2D;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PinBendPosition2D;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLivingItemUpgradesRowHandle>  AvailableUpgrades;                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FChallengesRowHandle                  ChallengeToUnlock;                                 // 0x28(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshCustomisationData                DefaultSlotMesh;                                   // 0x40(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Icarus.LivingItemSlotState
struct FLivingItemSlotState
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChallengeProgress;                                 // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActiveChallenge;                                // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSlotUnlocked;                                     // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B32[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemUpgradeSlotData            SlotData;                                          // 0x10(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FLivingItemUpgradesRowHandle          CurrentUpgrade;                                    // 0x80(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.LivingItemData
struct FLivingItemData : public FIcarusTableRowBase
{
public:
	TArray<struct FLivingItemUpgradeSlotData>    UpgradeSlots;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               ItemPreviewOffset;                                 // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ItemPreviewRotation;                               // 0x34(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.LivingItemEnum
struct FLivingItemEnum : public FRowEnum
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.LivingItemShopItemData
struct FLivingItemShopItemData : public FIcarusTableRowBase
{
public:
	struct FItemTemplateRowHandle                ItemTemplate;                                      // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWorkshopCost>                 Cost;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.LivingItemShopItemsEnum
struct FLivingItemShopItemsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.LivingItemShopItemsRowHandle
struct FLivingItemShopItemsRowHandle : public FRowHandle
{
public:
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct Icarus.LivingItemUpgradeData
struct FLivingItemUpgradeData : public FIcarusTableRowBase
{
public:
	class FText                                  UpgradeName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  UpgradeDescription;                                // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAlterationsRowHandle                 AlterationToApply;                                 // 0x70(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWorkshopCost>                 UpgradeCost;                                       // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMeshCustomisationData>        MeshCustomisations;                                // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.LogCategoriesRowHandle
struct FLogCategoriesRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.IcarusLogCategory
struct FIcarusLogCategory : public FIcarusTableRowBase
{
public:
	class FText                                  Name;                                              // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x80 (0x98 - 0x18)
// ScriptStruct Icarus.MapIconsData
struct FMapIconsData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UUserWidget>             WidgetClass;                                       // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            MapIcon;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsEnum                            RequiredPlayerStatToShow;                          // 0x50(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            RequiredActorStatToShow;                           // 0x60(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequireOwnershipToShow;                            // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ZOrder;                                            // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleFactor;                                       // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetsRotation;                                      // 0x7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BrushSize;                                         // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UpdateOnTick;                                      // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayOnCompass;                                 // 0x89(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B36[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCompassDisplayDistance;                         // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               CompassWidgetClass;                                // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MapIconsEnum
struct FMapIconsEnum : public FRowEnum
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.MapRow
struct FMapRow
{
public:
	TArray<enum class EMapTileRadarFlag>         ColumnTiles;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.RadarV3ScanData
struct FRadarV3ScanData
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizeInKM;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcLengthInPercent;                                // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomOffset;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UID;                                               // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Icarus.MapManagerRecord
struct FMapManagerRecord
{
public:
	TMap<struct FIntPoint, int32>                TileFlags;                                         // 0x0(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FRadarV3ScanData>              RadarV3Scans;                                      // 0x50(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.MapSearchArea
struct FMapSearchArea : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MapSearchAreaEnum
struct FMapSearchAreaEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MapSearchAreaRowHandle
struct FMapSearchAreaRowHandle : public FRowHandle
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.FavoriteEntry
struct FFavoriteEntry
{
public:
	uint8                                        Pad_8B37[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.SessionFilters
struct FSessionFilters
{
public:
	enum class ESessionFilterState               Friends;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESessionFilterState               Locked;                                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESessionFilterState               Version;                                           // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B38[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SearchString;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.SessionQuery
struct FSessionQuery
{
public:
	enum class ESessionSortType                  SortType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESessionSortDirection             SortDirection;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B39[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionFilters                       Filters;                                           // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1D0 - 0x18)
// ScriptStruct Icarus.MeshableData
struct FMeshableData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UStreamableRenderAsset> ItemMesh;                                          // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AIcarusItem>             ItemActor;                                         // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStreamableRenderAsset> EquipHandMesh;                                     // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AIcarusItem>             EquipHandActor;                                    // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStreamableRenderAsset> EquipBackMesh;                                     // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AIcarusItem>             EquipBackActor;                                    // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStreamableRenderAsset> VehicleMesh;                                       // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AIcarusItem>             VehicleActor;                                      // 0x130(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AIcarusItem>             DeployableActor;                                   // 0x158(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStreamableRenderAsset> ExtraMesh;                                         // 0x180(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AIcarusItem>             ExtraActor;                                        // 0x1A8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MeshableEnum
struct FMeshableEnum : public FRowEnum
{
public:
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct Icarus.MetaCurrency
struct FMetaCurrency : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x60(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FItemsStaticRowHandle                 ItemStaticData;                                    // 0x78(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DecoratorText;                                     // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DecoratorImage;                                    // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayOnMainScreen;                              // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B3B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MetaCurrencyEnum
struct FMetaCurrencyEnum : public FRowEnum
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.MetaInventory
struct FMetaInventory
{
public:
	enum class EMetaInventoryID                  InventoryID;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemData>                     Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.OreDepositRowHandle
struct FOreDepositRowHandle : public FRowHandle
{
public:
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.MetaResourceNodeInfo
struct FMetaResourceNodeInfo : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class AResourceDeposit>        ResourceBP;                                        // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOreDepositRowHandle                  Resource;                                          // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MetaResourceNodesEnum
struct FMetaResourceNodesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MetaResourceNodesRowHandle
struct FMetaResourceNodesRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.MetaSpawn
struct FMetaSpawn
{
public:
	struct FExoticSpawnEnum                      SpawnLocation;                                     // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinMetaAmount;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxMetaAmount;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.WorkshopItem
struct FWorkshopItem : public FIcarusTableRowBase
{
public:
	struct FItemTemplateRowHandle                Item;                                              // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWorkshopCost>                 ResearchCost;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWorkshopCost>                 ReplicationCost;                                   // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTalentsRowHandle                     RequiredMission;                                   // 0x50(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Icarus.MissionReport
struct FMissionReport
{
public:
	struct FProspectInfo                         ProspectInfo;                                      // 0x0(0x90)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        ExoticsBanked;                                     // 0x90(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RedExoticsBanked;                                  // 0x94(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFactionMissionsRowHandle>     CompletedMissions;                                 // 0x98(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0xB0 - 0x18)
// ScriptStruct Icarus.ModifierStateAudioData
struct FModifierStateAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             PlayerModifierAddedSound;                          // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplayOnStack;                                    // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CooldownTime;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             PlayerModifierLoopSound;                           // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyStackCountParameterToLoop;                   // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             PlayerModifierRemovedSound;                        // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyExposedVocalisation;                         // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExposedVocalisationMinEffectiveness;               // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyEffectivenessParameter;                      // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B40[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ModifierStateAudioDataEnum
struct FModifierStateAudioDataEnum : public FRowEnum
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.AuraActor
struct FAuraActor
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ModifierUID;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B41[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ModifierStatesEnum
struct FModifierStatesEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MountsEnum
struct FMountsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MountsRowHandle
struct FMountsRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.MultiPointAudioNode
struct FMultiPointAudioNode
{
public:
	class UObject*                               TargetObject;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B42[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Icarus.MultiPointAudioNodeArray
struct FMultiPointAudioNodeArray
{
public:
	uint8                                        Pad_8B43[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMultiPointAudioNode>          Nodes;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMultiPointAudioNode>          PendingNodes;                                      // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8B44[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MusicLocationCondition
struct FMusicLocationCondition : public FIcarusTableRowBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MusicLocationConditionsEnum
struct FMusicLocationConditionsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MusicQuestCondition
struct FMusicQuestCondition : public FIcarusTableRowBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MusicQuestConditionsEnum
struct FMusicQuestConditionsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MusicQuestConditionsRowHandle
struct FMusicQuestConditionsRowHandle : public FRowHandle
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.MusicSubsystemConfig
struct FMusicSubsystemConfig
{
public:
	float                                        MinWaitTimeBetweenTracks;                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWaitTimeBetweenTracks;                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MusicTrackStateGroupsRowHandle
struct FMusicTrackStateGroupsRowHandle : public FRowHandle
{
public:
};

// 0x120 (0x138 - 0x18)
// ScriptStruct Icarus.MusicTrack
struct FMusicTrack : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             Event;                                             // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           FadeInCurve;                                       // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           FadeOutCurve;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           PrevTrackOverrideFadeOutCurve;                     // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrackCanBePaused;                                 // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PlayerStateFlags;                                  // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B45[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<struct FMusicLocationConditionsRowHandle> Locations;                                         // 0x60(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        CombatFlags;                                       // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TimeOfDayFlags;                                    // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeatherFlags;                                      // 0xB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DropTimeFlags;                                     // 0xB3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DropStateFlags;                                    // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GameplayEventFlags;                                // 0xB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DisasterFlags;                                     // 0xB6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B46[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<struct FMusicQuestConditionsRowHandle>  Quests;                                            // 0xB8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMusicTrackStateGroupsRowHandle       StateGroup;                                        // 0x108(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tempo;                                             // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Key;                                               // 0x124(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TimeSignature;                                     // 0x12C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B47[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MusicTracksEnum
struct FMusicTracksEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MusicTracksRowHandle
struct FMusicTracksRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.MusicTrackStateGroup
struct FMusicTrackStateGroup : public FIcarusTableRowBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.MusicTrackStateGroupsEnum
struct FMusicTrackStateGroupsEnum : public FRowEnum
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Icarus.NetworkingStatus
struct FNetworkingStatus
{
public:
	class FString                                CurrentHostPlayerName;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BackupHostPlayerName;                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PlayerNames;                                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                PlayerPing;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSavedLocally;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeBetweenStateSaves;                             // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSinceDatabaseSave;                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenHeartbeats;                             // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSinceHeartbeat;                                // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndProspectUpdateTimeout;                          // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpdateProspectStateFailedCounter;                  // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpdateUnrealSessionFailedCounter;                  // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.OrchestrationStateFlagsRowHandle
struct FOrchestrationStateFlagsRowHandle : public FRowHandle
{
public:
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Icarus.OrchestrationEventDescription
struct FOrchestrationEventDescription : public FIcarusTableRowBase
{
public:
	TSet<struct FOrchestrationStateFlagsRowHandle> RequiredFlags;                                     // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FOrchestrationStateFlagsRowHandle     StateFlagToSetOnExecute;                           // 0x68(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.OrchestrationEventsEnum
struct FOrchestrationEventsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.OrchestrationEventsRowHandle
struct FOrchestrationEventsRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.OrchestrationStateFlag
struct FOrchestrationStateFlag : public FIcarusTableRowBase
{
public:
	class FString                                FlagDescriptor;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.OrchestrationStateFlagsEnum
struct FOrchestrationStateFlagsEnum : public FRowEnum
{
public:
};

// 0x108 (0x120 - 0x18)
// ScriptStruct Icarus.OreDeposit
struct FOreDeposit : public FIcarusTableRowBase
{
public:
	struct FItemTemplateRowHandle                ResourceType;                                      // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHighlightableRowHandle               HighlightableRow;                                  // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     RVTNodeMaterial_CF;                                // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     RVTNodeMaterial_DC;                                // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     NodeMaterial_CF;                                   // 0x98(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     NodeMaterial_DC;                                   // 0xC0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     RockMaterial;                                      // 0xE8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinOreAvailable;                                   // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxOreAvailable;                                   // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MiningTimeSeconds;                                 // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B49[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.OreDepositEnum
struct FOreDepositEnum : public FRowEnum
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.OutOfBoundsArray
struct FOutOfBoundsArray
{
public:
	TArray<class AActor*>                        OverlappedVolumes;                                 // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ProspectListRowHandle
struct FProspectListRowHandle : public FRowHandle
{
public:
};

// 0x58 (0x70 - 0x18)
// ScriptStruct Icarus.Outpost
struct FOutpost : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProspectListRowHandle                ProspectListRowHandle;                             // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTalentsRowHandle                     RequiredMission;                                   // 0x58(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.OutpostsEnum
struct FOutpostsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.OutpostsRowHandle
struct FOutpostsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Icarus.OxygenData
struct FOxygenData : public FResourceNetworkData
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.OxygenEnum
struct FOxygenEnum : public FRowEnum
{
public:
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.PaintingData
struct FPaintingData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             SmallPaintingImage;                                // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargePaintingImage;                                // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.PaintingsEnum
struct FPaintingsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.PaintingsRowHandle
struct FPaintingsRowHandle : public FRowHandle
{
public:
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Icarus.PerPlayerCheatData
struct FPerPlayerCheatData
{
public:
	bool                                         bGodMode;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnlimitedResources;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllRecipesUnlocked;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVerboseDamageLogging;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.PlayerAccoladeCategory
struct FPlayerAccoladeCategory : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.PlayerAccoladeCategoriesRowHandle
struct FPlayerAccoladeCategoriesRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.PlayerAudioShelterRecord
struct FPlayerAudioShelterRecord
{
public:
	uint8                                        Pad_8B4A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.BestiaryGroupTracking
struct FBestiaryGroupTracking
{
public:
	struct FBestiaryDataRowHandle                BestiaryGroup;                                     // 0x0(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPoints;                                         // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.PlayerBestiaryData
struct FPlayerBestiaryData
{
public:
	TArray<struct FBestiaryGroupTracking>        BestiaryTracking;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFishTypeTracking>             FishTracking;                                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x90 - 0x18)
// ScriptStruct Icarus.PlayerFootstepAudioData
struct FPlayerFootstepAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             FootstepSound;                                     // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             JumpUpSound;                                       // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             JumpLandSound;                                     // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.PlayerFootstepAudioDataEnum
struct FPlayerFootstepAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.PlayerFootstepAudioDataRowHandle
struct FPlayerFootstepAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.PlayerHistoryEntryRecord
struct FPlayerHistoryEntryRecord
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CachedCharacterName;                               // 0x18(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.PlayerHistoryEntry
struct FPlayerHistoryEntry
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CachedCharacterName;                               // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.PlayerIdentityData
struct FPlayerIdentityData : public FIcarusTableRowBase
{
public:
	struct FColor                                Color;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.PlayerIdentityEnum
struct FPlayerIdentityEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.PlayerIdentityRowHandle
struct FPlayerIdentityRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.LoadoutRecords
struct FLoadoutRecords
{
public:
	TArray<struct FPlayerLoadoutData>            Loadouts;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.SurvivalTriggersRowHandle
struct FSurvivalTriggersRowHandle : public FRowHandle
{
public:
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Icarus.PlayerStartingStats
struct FPlayerStartingStats : public FIcarusTableRowBase
{
public:
	TMap<struct FStatsEnum, int32>               StatsGranted;                                      // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSurvivalTriggersRowHandle            SurvivalTriggers;                                  // 0x68(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.PlayerTrackerCategoriesRowHandle
struct FPlayerTrackerCategoriesRowHandle : public FRowHandle
{
public:
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Icarus.PlayerTracker
struct FPlayerTracker : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerTrackerCategoriesRowHandle     TrackerCategory;                                   // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  TagsToTrack;                                       // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ETagRequirement                   TagRequirement;                                    // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SteamStatId;                                       // 0x74(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackerSetType                   SetType;                                           // 0x7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.PlayerTrackerCategory
struct FPlayerTrackerCategory : public FIcarusTableRowBase
{
public:
	class FString                                CategoryDescriptor;                                // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.PlayerTrackerCategoriesEnum
struct FPlayerTrackerCategoriesEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.PlayerTrackersEnum
struct FPlayerTrackersEnum : public FRowEnum
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.PrebuiltData
struct FPrebuiltData : public FIcarusTableRowBase
{
public:
	class FString                                Filename;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.SerializedStructure
struct FSerializedStructure
{
public:
	TArray<struct FSerializedGrid>               Grids;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSerializedDeployable>         Deployables;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.PrebuiltSpawnedActorRecord
struct FPrebuiltSpawnedActorRecord
{
public:
	class FString                                RelevantActorClassName;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RelevantActorIcarusUID;                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B50[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.PrebuiltStructuresEnum
struct FPrebuiltStructuresEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.PrebuiltStructuresRowHandle
struct FPrebuiltStructuresRowHandle : public FRowHandle
{
public:
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.PreviewCameraSettings
struct FPreviewCameraSettings : public FIcarusTableRowBase
{
public:
	uint8                                        Pad_8B51[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeOffset;                                    // 0x20(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CameraFOV;                                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B52[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.PreviewCameraSettingsEnum
struct FPreviewCameraSettingsEnum : public FRowEnum
{
public:
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.ProcessingData
struct FProcessingData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UProcessingComponent>    Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRecipeSetsRowHandle                  DefaultRecipeSet;                                  // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiresEnergy;                                    // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresShelter;                                  // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoSelectRecipe;                                  // 0x5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ManualActivation;                                  // 0x5B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueueSize;                                         // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxMilliwattage;                                   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EffectedByPlayerStats;                             // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SendOutputDirectlyToPlayer;                        // 0x65(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B53[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ProcessingEnum
struct FProcessingEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ProcessorRecipesEnum
struct FProcessorRecipesEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ProjectileTypesEnum
struct FProjectileTypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ProjectileTypesRowHandle
struct FProjectileTypesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ProspectStatsRowHandle
struct FProspectStatsRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.DifficultySetup
struct FDifficultySetup
{
public:
	TArray<struct FProspectStatsRowHandle>       DifficultyStats;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FProspectForecastRowHandle            Forecast;                                          // 0x10(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WorldBossesRowHandle
struct FWorldBossesRowHandle : public FRowHandle
{
public:
};

// 0x2B0 (0x2C8 - 0x18)
// ScriptStruct Icarus.IcarusProspect
struct FIcarusProspect : public FIcarusTableRowBase
{
public:
	class FText                                  DropName;                                          // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                DesignNotes;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  FlavourText;                                       // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            ProspectImage;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EMissionDifficulty, struct FDifficultySetup> DifficultySetup;                                   // 0x78(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EIcarusProspectDifficulty         Difficulty;                                        // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogueRowHandle                    BriefingDialogue;                                  // 0xCC(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueRowHandle                    LandingDialogue;                                   // 0xE4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueRowHandle                    MissionCompleteDialogue;                           // 0xFC(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredLevel;                                     // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProspectRequiredTech             RequiredTech;                                      // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterFlagsEnum>           RequiredCharacterFlags;                            // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCharacterFlagsEnum>           ForbiddenCharacterFlags;                           // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFlagsMultiRowHandle>          RequiredFlags;                                     // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FWorldBossesRowHandle, struct FVector2D> WorldBosses;                                       // 0x150(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FProspectForecastRowHandle            InitialForecast;                                   // 0x1A0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProspectForecastRowHandle            Forecast;                                          // 0x1B8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisabled;                                         // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTerrainsRowHandle                    Terrain;                                           // 0x1D4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFactionMissionsRowHandle             FactionMission;                                    // 0x1EC(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPersistent;                                     // 0x204(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOpenWorld;                                      // 0x205(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B57[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusTimeSpan                       TimeDuration;                                      // 0x208(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        StartingTime;                                      // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           TimeScaleCurve;                                    // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRulesetsRowHandle>            AdditionalRulesets;                                // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PlayerSpawnGroupIndex;                             // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B59[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaSpawn>                    MetaDepositSpawns;                                 // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             DefaultMetaResourceAmount;                         // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMetaSpawnsMin;                                  // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMetaSpawnsMax;                                  // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProspectStatsRowHandle>       WorldStatList;                                     // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UGameplayTexture>       BoundsOverride;                                    // 0x280(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISpawnConfigRowHandle               AISpawnConfigOverride;                             // 0x2A8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbandonOnProspectExpiry;                          // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnProspectAvailability           OnProspectAvailability;                            // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B5A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WeatherPoolsRowHandle
struct FWeatherPoolsRowHandle : public FRowHandle
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.ForecastPattern
struct FForecastPattern
{
public:
	int32                                        Tier;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationMinutes;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.ProspectForecast
struct FProspectForecast : public FIcarusTableRowBase
{
public:
	struct FWeatherPoolsRowHandle                WeatherPool;                                       // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FForecastPattern>              Pattern;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ProspectForecastEnum
struct FProspectForecastEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ProspectListEnum
struct FProspectListEnum : public FRowEnum
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.ProspectCompletionCondition
struct FProspectCompletionCondition
{
public:
	struct FMetaCurrencyRowHandle                MetaCurrency;                                      // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Icarus.ProspectSaveData
struct FProspectSaveData
{
public:
	struct FProspectInfo                         ProspectInfo;                                      // 0x0(0x90)(Edit, SaveGame, NativeAccessSpecifierPublic)
	struct FProspectBlob                         ProspectBlob;                                      // 0x90(0x40)(Edit, SaveGame, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct Icarus.ProspectSaveStateHeader
struct FProspectSaveStateHeader
{
public:
	uint8                                        Pad_8B5B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Version;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELobbyPrivacy                     LobbyPrivacy;                                      // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         ProspectInfo;                                      // 0x10(0x90)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                ProspectMapName;                                   // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             LastSavedDateTime;                                 // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProspectID;                                        // 0xB8(0x10)(ZeroConstructor, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ProspectDTKey;                                     // 0xC8(0x10)(ZeroConstructor, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.StateRecorderBlob
struct FStateRecorderBlob
{
public:
	class FString                                ComponentClassName;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                BinaryData;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0xE8 - 0xD8)
// ScriptStruct Icarus.ProspectSaveState
struct FProspectSaveState : public FProspectSaveStateHeader
{
public:
	TArray<struct FStateRecorderBlob>            StateRecorderBlobs;                                // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WorldStatsEnum
struct FWorldStatsEnum : public FStatsEnum
{
public:
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.ProspectStat
struct FProspectStat : public FIcarusTableRowBase
{
public:
	TMap<struct FWorldStatsEnum, int32>          WorldStats;                                        // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ProspectStatsEnum
struct FProspectStatsEnum : public FRowEnum
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.ExistingOutpostData
struct FExistingOutpostData
{
public:
	class FString                                OutpostName;                                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionDifficulty                Difficulty;                                        // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedDropIndex;                                 // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.QuestsEnum
struct FQuestsEnum : public FRowEnum
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.SubQuest
struct FSubQuest
{
public:
	struct FQuestsEnum                           QuestEnum;                                         // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AQuest*                                Quest;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.QuestDescription
struct FQuestDescription : public FIcarusTableRowBase
{
public:
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Depth;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bComplete;                                         // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQuest*                                Quest;                                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.QuestVariable
struct FQuestVariable
{
public:
	class FString                                VariableName;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVariable;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FVariable;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IVariable;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B60[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.QuestActor
struct FQuestActor
{
public:
	class FString                                ActorName;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AIcarusActor*                          RelevantActor;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.QuestModifierData
struct FQuestModifierData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UQuestModifierBase>      OverrideClass;                                     // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x60 - 0x40)
// ScriptStruct Icarus.QuestEnemyModifier
struct FQuestEnemyModifier : public FQuestModifierData
{
public:
	TArray<struct FAISetupRowHandle>             PossibleEnemies;                                   // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxEnemies;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnAllInitially;                                // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRespawnEnemies;                                   // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B61[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnInterval;                                     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnDistance;                                     // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.QuestEnemyModifiersEnum
struct FQuestEnemyModifiersEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.QuestEnemyModifiersRowHandle
struct FQuestEnemyModifiersRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.QuestEvent
struct FQuestEvent : public FIcarusTableRowBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.QuestEventsEnum
struct FQuestEventsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.QuestEventsRowHandle
struct FQuestEventsRowHandle : public FRowHandle
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct Icarus.QuestModifiersMultiRowHandle
struct FQuestModifiersMultiRowHandle : public FMultiRowHandle
{
public:
	enum class EQuestModifiersTableType          DataTableName;                                     // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8B62[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.QuestQueries
struct FQuestQueries : public FIcarusTableRowBase
{
public:
	struct FGameplayTagQuery                     Query;                                             // 0x18(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.QuestQueriesEnum
struct FQuestQueriesEnum : public FRowEnum
{
public:
};

// 0x130 (0x148 - 0x18)
// ScriptStruct Icarus.QuestSetup
struct FQuestSetup : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class AQuest>                  Class;                                             // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Variation;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FQuestQueriesRowHandle                LocationQuery;                                     // 0x60(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EDialogueEvents, struct FDialogueRowHandle> DialogueEvents;                                    // 0x78(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<enum class EDialogueEvents, struct FDialoguePoolRowHandle> DialoguePoolEvents;                                // 0xC8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMusicQuestConditionsRowHandle        MusicCondition;                                    // 0x118(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayAudioCueOnCompletion;                         // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestModifiersMultiRowHandle> Modifiers;                                         // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x70 - 0x40)
// ScriptStruct Icarus.QuestVocalisationModifier
struct FQuestVocalisationModifier : public FQuestModifierData
{
public:
	struct FDialogueRowHandle                    InitialDialogue;                                   // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueRowHandle                    FinishDialogue;                                    // 0x58(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.QuestVocalisationModifiersEnum
struct FQuestVocalisationModifiersEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.QuestVocalisationModifiersRowHandle
struct FQuestVocalisationModifiersRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct Icarus.QuestWeatherModifier
struct FQuestWeatherModifier : public FQuestModifierData
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.QuestWeatherModifiersEnum
struct FQuestWeatherModifiersEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.QuestWeatherModifiersRowHandle
struct FQuestWeatherModifiersRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.QueueItem
struct FQueueItem
{
public:
	uint8                                        Pad_8B65[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Icarus.QuickMove
struct FQuickMove : public FIcarusTableRowBase
{
public:
	struct FInventoryIDEnum                      Source;                                            // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInventoryIDEnum>              Destinations;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.QuickMoveEnum
struct FQuickMoveEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.QuickMoveRowHandle
struct FQuickMoveRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RadialOptionsRowHandle
struct FRadialOptionsRowHandle : public FRowHandle
{
public:
};

// 0x58 (0x70 - 0x18)
// ScriptStruct Icarus.RadialMenuOption
struct FRadialMenuOption : public FIcarusTableRowBase
{
public:
	struct FRadialOptionsRowHandle               RadialOption;                                      // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.RadialMenuData
struct FRadialMenuData : public FIcarusTableRowBase
{
public:
	TArray<struct FRadialMenuOption>             RadialOptions;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RadialOption
struct FRadialOption : public FIcarusTableRowBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RadialMenuDataEnum
struct FRadialMenuDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RadialMenuDataRowHandle
struct FRadialMenuDataRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RadialOptionsEnum
struct FRadialOptionsEnum : public FRowEnum
{
public:
};

// 0xB8 (0xD0 - 0x18)
// ScriptStruct Icarus.RangedWeaponData
struct FRangedWeaponData : public FIcarusTableRowBase
{
public:
	struct FVector2D                             HipAccuracy;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AdsAccuracy;                                       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           SwayCurve_X;                                       // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           SwayCurve_Y;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdsSwayMultiplier;                                 // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMatineeCameraShake>       WeaponFireShake;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponFireShakeAdsScale;                           // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponFireShakeCrouchScale;                        // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponReloadTime;                                  // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HipFOVMultiplier;                                  // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdsFOVMultiplier;                                  // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRequiredCharge;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinThrowCharge;                                    // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeSpeed;                                       // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           LaunchForceCurve;                                  // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemsStaticRowHandle>         ValidAmmoItems;                                    // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x80(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RangedWeaponDataEnum
struct FRangedWeaponDataEnum : public FRowEnum
{
public:
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.RCONCommandData
struct FRCONCommandData : public FIcarusTableRowBase
{
public:
	class FString                                ConsoleCommand;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Parameters;                                        // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAdminOnly;                                        // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERCONCommandContext               Context;                                           // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERCONCommandPlatformContext       PlatformContext;                                   // 0x5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B67[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RCONCommandEnum
struct FRCONCommandEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RCONCommandRowHandle
struct FRCONCommandRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RecipeSetsEnum
struct FRecipeSetsEnum : public FRowEnum
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.RemoteUserSettingAndValue
struct FRemoteUserSettingAndValue
{
public:
	enum class ERemoteUserSetting                ID;                                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Icarus.RepairableItem
struct FRepairableItem
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class ECanRepair                        Status;                                            // 0x1F0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HealthPercent;                                     // 0x1F4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQueueItem>                    RepairMaterials;                                   // 0x1F8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsArmor;                                          // 0x208(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERepairItemTier                   Tier;                                              // 0x209(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B6A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            SourceInventory;                                   // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceInventorySlot;                               // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B6B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RepGraphClassPoliciesEnum
struct FRepGraphClassPoliciesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RepGraphClassPoliciesRowHandle
struct FRepGraphClassPoliciesRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RepGraphClassSettingsEnum
struct FRepGraphClassSettingsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RepGraphClassSettingsRowHandle
struct FRepGraphClassSettingsRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.RepGraphClassSettings
struct FRepGraphClassSettings : public FIcarusTableRowBase
{
public:
	class FString                                Description;                                       // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistancePriorityScale;                             // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StarvationPriorityScale;                           // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedNetPriorityBias;                        // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReplicationPeriodFrame;                            // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActorChannelFrameTimeout;                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NetCullDistance;                                   // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x70 - 0x18)
// ScriptStruct Icarus.RepGraphClassPolicy
struct FRepGraphClassPolicy : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class AActor>                  Class;                                             // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClassRepPolicy                   Policy;                                            // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRepGraphClassSettingsRowHandle       Settings;                                          // 0x54(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B6D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.ResourceFlow
struct FResourceFlow : public FIcarusTableRowBase
{
public:
	class UTraitComponent*                       Source;                                            // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIcarusResourceType               Resource;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Flow;                                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.ResourceNodeAudioData
struct FResourceNodeAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             HarvestSound;                                      // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             NodeDepletedSound;                                 // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ResourceNodeAudioDataEnum
struct FResourceNodeAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ResourceNodeAudioDataRowHandle
struct FResourceNodeAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Icarus.RigUnit_SphereTraceCustom
struct FRigUnit_SphereTraceCustom : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 Channel;                                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B71[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.RiverAudioData
struct FRiverAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             Sound;                                             // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeedsAudioContext;                                // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesLavaFlowPoints;                               // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B72[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RiverAudioDataEnum
struct FRiverAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RiverAudioDataRowHandle
struct FRiverAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x78 (0x90 - 0x18)
// ScriptStruct Icarus.RocketableData
struct FRocketableData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStatsEnum, int32>               StatsGranted;                                      // 0x40(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RocketableEnum
struct FRocketableEnum : public FRowEnum
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.RocketSpawnStateRecord
struct FRocketSpawnStateRecord
{
public:
	uint8                                        Pad_8B73[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AssignedPlayerID;                                  // 0x8(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x18(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B74[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xE0 - 0x18)
// ScriptStruct Icarus.RTXGIVolumes
struct FRTXGIVolumes : public FIcarusTableRowBase
{
public:
	uint8                                        Pad_8B75[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BoxTransform;                                      // 0x20(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         EnableVolume;                                      // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdatePriority;                                    // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LightingPriority;                                  // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendingDistance;                                  // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendingCutoffDistance;                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RuntimeStatic;                                     // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastOrigin;                                        // 0x68(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDDGIRaysPerProbe                 RaysPerProbe;                                      // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            ProbeCounts;                                       // 0x78(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeMaxRayDistance;                               // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeHistoryWeight;                                // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProbeRelocation                      ProbeRelocation;                                   // 0x8C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ScrollProbesInfinitely;                            // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VisualizeProbes;                                   // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B78[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntVector                            ProbeScrollOffset;                                 // 0x9C(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeDistanceExponent;                             // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeIrradianceEncodingGamma;                      // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeChangeThreshold;                              // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeBrightnessThreshold;                          // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDDGISkyLightType                 SkyLightTypeOnRayMiss;                             // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewBias;                                          // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalBias;                                        // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightMultiplier;                                   // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmissiveMultiplier;                                // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IrradianceScalar;                                  // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                     LightingChannels;                                  // 0xD0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B79[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RTXGIVolumesEnum
struct FRTXGIVolumesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.RTXGIVolumesRowHandle
struct FRTXGIVolumesRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.RulesetData
struct FRulesetData : public FIcarusTableRowBase
{
public:
	TSubclassOf<class URuleset>                  RulesetClass;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabledByDefault;                                 // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnOnClient;                                    // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B7A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.RulesetsEnum
struct FRulesetsEnum : public FRowEnum
{
public:
};

// 0xD0 (0xE8 - 0x18)
// ScriptStruct Icarus.SaddleData
struct FSaddleData : public FIcarusTableRowBase
{
public:
	struct FGameplayTag                          SaddleTag;                                         // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountsRowHandle                      SupportedMount;                                    // 0x20(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           SaddleAnimBlueprint;                               // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocket;                                      // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             FurCullMask;                                       // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             PersistentSound;                                   // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AudioSocket;                                       // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.SaddlesEnum
struct FSaddlesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.SaddlesRowHandle
struct FSaddlesRowHandle : public FRowHandle
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Icarus.ScalingValueMap
struct FScalingValueMap
{
public:
	int32                                        InMinValue;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMaxValue;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutMinPercentScale;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutMaxPercentScale;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampOutput;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B7B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x98 - 0x18)
// ScriptStruct Icarus.ScalingRuleData
struct FScalingRuleData : public FIcarusTableRowBase
{
public:
	bool                                         bScaleByNearbyPlayerCount;                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalingValueMap                      NearbyPlayersScaling;                              // 0x1C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           CustomNearbyPlayersCurve;                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleByTargetLevel;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalingValueMap                      TargetLevelScaling;                                // 0x3C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           CustomTargetLevelCurve;                            // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleByProspectDifficulty;                        // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalingValueMap                      ProspectDifficultyScaling;                         // 0x5C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           CustomProspectDifficultyCurve;                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleByAverageNearbyPlayerLevel;                  // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalingValueMap                      AverageNearbyPlayerLevelScaling;                   // 0x7C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           CustomAverageNearbyPlayerLevelCurve;               // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ScalingRulesEnum
struct FScalingRulesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ScalingRulesRowHandle
struct FScalingRulesRowHandle : public FRowHandle
{
public:
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.ScriptedEventData
struct FScriptedEventData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class AScriptedEvent>          EventClass;                                        // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  EventName;                                         // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ScriptedEventsEnum
struct FScriptedEventsEnum : public FRowEnum
{
public:
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.SeedModification
struct FSeedModification : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  Query;                                             // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            StatRequirement;                                   // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifierStatesRowHandle              Modifier;                                          // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EffectivenessIncrease;                             // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B80[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.SeedModificationsEnum
struct FSeedModificationsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.SeedModificationsRowHandle
struct FSeedModificationsRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.SessionFlag
struct FSessionFlag : public FIcarusTableRowBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.SessionFlagsEnum
struct FSessionFlagsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.SessionFlagsRowHandle
struct FSessionFlagsRowHandle : public FRowHandle
{
public:
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Icarus.SocketStringIDQuery
struct FSocketStringIDQuery
{
public:
	class FString                                SocketStringID;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SlotVisualizerScale;                               // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            SlotVisualizerMesh;                                // 0x20(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmountOfPhysicsTime;                               // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  SlotQuery;                                         // 0x4C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B82[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.SlotableData
struct FSlotableData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class USlotableComponent>      Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSocketStringIDQuery>          StringIDQueries;                                   // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Icarus.SlotWrapper
struct FSlotWrapper
{
public:
	struct FVector                               SocketWorldLocation;                               // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SocketRotation;                                    // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SocketScale;                                       // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusItem*                           HeldItem;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotableInventoryLocation;                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  SocketVisualizer;                                  // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            SlotVisualizerMesh;                                // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmountOfPhysicsTime;                               // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSocketStringIDQuery                  Query;                                             // 0x78(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.SlotableEnum
struct FSlotableEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.SortTypePriorityEnum
struct FSortTypePriorityEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.SortTypePriorityRowHandle
struct FSortTypePriorityRowHandle : public FRowHandle
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.RecordedSplineIndexStruct
struct FRecordedSplineIndexStruct
{
public:
	int32                                        SplineActorID;                                     // 0x0(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SplineIndex;                                       // 0x4(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.RecordedSplineIndexStructArray
struct FRecordedSplineIndexStructArray
{
public:
	TArray<struct FRecordedSplineIndexStruct>    IndexArray;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.RecordedSplinePoint
struct FRecordedSplinePoint
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasNode;                                           // 0xC(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            NodeTransform;                                     // 0x10(0x30)(BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Icarus.RecordedSplineActorStruct
struct FRecordedSplineActorStruct
{
public:
	TMap<int32, struct FRecordedSplineIndexStructArray> ConnectionMap;                                     // 0x0(0x50)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	TArray<int32>                                StartAtActorIDs;                                   // 0x50(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<int32>                                EndAtActorIDs;                                     // 0x60(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int32                                        SplineTypeEnum;                                    // 0x70(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UniqueSplineID;                                    // 0x74(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRecordedSplinePoint>          SplinePoints;                                      // 0x78(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.StaminaActionCostsEnum
struct FStaminaActionCostsEnum : public FRowEnum
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.StaminaCost
struct FStaminaCost : public FIcarusTableRowBase
{
public:
	int32                                        BeginActionCost;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndActionCost;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PerSecondCost;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVirtualStatsEnum                     EffectingStat;                                     // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanPerformActionWithInsufficientStamina;          // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B88[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x78 - 0x18)
// ScriptStruct Icarus.StatAfflictions
struct FStatAfflictions : public FIcarusTableRowBase
{
public:
	struct FStatsEnum                            AfflictionStat;                                    // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            CriticalHitAfflictionStat;                         // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            ResistanceStat;                                    // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationInSeconds;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifierStatesRowHandle              Modifier;                                          // 0x4C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsEnum                            LookupStat;                                        // 0x68(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.StatAfflictionsEnum
struct FStatAfflictionsEnum : public FRowEnum
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.StatCategory
struct FStatCategory : public FIcarusTableRowBase
{
public:
	class FText                                  Title;                                             // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Icarus.StatComparisonResult
struct FStatComparisonResult
{
public:
	struct FStatsRowHandle                       Stat;                                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OldValue;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValueAdded;                                       // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValueRemoved;                                     // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B8A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.StatComparison
struct FStatComparison
{
public:
	struct FStatsEnum                            Stat;                                              // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComparisonType                   ComparisonType;                                    // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.StatGameplayTag
struct FStatGameplayTag : public FIcarusTableRowBase
{
public:
	struct FStatsEnum                            Stat;                                              // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTag;                                       // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.StatGameplayTagsEnum
struct FStatGameplayTagsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.StatGameplayTagsRowHandle
struct FStatGameplayTagsRowHandle : public FRowHandle
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.Statistic
struct FStatistic : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.StatisticsEnum
struct FStatisticsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.StatisticsRowHandle
struct FStatisticsRowHandle : public FRowHandle
{
public:
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.PlayerStatistics
struct FPlayerStatistics
{
public:
	TMap<struct FStatisticsRowHandle, int32>     StatisticsMap;                                     // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.StatCollection
struct FStatCollection
{
public:
	TArray<struct FIcarusStatReplicated>         Stats;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.BarSegment
struct FBarSegment
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SegmentSize;                                       // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B8C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.StomachContentSaveData
struct FStomachContentSaveData
{
public:
	class FName                                  FoodRowName;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ModifierName;                                      // 0x8(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Icarus.StomachContent
struct FStomachContent
{
public:
	struct FItemsStaticRowHandle                 Food;                                              // 0x0(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ModifierID;                                        // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CachedModifierName;                                // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.SurfaceAudioReflectionData
struct FSurfaceAudioReflectionData
{
public:
	float                                        ReflectionMultiplier;                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowFrequencies;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighFrequencies;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct Icarus.SurfacesData
struct FSurfacesData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UPhysicalMaterial>      PhysicalMaterial;                                  // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UParticleSystem>        ParticleSystem;                                    // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NiagaraSystem;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerFootstepAudioDataRowHandle     PlayerFootstepAudioData;                           // 0x78(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESurfaceFMODParam                 FMODParam;                                         // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSurfaceAudioReflectionData           AudioReflectionData;                               // 0x94(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AIPerceptionVolumeMultiplier;                      // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B8F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.SurfacesEnum
struct FSurfacesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.SurfacesRowHandle
struct FSurfacesRowHandle : public FRowHandle
{
public:
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.ModifierTrigger
struct FModifierTrigger
{
public:
	struct FModifierStatesRowHandle              Modifier;                                          // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PercentTrigger;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.TemperatureTrigger
struct FTemperatureTrigger
{
public:
	struct FModifierStatesRowHandle              Modifier;                                          // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  Query;                                             // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xC0 - 0x18)
// ScriptStruct Icarus.SurvivalTriggers
struct FSurvivalTriggers : public FIcarusTableRowBase
{
public:
	TArray<struct FModifierTrigger>              Food;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FModifierTrigger>              Water;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FModifierTrigger>              Oxygen;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTemperatureTrigger                   Cold;                                              // 0x48(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTemperatureTrigger                   Heat;                                              // 0x78(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModifierStatesRowHandle              Weight;                                            // 0xA8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.SurvivalTriggersEnum
struct FSurvivalTriggersEnum : public FRowEnum
{
public:
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.TagQueries
struct FTagQueries : public FIcarusTableRowBase
{
public:
	struct FGameplayTagQuery                     Query;                                             // 0x18(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TagQueriesEnum
struct FTagQueriesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TalentRanksRowHandle
struct FTalentRanksRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TalentTreesRowHandle
struct FTalentTreesRowHandle : public FRowHandle
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Icarus.TalentReward
struct FTalentReward
{
public:
	TMap<struct FBaseStatsEnum, int32>           GrantedStats;                                      // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FCharacterFlagsRowHandle>      GrantedFlags;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x118 (0x130 - 0x18)
// ScriptStruct Icarus.Talent
struct FTalent : public FIcarusTableRowBase
{
public:
	bool                                         bIsReroute;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayName;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRowHandle                            ExtraData;                                         // 0x78(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTalentTreesRowHandle                 TalentTree;                                        // 0x90(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTalentReward>                 Rewards;                                           // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTalentsRowHandle>             RequiredTalents;                                   // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFlagsMultiRowHandle>          RequiredFlags;                                     // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFlagsMultiRowHandle>          ForbiddenFlags;                                    // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTalentRanksRowHandle                 RequiredRank;                                      // 0xF8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredLevel;                                     // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefaultUnlocked;                                  // 0x114(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELineDrawMethod                   DrawMethodOverride;                                // 0x115(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B91[0x1A];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TalentModelsRowHandle
struct FTalentModelsRowHandle : public FRowHandle
{
public:
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct Icarus.TalentArchetype
struct FTalentArchetype : public FIcarusTableRowBase
{
public:
	struct FTalentModelsRowHandle                Model;                                             // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             BackgroundTexture;                                 // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredLevel;                                     // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B92[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TalentArchetypesEnum
struct FTalentArchetypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TalentArchetypesRowHandle
struct FTalentArchetypesRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.TalentModel
struct FTalentModel : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UTalentModelInterface>   ModelClass;                                        // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TalentModelsEnum
struct FTalentModelsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TalentViewsRowHandle
struct FTalentViewsRowHandle : public FRowHandle
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct Icarus.TalentModelView
struct FTalentModelView : public FIcarusTableRowBase
{
public:
	struct FTalentViewsRowHandle                 ViewData;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTalentModelsRowHandle                ModelData;                                         // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TalentModelViewsEnum
struct FTalentModelViewsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TalentModelViewsRowHandle
struct FTalentModelViewsRowHandle : public FRowHandle
{
public:
};

// 0x60 (0x78 - 0x18)
// ScriptStruct Icarus.TalentRank
struct FTalentRank : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Investment;                                        // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTalentRanksRowHandle                 NextRank;                                          // 0x5C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B93[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TalentRanksEnum
struct FTalentRanksEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TalentsEnum
struct FTalentsEnum : public FRowEnum
{
public:
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct Icarus.TalentTree
struct FTalentTree : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             BackgroundTexture;                                 // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTalentArchetypesRowHandle            Archetype;                                         // 0x80(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTalentRanksRowHandle                 FirstRank;                                         // 0x98(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredLevel;                                     // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B94[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TalentTreesEnum
struct FTalentTreesEnum : public FRowEnum
{
public:
};

// 0x560 (0x560 - 0x0)
// ScriptStruct Icarus.TalentHoverConfig
struct FTalentHoverConfig
{
public:
	struct FSlateColor                           NormalTextColor;                                   // 0x0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           HoveredTextColor;                                  // 0x28(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           PressedTextColor;                                  // 0x50(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           DisabledTextColor;                                 // 0x78(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           NormalIconColor;                                   // 0xA0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           HoveredIconColor;                                  // 0xC8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           PressedIconColor;                                  // 0xF0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           DisabledIconColor;                                 // 0x118(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ButtonStyle;                                       // 0x140(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalCountBrush;                                  // 0x3C8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredCountBrush;                                 // 0x450(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PressedCountBrush;                                 // 0x4D8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1BA0 (0x1BB8 - 0x18)
// ScriptStruct Icarus.TalentView
struct FTalentView : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UTalentViewInterface>    ViewClass;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UTalentWidget>           TalentClass;                                       // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UTalentTooltipWidget>    TooltipClass;                                      // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TooltipPoolSize;                                   // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B95[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           PanningBrush;                                      // 0x98(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EPanningDirection                 PanningDirection;                                  // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             InitialPosition;                                   // 0x124(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OverscrollAmount;                                  // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TreePadding;                                       // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<float>                                ZoomLevels;                                        // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        InitialZoomLevel;                                  // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELineDrawMethod                   LineMethod;                                        // 0x154(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LineThickness;                                     // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B98[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x160(0x4D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             ScrollBarThickness;                                // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTalentHoverConfig                    Locked;                                            // 0x638(0x560)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTalentHoverConfig                    Available;                                         // 0xB98(0x560)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTalentHoverConfig                    Unlocked;                                          // 0x10F8(0x560)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTalentHoverConfig                    Completed;                                         // 0x1658(0x560)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TalentViewsEnum
struct FTalentViewsEnum : public FRowEnum
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.TamedCreatureModifier
struct FTamedCreatureModifier : public FIcarusTableRowBase
{
public:
	struct FStatsEnum                            StatRequirement;                                   // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            GrantedStat;                                       // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETamedCreatureType                Effects;                                           // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B99[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TamedCreatureModifiersEnum
struct FTamedCreatureModifiersEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TamedCreatureModifiersRowHandle
struct FTamedCreatureModifiersRowHandle : public FRowHandle
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TamesEnum
struct FTamesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TamesRowHandle
struct FTamesRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.TargetRangeScore
struct FTargetRangeScore
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.HighScoreRecord
struct FHighScoreRecord
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.TechTreeReference
struct FTechTreeReference
{
public:
	class UPanelWidget*                          Panel;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WidgetName;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TerrainsEnum
struct FTerrainsEnum : public FRowEnum
{
public:
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.TerrainZoneAudioData
struct FTerrainZoneAudioData : public FIcarusTableRowBase
{
public:
	struct FColor                                Color;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGlobalEnvironmentTerrainZoneFMODParam FMODParam;                                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TerrainZoneAudioDataEnum
struct FTerrainZoneAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TerrainZoneAudioDataRowHandle
struct FTerrainZoneAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.ThermalData
struct FThermalData : public FIcarusTableRowBase
{
public:
	int32                                        InnerRadius;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OuterRadius;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectFalloff;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TemperatureChange;                                 // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeObstructed;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OcclusionTraceOffset;                              // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EffectOriginOffset;                                // 0x38(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartsEnabled;                                    // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavAreaBase>              FireNavigationModifierClass;                       // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireNavigationModifierRadius;                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9F[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ThermalEnum
struct FThermalEnum : public FRowEnum
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Icarus.ThreatAudioResult
struct FThreatAudioResult
{
public:
	int32                                        ThreatLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMusicConditionCombatState        MusicConditionOverride;                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x70 - 0x18)
// ScriptStruct Icarus.TimelineRanks
struct FTimelineRanks : public FIcarusTableRowBase
{
public:
	class FText                                  TitleText;                                         // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TimelineRanksEnum
struct FTimelineRanksEnum : public FRowEnum
{
public:
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Icarus.TimeOfDay
struct FTimeOfDay : public FIcarusTableRowBase
{
public:
	int32                                        StartingHour;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndingHour;                                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TimeOfDayEnum
struct FTimeOfDayEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TimeOfDayRowHandle
struct FTimeOfDayRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct Icarus.ToolDamage
struct FToolDamage : public FIcarusTableRowBase
{
public:
	int32                                        Melee_Damage;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageVariationPercentage;                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Felling_Damage;                                    // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Felling_Efficiency;                                // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Mining_Radius;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mining_Efficiency;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Skinning_Efficiency;                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Reaping_Efficiency;                                // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Shattering_Damage;                                 // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Shattering_Efficiency;                             // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ToolDamageEnum
struct FToolDamageEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ToolTypesEnum
struct FToolTypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ToolTypesRowHandle
struct FToolTypesRowHandle : public FRowHandle
{
public:
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.TransmutableData
struct FTransmutableData : public FIcarusTableRowBase
{
public:
	int32                                        UnitsProvided;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                ByProductItem;                                     // 0x1C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DescriptionText;                                   // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TransmutableEnum
struct FTransmutableEnum : public FRowEnum
{
public:
};

// 0x198 (0x1B0 - 0x18)
// ScriptStruct Icarus.TreeAudioData
struct FTreeAudioData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             DetachTrunkSound;                                  // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             DetachBranchSound;                                 // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             DetachLeafSound;                                   // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             InitialBreakTopSound;                              // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             InitialBreakTrunkSound;                            // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             FallSound;                                         // 0xE0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             TrunkLandSound;                                    // 0x108(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrunkLandSoundUsesSurfaceParameters;              // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             HitSound;                                          // 0x138(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             HitBuildingSound;                                  // 0x160(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             InstantFellSound;                                  // 0x188(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TreeAudioDataEnum
struct FTreeAudioDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.TreeAudioDataRowHandle
struct FTreeAudioDataRowHandle : public FRowHandle
{
public:
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.TreeRuntimeConstructArguments
struct FTreeRuntimeConstructArguments
{
public:
	TSubclassOf<class ATreePrefab>               TreePrefabClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RootName;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                TreePrimitivesMask;                                // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsPhysicsDynamic;                                 // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           ProxyMesh;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATreeBase*                             InstigatorTree;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Icarus.TreeRuntimeCreateArguments
struct FTreeRuntimeCreateArguments
{
public:
	class AActor*                                Owner;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTreeRuntimeConstructArguments        ConstructArgs;                                     // 0x40(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Icarus.TreePrimitivePersistentData
struct FTreePrimitivePersistentData
{
public:
	float                                        AccumulatedDamage;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.TreePrimitiveReplacementDescription
struct FTreePrimitiveReplacementDescription
{
public:
	enum class ETreePrimitiveDetachContext       DetachContext;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETreePrimitiveItemReplaceMethod   ReplaceMethod;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemRewardsRowHandle                 ReplaceRewardsRowHandle;                           // 0x4(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.TreePrimitiveDetachContext
struct FTreePrimitiveDetachContext
{
public:
	enum class ETreePrimitiveDetachContext       DetachContext;                                     // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CollisionActor;                                    // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AIcarusPlayerCharacter*                ActionPlayer;                                      // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct Icarus.TurretData
struct FTurretData : public FIcarusTableRowBase
{
public:
	struct FVector2D                             MuzzlePitchExtents;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MuzzleYawExtents;                                  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MuzzleMoveSpeed;                                   // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MuzzleSpread;                                      // 0x2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PermitBeginFireAngle;                              // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRange;                                          // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BurstFireRate;                                     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BurstFireShots;                                    // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LaunchForce;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheckTargetPeriod;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoolDownPeriod;                                    // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFXSystemAsset>         FireParticle;                                      // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             FireSound;                                         // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FValidAmmoTypesRowHandle              ValidAmmoTypes;                                    // 0xA0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.TurretEnum
struct FTurretEnum : public FRowEnum
{
public:
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.Uses
struct FUses : public FIcarusTableRowBase
{
public:
	class FText                                  DescriptionText;                                   // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.UsesRowHandle
struct FUsesRowHandle : public FRowHandle
{
public:
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.UseCondition
struct FUseCondition
{
public:
	struct FUsesRowHandle                        Use;                                               // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x18(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FStatComparison>               RequiredStats;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMustOwnInventory;                                 // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Icarus.UsableData
struct FUsableData : public FIcarusTableRowBase
{
public:
	TArray<struct FUseCondition>                 Uses;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAlwaysShowContextMenu;                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.UsableEnum
struct FUsableEnum : public FRowEnum
{
public:
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.UserBindings
struct FUserBindings
{
public:
	TArray<struct FInputActionKeyMapping>        UserActionMappings;                                // 0x0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInputAxisKeyMapping>          UserAxisMappings;                                  // 0x10(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_8BAA[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Icarus.PerInputUserBindings
struct FPerInputUserBindings
{
public:
	struct FUserBindings                         Controller;                                        // 0x0(0x40)(NativeAccessSpecifierPublic)
	struct FUserBindings                         Keyboard;                                          // 0x40(0x40)(NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.UsesEnum
struct FUsesEnum : public FRowEnum
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.ValidAmmoTypes
struct FValidAmmoTypes : public FIcarusTableRowBase
{
public:
	TArray<struct FItemsStaticRowHandle>         AmmoTypes;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ValidAmmoTypesEnum
struct FValidAmmoTypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ValidHitQueriesEnum
struct FValidHitQueriesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ValidHitQueriesRowHandle
struct FValidHitQueriesRowHandle : public FRowHandle
{
public:
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.ValidHitQuery
struct FValidHitQuery : public FIcarusTableRowBase
{
public:
	struct FTagQueriesRowHandle                  HitSource;                                         // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  HitTarget;                                         // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FValidHitTypesRowHandle               HitSuccessType;                                    // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ValidHitType
struct FValidHitType : public FIcarusTableRowBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ValidHitTypesEnum
struct FValidHitTypesEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.ValidInteractQueriesEnum
struct FValidInteractQueriesEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.ValidInteractQueriesRowHandle
struct FValidInteractQueriesRowHandle : public FRowHandle
{
public:
};

// 0x58 (0x70 - 0x18)
// ScriptStruct Icarus.ValidInteractQuery
struct FValidInteractQuery : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  Source;                                            // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagQueriesRowHandle                  Target;                                            // 0x58(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Icarus.IcarusBackendVersion
struct FIcarusBackendVersion
{
public:
	uint8                                        Pad_8BAB[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.IcarusGameVersion
struct FIcarusGameVersion
{
public:
	uint8                                        Pad_8BAC[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Icarus.ViewTraceRegistration
struct FViewTraceRegistration
{
public:
	float                                        MaxDistance;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.ViewTraceParams
struct FViewTraceParams
{
public:
	TArray<class AActor*>                        IgnoredActors;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPrimitiveComponent*>           IgnoredComponents;                                 // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bTraceComplex;                                     // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnPhysicalMaterial;                           // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BAD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceDistance;                                     // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DebugTraceFlag;                                    // 0x28(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.VocalisationSettingsRowHandle
struct FVocalisationSettingsRowHandle : public FRowHandle
{
public:
};

// 0x40 (0x58 - 0x18)
// ScriptStruct Icarus.VocalisationData
struct FVocalisationData : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UFMODEvent>             Sound;                                             // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVocalisationSettingsRowHandle        Setting;                                           // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.VocalisationsEnum
struct FVocalisationsEnum : public FRowEnum
{
public:
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.VocalisationSetting
struct FVocalisationSetting : public FIcarusTableRowBase
{
public:
	enum class EVocalisationInterruptType        InterruptType;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanInterruptSelf;                                 // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BAE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        QueueTimeoutLength;                                // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVocalisationPriority             Priority;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BAF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.VocalisationSettingsEnum
struct FVocalisationSettingsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.VoxelSetupDataRowHandle
struct FVoxelSetupDataRowHandle : public FRowHandle
{
public:
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Icarus.VoxelDistributionRegion
struct FVoxelDistributionRegion : public FIcarusTableRowBase
{
public:
	TMap<struct FVoxelSetupDataRowHandle, int32> VoxelDistribution;                                 // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          VoxelColor;                                        // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Brightness;                                        // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.VoxelDistributionRegionEnum
struct FVoxelDistributionRegionEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.VoxelDistributionRegionRowHandle
struct FVoxelDistributionRegionRowHandle : public FRowHandle
{
public:
};

// 0x78 (0x90 - 0x18)
// ScriptStruct Icarus.VoxelMaterialMap
struct FVoxelMaterialMap : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UStaticMesh>            Mesh;                                              // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EVoxelResourceCategory, TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x40(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.VoxelMaterialMapEnum
struct FVoxelMaterialMapEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.VoxelMaterialMapRowHandle
struct FVoxelMaterialMapRowHandle : public FRowHandle
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Icarus.MinedSphere
struct FMinedSphere
{
public:
	struct FVector                               Center;                                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.VoxelState
struct FVoxelState
{
public:
	TArray<struct FMinedSphere>                  MinedSpheres;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsFullyMined : 1;                                 // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E7 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        RegenerationCount;                                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB2[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xC0 - 0x18)
// ScriptStruct Icarus.VoxelSetupData
struct FVoxelSetupData : public FIcarusTableRowBase
{
public:
	enum class EVoxelResourceCategory            ResourceCategory;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemTemplateRowHandle                ResourceType;                                      // 0x1C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                SecondaryResourceType;                             // 0x34(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemTemplateRowHandle                PyriticCrustResourceType;                          // 0x4C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DensityMultiplier;                                 // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFMODEvent>             FullyMinedSound;                                   // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceEventsRowHandle            ExperienceForMining;                               // 0x90(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsEnum                            RewardStat;                                        // 0xA8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoxelTag;                                          // 0xB8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.VoxelSetupDataEnum
struct FVoxelSetupDataEnum : public FRowEnum
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.VoxelCorner
struct FVoxelCorner
{
public:
	uint8                                        Pad_8BB4[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.VoxelMinedSphere
struct FVoxelMinedSphere
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.VoxelSaveData
struct FVoxelSaveData
{
public:
	TArray<struct FVoxelMinedSphere>             MinedSpheres;                                      // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                         bIsVoxelFullyMined;                                // 0x10(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalUnminedVoxels;                                // 0x14(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentUnminedVoxels;                              // 0x18(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumResourcesGranted;                               // 0x1C(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VoxelActorLocation;                                // 0x20(0xC)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalResourceCount;                                // 0x2C(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoxelResourceOverride;                             // 0x30(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.WaterPoint
struct FWaterPoint
{
public:
	struct FIntVector                            Top;                                               // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bottom;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct Icarus.WaterSetup
struct FWaterSetup : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UMaterialInterface>     Material;                                          // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFishSetupRowHandle>           Fish;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FishDensity;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFMODEvent>             Sound;                                             // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInCave;                                          // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDrinkable;                                       // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModifierStatesRowHandle>      WetModifiers;                                      // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x98(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Icarus.WaterData
struct FWaterData : public FResourceNetworkData
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WaterEnum
struct FWaterEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WaterSetupEnum
struct FWaterSetupEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WeatherActionsEnum
struct FWeatherActionsEnum : public FRowEnum
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.WeatherAudioSubsystemBiomeRecord
struct FWeatherAudioSubsystemBiomeRecord
{
public:
	TArray<class UWeatherAudioComponent*>        Components;                                        // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WeatherBiomeGroupsEnum
struct FWeatherBiomeGroupsEnum : public FRowEnum
{
public:
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Icarus.ActiveWeatherInfo
struct FActiveWeatherInfo
{
public:
	struct FWeatherEventsRowHandle               WeatherEvent;                                      // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBiomesRowHandle                      Biome;                                             // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UIcarusWeatherAction*>          Actions;                                           // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        StartTime;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Icarus.ActorCollection
struct FActorCollection
{
public:
	TArray<class AIcarusActor*>                  Actors;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Icarus.RecordedForecastWeatherEvent
struct FRecordedForecastWeatherEvent
{
public:
	class FName                                  WeatherEventRowName;                               // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BiomeGroupRowName;                                 // 0x8(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimeElapsed;                                       // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WeatherEventsEnum
struct FWeatherEventsEnum : public FRowEnum
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Icarus.WeatherForecastItem
struct FWeatherForecastItem
{
public:
	uint8                                        Pad_8BBA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartTime;                                         // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndTime;                                           // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Tier;                                              // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PatternIndex;                                      // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Icarus.RecordedCurrentWeatherBlock
struct FRecordedCurrentWeatherBlock
{
public:
	class FName                                  InitialProspectForecast;                           // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ProspectForecastRowName;                           // 0x8(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartTimeDelta;                                    // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PatternIndex;                                      // 0x14(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecordedNow;                                       // 0x18(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                GameStateSeeds;                                    // 0x20(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// ScriptStruct Icarus.WeatherVisualData
struct FWeatherVisualData
{
public:
	float                                        Rain;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sand;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Snow;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cloudy;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thunder;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowStorm;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindSpeed;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindStrength;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindGust;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Debris;                                            // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogDensity;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogExtinction;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ash;                                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Embers;                                            // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Smoke;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AcidRain;                                          // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hail;                                              // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Icarus.WeatherGameplayData
struct FWeatherGameplayData
{
public:
	struct FBiomesEnum                           Biome;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WindDirection;                                     // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindForce;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TemperatureModifier;                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BBC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CurrentWeatherWarningMessage;                      // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WeatherPoolsEnum
struct FWeatherPoolsEnum : public FRowEnum
{
public:
};

// 0x50 (0x68 - 0x18)
// ScriptStruct Icarus.WeatherTierIcon
struct FWeatherTierIcon : public FIcarusTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             TierIcon;                                          // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           BarColor;                                          // 0x40(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WeatherTierIconEnum
struct FWeatherTierIconEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WeatherTierIconRowHandle
struct FWeatherTierIconRowHandle : public FRowHandle
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.WeatherTimeSegment
struct FWeatherTimeSegment
{
public:
	uint8                                        Pad_8BBD[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Icarus.WeatherBlockEvent
struct FWeatherBlockEvent
{
public:
	int32                                        EventTime;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeatherEventsRowHandle               WeatherEvent;                                      // 0x4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.BiomeGroupForecast
struct FBiomeGroupForecast
{
public:
	struct FWeatherBiomeGroupsEnum               BiomeGroup;                                        // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeatherBlockEvent>            Events;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.WeatherBlock
struct FWeatherBlock
{
public:
	int32                                        Tier;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationSeconds;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeatherPoolsRowHandle                WeatherPool;                                       // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PatternIndex;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BBE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBiomeGroupForecast>           BiomeEvents;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Icarus.WeatherBiomeGroupForecast
struct FWeatherBiomeGroupForecast
{
public:
	TMap<int32, struct FWeatherEventsRowHandle>  PlannedEvents;                                     // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x50 - 0x18)
// ScriptStruct Icarus.WeightData
struct FWeightData : public FIcarusTableRowBase
{
public:
	TSoftClassPtr<class UWeightComponent>        Behaviour;                                         // 0x18(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddInventoryWeight;                                // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InventoryWeightScale;                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.WeightedListElement
struct FWeightedListElement
{
public:
	int32                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Icarus.StoredElement
struct FStoredElement
{
public:
	struct FWeightedListElement                  Element;                                           // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WeightEnum
struct FWeightEnum : public FRowEnum
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WorkshopItemsEnum
struct FWorkshopItemsEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WorkshopItemsRowHandle
struct FWorkshopItemsRowHandle : public FRowHandle
{
public:
};

// 0xF0 (0x108 - 0x18)
// ScriptStruct Icarus.WorldBossData
struct FWorldBossData : public FIcarusTableRowBase
{
public:
	struct FAISetupRowHandle                     AISetup;                                           // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEpicCreaturesRowHandle               EpicCreature;                                      // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AWorldBossSpawner>       SpawnerClass;                                      // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     SpawnerTagQuery;                                   // 0x70(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UWorldBossBehaviour>     BehaviourClass;                                    // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReloadDeadBoss;                                   // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapIconsRowHandle                    BossMapMarker;                                     // 0xE4(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanRespawnInPersistentProspects;                  // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RespawnTimeInSeconds;                              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RespawnTimeRandomDeviation;                        // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WorldBossesEnum
struct FWorldBossesEnum : public FRowEnum
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Icarus.SpawnedWorldBossData
struct FSpawnedWorldBossData
{
public:
	struct FWorldBossesRowHandle                 WorldBoss;                                         // 0x0(0x18)(SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialSpawnTransform;                             // 0x20(0x30)(SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasBeenKilled;                                    // 0x50(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BossID;                                            // 0x54(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScheduledRespawnTime;                              // 0x58(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x60 - 0x18)
// ScriptStruct Icarus.WorldCollection
struct FWorldCollection : public FIcarusTableRowBase
{
public:
	class FString                                CollectionName;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>         HeightmapLevels;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                 DeveloperLevel;                                    // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Icarus.MinimapData
struct FMinimapData
{
public:
	TArray<TSoftObjectPtr<class UTexture2D>>     MapTextures;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTexture2D>>     HeightMapTextures;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector                               WorldBoundaryMin;                                  // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldBoundaryMax;                                  // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Icarus.DropGroupData
struct FDropGroupData
{
public:
	TArray<struct FVector>                       Locations;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x160 - 0x18)
// ScriptStruct Icarus.WorldData
struct FWorldData : public FIcarusTableRowBase
{
public:
	class FString                                TerrainName;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileTag;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                 MainLevel;                                         // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>         HeightmapLevels;                                   // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>         GeneratedLevels;                                   // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                 GeneratedVistaLevel;                               // 0x80(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>         DeveloperLevels;                                   // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FBoxSphereBounds>              GridBounds;                                        // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWorldCollection>              WorldCollections;                                  // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMinimapData                          MinimapData;                                       // 0xD8(0x38)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	TMap<int32, struct FDropGroupData>           DropGroups;                                        // 0x110(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Icarus.LevelArray
struct FLevelArray : public FIcarusTableRowBase
{
public:
	TArray<TSoftObjectPtr<class UWorld>>         Levels;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Icarus.WorldDataEnum
struct FWorldDataEnum : public FRowEnum
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Icarus.WorldDataRowHandle
struct FWorldDataRowHandle : public FRowHandle
{
public:
};

}


