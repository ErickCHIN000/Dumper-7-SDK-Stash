#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGbxFocusableWidgetState : uint8
{
	Unknown                        = 0,
	Disabled                       = 1,
	NotFocused                     = 2,
	NotFocused_MouseHovered        = 3,
	NotFocused_MouseDown           = 4,
	Focused                        = 5,
	Focused_MouseHovered           = 6,
	Focused_MouseDown              = 7,
	EGbxFocusableWidgetState_MAX   = 8,
};

enum class EGbxFocusableWidgetMouseBehavior : uint8
{
	None                           = 0,
	SelectOnHover                  = 1,
	SelectOnClick                  = 2,
	InheritFromOwner               = 3,
	EGbxFocusableWidgetMouseBehavior_MAX = 4,
};

enum class EGbxGFxButtonType : uint8
{
	Standard                       = 0,
	Checkbox                       = 1,
	Radio                          = 2,
	UserCheckbox                   = 3,
	EGbxGFxButtonType_MAX          = 4,
};

enum class EGbxGFxButtonCheckedState : uint8
{
	Unchecked                      = 0,
	Checked                        = 1,
	EGbxGFxButtonCheckedState_MAX  = 2,
};

enum class EGbxGFxButtonLockedState : uint8
{
	Unlocked                       = 0,
	Locked                         = 1,
	EGbxGFxButtonLockedState_MAX   = 2,
};

enum class EMenuTransition : uint8
{
	CreateCharacterMenu_MainMenu   = 0,
	LoadCharacterMenu_MainMenu     = 1,
	MainMenu_LoadCharacterMenu     = 2,
	MainMenu_NewGameSettingMenu    = 3,
	MainMenu_OptionMenu            = 4,
	NewGameSettingsMenu_MainMenu   = 5,
	OptionMenu_MainMenu            = 6,
	TitleScreen_MainMenu           = 7,
	TitleScreen_FirstBoot          = 8,
	FirstBoot_MainMenu             = 9,
	PlaythroughSelectionMenu_MainMenu = 10,
	MainMenu_PlaythroughSelectionMenu = 11,
	Invalid                        = 12,
	None                           = 13,
	EMenuTransition_MAX            = 14,
};

enum class EGbxMenuInputDevice : uint8
{
	Unknown                        = 0,
	Gamepad                        = 1,
	KeyboardMouse                  = 2,
	EGbxMenuInputDevice_MAX        = 3,
};

enum class EBindingType : uint8
{
	Walking                        = 0,
	Common                         = 1,
	Driving                        = 2,
	EBindingType_MAX               = 3,
};

enum class EGbxProgressBarFillDirection : uint8
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	EGbxProgressBarFillDirection_MAX = 2,
};

enum class EUIAudioSettingOperation : uint8
{
	Delete                         = 0,
	Replace                        = 1,
	Preserve                       = 2,
	EUIAudioSettingOperation_MAX   = 3,
};

enum class EGbxGFxListAlignment : uint8
{
	Left                           = 0,
	Right                          = 1,
	Center                         = 2,
	EGbxGFxListAlignment_MAX       = 3,
};

enum class EGFxHUDWidgetAnchorType : uint8
{
	Viewport                       = 0,
	Crosshair                      = 1,
	EGFxHUDWidgetAnchorType_MAX    = 2,
};

enum class EGbxDialogBoxHelpersDialogTemplate : uint8
{
	Default                        = 0,
	Warning                        = 1,
	Error                          = 2,
	EGbxDialogBoxHelpersDialogTemplate_MAX = 3,
};

enum class EChargeClipState : uint8
{
	NOCHARGE                       = 0,
	SPREADCLIP                     = 1,
	ACCURACYCLIP                   = 2,
	EChargeClipState_MAX           = 3,
};

enum class EContextualMenuEntryType : uint8
{
	Invite                         = 0,
	Join                           = 1,
	SendItem                       = 2,
	Favorite                       = 3,
	Unfavorite                     = 4,
	Mute                           = 5,
	Unmute                         = 6,
	Delete                         = 7,
	KickOut                        = 8,
	Inspect                        = 9,
	ViewProfile                    = 10,
	AddFriend                      = 11,
	RemoveFriend                   = 12,
	NetworkOption_Anyone           = 13,
	NetworkOption_FriendsOnly      = 14,
	NetworkOption_InviteOnly       = 15,
	LootMode_Classic               = 16,
	LootMode_Shared                = 17,
	Shift_SecondaryIdentity        = 18,
	Shift_AddFriend                = 19,
	Shift_RemoveFriend             = 20,
	Shift_Block                    = 21,
	Shift_Unblock                  = 22,
	Shift_Report                   = 23,
	None                           = 24,
	Count                          = 25,
	EContextualMenuEntryType_MAX   = 26,
};

