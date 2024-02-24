#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETemporalPortalState : uint8
{
	PS_STOPPED                     = 0,
	PS_STARTING                    = 1,
	PS_RUNNING                     = 2,
	PS_STANDBY                     = 3,
	PS_ERRORED                     = 4,
	PS_MAX                         = 5,
};

enum class ERealmCardAction : uint8
{
	Added                          = 0,
	Removed                        = 1,
	ERealmCardAction_MAX           = 2,
};

enum class ERealmDifficulty : uint8
{
	Easy                           = 0,
	Medium                         = 1,
	Hard                           = 2,
	Extreme                        = 3,
	Max                            = 4,
};

enum class EBiomeID : uint8
{
	Pastoral                       = 0,
	Swamp                          = 1,
	Mountain                       = 2,
	Forest                         = 3,
	Desert                         = 4,
	Volcanic                       = 5,
	Jungle                         = 6,
	Arctic                         = 7,
	Cavern                         = 8,
	Unknown                        = 252,
	Sanctuary                      = 253,
	City                           = 254,
	Any                            = 255,
	EBiomeID_MAX                   = 256,
};

enum class ERealmCardType : uint8
{
	Unknown                        = 0,
	Address                        = 1,
	Biome                          = 2,
	Major                          = 3,
	Minor                          = 4,
	ERealmCardType_MAX             = 5,
};

enum class EInaccessibilityMode : uint8
{
	Invalid                        = 0,
	Absolute                       = 1,
	Buffer                         = 2,
	EInaccessibilityMode_MAX       = 3,
};

enum class ENavAreaType : uint8
{
	None                           = 0,
	Error                          = 1,
	Default                        = 2,
	Null                           = 3,
	Obstacle                       = 4,
	Road                           = 5,
	Water                          = 6,
	WaterShallow                   = 7,
	WaterDeep                      = 8,
	Cave                           = 9,
	Steep                          = 10,
	ConstructionSite               = 11,
	Traversal                      = 12,
	Flying                         = 13,
	MinorEntranceCost              = 14,
	NearWall                       = 15,
	ENavAreaType_MAX               = 16,
};

enum class ENWXNPCDesireType : uint8
{
	StructureTrait                 = 0,
	Item                           = 1,
	SquadMember                    = 2,
	ENWXNPCDesireType_MAX          = 3,
};

enum class EEncounterStatus : uint8
{
	NotRunning                     = 0,
	TaskAvailable                  = 1,
	TaskInProgress                 = 2,
	TaskReadyToComplete            = 3,
	Completed                      = 4,
	EEncounterStatus_MAX           = 5,
};

enum class EEncounterType : uint8
{
	Unknown                        = 0,
	Resources                      = 1,
	NPC                            = 2,
	MajorNPC                       = 3,
	Codex                          = 4,
	Faction                        = 5,
	AreaTrigger                    = 6,
	Chest                          = 7,
	Patrol                         = 8,
	Fetch                          = 9,
	Build                          = 10,
	Defense                        = 11,
	MajorDefense                   = 12,
	ReachPoint                     = 13,
	MajorReachPoint                = 14,
	Arena                          = 15,
	Dungeon                        = 16,
	Occupation                     = 17,
	MajorOccupation                = 18,
	PuzzleGlyph                    = 19,
	PuzzleMemory                   = 20,
	MajorPuzzleMemory              = 21,
	MinorOccupation                = 22,
	FantasticResource              = 23,
	Portal                         = 24,
	FaerieRingDestination          = 25,
	FaerieRingOrigin               = 26,
	Merchant                       = 27,
	Tower                          = 28,
	DummyEncounter                 = 29,
	EncounterCount                 = 30,
	EEncounterType_MAX             = 31,
};

enum class EIIMGameplayState : uint8
{
	Unknown                        = 0,
	None                           = 1,
	FullGrown                      = 2,
	Stump                          = 3,
	EIIMGameplayState_MAX          = 4,
};

enum class ETrackedGameUserSetting : uint8
{
	GlobalIllumination             = 0,
	MyPrivateNameMode              = 1,
	OthersPrivateNameMode          = 2,
	ChatMode                       = 3,
	ETrackedGameUserSetting_MAX    = 4,
};

enum class EAlertnessLevelType : uint8
{
	Relaxed                        = 0,
	Alert                          = 1,
	Ready                          = 2,
	Aiming                         = 3,
	Blocking                       = 4,
	EAlertnessLevelType_MAX        = 5,
};

enum class ERALSMovementState : uint8
{
	None                           = 0,
	Grounded                       = 1,
	InAir                          = 2,
	Mantling                       = 3,
	Ragdoll                        = 4,
	Climbing                       = 5,
	Swimming                       = 6,
	Gliding                        = 7,
	ERALSMovementState_MAX         = 8,
};

enum class ETooltipSource : uint8
{
	Other                          = 0,
	ToolbarSlot                    = 1,
	LoadoutSlot                    = 2,
	BackpackSlot                   = 3,
	ETooltipSource_MAX             = 4,
};

enum class EEntrySortOrder : uint8
{
	Alphabetical                   = 0,
	ReverseAlphabetical            = 1,
	WeightIncreasing               = 2,
	WeightDecreasing               = 3,
	Grouped                        = 4,
	Newest                         = 5,
	Oldest                         = 6,
	LAST_ENTRY                     = 7,
	EEntrySortOrder_MAX            = 8,
};

enum class ECraftingScreenState : uint8
{
	Invalid                        = 0,
	Crafting                       = 1,
	Upgrading                      = 2,
	Infusing                       = 3,
	SpellCrafting                  = 4,
	Enchanting                     = 5,
	ECraftingScreenState_MAX       = 6,
};

enum class EEncounterState : uint8
{
	Spawned                        = 0,
	Initializing                   = 1,
	Active                         = 2,
	Cleaning                       = 3,
	Success                        = 4,
	Failed                         = 5,
	Hidden                         = 6,
	Error                          = 7,
	EEncounterState_MAX            = 8,
};

enum class EMuteAction : uint8
{
	Mute                           = 0,
	Unmute                         = 1,
	EMuteAction_MAX                = 2,
};

enum class EPartyActionFailure : uint8
{
	PartyFull                      = 0,
	AlreadyInParty                 = 1,
	EPartyActionFailure_MAX        = 2,
};

enum class ESkillReferenceType : uint8
{
	None                           = 0,
	Skill                          = 1,
	Recipe                         = 2,
	Structure                      = 3,
	Emote                          = 4,
	ESkillReferenceType_MAX        = 5,
};

enum class ETicketType : uint8
{
	Combat                         = 0,
	SwarmCombat                    = 1,
	Debuff                         = 2,
	Buff                           = 3,
	None                           = 4,
	ETicketType_MAX                = 5,
};

enum class EResourceType : uint8
{
	None                           = 0,
	Tree                           = 1,
	Stone                          = 2,
	Gatherable                     = 3,
	WoodBreakable                  = 4,
	Sickleable                     = 5,
	Pickable                       = 6,
	EResourceType_MAX              = 7,
};

enum class EIIMDepletionSource : uint8
{
	Unknown                        = 0,
	Tool                           = 1,
	Interaction                    = 2,
	EIIMDepletionSource_MAX        = 3,
};

enum class EShopTransactionResponse : uint8
{
	Denied                         = 0,
	Errored                        = 1,
	Approved                       = 2,
	EShopTransactionResponse_MAX   = 3,
};

enum class EStructureState : uint8
{
	INIT                           = 0,
	Placement                      = 1,
	SchematicPlaced                = 2,
	SchematicConfirmed             = 3,
	SchematicConstruction          = 4,
	SchematicComplete              = 5,
	MAX                            = 6,
};

enum class ESnapPointQuadrant : uint8
{
	Invalid                        = 0,
	Left                           = 1,
	Right                          = 2,
	Top                            = 3,
	Bottom                         = 4,
	TopLeft                        = 5,
	TopRight                       = 6,
	BottomLeft                     = 7,
	BottomRight                    = 8,
	MAX                            = 9,
};

enum class EStructureTraitEffectType : uint8
{
	Unknown                        = 0,
	Add                            = 1,
	Remove                         = 2,
	Modify                         = 3,
	EStructureTraitEffectType_MAX  = 4,
};

enum class E_UILoginState : uint8
{
	NotSet                         = 0,
	NotLoggedIn                    = 1,
	LoggingInStage1                = 2,
	LoggingInStage2                = 3,
	MustAcceptEula                 = 4,
	AcceptEulaSuccess              = 5,
	AcceptEulaFail                 = 6,
	GettingShards                  = 7,
	GetShardsSuccess               = 8,
	GetShardsFail                  = 9,
	FetchingProfiles               = 10,
	FetchProfilesSuccess           = 11,
	FetchProfilesFail              = 12,
	ProfileCreating                = 13,
	ProfileCreateSuccess           = 14,
	ProfileCreateFail              = 15,
	ProfileLoggingIn               = 16,
	ProfileLoginSuccess            = 17,
	ProfileLoginFail               = 18,
	FetchingDeployments            = 19,
	FetchDeploymentsSuccess        = 20,
	FetchDeploymentsFail           = 21,
	DeploymentBootstrapping        = 22,
	DeploymentBootstrapSuccess     = 23,
	DeploymentBootstrapFail        = 24,
	DeploymentAtCapacity           = 25,
	Max                            = 26,
};

enum class EMovementSpeed : uint8
{
	MSPEED_Walk                    = 0,
	MSPEED_Trot                    = 1,
	MSPEED_Run                     = 2,
	MSPEED_Sprint                  = 3,
	MSPEED_Climb                   = 4,
	MSPEED_Scramble                = 5,
	MSPEED_Wading                  = 6,
	MSPEED_Crouching               = 7,
	MSPEED_Swimming                = 8,
	MSPEED_MAX                     = 9,
};

enum class EReturnToNavMeshPolicy : uint8
{
	JustTeleportBack               = 0,
	TryToWalkBackButTeleportIfThatFails = 1,
	TryToWalkBack                  = 2,
	DoNothing                      = 3,
	EReturnToNavMeshPolicy_MAX     = 4,
};

enum class EStatusEffectDuration : uint8
{
	StatusEffectDuration_Timed     = 0,
	StatusEffectDuration_Infinite  = 1,
	StatusEffectDuration_MAX       = 2,
};

enum class EInfluenceRequirement : uint8
{
	Human                          = 0,
	Nature                         = 1,
	Creature                       = 2,
	Astrological                   = 3,
	TotalInfluence                 = 254,
	Max                            = 255,
};

enum class EStructureResourceCollectionType : uint8
{
	Water                          = 0,
	Hail                           = 1,
	EStructureResourceCollectionType_MAX = 2,
};

enum class EGrowthState : int32
{
	None                           = 0,
	SeedPlanted                    = 1,
	Growing                        = 2,
	Harvestable                    = 3,
	EGrowthState_MAX               = 4,
};

enum class ENWXGameplayTargetConfirmation : uint8
{
	Instant                        = 0,
	Custom                         = 1,
	CustomMulti                    = 2,
	ENWXGameplayTargetConfirmation_MAX = 3,
};

enum class E_ActionKeyBinding : uint8
{
	Default                        = 0,
	Combat                         = 1,
	Menu                           = 2,
	Gamepad_Only                   = 3,
	PC_Only                        = 4,
	E_MAX                          = 5,
};

enum class ERequirementContext : uint8
{
	Actor                          = 0,
	World                          = 1,
	ERequirementContext_MAX        = 2,
};

enum class ERecruitmentFailureReason : uint8
{
	ERFR_Undefined                 = 0,
	ERFR_InEncounter               = 1,
	ERFR_HasLeader                 = 2,
	ERFR_RecruiterLimitReached     = 3,
	ERFR_OutsideHomeRealm          = 4,
	ERFR_MAX                       = 5,
};

enum class ECreatureTier : uint8
{
	Tier1                          = 0,
	Tier2                          = 1,
	Tier3                          = 2,
	Count                          = 3,
	Invalid                        = 255,
	ECreatureTier_MAX              = 256,
};

enum class ENPCDamageActionTarget : uint8
{
	NONE                           = 0,
	Structure                      = 1,
	ENPCDamageActionTarget_MAX     = 2,
};

enum class EAttributeValueType : uint8
{
	Percent                        = 0,
	Multiplier                     = 1,
	Time                           = 2,
	Flat                           = 3,
	EAttributeValueType_MAX        = 4,
};

enum class EAudioFocusUpdateMode : uint8
{
	GetAllAndCache                 = 0,
	GetAll                         = 1,
	EAudioFocusUpdateMode_MAX      = 2,
};

enum class EOscillatorBasicShape : uint8
{
	Sine                           = 0,
	Saw                            = 1,
	Square                         = 2,
	Triangle                       = 3,
	EOscillatorBasicShape_MAX      = 4,
};

enum class EBuildModeAbilityType : uint8
{
	Copy                           = 0,
	Move                           = 1,
	Deconstruct                    = 2,
	EBuildModeAbilityType_MAX      = 3,
};

enum class EBuildModeAbilityState : uint8
{
	Start                          = 0,
	Confirm                        = 1,
	Cancel                         = 2,
	EBuildModeAbilityState_MAX     = 3,
};

enum class EBuildingFeedback : uint8
{
	Invalid                        = 0,
	Cancellation_AbilityFailure    = 1,
	Cancellation_BeingMovedByAnotherPlayer = 2,
	Cancellation_CouldNotDeconstructStructure = 3,
	Cancellation_CouldNotSpawnStructure = 4,
	Cancellation_CustomStructureLogic = 5,
	Cancellation_PawnHasChanged    = 6,
	Cancellation_POI               = 7,
	Cancellation_Encounter         = 8,
	Cancellation_Creature          = 9,
	Cancellation_RestrictedByState = 10,
	Cancellation_StartedAnotherAbility = 11,
	Cancellation_StructureIsImmovable = 12,
	Cancellation_StructureNotDiscovered = 13,
	Cancellation_UserInput         = 14,
	Cancellation_SupportingOtherObjects = 15,
	Count                          = 16,
	EBuildingFeedback_MAX          = 17,
};

enum class EBuildModeAction : uint8
{
	Default                        = 0,
	Place                          = 1,
	Cancel                         = 2,
	Delete                         = 3,
	Rotate                         = 4,
	RaiseLower                     = 5,
	Move                           = 6,
	Copy                           = 7,
	ShowVariants                   = 8,
	ToggleBuildMode                = 9,
	EBuildModeAction_MAX           = 10,
};

enum class EBuildModeContext : uint8
{
	Default                        = 0,
	BuildMode                      = 1,
	Placing                        = 2,
	NotInBuildMode                 = 3,
	EBuildModeContext_MAX          = 4,
};

enum class EBuildModeInput : uint8
{
	Default                        = 0,
	Primary                        = 1,
	Secondary                      = 2,
	Secondary1                     = 3,
	Secondary2                     = 4,
	Secondary3                     = 5,
	ToggleBuildMode                = 6,
	MouseWheel                     = 7,
	Secondary2AndMouseWheel        = 8,
	EBuildModeInput_MAX            = 9,
};

enum class ECavernModularLevelProxyType : uint8
{
	Socket                         = 0,
	Connector                      = 1,
	StartChamber                   = 2,
	RestChamber                    = 3,
	EndChamber                     = 4,
	Defense                        = 5,
	ReachPoint                     = 6,
	Arena                          = 7,
	OccupationBound                = 8,
	OccupationWildlife             = 9,
	PuzzleGlyph                    = 10,
	PuzzleMemory                   = 11,
	ECavernModularLevelProxyType_MAX = 12,
};

enum class ERangedWeaponReloadType : uint8
{
	OneBulletAtATime               = 0,
	ReloadFullyAfterMontage        = 1,
	ERangedWeaponReloadType_MAX    = 2,
};

enum class EAttributeThresholdType : uint8
{
	Value                          = 0,
	Percentage                     = 1,
	EAttributeThresholdType_MAX    = 2,
};

enum class ECraftingActorConstraintSelection : uint8
{
	Crafter                        = 0,
	Station                        = 1,
	ECraftingActorConstraintSelection_MAX = 2,
};

enum class ERefinementTimeModifer : uint8
{
	INCREASE                       = 0,
	DECREASE                       = 1,
	ERefinementTimeModifer_MAX     = 2,
};

enum class EBonesToEnablePhysicsOn : int32
{
	All                            = 0,
	HitBoneChain                   = 1,
	BonesToEnablePhysicsOn_MAX     = 2,
};

enum class EMaterialTypes : uint8
{
	Woven                          = 0,
	Silk                           = 1,
	SkinsWaterproof                = 2,
	SkinsAbsorbent                 = 3,
	Velvet                         = 4,
	Irridescent                    = 5,
	EMaterialTypes_MAX             = 6,
};

enum class EDeathState : uint8
{
	Started                        = 0,
	Downed                         = 1,
	Dead                           = 2,
	Respawning                     = 3,
	EDeathState_MAX                = 4,
};

enum class EFDiscoveryLocationState : uint8
{
	Invalid                        = 0,
	Hidden                         = 1,
	Discovered                     = 2,
	FDiscoveryLocationState_MAX    = 3,
};

enum class EEncounterTargetType : uint8
{
	Actor                          = 0,
	Global                         = 1,
	EEncounterTargetType_MAX       = 2,
};

enum class EEncounterFinishType : uint8
{
	Finished                       = 0,
	Failed                         = 1,
	EEncounterFinishType_MAX       = 2,
};

enum class EAutomaticSpawnerWaveDifficulty : uint8
{
	None                           = 0,
	VeryEasy                       = 1,
	Easy                           = 2,
	Medium                         = 3,
	Hard                           = 4,
	VeryHard                       = 5,
	EAutomaticSpawnerWaveDifficulty_MAX = 6,
};

enum class EWaveCompletionCondition : uint8
{
	OnAllCreaturesDefeated         = 0,
	OnCreatureAggression           = 1,
	OnMinimumCreatureCountReached  = 2,
	EWaveCompletionCondition_MAX   = 3,
};

enum class EEncounterComponentRelationship : int32
{
	Optional                       = 0,
	AtLeastOne                     = 1,
	OnlyOne                        = 2,
	EEncounterComponentRelationship_MAX = 3,
};

enum class EEncounterMusicState : uint8
{
	Dormant                        = 0,
	Active                         = 1,
	Completed                      = 2,
	Failed                         = 3,
	EEncounterMusicState_MAX       = 4,
};

enum class EEncounterPlaceableState : uint8
{
	Active                         = 0,
	Triggered                      = 1,
	Resetting                      = 2,
	Inactive                       = 3,
	EEncounterPlaceableState_MAX   = 4,
};

enum class EEncounterTrackProgress : uint8
{
	Hidden                         = 0,
	Locked                         = 1,
	Unlocked                       = 2,
	Active                         = 3,
	Completed                      = 4,
	EEncounterTrackProgress_MAX    = 5,
};

enum class EEncounterTrackType : uint8
{
	Initializing                   = 0,
	Defend                         = 1,
	Build                          = 2,
	Upgrade                        = 3,
	Mobile                         = 4,
	Eliminate                      = 5,
	Collect                        = 6,
	SpeakTo                        = 7,
	Reward                         = 8,
	Music                          = 9,
	Memory                         = 10,
	Glyph                          = 11,
	Timer                          = 12,
	Custom                         = 13,
	EEncounterTrackType_MAX        = 14,
};

enum class EFloorLocationType : uint8
{
	Top                            = 0,
	Middle                         = 1,
	Bottom                         = 2,
	EFloorLocationType_MAX         = 3,
};

enum class EFloorState : uint8
{
	ReadyToStart                   = 0,
	Running                        = 1,
	Completed                      = 2,
	EFloorState_MAX                = 3,
};

enum class EEncounterRewardType : uint8
{
	None                           = 0,
	Fae                            = 1,
	Calcularia                     = 2,
	Company                        = 3,
	Druids                         = 4,
	Explorers                      = 5,
	Hermetics                      = 6,
	Arrival_1                      = 7,
	Arrival_2                      = 8,
	Abeyance_Antiquarian           = 9,
	Abeyance_Astrolabe             = 10,
	Abeyance_Expedition            = 11,
	Abeyance_Gloom                 = 12,
	Abeyance_Herbarium             = 13,
	Abeyance_Hunt                  = 14,
	EEncounterRewardType_MAX       = 15,
};

enum class EEncounterRewardActor : uint8
{
	None                           = 0,
	HopeEcho                       = 1,
	EssenceBundle                  = 2,
	Favour                         = 3,
	EEncounterRewardActor_MAX      = 4,
};

enum class EEncounterRewardScale : uint8
{
	None                           = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	EEncounterRewardScale_MAX      = 4,
};

enum class EFaeCageState : uint8
{
	Uninitialized                  = 0,
	Idle                           = 1,
	Agitated                       = 2,
	Trapped                        = 3,
	Open                           = 4,
	EFaeCageState_MAX              = 5,
};

enum class EPedestalState : uint8
{
	Idle                           = 0,
	CombatStart                    = 1,
	EncounterCompleted             = 2,
	EPedestalState_MAX             = 3,
};

enum class EErrorIds : uint8
{
	StatusNotAnError               = 0,
	ReturnToMainMenu               = 1,
	ConnectToDeploymentFailed      = 2,
	SslHandshakeError              = 3,
	AuthenticationFailed           = 4,
	LoginFailed                    = 5,
	GetShardsFailed                = 6,
	CreateRealmFailed              = 7,
	ControllerDisconnect           = 8,
	ServerConnectionFailed         = 9,
	PlatformConnectionFailed       = 10,
	SessionFull                    = 11,
	SessionNonExistant             = 12,
	AlreadyInSession               = 13,
	ServerAddressError             = 14,
	UnknownSessionError            = 15,
	KickedFromAfkTimer             = 16,
	KickedFromServer               = 17,
	COUNT                          = 18,
	Unknown                        = 255,
	EErrorIds_MAX                  = 256,
};

enum class EEssenceDropType : uint8
{
	None                           = 0,
	ResourceNode                   = 1,
	Encounter                      = 2,
	HopeEcho                       = 3,
	Creature                       = 4,
	Codex                          = 5,
	EEssenceDropType_MAX           = 6,
};

enum class EParentFXType : uint8
{
	Birds                          = 0,
	EParentFXType_MAX              = 1,
};

enum class EBirdFXType : uint8
{
	Eagle                          = 0,
	Crow                           = 1,
	Nightingale                    = 2,
	EBirdFXType_MAX                = 3,
};

enum class EGamepadType : uint8
{
	PlayStation_DualSense          = 0,
	PlayStation_DualShock          = 1,
	Switch                         = 2,
	Xbox                           = 3,
	SteamDeck                      = 4,
	EGamepadType_MAX               = 5,
};

enum class EItemRewardType : uint8
{
	None                           = 0,
	ResourceNode                   = 1,
	Creature                       = 2,
	Encounter                      = 4,
	Fishing                        = 8,
	EItemRewardType_MAX            = 9,
};

enum class EQuantityChangeType : uint8
{
	Additive                       = 0,
	Multiplicative                 = 1,
	EQuantityChangeType_MAX        = 2,
};

enum class EIIMResourceType : uint8
{
	Ore                            = 0,
	Tree                           = 1,
	Foliage                        = 2,
	Stone                          = 3,
	Gem                            = 4,
	Fibre                          = 5,
	Flower                         = 6,
	Fruit                          = 7,
	Vegetable                      = 8,
	Mushroom                       = 9,
	Coral                          = 10,
	Ivy                            = 11,
	Deadfall                       = 12,
	Seaweed                        = 13,
	Any                            = 255,
	EIIMResourceType_MAX           = 256,
};

enum class EFallingState : uint8
{
	Waiting                        = 0,
	Falling_Vertical               = 1,
	Falling_Angular                = 2,
	Settling                       = 3,
	Settled                        = 4,
	CleaningUp                     = 5,
	EFallingState_MAX              = 6,
};

enum class EInputActionTypes : uint8
{
	Default                        = 0,
	PrimaryAction                  = 1,
	SecondaryAction                = 2,
	SecondaryAbility1              = 3,
	SecondaryAbility2              = 4,
	SecondaryAbility3              = 5,
	Brandish                       = 6,
	EInputActionTypes_MAX          = 7,
};

enum class EInteractionRangeStatus : uint8
{
	OutOfRange                     = 0,
	HighlightRange                 = 1,
	InteractionRange               = 2,
	SelfOrTooClose                 = 3,
	MAX                            = 4,
};

enum class EIIMPsithurismType : uint8
{
	None                           = 0,
	Soft                           = 1,
	Hard                           = 2,
	EIIMPsithurismType_MAX         = 3,
};

enum class EIIMInstanceDependency : uint8
{
	None                           = 0,
	GameplayResource               = 1,
	AmbienceData                   = 2,
	All                            = 255,
	EIIMInstanceDependency_MAX     = 256,
};

enum class EIIMProxyAlignment : uint8
{
	ConstantZUp                    = 0,
	TerrainNormal                  = 1,
	Relative                       = 2,
	EIIMProxyAlignment_MAX         = 3,
};

enum class EImageFormats : uint8
{
	JPG                            = 0,
	PNG                            = 1,
	BMP                            = 2,
	EImageFormats_MAX              = 3,
};

enum class EMapMarkerType : uint8
{
	Stamp                          = 0,
	Beacon                         = 1,
	System                         = 2,
	MapMarkerType_MAX              = 3,
};

enum class EMapTextureLayer : uint8
{
	HeightMap                      = 0,
	RoadsPoisAndWater              = 1,
	RocksTreesAndHills             = 2,
	EMapTextureLayer_MAX           = 3,
};

