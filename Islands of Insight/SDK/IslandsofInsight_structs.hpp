#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOnlineServiceErrorCategory : int32
{
	Unknown                        = 0,
	NotSignedIn                    = 1,
	HttpError                      = 2,
	MissingResponse                = 3,
	BadRequestNotSent              = 4,
	EOnlineServiceErrorCategory_MAX = 5,
};

enum class EOnlinePlatform : int32
{
	Null                           = 0,
	Steam                          = 1,
	EOnlinePlatform_MAX            = 2,
};

enum class EOnlineServiceProvider : int32
{
	None                           = 0,
	Kraken                         = 1,
	Platform                       = 2,
	EOnlineServiceProvider_MAX     = 3,
};

enum class ECustomizationRarity : uint8
{
	Common                         = 0,
	Rare                           = 1,
	Epic                           = 2,
	Legendary                      = 3,
	ECustomizationRarity_MAX       = 4,
};

enum class ECustomizationUnlockType : uint8
{
	Free                           = 0,
	Coin                           = 1,
	Quest                          = 2,
	Mastery                        = 3,
	ECustomizationUnlockType_MAX   = 4,
};

enum class ECustomizationTypes : uint8
{
	Body                           = 0,
	Face                           = 1,
	EyeColor                       = 2,
	Hair                           = 3,
	HairColor                      = 4,
	HairSecondaryColor             = 5,
	EthericHairColor               = 6,
	SkinColor                      = 7,
	Patina                         = 8,
	Burnish                        = 9,
	Aura                           = 10,
	Luster                         = 11,
	Clothes                        = 12,
	Gloves                         = 13,
	Headpiece                      = 14,
	WingsMesh                      = 15,
	WingsMaterial                  = 16,
	TrailColor                     = 17,
	TrailSystem                    = 18,
	BodyTattoo                     = 19,
	FaceTattoo                     = 20,
	EyebrowColor                   = 21,
	ECustomizationTypes_MAX        = 22,
};

enum class ECustomizationGrades : uint8
{
	Common                         = 0,
	Rare                           = 1,
	Epic                           = 2,
	Legendary                      = 3,
	ECustomizationGrades_MAX       = 4,
};

enum class ECustomizationUnlockableType : uint8
{
	Free                           = 0,
	Coin                           = 1,
	Quest                          = 2,
	Mastery                        = 3,
	SandboxProgression             = 4,
	Deluxe                         = 5,
	ECustomizationUnlockableType_MAX = 6,
};

enum class EHintTutorialState : uint8
{
	StartedHintTutorial            = 0,
	UsedFirstHint                  = 1,
	PlacedFirstTile                = 2,
	UnlockPlacing                  = 3,
	TutorialSolved                 = 4,
	NotInTutorial                  = 255,
	EHintTutorialState_MAX         = 256,
};

enum class EClickSuccess : uint8
{
	Click_Fail                     = 0,
	Click_Consume                  = 1,
	Click_ConsumeWithPopup         = 2,
	Click_Success                  = 3,
	Click_MAX                      = 4,
};

enum class ECustomStencilValues : uint8
{
	None                           = 0,
	WORLD_HIGHLIGHT                = 2,
	SCREEN_HIGHLIGHT_BLUE          = 1,
	SCREEN_HIGHLIGHT_RED           = 4,
	SCREEN_HIGHLIGHT_GREEN         = 5,
	SCREEN_HIGHLIGHT_BLACK_WHITE_IMPORTANT = 6,
	SPIRIT_HIGHLIGHT               = 8,
	RACING_RINGS_HIGHLIGHT         = 16,
	BLANK_CELL                     = 32,
	LIGHT_CELL                     = 64,
	DARK_CELL                      = 96,
	NO_PROJECTION                  = 128,
	CustomStencilValues_MAX        = 129,
};

enum class EPillarState : uint8
{
	PillarInactive                 = 0,
	PillarActive                   = 1,
	PillarCompleted                = 2,
	EPillarState_MAX               = 3,
};

enum class EDifficultyIndicatorState : uint8
{
	ShownCircle                    = 0,
	EmptyCircle                    = 1,
	ShownStar                      = 2,
	HiddenStar                     = 3,
	EDifficultyIndicatorState_MAX  = 4,
};

enum class EColorType : uint8
{
	Any                            = 0,
	NonTeam                        = 1,
	RedTeam                        = 2,
	BlueTeam                       = 3,
	EColorType_MAX                 = 4,
};

enum class EDungeonType : uint8
{
	Other                          = 0,
	MainEnclave                    = 1,
	SideEnclave                    = 2,
	SideQuest                      = 3,
	EDungeonType_MAX               = 4,
};

enum class EDungeonBeaconType : uint8
{
	Invisible                      = 0,
	MainStarted                    = 1,
	SideStarted                    = 2,
	Completed                      = 3,
	FullyCompleted                 = 4,
	UNSET                          = 255,
	EDungeonBeaconType_MAX         = 256,
};

enum class ESmtpConnectionType : uint8
{
	NoEncryption                   = 0,
	SSL                            = 1,
	StartTLS                       = 2,
	ESmtpConnectionType_MAX        = 3,
};

enum class ESmtpServerType : uint8
{
	SMTP                           = 0,
	ESMTP                          = 1,
	ESmtpServerType_MAX            = 2,
};

enum class EContentTransfertEncoding : uint8
{
	BASE64                         = 0,
	QUOTED_PRINTABLE               = 1,
	_8BIT                          = 2,
	_7BIT                          = 3,
	BINARY                         = 4,
	Xtoken                         = 5,
	EContentTransfertEncoding_MAX  = 6,
};

enum class EEmailCharset : uint8
{
	big5                           = 0,
	Euc_kr                         = 1,
	Iso_8859_1                     = 2,
	Iso_8859_2                     = 3,
	Iso_8859_3                     = 4,
	Iso_8859_4                     = 5,
	Iso_8859_5                     = 6,
	Iso_8859_6                     = 7,
	Iso_8859_7                     = 8,
	Iso_8859_8                     = 9,
	Koi8_r                         = 10,
	Shift_jis                      = 11,
	X_euc                          = 12,
	Utf_8                          = 13,
	Windows_1250                   = 14,
	Windows_1251                   = 15,
	Windows_1252                   = 16,
	Windows_1253                   = 17,
	Windows_1254                   = 18,
	Windows_1255                   = 19,
	Windows_1256                   = 20,
	Windows_1257                   = 21,
	Windows_1258                   = 22,
	Windows_874                    = 23,
	EEmailCharset_MAX              = 24,
};

enum class ESubtitleType : uint8
{
	Goddess                        = 0,
	EtherealVoice                  = 1,
	Obli                           = 2,
	Amia                           = 3,
	Nutu                           = 4,
	NutuEverlasting                = 5,
	Voyan                          = 6,
	Eolai                          = 7,
	Blank                          = 8,
	TheShaper                      = 9,
	TransuniversalProverb          = 10,
	ESubtitleType_MAX              = 11,
};

enum class ECustomMovementMode : uint8
{
	Glide                          = 0,
	DebugFly                       = 1,
	Recall                         = 2,
	ECustomMovementMode_MAX        = 3,
};

enum class ERecallState : uint8
{
	InitialDelay                   = 0,
	GoingStraightUp                = 1,
	FlyToDestination               = 2,
	ERecallState_MAX               = 3,
};

enum class EmitterPuzzleType : uint8
{
	FIREWORK                       = 0,
	PLASMA                         = 1,
	NEBULA                         = 2,
	TRIANGLE                       = 3,
	DOME                           = 4,
	EmitterPuzzleType_MAX          = 5,
};

enum class EMarkerStatus : uint8
{
	Locked                         = 0,
	Unlocked                       = 1,
	Finished                       = 2,
	EMarkerStatus_MAX              = 3,
};

enum class ESocketPuzzleType : uint8
{
	Monument1                      = 0,
	MONUMENT2                      = 1,
	MONUMENT3                      = 2,
	MONUMENT4                      = 3,
	Maze                           = 4,
	Lockpick                       = 5,
	Rune                           = 6,
	CYLINDER_RUNE                  = 7,
	RAYMARCH                       = 8,
	RYOANJI                        = 9,
	Rolling_Cube                   = 10,
	ESocketPuzzleType_MAX          = 11,
};

enum class ESocketGenerationMethod : uint8
{
	SINGLE                         = 0,
	Cross                          = 1,
	FANCY                          = 2,
	ESocketGenerationMethod_MAX    = 3,
};

enum class EGenericGridButtonType : uint8
{
	Undo                           = 0,
	Restart                        = 1,
	Foresight                      = 2,
	Continue                       = 3,
	Exit                           = 4,
	Invite                         = 5,
	Glimpse                        = 6,
	Listen                         = 7,
	Play                           = 8,
	RequestHelp                    = 9,
	EGenericGridButtonType_MAX     = 10,
};

enum class EGhostTypes : uint8
{
	DistanceDoNotUse               = 0,
	Motion                         = 1,
	backup                         = 2,
	Alarm                          = 3,
	QuantumDoNotUse                = 4,
	Flight                         = 5,
	EGhostTypes_MAX                = 6,
};

enum class ETutorialTip : uint8
{
	RosaryClickToSolve             = 0,
	GyroClickToSolve               = 1,
	GravityBallClickToThrow        = 2,
	ViewfinderClickToEnlarge       = 3,
	ViewfinderAltClickToMask       = 4,
	ViewfinderClickToPickUp        = 5,
	ViewfinderClickToSolve         = 6,
	AssistQuestGiverNavigation     = 7,
	RacingBallClickToActivate      = 8,
	ProjectionConeClickToSolve     = 9,
	QFPTutorialPopup               = 10,
	COWYCTutorialPopup             = 11,
	LevelGateTutorialPopup         = 12,
	FractalMatchReleaseToSolve     = 13,
	KlotskiClickAndDrag            = 14,
	TotemRuneTutorialPopup         = 15,
	Seek5TutorialPopup             = 16,
	TipExtraPuzzlesInDungeon       = 17,
	QuestVendorClickText           = 18,
	GridDifficultyTutorialPopup    = 19,
	GridStarDifficultyTutorialPopup = 20,
	QFPInfinitePopup               = 21,
	QFPFirstTierSolvePopup         = 22,
	QFPAllTierSolvePopup           = 23,
	MAX                            = 24,
};