enum class EContextualMenuExpandDirection : uint8
{
	Unknown                        = 0,
	Down                           = 1,
	Up                             = 2,
	EContextualMenuExpandDirection_MAX = 3,
};

enum class EContextualMenuLayout : uint8
{
	RosterMenu                     = 0,
	MailMenuSendTo                 = 1,
	MailMenuRecieved               = 2,
	EContextualMenuLayout_MAX      = 3,
};

enum class EGFxVirtualKeyboardType : uint8
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	GFxVirtualKeyboardType_MAX     = 6,
};

enum class EGbxGFxListConfigType : uint8
{
	All                            = 0,
	PreserveLayout                 = 1,
	EGbxGFxListConfigType_MAX      = 2,
};

enum class EGbxGFxScrollListAddedItemPriority : uint8
{
	NewestOnTop                    = 0,
	OldestOnTop                    = 1,
	EGbxGFxScrollListAddedItemPriority_MAX = 2,
};

enum class EGbxGFxScrollListFocusOrderPriority : uint8
{
	BringToFront                   = 0,
	LeaveUnchanged                 = 1,
	BringToFrontWithEverythingElseInOrder = 2,
	BringToFrontWithEverythingElseInReverseOrder = 3,
	EGbxGFxScrollListFocusOrderPriority_MAX = 4,
};

enum class EGFxHUDWidgetTransitionType : uint8
{
	Animate                        = 0,
	Instant                        = 1,
	EGFxHUDWidgetTransitionType_MAX = 2,
};

enum class EGbxGFxListOrientation : uint8
{
	Vertical                       = 0,
	Horizontal                     = 1,
	EGbxGFxListOrientation_MAX     = 2,
};

enum class EGbxGFxScrollListFocusChangedAction : uint8
{
	DoNotChangeSelection           = 0,
	SelectNoneOnLossSelectFirstOnGain = 1,
	SelectNoneOnLossRestorePreviousOnGain = 2,
	EGbxGFxScrollListFocusChangedAction_MAX = 3,
};

enum class EGbxGFxScrollListWrapMode : uint8
{
	Stick                          = 0,
	Wrap                           = 1,
	EGbxGFxScrollListWrapMode_MAX  = 2,
};

enum class EGbxGFxMenuSwitcherSubmenuInitReason : uint8
{
	Unknown                        = 0,
	Pushed                         = 1,
	NextPage                       = 2,
	PrevPage                       = 3,
	Switched                       = 4,
	EGbxGFxMenuSwitcherSubmenuInitReason_MAX = 5,
};

enum class EGbxGFxMenuSwitchNavWidgetType : int32
{
	Unknown                        = 0,
	MenuSwitcher                   = 1,
	CustomSwitcher                 = 2,
	EGbxGFxMenuSwitchNavWidgetType_MAX = 3,
};

enum class EEdgeFlashType : uint8
{
	None                           = 0,
	InterpolatedDecreaseOnly       = 1,
	All                            = 2,
	EEdgeFlashType_MAX             = 3,
};

enum class EGbxGFxSliderState : uint8
{
	NotScrolling                   = 0,
	ScrollingLeft                  = 1,
	ScrollingRight                 = 2,
	EGbxGFxSliderState_MAX         = 3,
};

enum class EGbxGFxSliderDirection : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	EGbxGFxSliderDirection_MAX     = 2,
};

enum class EGbxGridWidgetFill : uint8
{
	FillRow                        = 0,
	FillColumn                     = 1,
	EGbxGridWidgetFill_MAX         = 2,
};

enum class EGbxHUDStateListType : uint8
{
	WhiteList                      = 0,
	BlackList                      = 1,
	EGbxHUDStateListType_MAX       = 2,
};

enum class EHUDStateManagerVisibility : uint8
{
	Unknown                        = 0,
	Visible                        = 1,
	NotVisible                     = 2,
	EHUDStateManagerVisibility_MAX = 3,
};

enum class EGbxListFocusChangedAction : uint8
{
	DoNotChangeSelection           = 0,
	SelectNoneOnLossSelectFirstOnGain = 1,
	SelectNoneOnLossRestorePreviousOnGain = 2,
	EGbxListFocusChangedAction_MAX = 3,
};