enum class EMusicPriority : uint8
{
	BiomeExplore                   = 0,
	Estate                         = 1,
	EncounterTension               = 2,
	POIExplore                     = 3,
	POISpecial                     = 4,
	Hope                           = 5,
	EncounterLow                   = 6,
	CombatTension                  = 7,
	Combat                         = 8,
	Encounter                      = 9,
	Special                        = 10,
	EMusicPriority_MAX             = 11,
};

enum class EMusicKey : uint8
{
	Atonal                         = 0,
	CFlat                          = 1,
	C                              = 2,
	CSharp                         = 3,
	DFlat                          = 4,
	D                              = 5,
	DSharp                         = 6,
	EFlat                          = 7,
	E                              = 8,
	ESharp                         = 9,
	FFlat                          = 10,
	F                              = 11,
	FSharp                         = 12,
	GFlat                          = 13,
	G                              = 14,
	GSharp                         = 15,
	AFlat                          = 16,
	A                              = 17,
	ASharp                         = 18,
	BFlat                          = 19,
	B                              = 20,
	BSharp                         = 21,
	EMusicKey_MAX                  = 22,
};

enum class EMusicMode : uint8
{
	Atonal                         = 0,
	Aeolian                        = 1,
	Dorian                         = 2,
	Major                          = 3,
	Minor                          = 4,
	Mixolydian                     = 5,
	Pentatonic                     = 6,
	Wholetone                      = 7,
	EMusicMode_MAX                 = 8,
};

enum class ENPCBlueprintHelperGetResult : uint8
{
	Success                        = 0,
	Failure                        = 1,
	ENPCBlueprintHelperGetResult_MAX = 2,
};

enum class EUIActorType : uint8
{
	None                           = 0,
	Creature                       = 1,
	Narrative                      = 2,
	Puck                           = 3,
	Generic                        = 4,
	EUIActorType_MAX               = 5,
};

enum class EUINameTruncationTiers : uint8
{
	NotTruncated                   = 0,
	PartiallyTruncated             = 1,
	Truncated                      = 2,
	Max                            = 3,
};

enum class ENWXWaitState : uint8
{
	None                           = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	ENWXWaitState_MAX              = 4,
};

enum class ENWXAnimState : uint8
{
	Idle                           = 0,
	Walk                           = 1,
	Trot                           = 2,
	Run                            = 3,
	ENWXAnimState_MAX              = 4,
};

enum class ENWXStartMovingType : uint8
{
	NoTurn                         = 0,
	Left45                         = 1,
	Right45                        = 2,
	Left90                         = 3,
	Right90                        = 4,
	Left135                        = 5,
	Right135                       = 6,
	Left180                        = 7,
	Right180                       = 8,
	ENWXStartMovingType_MAX        = 9,
};

enum class ENWXFourDirectionalTurnLimits : uint8
{
	NoTurnThreshold                = 0,
	Turn180Threshold               = 1,
	ENWXFourDirectionalTurnLimits_MAX = 2,
};

enum class ENWXEightDirectionalTurnLimits : uint8
{
	NoTurnThreshold                = 0,
	Turn45Threshold                = 1,
	Turn90Threshold                = 2,
	Turn135Threshold               = 3,
	ENWXEightDirectionalTurnLimits_MAX = 4,
};

enum class ELinkedLoiterType : uint8
{
	None                           = 0,
	Day                            = 1,
	Night                          = 2,
	ELinkedLoiterType_MAX          = 3,
};

enum class EHitReactHealthType : uint8
{
	HRHT_DeathReaction             = 0,
	HRHT_HitReaction               = 1,
	HRHT_DeathOrHit                = 2,
	HRHT_MAX                       = 3,
};

enum class EHitReactType : uint8
{
	HRT_None                       = 0,
	HRT_Additive                   = 1,
	HRT_Stagger                    = 2,
	HRT_KnockDown                  = 3,
	HRT_Explosive                  = 4,
	HRT_MAX                        = 5,
};

enum class ECreatureType : uint8
{
	Wildlife                       = 0,
	Critter                        = 1,
	Pet                            = 2,
	Villager                       = 3,
	Encounter                      = 4,
	Spawner                        = 5,
	Debug                          = 6,
	Unknown                        = 7,
	ECreatureType_MAX              = 8,
};

enum class ESpawnerCreatureType : uint8
{
	Critter                        = 0,
	Herbivore                      = 1,
	Omnivore                       = 2,
	SoloPredator                   = 3,
	PackPredator                   = 4,
	Magical                        = 5,
	Monster                        = 6,
	Apex                           = 7,
	Bound                          = 8,
	ESpawnerCreatureType_MAX       = 9,
};

enum class ECreatureHostilityType : uint8
{
	CHT_Friend                     = 0,
	CHT_Enemy                      = 1,
	CHT_MAX                        = 2,
};

enum class EHitReactVelocity : uint8
{
	HRL_Front                      = 0,
	HRL_Back                       = 1,
	HRL_Left                       = 2,
	HRL_Right                      = 3,
	HRL_Upward                     = 4,
	HRL_Downward                   = 5,
	HRL_Any                        = 6,
	HRL_MAX                        = 7,
};

enum class EAISignificance : uint8
{
	VeryLow                        = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EAISignificance_MAX            = 4,
};

enum class ETraversalSection : uint8
{
	Up                             = 0,
	Over                           = 1,
	Down                           = 2,
	Out                            = 3,
	ETraversalSection_MAX          = 4,
};

enum class EBlackboardGetResult : uint8
{
	Success                        = 0,
	Failure                        = 1,
	EBlackboardGetResult_MAX       = 2,
};

enum class EBBVar : uint8
{
	Target                         = 0,
	HidingSpot                     = 1,
	SelfActor                      = 2,
	MaxSpeedWalk                   = 3,
	MaxSpeedRun                    = 4,
	bHasTarget                     = 5,
	bIsLeader                      = 6,
	TargetLocation                 = 7,
	MaxSpeedWalkFast               = 8,
	bIsAIEnabled                   = 9,
	bIsALeaderClass                = 10,
	MontageLength                  = 11,
	bOffPathNetwork                = 12,
	bDisableBlendspace             = 13,
	AttackStation                  = 14,
	ActionStation                  = 15,
	Employer                       = 16,
	OrderTarget                    = 17,
	IsBored                        = 18,
	MoveLocation                   = 19,
	FollowTarget                   = 20,
	bDeerpocalypseActive           = 21,
	MeleeCombatDistance            = 22,
	RunningMeleeAttackDistance     = 23,
	RangedCombatDistance           = 24,
	SoilPlot                       = 25,
	CreatureRunDistance            = 26,
	CreatureDispersionRadius       = 27,
	RandomWanderRange              = 28,
	MeleeAttackCooldown            = 29,
	RangedAttackCooldown           = 30,
	Driver                         = 31,
	LoiterTime                     = 32,
	EvadeChance                    = 33,
	AngleFactor                    = 34,
	AIAction                       = 35,
	ResourceCache                  = 36,
	WanderCooldown                 = 37,
	WanderLocation                 = 38,
	Spawner                        = 39,
	LeashLocation                  = 40,
	EBBVar_MAX                     = 41,
};

enum class E_LocalCardinalDirection2D : uint8
{
	Left                           = 0,
	Right                          = 1,
	Forward                        = 2,
	Back                           = 3,
	None                           = 4,
	E_MAX                          = 5,
};

enum class ENWXLogLevel : uint8
{
	Log                            = 0,
	Warning                        = 1,
	Error                          = 2,
	Verbose                        = 3,
	ENWXLogLevel_MAX               = 4,
};

enum class ENWXDiscoveryPresentationState : uint8
{
	Hidden                         = 0,
	Locked                         = 1,
	Revealed                       = 2,
	Discovered                     = 3,
	ENWXDiscoveryPresentationState_MAX = 4,
};

enum class EHandType : uint8
{
	MainHand                       = 0,
	OffHand                        = 1,
	EHandType_MAX                  = 2,
};

enum class EManagerType : uint8
{
	Replicating                    = 0,
	NonReplicating                 = 1,
	EManagerType_MAX               = 2,
};

enum class EGameplayEffectPersistedTimeType : uint8
{
	PauseWhileAway                 = 0,
	RealTime                       = 1,
	EGameplayEffectPersistedTimeType_MAX = 2,
};

enum class EGameplayImpact : uint8
{
	Neutral                        = 0,
	Positive                       = 1,
	Negative                       = 2,
	EGameplayImpact_MAX            = 3,
};

enum class EUpscalingTechnique : uint8
{
	None                           = 0,
	TSR                            = 1,
	DLSS                           = 2,
	XeSS                           = 3,
	FSR3                           = 4,
	EUpscalingTechnique_MAX        = 5,
};

enum class EUpscaleQuality : uint8
{
	UltraPerformance               = 0,
	Performance                    = 1,
	Balanced                       = 2,
	Quality                        = 3,
	UltraQuality                   = 4,
	EUpscaleQuality_MAX            = 5,
};

enum class EPartyInvitesMode : uint8
{
	Public                         = 0,
	Private                        = 1,
	EPartyInvitesMode_MAX          = 2,
};

enum class EPrivateNamesMode : uint8
{
	Show                           = 0,
	Hide                           = 1,
	EPrivateNamesMode_MAX          = 2,
};

enum class EChatMode : uint8
{
	Hide                           = 0,
	Show                           = 1,
	Auto                           = 2,
	EChatMode_MAX                  = 3,
};

enum class ESplittingUnits : uint8
{
	Weight                         = 0,
	BurnTime                       = 1,
	Extraction                     = 2,
	ESplittingUnits_MAX            = 3,
};

enum class ELogCategory : uint8
{
	LogGeneral                     = 0,
	LogAudio                       = 1,
	LogBuilding                    = 2,
	LogCharacterDensityAnalysis    = 3,
	LogCodex                       = 4,
	LogCombatCreature              = 5,
	LogCombatPlayer                = 6,
	LogCondition                   = 7,
	LogCrafting                    = 8,
	LogCraftingMenu                = 9,
	LogCreature                    = 10,
	LogCreatureManager             = 11,
	LogCustomization               = 12,
	LogDamage                      = 13,
	LogDeath                       = 14,
	LogDebugTools                  = 15,
	LogDialogue                    = 16,
	LogDiscovery                   = 17,
	LogEmitters                    = 18,
	LogEncounter                   = 19,
	LogEQS                         = 20,
	LogFarming                     = 21,
	LogFunctionalTest              = 22,
	LogGAS                         = 23,
	LogGesture                     = 24,
	LogGuideBook                   = 25,
	LogHarvestableGeometry         = 26,
	LogImpact                      = 27,
	LogInput                       = 28,
	LogInteraction                 = 29,
	LogInventory                   = 30,
	LogItems                       = 31,
	LogLoading                     = 32,
	LogMap                         = 33,
	LogMenuData                    = 34,
	LogNWXAnimation                = 35,
	LogNWXHUDBase                  = 36,
	LogNWXCommonHUDBase            = 37,
	LogOwnership                   = 38,
	LogPathfinding                 = 39,
	LogPlaceable                   = 40,
	LogPlayer                      = 41,
	LogPOI                         = 42,
	LogPortals                     = 43,
	LogProjectiles                 = 44,
	LogQuests                      = 45,
	LogRealmTime                   = 46,
	LogResources                   = 47,
	LogReward                      = 48,
	LogScript                      = 49,
	LogShops                       = 50,
	LogSimulation                  = 51,
	LogSocial                      = 52,
	LogStartup                     = 53,
	LogState                       = 54,
	LogStatusEffect                = 55,
	LogAccumulation                = 56,
	LogStructures                  = 57,
	LogTelemetry                   = 58,
	LogTimeOfDay                   = 59,
	LogTrace                       = 60,
	LogTraversal                   = 61,
	LogTutorials                   = 62,
	LogUI                          = 63,
	LogUserSettings                = 64,
	LogWeather                     = 65,
	LogWorldPersistence            = 66,
	Count                          = 67,
	ELogCategory_MAX               = 68,
};

enum class EEntryProgressionStates : uint8
{
	Invalid                        = 0,
	Hidden                         = 1,
	Locked                         = 2,
	Revealed                       = 3,
	Known                          = 4,
	EEntryProgressionStates_MAX    = 5,
};

enum class EEntryObservedStates : uint8
{
	Invalid                        = 0,
	Observable                     = 1,
	Observed                       = 2,
	EEntryObservedStates_MAX       = 3,
};

enum class EMenuDataFilterStates : uint8
{
	Invalid                        = 0,
	InActive                       = 1,
	Active                         = 2,
	EMenuDataFilterStates_MAX      = 3,
};

enum class ENavLinkType : uint8
{
	Jump                           = 0,
	Unknown                        = 1,
	ENavLinkType_MAX               = 2,
};

enum class EPlayerStartContext : uint8
{
	RespawnPoint                   = 0,
	RespitePoint                   = 1,
	StartSpot                      = 2,
	EPlayerStartContext_MAX        = 3,
};

enum class ECameraType : uint8
{
	FirstPerson                    = 0,
	ThirdPerson                    = 1,
	UIThirdPerson                  = 2,
	Cinematic                      = 3,
	ECameraType_MAX                = 4,
};

enum class EServiceRole : uint8
{
	SR_None                        = 0,
	SR_PLR                         = 1,
	SR_CSR                         = 2,
	SR_MAX                         = 3,
};

enum class EInputContext : uint8
{
	Default                        = 0,
	Building                       = 1,
	EInputContext_MAX              = 2,
};

enum class ELegLocationType : uint8
{
	Bind                           = 0,
	Old                            = 1,
	Current                        = 2,
	Future                         = 3,
	ScaledFuture                   = 4,
	ScaledOld                      = 5,
	ELegLocationType_MAX           = 6,
};

enum class EAnalogStick : uint8
{
	GamepadLeft                    = 0,
	GamepadRight                   = 1,
	EAnalogStick_MAX               = 2,
};

enum class EClassRepNodeMapping : uint8
{
	NotYetRouted                   = 0,
	ExplicitelyNotRouted           = 1,
	RelevantAllConnections         = 2,
	RelevantSingleConnection       = 3,
	StreamingLevelProxyActor       = 4,
	Spatialize_Static              = 5,
	Spatialize_Dynamic             = 6,
	Spatialize_Dormancy            = 7,
	EClassRepNodeMapping_MAX       = 8,
};

enum class ESquadBlackboardKey : uint8
{
	FocusTarget                    = 0,
	SquadDispersionRadius          = 1,
	AmbientWanderRadius            = 2,
	AmbientWanderCooldown          = 3,
	LastAmbientWanderTime          = 4,
	DenTetherRange                 = 5,
	SquadRunDistance               = 6,
	FleeCooldown                   = 7,
	MaxTimeAtTarget                = 8,
	Leader                         = 9,
	AttackTokenOwner               = 10,
	SquadTarget                    = 11,
	SquadTargetLocation            = 12,
	Last                           = 13,
	ESquadBlackboardKey_MAX        = 14,
};

enum class EAnalyticTrackingConfig : uint8
{
	Client                         = 0,
	Server                         = 1,
	Editor                         = 2,
	EAnalyticTrackingConfig_MAX    = 3,
};

enum class EProxyStructureState : uint8
{
	Invalid                        = 0,
	Placed                         = 1,
	Confirmed                      = 2,
	Complete                       = 3,
	MAX                            = 4,
};

enum class ELoginPlatform : uint8
{
	Testing                        = 0,
	Steam                          = 1,
	Epic                           = 2,
	Xbox                           = 3,
	PS5                            = 4,
	ELoginPlatform_MAX             = 5,
};

enum class ELedgeType : uint8
{
	LT_None                        = 0,
	LT_Vault                       = 1,
	LT_Vault_Stretched             = 2,
	LT_Vault_Blocked               = 3,
	LT_Mantle_100                  = 4,
	LT_Mantle_200                  = 5,
	LT_Climb_EnterGround           = 6,
	LT_Climb_EnterFalling          = 7,
	LT_Climb_ExitUp                = 8,
	LT_Climb_ExitDown              = 9,
	LT_MAX                         = 10,
};

enum class ENWXWidgetTelemetryType : uint8
{
	General                        = 0,
	Hover                          = 1,
	ENWXWidgetTelemetryType_MAX    = 2,
};

enum class EInputMode : uint8
{
	UI                             = 0,
	GameAndUI                      = 1,
	Game                           = 2,
	EInputMode_MAX                 = 3,
};

enum class ENWXMovementMode : uint8
{
	MM_Climbing                    = 0,
	MM_Max                         = 1,
};

enum class EPlayerInventoryContainerType : uint8
{
	None                           = 0,
	Backpack                       = 1,
	EssencePouch                   = 2,
	RealmCardDeck                  = 3,
	PepysBox                       = 4,
	COUNT                          = 5,
	INVALID                        = 255,
	EPlayerInventoryContainerType_MAX = 256,
};

enum class ENWXPlayerReportAction : uint8
{
	Positive_Add_Resource_To_Others_Structure = 0,
	Positive_Add_Resource_To_Others_MAX = 1,
};

enum class ECharacterDissolveType : uint8
{
	None                           = 0,
	Death                          = 1,
	Portal                         = 2,
	Spawn                          = 3,
	Teleport                       = 4,
	NatureTeleport                 = 5,
	ECharacterDissolveType_MAX     = 6,
};

enum class EPOIPlugSelectionQualifier : uint8
{
	AtMost                         = 0,
	AtLeast                        = 1,
	Exactly                        = 2,
	EPOIPlugSelectionQualifier_MAX = 3,
};

enum class EPOIPlugContext : uint8
{
	Realm                          = 0,
	Cluster                        = 1,
	POI                            = 2,
	Count                          = 3,
	EPOIPlugContext_MAX            = 4,
};

enum class EPOIType : uint8
{
	CanonicalStartPortal           = 0,
	TemporalStartPortal            = 1,
	DormantPortal                  = 2,
	Structure                      = 3,
	CaveDen                        = 4,
	ForestDen                      = 5,
	HerdDen                        = 6,
	WaterDen                       = 7,
	ApexDen                        = 8,
	HarvestablePlant               = 9,
	Vista                          = 10,
	Waterfall                      = 11,
	Cave                           = 12,
	Bunker                         = 13,
	VaultChamber                   = 14,
	DataOnly                       = 15,
	Max                            = 16,
};

enum class EPlugEnvironment : uint8
{
	Surface                        = 0,
	Subterranean                   = 1,
	Vault                          = 2,
	EPlugEnvironment_MAX           = 3,
};

enum class EPlugPalette : uint8
{
	Unknown                        = 0,
	Human                          = 1,
	Fae                            = 2,
	EPlugPalette_MAX               = 3,
};

enum class EFaction : uint8
{
	Unknown                        = 0,
	None                           = 1,
	Calcularia                     = 2,
	Company                        = 3,
	Druids                         = 4,
	Explorers                      = 5,
	Hermetics                      = 6,
	EFaction_MAX                   = 7,
};

enum class EPOIRequirement : uint8
{
	RequiredTrue                   = 0,
	RequiredFalse                  = 1,
	RequiredAny                    = 2,
	EPOIRequirement_MAX            = 3,
};

enum class EPOIThemeType : uint8
{
	Strong                         = 0,
	Weak                           = 1,
	Null                           = 2,
	EPOIThemeType_MAX              = 3,
};

enum class ESocketShape : uint8
{
	Round                          = 0,
	Square                         = 1,
	Triangle                       = 2,
	ESocketShape_MAX               = 3,
};

enum class EPOIStreamingLevelDefinitionProxySource : uint8
{
	SoftLevelPath                  = 0,
	StreamingLevelDefinition       = 1,
	EPOIStreamingLevelDefinitionProxySource_MAX = 2,
};

enum class EDistributionStageType : uint8
{
	Invalid                        = 0,
	Encounter                      = 1,
	Filter                         = 2,
	EDistributionStageType_MAX     = 3,
};

enum class EPOISimulatorRunMode : uint8
{
	OnlyRunMatrix                  = 0,
	OnlyRunLocals                  = 1,
	EPOISimulatorRunMode_MAX       = 2,
};

enum class EPuckMomentTriggerType : uint8
{
	Requested                      = 0,
	RequirementCheck               = 1,
	EPuckMomentTriggerType_MAX     = 2,
};

enum class EPuckMomentCompletionType : uint8
{
	Conversed                      = 0,
	RequirementCheck               = 1,
	EPuckMomentCompletionType_MAX  = 2,
};

enum class EPuckMomentState : uint8
{
	PendingQueue                   = 0,
	PendingSpawn                   = 1,
	PendingInteraction             = 2,
	PendingCompletion              = 3,
	Complete                       = 4,
	EPuckMomentState_MAX           = 5,
};

enum class EQuestCompleteTelemetryBehaviour : uint8
{
	EmitTelemetry                  = 0,
	Silent                         = 1,
	EQuestCompleteTelemetryBehaviour_MAX = 2,
};

enum class EQuestCompleteRewardBehaviour : uint8
{
	UseAutoCompleteBehaviour       = 0,
	GiveAllRewards                 = 1,
	EQuestCompleteRewardBehaviour_MAX = 2,
};

enum class ERadialButtonType : uint8
{
	Text                           = 0,
	IconAndText                    = 1,
	Custom_Ammo                    = 2,
	ERadialButtonType_MAX          = 3,
};

enum class EClothHidingRegions_Torso : uint8
{
	NONE                           = 0,
	HemRear                        = 1,
	HemFront                       = 2,
	Sleeves                        = 4,
	FrontChest                     = 8,
	BackChest                      = 16,
	Collar                         = 32,
	EClothHidingRegions_MAX        = 33,
};

enum class EClothHidingRegions_Legs : uint8
{
	NONE                           = 0,
	HipsRear                       = 1,
	HipsFront                      = 2,
	Thighs                         = 4,
	Calves                         = 8,
	Ankles                         = 16,
	Sockbottoms                    = 32,
	EClothHidingRegions_MAX        = 33,
};

enum class EClothHidingRegions_Gloves : uint8
{
	NONE                           = 0,
	Biceps                         = 1,
	Elbows                         = 2,
	Forearms                       = 4,
	Wrists                         = 8,
	Hand2                          = 16,
	Hand1                          = 32,
	EClothHidingRegions_MAX        = 33,
};

enum class ESkinHidingRegions_UpperBody : uint8
{
	NONE                           = 0,
	Chest                          = 1,
	Shoulders                      = 2,
	Arms                           = 4,
	WristsHigh                     = 8,
	WristsMid                      = 16,
	WristsLow                      = 32,
	ESkinHidingRegions_MAX         = 33,
};

enum class ESkinHidingRegions_LowerBody : uint8
{
	NONE                           = 0,
	LowerChest                     = 1,
	Waist                          = 2,
	Hips                           = 4,
	Legs                           = 8,
	Ankles                         = 16,
	Feet                           = 32,
	ESkinHidingRegions_MAX         = 33,
};

enum class EDistributionValue : uint8
{
	Correct                        = 0,
	Low                            = 1,
	High                           = 2,
	EDistributionValue_MAX         = 3,
};

enum class EResourceRarity : uint8
{
	Common                         = 0,
	Uncommon                       = 1,
	Rare                           = 2,
	SuperRare                      = 3,
	UltraRare                      = 4,
	CardBucket1                    = 5,
	CardBucket2                    = 6,
	CardBucket3                    = 7,
	EResourceRarity_MAX            = 8,
};

enum class EResourceRarityDistribution : uint8
{
	NoCardBucket                   = 0,
	OneCardBucket                  = 1,
	TwoCardBucket                  = 2,
	ThreeCardBucket                = 3,
	EResourceRarityDistribution_MAX = 4,
};

enum class EPOIRuleset : uint8
{
	RandomFit                      = 0,
	PriorityThenRandomFit          = 1,
	Baked                          = 2,
	Custom                         = 3,
	Empty                          = 4,
	EPOIRuleset_MAX                = 5,
};

enum class EPlugRuleset : uint8
{
	Default                        = 0,
	PredicateConstrained           = 1,
	Custom                         = 2,
	Empty                          = 3,
	EPlugRuleset_MAX               = 4,
};

enum class ETransactableType : uint8
{
	Unknown                        = 0,
	Item                           = 1,
	Schematic                      = 2,
	CraftingRecipe                 = 3,
	Emote                          = 4,
	ETransactableType_MAX          = 5,
};

enum class EShopOfferPurchasableState : uint8
{
	ReadOnly                       = 0,
	InventoryFull                  = 1,
	CanPurchase                    = 2,
	AlreadyOwned                   = 3,
	AlreadyPurchased               = 4,
	NotEnoughFund                  = 5,
	EShopOfferPurchasableState_MAX = 6,
};

enum class EStatusEffectPersistedTimeType : uint8
{
	PauseWhileAway                 = 0,
	RealTime                       = 1,
	EStatusEffectPersistedTimeType_MAX = 2,
};

enum class EScreenEffectTargetCamera : uint8
{
	None                           = 0,
	FirstPerson                    = 1,
	ThirdPerson                    = 2,
	UIThirdPerson                  = 4,
	CinematicThirdPerson           = 8,
	EScreenEffectTargetCamera_MAX  = 9,
};

enum class EPackedChamberSocketType : uint8
{
	Unused                         = 0,
	Entrance                       = 1,
	Exit                           = 2,
	EPackedChamberSocketType_MAX   = 3,
};

enum class EProxySnapResult : uint8
{
	Success                        = 0,
	Failure                        = 1,
	EProxySnapResult_MAX           = 2,
};

enum class EPermissionOptions : uint8
{
	None                           = 0,
	Owner                          = 1,
	NPC                            = 2,
	Party                          = 4,
	EPermissionOptions_MAX         = 5,
};

