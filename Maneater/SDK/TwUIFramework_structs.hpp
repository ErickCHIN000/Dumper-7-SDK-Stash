#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUserInputDevice : uint8
{
	KEYBOARD_MOUSE                 = 0,
	GAMEPAD                        = 1,
	EUserInputDevice_MAX           = 2,
};

enum class ETweenTarget : uint8
{
	BackImage                      = 0,
	MidImage                       = 1,
	TopCanvas                      = 2,
	IconImage                      = 3,
	ETweenTarget_MAX               = 4,
};

enum class EAnimButtonState : uint8
{
	DEFAULT                        = 0,
	HOVERED                        = 1,
	SELECTED                       = 2,
	EAnimButtonState_MAX           = 3,
};

enum class EFlipbookPlayMode : uint8
{
	ONE_SHOT                       = 0,
	LOOP                           = 1,
	STOP                           = 2,
	PING_PONG                      = 3,
	PING_PONG_FORWARD              = 4,
	PING_PONG_BACKWARD             = 5,
	EFlipbookPlayMode_MAX          = 6,
};

enum class EInputPlatform : uint8
{
	Windows                        = 0,
	XboxOne                        = 1,
	Playstation4                   = 2,
	Switch                         = 3,
	Playstation5                   = 4,
	XboxSeriesX                    = 5,
	Unknown                        = 6,
	EInputPlatform_MAX             = 7,
};

enum class ETweenPlayState : uint8
{
	READY                          = 0,
	PLAYING_FORWARD                = 1,
	PLAYING_REVERSE                = 2,
	PAUSED                         = 3,
	DONE                           = 4,
	ETweenPlayState_MAX            = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct TwUIFramework.AnimTweenTargetData
struct FAnimTweenTargetData
{
public:
	struct FVector2D                             Scale;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Opacity;                                           // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct TwUIFramework.TweenTargetDataMap
struct FTweenTargetDataMap
{
public:
	TMap<enum class ETweenTarget, struct FAnimTweenTargetData> Data;                                              // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
	float                                        TweenTime;                                         // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TwUIFramework.AnimTweenGroup
struct FAnimTweenGroup
{
public:
	TArray<class UTwTweener*>                    Tweens;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct TwUIFramework.TwMenuData
struct FTwMenuData
{
public:
	TSubclassOf<class UTwBaseMenuPanel>          Panel;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UTwBaseMenuBarItem>        MenuBarItem;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	class FName                                  LookupName;                                        // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            IconTexture;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnablePlatformSensitive;                           // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputPlatform                    TargetPlatform;                                    // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableInputDeviceSensitive;                        // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUserInputDevice                  TargetInputDevice;                                 // 0x3B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A15[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TwUIFramework.PanelLifetimeResponder
struct FPanelLifetimeResponder
{
public:
	uint8                                        Pad_A16[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TwUIFramework.ViewPoppingResponder
struct FViewPoppingResponder
{
public:
	uint8                                        Pad_A17[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct TwUIFramework.RadioWidgetData
struct FRadioWidgetData
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct TwUIFramework.RadioWidgetEntry
struct FRadioWidgetEntry
{
public:
	struct FRadioWidgetData                      Data;                                              // 0x0(0x18)(NativeAccessSpecifierPublic)
	class UTwBaseButton*                         Button;                                            // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct TwUIFramework.TwPlatformIconRow
struct FTwPlatformIconRow : public FTableRowBase
{
public:
	TMap<enum class EInputPlatform, struct FSlateBrush> Icons;                                             // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct TwUIFramework.ToastData
struct FToastData
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeDuration;                                      // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ToastText;                                         // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ToastSubtext;                                      // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ToastTexture;                                      // 0x38(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x60(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