enum class EGbxListWrapMode : uint8
{
	Stick                          = 0,
	Wrap                           = 1,
	EGbxListWrapMode_MAX           = 2,
};

enum class EGbxMenuInputMode : uint8
{
	None                           = 0,
	OwnerPlayer                    = 1,
	OwnerPlayer_DontConsumeInput   = 2,
	AnyLocalPlayer                 = 3,
	AnyController                  = 4,
	Inherit                        = 5,
	EGbxMenuInputMode_MAX          = 6,
};

enum class EGbxMenuParentType : uint8
{
	Viewport                       = 0,
	PlayerScreen                   = 1,
	Inherit                        = 2,
	EGbxMenuParentType_MAX         = 3,
};

enum class EGbxMenuInputActionTrigger : uint8
{
	Pressed                        = 0,
	Held                           = 1,
	HeldLong                       = 2,
	Released                       = 3,
	EGbxMenuInputActionTrigger_MAX = 4,
};

enum class EGbxMenuSwitcherSubmenuInitReason : uint8
{
	Unknown                        = 0,
	Pushed                         = 1,
	NextPage                       = 2,
	PrevPage                       = 3,
	Switched                       = 4,
	EGbxMenuSwitcherSubmenuInitReason_MAX = 5,
};

enum class EMenuTransitionOperation : uint8
{
	Push                           = 0,
	Pop                            = 1,
	Invalid                        = 2,
	None                           = 3,
	EMenuTransitionOperation_MAX   = 4,
};

enum class EGbxScrollBoxListFocusChangedAction : uint8
{
	DoNotChangeSelection           = 0,
	SelectNoneOnLossSelectFirstOnGain = 1,
	SelectNoneOnLossRestorePreviousOnGain = 2,
	EGbxScrollBoxListFocusChangedAction_MAX = 3,
};

enum class EGbxScrollBoxListWrapMode : uint8
{
	Stick                          = 0,
	Wrap                           = 1,
	EGbxScrollBoxListWrapMode_MAX  = 2,
};

enum class EVerticalTextAutoSizeType : uint8
{
	None                           = 0,
	Top                            = 1,
	Center                         = 2,
	bottom                         = 3,
	EVerticalTextAutoSizeType_MAX  = 4,
};

enum class EGbxUIKeys_BasicText : uint8
{
	Text                           = 0,
	EGbxUIKeys_MAX                 = 1,
};

enum class EOakUIKeys_ResourcePool : uint8
{
	Current                        = 0,
	Maximum                        = 1,
	ResourcePoolState              = 2,
	ResourcePoolStateTimestamp     = 3,
	EOakUIKeys_MAX                 = 4,
};

enum class EOakUIKeys_UIData : uint8
{
	PassThrough                    = 0,
	EOakUIKeys_MAX                 = 1,
};

enum class EHoldToPressGlyphType : uint8
{
	None                           = 0,
	Gamepad                        = 1,
	Keyboard                       = 2,
	KeyboardWide                   = 3,
	KeyboardXWide                  = 4,
	EHoldToPressGlyphType_MAX      = 5,
};

enum class EGbxInputGlyphType : uint8
{
	KeyboardMouse                  = 0,
	PS4                            = 1,
	XboxOne                        = 2,
	GenericGamepad                 = 3,
	SwitchPro                      = 4,
	Stadia                         = 5,
	DPX                            = 6,
	MPX                            = 7,
	EGbxInputGlyphType_MAX         = 8,
};

enum class EGbxActionToTextType : uint8
{
	PlayerController               = 0,
	KeyboardMouse                  = 1,
	Gamepad                        = 2,
	EGbxActionToTextType_MAX       = 3,
};