enum class EDeconstructionResourceReturn : uint8
{
	All                            = 0,
	Partial                        = 1,
	None                           = 2,
	EDeconstructionResourceReturn_MAX = 3,
};

enum class EExtinguishReason : uint8
{
	UserInteraction                = 0,
	Rain                           = 1,
	FuelExhausted                  = 2,
	EExtinguishReason_MAX          = 3,
};

enum class EIgniteBlockedReason : uint8
{
	Unknown                        = 0,
	AlreadyIgnited                 = 1,
	Rain                           = 2,
	EIgniteBlockedReason_MAX       = 3,
};

enum class EStructureCraftingNiagaraType : uint8
{
	StartCraft                     = 0,
	EndCraft                       = 1,
	CollectItem                    = 2,
	EStructureCraftingNiagaraType_MAX = 3,
};

enum class EStructureFXActivationTime : uint8
{
	Never                          = 0,
	AlwaysActive                   = 1,
	OnComplete                     = 2,
	OnDestroy                      = 3,
	OnIgnite                       = 4,
	DuringFire                     = 5,
	OnExtinguish                   = 6,
	OnOpenDoor                     = 7,
	OnCloseDoor                    = 8,
	DuringCrafting                 = 9,
	PauseCrafting                  = 10,
	ResumeCrafting                 = 11,
	StartCrafting                  = 12,
	EndCrafting                    = 13,
	AudioCallback                  = 14,
	ContainerOpened                = 15,
	ContainerClosed                = 16,
	DuringContainerOpened          = 17,
	OnMove                         = 18,
	EStructureFXActivationTime_MAX = 19,
};

enum class EStructureInteractionType : uint8
{
	Any                            = 0,
	Fuel                           = 1,
	Craft                          = 2,
	EStructureInteractionType_MAX  = 3,
};

enum class EFStructureNiagaraVariableType : uint16
{
	Invalid                        = 0,
	Class                          = 1,
	Struct                         = 2,
	Enum                           = 3,
	FStructureNiagaraVariableType_MAX = 4,
};

enum class EPlacementFeedbackType : uint8
{
	Invalid                        = 0,
	IntersectingObjects            = 1,
	MissingSnapPoint               = 2,
	BadAngle                       = 3,
	NoSupport                      = 4,
	OverlappingActor               = 5,
	InvalidTransform               = 6,
	StructureActorBudget           = 7,
	PieceBudget                    = 8,
	MoveStructure                  = 9,
	Schematic                      = 10,
	Confirmed                      = 11,
	Initialize                     = 12,
	Selection                      = 13,
	Valid                          = 14,
	Count                          = 15,
	EPlacementFeedbackType_MAX     = 16,
};

enum class ECreateStructureAssetResult : uint8
{
	Success                        = 0,
	Failure                        = 1,
	ECreateStructureAssetResult_MAX = 2,
};

enum class EStructureSupportType : uint8
{
	Invalid                        = 0,
	Ground                         = 1,
	Snap                           = 2,
	Adjacency                      = 4,
	EStructureSupportType_MAX      = 5,
};

enum class EStructureTraitAuraEffectType : uint8
{
	Enter                          = 0,
	Leave                          = 1,
	EStructureTraitAuraEffectType_MAX = 2,
};

enum class EStructureType : uint8
{
	Unknown                        = 0,
	Foundation                     = 1,
	Wall                           = 2,
	Roof                           = 3,
	Pillar                         = 4,
	Stairs                         = 5,
	Railing                        = 6,
	DoorFrame                      = 7,
	Door                           = 8,
	Decoration                     = 9,
	Balcony                        = 10,
	Awning                         = 11,
	Floor                          = 12,
	EStructureType_MAX             = 13,
};

enum class EStructureOriginatorType : uint8
{
	Invalid                        = 0,
	Player                         = 1,
	PointOfInterest                = 2,
	Encounter                      = 3,
	Creature                       = 4,
	MAX                            = 5,
};

enum class EStructureHealthMode : uint8
{
	Invalid                        = 0,
	Default                        = 1,
	Invulnerable                   = 2,
	EStructureHealthMode_MAX       = 3,
};

enum class EStructureWeatherType : uint8
{
	None                           = 0,
	WetFromRain                    = 1,
	PeltedFromHail                 = 2,
	EStructureWeatherType_MAX      = 3,
};

enum class ESnapType : uint8
{
	Invalid                        = 0,
	Foundation                     = 1,
	Wall                           = 2,
	Roof                           = 3,
	Pillar                         = 4,
	FoundationStairs               = 5,
	Fence                          = 6,
	SoilPlot                       = 7,
	Plaque                         = 8,
	RoofConcave                    = 9,
	RoofAngle                      = 10,
	RoofConvex                     = 11,
	RoofFiller                     = 12,
	RoofFlat                       = 13,
	Awning                         = 14,
	Decoration                     = 15,
	Door                           = 16,
	RoofPeak                       = 17,
	Floor                          = 18,
	Count                          = 19,
	ESnapType_MAX                  = 20,
};

enum class ETechniqueFinishCode : uint8
{
	Succeeded                      = 0,
	SucceededButMissed             = 1,
	DidNotExecute                  = 2,
	ETechniqueFinishCode_MAX       = 3,
};

enum class ETraceReason : uint8
{
	Manual                         = 0,
	Automatic                      = 1,
	External                       = 2,
	ETraceReason_MAX               = 3,
};

enum class EVisibilityGate : uint8
{
	Or                             = 0,
	And                            = 1,
	EVisibilityGate_MAX            = 2,
};

enum class EPrimitiveScalingMode : uint8
{
	None                           = 0,
	Box                            = 1,
	Cylinder                       = 2,
	EPrimitiveScalingMode_MAX      = 3,
};

enum class EAudioWaterBodyType : uint8
{
	Ocean                          = 0,
	Lake                           = 1,
	River                          = 2,
	Island                         = 3,
	Count                          = 4,
	EAudioWaterBodyType_MAX        = 5,
};

enum class EDynamicSpawnCategory : uint8
{
	Day                            = 0,
	Night                          = 1,
	Ambient                        = 2,
	Count                          = 3,
	EDynamicSpawnCategory_MAX      = 4,
};