enum class EGridButtonType : uint8
{
	ButtonClose                    = 0,
	ButtonUndo                     = 1,
	ButtonReset                    = 2,
	ButtonInviteToParty            = 3,
	ButtonHint                     = 4,
	EGridButtonType_MAX            = 5,
};

enum class EInputPriorities : uint8
{
	Default                        = 0,
	Death                          = 1,
	Widget                         = 2,
	EInputPriorities_MAX           = 3,
};

enum class EGeneralNotificationType : uint8
{
	Encyclopedia                   = 0,
	Mastries                       = 1,
	Lore                           = 2,
	Clue                           = 3,
	Upgrade                        = 4,
	Zone                           = 5,
	MAX                            = 6,
};

enum class ECurrencyNotificationType : uint8
{
	Gold                           = 0,
	XP                             = 1,
	Borb                           = 2,
	MAX                            = 3,
};

enum class EItemType : uint8
{
	MultiJump                      = 0,
	HighJump                       = 1,
	Sprint                         = 2,
	Steepspikes                    = 3,
	RosaryRadar                    = 4,
	DeepBlink                      = 5,
	QuickBlink                     = 6,
	Health                         = 7,
	Pole                           = 8,
	Wings                          = 9,
	Grapple                        = 10,
	MatchboxRadar                  = 11,
	ViewfinderRadar                = 12,
	PlaceableJumpPad               = 13,
	TeleportPortal                 = 14,
	MAX                            = 15,
};

enum class ELockpickPuzzlePool : uint8
{
	Default                        = 0,
	Handmade                       = 1,
	Easy                           = 2,
	Hard                           = 3,
	XHard                          = 4,
	XXHard                         = 5,
	MAX                            = 6,
};

enum class EMatch3ButtonType : uint8
{
	ButtonClose                    = 0,
	ButtonUndo                     = 1,
	ButtonReset                    = 2,
	MoveCounter                    = 3,
	EMatch3ButtonType_MAX          = 4,
};

enum class EGenerationType : uint8
{
	RandomizedDepthFirstSearch     = 0,
	EGenerationType_MAX            = 1,
};

enum class ERaymarchFractalType : uint8
{
	Menger                         = 0,
	Julia                          = 1,
	ERaymarchFractalType_MAX       = 2,
};

enum class ETargetType : uint8
{
	NotConnected                   = 0,
	ConnectedByLocal               = 1,
	ConnectedByOther               = 2,
	ConnectedByBothLocalAndOther   = 3,
	ETargetType_MAX                = 4,
};

enum class EDynamicUrlParameterValue : uint8
{
	DUPV_KrakenUserId              = 0,
	DUPV_CharacterLevel            = 1,
	DUPV_MAX                       = 2,
};

enum class EPathIntState : uint8
{
	Outside                        = 0,
	OTHER_SIDE                     = 1,
	SCOUT                          = 2,
	READY                          = 3,
	TRIAL                          = 4,
	SOLVED                         = 5,
	CANCELLED                      = 6,
	EPathIntState_MAX              = 7,
};

enum class EPersonalEggStatus : uint8
{
	NewlySpawned                   = 0,
	Active                         = 1,
	Cancelled                      = 2,
	Dead                           = 3,
	MAX                            = 4,
};

enum class EPersonSocialState : uint8
{
	Offline                        = 0,
	Online                         = 1,
	Busy                           = 2,
	EPersonSocialState_MAX         = 3,
};

enum class EPoleStatus : uint8
{
	Holding                        = 0,
	Planted                        = 1,
	PoweredRed                     = 2,
	PoweredBlue                    = 3,
	Powered                        = 4,
	Invalid                        = 5,
	EPoleStatus_MAX                = 6,
};

enum class EReplayableFadeMode : uint8
{
	None                           = 0,
	Appearing                      = 1,
	Disappearing                   = 2,
	EReplayableFadeMode_MAX        = 3,
};

enum class ESerializeType : uint8
{
	NotSerialized                  = 0,
	KrakenIdOnly                   = 1,
	SerializeAll                   = 2,
	Container                      = 3,
	Slab                           = 4,
	ESerializeType_MAX             = 5,
};

enum class ESpawnBehaviour : uint8
{
	AlwaysSpawn                    = 0,
	NeverSpawn                     = 1,
	DefaultSpawn                   = 2,
	SandboxOnly                    = 3,
	ESpawnBehaviour_MAX            = 4,
};

enum class EMemGridWipe : uint8
{
	Up                             = 0,
	Down                           = 1,
	Left                           = 2,
	Right                          = 3,
	DiagFromTopLeft                = 4,
	Checker                        = 5,
	ChooseRandom                   = 255,
	EMemGridWipe_MAX               = 256,
};

enum class EGridControlType : uint8
{
	RuneSpawn                      = 0,
	WorldTarget                    = 1,
	WorldMouse                     = 2,
	WorldMouseCamera               = 3,
	WorldFreeMouse                 = 4,
	EGridControlType_MAX           = 5,
};

enum class EClueType : uint8
{
	LightGiven                     = 0,
	DarkGiven                      = 1,
	IslandNumber                   = 2,
	CaveNumber                     = 3,
	YajilinNumber                  = 4,
	Aleph                          = 5,
	MirrorSymmetrySymbol           = 6,
	MyopiaSymbol                   = 7,
	DominionSymbol                 = 8,
	AvoidThisPattern               = 64,
	ConnectAllLightCells           = 65,
	ConnectAllDarkCells            = 66,
	OneSymbolPerLightIsland        = 67,
	OneSymbolPerDarkIsland         = 68,
	NoTwoLightIslandsAreCongruent  = 69,
	NoTwoDarkIslandsAreCongruent   = 70,
	AllLightIslandsHaveOneSize     = 71,
	AllDarkIslandsHaveOneSize      = 72,
	AllLightIslandsAreCongruent    = 73,
	AllDarkIslandsAreCongruent     = 74,
	TextRenderClue_DEPRECATED      = 125,
	SwitchSides                    = 126,
	None                           = 255,
	EClueType_MAX                  = 256,
};

enum class EHintRequestResult : uint8
{
	ProgressHint                   = 0,
	LightCellHint                  = 1,
	DarkCellHint                   = 2,
	SingleErrorHint                = 3,
	MultipleErrorsHint             = 4,
	SingleWronglyColoredDarkHint   = 5,
	MultipleWronglyColoredDarkHint = 6,
	HintNotAvailable               = 7,
	PuzzleSolved                   = 8,
	NoHintRequested                = 9,
	BlankSingleErrorHint           = 10,
	BlankMultipleErrorsHint        = 11,
	PuzzleNotInitialized           = 100,
	EHintRequestResult_MAX         = 101,
};

enum class EGridInputType : uint8
{
	PaintSingle                    = 0,
	PaintIsland                    = 1,
	PaintAllBlank                  = 2,
	EGridInputType_MAX             = 3,
};

enum class EPuzzleInputResult : uint8
{
	CheckedCorrectUsingAnswerKey   = 0,
	CheckedIncorrectUsingAnswerKey = 1,
	NotChecked                     = 2,
	Solved                         = 3,
	DoppelSolved                   = 4,
	PuzzleNotInitialized           = 100,
	InvalidPosition                = 101,
	UnableToEdit                   = 102,
	EPuzzleInputResult_MAX         = 103,
};

enum class EAnswerKeyType : uint8
{
	None                           = 0,
	Full                           = 1,
	CompleteOnlyWhatYouCan         = 2,
	EAnswerKeyType_MAX             = 3,
};

enum class EHighlightType : uint8
{
	None                           = 0,
	Correct                        = 1,
	Incorrect                      = 2,
	NullCell                       = -1,
	PuzzleNotInitialized           = 100,
	OutOfBounds                    = 101,
	EHighlightType_MAX             = 102,
};

enum class EComponentColor : uint8
{
	Light                          = 0,
	Dark                           = 1,
	LightOrBlank                   = 2,
	DarkOrBlank                    = 3,
	Blank                          = 4,
	MAX                            = 5,
};

enum class ECellColor : uint8
{
	Light                          = 0,
	Dark                           = 1,
	Blank                          = 2,
	NullCell                       = 255,
	PuzzleNotInitialized           = 100,
	OutOfBounds                    = 101,
	ECellColor_MAX                 = 256,
};

enum class EGridGeometryModifierType : uint8
{
	MergedCell                     = 0,
	NullCell                       = 1,
	HiddenCell                     = 2,
	EGridGeometryModifierType_MAX  = 3,
};

enum class EGridShape : uint8
{
	Rectangle                      = 0,
	VerticalCylinder               = 1,
	HorizontalCylinder             = 2,
	Torus                          = 3,
	EGridShape_MAX                 = 4,
};

enum class EPuzzleGridType : uint8
{
	SinglePlayer                   = 0,
	MultiplayerInstantFeedback     = 1,
	MultiplayerNoFeedback          = 2,
	FailOnMistake                  = 3,
	EPuzzleGridType_MAX            = 4,
};

enum class EModifierType : uint8
{
	KnappDanaben                   = 0,
	NoIsometry                     = 1,
	CompleteThePattern             = 2,
	SearchTheEnvironment           = 3,
	MatchTheAudio                  = 4,
	NoGrayInput                    = 5,
	CheckWithAnswerKeyNoHighlight_DEPRECATED = 6,
	CheckWithAnswerKeyRedHighlight_DEPRECATED = 7,
	MistakesDeal15Damage_DEPRECATED = 8,
	MistakesAreFatal_DEPRECATED    = 9,
	LightsOut                      = 10,
	NPositionalLiars               = 11,
	Memory                         = 12,
	FailOnMistake                  = 13,
	Max                            = 13,
};