enum class EGbxSpinnerWidgetGoToMethod : uint8
{
	FromCurrent                    = 0,
	Immediately                    = 1,
	EGbxSpinnerWidgetGoToMethod_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.GbxMenuInputEvent
struct FGbxMenuInputEvent
{
public:
	uint8                                        Pad_1C07[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxUI.GbxCascadingListItemData
struct FGbxCascadingListItemData
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bHasChildren;                                      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C10[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxUI.GbxGFxMaterialRenderer
struct FGbxGFxMaterialRenderer
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UGbxGFxMovie>           OwningMovie;                                       // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.GbxGFxMediaPlayerConfig
struct FGbxGFxMediaPlayerConfig
{
public:
	class UMediaPlayer*                          MediaPlayer;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxMediaData*                         MediaData;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    MediaMaterial;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MediaDimensions;                                   // 0x18(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExternalTextureName;                               // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GbxUI.GbxGFxMouseCapturePanelMouseButtonInfo
struct FGbxGFxMouseCapturePanelMouseButtonInfo
{
public:
	uint8                                        Pad_1C59[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxUI.GbxGFxListCellUpdateInfo
struct FGbxGFxListCellUpdateInfo
{
public:
	class UGbxGFxListCell*                       Cell;                                              // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ListIndex;                                         // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0xC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNewSelection;                                   // 0xD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNewInView;                                      // 0xE(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxUI.GbxGFxSliderAcceleration
struct FGbxGFxSliderAcceleration
{
public:
	int32                                        RepeatsNeededToAcclerate;                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RepeatAdder;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIncreases;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToResetMouseWheelRepeat;                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxUI.GbxProgressBarInterpolator
struct FGbxProgressBarInterpolator
{
public:
	float                                        Delay;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxEasingFunc                        EasingFunc;                                        // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartValue;                                        // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndValue;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaEndOverride;                                  // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxUI.GbxProgressBarRange
struct FGbxProgressBarRange
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncreasing;                                       // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDecreasing;                                       // 0x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C97[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxUI.GbxUIViewHandle
struct FGbxUIViewHandle
{
public:
	uint8                                        Pad_1C9D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Context;                                           // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxUI.GbxGFxAnchor
struct FGbxGFxAnchor
{
public:
	struct FVector2D                             NormalizedPosition;                                // 0x0(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Offset;                                            // 0x8(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x10(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxUI.GbxGFxmovieClipAppendixItem
struct FGbxGFxmovieClipAppendixItem
{
public:
	TArray<class FString>                        ClipPaths;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxUI.GbxGFxMovieClipAppendix
struct FGbxGFxMovieClipAppendix
{
public:
	struct FGbxGFxmovieClipAppendixItem          DefaultRetVal;                                     // 0x0(0x10)(Transient, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGbxGFxmovieClipAppendixItem> AppendixMap;                                       // 0x10(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.GbxFocusableWidgetAdjacencyInfo
struct FGbxFocusableWidgetAdjacencyInfo
{
public:
	TWeakObjectPtr<class UObject>                WidgetUp;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                WidgetDown;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                WidgetLeft;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                WidgetRight;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GbxUI.GbxGFxListConfig
struct FGbxGFxListConfig
{
public:
	enum class EGbxGFxListConfigType             ConfigType;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxGFxListOrientation            ListOrientation;                                   // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxGFxListAlignment              ListAlignment;                                     // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D61[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FillSize;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VertCellSpacing;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorzCellSpacing;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoHideScrollBar;                                // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ScrollBarName;                                     // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxGFxScrollListWrapMode         WrapMode;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxFocusableWidgetMouseBehavior  DefaultItemSelectionBehavior;                      // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxGFxScrollListFocusChangedAction FocusChangeAction;                                 // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustHaveOneFocusableCellToReceiveFocus;           // 0x2B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EntryPrefix;                                       // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GridAreaName;                                      // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GridMaskName;                                      // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxGFxScrollListFocusOrderPriority FocusOrderPriority;                                // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxGFxScrollListAddedItemPriority AddedItemPriority;                                 // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFixedCellBounds;                               // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D84[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             FixedCellBoundsDemensions;                         // 0x64(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoveSelectionScrollIntoView;                      // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoveSelectionAnimateScroll;                       // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepScrollbarOnTop;                               // 0x6E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysConsumeDirectionInput;                      // 0x6F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowScrolling;                                   // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseScrollDirection;                           // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DefaultItemSelectedAudioEventName;                 // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DefaultItemClickedAudioEventName;                  // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeNavigatedIfMouseDisabled;                    // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFocusListIfCellGetsFocused;                       // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D93[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxUI.GbxUIDefaultInfo
struct FGbxUIDefaultInfo
{
public:
	class FName                                  Ident;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          States;                                            // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.GbxUIPreloadingInfo
struct FGbxUIPreloadingInfo
{
public:
	uint8                                        Pad_1D9F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Active;                                            // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        FoldersToPreload;                                  // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        OtherFileTypesToPreload;                           // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0xA8 - 0x28)
// ScriptStruct GbxUI.GbxGlobalsUI
struct FGbxGlobalsUI : public FGbxGlobalDef
{
public:
	struct FGbxUIDefaultInfo                     DefaultInfo;                                       // 0x28(0x18)(NativeAccessSpecifierPublic)
	TArray<struct FGbxUIDefaultInfo>             DefaultInfoMaps;                                   // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGbxUIDefaultInfo>             DefaultInfoModes;                                  // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGbxUIPreloadingInfo                  PreloadingInfo;                                    // 0x60(0x30)(Edit, NativeAccessSpecifierPublic)
	TArray<class FName>                          CoreInputActions;                                  // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  DefaultView;                                       // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct GbxUI.GbxUIWidgetDataBase
struct FGbxUIWidgetDataBase : public FGbxHasStructType
{
public:
	uint8                                        Pad_1DBE[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LayerName;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerIndex;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC1[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxUI.GbxUIElement
struct FGbxUIElement
{
public:
	class FName                                  Ident;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GbxUI.GbxUIInteractiveElement
struct FGbxUIInteractiveElement : public FGbxUIElement
{
public:
	bool                                         IsDisabled;                                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ContainerIdx;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x50 - 0x10)
// ScriptStruct GbxUI.GbxUIListMenuEntry
struct FGbxUIListMenuEntry : public FGbxUIInteractiveElement
{
public:
	class FText                                  Text;                                              // 0x10(0x18)(NativeAccessSpecifierPublic)
	class FString                                Style;                                             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FriendsCount;                                      // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD9[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x88 - 0x48)
// ScriptStruct GbxUI.GbxUIData_ListMenu
struct FGbxUIData_ListMenu : public FGbxUIWidgetDataBase
{
public:
	class FText                                  Title;                                             // 0x48(0x18)(NativeAccessSpecifierPublic)
	TArray<struct FGbxUIListMenuEntry>           Entries;                                           // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        EntriesRev;                                        // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Horizontal;                                        // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InputContainerIdent;                               // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.GbxComboBoxItemInfo
struct FGbxComboBoxItemInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	int32                                        ReferenceIndex;                                    // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxUI.GbxDialogBoxTemplateMapItem
struct FGbxDialogBoxTemplateMapItem
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDialogBox>             DialogClass;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxUI.GbxDialogBoxChoiceInfo
struct FGbxDialogBoxChoiceInfo
{
public:
	class FText                                  LabelText;                                         // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  ChoiceNameId;                                      // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseDialogOnSelection;                           // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DFD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxUI.GbxDialogBoxInfo
struct FGbxDialogBoxInfo
{
public:
	class FText                                  HeaderText;                                        // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  BodyText;                                          // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FGbxDialogBoxChoiceInfo>       Choices;                                           // 0x30(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCanCancel;                                        // 0x40(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnyUserCanInteract;                               // 0x41(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           OnChoiceMadeDelegate;                              // 0x48(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  TemplateNameId;                                    // 0x58(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxUI.GbxFocusableWidgetAdjacencyNames
struct FGbxFocusableWidgetAdjacencyNames
{
public:
	class FString                                WidgetUpName;                                      // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WidgetDownName;                                    // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WidgetLeftName;                                    // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WidgetRightName;                                   // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GbxUI.GbxFocusableWidgetItemStyle
struct FGbxFocusableWidgetItemStyle
{
public:
	enum class EGbxFocusableWidgetState          State;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTextColor;                                     // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTextSize;                                      // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseIndicatorBrush;                                // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           TextColor;                                         // 0x8(0x28)(Edit, NativeAccessSpecifierPublic)
	int32                                        TextSize;                                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IndicatorBrush;                                    // 0x38(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.GbxGFxContextualMenuLocTableData
struct FGbxGFxContextualMenuLocTableData
{
public:
	enum class EContextualMenuEntryType          Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemText;                                          // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                FrameString;                                       // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxUI.ContextualMenuInfo
struct FContextualMenuInfo
{
public:
	uint8                                        Pad_1E48[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.ContextualMenuEntryInfo
struct FContextualMenuEntryInfo
{
public:
	uint8                                        Pad_1E4D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.GbxScrollingListCellInfo
struct FGbxScrollingListCellInfo
{
public:
	class FString                                LibraryName;                                       // 0x0(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxGFxListCell>           CellClass;                                         // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxListCell*                       Cell;                                              // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxUI.GbxGFxMenuSwitcherSubmenuInfo
struct FGbxGFxMenuSwitcherSubmenuInfo
{
public:
	class FName                                  MenuID;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MenuName;                                          // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  MenuDescription;                                   // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
	class UGbxGFxMenuData*                       MenuData;                                          // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxMenuData*                       MenuData_NoCrossplay;                              // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxGFxMenuSwitcherSubmenu> MenuClass;                                         // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToNav;                                         // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxUI.GbxGFxMenuSwitcherNavWidgetCustomItem
struct FGbxGFxMenuSwitcherNavWidgetCustomItem
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IconFrameName;                                     // 0x8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TitleText;                                         // 0x18(0x18)(Transient, NativeAccessSpecifierPublic)
	bool                                         bDisabled;                                         // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E87[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GbxUI.UIEventAudioPairRow
struct FUIEventAudioPairRow : public FTableRowBase
{
public:
	class UWwiseEvent*                           WwiseSound;                                        // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.GbxGFxPooledGridPoolInfo
struct FGbxGFxPooledGridPoolInfo
{
public:
	struct FGbxScrollingListCellInfo             CellInfo;                                          // 0x0(0x20)(Transient, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGbxGFxPooledGridList>  OwningList;                                        // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ListIndex;                                         // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleIndexOffset;                                // 0x2C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.GbxGFxPooledGridListConfig
struct FGbxGFxPooledGridListConfig
{
public:
	TSubclassOf<class UGbxGFxListCell>           ItemNativeClass;                                   // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemASClass;                                       // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ItemSize;                                          // 0x18(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ItemRootOffset;                                    // 0x20(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleRows;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VisibleCols;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GbxUI.GbxGFxPooledGridListFullConfig
struct FGbxGFxPooledGridListFullConfig
{
public:
	struct FGbxGFxListConfig                     BaseListConfig;                                    // 0x0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FGbxGFxPooledGridListConfig           PoolListConfig;                                    // 0x90(0x30)(Edit, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.GbxHintWidgetMapItem
struct FGbxHintWidgetMapItem
{
public:
	TArray<class FName>                          InputActions;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               HintWidget;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxHintWidget>       HintWidgetInterface;                               // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxUI.GbxHintInfo
struct FGbxHintInfo
{
public:
	TArray<class FName>                          InputActions;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  HelpText;                                          // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bStagePlaced;                                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               StagePlacedWidget;                                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClickable;                                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRefreshText;                                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxUI.GbxHUDLayoutData
struct FGbxHUDLayoutData
{
public:
	class UDataTable*                            Layout;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct GbxUI.GbxHUDLayoutTableRow
struct FGbxHUDLayoutTableRow : public FTableRowBase
{
public:
	struct FVector2D                             AnchorPosition;                                    // 0x8(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Offset;                                            // 0x10(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x18(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LibraryMovieString;                                // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.GbxGFxHUDWidgetInfo
struct FGbxGFxHUDWidgetInfo
{
public:
	TSubclassOf<class UGbxGFxHUDWidget>          WidgetClass;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InstanceString;                                    // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Priority;                                          // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxUI.GbxHUDFeedbackManager
struct FGbxHUDFeedbackManager
{
public:
	uint8                                        Pad_1EF3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxHUDFeedbackData*                FeedbackData;                                      // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxGFxMovie*>                  Widgets;                                           // 0x18(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AGbxPlayerController>   OwningPlayer;                                      // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class APawn>                  OwningPawn;                                        // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class APlayerCameraManager>   OwningPlayerCameraManager;                         // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF8[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxUI.GbxHUDStateManager
struct FGbxHUDStateManager
{
public:
	UMulticastDelegateProperty_                  OnStateChanged;                                    // 0x0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UGbxHUDStateData*>              StateStack;                                        // 0x10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F02[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxGFxHUDWidget*>              Widgets;                                           // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F04[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxUI.GbxMenuInputRawMousePos
struct FGbxMenuInputRawMousePos
{
public:
	struct FVector2D                             PrevMousePos;                                      // 0x0(0x8)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NewMousePos;                                       // 0x8(0x8)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControllerId;                                      // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IgnoreMouseMoveFrames;                             // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.GbxMenuInputAxisBind
struct FGbxMenuInputAxisBind
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxUI.GbxMenuInputAxisAction
struct FGbxMenuInputAxisAction
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGbxMenuInputAxisBind>         Binds;                                             // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bTreatAsButtonPress;                               // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PositiveAxisAction;                                // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NegativeAxisAction;                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWantsRepeat;                                      // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F30[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.GbxMenuInputAction
struct FGbxMenuInputAction
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          Keys;                                              // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EGbxMenuInputActionTrigger        ActionTrigger;                                     // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWantsRepeat;                                      // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F39[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxUI.GbxMenuInputActionInfo
struct FGbxMenuInputActionInfo
{
public:
	bool                                         bIsHeld;                                           // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPressToHold;                                    // 0x1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F40[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PressToHoldDuration;                               // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PressToHoldProgress;                               // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxUI.GbxMenuKeyRepeatInfo
struct FGbxMenuKeyRepeatInfo
{
public:
	float                                        InitialButtonRepeatDelay;                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RepeatDelayStart;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RepeatDelayEnd;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RepeatDelayDelta;                                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldToPressDuration;                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldToPressDurationLong;                           // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxUI.GbxMenuAxisInputEvent
struct FGbxMenuAxisInputEvent
{
public:
	uint8                                        Pad_1F53[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxUI.GbxDLCMenuSplitscreenLayouts
struct FGbxDLCMenuSplitscreenLayouts
{
public:
	TSoftClassPtr<class UGbxGFxMenu>             VerticalLayout;                                    // 0x0(0x28)(Edit, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UGbxGFxMenu>             QuarterLayout;                                     // 0x28(0x28)(Edit, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       SoftVerticalLayout;                                // 0x50(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       SoftQuarterLayout;                                 // 0x68(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxUI.GbxMenuSplitscreenLayouts
struct FGbxMenuSplitscreenLayouts
{
public:
	uint8                                        Pad_1F5F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UGbxGFxMenu>             VerticalLayout;                                    // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UGbxGFxMenu>             QuarterLayout;                                     // 0x30(0x28)(Edit, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       QuarterLayoutPath;                                 // 0x58(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.GbxMenuSwitcherSubmenuInfo
struct FGbxMenuSwitcherSubmenuInfo
{
public:
	class FName                                  MenuID;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MenuName;                                          // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class UGbxMenuData*                          MenuData;                                          // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxMenuSwitcherSubmenu>   MenuClass;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxUI.TextMarkupDictionaryEntry
struct FTextMarkupDictionaryEntry
{
public:
	class FString                                OutputText;                                        // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresEndSection;                               // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F72[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxUI.GbxUIPlayerInputInfo
struct FGbxUIPlayerInputInfo
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxUIInputComponent*                  InputComp;                                         // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxUIInputComponent*>          UniqueInputCompStack;                              // 0x10(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F79[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.TextDebugData
struct FTextDebugData
{
public:
	class FText                                  DisplayText;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	float                                        DisplayTime;                                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplaySize;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DisplayColor;                                      // 0x20(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x508 (0x508 - 0x0)
// ScriptStruct GbxUI.GbxInputToGlyphSpecialActionItem
struct FGbxInputToGlyphSpecialActionItem
{
public:
	class FName                                  InputAction;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  KeyboardMouseGlyph;                                // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PS4Glyph;                                          // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  XboxOneGlyph;                                      // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DPXGlyph;                                          // 0x50(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  MPXGlyph;                                          // 0x68(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GenericGamepadGlyph;                               // 0x80(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SwitchProGlyph;                                    // 0x98(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  StadiaGlyph;                                       // 0xB0(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           KeyboardMouseGlyphBrush;                           // 0xC8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PS4GlyphBrush;                                     // 0x150(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           XboxOneGlyphBrush;                                 // 0x1D8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DPXGlyphBrush;                                     // 0x260(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MPXGlyphBrush;                                     // 0x2E8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GenericGamepadGlyphBrush;                          // 0x370(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SwitchProGlyphBrush;                               // 0x3F8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StadiaGlyphBrush;                                  // 0x480(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x518 (0x518 - 0x0)
// ScriptStruct GbxUI.GbxInputToGlyphMapItem
struct FGbxInputToGlyphMapItem
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  KeyboardMouseGlyph;                                // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PS4Glyph;                                          // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  XboxOneGlyph;                                      // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DPXGlyph;                                          // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  MPXGlyph;                                          // 0x78(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GenericGamepadGlyph;                               // 0x90(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SwitchProGlyph;                                    // 0xA8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  StadiaGlyph;                                       // 0xC0(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           KeyboardMouseGlyphBrush;                           // 0xD8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PS4GlyphBrush;                                     // 0x160(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           XboxOneGlyphBrush;                                 // 0x1E8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DPXGlyphBrush;                                     // 0x270(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MPXGlyphBrush;                                     // 0x2F8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GenericGamepadGlyphBrush;                          // 0x380(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SwitchProGlyphBrush;                               // 0x408(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StadiaGlyphBrush;                                  // 0x490(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.PreloadPathDef
struct FPreloadPathDef
{
public:
	class FString                                ProtocolPrefix;                                    // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RootPath;                                          // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct GbxUI.GbxUIScroller
struct FGbxUIScroller
{
public:
	float                                        Acceleration;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemSize;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVelocity;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVelocity;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFixedVelocity;                                 // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FixedVelocity;                                     // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrollPosition;                                    // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DesiredPosition;                                   // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WindowSize;                                        // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FullSize;                                          // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurVelocity;                                       // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DesiredVelocity;                                   // 0x2C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasMoved;                                         // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsMoving;                                         // 0x31(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasSlowedDown;                                    // 0x32(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2008[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x58 - 0x48)
// ScriptStruct GbxUI.GbxWidgetData_BasicText
struct FGbxWidgetData_BasicText : public FGbxUIWidgetDataBase
{
public:
	class FString                                Loc_text;                                          // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxUI.GbxUIMenuEntrySet
struct FGbxUIMenuEntrySet
{
public:
	uint8                                        Pad_2028[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxUIListMenuEntry>           Entries;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2029[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GbxUI.GbxUIDebugEntry
struct FGbxUIDebugEntry
{
public:
	uint8                                        Pad_202E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Localized_Text;                                    // 0x10(0x18)(NativeAccessSpecifierPublic)
	class FString                                Text;                                              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tip;                                               // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Idx;                                               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2033[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Color_String;                                      // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x60(0x4)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_203A[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Exec;                                              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Image;                                             // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsImageReady;                                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsActiveSelection;                                 // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2041[0x26];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxUI.GbxUIData_DebugSubMenu
struct FGbxUIData_DebugSubMenu
{
public:
	uint8                                        Pad_2045[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxUIDebugEntry>              Entries;                                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x60 - 0x48)
// ScriptStruct GbxUI.GbxUIData_MenuDebugBase
struct FGbxUIData_MenuDebugBase : public FGbxUIWidgetDataBase
{
public:
	TArray<struct FGbxUIData_DebugSubMenu>       Sub_Menus;                                         // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FontSize;                                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2053[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxUI.GbxUIDebugUICategoryEntry
struct FGbxUIDebugUICategoryEntry
{
public:
	class FString                                Text;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CategoryIdx;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsActiveSelection;                                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.GbxUIData_DebugWidgetInfo
struct FGbxUIData_DebugWidgetInfo
{
public:
	class FString                                Ident;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DataId;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxUI.GbxUIData_DebugStackLayer
struct FGbxUIData_DebugStackLayer
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Widgets;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x98 - 0x60)
// ScriptStruct GbxUI.GbxUIData_MenuDebugUI
struct FGbxUIData_MenuDebugUI : public FGbxUIData_MenuDebugBase
{
public:
	TArray<struct FGbxUIDebugUICategoryEntry>    Category_Entries;                                  // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGbxUIData_DebugWidgetInfo>    Widgets;                                           // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGbxUIData_DebugStackLayer>    StackLayers;                                       // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         HideWidgetData;                                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxUI.GbxUIData_DebugStateList
struct FGbxUIData_DebugStateList
{
public:
	TArray<class FString>                        States;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x90 - 0x88)
// ScriptStruct GbxUI.GbxUIData_NavBar
struct FGbxUIData_NavBar : public FGbxUIData_ListMenu
{
public:
	int32                                        ActiveIndex;                                       // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x68 - 0x48)
// ScriptStruct GbxUI.OakUIData_TestingWidget
struct FOakUIData_TestingWidget : public FGbxUIWidgetDataBase
{
public:
	class FString                                DataModelJSON;                                     // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Path;                                              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxUI.GbxFocusableWidgetInfo
struct FGbxFocusableWidgetInfo
{
public:
	TWeakObjectPtr<class UObject>                Widget;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFocusableWidgetAdjacencyInfo      AdjacencyInfo;                                     // 0x8(0x20)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxUI.DamageAnimationPairing
struct FDamageAnimationPairing
{
public:
	enum class ERecentDamageFlags                DamageTypeFlag;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2097[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidgetAnimation*>              LeftAnimations;                                    // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UWidgetAnimation*>              RightAnimations;                                   // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxUI.GlyphDef
struct FGlyphDef
{
public:
	class FName                                  InputDeviceName;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourcePath;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