enum class ELocalMultiplayerInteractionMode : uint8
{
	PrimaryOnly                    = 0,
	SingleToggle                   = 1,
	Simultaneous                   = 2,
	ELocalMultiplayerInteractionMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.DamageDebuggerUpdate
struct FDamageDebuggerUpdate
{
public:
	float                                        DamageAmount;                                      // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A09F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Source;                                            // 0x8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.RealmInfluenceValues
struct FRealmInfluenceValues
{
public:
	int32                                        HumanInfluence;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NatureInfluence;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CreatureInfluence;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AstrologicalInfluence;                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.RealmSettings
struct FRealmSettings
{
public:
	enum class EBiomeID                          BiomeId;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BasePowerLevel;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRealmInfluenceValues                 Influences;                                        // 0x8(0x10)(Edit, BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RealmTags;                                         // 0x18(0x20)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	enum class ERealmDifficulty                  RealmDifficulty;                                   // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0A4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x90 - 0x48)
// ScriptStruct NWX.RealmCardDefinitionReference
struct FRealmCardDefinitionReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x48(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AssetUID;                                          // 0x68(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A0A8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERealmCardType                    RealmCardType;                                     // 0x80(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A0A9[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.RealmStructureCountContext
struct FRealmStructureCountContext
{
public:
	uint8                                        Pad_A0AB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.VislogRecordingConfig
struct FVislogRecordingConfig
{
public:
	bool                                         AutoRecord;                                        // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitalDelay;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayBetweenCaptures;                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CaptureDuration;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          WhiteListedCategories;                             // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0AF[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.BPAnalyticsEventAttr
struct FBPAnalyticsEventAttr
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct NWX.NWXNPCDesireData
struct FNWXNPCDesireData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ENWXNPCDesireType                 Type;                                              // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          TypeTag;                                           // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TagCount;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   TypedRowHandle;                                    // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  IncompleteTitle;                                   // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  IncompleteDescription;                             // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  CompletedTitle;                                    // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  CompletedDescription;                              // 0x88(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        IncompleteValue;                                   // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompletedValue;                                    // 0xA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0xAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRemaining;                                     // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.DiscoverableData
struct FDiscoverableData
{
public:
	struct FGuid                                 DiscoverableId;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DataRow;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.EffectedTraitComponentsChangedContext
struct FEffectedTraitComponentsChangedContext
{
public:
	class UStructureTraitEmissionComponent*      EmissionComponent;                                 // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStructureTraitComponent*>      AddedTraitComponents;                              // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UStructureTraitComponent*>      RemovedTraitComponents;                            // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NWX.EncounterInstance
struct FEncounterInstance
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEncounterDataAsset*                   EncounterDataAsset;                                // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AController*>                   PlayersWhoHaveDiscoveredEncounter;                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class AEncounterBase*                        Encounter;                                         // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AEncounterConfig*                      Target;                                            // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TrackedActor;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterStatus                  EncounterStatus;                                   // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B4[0x57];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA4 (0xB0 - 0xC)
// ScriptStruct NWX.EncounterDynamicData
struct FEncounterDynamicData : public FFastArraySerializerItem
{
public:
	struct FGuid                                 EncounterID;                                       // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterStatus                  EncounterStatus;                                   // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterType                    EncounterType;                                     // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncounterInstance                    EncounterInstance;                                 // 0x20(0x90)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct NWX.MapPinData
struct FMapPinData
{
public:
	struct FGuid                                 MapPinId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DataRow;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAlwaysVisible;                                  // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        VisiblePlayerIds_ServerOnly;                       // 0x58(0x10)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	class AActor*                                OwningActor;                                       // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OwningPlayerId;                                    // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OwningPlayerName;                                  // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x90(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Note;                                              // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.AccumulationHandle
struct FAccumulationHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.DamageEffectContextData
struct FDamageEffectContextData
{
public:
	class AActor*                                DamageInstigator;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DamageTagContainer;                                // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x70 - 0x48)
// ScriptStruct NWX.CraftingRecipeReference
struct FCraftingRecipeReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x48(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0BA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.ErrorMessageConfiguration
struct FErrorMessageConfiguration
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FString                                DevID;                                             // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.ErrorMessageData
struct FErrorMessageData
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FErrorMessageConfiguration            Configuration;                                     // 0x8(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                OptionalData;                                      // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.NWXPartyMember
struct FNWXPartyMember
{
public:
	class ANWXPlayerState*                       PlayerState;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileId;                                         // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrivateName;                                       // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeploymentName;                                    // 0x38(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeKicked;                                      // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPartyLeader;                                    // 0x49(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0BC[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.CachedActorData
struct FCachedActorData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClassName;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.PartyInvite
struct FPartyInvite
{
public:
	class FString                                PartyId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoomName;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceUserId;                                      // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceDisplayName;                                 // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartyTypeId;                                       // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0C2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.RealmIntroMovieData
struct FRealmIntroMovieData
{
public:
	class FString                                MoviePath;                                         // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MoviePath4k;                                       // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct NWX.NWXPlayerDeploymentRequest
struct FNWXPlayerDeploymentRequest
{
public:
	class FString                                DeploymentName;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InProgress;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsReady;                                           // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoadingReason                    LoadingReason;                                     // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0C4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DebugLoadingReason;                                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LoginToken;                                        // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Address;                                           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Fingerprint;                                       // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Featureset;                                        // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SpawnPortal;                                       // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRealmIntroMovieData                  MovieData;                                         // 0x78(0x20)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.StructureReverbVolume
struct FStructureReverbVolume
{
public:
	uint8                                        Pad_A0C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DominantMaterialName;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Enclosedness;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalisedCeilingCoverage;                         // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStructureVolumeAkLateReverbComponent*> LateReverbComponents;                              // 0x18(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UAcousticOpeningComponent*>     AcousticOpenings;                                  // 0x28(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.PlayerSpawnContextData
struct FPlayerSpawnContextData
{
public:
	class FString                                DestinationName;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PlayerStartId;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagsToApplyOnSpawn;                                // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.VectorsByName
struct FVectorsByName
{
public:
	uint8                                        Pad_A0C7[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.RealmStructureCountInfo
struct FRealmStructureCountInfo
{
public:
	int32                                        ConstructedStructureCount;                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompositeStructureCount;                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct NWX.SearchResultProfile
struct FSearchResultProfile
{
public:
	class FString                                ProfileName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileShardId;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileId;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0CA[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.SkillPresentationData
struct FSkillPresentationData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xE0 - 0x48)
// ScriptStruct NWX.SkillDataReference
struct FSkillDataReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x48(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 UniqueDataAssetId;                                 // 0x68(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESkillReferenceType               SkillReferenceType;                                // 0x78(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A0CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataAssetObject;                                   // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSkillPresentationData                SkillPresentationData;                             // 0x88(0x58)(Transient, NativeAccessSpecifierPrivate)
};

// 0x38 (0x80 - 0x48)
// ScriptStruct NWX.StructureAssetReference
struct FStructureAssetReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x48(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AssetUID;                                          // 0x68(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A0CE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.TravelInviteBP
struct FTravelInviteBP
{
public:
	class FString                                DeploymentName;                                    // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromId;                                            // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueName                           FromName;                                          // 0x20(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ResourceSpawn
struct FResourceSpawn
{
public:
	bool                                         bGrantToInventory;                                 // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemReward*                           ItemReward;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.TreeTypeData
struct FTreeTypeData
{
public:
	int32                                        StumpHealth;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourceSpawn                        StumpSpawnedResource;                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.GatherableTypeData
struct FGatherableTypeData
{
public:
	struct FGameplayTag                          AnimTag;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResourceSpawn                        GatherableSpawnedResource;                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.PickableTypeData
struct FPickableTypeData
{
public:
	struct FGameplayTag                          DefaultAnimTag;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PickedAnimTag;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResourceSpawn                        PickedSpawnedResource;                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.ResourceTypeData
struct FResourceTypeData
{
public:
	enum class EResourceType                     ResourceType;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTreeTypeData                         TreeData;                                          // 0x8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGatherableTypeData                   GatherableData;                                    // 0x20(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPickableTypeData                     PickableData;                                      // 0x38(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct NWX.ResourceData
struct FResourceData : public FTableRowBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Health;                                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourceSpawn                        SpawnedResource;                                   // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FResourceTypeData                     ResourceTypeData;                                  // 0x28(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct NWX.IIMInstance
struct FIIMInstance
{
public:
	int32                                        InstanceID;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Health;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ResourceId;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResourceIndex;                                     // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        StateId;                                           // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIIMGameplayState                 GameplayState;                                     // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIIMDepletionSource               DepletionSource;                                   // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0DB[0x9];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResourceData                         GameplayResource;                                  // 0x80(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	float                                        AnimationDuration;                                 // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            FallingTreeMesh;                                   // 0x108(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ANWXGeometryCollection>  GeometryCollectionClass;                           // 0x130(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0DF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.StructureHealthChangedContext
struct FStructureHealthChangedContext
{
public:
	float                                        HealthDelta;                                       // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHail;                                             // 0x4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Source;                                            // 0x8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ImpactPoint;                                       // 0x10(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.OverlapResultWraper
struct FOverlapResultWraper
{
public:
	struct FOverlapResult                        OverlapResult;                                     // 0x0(0x28)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.StructurePlacementFeedback_Collision
struct FStructurePlacementFeedback_Collision
{
public:
	bool                                         IsBlocked;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOverlapResultWraper>          BlockingHit;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct NWX.StructurePlacementFeedback_TargetData
struct FStructurePlacementFeedback_TargetData
{
public:
	bool                                         NoValidPlacementTransform;                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NotSnappedButSnapRequired;                         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWX.StructurePlacementFeedback_Support
struct FStructurePlacementFeedback_Support
{
public:
	bool                                         IsSupported;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.SnapPointId
struct FSnapPointId
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.StructurePointer
struct FStructurePointer
{
public:
	TWeakObjectPtr<class UObject>                StructureOwner;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        StructureId;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct NWX.GridPoint
struct FGridPoint
{
public:
	struct FSnapPointId                          ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x10(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USnapPointAlternativeRotations*        AlternativeRotationsData;                          // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OptionalMeshTags;                                  // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESnapPointQuadrant                Quadrant;                                          // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USnapPointRules*                       SnapRulesOverride;                                 // 0x90(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Owner;                                             // 0x98(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FStructurePointer                     OwnerPtr;                                          // 0xA0(0xC)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A0E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStructurePointer>             OccupyingStructures;                               // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint32                                       AcceptableStructureTypes;                          // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A0E9[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.StructurePlacementFeedback_SnapPoint
struct FStructurePlacementFeedback_SnapPoint
{
public:
	TArray<struct FGridPoint>                    PointsToShow;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               SnappedToPoint;                                    // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructurePlacementFeedback_CompositeBuilding
struct FStructurePlacementFeedback_CompositeBuilding
{
public:
	TArray<class UObject*>                       InvalidPieces;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.GameplayTagCountMap
struct FGameplayTagCountMap
{
public:
	TArray<struct FGameplayTag>                  TagArray;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                CountArray;                                        // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct NWX.Trait
struct FTrait : public FTableRowBase
{
public:
	struct FCondition                            RequiredTags;                                      // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagCountMap                  TagCounts;                                         // 0x18(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           AppliedGameplayEffect;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           RemovedGameplayEffect;                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.TraitContainer
struct FTraitContainer
{
public:
	TArray<struct FTrait>                        Traits;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.StructurePlacementFeedback_Traits
struct FStructurePlacementFeedback_Traits
{
public:
	TMap<class UObject*, struct FTraitContainer> Traits_OLD;                                        // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct NWX.StructurePlacementFeedback
struct FStructurePlacementFeedback
{
public:
	bool                                         IsValid;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverStructureBudget;                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverPieceBudget;                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0EB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback_Collision CollisionFeedback;                                 // 0x8(0x18)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         IsValidRotation;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructurePlacementFeedback_Support   SupportFeedback;                                   // 0x21(0x1)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0EC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback_SnapPoint SnapPointFeedback;                                 // 0x28(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FStructurePlacementFeedback_CompositeBuilding CompositeBuildingFeedback;                         // 0x50(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FStructurePlacementFeedback_TargetData TargetDataFeedback;                                // 0x60(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback_Traits    TraitFeedback;                                     // 0x68(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.StructureAddResourcesContext
struct FStructureAddResourcesContext
{
public:
	TWeakObjectPtr<class AActor>                 Structure;                                         // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APawn>                  ContributingPawn;                                  // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInventoryEntry>               ResourcesAdded;                                    // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IsPostConstruction;                                // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStructureState                   PreResourcesState;                                 // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStructureState                   PostResourcesState;                                // 0x22(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0F0[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.StructureRemoveResourcesContext
struct FStructureRemoveResourcesContext
{
public:
	TWeakObjectPtr<class AActor>                 Structure;                                         // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APawn>                  ReceivingPawn;                                     // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInventoryEntry>               ResourcesRemoved;                                  // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NWX.StructureTrait
struct FStructureTrait
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureTraitUIData*                 UIData;                                            // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStackable;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UStructureTraitEffect>> EffectClassArray;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, RepSkip, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UStructureTraitActivator>  ActivatorClass;                                    // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UStructureTraitAuraEffect> AuraEffectClass;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureTraitEnvironmentalInfluencesData* EnvironmentalInfluencesData;                       // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UStructureTraitAsset>> BlockedTraits;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Inflicters;                                        // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Stack;                                             // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0F2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsActive;                                         // 0x62(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0F3[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.StructureTraitChangedContext
struct FStructureTraitChangedContext
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStructureTrait, enum class EStructureTraitEffectType> EffectedTraits;                                    // 0x8(0x50)(BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.ACANavAvoidanceData
struct FACANavAvoidanceData
{
public:
	bool                                         PrintDebugInfo;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TreatVelocityAsZero;                               // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBipedal;                                          // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0F6[0x65];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AvoidanceMultiplier;                               // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GoalForceWeight;                                   // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeHorizon;                                       // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AvoidanceRadius;                                   // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AvoidanceRadiusMultiplier;                         // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxConsiderationDistanceMultiplier;                // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxConsiderationDistance;                          // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomRangeAmount;                                 // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0F8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PowerLawExponent;                                  // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct NWX.PersistedStatusEffect
struct FPersistedStatusEffect
{
public:
	uint8                                        Pad_A0F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 AssetID;                                           // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             StartTime;                                         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatusEffectDuration             DurationType;                                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, float>             SetByCallerMagnitudes;                             // 0x28(0x50)(NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.PersistedGameplayEffect
struct FPersistedGameplayEffect
{
public:
	uint8                                        Pad_A0FC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ClassPath;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             StartTime;                                         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             SetByCallerMagnitudes;                             // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.InfluenceComparison
struct FInfluenceComparison
{
public:
	enum class EInfluenceRequirement             Influence;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENWXMathComparison                ComparisonMethod;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.RealmPowerComparison
struct FRealmPowerComparison
{
public:
	enum class ENWXMathComparison                ComparisonMethod;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.RealmPlacementRequirement
struct FRealmPlacementRequirement
{
public:
	struct FGameplayTagContainer                 TagRequirement;                                    // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FInfluenceComparison>          InfluenceRequirements;                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EBiomeID>                  BiomeRestrictions;                                 // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRealmPowerComparison>         RealmPowerRequirements;                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct NWX.RealmRecipe
struct FRealmRecipe : public FTableRowBase
{
public:
	class FString                                MapName;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemDataReference>            CardsRequired;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FString                                RecipeName;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBiomeID                          Biome;                                             // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A101[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BasePowerLevel;                                    // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRealmPlacementRequirement>    RealmRequirements;                                 // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.ResourceContainerPersistedData
struct FResourceContainerPersistedData
{
public:
	float                                        ResourceLevel;                                     // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.NWXChatRoom
struct FNWXChatRoom
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsParty;                                           // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A102[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.AccumulationUIData
struct FAccumulationUIData
{
public:
	class FText                                  DisplayText;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUsingThresholds;                                 // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A12A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct NWX.S_ActionKeyBinding
struct FS_ActionKeyBinding : public FTableRowBase
{
public:
	enum class E_ActionKeyBinding                InputType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A12B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayName;                                       // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActionName;                                        // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A12C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           DefaultInput;                                      // 0x20(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputChord                           UserInput;                                         // 0x40(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.TargetedAIAction
struct FTargetedAIAction
{
public:
	class UAIAction*                             Action;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class AActor*>                          Targets;                                           // 0x8(0x50)(NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.CachedRequirementCheck
struct FCachedRequirementCheck
{
public:
	uint8                                        Pad_A12D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct NWX.CachedCategoryRequirementChecks
struct FCachedCategoryRequirementChecks : public FCachedRequirementCheck
{
public:
	uint8                                        Pad_A12E[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.TargetRequirementData
struct FTargetRequirementData
{
public:
	uint8                                        Pad_A12F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.SocketHitObjects
struct FSocketHitObjects
{
public:
	TSet<class UObject*>                         HitObjects;                                        // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.AIStructureTargetData
struct FAIStructureTargetData
{
public:
	struct FVector                               TargetLocation;                                    // 0x0(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  LocalBounds;                                       // 0x18(0x38)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UMeshComponent*                        TargetMesh;                                        // 0x50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.IIMInstanceFilterCache
struct FIIMInstanceFilterCache
{
public:
	TMap<int32, bool>                            PreFilteredLocalInstances;                         // 0x0(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct NWX.GameplayAttributeUIData
struct FGameplayAttributeUIData
{
public:
	class FText                                  DisplayText;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttributeValueType               DefaultValueType;                                  // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A134[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, enum class EAttributeValueType> ValueTypeOverrides;                                // 0x48(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bShouldHideInValueList;                            // 0x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldHideInModifierList;                         // 0x99(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLowerValuesBetter;                                // 0x9A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A135[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Tooltip;                                           // 0xA0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A137[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// ScriptStruct NWX.AttributeValueAndUIData
struct FAttributeValueAndUIData
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A139[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAttributeUIData              UIData;                                            // 0x40(0xC0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.AVFXFocusBucket
struct FAVFXFocusBucket
{
public:
	TArray<class UAVFXFocusComponent*>           SortedFocusComponents;                             // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct NWX.S_AxisKeyBinding
struct FS_AxisKeyBinding : public FTableRowBase
{
public:
	class FName                                  DisplayName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AxisName;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A13A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  DefaultKey;                                        // 0x20(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  UserKey;                                           // 0x38(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.BiomeUIData
struct FBiomeUIData
{
public:
	class FText                                  DisplayText;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.BustableAudio_Destructed
struct FBustableAudio_Destructed
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          DestructionSound;                                  // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.ChamberSocketData
struct FChamberSocketData
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ACavernModularLevelProxy> DynamicLevel;                                      // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ValidExits;                                        // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_A13E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.EncounterDynamicLevel
struct FEncounterDynamicLevel
{
public:
	enum class ECavernModularLevelProxyType      DynamicLevelType;                                  // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A140[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UPOIDefinitionAsset>    POIDefinition;                                     // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.SoftLevelPath
struct FSoftLevelPath
{
public:
	struct FSoftObjectPath                       Value;                                             // 0x0(0x20)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.ChamberData
struct FChamberData
{
public:
	struct FSoftLevelPath                        LevelPath;                                         // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FChamberSocketData>            Sockets;                                           // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            CollisionHull;                                     // 0x30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class APackedLevelActor>         StaticLevel;                                       // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEncounterDynamicLevel>        EncounterDynamicLevels;                            // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPOIDefinitionAsset>> SocketDynamicLevels;                               // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NWX.CavernChamberCopySpec
struct FCavernChamberCopySpec
{
public:
	TArray<struct FSoftLevelPath>                CavernChamberLevels;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoftLevelPath>                DoorwayLevels;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoftLevelPath>                SocketCapLevels;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LevelIndex;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SocketIndex;                                       // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EncounterIndex;                                    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinSockets;                                        // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSockets;                                        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChainLength;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Backtrack;                                         // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        POIRegion;                                         // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentChamberSocketIndex;                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A146[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ChildChamberIndices;                               // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.CavernWallPart
struct FCavernWallPart
{
public:
	int32                                        MeshIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A147[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.CavernWallParts
struct FCavernWallParts
{
public:
	int32                                        Length;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A149[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCavernWallPart>               Parts;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCavernWallPart>               ReverseParts;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.CharacterCreateTelemetryValuePairs
struct FCharacterCreateTelemetryValuePairs
{
public:
	class FString                                OldValue;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentValue;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.CombatBin
struct FCombatBin
{
public:
	float                                        CombatTimeOut;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InCombatThreshold;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDealt;                                       // 0x8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDealtTimeStamp;                              // 0xC(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageReceived;                                    // 0x10(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageReceivedTimeStamp;                           // 0x14(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TicketedPlayerCount;                               // 0x18(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NearbyPlayerCount;                                 // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ActorAudioBucketContainer
struct FActorAudioBucketContainer
{
public:
	TArray<class UActorAudioBucket*>             Buckets;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ConstActorContainer
struct FConstActorContainer
{
public:
	TArray<class AActor*>                        Actors;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.PredictedHitResultsData
struct FPredictedHitResultsData
{
public:
	TArray<struct FHitResult>                    MeleeAttackSocketPredictedHits;                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                    PositionSocketPredictedHits;                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                    CreatureSocketPredictedHits;                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                    ResourcesPredictedHits;                            // 0x30(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x40(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct NWX.PredictionSocketTransforms
struct FPredictionSocketTransforms
{
public:
	struct FTransform                            MeleeAttackSocketTransform;                        // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            CreatureSocketTransform;                           // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            MeleeBottomSocketTransform;                        // 0xC0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            MeleeTopSocketTransform;                           // 0x120(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.StatusEffectDOT
struct FStatusEffectDOT
{
public:
	class UStatusEffectDataAsset*                StatusEffectDOT;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A152[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct NWX.ScatterDamageBucket
struct FScatterDamageBucket
{
public:
	float                                        DamageAmount;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A153[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            HitResultWeakpoint;                                // 0x8(0xE8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                            HitResultNonWeakpoint;                             // 0xF0(0xE8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        NumberOfWeakpointHits;                             // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A154[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.StringTableEntryHandle
struct FStringTableEntryHandle
{
public:
	class FName                                  TableID;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EntryKey;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct NWX.CompanionPersistenceData
struct FCompanionPersistenceData
{
public:
	class FString                                CompanionClassName;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   AdditionalSpawningData;                            // 0x10(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HomeRealmID;                                       // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CreatureUID;                                       // 0x30(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringTableEntryHandle               CompanionName;                                     // 0x40(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FInventoryEntry>               InventoryItems;                                    // 0x58(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         EquippedItemIDs;                                   // 0x68(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   AppearanceData;                                    // 0x78(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastLeaderPlayerID;                                // 0x88(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.CompositePiecePointer
struct FCompositePiecePointer
{
public:
	class UStructureCompositeComponent*          Owner;                                             // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PieceId;                                           // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A155[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct NWX.StructureUIData
struct FStructureUIData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FilterTags;                                        // 0x58(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct NWX.WeatherAkAssets
struct FWeatherAkAssets : public FEventWithRtpc
{
public:
	class UWeatherPhenomenon*                    WeatherPhenomenon;                                 // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.AVFXSpatialComponentData
struct FAVFXSpatialComponentData
{
public:
	bool                                         bEmitsSound;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A158[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXPhyiscalMaterial*                  PlaneMaterial;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        SurfaceSwitchOverride;                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeatherAkAssets>              WeatherPhenomenaAudioOverrides;                    // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         DrawDebug;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Moveable;                                          // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A159[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         WindOneShotOverride;                               // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct NWX.StructureMeshDefinition
struct FStructureMeshDefinition
{
public:
	class FString                                ComponentName;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ParentComponentName;                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       Mesh;                                              // 0x80(0x20)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       CollisionMesh;                                     // 0xA0(0x20)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPhysicalMaterial>      PhysMaterialOverride;                              // 0xC0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          MeshTags;                                          // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EStructureInteractionType         Interaction;                                       // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsNavigation;                                // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReflectAudio;                                     // 0x10A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBase;                                           // 0x10B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A15B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMeshComponent>            Class;                                             // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           AnimInstance;                                      // 0x118(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAVFXSpatialComponentData             SpatialVFXData;                                    // 0x140(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EStructureFXActivationTime        ActivationTime;                                    // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A15C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x190 - 0x180)
// ScriptStruct NWX.StructureOptionalMeshDefinition
struct FStructureOptionalMeshDefinition : public FStructureMeshDefinition
{
public:
	class FName                                  OptionalMeshTag;                                   // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A15E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.StructureData_Mesh
struct FStructureData_Mesh
{
public:
	TArray<struct FStructureMeshDefinition>      Meshes;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStructureOptionalMeshDefinition> OptionalMeshes;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAutoSpawnScatterMask;                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A160[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.StructureHealthData
struct FStructureHealthData
{
public:
	float                                        MaxHealth;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHealth;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.StructureNiagaraVariable
struct FStructureNiagaraVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableTypeName;                                  // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTopLevelAssetPath                    VariableTypePathName;                              // 0x18(0x10)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFStructureNiagaraVariableType    TypeEnum;                                          // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A161[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// ScriptStruct NWX.StructureNiagaraComponentDefinition
struct FStructureNiagaraComponentDefinition
{
public:
	class FString                                ComponentName;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ParentComponentName;                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       NiagaraSystem;                                     // 0x80(0x20)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FStructureNiagaraVariable, struct FNiagaraVariant> ParameterOverrides;                                // 0xA0(0x50)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EStructureFXActivationTime        ActivationTime;                                    // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A164[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct NWX.StructureTraversalData
struct FStructureTraversalData
{
public:
	bool                                         bCanTraverse;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanClimb;                                         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.StructureAcousticOpeningDefinition
struct FStructureAcousticOpeningDefinition
{
public:
	struct FTransform                            LocalTransform;                                    // 0x0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Dimensions;                                        // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFadeDistance;                                   // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFadeDistance;                                   // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceAreaM2;                                     // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A166[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.CompositeInstanceDef
struct FCompositeInstanceDef
{
public:
	struct FVector                               ConstructionDetectionBoxExtents;                   // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A167[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ConstructionDetectionBoxTransform;                 // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.VolumeGenerationPlane
struct FVolumeGenerationPlane
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Extents;                                           // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct NWX.StructureFXAudioDefinition
struct FStructureFXAudioDefinition
{
public:
	bool                                         bUseDefaultAudioComponent;                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A169[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AudioComponentOffset;                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOscillator;                                    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A16B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OscillatorFrequencyHertz;                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOscillateVFX;                                     // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOscillateRTPC;                                    // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOscillatePosition;                                // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A16D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MinOscillatorOffset;                               // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxOscillatorOffset;                               // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          StartOneShot;                                      // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          StopOneShot;                                       // 0x88(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          StartLoop;                                         // 0xB0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          StopLoop;                                          // 0xD8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructureFXAudioDefinitionArray
struct FStructureFXAudioDefinitionArray
{
public:
	TArray<struct FStructureFXAudioDefinition>   AudioDefinitionArray;                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct NWX.StructureAudioDefinition
struct FStructureAudioDefinition
{
public:
	TMap<enum class EStructureFXActivationTime, struct FStructureFXAudioDefinitionArray> AudioFXActivationMap;                              // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               DefaultAudioComponentOffset;                       // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkSwitchValue>         CompletionAkSwitchOverride;                        // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNWXPhyiscalMaterial*                  ReverbMaterial;                                    // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3D8 (0x3E0 - 0x8)
// ScriptStruct NWX.StructureData
struct FStructureData : public FTableRowBase
{
public:
	class UStructureTypeData*                    StructureType;                                     // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructureHealthData                  HealthData;                                        // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FStructureUIData                      UIData;                                            // 0x18(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   MapPinUIData;                                      // 0x90(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructureTraversalData               TraversalData;                                     // 0xA0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         IsRespawnPoint;                                    // 0xA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableVolumePlaneGeneration;                       // 0xA3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A172[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructurePlacementData*               PlacementData;                                     // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureSnappableData*               SnappableData;                                     // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A173[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompositeInstanceDef                 CompositeInstanceDef;                              // 0xC0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UStructureObjectComponentData*         ObjectComponentData;                               // 0x140(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureResourceRequirementsData*    ResourceRequirements;                              // 0x148(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructurePostConstructionInteractionData* PostConstructionInteractionData;                   // 0x150(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureInteriorData*                InteriorData;                                      // 0x158(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureCraftingData*                CraftingData;                                      // 0x160(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureItemLockerData*              ItemLockerData;                                    // 0x168(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureItemContainerData*           ItemContainerData;                                 // 0x170(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureTraitInitData*               TraitData;                                         // 0x178(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureResourceCollectionData*      ResourceCollectionData;                            // 0x180(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TraitsTags;                                        // 0x188(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x1A8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UnlockTags;                                        // 0x1C8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_A176[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillDataReference                   AdditionalUnlockable;                              // 0x1F0(0xE0)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructureData_Mesh                   MeshData;                                          // 0x2D0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UStructureLightDefinition*             LightData;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureFireDefinition*              FireData;                                          // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStructureNiagaraComponentDefinition> VFX;                                               // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FStructureAcousticOpeningDefinition> AcousticOpenings;                                  // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVolumeGenerationPlane>        OverridePlanes;                                    // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FStructureAudioDefinition             Audio;                                             // 0x338(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UStructureCustomizationSettings*       CustomizationSettings;                             // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructureEncounterSettings*           EncounterSettings;                                 // 0x3D8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x410 (0x410 - 0x0)
// ScriptStruct NWX.CompositePieceInstanceData
struct FCompositePieceInstanceData
{
public:
	struct FCompositePiecePointer                Piece;                                             // 0x0(0x10)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FStructureData                        StateDef;                                          // 0x10(0x3E0)(RepSkip, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USceneComponent*                       Container;                                         // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>          MeshComponents;                                    // 0x3F8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_A178[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NWX.AttachmentData
struct FAttachmentData
{
public:
	struct FStructurePointer                     OccupyingStructurePtr;                             // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        OccupyingStructurePieceId;                         // 0xC(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MySnapPointIndex;                                  // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.StructureAttachments
struct FStructureAttachments
{
public:
	struct FStructurePointer                     OwnerPtr;                                          // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A179[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAttachmentData>               Attachments;                                       // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x134 (0x140 - 0xC)
// ScriptStruct NWX.CompositePieceGameplay
struct FCompositePieceGameplay : public FFastArraySerializerItem
{
public:
	int32                                        PieceId;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructureAssetReference              StructureAssetReference;                           // 0x10(0x80)(BlueprintVisible, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x90(0x60)(BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStructureState                   CurrentState;                                      // 0xF0(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStructureState                   PreviousState;                                     // 0xF1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A17A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentHealth;                                     // 0xF4(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RuntimeGameplayTags;                               // 0xF8(0x20)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	struct FStructureAttachments                 StructureAttachments;                              // 0x118(0x20)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_A17B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x178 - 0x108)
// ScriptStruct NWX.CompositePieces
struct FCompositePieces : public FFastArraySerializer
{
public:
	TArray<struct FCompositePieceGameplay>       Items;                                             // 0x108(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	class UObject*                               CompositePiecesOwner;                              // 0x118(0x8)(ZeroConstructor, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A17C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, int32>                           CachedPieceIndexes;                                // 0x128(0x50)(RepSkip, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.PieceSnapPoints
struct FPieceSnapPoints
{
public:
	enum class ESnapType                         SnapType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A17D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGridPoint>                    Points;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class USnapRulesEnforcer>        SnapRulesEnforcerClass;                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USupportRulesEnforcer>     SupportRulesEnforcerClass;                         // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlacementRequiresSnap;                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeSupportedByAdjacency;                        // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanSupportOtherPieces;                            // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A17E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.ItemRewardWithRequirements
struct FItemRewardWithRequirements
{
public:
	TArray<struct FRealmPlacementRequirement>    Requirements;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UItemReward*                           ItemReward;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.ConditionalReward
struct FConditionalReward
{
public:
	class URequirement*                          Requirements;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URewardBehaviour*                      Reward;                                            // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A180[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.RealmRewardSet
struct FRealmRewardSet
{
public:
	TArray<struct FRealmPlacementRequirement>    RealmRequirement;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FConditionalReward>            Rewards;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.ConeEffectsAudioInstance
struct FConeEffectsAudioInstance
{
public:
	class USceneComponent*                       ParentComponent;                                   // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScopedAkComponent*                    HeadAudioComponent;                                // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScopedAkComponent*                    BodyAudioComponent;                                // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScopedAkComponent*                    TailAudioComponent;                                // 0x18(0x8)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeadStarted;                                      // 0x20(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeadCompleted;                                    // 0x21(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTailStarted;                                      // 0x22(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTailCompleted;                                    // 0x23(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadDistance;                                      // 0x24(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalisedHeadDistance;                            // 0x28(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TailDistance;                                      // 0x2C(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalisedTailDistance;                            // 0x30(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraceHeadIndex;                                    // 0x34(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraceTailIndex;                                    // 0x38(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraceStartIndex;                                   // 0x3C(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraceEndIndex;                                     // 0x40(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A183[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x300 (0x300 - 0x0)
// ScriptStruct NWX.FoodSlot
struct FFoodSlot
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x2F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsActive;                                          // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A186[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             StartTime;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.CraftingSlotStat
struct FCraftingSlotStat
{
public:
	struct FDataTableRowHandle                   StatRow;                                           // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A188[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.CraftingSlotPrimaryType
struct FCraftingSlotPrimaryType
{
public:
	struct FDataTableRowHandle                   RowHandle;                                         // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.CraftingSlotTrait
struct FCraftingSlotTrait
{
public:
	struct FDataTableRowHandle                   RowHandle;                                         // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.CraftingConstraintSet
struct FCraftingConstraintSet
{
public:
	int32                                        ItemQuantityConstraints;                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A18B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemDataReference>            ItemReferenceConstraints;                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCraftingSlotStat>             StatConstraints;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCharacteristicDataReference>  CharacteristicConstraints;                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCraftingSlotPrimaryType              PrimarySlotType;                                   // 0x38(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FCraftingSlotTrait>            SecondarySlotTraits;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct NWX.CraftingConstraintSlot
struct FCraftingConstraintSlot
{
public:
	class FString                                DevDescription;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOptional;                                       // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A18F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECostumeRegions>           CustomizationRegions;                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EMetalRegions>             MetalCustomizationRegions;                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EGemRegions>               GemCustomizationRegions;                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FItemConstraint                       Constraint;                                        // 0x48(0x40)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.CraftingConstraintEnvironmental
struct FCraftingConstraintEnvironmental
{
public:
	class UCraftingActorConstraintBehaviour*     EnvironmentalConstraint;                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.CraftingRecipeResult
struct FCraftingRecipeResult
{
public:
	TSoftClassPtr<class UCraftingResultObject>   CraftingResultType;                                // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicTypedStructs                  ResultData;                                        // 0x28(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.CraftingRecipeResult_Loaded
struct FCraftingRecipeResult_Loaded
{
public:
	TSubclassOf<class UCraftingResultObject>     CraftingResultType;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicTypedStructs                  ResultData;                                        // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x118 (0x120 - 0x8)
// ScriptStruct NWX.CraftingRecipe
struct FCraftingRecipe : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHidden;                                         // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultPowerLevel;                        // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A192[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPowerLevel                           DefaultPowerLevel;                                 // 0x64(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 MetaTags;                                          // 0x68(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bVariant;                                          // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A193[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  CraftingDisciplines;                               // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCraftingConstraintSlot>       RecipeSlots;                                       // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FCraftingConstraintEnvironmental> EnvironmentalConstraints;                          // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           RecipeSteps;                                       // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UCraftingResultObject*>         CraftingResults;                                   // 0xD0(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FCraftingRecipeReference>      VariantReferences;                                 // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class URecipeCollectionAsset*>        RelatedRecipeCollections;                          // 0xF0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UI_SortingGroups;                                  // 0x100(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct NWX.CraftingRecipeSlotType
struct FCraftingRecipeSlotType : public FTableRowBase
{
public:
	class FText                                  SlotName;                                          // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  SlotDescription;                                   // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SlotTypeIcon;                                      // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SlotTexturePattern;                                // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x88(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct NWX.CraftingRecipeStatType
struct FCraftingRecipeStatType : public FTableRowBase
{
public:
	class FText                                  StatName;                                          // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  StatDescription;                                   // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             StatTypeIcon;                                      // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTag;                                       // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_CraftingStep
struct FGameplayAbilityTargetData_CraftingStep : public FGameplayAbilityTargetData
{
public:
	struct FDataTableRowHandle                   CraftingStepRowHandle;                             // 0x8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A197[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_CraftingStepEffectData
struct FGameplayAbilityTargetData_CraftingStepEffectData : public FGameplayAbilityTargetData
{
public:
	struct FDataTableRowHandle                   CraftingStepRowHandle;                             // 0x8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A199[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.CraftingResultDataItem
struct FCraftingResultDataItem
{
public:
	struct FItemDataReference                    ItemToGrant;                                       // 0x0(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantityToGrant;                                   // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A19A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCraftingResultObject*>         Modifiers;                                         // 0x88(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_A19B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NWX.VariantSlot
struct FVariantSlot
{
public:
	int32                                        SlotToOverride;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A19E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingConstraintSlot               VariantSlot;                                       // 0x8(0x88)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.SlotConstraintsRecipeResult
struct FSlotConstraintsRecipeResult
{
public:
	TArray<struct FVariantSlot>                  VariantSlots;                                      // 0x0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UCraftingResultObject*                 Result;                                            // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.LinkedLoiterState
struct FLinkedLoiterState
{
public:
	class UAnimSequenceBase*                     LinkedIdle;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ENWXWaitState, class UAnimSequenceBase*> LinkedLoiters;                                     // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.TotalPerType
struct FTotalPerType
{
public:
	uint8                                        Pad_A19F[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.MaxPerType
struct FMaxPerType : public FTableRowBase
{
public:
	enum class ECreatureType                     CreatureType;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCreatures;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct NWX.Customization_ColorSample
struct FCustomization_ColorSample : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryValue;                                    // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1A3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct NWX.Customization_Mask
struct FCustomization_Mask : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Mask;                                              // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct NWX.Customization_EyeColor
struct FCustomization_EyeColor : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          InnerColor;                                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MiddleColor;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OuterColor;                                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct NWX.CharacterAppearance_MetalSwatch
struct FCharacterAppearance_MetalSwatch : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MetalValue;                                        // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1AA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.CharacterAppearance_GemSwatch
struct FCharacterAppearance_GemSwatch : public FTableRowBase
{
public:
	float                                        GemValue;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1AB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.CharacterCustomization_MaterialSwatchParameters
struct FCharacterCustomization_MaterialSwatchParameters
{
public:
	TSoftObjectPtr<class UTexture2D>             NMR_Mask;                                          // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Roughness;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WSMP;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             RGBSwatch;                                         // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Tint1;                                             // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Tint2;                                             // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Iridescence;                                       // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x108 - 0x8)
// ScriptStruct NWX.CharacterCustomization_MaterialSwatch
struct FCharacterCustomization_MaterialSwatch : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EMaterialTypes                    FabricProfileType;                                 // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x40(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterCustomization_MaterialSwatchParameters ProfileSettings;                                   // 0x68(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NWX.WeaponCustomization_MaterialSwatchParameters
struct FWeaponCustomization_MaterialSwatchParameters
{
public:
	TSoftObjectPtr<class UTexture2D>             NMR_Mask;                                          // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Roughness;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WSV;                                               // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             RGBSwatch;                                         // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Tint;                                              // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Iridescence;                                       // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct NWX.WeaponCustomization_MaterialSwatch
struct FWeaponCustomization_MaterialSwatch : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeaponCustomization_MaterialSwatchParameters ProfileSettings;                                   // 0x60(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct NWX.MaterialRegionInstanceData
struct FMaterialRegionInstanceData
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourceCustomizationData            Data;                                              // 0x8(0xB8)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.EquippedInstanceData
struct FEquippedInstanceData
{
public:
	TArray<struct FMaterialRegionInstanceData>   MaterialData;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           MetalData;                                         // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           GemData;                                           // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct NWX.EquippedVisualMesh
struct FEquippedVisualMesh
{
public:
	struct FGuid                                 InstanceID;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquippedInstanceData                 InstancedData;                                     // 0x90(0x38)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SlotTag;                                           // 0xC8(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct NWX.CharacterCustomization_UnprocessedMeshData
struct FCharacterCustomization_UnprocessedMeshData
{
public:
	TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>> ThirdPersonAppearanceMeshes;                       // 0x0(0x50)(BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          Mesh;                                              // 0x50(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           MeshAnimationClass;                                // 0x78(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstanceData_RegionCustomization     InstancedData;                                     // 0xA0(0x38)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.CharacterCustomization_UnloadedMeshData
struct FCharacterCustomization_UnloadedMeshData
{
public:
	TSoftObjectPtr<class USkeletalMesh>          Mesh;                                              // 0x0(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           MeshAnimationClass;                                // 0x28(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.CharacterCustomization_LoadedMeshData
struct FCharacterCustomization_LoadedMeshData
{
public:
	class USkeletalMesh*                         Mesh;                                              // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>             MeshAnimationClass;                                // 0x8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.OptionalCachedPawnLocationAndRotation
struct FOptionalCachedPawnLocationAndRotation
{
public:
	bool                                         bIsSet;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.DisciplineUIData
struct FDisciplineUIData
{
public:
	class FText                                  DisplayText;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x30 - 0xC)
// ScriptStruct NWX.DiscoverableDataReplicatedItem
struct FDiscoverableDataReplicatedItem : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_A1C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDiscoverableData                     Data;                                              // 0x10(0x20)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct NWX.DiscoverableDataSerializer
struct FDiscoverableDataSerializer : public FFastArraySerializer
{
public:
	uint8                                        Pad_A1C4[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDiscoverableDataReplicatedItem> Items;                                             // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.DiscoveryLocation
struct FDiscoveryLocation
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NWX.DiscoveryInformation
struct FDiscoveryInformation
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFDiscoveryLocationState          DiscoveryLocationState;                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1C5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.LevelDiscoveryLocation
struct FLevelDiscoveryLocation
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDiscoveryInformation>         DiscoveryLocationInformation;                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct NWX.ProxySizeParams
struct FProxySizeParams
{
public:
	bool                                         Small;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Medium;                                            // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Large;                                             // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExtraLarge;                                        // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Giant;                                             // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x73 (0x78 - 0x5)
// ScriptStruct NWX.ProxySearchParamsResourceNodes
struct FProxySearchParamsResourceNodes : public FProxySizeParams
{
public:
	uint8                                        Pad_A1C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTagContainer>         Locations;                                         // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EBiomeID>                  Biomes;                                            // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         RealmTags;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           Clusters;                                          // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EResourceRarity                   ResourceRarityBucket;                              // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        POIResourceProgressionCurve;                       // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x2B (0x30 - 0x5)
// ScriptStruct NWX.ProxySearchParamsEditor
struct FProxySearchParamsEditor : public FProxySizeParams
{
public:
	bool                                         ShowSizeTemplate;                                  // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1C8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Location;                                          // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1C9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.IIMDynamicResourceProxyData
struct FIIMDynamicResourceProxyData : public FTableRowBase
{
public:
	class UIIMResourceAssetList*                 ResourceList;                                      // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.WaterfallSplineData
struct FWaterfallSplineData
{
public:
	TWeakObjectPtr<class USplineComponent>       SplineComponent;                                   // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SplineIndex;                                       // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct NWX.LiquidHitData
struct FLiquidHitData
{
public:
	struct FHitResult                            LiquidHitResult;                                   // 0x0(0xE8)(BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        LiquidDepth;                                       // 0xE8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1CA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.RagDollSocketsData
struct FRagDollSocketsData
{
public:
	TMap<class FName, struct FPositionHistory>   SocketHistoriesByName;                             // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        BelowMultiplier;                                   // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumScaledVelocityToTrigger;                    // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityScalingMultiplier;                         // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaledVelocityMin;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaledVelocityMax;                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoundsMultiplier;                                  // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModifiedBoundsMin;                                 // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModifiedBoundsMax;                                 // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseHitDistanceBuffer;                             // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiquidComparedToGroundMultiplier;                  // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HistorySamples;                                    // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1CB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.EncounterSpawnerWaveData
struct FEncounterSpawnerWaveData
{
public:
	bool                                         bUseAutomaticSpawner;                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CreatureSpawner;                                   // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnerCreatureType              CreatureType;                                      // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAutomaticSpawnerWaveDifficulty   WaveDifficulty;                                    // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveTable*                           DistributionCurve;                                 // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                             BoundMiasmaEQS;                                    // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvQueryRunMode                  EQSRunMode;                                        // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ANWXAISpawner>             CreatureSpawnerBase;                               // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaveCompletionCondition          WaveCompletionCondition;                           // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimumCreatureCountBeforeWaveComplete;            // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UAIAction>>         AddedCreatureBehaviours;                           // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        MaximumNumberOfCreaturesOverride;                  // 0x58(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.EncounterComponentDependency
struct FEncounterComponentDependency
{
public:
	TSoftClassPtr<class UEncounterComponentDataAsset> Primary;                                           // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UEncounterComponentDataAsset> Secondary;                                         // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOptional;                                        // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.EncounterComponentSetRule
struct FEncounterComponentSetRule
{
public:
	TArray<TSoftClassPtr<class UEncounterComponentBase>> Components;                                        // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EEncounterComponentRelationship   Relationship;                                      // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.EncounterArechtypeValidationRules
struct FEncounterArechtypeValidationRules
{
public:
	TArray<struct FEncounterComponentSetRule>    ComponentRules;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.EncounterDebugLine
struct FEncounterDebugLine
{
public:
	struct FVector                               LineStart;                                         // 0x0(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineEnd;                                           // 0x18(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Colour;                                            // 0x34(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x48(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.EncounterDebugPoint
struct FEncounterDebugPoint
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Colour;                                            // 0x1C(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x160 - 0x108)
// ScriptStruct NWX.EncounterDynamicDataSerializer
struct FEncounterDynamicDataSerializer : public FFastArraySerializer
{
public:
	TArray<struct FEncounterDynamicData>         Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D5[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.EncounterFavourData
struct FEncounterFavourData
{
public:
	class UStatusEffectDataAsset*                StatusEffect;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FavourName;                                        // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        GlyphNumber;                                       // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.EncounterStatusDataRow
struct FEncounterStatusDataRow : public FTableRowBase
{
public:
	enum class EEncounterStatus                  Status;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FriendlyName;                                      // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct NWX.EncounterMusicData
struct FEncounterMusicData
{
public:
	bool                                         bOverrideCombatMusic;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAkAudioEvent>          EncounterStartedStinger;                           // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          EncounterSucceededStinger;                         // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          EncounterFailedStinger;                            // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkStateValue>          DormantMusicState;                                 // 0x80(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkStateValue>          PrimaryMusicState;                                 // 0xA8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkStateValue>          PrimaryMusicStateSkipIntro;                        // 0xD0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkStateValue>          SecondaryMusicState;                               // 0xF8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkStateValue>          CompletedMusicState;                               // 0x120(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkStateValue>          FailedMusicState;                                  // 0x148(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct NWX.EncounterLevelData
struct FEncounterLevelData
{
public:
	class FName                                  POIName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 POIID;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClusterTheme;                                      // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBiomeID                          Biome;                                             // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPOIType                          POIType;                                           // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HubRequirement;                                    // 0x22(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.EncounterPlugData
struct FEncounterPlugData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlugEnvironment                  Environment;                                       // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlugPalette                      Palette;                                           // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterType                    EncounterType;                                     // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterRewardType              EncounterRewardType;                               // 0xB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1DA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct NWX.EncounterRegistrationRequirements
struct FEncounterRegistrationRequirements
{
public:
	TSet<enum class EBiomeID>                    Biomes;                                            // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EPOIRequirement                   HubRequirement;                                    // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<struct FDataTableRowHandle>             ClusterThemes;                                     // 0x58(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EPlugEnvironment                  Environment;                                       // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlugPalette                      Palette;                                           // 0xA9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterType                    EncounterType;                                     // 0xAA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1DC[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.PlugCollection
struct FPlugCollection
{
public:
	uint8                                        Pad_A1DD[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.RegisteredPlug
struct FRegisteredPlug
{
public:
	uint8                                        Pad_A1DE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.StructureEncounterArenaSpawnContext
struct FStructureEncounterArenaSpawnContext
{
public:
	int32                                        NumWaves;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.StructureEncounterSpawnContext
struct FStructureEncounterSpawnContext
{
public:
	struct FGameplayTag                          PaletteAndFactionTag;                              // 0x0(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructureEncounterArenaSpawnContext  ArenaSpawnContext;                                 // 0x8(0x4)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NWX.EncounterIDState
struct FEncounterIDState
{
public:
	struct FGuid                                 EncounterID;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterState                   EncounterRunState;                                 // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1DF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.EncounterConditionState
struct FEncounterConditionState
{
public:
	uint8                                        Pad_A1E0[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSatisfied;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.NotificationEncounter
struct FNotificationEncounter
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Banner;                                            // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterTrackProgress           State;                                             // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.EncounterDungeonPool
struct FEncounterDungeonPool
{
public:
	enum class EFloorLocationType                FloorType;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           FloorPool;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         RandomizeFloors;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.EncounterDataByPOI
struct FEncounterDataByPOI
{
public:
	TArray<struct FGuid>                         CompletedEncounterAssetIDs;                        // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FVector                               POILocation;                                       // 0x10(0x18)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMemoryPuzzlePieces;                             // 0x28(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEncounterPersistenceObject*>   EncounterPersistenceObjects;                       // 0x30(0x10)(ExportObject, ZeroConstructor, SaveGame, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct NWX.EncounterCreatureData
struct FEncounterCreatureData
{
public:
	class FName                                  CreatureName;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CreatureTag;                                       // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CreatureChallengeRating;                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfCreatures;                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomDistributionWeight;                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.EncounterCreatureDataArray
struct FEncounterCreatureDataArray
{
public:
	TArray<struct FEncounterCreatureData>        CreatureDataArray;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.EncounterIDs
struct FEncounterIDs
{
public:
	TArray<struct FGuid>                         EncounterIDs;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.EncounterAssetGuids
struct FEncounterAssetGuids
{
public:
	TArray<struct FGuid>                         EncounterAssetGuidArray;                           // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.RefinementTimeModifiers
struct FRefinementTimeModifiers
{
public:
	bool                                         bApplyToAllItemsAtRefinementStation;               // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemConstraint                       TargetItem;                                        // 0x8(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UCraftingRefinementModifierAsset*      ModifierAsset;                                     // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.AppliedStructureTraitStatusEffectData
struct FAppliedStructureTraitStatusEffectData
{
public:
	uint8                                        StatusEffectStack;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StatusEffectDuration;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.TagQueryItemAttributeModifierListBundle
struct FTagQueryItemAttributeModifierListBundle
{
public:
	struct FItemConstraint                       ItemConstraint;                                    // 0x0(0x40)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FItemAttributeModifierReference> ItemModifiers;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.CraftedItemYieldModifier
struct FCraftedItemYieldModifier
{
public:
	struct FItemConstraint                       ItemConstraint;                                    // 0x0(0x40)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EQuantityChangeType               ChangeType;                                        // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChangeAmount;                                      // 0x44(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct NWX.EssenceDropParameters
struct FEssenceDropParameters
{
public:
	struct FGameplayTagQuery                     RealmFilter;                                       // 0x0(0x48)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UItemDataAsset>         EssenceDA;                                         // 0x48(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EEssenceDropType, class UCurveFloat*> OverrideDropTables;                                // 0x70(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.ExperienceStateTablePresentationData
struct FExperienceStateTablePresentationData
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct NWX.ExperienceStateDefinitionRowBase
struct FExperienceStateDefinitionRowBase : public FTableRowBase
{
public:
	class FText                                  Description;                                       // 0x8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SettableByClient;                                  // 0x24(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExperienceStateTablePresentationData QuestPresentationData;                             // 0x28(0x58)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.CastTimeRequirement
struct FCastTimeRequirement
{
public:
	float                                        MinimumDepth;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDepth;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URequirement*                          Requirements;                                      // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.CatchRequirements
struct FCatchRequirements
{
public:
	struct FRealmPlacementRequirement            RealmRequirement;                                  // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCastTimeRequirement                  CastTimeRequirement;                               // 0x50(0x10)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NWX.Fish
struct FFish
{
public:
	class FText                                  FishName;                                          // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemReward*                           ItemReward;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbabilityWeight;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCatchRequirements                    Requirements;                                      // 0x30(0x60)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Fish
struct FGameplayAbilityTargetData_Fish : public FGameplayAbilityTargetData
{
public:
	struct FFish                                 Fish;                                              // 0x8(0x90)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.FootstepAudioData
struct FFootstepAudioData
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          LocalAkEvent;                                      // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          RemoteAkEvent;                                     // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          WaterSplashAkEvent;                                // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VFXDelay;                                          // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1EC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.FXData
struct FFXData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParentFXType                     ParentFXType;                                      // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ChildFXType;                                       // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Color;                                             // 0x50(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.GenericReplicatedData_GameplayTagCountMap
struct FGenericReplicatedData_GameplayTagCountMap : public FGenericReplicatedData
{
public:
	struct FGameplayTagCountMap                  GameplayTagCountMap;                               // 0x8(0x20)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ItemRewardModifierData
struct FItemRewardModifierData
{
public:
	int32                                        RewardTypeAffected;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemRewardModifier*                   RewardModifier;                                    // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct NWX.GridPointProxy
struct FGridPointProxy : public FGridPoint
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.SnapPointProxyData
struct FSnapPointProxyData
{
public:
	TArray<struct FGridPointProxy>               Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USnapPointDataAsset*                   DataAsset;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedPointIndex;                                // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviousSelectedPointIndex;                        // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsingDataAssetPoints;                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.GridCell
struct FGridCell
{
public:
	float                                        BaseValue;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DeltaValue;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A1F0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.HeatSource
struct FHeatSource
{
public:
	float                                        Impact;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxImpact;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Radius;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A1F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.HoudiniOutputList
struct FHoudiniOutputList
{
public:
	int32                                        VariantSeed;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UObject>>        OutputList;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct NWX.IIMCollectionKey
struct FIIMCollectionKey
{
public:
	enum class EIIMResourceType                  ResourceType;                                      // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBiomeID                          BiomeId;                                           // 0x1(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.CollectionVariants
struct FCollectionVariants
{
public:
	TArray<class UIIMCollection*>                CollectionVariants;                                // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.ResourceAssetListEntry
struct FResourceAssetListEntry
{
public:
	TSoftObjectPtr<class UIIMResourceDataAsset>  ResourceDA;                                        // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProxySearchParamsResourceNodes       ProxySearchParams;                                 // 0x28(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.ResourceVulnerabilityInfo
struct FResourceVulnerabilityInfo
{
public:
	struct FGameplayTagQuery                     VulnerabilityQuery;                                // 0x0(0x48)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             VulnerabilityIcon;                                 // 0x48(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.InputActionPresentationData
struct FInputActionPresentationData
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.InputKeyPresentationData
struct FInputKeyPresentationData : public FTableRowBase
{
public:
	struct FKey                                  Key;                                               // 0x8(0x18)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x48 - 0x20)
// ScriptStruct NWX.InputKeyPresentationData_Gamepad
struct FInputKeyPresentationData_Gamepad : public FInputKeyPresentationData
{
public:
	class UTexture2D*                            Texture_PlayStation_DualSense;                     // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture_PlayStation_DualShock;                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture_Nintendo_Switch;                           // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture_SteamDeck;                                 // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture_Xbox_Generic;                              // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct NWX.InputKeyPresentationData_Mouse
struct FInputKeyPresentationData_Mouse : public FInputKeyPresentationData
{
public:
	class UTexture2D*                            Texture;                                           // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct NWX.InputKeyPresentationData_Keyboard
struct FInputKeyPresentationData_Keyboard : public FInputKeyPresentationData
{
public:
	class UTexture2D*                            Texture;                                           // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x28(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.InstancedResourceNodeAddTransaction
struct FInstancedResourceNodeAddTransaction
{
public:
	struct FTransform                            WorldTransform;                                    // 0x0(0x60)(Edit, EditConst, SaveGame, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 Translation;                                       // 0x60(0x18)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   Rotation;                                          // 0x78(0x18)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TransactionID;                                     // 0x90(0x4)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ReplicatedInstanceId;                              // 0x94(0x4)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ResourceId;                                        // 0x98(0x4)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Health;                                            // 0x9C(0x2)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        StateId;                                           // 0x9E(0x1)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F3[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.InstancedResourceNodeUpdateTransaction
struct FInstancedResourceNodeUpdateTransaction
{
public:
	uint32                                       TransactionID;                                     // 0x0(0x4)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ReplicatedInstanceId;                              // 0x4(0x4)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Health;                                            // 0x8(0x2)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        StateId;                                           // 0xA(0x1)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F4[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.InstancedResourceNodeRemoveTransaction
struct FInstancedResourceNodeRemoveTransaction
{
public:
	uint32                                       TransactionID;                                     // 0x0(0x4)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ReplicatedInstanceId;                              // 0x4(0x4)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.NWXInteractionOption
struct FNWXInteractionOption
{
public:
	class FText                                  OptionName;                                        // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  OptionDescription;                                 // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisabledDescription;                               // 0x30(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERadialButtonType                 ButtonType;                                        // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 InteractionAssetUID;                               // 0x4C(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x5C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ConnectionAssetUID;                                // 0x60(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct NWX.NWXTargetData
struct FNWXTargetData : public FGameplayAbilityTargetData
{
public:
};

// 0x78 (0x78 - 0x0)
// ScriptStruct NWX.InteractionUIContext
struct FInteractionUIContext
{
public:
	class FText                                  MainText;                                          // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  SubText;                                           // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  PowerLevel;                                        // 0x30(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             OptionalIcon;                                      // 0x48(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDisabledText;                                 // 0x70(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowHintText;                                     // 0x71(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F7[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x178 (0x178 - 0x0)
// ScriptStruct NWX.InteractionData
struct FInteractionData
{
public:
	class AActor*                                InteractionActor;                                  // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x8(0xE8)(BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGuid                                 InteractionAssetUID;                               // 0xF0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInteractionUIContext                 InteractionUIContext;                              // 0x100(0x78)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x178 (0x180 - 0x8)
// ScriptStruct NWX.InteractionTargetData
struct FInteractionTargetData : public FNWXTargetData
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.IIMSphere
struct FIIMSphere
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W;                                                 // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.ActorAndInstanceIds
struct FActorAndInstanceIds
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                InstanceIds;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct NWX.AmbienceData
struct FAmbienceData : public FTableRowBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x10(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bAlive;                                            // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConiferous;                                       // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIIMPsithurismType                PsithurismType;                                    // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHigh;                                             // 0x33(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LeafOrdinal;                                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LeafPrimaryColor;                                  // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LeafSecondaryColor;                                // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LeafTertiaryColor;                                 // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LeafScale;                                         // 0x68(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallTime;                                          // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAkAudioEvent>          AudioEventFallTrunk;                               // 0x88(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          AudioEventFallBranches;                            // 0xB0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          AudioEventFallInterrupt;                           // 0xD8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   AmbienceVfxRow;                                    // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct NWX.IIMResourceInstanceConfig
struct FIIMResourceInstanceConfig
{
public:
	struct FInt32Interval                        CullDistance;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CastShadow;                                        // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectDynamicIndirectLighting;                    // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectDistanceFieldLighting;                      // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastDynamicShadow;                                // 0xB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastStaticShadow;                                 // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadowAsTwoSided;                             // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReceivesDecals;                                   // 0xE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTraversable;                                    // 0xF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsOccluder;                                    // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyInstance                         BodyInstance;                                      // 0x18(0x190)(Edit, NativeAccessSpecifierPublic)
	enum class EHasCustomNavigableGeometry       CustomNavigableGeometry;                           // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanAffectNavigation;                              // 0x1A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1FB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            MaterialOverrides;                                 // 0x1B0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x218 (0x218 - 0x0)
// ScriptStruct NWX.IIMResourceState
struct FIIMResourceState
{
public:
	TSoftObjectPtr<class UStaticMesh>            Mesh;                                              // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIIMResourceInstanceConfig            InstanceConfig;                                    // 0x28(0x1C0)(Edit, NativeAccessSpecifierPublic)
	int32                                        ComponentId;                                       // 0x1E8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ANWXGeometryCollection>  GeometryCollectionClass;                           // 0x1F0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.IIMResourceVariant
struct FIIMResourceVariant
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIIMResourceState>             States;                                            // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            FallingTreeMesh;                                   // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ANWXGeometryCollection>  GeometryCollectionClass;                           // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationDuration;                                 // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIIMSphere>                    LeafSockets;                                       // 0x70(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F8 - 0x8)
// ScriptStruct NWX.IIMResource
struct FIIMResource : public FTableRowBase
{
public:
	class FName                                  ResourceId;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalVariantWeight;                                // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIIMResourceVariant>           Variants;                                          // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsInteractive;                                    // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A200[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GameplayResourceId;                                // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AmbienceDataId;                                    // 0x34(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A201[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EIIMGameplayState>         StateMapping;                                      // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          LeafSocketNames;                                   // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResourceData                         GameplayResource;                                  // 0x68(0x80)(Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct FAmbienceData                         AmbienceData;                                      // 0xE8(0x110)(Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.IIMExternalNameMapping
struct FIIMExternalNameMapping : public FTableRowBase
{
public:
	class FName                                  ExternalName;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ResourceId;                                        // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.IIMExtents
struct FIIMExtents
{
public:
	struct FVector                               BoxExtents;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.AmbienceDataReference
struct FAmbienceDataReference
{
public:
	uint8                                        Pad_A202[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.IIMInstanceInternal
struct FIIMInstanceInternal
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       InternalResourceId;                                // 0x60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       InternalComponentId;                               // 0x64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       InternalInstanceId;                                // 0x68(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayActorId;                                   // 0x6C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         StateId;                                           // 0x70(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDead;                                           // 0x71(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A203[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.IIMResourceMapData
struct FIIMResourceMapData
{
public:
	class FName                                  ResourceId;                                        // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIIMResourceDataAsset*                 Resource;                                          // 0x8(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIIMSphere>                    LeafSockets;                                       // 0x10(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                StateComponentIDs;                                 // 0x20(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.IIMManagerSeeds
struct FIIMManagerSeeds
{
public:
	int32                                        CollectionSeed;                                    // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.InternalTemperature
struct FInternalTemperature
{
public:
	float                                        Temperature;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExternalTemperature;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2F4 (0x300 - 0xC)
// ScriptStruct NWX.InventoryEntryReplicatedItem
struct FInventoryEntryReplicatedItem : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_A204[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InventoryEntry;                                    // 0x10(0x2F0)(NativeAccessSpecifierPublic)
};

// 0xB8 (0x1C0 - 0x108)
// ScriptStruct NWX.InventoryEntryArraySerializer
struct FInventoryEntryArraySerializer : public FFastArraySerializer
{
public:
	uint8                                        Pad_A205[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntryReplicatedItem> Items;                                             // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A206[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.AttributeQualityMultiplierMap
struct FAttributeQualityMultiplierMap
{
public:
	TMap<enum class EItemQuality, float>         Map;                                               // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.TaggableSoundVariant
struct FTaggableSoundVariant
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          AkEventVariant;                                    // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchAll;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A207[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TagsToMatch;                                       // 0x30(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.TaggableSound
struct FTaggableSound
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          DefaultAkEvent;                                    // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTaggableSoundVariant>         AkEventVariants;                                   // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.ItemAudio_Depleted
struct FItemAudio_Depleted
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          DepletedSound;                                     // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepletedSoundHeightOffset;                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A208[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.ItemAudio_Pickup
struct FItemAudio_Pickup
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          PickupSound;                                       // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.ItemAudioPickup
struct FItemAudioPickup
{
public:
	struct FTaggableSound                        PickupSound;                                       // 0x0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.ItemAudioDropped
struct FItemAudioDropped
{
public:
	struct FTaggableSound                        DropSound;                                         // 0x0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.ResourceAudioSpent
struct FResourceAudioSpent
{
public:
	struct FTaggableSound                        AddedToStructureSound;                             // 0x0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTaggableSound                        AddedToCompletedStructureSound;                    // 0x38(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.ResourceAudioSpawned
struct FResourceAudioSpawned
{
public:
	struct FTaggableSound                        SpawnedSound;                                      // 0x0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct NWX.ItemAudioPhysics
struct FItemAudioPhysics
{
public:
	struct FTaggableSound                        PhysImpactSound;                                   // 0x0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTaggableSound                        PhysRollSound;                                     // 0x38(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTaggableSound                        PhysRollStopSound;                                 // 0x70(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        MinTimeBetweenImpacts;                             // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerImpactsOverRollLoop;                       // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A209[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct NWX.ResourceAudioChaosDebris
struct FResourceAudioChaosDebris
{
public:
	struct FTaggableSound                        BreakingSound;                                     // 0x0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTaggableSound                        DebrisLandingGroundSound;                          // 0x38(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTaggableSound                        DebrisLandingWaterSound;                           // 0x70(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct NWX.ItemAudioDurability
struct FItemAudioDurability
{
public:
	struct FTaggableSound                        NearBreakingFirstPerson;                           // 0x0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTaggableSound                        NearBreakingThirdPerson;                           // 0x38(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTaggableSound                        BrokenFirstPerson;                                 // 0x70(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTaggableSound                        BrokenThirdPerson;                                 // 0xA8(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.ItemAudioStatusEffect
struct FItemAudioStatusEffect
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          EffectAppliedOneShot;                              // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          EffectRemovedOneShot;                              // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          CrustLoopStart;                                    // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          CrustLoopEnd;                                      // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.ItemAudioSpellEffect
struct FItemAudioSpellEffect
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          SpellEffectAudio1P;                                // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          SpellEffectAudio3P;                                // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.ItemConstraintMatchData
struct FItemConstraintMatchData
{
public:
	bool                                         bQuantityConstraintMet;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentCount;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredCount;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.WeaponSwayData
struct FWeaponSwayData : public FTableRowBase
{
public:
	float                                        MinimumPitch;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumPitch;                                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchPadding;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Responsiveness;                                    // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResponsivenessAiming;                              // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Recovery;                                          // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoveryAiming;                                    // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.ItemData_Animation
struct FItemData_Animation
{
public:
	TSoftClassPtr<class UAnimInstance>           AnimClass;                                         // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ThirdPersonOverlayBank;                            // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimB_FP>                 FirstPersonAnimBank;                               // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DefaultSwayParameters;                             // 0x40(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FDataTableRowHandle> AlternativeSwayParameters;                         // 0x50(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ItemData_CreatureGrants
struct FItemData_CreatureGrants
{
public:
	struct FDataTableRowHandle                   CreatureGrants;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.ItemData_MeshInfo
struct FItemData_MeshInfo
{
public:
	TSoftObjectPtr<class USkeletalMesh>          HeldMesh;                                          // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            GroundMesh;                                        // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FCharacteristicDataReference, TSoftObjectPtr<class UStaticMesh>> CharacteristicGroundMeshes;                        // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.ItemData_BaselineAttributeValues
struct FItemData_BaselineAttributeValues
{
public:
	TMap<struct FGameplayAttribute, float>       Values;                                            // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ItemData_DefaultCharacteristic
struct FItemData_DefaultCharacteristic
{
public:
	TArray<struct FCharacteristicDataReference>  Characteristics;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.ItemData_WearProfile
struct FItemData_WearProfile
{
public:
	class UCurveTable*                           WearProfile;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.ItemData_VisualMesh
struct FItemData_VisualMesh
{
public:
	TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>> ThirdPersonAppearanceMeshes;                       // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          Mesh;                                              // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           MeshAnimationClass;                                // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.ItemData_ResourceCustomization
struct FItemData_ResourceCustomization
{
public:
	TMap<struct FCharacteristicDataReference, TSoftObjectPtr<class UResourceCustomizationDataAsset>> Customizations;                                    // 0x0(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ItemData_DefaultAttributeModifiers
struct FItemData_DefaultAttributeModifiers
{
public:
	TArray<struct FInstancedItemAttributeModifier> Modifiers;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.ItemData_RealmCard
struct FItemData_RealmCard
{
public:
	TSoftObjectPtr<class URealmCardDefinitionDataAsset> RealmCardDataAsset;                                // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ItemData_RealmCardDeploymentSet
struct FItemData_RealmCardDeploymentSet
{
public:
	class FString                                DeploymentSet;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.ItemData_Equippable
struct FItemData_Equippable
{
public:
	TArray<TSubclassOf<class UGameplayEffect>>   EquipEffects;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InteractionTags;                                   // 0x10(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EquipmentSlotTag;                                  // 0x34(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ALightweightAttachedItem>  LightweightActor;                                  // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   CameraShakeSet;                                    // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWX.ItemData_DefaultQuality
struct FItemData_DefaultQuality
{
public:
	enum class EItemQuality                      Quality;                                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWX.ItemData_Fuel
struct FItemData_Fuel
{
public:
	enum class EFuelType                         FuelType;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NWX.ItemData_WeaponMelee
struct FItemData_WeaponMelee
{
public:
	struct FGameplayTag                          MeleeImpactTag;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PowerSwingDamageModifier;                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PowerSwingStrengthModifier;                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ComboDamageModifier;                               // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x760 (0x760 - 0x0)
// ScriptStruct NWX.ItemData_WeaponRanged
struct FItemData_WeaponRanged
{
public:
	float                                        ProjectileSpeed;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RecoilYawRange;                                    // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             RecoilPitchRange;                                  // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RaycastDistance;                                   // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           RecoilCurve;                                       // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           RecoveryCurve;                                     // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           FalloffCurve;                                      // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  IronSightsPostProcess;                             // 0x50(0x6E0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        BaseSpread;                                        // 0x730(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangedWeaponReloadType           ReloadType;                                        // 0x734(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   RangedSFXRowHandle;                                // 0x738(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemDataReference>            AllowedAmmoTypes;                                  // 0x748(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ClipSize;                                          // 0x758(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A210[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.ItemData_Seed
struct FItemData_Seed
{
public:
	TSoftObjectPtr<class UItemSeedResourceRegistry> ResourceData;                                      // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinGrowTime;                                       // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGrowTime;                                       // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.ItemData_EssenceVFX
struct FItemData_EssenceVFX
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.ItemData_Techniques
struct FItemData_Techniques
{
public:
	TMap<enum class EInputActionTypes, TSoftObjectPtr<class UTechniqueDataAsset>> TechniqueReferences;                               // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StatusEffectLevel
struct FStatusEffectLevel
{
public:
	class UStatusEffectDataAsset*                StatusEffect;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        StatusEffectLevel;                                 // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A211[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.ItemData_Consumable
struct FItemData_Consumable
{
public:
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffects;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FStatusEffectLevel>            StatusEffects;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.ItemData_ProjectileLauncher
struct FItemData_ProjectileLauncher
{
public:
	float                                        LaunchDistance;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcParam;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.ItemData_Projectile
struct FItemData_Projectile
{
public:
	TSubclassOf<class AGASProjectile>            ProjectileClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactRadius;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A212[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGameplayEffect>>   ImpactGameplayEffects;                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UNWXGameplayAbility>       LaunchAbility;                                     // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNWXGameplayAbility>       FlightAbility;                                     // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNWXGameplayAbility>       PayloadAbility;                                    // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GCImpact;                                          // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GCFlight;                                          // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.RangedFeedback
struct FRangedFeedback
{
public:
	struct FVector                               FireEffectScale;                                   // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FireEffectSocket;                                  // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttach;                                           // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A213[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayToNext;                                       // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.AmmoDataScatter
struct FAmmoDataScatter
{
public:
	int32                                        ExtraPelletsPerBullet;                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConeWidth;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConeHeight;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.AmmoDataDamageOverTime
struct FAmmoDataDamageOverTime
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A214[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayEffect>           Effect;                                            // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct NWX.ItemData_Ammo
struct FItemData_Ammo
{
public:
	struct FGameplayTagContainer                 InteractionTags;                                   // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FAmmoDataDamageOverTime               DamageOverTime;                                    // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FAmmoDataScatter                      BulletScatter;                                     // 0x38(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A215[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRangedFeedback                       FeedbackEffectsOverride;                           // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           ImpactGC;                                          // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 MuzzleFlashTags;                                   // 0x78(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SurfaceImpactTag;                                  // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementImpactTag;                                  // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageToAdd;                                       // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A216[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGameplayEffect>>   EffectsToAdd;                                      // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.ItemData_FuelAudio
struct FItemData_FuelAudio
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          Added_FP;                                          // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          Added_TP;                                          // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.TotalRegionHiding
struct FTotalRegionHiding
{
public:
	TArray<struct FGameplayTag>                  SlotsToHide;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.ClothRegionHiding_Torso
struct FClothRegionHiding_Torso
{
public:
	int32                                        Regions;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.ClothRegionHiding_Gloves
struct FClothRegionHiding_Gloves
{
public:
	int32                                        Regions;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.ClothRegionHiding_Legs
struct FClothRegionHiding_Legs
{
public:
	int32                                        Regions;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.SkinRegionHiding_UpperBody
struct FSkinRegionHiding_UpperBody
{
public:
	int32                                        Regions;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.SkinRegionShowing_LowerBody
struct FSkinRegionShowing_LowerBody
{
public:
	int32                                        Regions;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.ItemData_RegionHiding
struct FItemData_RegionHiding
{
public:
	struct FTotalRegionHiding                    FullyHiddenSlots;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FClothRegionHiding_Torso              ClothingHiding_Torso;                              // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothRegionHiding_Gloves             ClothingHiding_Gloves;                             // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothRegionHiding_Legs               ClothingHiding_Legs;                               // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkinRegionHiding_UpperBody           SkinHiding_UpperBody;                              // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkinRegionShowing_LowerBody          SkinShowing_LowerBody;                             // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A217[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.ItemData_CombustionFuel
struct FItemData_CombustionFuel
{
public:
	float                                        ConsumptionTime;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWX.ItemData_HatType
struct FItemData_HatType
{
public:
	enum class EHatType                          HatType;                                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.ItemLightSettings
struct FItemLightSettings
{
public:
	class FName                                  LightSocketName;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           LightIntensityLerpCurve;                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DayIntensity;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NightIntensity;                                    // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTemperature;                                   // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A218[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temperature;                                       // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceRadius;                                      // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldCastShadows;                                // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A219[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.ItemSpotLightSettings
struct FItemSpotLightSettings
{
public:
	struct FItemLightSettings                    LightSettings;                                     // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InnerConeAngle;                                    // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterConeAngle;                                    // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.ItemData_LightEmitterLights
struct FItemData_LightEmitterLights
{
public:
	TArray<struct FItemLightSettings>            ItemPointLights;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FItemSpotLightSettings>        ItemSpotLights;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.ItemData_LightEmitter
struct FItemData_LightEmitter
{
public:
	struct FItemData_LightEmitterLights          FirstPersonLightweightData;                        // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FItemData_LightEmitterLights          ThirdPersonData;                                   // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bShouldDrainDurability;                            // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurabilityDrainPerSecond;                          // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.ItemData_ExtractionOverrides
struct FItemData_ExtractionOverrides
{
public:
	TMap<enum class EItemQuality, int32>         ExtractionYields;                                  // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.HooverStep
struct FHooverStep
{
public:
	TArray<class AItemProxyBase*>                HooverItems;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       HooverItemLocations;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ItemExtractionQuery
struct FItemExtractionQuery
{
public:
	class UItemConstraintDataAsset*              ExtractionConstraint;                              // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ExtractionCurve;                                   // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.ItemProcessingContext
struct FItemProcessingContext
{
public:
	class UDataAsset*                            ProcessingDataAsset;                               // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessingIndex;                                   // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessingQuantity;                                // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInventoryEntry>               ContextualInputs;                                  // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	bool                                         bIninitializeOutput;                               // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.ItemProxySharedRepMovement
struct FItemProxySharedRepMovement
{
public:
	struct FRepMovement                          RepMovement;                                       // 0x0(0x70)(Transient, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.ItemRepairRecipes
struct FItemRepairRecipes
{
public:
	TSet<struct FSkillDataReference>             ValidRecipes;                                      // 0x0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct NWX.ItemRewardDef
struct FItemRewardDef
{
public:
	struct FItemDefinition                       ItemToReward;                                      // 0x0(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        RewardWeight;                                      // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.ItemRewardData
struct FItemRewardData
{
public:
	TArray<struct FItemRewardDef>                PossibleRewards;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        NoRewardWeight;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.SynchronizedKeyMapping
struct FSynchronizedKeyMapping
{
public:
	class FName                                  PrimaryMappingName;                                // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SynchronizedMappingNames;                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.LandscapeAttributeData
struct FLandscapeAttributeData : public FTableRowBase
{
public:
	float                                        Px;                                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Py;                                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pz;                                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Slope;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.LoadoutSlot
struct FLoadoutSlot
{
public:
	class AEquippableItem*                       Item;                                              // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceID;                                        // 0x8(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemId;                                            // 0x20(0x80)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.VerbosityChange
struct FVerbosityChange
{
public:
	class FString                                CategoryName;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VerbosityName;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xAC (0xB8 - 0xC)
// ScriptStruct NWX.MapPinDataReplicatedItem
struct FMapPinDataReplicatedItem : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_A21F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapPinData                           Data;                                              // 0x10(0xA8)(NativeAccessSpecifierPublic)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct NWX.MapPinDataArraySerializer
struct FMapPinDataArraySerializer : public FFastArraySerializer
{
public:
	uint8                                        Pad_A220[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMapPinDataReplicatedItem>     Items;                                             // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x118 (0x120 - 0x8)
// ScriptStruct NWX.MapWaypointInfo
struct FMapWaypointInfo : public FTableRowBase
{
public:
	class FText                                  HoverLabel;                                        // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HoverDescription;                                  // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstance>      CompassIcon;                                       // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CompassIconTexture;                                // 0x88(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             WorldIconTexture;                                  // 0xB0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color_Discovered;                                  // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color_Undiscovered;                                // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color_Disabled;                                    // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayerCanRemoveOnSelect;                           // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMapMarkerType                    MapPinType;                                        // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A221[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VisibilityDistance;                                // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldSpaceVisibilityDistanceInMetres;              // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWaypointInWorld;                              // 0x114(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A222[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNWXUserWidget>            MapPinWidgetOverride;                              // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.EnemyStingerPair
struct FEnemyStingerPair
{
public:
	TSoftClassPtr<class UObject>                 EnemyClass;                                        // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         StingerEvent;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.EnemyStingerBucket
struct FEnemyStingerBucket
{
public:
	class FName                                  BucketLabel;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnemyStingerPair>             EnemiesInThisBucket;                               // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EMusicPriority                    StingerPriority;                                   // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A223[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct NWX.EnemyStingerBucketWithRange
struct FEnemyStingerBucketWithRange : public FEnemyStingerBucket
{
public:
	float                                        BucketRange;                                       // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A224[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct NWX.AmbientEnemyStingerBucket
struct FAmbientEnemyStingerBucket : public FEnemyStingerBucketWithRange
{
public:
	float                                        MinTimeBetweenStingers;                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeBetweenStingers;                            // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.KeyModeFilteredStinger
struct FKeyModeFilteredStinger
{
public:
	enum class EMusicKey                         Key;                                               // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMusicMode                        Mode;                                              // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A225[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         StingerEvent;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.AbilityActivationFailureFlags
struct FAbilityActivationFailureFlags
{
public:
	bool                                         bAbilitySystemInvalid;                             // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbilityNotGranted;                                // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbilitySpecInvalid;                               // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActorInfoInvalid;                                 // 0x3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivationInhibited;                              // 0x4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCooldownActive;                                   // 0x5(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCostsNotMet;                                      // 0x6(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTagsNotSatisfied;                                 // 0x7(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbilityInputBlocked;                              // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomLogicFailed;                                // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalAbilityFromServer;                           // 0xA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bServerAbilityFromClient;                          // 0xB(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.AccumulationInstance
struct FAccumulationInstance
{
public:
	float                                        CurrentAccumulation;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAccumulationHandle                   Handle;                                            // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAccumulationDataAsset> DataAsset;                                         // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct NWX.ActionStationAnimationData
struct FActionStationAnimationData : public FTableRowBase
{
public:
	struct FGameplayTag                          CreatureTag;                                       // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  EnterMontages;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  ExitMontages;                                      // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimMontage*                          InUseMontage;                                      // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ResetCharacterSettings
struct FResetCharacterSettings
{
public:
	uint8                                        Pad_A226[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.ActionStationTransitions
struct FActionStationTransitions : public FTableRowBase
{
public:
	int32                                        CurrentPos;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NextPos;                                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          TransitionMontage;                                 // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct NWX.ActionStationPositionInformation
struct FActionStationPositionInformation : public FTableRowBase
{
public:
	int32                                        Position;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A227[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          EnterMontage;                                      // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ExitMontage;                                       // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          DeathMontage;                                      // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          ActionMontage;                                     // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayAbility>          Ability;                                           // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct NWX.CollisionResetInfo
struct FCollisionResetInfo
{
public:
	uint8                                        Pad_A228[0x2C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.ActionStationCurrentUserInfo
struct FActionStationCurrentUserInfo
{
public:
	class ANWXAICharacter*                       User;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEntering;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsExiting;                                         // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A229[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Position;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PendingNewPosition;                                // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22A[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWX.CreatureHostilityData
struct FCreatureHostilityData
{
public:
	enum class ECreatureHostilityType            CreatureHostility;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.RagdollReplicationData
struct FRagdollReplicationData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocity;                                    // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct NWX.HitReactFlatData
struct FHitReactFlatData : public FTableRowBase
{
public:
	TArray<class UAnimMontage*>                  Montages;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EHitReactHealthType               HealthType;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDefaultReaction;                                 // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MustBeNearOrAboveRunSpeed;                         // 0x1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHitReactType                     ReactionType;                                      // 0x1B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHitReactVelocity                 HitVelocity;                                       // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x28(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct NWX.AudioHitReact
struct FAudioHitReact : public FTableRowBase
{
public:
	class UAkAudioEvent*                         AKAdditiveHitReactEvent;                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AKStunHitReactEvent;                               // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AKKnockDownHitReactEvent;                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AKKnockUpHitReactEvent;                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AKDeathEvent;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.DebugDamageHistoryEvent
struct FDebugDamageHistoryEvent
{
public:
	class FString                                Source;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EffectTags;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HitResult;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagValueContainer;                                 // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReceiverLocation;                                  // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceActorLocation;                               // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthRemaing;                                     // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeTime;                                          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.DebugDamageLog
struct FDebugDamageLog
{
public:
	TArray<struct FDebugDamageHistoryEvent>      DamageEvents;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Owner;                                             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.CarTurnData
struct FCarTurnData : public FTableRowBase
{
public:
	float                                        CarTurnRotationRate;                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CarTurnThresholdAngle;                             // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CarTurnLongAngleLimit;                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CarturnMovementSpeedPercentage;                    // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoveSpeedToRotationRatio;                          // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceMaxSpeedOnTurn;                              // 0x1C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct NWX.AICCreatureData
struct FAICCreatureData : public FTableRowBase
{
public:
	TArray<TSoftClassPtr<class UAIAction>>       AIActions;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    NavFilter;                                         // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CreatureDispersionRadius;                          // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CreatureRunDistance;                               // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoiterDurationMin;                                 // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoiterDurationMax;                                 // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SleepDurationMin;                                  // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SleepDurationMax;                                  // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeAttackCooldown;                               // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeCombatDistance;                               // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunningMeleeAttackDistance;                        // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeCombatRangeMin;                               // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeCombatRangeMax;                               // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangedAttackCooldown;                              // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangedCombatDistance;                              // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangedCombatRangeMin;                              // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangedCombatRangeMax;                              // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EvadeChance;                                       // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnemyAlertDistance;                                // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FleeCombatRangeMin;                                // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FleeCombatRangeMax;                                // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AggressionRangeWhileMaxHealth;                     // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ULiveServicesDataTable> PhaseMap;                                          // 0x70(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCarTurnData                          CarTurns;                                          // 0x98(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.NWXAIRangeEvent
struct FNWXAIRangeEvent
{
public:
	uint8                                        Pad_A22F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SeenActor;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Observer;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.RangeConfigProperty
struct FRangeConfigProperty
{
public:
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        RangeRadius;                                       // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A230[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.SpawnerClassInfo
struct FSpawnerClassInfo
{
public:
	class FString                                ClassName;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredAmount;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnedAmount;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.AIActorCount
struct FAIActorCount
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.AIDenDebugStats
struct FAIDenDebugStats
{
public:
	class FString                                ClassName;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClaimedCount;                                      // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalCount;                                        // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NWX.AISpawnerDebugStats
struct FAISpawnerDebugStats
{
public:
	class FName                                  TableRowName;                                      // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnedCount;                                      // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCount;                                          // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.AIStatData
struct FAIStatData
{
public:
	int32                                        NumberOfAuthAI;                                    // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfNonAuthAI;                                 // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfDeadAI;                                    // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfSpawnersOnHomeWorker;                      // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfSpawnersRoaming;                           // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfDens;                                      // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfClaimedDens;                               // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfReservedAI;                                // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberOfAI;                                     // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfPlayers;                                   // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RealmFerocity;                                     // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ServerFPS;                                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WildlifeTableName;                                 // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIActorCount>                 AICountByClass;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAIDenDebugStats>              DenStats;                                          // 0x50(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAISpawnerDebugStats>          SpawnerStats;                                      // 0x60(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.MantleData
struct FMantleData
{
public:
	class UAnimMontage*                          UpMontage;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          OverMontage;                                       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          DownMontage;                                       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          OutMontage;                                        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.AnimSequenceCache
struct FAnimSequenceCache
{
public:
	class UAnimSequenceBase*                     AnimSequence;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A231[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.DeploymentList
struct FDeploymentList
{
public:
	TArray<struct FDeployment>                   Deployments;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.WeightedScore
struct FWeightedScore
{
public:
	float                                        NormalizedScore;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct NWX.MovementSpeedBase
struct FMovementSpeedBase : public FTableRowBase
{
public:
	TMap<enum class EMovementSpeed, float>       MovementSpeedMap;                                  // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct NWX.SharedRepMovement
struct FSharedRepMovement
{
public:
	struct FRepMovement                          RepMovement;                                       // 0x0(0x70)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RepTimeStamp;                                      // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RepMovementMode;                                   // 0x74(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProxyIsJumpForceApplied;                          // 0x75(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCrouched;                                       // 0x76(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A232[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.POIPlugNameList
struct FPOIPlugNameList
{
public:
	TArray<class FString>                        PlugNames;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.NWXClusterCollectionPresentationData
struct FNWXClusterCollectionPresentationData
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENWXDiscoveryPresentationState    DiscoveryPresentationState;                        // 0x58(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A233[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.SuppressionTraitChangedProperties
struct FSuppressionTraitChangedProperties
{
public:
	class AActor*                                TraitOwner;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivated;                                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A234[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EffectRadius;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.CreatureChallengeEntry
struct FCreatureChallengeEntry
{
public:
	struct FSoftClassPath                        Path;                                              // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.NWXCreditsContributor
struct FNWXCreditsContributor : public FTableRowBase
{
public:
	class FString                                Title;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.NWXCreditsDepartment
struct FNWXCreditsDepartment : public FTableRowBase
{
public:
	class FString                                DepartmentName;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNWXCreditsContributor>        Contributors;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct NWX.CreditsCSVStruct
struct FCreditsCSVStruct : public FTableRowBase
{
public:
	class FString                                Section;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Heading;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Titles;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.CreditsTitle
struct FCreditsTitle
{
public:
	class FString                                TitleName;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Contributors;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.CreditsHeading
struct FCreditsHeading
{
public:
	class FString                                HeadingName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FCreditsTitle>    Titles;                                            // 0x10(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.CreditsSection
struct FCreditsSection
{
public:
	TMap<class FString, struct FCreditsHeading>  Headings;                                          // 0x0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct NWX.CreditsData
struct FCreditsData : public FTableRowBase
{
public:
	TMap<class FString, struct FCreditsSection>  Sections;                                          // 0x8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.NWXCreditsTeam
struct FNWXCreditsTeam : public FTableRowBase
{
public:
	class FString                                TeamName;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNWXCreditsDepartment>         Departments;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.AbilityEffectTriggerData
struct FAbilityEffectTriggerData
{
public:
	struct FGameplayTag                          TriggerTag;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Bool
struct FGameplayAbilityTargetData_Bool : public FGameplayAbilityTargetData
{
public:
	bool                                         Boolean;                                           // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A235[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Byte
struct FGameplayAbilityTargetData_Byte : public FGameplayAbilityTargetData
{
public:
	uint8                                        Byte;                                              // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A236[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Int
struct FGameplayAbilityTargetData_Int : public FGameplayAbilityTargetData
{
public:
	int32                                        Integer;                                           // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A237[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Int64
struct FGameplayAbilityTargetData_Int64 : public FGameplayAbilityTargetData
{
public:
	int64                                        Integer64;                                         // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Float
struct FGameplayAbilityTargetData_Float : public FGameplayAbilityTargetData
{
public:
	float                                        Float;                                             // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A238[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_String
struct FGameplayAbilityTargetData_String : public FGameplayAbilityTargetData
{
public:
	class FString                                String;                                            // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Text
struct FGameplayAbilityTargetData_Text : public FGameplayAbilityTargetData
{
public:
	class FText                                  Text;                                              // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Vector
struct FGameplayAbilityTargetData_Vector : public FGameplayAbilityTargetData
{
public:
	struct FVector                               Vector;                                            // 0x8(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Rotator
struct FGameplayAbilityTargetData_Rotator : public FGameplayAbilityTargetData
{
public:
	struct FRotator                              Rotator;                                           // 0x8(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x150 - 0x150)
// ScriptStruct NWX.GameplayAbilityTargetData_TransformInfo
struct FGameplayAbilityTargetData_TransformInfo : public FGameplayAbilityTargetData_LocationInfo
{
public:
};

// 0x68 (0x70 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Transform
struct FGameplayAbilityTargetData_Transform : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_A239[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Object
struct FGameplayAbilityTargetData_Object : public FGameplayAbilityTargetData
{
public:
	TWeakObjectPtr<class UObject>                Object;                                            // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Class
struct FGameplayAbilityTargetData_Class : public FGameplayAbilityTargetData
{
public:
	class UClass*                                TargetClass;                                       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_GameplayTag
struct FGameplayAbilityTargetData_GameplayTag : public FGameplayAbilityTargetData
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x8(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_GameplayTagContainer
struct FGameplayAbilityTargetData_GameplayTagContainer : public FGameplayAbilityTargetData
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x8(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_Name
struct FGameplayAbilityTargetData_Name : public FGameplayAbilityTargetData
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_DataTableRowHandle
struct FGameplayAbilityTargetData_DataTableRowHandle : public FGameplayAbilityTargetData
{
public:
	struct FDataTableRowHandle                   RowHandle;                                         // 0x8(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.TagValue
struct FTagValue
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.TagValueContainer
struct FTagValueContainer
{
public:
	TArray<struct FTagValue>                     TagValues;                                         // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0xC0 - 0x80)
// ScriptStruct NWX.NWXGameplayEffectContext
struct FNWXGameplayEffectContext : public FGameplayEffectContext
{
public:
	struct FTagValueContainer                    MMCIntermediateOutputs;                            // 0x80(0x10)(NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectCue>            DynamicGameplayCues;                               // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UObject>>        Objects;                                           // 0xA0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FHitResult>                    MultiHits;                                         // 0xB0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_Boolean
struct FGameplayAbilityPayload_Boolean : public FGameplayAbilityPayload
{
public:
	bool                                         bValue;                                            // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A23A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_Integer
struct FGameplayAbilityPayload_Integer : public FGameplayAbilityPayload
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A23B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_Vector
struct FGameplayAbilityPayload_Vector : public FGameplayAbilityPayload
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_Float
struct FGameplayAbilityPayload_Float : public FGameplayAbilityPayload
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A23C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_String
struct FGameplayAbilityPayload_String : public FGameplayAbilityPayload
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_Name
struct FGameplayAbilityPayload_Name : public FGameplayAbilityPayload
{
public:
	class FName                                  Value;                                             // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_Guid
struct FGameplayAbilityPayload_Guid : public FGameplayAbilityPayload
{
public:
	struct FGuid                                 Value;                                             // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_GameplayTagContainer
struct FGameplayAbilityPayload_GameplayTagContainer : public FGameplayAbilityPayload
{
public:
	struct FGameplayTagContainer                 Value;                                             // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_DataTableRowHandle
struct FGameplayAbilityPayload_DataTableRowHandle : public FGameplayAbilityPayload
{
public:
	struct FDataTableRowHandle                   Value;                                             // 0x8(0x10)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.GameplayAbilityPayload_SoftObjectPath
struct FGameplayAbilityPayload_SoftObjectPath : public FGameplayAbilityPayload
{
public:
	struct FSoftObjectPath                       Value;                                             // 0x8(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.GenericContainerCosmeticSettings
struct FGenericContainerCosmeticSettings
{
public:
	struct FVector2D                             SizeOverride;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseFloatyTooltip;                                  // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A23D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumColumns;                                        // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.GenericContainerItemGroup
struct FGenericContainerItemGroup
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Requirements;                                      // 0x18(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.NWXGuideBookCategoryChangedTelemetryData
struct FNWXGuideBookCategoryChangedTelemetryData
{
public:
	uint8                                        Pad_A23E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.NWXGuideBookEntrySelectedTelemetryData
struct FNWXGuideBookEntrySelectedTelemetryData
{
public:
	uint8                                        Pad_A23F[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct NWX.ItemPresentationData
struct FItemPresentationData
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             FullSizeIcon;                                      // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AVFXTag;                                           // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.ItemPresentationOverrideData
struct FItemPresentationOverrideData
{
public:
	bool                                         bOverrideName;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A240[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bOverrideDescription;                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A241[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bOverrideIcon;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A242[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAVFXTag;                                  // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A243[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AVFXTag;                                           // 0x74(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A244[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.ItemTagPresentationData
struct FItemTagPresentationData
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FItemPresentationOverrideData         Data;                                              // 0x20(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.TargetServerData
struct FTargetServerData
{
public:
	class FString                                HostPlatformID;                                    // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetShardID;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetHostProfileID;                               // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.StructureTraitCollectionRecipeAssetGrouping
struct FStructureTraitCollectionRecipeAssetGrouping
{
public:
	class UStructureTraitTypeUIData*             CollectionUIData;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNWXMenuDataEntry*>             RecipeMenuDataEntries;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct NWX.MenuDataRelevantFilter
struct FMenuDataRelevantFilter : public FTableRowBase
{
public:
	class FName                                  PESIdentifier;                                     // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         PresentationMatchesFilterState;                    // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A245[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNWXMenuDataEntryFilter>   Filter;                                            // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsActiveByDefault;                                 // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A246[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct NWX.NWXNPCData
struct FNWXNPCData : public FTableRowBase
{
public:
	TArray<struct FGameplayTag>                  InitialTags;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A247[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    DefaultWeaponReference;                            // 0x20(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogue*                             AmbientDialogue;                                   // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogue*                             ConversationDialogue;                              // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           MenusAvailable;                                    // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NWX.NWXNPCHumanLoadoutData
struct FNWXNPCHumanLoadoutData
{
public:
	struct FItemDataReference                    ItemReference;                                     // 0x0(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicTypedStructs                  InstancedData;                                     // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0xE8 - 0xC0)
// ScriptStruct NWX.NWXNPCHumanData
struct FNWXNPCHumanData : public FNWXNPCData
{
public:
	bool                                         bUseRandomizedAppearance;                          // 0xC0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A248[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Appearance;                                        // 0xC8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNWXNPCHumanLoadoutData>       DefaultLoadout;                                    // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct NWX.NWXNPCEstateData
struct FNWXNPCEstateData : public FNWXNPCHumanData
{
public:
	TArray<struct FDataTableRowHandle>           Desires;                                           // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAddRandomDesires;                                 // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A249[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct NWX.NWXNPCNarrativeData
struct FNWXNPCNarrativeData : public FNWXNPCHumanData
{
public:
	TArray<enum class EFeatureFlag>              RequiredFeatures;                                  // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredPOITags;                                   // 0xF8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FRealmPlacementRequirement>    RealmRequirements;                                 // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ANWXAICharacter>         CharacterClass;                                    // 0x128(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   QuestGiverHandle;                                  // 0x150(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowInRealmPreview;                               // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesNarrativeMapPin;                              // 0x161(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A24A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMapPinComponent>          MapPinComponentOverride;                           // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   MapPinDataRow;                                     // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UShopDescriptorDataAsset> ShopDescriptor;                                    // 0x180(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCreatureAnimationDataAsset> AnimationDataAsset;                                // 0x1A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct NWX.NWXNPCSatisfactionData
struct FNWXNPCSatisfactionData : public FTableRowBase
{
public:
	class UDataTable*                            Desires;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartingDesires;                                   // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinSatisfaction;                                   // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSatisfaction;                                   // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThresholdShoes;                                    // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThresholdGloves;                                   // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThresholdPants;                                    // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThresholdShirt;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThresholdHat;                                      // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RestDurationMin;                                   // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RestDurationMax;                                   // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           RestDurationCurve;                                 // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RestTimeBetweenMin;                                // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RestTimeBetweenMax;                                // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           RestTimeBetweenCurve;                              // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.AbilityMontageFields
struct FAbilityMontageFields
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          FirstPersonItem;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          FirstPersonCharacter;                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ThirdPersonItem;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ThirdPersonCharacter;                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.AbilityMontages
struct FAbilityMontages
{
public:
	TArray<class UAnimMontage*>                  FirstPersonItem;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  FirstPersonCharacter;                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  ThirdPersonItem;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  ThirdPersonCharacter;                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.ServiceDetails
struct FServiceDetails
{
public:
	class FString                                ServiceToken;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileId;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientSessionID;                                   // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.PlacementSettings
struct FPlacementSettings
{
public:
	float                                        Rotation;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLastRotation;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A24B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.DiscoveryActivationRule
struct FDiscoveryActivationRule
{
public:
	struct FGameplayTagQuery                     RealmTagQuery;                                     // 0x0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UDiscoverySet*                         Discoveries;                                       // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.AttributesForBox
struct FAttributesForBox
{
public:
	TArray<struct FGameplayAttribute>            Attributes;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.LegItem
struct FLegItem
{
public:
	struct FVector                               LegPosition;                                       // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LegPaAlpha;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A24C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.CardGroupEntries
struct FCardGroupEntries
{
public:
	uint8                                        Pad_A24D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.RealmCardTriggeredEffect
struct FRealmCardTriggeredEffect : public FTableRowBase
{
public:
	TArray<struct FRealmPlacementRequirement>    Requirements;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.NWXAlwaysRelevantActorInfo
struct FNWXAlwaysRelevantActorInfo
{
public:
	class UNetConnection*                        Connection;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LastViewer;                                        // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LastViewTarget;                                    // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.ResourceLevelRange
struct FResourceLevelRange
{
public:
	int32                                        MinPowerLevel;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPowerLevel;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct NWX.ResourceGlossaryData
struct FResourceGlossaryData
{
public:
	struct FGuid                                 Uid;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  GenericItemName;                                   // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  CharacteristicName;                                // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x58(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SortingTags;                                       // 0x80(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Traits;                                            // 0xA0(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FResourceLevelRange                   LevelRange;                                        // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UCraftingRecipeAsset>> RealmCardRecipes;                                  // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NWX.NWXSquadActionData
struct FNWXSquadActionData
{
public:
	TMap<TSubclassOf<class ANWXAICharacter>, TSubclassOf<class UNWXSquadMemberAction>> MemberActions;                                     // 0x0(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UNWXSquadMemberAction>     DefaultMemberAction;                               // 0x50(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNWXSquadAction>           SquadAction;                                       // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A24E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct NWX.NWXSquadActionDataSoft
struct FNWXSquadActionDataSoft
{
public:
	TMap<TSoftClassPtr<class ANWXAICharacter>, TSoftClassPtr<class UNWXSquadMemberAction>> MemberActions;                                     // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UNWXSquadMemberAction>   DefaultMemberAction;                               // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UNWXSquadAction>         SquadAction;                                       // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldStopOnBTreeFinished;                        // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A24F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x428 (0x430 - 0x8)
// ScriptStruct NWX.NWXSynth2DSliderStyle
struct FNWXSynth2DSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_A250[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           NormalThumbImage;                                  // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledThumbImage;                                // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBarImage;                                    // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImage;                                   // 0x350(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        BarThickness;                                      // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A251[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.RecordPerformanceConfig
struct FRecordPerformanceConfig
{
public:
	float                                        InitalDelay;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenCaptures;                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CaptureDuration;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A252[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.StatusEffectHandle
struct FStatusEffectHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.StatusEffectInstance
struct FStatusEffectInstance
{
public:
	class UStatusEffectDataAsset*                StatusEffectDataAsset;                             // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A253[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.StructurePartInitialData
struct FStructurePartInitialData
{
public:
	float                                        Health;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A254[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItemReward*>                   ItemRewards;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_ObjectArray
struct FGameplayAbilityTargetData_ObjectArray : public FNWXTargetData
{
public:
	TArray<TWeakObjectPtr<class UObject>>        Objects;                                           // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.GuidArray
struct FGuidArray
{
public:
	TArray<struct FGuid>                         GuidArray;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.GuidArrayWithQuantity
struct FGuidArrayWithQuantity
{
public:
	TArray<struct FGuid>                         GuidArray;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Quantities;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.SKAChildrenArray
struct FSKAChildrenArray
{
public:
	TArray<struct FGuid>                         Skills;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         Recipes;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         Schematics;                                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.TraversalTraceData
struct FTraversalTraceData
{
public:
	struct FVector                               StartLocation;                                     // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardTraceDistance;                              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardTraceHeight;                                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardTraceRadius;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A255[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.TraversalTraceResult
struct FTraversalTraceResult
{
public:
	enum class ELedgeType                        TransitionType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A256[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialLandingLocation;                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FinalLandingLocation;                              // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.TransitionMontages
struct FTransitionMontages : public FTableRowBase
{
public:
	class UAnimMontage*                          FPMontage;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          FBMontage;                                         // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          TPMontage;                                         // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.UIGroupInfo
struct FUIGroupInfo
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.CreateProfile
struct FCreateProfile
{
public:
	class FString                                RequestedPublicName;                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrivateName;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           AppearanceMetadata;                                // 0x20(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x3F8 (0x3F8 - 0x0)
// ScriptStruct NWX.UILoginInfo
struct FUILoginInfo
{
public:
	enum class E_UILoginState                    State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A257[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Platform;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FClientShard>     ShardDetails;                                      // 0x38(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                CurrentShard;                                      // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSelectableProfile>            Profiles;                                          // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSelectableProfile                    NewlyCreatedProfile;                               // 0xA8(0x260)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FDeployment>                   Deployments;                                       // 0x308(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                BootstrappedDeployment;                            // 0x318(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A258[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            AccountRoles;                                      // 0x370(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FOnlineServiceStatus                  LastStatus;                                        // 0x3C0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                PreferredRegion;                                   // 0x3D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRegion>                       Regions;                                           // 0x3E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.NWXUserWidgetHoverTelemetryData
struct FNWXUserWidgetHoverTelemetryData
{
public:
	uint8                                        Pad_A259[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.NWXWindowTelemetryData
struct FNWXWindowTelemetryData
{
public:
	uint8                                        Pad_A25A[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x158 - 0x0)
// ScriptStruct NWX.CapsulePrediction
struct FCapsulePrediction
{
public:
	float                                        MaxSimulationTime;                                 // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A25B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TraceName;                                         // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ApexLocation;                                      // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LandingLocation;                                   // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StopLocation;                                      // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            CapsuleTraceHitResult;                             // 0x58(0xE8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bReachedAppex;                                     // 0x140(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReachedStop;                                      // 0x141(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A25C[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.NWXTargetData_OverlapResults
struct FNWXTargetData_OverlapResults : public FNWXTargetData
{
public:
	TArray<struct FOverlapResultWraper>          OverlapResultWrappers;                             // 0x8(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct NWX.NWXTargetData_HitResults
struct FNWXTargetData_HitResults : public FNWXTargetData
{
public:
	TArray<struct FHitResult>                    HitResults;                                        // 0x8(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.PlayerPermission
struct FPlayerPermission
{
public:
	class FString                                PersistentUniqueID;                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerDisplayName;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAllowed;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A25D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          PlayerState;                                       // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.MemberStatus
struct FMemberStatus
{
public:
	class FString                                DeploymentName;                                    // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrivateName;                                       // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct NWX.PerfStats
struct FPerfStats
{
public:
	float                                        IncSum;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncAve;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncMax;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncMin;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExcSum;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExcAve;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExcMax;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExcMin;                                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InRange;                                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A25E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.CountStats
struct FCountStats
{
public:
	float                                        Ave;                                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.RealmState
struct FRealmState
{
public:
	TArray<struct FRealmCardDefinitionReference> ActiveRealmCards;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.CreaturePersistentData
struct FCreaturePersistentData
{
public:
	struct FVector                               SpawnPosition;                                     // 0x0(0x18)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ANWXAISpawner>             SpawnerClass;                                      // 0x18(0x8)(BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   SpawnerDataHandle;                                 // 0x20(0x10)(BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECreatureType                     BudgetToUse;                                       // 0x30(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A25F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCreatureSpecificPersistentData*> CreatureSpecificData;                              // 0x38(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, SaveGame, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.SupportMeshInitParameters
struct FSupportMeshInitParameters
{
public:
	uint8                                        Pad_A260[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.StructureSpawnContext
struct FStructureSpawnContext
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStructureState                   SpawnState;                                        // 0x60(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStructureOriginatorType          OriginatorType;                                    // 0x61(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStructureHealthMode              HealthMode;                                        // 0x62(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A261[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.InputMappingContextRequest
struct FInputMappingContextRequest
{
public:
	int32                                        RequestCounter;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.PlayerLoadoutDataReference
struct FPlayerLoadoutDataReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x0(0x20)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A262[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.LoadoutItemCustomization
struct FLoadoutItemCustomization
{
public:
	TArray<TSoftObjectPtr<class UResourceCustomizationDataAsset>> MaterialData;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct NWX.BodyTypeStartingItems
struct FBodyTypeStartingItems
{
public:
	struct FItemDefinition                       BasicItem;                                         // 0x0(0xA0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<enum class EPlayerBackground, struct FLoadoutItemCustomization> PlayerBackgroundCustomization;                     // 0xA0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                         bUseBodyTypeBasedItems;                            // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A263[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EBodyType, struct FItemDefinition> BodyTypeSpecificItems;                             // 0xF8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_A264[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct NWX.PlayerLoadout
struct FPlayerLoadout
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FBodyTypeStartingItems> InitialSlottedItems;                               // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FItemDefinition>               ToolbarItems;                                      // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FItemDefinition>               OffHandToolbarItems;                               // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FItemDefinition>               InitialBackpackItems;                              // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkillDataReference                   InitialSkills;                                     // 0xB0(0xE0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   InitialGameplayEffects;                            // 0x190(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NWX.CharacterDissolveData
struct FCharacterDissolveData
{
public:
	float                                        DissolveTime;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DissolveFloor;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DissolveCeiling;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DissolveTag;                                       // 0xC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.POIPlugSelectionPredicate
struct FPOIPlugSelectionPredicate : public FTableRowBase
{
public:
	enum class EPOIPlugSelectionQualifier        Qualifier;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Quantity;                                          // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPOIPlugContext                   Context;                                           // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Unique;                                            // 0xB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MustAlwaysSucceed;                                 // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A265[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.POIData
struct FPOIData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        POIRadius;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPOIType                          POIType;                                           // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasRoad : 1;                                      // Mask: 0x1, PropSize: 0x10x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsInWater : 1;                                    // Mask: 0x2, PropSize: 0x10x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsOnPlateau : 1;                                  // Mask: 0x4, PropSize: 0x10x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsInClearing : 1;                                 // Mask: 0x8, PropSize: 0x10x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsUnused : 1;                                     // Mask: 0x10, PropSize: 0x10x35(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsHub : 1;                                        // Mask: 0x20, PropSize: 0x10x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_23A : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A266[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RegionMask;                                        // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DistanceToWater;                                   // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClusterTheme;                                      // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        POIHeight;                                         // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A267[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.ClusterDistribution
struct FClusterDistribution
{
public:
	int32                                        StrongThemePercentage;                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WeakThemePercentage;                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NullPercentage;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct NWX.ClusterCreatureData
struct FClusterCreatureData : public FTableRowBase
{
public:
	TArray<struct FRealmPlacementRequirement>    Requirements;                                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 CreatureTags;                                      // 0x18(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.ClusterCharacteristicWeightPair
struct FClusterCharacteristicWeightPair
{
public:
	struct FCharacteristicDataReference          Characteristic;                                    // 0x0(0x90)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A268[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.ClusterCharacteristicRealmRequirement
struct FClusterCharacteristicRealmRequirement
{
public:
	struct FRealmPlacementRequirement            RealmRequirement;                                  // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FClusterCharacteristicWeightPair> CharacteristicWeights;                             // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.ClusterCharacteristicData
struct FClusterCharacteristicData
{
public:
	float                                        NoCharacteristicWeight;                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A269[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FClusterCharacteristicRealmRequirement> PossibleCharacteristics;                           // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct NWX.FactionPaletteKey
struct FFactionPaletteKey
{
public:
	enum class EPlugPalette                      Palette;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFaction                          Faction;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.ConfigLevelSelection
struct FConfigLevelSelection
{
public:
	struct FSoftLevelPath                        Level;                                             // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ConfigLevelSelectionGroup
struct FConfigLevelSelectionGroup
{
public:
	TArray<struct FConfigLevelSelection>         Selections;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct NWX.ClusterTheme
struct FClusterTheme : public FTableRowBase
{
public:
	uint8                                        Pad_A26A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClusterDistribution                  DistributionOverride;                              // 0x10(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRealmPlacementRequirement>    Requirements;                                      // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<enum class EBiomeID>                    Biomes;                                            // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FClusterCreatureData>          Creatures;                                         // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FClusterCharacteristicData            CharacteristicData;                                // 0x90(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class EPlugEnvironment                  PlugEnvironment;                                   // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlugPalette                      PlugPalette;                                       // 0xA9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EEncounterType>            PlugEncounterTypes;                                // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaximumClusterRegions;                             // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.DefaultClusterTheme
struct FDefaultClusterTheme : public FTableRowBase
{
public:
	enum class EPOIType                          POIType;                                           // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   DefaultTheme;                                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.POISocketData
struct FPOISocketData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Footprint;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESocketShape                      Shape;                                             // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct NWX.POIPlugStreamingLevelDefinition
struct FPOIPlugStreamingLevelDefinition : public FTableRowBase
{
public:
	uint8                                        Pad_A270[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftLevelPath                        LevelPath;                                         // 0x18(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Footprint;                                         // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterType                    EncounterType;                                     // 0x3C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlugEnvironment                  Environment;                                       // 0x3D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlugPalette                      Palette;                                           // 0x3E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESocketShape                      Shape;                                             // 0x3F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   SelectionPredicate;                                // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 MetaData;                                          // 0x50(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.POIThemeOverride
struct FPOIThemeOverride
{
public:
	uint8                                        Pad_A271[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsEnabled;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A272[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct NWX.POIEnvironmentOverride
struct FPOIEnvironmentOverride : public FPOIThemeOverride
{
public:
	enum class EPlugEnvironment                  Environment;                                       // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A273[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct NWX.POIPaletteOverride
struct FPOIPaletteOverride : public FPOIThemeOverride
{
public:
	enum class EPlugPalette                      Palette;                                           // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A274[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x20 - 0x10)
// ScriptStruct NWX.POIEncounterOverride
struct FPOIEncounterOverride : public FPOIThemeOverride
{
public:
	TArray<enum class EEncounterType>            EncounterTypes;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x170 (0x178 - 0x8)
// ScriptStruct NWX.POIStreamingLevelDefinition
struct FPOIStreamingLevelDefinition : public FTableRowBase
{
public:
	uint8                                        Pad_A275[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftLevelPath                        POILevelPath;                                      // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EPOIType                          POI_Type;                                          // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A276[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class EBiomeID>                    Biomes;                                            // 0x48(0x50)(NativeAccessSpecifierPublic)
	int32                                        Footprint;                                         // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPOIRequirement                   RoadRequirement;                                   // 0x9C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPOIRequirement                   WaterRequirement;                                  // 0x9D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPOIRequirement                   HubRequirement;                                    // 0x9E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPOIRequirement                   PlateauRequirement;                                // 0x9F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinDistanceToWater;                                // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDistanceToWater;                                // 0xA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0xA8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        MaxAllowed;                                        // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRequired;                                       // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRealmPlacementRequirement>    RealmRequirements;                                 // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IsNull;                                            // 0xE0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A277[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           StrongClusterThemes;                               // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           WeakClusterThemes;                                 // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlacementCountChannel;                             // 0x10C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPOIEnvironmentOverride               EnvironmentOverride;                               // 0x110(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FPOIPaletteOverride                   PaletteOverride;                                   // 0x128(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FPOIEncounterOverride                 EncounterOverride;                                 // 0x140(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FPOISocketData>                Sockets;                                           // 0x160(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDataTable*                            ResourceListDT;                                    // 0x170(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.POIStreamingLevelDefinitionProxy
struct FPOIStreamingLevelDefinitionProxy
{
public:
	enum class EPOIStreamingLevelDefinitionProxySource Source;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A278[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftLevelPath                        Level;                                             // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	int32                                        Footprint;                                         // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A279[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Reference;                                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWX.BiomeIDMap
struct FBiomeIDMap
{
public:
	uint8                                        Pad_A27A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A8 (0x1A8 - 0x0)
// ScriptStruct NWX.POIStreamingLevelDependency
struct FPOIStreamingLevelDependency
{
public:
	struct FPOIStreamingLevelDefinition          Level;                                             // 0x0(0x178)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x178(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x190(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.SimulatorMatrixConfigMap
struct FSimulatorMatrixConfigMap
{
public:
	class FString                                MapPath;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.SimulatorMatrixConfigTemporal
struct FSimulatorMatrixConfigTemporal
{
public:
	struct FRealmInfluenceValues                 InfluenceLevels;                                   // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        RealmTags;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct NWX.POISimulatorEditorConfig
struct FPOISimulatorEditorConfig
{
public:
	class UWorld*                                Map;                                               // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    BiomeCard;                                         // 0x10(0x80)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemDataReference>            MajorCards;                                        // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FItemDataReference>            MinorCards;                                        // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDataTable*                            PlugPredicates;                                    // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DefaultClusterThemes;                              // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.POISimulatorConfig
struct FPOISimulatorConfig
{
public:
	class UWorld*                                Map;                                               // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ClusterThemeTable;                                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            PlugPredicates;                                    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DefaultClusterThemes;                              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27C[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPOIAssetPartition*                    POIAssetPartition;                                 // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlugAssetPartition*                   PlugAssetPartition;                                // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct NWX.ProjectileData
struct FProjectileData : public FTableRowBase
{
public:
	struct FGameplayTag                          SourceTag;                                         // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AttackTypeImpactTag;                               // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementImpactTag;                                  // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachLaunchSound;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAkAudioEvent>          FizzleSound;                                       // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          LaunchSound;                                       // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          StartLoop;                                         // 0x78(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          StopLoop;                                          // 0xA0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectileLifetime;                                // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopOnPayload;                                     // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideOnPayload;                                     // 0xCD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnMuzzleFlashVFX;                              // 0xCE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27E[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.PuckMomentParams
struct FPuckMomentParams
{
public:
	class APlayerController*                     Audience;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SafeZoneRadius;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceInteraction;                                  // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct NWX.RealmCardPlacementModel
struct FRealmCardPlacementModel
{
public:
	uint8                                        Pad_A280[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct NWX.RealmTagModifier
struct FRealmTagModifier : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagsToAdd;                                         // 0x28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.CustomizationMaterialParameter
struct FCustomizationMaterialParameter
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.VfxParameters
struct FVfxParameters
{
public:
	struct FLinearColor                          BaseColor;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EmissiveColor;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VfxScale;                                          // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityScale;                                     // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisSpawnChance;                                 // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VegSpawnChance;                                    // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifetimeScale;                                     // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A281[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BoxSize;                                           // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct NWX.FantasticResourcesAmbienceVFX
struct FFantasticResourcesAmbienceVFX : public FTableRowBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UNiagaraSystem>         NiagaraSystem;                                     // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVfxParameters                        VfxParameters;                                     // 0x38(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x300 (0x300 - 0x0)
// ScriptStruct NWX.PickupResult
struct FPickupResult
{
public:
	struct FInventoryEntry                       Entry;                                             // 0x0(0x2F0)(BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        ResourceToRemove;                                  // 0x2F0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A282[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.ResourceContainerParams
struct FResourceContainerParams
{
public:
	uint8                                        Pad_A283[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.ResourceCollectionParams
struct FResourceCollectionParams
{
public:
	uint8                                        Pad_A284[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.ResourceDistribution
struct FResourceDistribution
{
public:
	struct FItemConstraint                       InputResource;                                     // 0x0(0x40)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDistributionValue                DistributionValue;                                 // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A285[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ImpactedAssets;                                    // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ResourceDistributionList
struct FResourceDistributionList
{
public:
	TArray<struct FResourceDistribution>         Resources;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.CreatureRewardAndRealm
struct FCreatureRewardAndRealm
{
public:
	class UItemReward*                           ItemReward;                                        // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EBiomeID>                  Biomes;                                            // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct NWX.ResourceNodeTemplate
struct FResourceNodeTemplate
{
public:
	TArray<class UStaticMesh*>                   StateMeshArray;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         OverrideGameplayResource;                          // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewRowInDataTable;                                 // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A286[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            DataTable;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResourceData                         ResourceData;                                      // 0x28(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.ResourceProxyRarityBuckets
struct FResourceProxyRarityBuckets
{
public:
	enum class EResourceRarity                   ResourceRarity;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A287[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct NWX.ResourceProxyRarityDistribution
struct FResourceProxyRarityDistribution : public FTableRowBase
{
public:
	enum class EResourceRarityDistribution       RarityDistribution;                                // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A288[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Common;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Uncommon;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rare;                                              // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuperRare;                                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UltraRare;                                         // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CardBucket1;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CardBucket2;                                       // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CardBucket3;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A289[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.ResourceCategoryToItemTraitsMapping
struct FResourceCategoryToItemTraitsMapping : public FTableRowBase
{
public:
	class FName                                  ResourceCategory;                                  // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  ItemTraits;                                        // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_ResourceBuffs
struct FGameplayAbilityTargetData_ResourceBuffs : public FGameplayAbilityTargetData
{
public:
	class FName                                  SystemBuffsRowName;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           ResourceNames;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_CraftingRecipe
struct FGameplayAbilityTargetData_CraftingRecipe : public FGameplayAbilityTargetData
{
public:
	class FString                                CrafterUniqueID;                                   // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A28A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              RecipeReference;                                   // 0x20(0x70)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSlotsSelected;                                    // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSlotsChanged;                                     // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A28B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Items;                                             // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemAmounts;                                       // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInventoryEntry>               InputParts;                                        // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A28C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2F8 (0x300 - 0x8)
// ScriptStruct NWX.GameplayAbilityTargetData_InventoryEntry
struct FGameplayAbilityTargetData_InventoryEntry : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_A28D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InventoryEntry;                                    // 0x10(0x2F0)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.RuleFrequency
struct FRuleFrequency
{
public:
	bool                                         bUseMaximum;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A28E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Maximum;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMinimum;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A28F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseChancePerPOI;                                  // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A290[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChancePerPOI;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct NWX.PlugSpecification
struct FPlugSpecification
{
public:
	bool                                         bUseEncounterType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A291[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class EEncounterType>              EncounterTypes;                                    // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bUseEncounterFootprint;                            // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A292[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFootprint;                                      // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFootprint;                                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpecifyExactPlug;                                 // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A293[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftLevelPath                        LevelPath;                                         // 0x68(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NWX.PotentialPlugDestinations
struct FPotentialPlugDestinations
{
public:
	uint8                                        Pad_A294[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct NWX.RealmRulesetMapping
struct FRealmRulesetMapping : public FTableRowBase
{
public:
	enum class EBiomeID                          BiomeId;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPOIRuleset                       POIRuleset;                                        // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlugRuleset                      PlugRuleset;                                       // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A295[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.ShopOfferPurchasableState
struct FShopOfferPurchasableState
{
public:
	TArray<enum class EShopOfferPurchasableState> OfferStates;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastTransactionId;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A296[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.IngredientPresentationData
struct FIngredientPresentationData
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Background;                                        // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A297[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct NWX.ShopOfferPresentation
struct FShopOfferPresentation
{
public:
	struct FGuid                                 ShopOfferID;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Cost;                                              // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A298[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CurrencyIcon;                                      // 0x48(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             PreviewIcon;                                       // 0x70(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EShopOfferPurchasableState        OfferPurchasableState;                             // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A299[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UShopTransactablePresentationData*> Rewards;                                           // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          UI_SortingGroup;                                   // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransactableType                 TransactableType;                                  // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.ShopOfferPriceRow
struct FShopOfferPriceRow
{
public:
	struct FGameplayTag                          RowTag;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PowerLevelToPrice;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.ShopOfferPriceMatrix
struct FShopOfferPriceMatrix
{
public:
	TArray<struct FShopOfferPriceRow>            Rows;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NWX.ShopTransaction
struct FShopTransaction
{
public:
	int32                                        TransactionID;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OfferId;                                           // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NWX.PendingShopTransaction
struct FPendingShopTransaction
{
public:
	uint8                                        Pad_A29B[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructureDataAssetSkillGrouping
struct FStructureDataAssetSkillGrouping
{
public:
	TArray<class UStructureDataAsset*>           StructureGroup;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NWX.ShopDescriptorRegistryEntry
struct FShopDescriptorRegistryEntry
{
public:
	class FText                                  ShopName;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ShopDescription;                                   // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGuid                                 ID;                                                // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UShopDescriptorDataAsset> ShopDescriptorSoftPtr;                             // 0x40(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.SkillReferenceContainer
struct FSkillReferenceContainer
{
public:
	TArray<struct FSkillDataReference>           References;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct NWX.SkillTableRow
struct FSkillTableRow : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UnlockedTags;                                      // 0x60(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.SnapRules
struct FSnapRules
{
public:
	struct FVector                               SourceToTargetRotationDelta;                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorForwardAxis;                                // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.SnapPointRulesPerType
struct FSnapPointRulesPerType
{
public:
	TMap<enum class ESnapType, struct FSnapRules> RulesForSnapPoint;                                 // 0x0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.SpellcastNiagaraInstance
struct FSpellcastNiagaraInstance
{
public:
	class UNiagaraComponent*                     NiagaraInstance;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SpellTag;                                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SpellStateTag;                                     // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseTargetBone;                                     // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TargetBoneName;                                    // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseMeshSource;                                     // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LocationOffset;                                    // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        VFXScaleFirstPerson;                               // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VFXScaleThirdPerson;                               // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StatusEffectSpec
struct FStatusEffectSpec
{
public:
	class UStatusEffectDataAsset*                StatusEffect;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.StatusEffectLevelData
struct FStatusEffectLevelData
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x218 (0x218 - 0x0)
// ScriptStruct NWX.AudioFXCell
struct FAudioFXCell
{
public:
	TSoftObjectPtr<class UAkSwitchValue>         StatusSwitch;                                      // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          EventStart1P;                                      // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          EventStop1P;                                       // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          EventStart3P;                                      // 0x78(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          EventStop3P;                                       // 0xA0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          FadeInStart2D;                                     // 0xC8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          FadeInStop2D;                                      // 0xF0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          FadeOutStart2D;                                    // 0x118(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          FadeOutStop2D;                                     // 0x140(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkSwitchValue>         InitialEmoteSwitch;                                // 0x168(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkSwitchValue>         RecoverEmoteSwitch;                                // 0x190(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldOverrideSFXPlaybackBucket;                  // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UComponentAudioBucket>  OverrideSFXPlaybackBucket;                         // 0x1C0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldOverrideMultipositionSockets;               // 0x1E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OverrideMultipositionSockets;                      // 0x1F0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EAudioMixState>            SuppressionMixStates;                              // 0x200(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bShouldSuppressPainEmotes;                         // 0x210(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct NWX.ActiveAudioFXData
struct FActiveAudioFXData
{
public:
	class UAkSwitchValue*                        StatusSwitch;                                      // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        InitialEmoteSwitch;                                // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        RecoverEmoteSwitch;                                // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         EventStartP;                                       // 0x18(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         EventStopP;                                        // 0x20(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         FadeInStart2D;                                     // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         FadeInStop2D;                                      // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         FadeOutStart2D;                                    // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         FadeOutStop2D;                                     // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UComponentAudioBucket*                 SFXPlaybackBucket;                                 // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          MultipositionSockets;                              // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<enum class EAudioMixState>            SuppressionMixStates;                              // 0x60(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         IsEffectSuppressed;                                // 0x70(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.ActiveMaterialData
struct FActiveMaterialData
{
public:
	uint8                                        Pad_A2A4[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    FallbackMaterial;                                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct NWX.CrustFXCell
struct FCrustFXCell
{
public:
	TSoftObjectPtr<class UNiagaraSystem>         NiagaraSystem;                                     // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IntensityParameterName;                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ScaleParameterName;                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachPointName;                                   // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveFloat>            ModulationCurve;                                   // 0x48(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNeedingDisplayAuthorization;                    // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct NWX.IntensityModulation
struct FIntensityModulation
{
public:
	TSoftObjectPtr<class UCurveFloat>            ModulationCurve;                                   // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    SourceAttribute;                                   // 0x28(0x38)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeMax;                                      // 0x60(0x38)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeMin;                                      // 0x98(0x38)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.SEPMProcessData
struct FSEPMProcessData
{
public:
	float                                        InDuration;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutDuration;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWX.EffectSettings
struct FEffectSettings
{
public:
	int32                                        EffectPriority;                                    // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPingable;                                       // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOffHandAuthorized;                              // 0x5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSubclassOf<class UStatusEffectProcessorBase>, struct FSEPMProcessData> Processes;                                         // 0x8(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct NWX.StatusEffectPresentationManagerSettingsData
struct FStatusEffectPresentationManagerSettingsData : public FTableRowBase
{
public:
	struct FGameplayTag                          AffinityTableIdentifierTag;                        // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class UStatusEffectFXBase>, class UAffinityTable*> FXSystemMap;                                       // 0x10(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FEffectSettings> EffectsSettingsMap;                                // 0x60(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.ScreenFXCell
struct FScreenFXCell
{
public:
	TSoftObjectPtr<class UMaterialInstance>      ScreenMaterial;                                    // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IntensityParameterName;                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetCamera;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.PackedChamberSocket
struct FPackedChamberSocket
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConnectedChamberIndex;                             // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPackedChamberSocketType          SocketType;                                        // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.PackedChamber
struct FPackedChamber
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPackedChamberSocket>          Sockets;                                           // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.BppInstance
struct FBppInstance
{
public:
	TSubclassOf<class APackedLevelActor>         BppClass;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2AB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct NWX.StoredVaultData
struct FStoredVaultData
{
public:
	TArray<struct FBppInstance>                  BppInstances;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPOIData>                      POIDatapoints;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPOIDefinitionAsset>> POIDefinitions;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                DatapointToChamberIndex;                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPackedChamber>                LayoutData;                                        // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           Clusters;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int32, int32>                           RegionThemeMappings;                               // 0x60(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWX.GameplayTagsToVaultLayoutsMapping
struct FGameplayTagsToVaultLayoutsMapping
{
public:
	struct FGameplayTagContainer                 RealmTags;                                         // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ThemeForCreatures;                                 // 0x20(0x10)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint16>                               VaultIndices;                                      // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.PackedBppInstance
struct FPackedBppInstance
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       BppClassIndex;                                     // 0x1C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2AC[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.PackedPOIInstance
struct FPackedPOIInstance
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Region;                                            // 0x1C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       POIRowIndex;                                       // 0x1E(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ChamberIndex;                                      // 0x20(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2AD[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NWX.PackedVaultData
struct FPackedVaultData
{
public:
	TArray<struct FPackedBppInstance>            BppInstances;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPackedPOIInstance>            POIInstances;                                      // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPackedChamber>                LayoutData;                                        // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint16>                               Clusters;                                          // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<uint16, uint16>                         RegionThemeMappings;                               // 0x40(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWX.OscillatingStructureAudio
struct FOscillatingStructureAudio
{
public:
	class UScopedAkComponent*                    AudioComponent;                                    // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>             NiagaraComponents;                                 // 0x8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UAVFXOscillatorComponent*              OscillatorComponent;                               // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscillatorFrequencyHertz;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOscillateVFX;                                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOscillateRTPC;                                    // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOscillatePosition;                                // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2AE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DefaultRelativeLocation;                           // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MinOscillatedOffset;                               // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxOscillatedOffset;                               // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.PiecesPendingAdd
struct FPiecesPendingAdd
{
public:
	TArray<int32>                                IdsPendingAdd;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct NWX.ResourceCollectionPickupData
struct FResourceCollectionPickupData
{
public:
	struct FItemDefinition                       Resource;                                          // 0x0(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        ResourceCostPerItem;                               // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2AF[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructureData_Interaction
struct FStructureData_Interaction
{
public:
	TArray<TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset>> InteractionDataAssets;                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.Structure_AudioPayload
struct FStructure_AudioPayload
{
public:
	class AActor*                                Instigator;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Structure;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldLocation;                                     // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PieceId;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x120 - 0x0)
// ScriptStruct NWX.StructureDestructionData
struct FStructureDestructionData
{
public:
	struct FStructureAssetReference              StructureAssetReference;                           // 0x0(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            SpawnTransform;                                    // 0x80(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StructureBounds;                                   // 0xE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PhysicsMaterialsTags;                              // 0xF8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsDeconstruct;                                    // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NWX.StructureNiagaraDestructionResponseIdentifier
struct FStructureNiagaraDestructionResponseIdentifier
{
public:
	struct FStructureAssetReference              StructureAssetReference;                           // 0x0(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBreakEffect;                                    // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B2[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.StructureNiagaraDestructionResponse
struct FStructureNiagaraDestructionResponse
{
public:
	TSoftObjectPtr<class UNiagaraSystem>         DestructionEffect;                                 // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttackDestroyed;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorOverride;                                     // 0x2C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisSpawnChance;                                 // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DustSpawnChance;                                   // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SparksSpawnChance;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SplintersSpawnChance;                              // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MechPartsSpawnChance;                              // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlassSpawnChance;                                  // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BricksSpawnChance;                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.CompositeInstanceAttribute
struct FCompositeInstanceAttribute
{
public:
	class FString                                PropertyName;                                      // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.StructureMeshStateDefinition
struct FStructureMeshStateDefinition
{
public:
	TArray<class UMaterialInterface*>            Materials;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAffectsNavigation;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCollisionMesh;                                  // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x350 (0x350 - 0x0)
// ScriptStruct NWX.CompositePieceResourceDropContext
struct FCompositePieceResourceDropContext
{
public:
	struct FInventoryEntry                       Resource;                                          // 0x0(0x2F0)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	struct FTransform                            DropTransform;                                     // 0x2F0(0x60)(BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.StructurePlacementPresentationData
struct FStructurePlacementPresentationData
{
public:
	enum class EPlacementFeedbackType            FeedbackType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FeedbackText;                                      // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstance>      FeedbackMaterial;                                  // 0x20(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWX.StructureResourceRequirements
struct FStructureResourceRequirements
{
public:
	struct FItemConstraint                       ItemConstraint;                                    // 0x0(0x40)(Edit, DisableEditOnInstance, SaveGame, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        QuantityAdded;                                     // 0x40(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.StructureResourceRequirementsTracker
struct FStructureResourceRequirementsTracker
{
public:
	TArray<struct FStructureResourceRequirements> RequiredResources;                                 // 0x0(0x10)(ZeroConstructor, SaveGame, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FInventoryEntry>               AddedResourcesHistory;                             // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	bool                                         bHasAllRequiredResources;                          // 0x20(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A2B8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.StructureResourceRequirementsTrackerEntry
struct FStructureResourceRequirementsTrackerEntry
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureResourceRequirementsTracker RequirementsTracker;                               // 0x8(0x28)(SaveGame, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.StructureCompositeRequirementsTrackers
struct FStructureCompositeRequirementsTrackers
{
public:
	TArray<struct FStructureResourceRequirementsTrackerEntry> RequirementsTrackers;                              // 0x0(0x10)(ZeroConstructor, SaveGame, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class APawn*                                 LastContributingPawn;                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EStructureState                   StructureState;                                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A2BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               LastResourcesModified;                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.GenericReplicatedData_StructureAssetReference
struct FGenericReplicatedData_StructureAssetReference : public FGenericReplicatedData
{
public:
	struct FSoftObjectPath                       AssetPath;                                         // 0x8(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xA0 - 0x70)
// ScriptStruct NWX.SnapPlacementTargetData
struct FSnapPlacementTargetData : public FGameplayAbilityTargetData_Transform
{
public:
	int32                                        SourceSnapPointIndex;                              // 0x70(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AllAcceptableSourcePointIndexes;                   // 0x78(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TargetSnapPointIndex;                              // 0x88(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                TargetSnapPointOwner;                              // 0x8C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PieceId;                                           // 0x94(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2BC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x80 - 0x70)
// ScriptStruct NWX.BuildingPlacementTargetData
struct FBuildingPlacementTargetData : public FGameplayAbilityTargetData_Transform
{
public:
	TArray<struct FCompositePieceGameplay>       CompositePieces;                                   // 0x70(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.RealmStructureCapInfo
struct FRealmStructureCapInfo
{
public:
	int32                                        MaxConstructedCount;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCompositeCount;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCompositePieceCountPerStructure;                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWX.StructureAISettings
struct FStructureAISettings
{
public:
	float                                        MinCreatureSuppressionRadius;                      // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructureSupportObjectData
struct FStructureSupportObjectData
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStructureSupportType             Type;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2BD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.StructureSupportData
struct FStructureSupportData
{
public:
	TArray<struct FStructureSupportObjectData>   SupportingObjects;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<struct FStructureSupportObjectData>   SupportedObjects;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>          ClientSupportMeshes;                               // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bIsDirty;                                          // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2BE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.StructureCompositeSupportData
struct FStructureCompositeSupportData
{
public:
	TMap<int32, struct FStructureSupportData>    PiecesSupportData;                                 // 0x0(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.StructureSupportDef
struct FStructureSupportDef
{
public:
	TSoftClassPtr<class UStructureSupportObject> SupportObjectClassRef;                             // 0x0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWX.StructureTraitWithReqStack
struct FStructureTraitWithReqStack
{
public:
	TSoftObjectPtr<class UStructureTraitAsset>   Trait;                                             // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RequiredStack;                                     // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ConsumedStack;                                     // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2BF[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.StructureTraitCombinationRule
struct FStructureTraitCombinationRule
{
public:
	TSoftObjectPtr<class UStructureTraitAsset>   CombinationTrait;                                  // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStructureTraitWithReqStack>   Traits;                                            // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructureTraitCollection
struct FStructureTraitCollection
{
public:
	TArray<TSoftObjectPtr<class UStructureTraitAsset>> TraitsArray;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructureTraitSet
struct FStructureTraitSet
{
public:
	TArray<struct FStructureTrait>               Traits;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWX.StructureTraitEmissionInitData
struct FStructureTraitEmissionInitData
{
public:
	TSubclassOf<class UStructureTraitEmissionComponent> EmissionComponentClass;                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UStructureTraitCollectionAsset>> EmissionTraitCollection;                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bSlottable;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.StructureTraitReceiverInitData
struct FStructureTraitReceiverInitData
{
public:
	TSubclassOf<class UStructureTraitComponent>  TraitComponentClass;                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UStructureTraitCollectionAsset>> ApplicableTraitCollections;                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UStructureTraitCollectionAsset>> StartingTraitCollections;                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        NumSlots;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAura;                                          // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UStructureTraitAuraEffect>> StartingAuraEffects;                               // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bIsEstate;                                         // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EstateBoxExtents;                                  // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.AuraInstance
struct FAuraInstance
{
public:
	TSubclassOf<class UStructureTraitAuraEffect> AuraEffect;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CustomAuraId;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.TraitAuraOverlap
struct FTraitAuraOverlap
{
public:
	TWeakObjectPtr<class UObject>                OverlappingObject;                                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UStructureTraitAuraComponent>> InflictingAuraComponents;                          // 0x8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.TraitAuraOverlapSet
struct FTraitAuraOverlapSet
{
public:
	uint8                                        Pad_A2C3[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.StructureTraitEmissionRequest
struct FStructureTraitEmissionRequest
{
public:
	uint8                                        Pad_A2C4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.CraftingRecipeAssetArray
struct FCraftingRecipeAssetArray
{
public:
	TArray<TSoftObjectPtr<class UCraftingRecipeAsset>> RecipeAssets;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructureAssetArray
struct FStructureAssetArray
{
public:
	TArray<TSoftObjectPtr<class UStructureDataAsset>> StructureAssets;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructureTraitCollectionAssetArray
struct FStructureTraitCollectionAssetArray
{
public:
	TArray<TSoftObjectPtr<class UStructureTraitCollectionAsset>> StructureTraitCollectionAssets;                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.StructureTraitCollectionRecipeSoftAssetGrouping
struct FStructureTraitCollectionRecipeSoftAssetGrouping
{
public:
	TSoftObjectPtr<class UStructureTraitCollectionAsset> CollectionAsset;                                   // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UCraftingRecipeAsset>> RecipeAssets;                                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.StructureTraitCollectionRecipeSoftAssetGroupingArray
struct FStructureTraitCollectionRecipeSoftAssetGroupingArray
{
public:
	TArray<struct FStructureTraitCollectionRecipeSoftAssetGrouping> Groupings;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.SnapPointIdGroup
struct FSnapPointIdGroup
{
public:
	TArray<struct FSnapPointId>                  IdGroup;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWX.StructurePlacementDef
struct FStructurePlacementDef
{
public:
	bool                                         bAdaptivePlacement;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanMoveAsComplete;                                // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAdjustToMaxZ;                               // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlacementZOffset;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.DummyDestructionResponsePropertyData
struct FDummyDestructionResponsePropertyData
{
public:
	struct FStructureNiagaraDestructionResponse  DummyDestructionResponse;                          // 0x0(0x60)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.SupportRules
struct FSupportRules
{
public:
	TArray<struct FSnapPointIdGroup>             IdGroups;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.SupportRulesPerType
struct FSupportRulesPerType
{
public:
	TMap<enum class ESnapType, struct FSupportRules> RulesForSnapType;                                  // 0x0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWX.TechniqueDetails
struct FTechniqueDetails
{
public:
	class FText                                  TechniqueName;                                     // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ItemIcon;                                          // 0x58(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x168 - 0x8)
// ScriptStruct NWX.Technique
struct FTechnique : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTechniqueDetails                     Details;                                           // 0x28(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAbilitySpecDef>       Abilities;                                         // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ActivationTags;                                    // 0xB8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReleaseTags;                                       // 0xD8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class UApplyAbilityDamage>       DamageAbility;                                     // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurabilityCost;                                    // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DamageActivationTag;                               // 0x104(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 PlayerRequiredTags;                                // 0x110(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ItemRequiredTags;                                  // 0x130(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UItemSubtypeObject>> ItemRequiredSubtypes;                              // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bHideOppositeHandWhileActive;                      // 0x160(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.TeleportationVolumeList
struct FTeleportationVolumeList
{
public:
	TArray<TWeakObjectPtr<class ATeleportationVolume>> Volumes;                                           // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x54 (0x54 - 0x0)
// ScriptStruct NWX.EnvironmentSnapshot
struct FEnvironmentSnapshot
{
public:
	int32                                        ColorMaster;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ColorSelect;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RapidColorBiome;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RapidColorAdjust;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CelestialType;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Atmosphere;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FogDay;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FogNight;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FogVolumeLevel;                                    // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cloud;                                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CloudColor;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Season;                                            // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryMoon;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryMoonType;                                 // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rings;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RingType;                                          // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Aurora;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FaeMagicToggle;                                    // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FaeMagicAltToggle;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rain;                                              // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimeDilationCurve;                                 // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct NWX.TutorialSlideData
struct FTutorialSlideData
{
public:
	class FText                                  Subtitle;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UInputAction>           InputAction;                                       // 0x30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InputHintDescription;                              // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x70(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.UIAudioEventStruct
struct FUIAudioEventStruct
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          AudioEvent;                                        // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          StopEvent;                                         // 0x28(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// ScriptStruct NWX.CreateAudioData
struct FCreateAudioData
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          AudioEvent;                                        // 0x0(0x28)(Edit, DisableEditOnInstance, NoClear, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          StopEvent;                                         // 0x28(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            SFXTransform;                                      // 0x50(0x60)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillVolumeWithMultipositions;                     // 0xB0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MultipositionOffsetMultiplier;                     // 0xB4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class UAkSwitchValue*>                  SwitchesToSet;                                     // 0xB8(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class UAkRtpc*, float>                  RTPCValuesToSet;                                   // 0x108(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct NWX.ModifyAudioData
struct FModifyAudioData
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          LoopToModify;                                      // 0x0(0x28)(Edit, DisableEditOnInstance, NoClear, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class UAkSwitchValue*>                  SwitchesToSet;                                     // 0x28(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class UAkRtpc*, float>                  RTPCValuesToSet;                                   // 0x78(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct NWX.CreateVFXData
struct FCreateVFXData
{
public:
	TSoftObjectPtr<class UNiagaraSystem>         NiagaraSystem;                                     // 0x0(0x28)(Edit, DisableEditOnInstance, NoClear, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2CA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            VFX_Transform;                                     // 0x30(0x60)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VFX_Colour;                                        // 0x90(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VFX_AlphaOverride;                                 // 0x94(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VFX_Scale;                                         // 0x98(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VFX_HiddenByDefault;                               // 0x9C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VFX_Reveal;                                        // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VFX_CylinderBox;                                   // 0xA4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VFX_ColorIndex;                                    // 0xA8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPrimitiveScalingMode             VFXPrimitiveScaling;                               // 0xAC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2CC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x208 (0x208 - 0x0)
// ScriptStruct NWX.ModifyVFXData
struct FModifyVFXData
{
public:
	TSoftObjectPtr<class UNiagaraSystem>         NiagaraSystem;                                     // 0x0(0x28)(Edit, DisableEditOnInstance, NoClear, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      BooleanParameters;                                 // 0x28(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     IntParameters;                                     // 0x78(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     FloatParameters;                                   // 0xC8(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FName, struct FVector2D>          Vec2Parameters;                                    // 0x118(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FName, struct FVector>            Vec3Parameters;                                    // 0x168(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>       LinearColourParameters;                            // 0x1B8(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWX.MapGridCell
struct FMapGridCell
{
public:
	struct FBox2D                                BoundBox;                                          // 0x0(0x28)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<int32>                                PointIndicies;                                     // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWX.WaterFXAttachment
struct FWaterFXAttachment
{
public:
	uint8                                        Pad_A2CD[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.NWXWatermarkSettingsData
struct FNWXWatermarkSettingsData
{
public:
	bool                                         bShowWatermark;                                    // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TitleText;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowEngineVersion;                                // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSmallClientText;                              // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SmallClientText;                                   // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowCustomText;                                   // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomText;                                        // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBanner;                                       // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2D1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.WeaponBlockData
struct FWeaponBlockData
{
public:
	TSoftObjectPtr<class UAkSwitchValue>         AudioSwitch;                                       // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IdentifierTags;                                    // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                          BlockedImpactTag;                                  // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NWX.PrecipitationProfile
struct FPrecipitationProfile
{
public:
	float                                        PrecipitationDelta;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationBase;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationFrequency;                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulationRate;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseTimeScale;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.StormProfile
struct FStormProfile
{
public:
	bool                                         Active;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrecipitationThreshold;                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RampUpRange;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWX.TemperatureProfile
struct FTemperatureProfile
{
public:
	class UCurveFloat*                           TemperatureCurve;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWX.DynamicSpawnCategoryCreatureClusterCount
struct FDynamicSpawnCategoryCreatureClusterCount
{
public:
	TMap<enum class EDynamicSpawnCategory, int32> CategoryClusterCount;                              // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWX.WildlifeSpawnerBase
struct FWildlifeSpawnerBase : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 SpawningTags;                                      // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct NWX.WildlifeSpawner
struct FWildlifeSpawner : public FWildlifeSpawnerBase
{
public:
	struct FDataTableRowHandle                   BPSpawnerData;                                     // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CountMin;                                          // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CountMax;                                          // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanRespawn;                                        // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2D3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct NWX.DynamicWildlifeSpawner
struct FDynamicWildlifeSpawner : public FWildlifeSpawnerBase
{
public:
	struct FGameplayTagContainer                 EncounterTags;                                     // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        SpawnPriority;                                     // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicSpawnCategory             EncounterCategory;                                 // 0x4C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2D4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct NWX.DynamicSpawningFilter
struct FDynamicSpawningFilter
{
public:
	struct FGameplayTag                          FilterTag;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExclusionRadius;                                   // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWX.WorkerFlagLevelWatcher
struct FWorkerFlagLevelWatcher
{
public:
	class FString                                FlagName;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENWXMathComparison                Operation;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetValue;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               Levels;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWX.RootViewportLayoutInfo
struct FRootViewportLayoutInfo
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNWXPrimaryGameLayout*                 RootLayout;                                        // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddedToViewport;                                  // 0x10(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2D6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