enum class ETileShape : uint8
{
	OuterCorner                    = 0,
	Edge                           = 1,
	InnerCorner                    = 2,
	Smooth                         = 3,
	ETileShape_MAX                 = 4,
};

enum class EQuestState : uint8
{
	Inactive                       = 0,
	AvailableDaily                 = 1,
	Active                         = 2,
	Completed                      = 3,
	FullyCompleted                 = 4,
	EQuestState_MAX                = 5,
};

enum class EContentType : uint8
{
	DEFAULT                        = 0,
	COMPLETE                       = 1,
	OPTIONAL_                      = 2,
	OPTIONALCOMPLETE               = 3,
	EContentType_MAX               = 4,
};

enum class ETitleFormat : uint8
{
	DEFAULT                        = 0,
	COMPLETE                       = 1,
	ETitleFormat_MAX               = 2,
};

enum class EQuestType : uint8
{
	MainQuest                      = 0,
	SideQuest                      = 1,
	DailyQuest                     = 2,
	Dungeon                        = 3,
	AutoQuest                      = 4,
	MAX                            = 5,
};

enum class ESolveDurationComparisonOperator : uint8
{
	LessThan                       = 0,
	LessThanOrEqualTo              = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqualTo           = 3,
	ESolveDurationComparisonOperator_MAX = 4,
};

enum class EBlueOrbSourceType : uint8
{
	MainDungeon                    = 0,
	SideDungeon                    = 1,
	Obelisk                        = 2,
	Totem                          = 3,
	SideQuest                      = 4,
	Other                          = 5,
	EBlueOrbSourceType_MAX         = 6,
};

enum class ERacingBallsVisualState : uint8
{
	Solved                         = 0,
	Default                        = 1,
	OtherIsBeingSolved             = 2,
	IsBeingSolved                  = 3,
	SolvableAndTargeted            = 4,
	MAX                            = 5,
};

enum class ERacingMetaPuzzleState : int32
{
	NotStarted                     = 0,
	Starting                       = 1,
	Collecting                     = 2,
	Finished                       = 3,
	MAX                            = 4,
};

enum class EMilestoneTier : uint8
{
	Bronze                         = 0,
	Silver                         = 1,
	Gold                           = 2,
	Platinum                       = 3,
	EMilestoneTier_MAX             = 4,
};

enum class EHoldInputType : uint8
{
	CANCELLING                     = 0,
	TELEPORTING                    = 1,
	MAX                            = 2,
};

enum class ERingLocState : uint8
{
	PLATFORM                       = 0,
	GROUND                         = 1,
	AIRBORNE                       = 2,
	ERingLocState_MAX              = 3,
};

enum class ERingIntState : uint8
{
	AWAY                           = 0,
	ALERT                          = 1,
	READY                          = 2,
	TRIAL                          = 3,
	OBSERVING                      = 4,
	RESULTS                        = 5,
	ERingIntState_MAX              = 6,
};

enum class ERacingRingsHighlightType : uint8
{
	Disabled                       = 0,
	Proximity                      = 1,
	Rings                          = 2,
	ERacingRingsHighlightType_MAX  = 3,
};

enum class ERingFindType : uint8
{
	ArchwayFind                    = 0,
	RingFind                       = 1,
	ERingFindType_MAX              = 2,
};

enum class EDirections : uint8
{
	North                          = 0,
	East                           = 1,
	South                          = 2,
	West                           = 3,
	Null                           = 4,
	EDirections_MAX                = 5,
};

enum class EControlMethods : uint8
{
	ClickCubesOne                  = 0,
	ButtonToClick                  = 1,
	WASD                           = 2,
	EControlMethods_MAX            = 3,
};

enum class ERollingCubeTileType : uint8
{
	OpenTile                       = 0,
	blocked                        = 1,
	Victory                        = 2,
	Unpainted                      = 3,
	Painted                        = 4,
	Ice                            = 5,
	RollingCubeTileType_MAX        = 6,
};

enum class ERosaryShape : uint8
{
	Circle                         = 0,
	Square                         = 1,
	Triangle                       = 2,
	Pentagon                       = 3,
	Star                           = 4,
	Heart                          = 5,
	Infinity                       = 6,
	Trefoil                        = 7,
	Spiral                         = 8,
	Count                          = 9,
	ERosaryShape_MAX               = 10,
};

enum class ESpeedRosaryIntState : uint8
{
	AWAY                           = 0,
	READY                          = 1,
	TRIAL                          = 2,
	ESpeedRosaryIntState_MAX       = 3,
};

enum class ERtmConnectionState : uint8
{
	Inactive                       = 0,
	Connecting                     = 1,
	Reconnecting                   = 2,
	FullyConnected                 = 3,
	ERtmConnectionState_MAX        = 4,
};

enum class ERuleBoxContainerType : uint8
{
	PuzzleRuleContainer            = 0,
	SymbolRuleContainer            = 1,
	ERuleBoxContainerType_MAX      = 2,
};

enum class EObstacleState : uint8
{
	Inactive                       = 0,
	Active                         = 1,
	Solved                         = 2,
	EObstacleState_MAX             = 3,
};

enum class EPuzzleCategory : uint8
{
	None                           = 0,
	HiddenObjects                  = 1,
	Cubes                          = 2,
	Movement                       = 3,
	Perspective                    = 4,
	Action                         = 5,
	Environment                    = 6,
	Max                            = 7,
};

enum class ESeek5State : uint8
{
	Inactive                       = 0,
	BeingSolved                    = 1,
	Solved                         = 2,
	ESeek5State_MAX                = 3,
};

enum class EGameStartType : uint8
{
	FloatingIsland                 = 0,
	RandomAirSpawn                 = 1,
	RandomTerrainSpawn             = 2,
	MovingIsland                   = 3,
	EGameStartType_MAX             = 4,
};

enum class EConquestScoreType : uint8
{
	Capture4                       = 0,
	GlobalTickets                  = 1,
	ZoneTickets                    = 2,
	SlowCapture                    = 3,
	Coop                           = 4,
	EConquestScoreType_MAX         = 5,
};

enum class EGameModeType : uint8
{
	Sandbox                        = 0,
	Conquest                       = 1,
	EGameModeType_MAX              = 2,
};

enum class ESliderShape : uint8
{
	RECTANGLE                      = 0,
	ELLIPSE                        = 1,
	CYLINDER_X                     = 2,
	CYLINDER_Y                     = 3,
	TORUS                          = 4,
	SliderShape_MAX                = 5,
};

enum class ELocationPingType : uint8
{
	MapMarker                      = 0,
	Wave                           = 1,
	Help                           = 2,
	CheckItOut                     = 3,
	Thanks                         = 4,
	NotThat                        = 5,
	MAX                            = 6,
};

enum class EPingMessageAttemptResult : uint8
{
	Success                        = 0,
	Cooldown                       = 1,
	BlockedByThem                  = 2,
	BlockedThem                    = 3,
	Error                          = 4,
	Failed                         = 5,
	PendingViaNetwork              = 6,
	MAX                            = 7,
};

enum class ECardinalDirections : uint8
{
	North                          = 0,
	East                           = 1,
	South                          = 2,
	West                           = 3,
	ECardinalDirections_MAX        = 4,
};

enum class EMapSubMenu : uint8
{
	Map                            = 0,
	Upgrades                       = 1,
	Masteries                      = 2,
	Encyclopedia                   = 3,
	Wardrobe                       = 4,
	EMapSubMenu_MAX                = 5,
};

enum class EReceiveChirpsMode : uint8
{
	Everyone                       = 0,
	FriendsAndParty                = 1,
	PartyOnly                      = 2,
	EReceiveChirpsMode_MAX         = 3,
};

enum class EGlideMode : uint8
{
	EAndTripleJumpGlide            = 0,
	EToGlide                       = 1,
	TripleJumpGlide                = 2,
	EGlideMode_MAX                 = 3,
};

enum class ESprintMode : uint8
{
	AutoHold                       = 0,
	NormalRun                      = 1,
	AlwaysRun                      = 2,
	ToggleToRun                    = 3,
	ESprintMode_MAX                = 4,
};

enum class EScreenBoundsFlag : uint8
{
	CompletelyWithinBounds         = 0,
	TopBounds                      = 1,
	BottomBounds                   = 2,
	RightBounds                    = 4,
	LeftBounds                     = 8,
	EScreenBoundsFlag_MAX          = 9,
};

enum class ECursorMode : uint8
{
	Auto                           = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	MAX                            = 4,
};

enum class EInputDeviceType : uint8
{
	KeyboardMouse                  = 0,
	GamepadInput                   = 1,
	EInputDeviceType_MAX           = 2,
};

enum class ELocalizationCulture : uint8
{
	EN                             = 0,
	French                         = 1,
	German                         = 2,
	Italian                        = 3,
	Japanese                       = 4,
	Korean_South                   = 5,
	ES_Spain                       = 6,
	ES_LatinAmerica                = 7,
	Simplified_Chinese             = 8,
	Traditional_Chinese            = 9,
	Portuguese_Brazil              = 10,
	MAXCount                       = 11,
	ELocalizationCulture_MAX       = 12,
};

enum class ESpawningPattern : uint8
{
	Globe                          = 0,
	Disk                           = 1,
	SpawningPattern_MAX            = 2,
};

enum class EDifferenceType : uint8
{
	Twin                           = 0,
	Single                         = 1,
	Partner                        = 2,
	DifferenceType_MAX             = 3,
};

enum class ETooltipBehaviour : uint8
{
	Default                        = 0,
	CenteredOnParentX              = 1,
	ETooltipBehaviour_MAX          = 2,
};

enum class EDailyQuestSlot : uint8
{
	Slot1                          = 0,
	Slot2                          = 1,
	Slot3                          = 2,
	Slot4                          = 3,
	Slot5                          = 4,
	NoSlot                         = 255,
	EDailyQuestSlot_MAX            = 256,
};

enum class EDailyQuestPoolType : uint8
{
	Easy                           = 0,
	Medium                         = 1,
	Hard                           = 2,
	Rare                           = 3,
	NotApplicable                  = 255,
	EDailyQuestPoolType_MAX        = 256,
};

enum class EWorldQuestType : uint8
{
	MainQuest                      = 0,
	SideQuest                      = 1,
	DailyQuest                     = 2,
	AutoQuest                      = 3,
	EWorldQuestType_MAX            = 4,
};

enum class EMainMapZoneName : uint8
{
	NoZone                         = 0,
	Lobby                          = 1,
	Egypt                          = 2,
	Central                        = 3,
	Riverlands                     = 4,
	Redwoods                       = 5,
	Geyser                         = 6,
	Intro                          = 7,
	MAX                            = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.OnlineServiceError
struct FOnlineServiceError
{
public:
	enum class EOnlineServiceErrorCategory       ErrorCategory;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ErrorCode;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ErrorMessage;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.OnlineIdentity
struct FOnlineIdentity
{
public:
	enum class EOnlineServiceProvider            Provider;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnlinePlatform                   Platform;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserId;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserName;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.OnlineIdentityList
struct FOnlineIdentityList
{
public:
	TArray<struct FOnlineIdentity>               Identities;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct IslandsofInsight.GISKrakenData
struct FGISKrakenData
{
public:
	uint8                                        Pad_245B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UKrakenSdk*                            KrakenSdk;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineIdentityList                   Identities;                                        // 0x10(0x10)(NativeAccessSpecifierPublic)
	class URtmConnection*                        Rtm;                                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_245C[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct IslandsofInsight.GSAnalyticsData
struct FGSAnalyticsData
{
public:
	class FString                                UserId;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventType;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Resolution;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Os;                                                // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Language;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TimeZone;                                          // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x78 - 0x50)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_Base
struct FBhvrAnalyticsEvent_Base : public FBhvrAnalyticsEvent_Session
{
public:
	class FString                                EventID;                                           // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventType;                                         // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EventTypeVersion;                                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2468[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x90 - 0x78)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_Progression
struct FBhvrAnalyticsEvent_Progression : public FBhvrAnalyticsEvent_Base
{
public:
	class FString                                UserId;                                            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Timestamp;                                         // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0xE0 - 0x90)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_ProgressionQuest
struct FBhvrAnalyticsEvent_ProgressionQuest : public FBhvrAnalyticsEvent_Progression
{
public:
	class FString                                QuestID;                                           // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QuestName;                                         // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ObjectiveName;                                     // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Chapter;                                           // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QuestEvent;                                        // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xB0 - 0x90)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_ProgressionLevel
struct FBhvrAnalyticsEvent_ProgressionLevel : public FBhvrAnalyticsEvent_Progression
{
public:
	class FString                                Contribution;                                      // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XpGained;                                          // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasGainedLevel;                                    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0xC8 - 0x78)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_PuzzleEvent
struct FBhvrAnalyticsEvent_PuzzleEvent : public FBhvrAnalyticsEvent_Base
{
public:
	int32                                        PuzzleId;                                          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PuzzleName;                                        // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QuestID;                                           // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PuzzleArea;                                        // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameMode;                                          // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Difficulty;                                        // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0xC8 - 0xC8)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_AbandonPuzzle
struct FBhvrAnalyticsEvent_AbandonPuzzle : public FBhvrAnalyticsEvent_PuzzleEvent
{
public:
};

// 0x0 (0xC8 - 0xC8)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_OpenPuzzle
struct FBhvrAnalyticsEvent_OpenPuzzle : public FBhvrAnalyticsEvent_PuzzleEvent
{
public:
};

// 0x0 (0xC8 - 0xC8)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_SolvePuzzle
struct FBhvrAnalyticsEvent_SolvePuzzle : public FBhvrAnalyticsEvent_PuzzleEvent
{
public:
};

// 0x0 (0x78 - 0x78)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_PlayerEvent
struct FBhvrAnalyticsEvent_PlayerEvent : public FBhvrAnalyticsEvent_Base
{
public:
};

// 0x10 (0x60 - 0x50)
// ScriptStruct IslandsofInsight.BhvrAnalyticsEvent_HeatmapCoords
struct FBhvrAnalyticsEvent_HeatmapCoords : public FBhvrAnalyticsEvent_Session
{
public:
	float                                        PlayerX;                                           // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerY;                                           // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerZ;                                           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.CatalogResult
struct FCatalogResult
{
public:
	uint8                                        Pad_246F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.Body
struct FBody
{
public:
	class USkeletalMesh*                         Mesh;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstance*>             Materials;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  Color;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Icon;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IslandsofInsight.Hair
struct FHair
{
public:
	class FString                                KrakenId;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstance*>             Materials;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  Colors;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Icon;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.MasteryData
struct FMasteryData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2471[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.CosmeticUnlock
struct FCosmeticUnlock
{
public:
	enum class ECustomizationUnlockType          UnlockType;                                        // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2473[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Cost;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QuestID;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMasteryData                          Mastery;                                           // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct IslandsofInsight.WingsMaterial
struct FWingsMaterial
{
public:
	class FString                                KrakenId;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     Material;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomizationRarity              Rarity;                                            // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2474[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCosmeticUnlock                       ItemUnlockData;                                    // 0x58(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct IslandsofInsight.WingsMesh
struct FWingsMesh
{
public:
	class FString                                KrakenId;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomizationRarity              Rarity;                                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2476[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCosmeticUnlock                       ItemUnlockData;                                    // 0x48(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct IslandsofInsight.CostumeSingle
struct FCostumeSingle
{
public:
	class FString                                KrakenId;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomizationRarity              Rarity;                                            // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2477[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         Mesh;                                              // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstance*>             Materials;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Mask;                                              // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCosmeticUnlock                       ItemUnlockData;                                    // 0x58(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                UnlockMessage;                                     // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          RarityColor;                                       // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct IslandsofInsight.Costume
struct FCostume
{
public:
	TArray<class FString>                        KrakenIds;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Names;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class ECustomizationRarity>      Rarities;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         Mesh;                                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstance*>             Materials;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Texture;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Icon;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                            Mask;                                              // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCosmeticUnlock>               ItemUnlockData;                                    // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.CostumeColors
struct FCostumeColors
{
public:
	TArray<class UTexture2D*>                    Textures;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.CustomizationMaterialInfo
struct FCustomizationMaterialInfo
{
public:
	TArray<class UMaterialInstance*>             Materials;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Textures;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Masks;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.MasteryUnlockData
struct FMasteryUnlockData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2479[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.CustomizationUnlock
struct FCustomizationUnlock
{
public:
	enum class ECustomizationUnlockableType      UnlockType;                                        // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Cost;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QuestID;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMasteryUnlockData                    Mastery;                                           // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct IslandsofInsight.CustomizationSingle
struct FCustomizationSingle
{
public:
	class FString                                KrakenId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ECustomizationGrades              Rarity;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           StaticMesh;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NiagaraSystem;                                     // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomizationMaterialInfo            MaterialAndTexture;                                // 0x48(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomizationUnlock                  ItemUnlockData;                                    // 0x80(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  UnlockMessage;                                     // 0xB0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0xC8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          RarityColor;                                       // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  Color;                                             // 0xF0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  SecondaryColor;                                    // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IsLongHair;                                        // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x114(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct IslandsofInsight.Customization
struct FCustomization
{
public:
	TArray<class FString>                        KrakenIds;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          ItemNames;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class ECustomizationGrades>      Rarities;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                 SkeletalMeshes;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UStaticMesh*>                   StaticMeshes;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UNiagaraSystem*>                NiagaraSystem;                                     // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationMaterialInfo>    MaterialAndTextures;                               // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Icon;                                              // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          ItemDescriptions;                                  // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationUnlock>          ItemUnlockData;                                    // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  Colors;                                            // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  SecondaryColors;                                   // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IsLongHair;                                        // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.StringArray
struct FStringArray
{
public:
	uint8                                        Pad_247F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct IslandsofInsight.RosaryComboTracker
struct FRosaryComboTracker
{
public:
	uint8                                        Pad_2480[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.ClickEventContext
struct FClickEventContext
{
public:
	class ASophiaCharacter*                      Player;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.ConquestPersonPerformanceInformation
struct FConquestPersonPerformanceInformation
{
public:
	class FString                                PersonName;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LeaderboardPosition;                               // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRed;                                             // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLocalPlayer;                                     // 0x15(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2482[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPuzzlesSolved;                                  // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2483[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.MasterySnapshot
struct FMasterySnapshot
{
public:
	class UPlayerMastery*                        TheMastery;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueSeenFirst;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueSeenLast;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.ConquestAwardInfo
struct FConquestAwardInfo
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TITLE;                                             // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParameterA;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.ConquestLeaderboardEntry
struct FConquestLeaderboardEntry
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SolvedPuzzles;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SolvedPoints;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMyself;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMyParty;                                        // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2484[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rank;                                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.ContentVersionUpdateMessage
struct FContentVersionUpdateMessage
{
public:
	uint8                                        Pad_2485[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.CurrencyInfo
struct FCurrencyInfo
{
public:
	class UObject*                               Parent;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastChangeTime;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Amount;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AmountBeforeChange;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Increment;                                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DisplayAmount;                                     // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2486[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.DrumSoundPlayerSettings
struct FDrumSoundPlayerSettings
{
public:
	float                                        Tempo;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumColsPerBeat;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          DrumSoundNames;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.ObjectArray
struct FObjectArray
{
public:
	TArray<TWeakObjectPtr<class UObject>>        Objects;                                           // 0x0(0x10)(ZeroConstructor, Transient, NonTransactional, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IslandsofInsight.SubtitleInfo
struct FSubtitleInfo
{
public:
	class FText                                  Subtitle;                                          // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pause;                                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubtitleType                     Type;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2487[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.SophiaVisualModifier
struct FSophiaVisualModifier
{
public:
	uint8                                        Pad_2488[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASophiaPostProcessVolume*              ResponsibleVolume;                                 // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x58 - 0x10)
// ScriptStruct IslandsofInsight.ExponentialFogModifier
struct FExponentialFogModifier : public FSophiaVisualModifier
{
public:
	float                                        ExtinctionScale;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Albedo;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Emissive;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogDensity;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogHeightFalloff;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FogInscatteringColor;                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogMaxOpacity;                                     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDistance;                                     // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogCutoffDistance;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExponentialHeightFogData             SecondFogData;                                     // 0x4C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.ExponentialFogData
struct FExponentialFogData
{
public:
	class AExponentialHeightFog*                 HeightFogActor;                                    // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExponentialFogModifier>       Modifiers;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct IslandsofInsight.SophiaMove
struct FSophiaMove
{
public:
	uint8                                        Pad_248A[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.FeedMessage
struct FFeedMessage
{
public:
	class FText                                  Message;                                           // 0x0(0x18)(NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Golden;                                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct IslandsofInsight.LocationMarkerData
struct FLocationMarkerData
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VisibleOnScreen;                                   // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VisibleOnMap;                                      // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowEverywhere;                                    // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowOverFog;                                       // 0xF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDrawWorldDistance;                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Opacity;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMainMapZoneName                  ZoneOverride;                                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            WorldTex;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            MapTex;                                            // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideGenericMarkerBackground;                       // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawOnMapEdge;                                     // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SizeMultiplier;                                    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ScreenPositionOffset;                              // 0x38(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MapPositionOffset;                                 // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MarkerName;                                        // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         DrawNameOnMap;                                     // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2490[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          NameColor;                                         // 0x6C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NameZoomThreshold;                                 // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowInfoPanel;                                     // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2491[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FunctionText;                                      // 0x88(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TScriptInterface<class IMarkerFunction>      FunctionActor;                                     // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2492[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APuzzleBase*                           AssociatedActor;                                   // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsMainQuest;                                       // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSideQuest;                                       // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPinned;                                          // 0xC2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SupportsFastTravel;                                // 0xC3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMarkerStatus                     Status;                                            // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2493[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x100 - 0xC8)
// ScriptStruct IslandsofInsight.PlayerLocationMarkerData
struct FPlayerLocationMarkerData : public FLocationMarkerData
{
public:
	class FText                                  AdditionalText;                                    // 0xC8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ELocationPingType                 PingType;                                          // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2496[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASophiaPlayerState*                    Owner;                                             // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APuzzleBase*                           Pb;                                                // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALocationPing*                         AssociatedPing;                                    // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct IslandsofInsight.FollowTheShinyPointWaypoint
struct FFollowTheShinyPointWaypoint
{
public:
	bool                                         EditorAutoCalculateTime;                           // 0x0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2497[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StopPoint;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeConstraint;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SplineDistance;                                    // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastEditedTime;                                    // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.ForceReconnectMessage
struct FForceReconnectMessage
{
public:
	uint8                                        Pad_2498[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.PuzzleInputKeyframe
struct FPuzzleInputKeyframe
{
public:
	uint8                                        Pad_249A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct IslandsofInsight.FractalJigsawMove
struct FFractalJigsawMove
{
public:
	int32                                        Coord1;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Coord2;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct IslandsofInsight.FractalJigsawServerState
struct FFractalJigsawServerState
{
public:
	TArray<int32>                                TilePermutation;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ASophiaCharacter*>              PlayersWhoMadeMoves;                               // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LastMoveIDs;                                       // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<class ASophiaCharacter*>                PlayersWhoMadeCorrectMoves;                        // 0x30(0x50)(RepSkip, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.FractalType2D
struct FFractalType2D
{
public:
	float                                        DEPRECATED_probabilityWeight;                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESliderShape                      SliderShape;                                       // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_249B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSuitableParameterSquaredDistanceFromCenter;     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSuitableParameterSquaredDistanceFromCenter;     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WinThreshold;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseControlsHorizontally;                      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseControlsVertically;                        // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipControlsXY;                                   // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_249C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    FractalMaterial;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IslandsofInsight.FriendsChangeNotificationMessage
struct FFriendsChangeNotificationMessage
{
public:
	uint8                                        Pad_249D[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.GameSessionPlacementFailedMessage
struct FGameSessionPlacementFailedMessage
{
public:
	uint8                                        Pad_249E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IslandsofInsight.GameSessionPlacementFulfilledMessage
struct FGameSessionPlacementFulfilledMessage
{
public:
	uint8                                        Pad_249F[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.ArrayOfObjects
struct FArrayOfObjects
{
public:
	TArray<class UObject*>                       Arr;                                               // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.GravitySplineSolvePoint
struct FGravitySplineSolvePoint
{
public:
	uint8                                        Pad_24A0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Component;                                         // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct IslandsofInsight.GravityWellData
struct FGravityWellData : public FTableRowBase
{
public:
	float                                        Mass;                                              // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.GridHighlightInfo
struct FGridHighlightInfo
{
public:
	struct FVector2D                             ScreenLocation;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScreenSize;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SequenceOrder;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct IslandsofInsight.GridCaveHighlightInfo
struct FGridCaveHighlightInfo
{
public:
	struct FGridHighlightInfo                    AtTheClue;                                         // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECellColor                        SelfColor;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VisibleDown;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleRight;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleUp;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleLeft;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleSameColorDown;                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleSameColorRight;                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleSameColorUp;                                // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleSameColorLeft;                              // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalVisibleIncludingSelf;                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalVisibleSameColorIncludingSelf;                // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.GridTipData
struct FGridTipData
{
public:
	class UTexture2D*                            Tex;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.GyroPuzzleRingLayer
struct FGyroPuzzleRingLayer
{
public:
	class USceneComponent*                       RingEmptyRotateStatic;                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       RingEmptyTranslateBefore;                          // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       RingEmptyRotateDynamic;                            // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       RingEmptyTranslateAfter;                           // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  RingMesh;                                          // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  RingCollision;                                     // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLookCacheInitialized;                             // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLookCacheIsSolved;                                // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLookCacheIsOK;                                    // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A2[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct IslandsofInsight.GyroPuzzleSpec
struct FGyroPuzzleSpec
{
public:
	int64                                        NumRings;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 RingOKMask;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	float                                        BaseRotationRate;                                  // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRotator>                      RingRotationRates;                                 // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                      RingStaticRotationOffsets;                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                      RingDynamicRotationOffsets;                        // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       RingPivotTranslationOffsets;                       // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       RingPostTranslationOffsets;                        // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       RingSelfTranslationOffsets;                        // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<float>                                RingScales;                                        // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	float                                        ReferenceSolveTime;                                // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReferenceSolveLaserLocation;                       // 0x94(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReferenceSolveLaserRotation;                       // 0xA0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SizeBound;                                         // 0xAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.GyroPuzzleRayTestResult
struct FGyroPuzzleRayTestResult
{
public:
	int32                                        BadHits;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GoodHits;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IslandsofInsight.InstructionTipType
struct FInstructionTipType
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ECellColor>                Pattern;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PatternHeight;                                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PatternWidth;                                      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TextOverride;                                      // 0x28(0x18)(NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IslandsofInsight.InventoryData
struct FInventoryData
{
public:
	uint8                                        Pad_24A4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeLeft;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurMagnitude;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24A5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItem*>                         TrackedItems;                                      // 0x18(0x10)(ZeroConstructor, RepSkip, Protected, NativeAccessSpecifierProtected)
	enum class EItemType                         Type;                                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItem*                                 DefaultItem;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24A8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Count;                                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharItemComponent*                    ItemComp;                                          // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASophiaCharacter*                      Player;                                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxTimeLeft;                                       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_24AB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.LaunchedPlayers
struct FLaunchedPlayers
{
public:
	class ASophiaCharacter*                      PlayerRef;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24AC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct IslandsofInsight.KlotskiBlockData
struct FKlotskiBlockData
{
public:
	uint8                                        Pad_24AD[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SlidingSpeed;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24AE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInstancedStaticMeshComponent*         blockISM;                                          // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*         JoinISM;                                           // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AKlotskiPuzzle*                        KlotskiPuzzle;                                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_24B0[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IslandsofInsight.InstanceData
struct FInstanceData
{
public:
	class UInstancedStaticMeshComponent*         ParentISM;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FIntPoint                             InitialPoint;                                      // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.KlotskiPuzzleSpec
struct FKlotskiPuzzleSpec
{
public:
	int64                                        ShapeY;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ShapeX;                                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int64>                                Goals;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int64>                                Board;                                             // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IslandsofInsight.LevelRestrictionItem
struct FLevelRestrictionItem
{
public:
	int32                                        LevelIHave;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelNeeded;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCountable;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IslandsofInsight.DirectionalLightModifier
struct FDirectionalLightModifier : public FSophiaVisualModifier
{
public:
	float                                        Intensity;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.LightActorData
struct FLightActorData
{
public:
	class AActor*                                LightActor;                                        // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDirectionalLightModifier>     Modifiers;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.LockpickType
struct FLockpickType
{
public:
	int32                                        NumClocks;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumButtons;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.LockpickPuzzleSpec
struct FLockpickPuzzleSpec
{
public:
	TArray<int64>                                Clocks;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int64>                                Buttons;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int64>                                StartState;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct IslandsofInsight.Match3TileData
struct FMatch3TileData
{
public:
	int32                                        TileIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ColourIndex;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             GridLoc;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Cleared;                                           // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.Match3PuzzleSpec
struct FMatch3PuzzleSpec
{
public:
	bool                                         bGravity;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAirSwap;                                          // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        MoveLimit;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ShapeY;                                            // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ShapeX;                                            // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int64>                                Colors;                                            // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct IslandsofInsight.MatchboxPlayerVisionData
struct FMatchboxPlayerVisionData
{
public:
	struct FVector                               PlayerLocationFromActorOrigin;                     // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<uint16, bool>                           MatchboxIndexToCanSee;                             // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IslandsofInsight.CookedMatchboxSpawningContext
struct FCookedMatchboxSpawningContext
{
public:
	TArray<struct FMatchboxPlayerVisionData>     PlayerVisionData;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    PossibleMatchboxTransformsRelative;                // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 OriginActor;                                       // 0x20(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.MatchBoxGeneration
struct FMatchBoxGeneration
{
public:
	uint8                                        Pad_24BC[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.PlayerAreaConstraint
struct FPlayerAreaConstraint
{
public:
	float                                        MaxDistanceToBox;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceToBox;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeetingDistanceUncertainty;                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeetingDistanceToBox;                              // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinArea;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxArea;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.MatchboxMaterialAndTextureCombination
struct FMatchboxMaterialAndTextureCombination
{
public:
	TArray<class UTexture2D*>                    Textures;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     Material1;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     Material2;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.SkelMeshMergeSectionMapping_BP
struct FSkelMeshMergeSectionMapping_BP
{
public:
	TArray<int32>                                SectionIDs;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.SkelMeshMergeUVTransform
struct FSkelMeshMergeUVTransform
{
public:
	TArray<struct FTransform>                    UVTransforms;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.SkelMeshMergeUVTransformMapping
struct FSkelMeshMergeUVTransformMapping
{
public:
	TArray<struct FSkelMeshMergeUVTransform>     UVTransformsPerMesh;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IslandsofInsight.SkeletalMeshMergeParams
struct FSkeletalMeshMergeParams
{
public:
	TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh;                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                 MeshesToMerge;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StripTopLODS;                                      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNeedsCpuAccess : 1;                               // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkeletonBefore : 1;                               // Mask: 0x2, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_113 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_24BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeleton*                             Skeleton;                                          // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IslandsofInsight.MirrorMazeCell
struct FMirrorMazeCell
{
public:
	TArray<struct FIntVector>                    AdjacentCells;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FIntVector>                    OpaqueCells;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_24BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PosX;                                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PosY;                                              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Floor;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasTrapDoor;                                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CellsConnectedAbove;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct IslandsofInsight.MirrorMazeParams
struct FMirrorMazeParams
{
public:
	int32                                        RandSeed;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            NumMazeCellsXYZ;                                   // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is3DMaze;                                          // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             OpeningXY;                                         // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OpaqueWallPercentChance;                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalPathsChance;                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrapDoorChance;                                    // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpawnTrapDoorMeshes;                               // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IslandsofInsight.MultiplayerEscortPuzzleFailureInfo
struct FMultiplayerEscortPuzzleFailureInfo
{
public:
	bool                                         GoodToGo;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       Obj1;                                              // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Obj2;                                              // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExactLoc1;                                         // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExactLoc2;                                         // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FailedLocation;                                    // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.MultiplayerEscortPuzzleTarget
struct FMultiplayerEscortPuzzleTarget
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEscortPuzzleSplineComponent*          Spline;                                            // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMultiplayerLaserTarget*               TargetMesh;                                        // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APuzzleRegistrationPlatform*           RegistrationPlatform;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASophiaPlayerState*                    AssignedPlayer;                                    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct IslandsofInsight.MultiplayerLaserPuzzleConnectionVisualInfo
struct FMultiplayerLaserPuzzleConnectionVisualInfo
{
public:
	struct FVector                               ConnectionColor;                                   // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.MultiplayerLaserPuzzleConnection
struct FMultiplayerLaserPuzzleConnection
{
public:
	class USceneComponent*                       Obj1;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Obj2;                                              // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset1;                                           // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset2;                                           // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMultiplayerLaserPuzzleConnectionVisualInfo VisualInfo;                                        // 0x28(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct IslandsofInsight.MultiplayerLaserPuzzleConnectionTrialContext
struct FMultiplayerLaserPuzzleConnectionTrialContext
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USceneComponent*                       Obj1;                                              // 0x88(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Obj2;                                              // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct IslandsofInsight.OnlineEvent_PlayerSignedOut
struct FOnlineEvent_PlayerSignedOut
{
public:
	int32                                        LocalControllerId;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.OnlineEvent_PlayerSignedIn
struct FOnlineEvent_PlayerSignedIn
{
public:
	int32                                        LocalControllerId;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineIdentityList                   Identities;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IslandsofInsight.OnlineAuthService_SignOutResponse
struct FOnlineAuthService_SignOutResponse
{
public:
	bool                                         Succeeded;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct IslandsofInsight.OnlineAuthService_SignOutRequest
struct FOnlineAuthService_SignOutRequest
{
public:
	int32                                        LocalControllerId;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.OnlineAuthService_SignInResponse
struct FOnlineAuthService_SignInResponse
{
public:
	bool                                         Succeeded;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineIdentityList                   Identities;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct IslandsofInsight.OnlineAuthService_SignInRequest
struct FOnlineAuthService_SignInRequest
{
public:
	int32                                        LocalControllerId;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IslandsofInsight.OnlineAuthService_IsSignedInResponse
struct FOnlineAuthService_IsSignedInResponse
{
public:
	bool                                         IsSignedIn;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct IslandsofInsight.OnlineAuthService_IsSignedInRequest
struct FOnlineAuthService_IsSignedInRequest
{
public:
	int32                                        LocalControllerId;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.PartyChatMessageSentMessage
struct FPartyChatMessageSentMessage
{
public:
	uint8                                        Pad_24CE[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.PartyDisbandMessage
struct FPartyDisbandMessage
{
public:
	uint8                                        Pad_24CF[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IslandsofInsight.PartyInviteMessage
struct FPartyInviteMessage
{
public:
	uint8                                        Pad_24D0[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct IslandsofInsight.PartyInviteRemovedMessage
struct FPartyInviteRemovedMessage
{
public:
	uint8                                        Pad_24D1[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.PartyJoinMessage
struct FPartyJoinMessage
{
public:
	uint8                                        Pad_24D2[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.PartyJoinRejectMessage
struct FPartyJoinRejectMessage
{
public:
	uint8                                        Pad_24D3[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.PartyJoinRequestMessage
struct FPartyJoinRequestMessage
{
public:
	uint8                                        Pad_24D4[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.PartyMemberRemovedMessage
struct FPartyMemberRemovedMessage
{
public:
	uint8                                        Pad_24D5[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IslandsofInsight.PartyMemberStateChangeMessage
struct FPartyMemberStateChangeMessage
{
public:
	uint8                                        Pad_24D6[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IslandsofInsight.PartyOtherPlayerInviteMessage
struct FPartyOtherPlayerInviteMessage
{
public:
	uint8                                        Pad_24D7[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IslandsofInsight.PartyStateChangeMessage
struct FPartyStateChangeMessage
{
public:
	uint8                                        Pad_24D8[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IslandsofInsight.GridInvite
struct FGridInvite
{
public:
	class ASophiaPlayerState*                    Inviter;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KrakenInviterPlayerName;                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DA[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.PartyInvite
struct FPartyInvite
{
public:
	class FString                                KrakenInviterPlayerName;                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DB[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.KrakenRichPresenceData
struct FKrakenRichPresenceData
{
public:
	int64                                        LastUpdated;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnline;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReconnecting;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        LastActivity;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IslandsofInsight.PersistentPlayerReference
struct FPersistentPlayerReference
{
public:
	struct FKrakenRichPresenceData               RichPresenceState;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class USophiaGameInstance*                   ParentGameInstance;                                // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                KrakenId;                                          // 0x20(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                KrakenNickname;                                    // 0x30(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.SteamID
struct FSteamID
{
public:
	uint64                                       FullBits;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.PlayerBannedMessage
struct FPlayerBannedMessage
{
public:
	uint8                                        Pad_24DD[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IslandsofInsight.MasteryRankReward
struct FMasteryRankReward
{
public:
	int32                                        GoldReward;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CostumeKrakenID;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LorePageID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IslandsofInsight.RankName
struct FRankName
{
public:
	int32                                        LevelRequired;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  FormattableName;                                   // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            BorderIcon;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.PlayerNameChangeMessage
struct FPlayerNameChangeMessage
{
public:
	uint8                                        Pad_24E1[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.PlayerXP
struct FPlayerXP
{
public:
	int32                                        CurXP;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinXP;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxXP;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurLevel;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IslandsofInsight.PuzzleSolveData
struct FPuzzleSolveData
{
public:
	bool                                         bSolved;                                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReset;                                            // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SerializedProgress;                                // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SolveDuration;                                     // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        SolveTimestamp;                                    // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x488 (0x488 - 0x0)
// ScriptStruct IslandsofInsight.PlayerProgressionData
struct FPlayerProgressionData
{
public:
	struct FCurrencyInfo                         PlayerGoldInfo;                                    // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, RepSkip, NativeAccessSpecifierPublic)
	struct FCurrencyInfo                         PlayerBlueOrbsInfo;                                // 0x38(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, RepSkip, NativeAccessSpecifierPublic)
	struct FPlayerXP                             PlayerXP;                                          // 0x70(0x10)(Edit, BlueprintVisible, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        PlayerLevel;                                       // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USandboxProgressionData*               SandboxProgressionData;                            // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkillTreeData*                        SkillTreeData;                                     // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentChapter;                                    // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FString>             KrakenQuestsData;                                  // 0xA0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, RepSkip, NativeAccessSpecifierPublic)
	TArray<int32>                                GlobalMastery_ClaimedRewards;                      // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, RepSkip, NativeAccessSpecifierPublic)
	TMap<int32, struct FPuzzleSolveData>         KrakenIDToSolvedStatus;                            // 0x100(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, RepSkip, NativeAccessSpecifierPublic)
	TMap<class FString, struct FPuzzleSolveData> LocalIDToSolvedStatus;                             // 0x150(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, RepSkip, NativeAccessSpecifierPublic)
	TMap<class FString, struct FPuzzleSolveData> HackIDToSolvedStatus;                              // 0x1A0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, RepSkip, NativeAccessSpecifierPublic)
	class UEncyclopediaData*                     EncyclopediaData;                                  // 0x1F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E6[0x1E0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UEmoteData*                            EmoteData;                                         // 0x3D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E7[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        UnlockedCosmetics;                                 // 0x430(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<class FText>                          UnlockedTitles;                                    // 0x440(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	class UObject*                               Parent;                                            // 0x450(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                KrakenId;                                          // 0x458(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                KrakenNickname;                                    // 0x468(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPlayerMastery*>                MasteryLevels;                                     // 0x478(0x10)(ZeroConstructor, RepSkip, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.PlayerProviderNameChangeMessage
struct FPlayerProviderNameChangeMessage
{
public:
	uint8                                        Pad_24E8[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.LaserData
struct FLaserData
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseImpactPoint;                                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ImpactPoint;                                       // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PrioritizeImpactPoint;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   TargetComponent;                                   // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24EB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IslandsofInsight.AwakenData
struct FAwakenData
{
public:
	TSoftObjectPtr<class ADungeon>               AwakenByPuzzle;                                    // 0x0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AwakenErrorMsg;                                    // 0x28(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IslandsofInsight.PuzzleTypeData
struct FPuzzleTypeData
{
public:
	enum class EPuzzleCategory                   PuzzleCategory;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  SingularDisplayName;                               // 0x20(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  PluralDisplayName;                                 // 0x38(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            TypeIcon;                                          // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ScreenMarkerIcon;                                  // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            MapMarkerIcon;                                     // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct IslandsofInsight.PuzzleBoundsInfo
struct FPuzzleBoundsInfo
{
public:
	TSet<class FString>                          AcceptedTypes;                                     // 0x0(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         AcceptAllByDefault;                                // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FString>                          RejectedTypes;                                     // 0x58(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.PuzzleCoordinate
struct FPuzzleCoordinate
{
public:
	int32                                        R;                                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C;                                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IslandsofInsight.ZoneNumPuzzlesPerGroupOverride
struct FZoneNumPuzzlesPerGroupOverride
{
public:
	TMap<class FString, int32>                   PuzzleTypeToNumPuzzlesPerGroupOverride;            // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.ServerSolution
struct FServerSolution
{
public:
	TArray<int32>                                Solution;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct IslandsofInsight.PuzzleGridServerState
struct FPuzzleGridServerState
{
public:
	TArray<enum class ECellColor>                Color;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ASophiaCharacter*>              PlayersWhoMadeMoves;                               // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LastMoveIDs;                                       // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<class ASophiaCharacter*>                PlayersWhoMadeCorrectMoves;                        // 0x30(0x50)(RepSkip, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IslandsofInsight.PuzzleGridUtil
struct FPuzzleGridUtil
{
public:
	uint8                                        Pad_24F1[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IslandsofInsight.PuzzleCharInfo
struct FPuzzleCharInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TeamID;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASophiaPlayerState*                    PlayerState;                                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SolveDuration;                                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_24F3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.PanelMaterialOverrideData
struct FPanelMaterialOverrideData
{
public:
	enum class EModifierType                     Modifier;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IslandsofInsight.CellInstanceInfo
struct FCellInstanceInfo
{
public:
	struct FPuzzleCoordinate                     Coord;                                             // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            baseTransform;                                     // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECellColor                        Color;                                             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InstanceId;                                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInstancedStaticMeshComponent*         Ism;                                               // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.QuestNamePair
struct FQuestNamePair
{
public:
	class FName                                  QuestName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorldQuest*                           Quest;                                             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.PuzzleAndSolveDurationConfiguration
struct FPuzzleAndSolveDurationConfiguration
{
public:
	class USophiaPuzzleReference*                ObjectivePuzzle;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GoalSolveDuration;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESolveDurationComparisonOperator  ComparisonOperator;                                // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.QuestSaveData
struct FQuestSaveData
{
public:
	TArray<class FName>                          ActiveQuests;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          CompletedQuests;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                QuestProgressCounter;                              // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct IslandsofInsight.BlueOrbSourceData
struct FBlueOrbSourceData
{
public:
	uint8                                        Pad_24FA[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WorldLocation;                                     // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MapZoom;                                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        CompletionProgress;                                // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CompletionTarget;                                  // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24FB[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.BlueOrbSourceDataForBP
struct FBlueOrbSourceDataForBP
{
public:
	enum class EBlueOrbSourceType                Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMainMapZoneName                  ZONE;                                              // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TITLE;                                             // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TArray<bool>                                 BlueOrbData;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.CheckPointReachedEntry
struct FCheckPointReachedEntry
{
public:
	int32                                        CheckpointsReached;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASophiaCharacter*                      SophiaCharacter;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingTime;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24FE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct IslandsofInsight.ConeNumberMilestone
struct FConeNumberMilestone
{
public:
	int32                                        TotalConesCollected;                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AdditionalToSpawn;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.PlayerRacingMetaPuzzleScore
struct FPlayerRacingMetaPuzzleScore
{
public:
	int32                                        TentativeScore;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StableScore;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.SandboxMilestone
struct FSandboxMilestone
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Completed;                                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2500[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.PlayerRacingMilestoneData
struct FPlayerRacingMilestoneData
{
public:
	class ARacingPuzzle*                         MyRacingPuzzle;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASophiaPlayerState*                    PlayerRef;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSandboxMilestone>             Milestones;                                        // 0x10(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IslandsofInsight.MilestoneResultData
struct FMilestoneResultData
{
public:
	enum class EMilestoneTier                    Tier;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2501[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MilestoneValue;                                    // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Achieved;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2502[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.SandboxScoreMilestone
struct FSandboxScoreMilestone
{
public:
	float                                        Percentage;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Completed;                                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2503[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.PlayerScoreMilestoneData
struct FPlayerScoreMilestoneData
{
public:
	class ARacingRings*                          MyPuzzle;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASophiaPlayerState*                    PlayerRef;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSandboxScoreMilestone>        Milestones;                                        // 0x10(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IslandsofInsight.RichPresenceUpdateMessage
struct FRichPresenceUpdateMessage
{
public:
	uint8                                        Pad_2504[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.KeyScaleOverride
struct FKeyScaleOverride
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2507[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA (0xA - 0x0)
// ScriptStruct IslandsofInsight.RollingCubeGridMetaCube
struct FRollingCubeGridMetaCube
{
public:
	uint8                                        Pad_2508[0xA];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.RollingCubeGridMetaTile
struct FRollingCubeGridMetaTile
{
public:
	uint8                                        Pad_250A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IslandsofInsight.RollingCubeMetaPuzzleSpec
struct FRollingCubeMetaPuzzleSpec
{
public:
	int64                                        LengthX;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LengthY;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        BlockPosX;                                         // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        BlockPosY;                                         // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        BlockSizeX;                                        // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        BlockSizeY;                                        // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        BlockSizeZ;                                        // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        GoalMinX;                                          // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        GoalMaxX;                                          // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        GoalMinY;                                          // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        GoalMaxY;                                          // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 OpenMask;                                          // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct IslandsofInsight.RollingCubeMultiPuzzleSpec
struct FRollingCubeMultiPuzzleSpec
{
public:
	int32                                        Difficulty;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LengthX;                                           // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LengthY;                                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockCount;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                BlockPosX;                                         // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                BlockPosY;                                         // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                BlockSizeX;                                        // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                BlockSizeY;                                        // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                BlockSizeZ;                                        // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                Layout;                                            // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FVector                               baseScale;                                         // 0x70(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IslandsofInsight.RosaryRadar
struct FRosaryRadar
{
public:
	uint8                                        Pad_250D[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.GridRuleData
struct FGridRuleData
{
public:
	class UTexture2D*                            Tex;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.RyoanjiPlayerState
struct FRyoanjiPlayerState
{
public:
	class ASophiaCharacter*                      SophiaChar;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.RyoanjiStoneSpec
struct FRyoanjiStoneSpec
{
public:
	int64                                        Type_index;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        X;                                                 // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.RyoanjiPuzzleSpec
struct FRyoanjiPuzzleSpec
{
public:
	float                                        Width;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRyoanjiStoneSpec>             Stones;                                            // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct IslandsofInsight.RyoanjiVariant
struct FRyoanjiVariant
{
public:
	bool                                         bNeedActivateForLaser;                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeedLookForActivate;                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCones;                                         // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.SpawnTimeOffsetCheatInfo
struct FSpawnTimeOffsetCheatInfo
{
public:
	enum class EMainMapZoneName                  ZONE;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2510[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                KrakenPuzzleTypeID;                                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetTime;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2511[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.SandboxProgressionRewardData
struct FSandboxProgressionRewardData
{
public:
	int32                                        CoinAmount;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlueOrbAmount;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LorePageID;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CosmeticID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TrailLengthAmount;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2512[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct IslandsofInsight.SandboxProgressionPuzzleCategoryData
struct FSandboxProgressionPuzzleCategoryData
{
public:
	int32                                        LastClaimedRewardIndex;                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPuzzleCategory                   PuzzleCategory;                                    // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2514[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<float, struct FSandboxProgressionRewardData> CompletionPercentageToRewards;                     // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.SandboxProgressionZoneData
struct FSandboxProgressionZoneData
{
public:
	enum class EMainMapZoneName                  NameEnum;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2517[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSandboxProgressionPuzzleCategoryData> PuzzleCategoryData;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.ContainerAndContainedPuzzleInfo
struct FContainerAndContainedPuzzleInfo
{
public:
	int32                                        ContainerLocalIDHash;                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContainedPuzzleKID;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SpawnedName;                                       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.SpawnedWorldPuzzleInfo
struct FSpawnedWorldPuzzleInfo
{
public:
	int32                                        PuzzleKID;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SpawnedName;                                       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.ScreenMarkerWidgets
struct FScreenMarkerWidgets
{
public:
	TArray<class UScreenMarkerWidgetBase*>       Widgets;                                           // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.ScreenMarkerData
struct FScreenMarkerData
{
public:
	class UTexture2D*                            WorldTex;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScreenBoundsFlag                 boundsFlag;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MetersToPlayer;                                    // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizeMultiplier;                                    // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct IslandsofInsight.ServerParams
struct FServerParams
{
public:
	bool                                         PoleGivesSolverPoints;                             // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PuzzleSpawnRateMultiplier;                         // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameModeType                     GameModeType;                                      // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameStartType                    GameStartType;                                     // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlacePoweredOnly;                                  // 0xA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForbidPowerCycles;                                 // 0xB(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchTime;                                         // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchWinCon;                                       // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConquestItemsEnabled;                              // 0x14(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PowerPoleEnabled;                                  // 0x15(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AreaCaptureThreshold;                              // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConquestScoreType                ConquestScoreType;                                 // 0x1C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpiritModeEnabled;                                 // 0x1D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2520[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConquestPoleEnableTime;                            // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct IslandsofInsight.MinervaGateMapCircle
struct FMinervaGateMapCircle
{
public:
	struct FVector2D                             CirclePosition;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IslandsofInsight.TeamPuzzleCount
struct FTeamPuzzleCount
{
public:
	TArray<int32>                                Exps;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Counts;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ASophiaPlayerState*>            SolverPlayers;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ExpSolvedByPlayer;                                 // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                CountsSolvedByPlayer;                              // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct IslandsofInsight.SingleGridCellEdit
struct FSingleGridCellEdit
{
public:
	int32                                        CellIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECellColor                        NewColor;                                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2521[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ID;                                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.UpgradeTierInformation
struct FUpgradeTierInformation
{
public:
	class FText                                  ProminentDescriptionHeader;                        // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.LocationPingInfo
struct FLocationPingInfo
{
public:
	class ASophiaPlayerState*                    Sender;                                            // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       HitComponentOptional;                              // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Loc;                                               // 0x10(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationPingType                 PingType;                                          // 0x1C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2524[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APuzzleBase*                           Puzzle;                                            // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALocationPing*                         RepresentativeActor;                               // 0x28(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.PlayerPingMessage
struct FPlayerPingMessage
{
public:
	class FText                                  Message;                                           // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ExplanationMessage;                                // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.DirectPingEvent
struct FDirectPingEvent
{
public:
	class ASophiaPlayerState*                    OtherPlayer;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MessagedThem;                                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2525[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.NestedSendData
struct FNestedSendData
{
public:
	uint8                                        Pad_2526[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IslandsofInsight.LeanAmount
struct FLeanAmount
{
public:
	float                                        LR;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FB;                                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.VelocityBlend
struct FVelocityBlend
{
public:
	float                                        F;                                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        L;                                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        R;                                                 // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IslandsofInsight.CustomizationData
struct FCustomizationData
{
public:
	uint8                                        Sex;                                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Hair;                                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2528[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CostumeBody;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CostumeHeadPiece;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CostumeGloves;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EyebrowColor;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EyeColor;                                          // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinColor;                                         // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinSheen;                                         // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinEmissive;                                      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinEdgeEffect;                                    // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinWetness;                                       // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LipColorAmount;                                    // 0x17(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BlushAmount;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HairColor;                                         // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HairSecondaryColor;                                // 0x1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HairEthericColor;                                  // 0x1B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WingsMesh;                                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WingsColor;                                        // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GlideTrailColor;                                   // 0x1E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GlideTrailLength;                                  // 0x1F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GlideTrailSystem;                                  // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FaceTattoo;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BodyTattoo;                                        // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FaceMorph1;                                        // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FaceMorph2;                                        // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FaceMorph3;                                        // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HelmetHair;                                        // 0x26(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2529[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.CustomizationInfo
struct FCustomizationInfo
{
public:
	uint8                                        Sex;                                               // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Hair;                                              // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CostumeBody;                                       // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CostumeHeadPiece;                                  // 0x3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CostumeGloves;                                     // 0x4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EyeColor;                                          // 0x5(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinColor;                                         // 0x6(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinSheen;                                         // 0x7(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinEmissive;                                      // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinEdgeEffect;                                    // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkinWetness;                                       // 0xA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LipColorAmount;                                    // 0xB(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BlushAmount;                                       // 0xC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HairColor;                                         // 0xD(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HairSecondaryColor;                                // 0xE(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CostumeColor;                                      // 0xF(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HeadPieceColor;                                    // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GlovesColor;                                       // 0x11(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WingsMesh;                                         // 0x12(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WingsColor;                                        // 0x13(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GlideTrailColor;                                   // 0x14(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GlideTrailLength;                                  // 0x15(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FaceTattoo;                                        // 0x16(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BodyTattoo;                                        // 0x17(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct IslandsofInsight.EventPrompt
struct FEventPrompt
{
public:
	uint8                                        State;                                             // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GameModeType;                                      // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.ConquestServerValues
struct FConquestServerValues
{
public:
	bool                                         SpiritModeIsEnabled;                               // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PoleGivesSolverPoints;                             // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlacePoweredPolesOnly;                             // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForbidPowerCycles;                                 // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConquestItemsEnabled;                              // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasPowerPole;                                      // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PuzzleSpawnRateMultiplier;                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameStartType                    GameStartType;                                     // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConquestScoreType                ConquestScoreType;                                 // 0xD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConquestPoleEnableTimer;                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConquestSecondWindTimer;                           // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConquestSecondWindProgress;                        // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConquestWinScore;                                  // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AreaCaptureThreshold;                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConquestMatchStartPlayers;                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConquestMatchStartTime;                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CoopDuration;                                      // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IslandsofInsight.RegionPing
struct FRegionPing
{
public:
	class UPingIP*                               PingIP;                                            // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RegionName;                                        // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Ping;                                              // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x1C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct IslandsofInsight.SpawnChoiceContext
struct FSpawnChoiceContext
{
public:
	uint8                                        Pad_2530[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct IslandsofInsight.SpawnTestContext
struct FSpawnTestContext
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class APuzzleBase>               CallerPuzzleType;                                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2531[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IslandsofInsight.TimedMessage
struct FTimedMessage
{
public:
	uint8                                        Pad_2532[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.CursorInfo
struct FCursorInfo
{
public:
	class FName                                  CursorName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             HotSpot;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.SpiritGemData
struct FSpiritGemData
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLarge;                                           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2534[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IslandsofInsight.SpiritGemGeneration
struct FSpiritGemGeneration
{
public:
	TArray<struct FSpiritGemData>                Generations;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                  WorldBoundsAtGeneration;                           // 0x10(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2535[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.ConnectionActorPair
struct FConnectionActorPair
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.ConnectionAlwaysRelevantForOwnerNodePair
struct FConnectionAlwaysRelevantForOwnerNodePair
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection_WithLog* Node;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.RuneMeshOverrideData
struct FRuneMeshOverrideData
{
public:
	enum class EModifierType                     Modifier;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2536[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.VisualModifierArray
struct FVisualModifierArray
{
public:
	TArray<struct FSophiaVisualModifier>         Array;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.SpotTheDifferenceFeatureGroup
struct FSpotTheDifferenceFeatureGroup
{
public:
	TArray<TSubclassOf<class ASpotTheDifferenceItem>> Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         RotationallySymmetric;                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2537[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IslandsofInsight.SpotTheDifferenceItemSpec
struct FSpotTheDifferenceItemSpec
{
public:
	bool                                         ValidPosition;                                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2538[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Depth;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDifferenceType                   DifferenceType;                                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2539[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ASpotTheDifferenceItem>    Item;                                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Side;                                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_253A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.SpotTheDifferenceSpec
struct FSpotTheDifferenceSpec
{
public:
	TArray<struct FSpotTheDifferenceItemSpec>    Items;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct IslandsofInsight.Star
struct FStar
{
public:
	uint8                                        Pad_253C[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct IslandsofInsight.TattooBodyInfo
struct FTattooBodyInfo
{
public:
	class FString                                KrakenId;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ItemName;                                          // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ECustomizationGrades              Rarity;                                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_253E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemDescription;                                   // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCustomizationUnlock                  ItemUnlockData;                                    // 0x48(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        TattooFullBodyType;                                // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TattooFullBodyColor;                               // 0x7C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_253F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            TattooFullBodyDistortionTexture;                   // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            TattooFullBodyTexture;                             // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFullBodyBrightness;                          // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceContrast;                                // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFullBodyAdjustVisibility;                    // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFullBodyFaceVisibility;                      // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFullBodyNoiseScale;                          // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFullBodyDistortionNoiseScale;                // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFullBodyNoisePanSpeed;                       // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFullBodyDistortionNoiseIntensity;            // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct IslandsofInsight.TattooFaceInfo
struct FTattooFaceInfo
{
public:
	class FString                                KrakenId;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ItemName;                                          // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ECustomizationGrades              Rarity;                                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2540[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemDescription;                                   // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCustomizationUnlock                  ItemUnlockData;                                    // 0x48(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          TattooFaceColor;                                   // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TattooFaceColor2;                                  // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceColorGradientEnabled;                    // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceColorGradientOffset;                     // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceColorGradientPower;                      // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceColorGradientAngle;                      // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceGradientEnabled;                         // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceGradientOffset;                          // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceGradientPower;                           // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceMirrorUVs;                               // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceFlip;                                    // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceSize;                                    // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceAngle;                                   // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceUPosition;                               // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceVPosition;                               // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceType;                                    // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            TattooFaceTexture;                                 // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceBrightness;                              // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceBrightnessPulse;                         // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceAdjustVisibility;                        // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFacePowder;                                  // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceMotion;                                  // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceUseColorTexture;                         // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TattooFaceChannelToGetFaceFrom;                    // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooPowderScale;                                 // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceMetallic;                                // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TattooFaceRoughness;                               // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2542[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.TerminateGameSessionMessage
struct FTerminateGameSessionMessage
{
public:
	uint8                                        Pad_2543[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.MovementToProgress
struct FMovementToProgress
{
public:
	class UPlatformMovement*                     Mov;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Progress;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2545[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IslandsofInsight.MovementData
struct FMovementData
{
public:
	class UPlatformMovement*                     Info;                                              // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATowerPlatform*                        AppliedTo;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlatformEditorRepresentative*         EditorRepresentative;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IslandsofInsight.StandOnMeshAndCollider
struct FStandOnMeshAndCollider
{
public:
	class UStaticMeshComponent*                  MeshComponent;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         OnSolverCollideComponent;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


