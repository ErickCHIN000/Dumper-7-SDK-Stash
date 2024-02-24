#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxGFxMovie.TranslateWorldToLocal
struct UGbxGFxMovie_TranslateWorldToLocal_Params
{
public:
	struct FVector                               LocationWorldSpace;                                // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OutPositionLocal;                                  // 0xC(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerViewportRelative;                           // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMovieDimensions;                               // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x16(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_278[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxGFxMovie.TranslateToScreen
struct UGbxGFxMovie_TranslateToScreen_Params
{
public:
	struct FVector2D                             Point;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxUI.GbxGFxMovie.TranslateScreenToLocal
struct UGbxGFxMovie_TranslateScreenToLocal_Params
{
public:
	struct FVector2D                             Point;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMovieDimensions;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxGFxMovie.TranslateRectToScreen
struct UGbxGFxMovie_TranslateRectToScreen_Params
{
public:
	struct FBox2D                                Rect;                                              // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox2D                                ReturnValue;                                       // 0x14(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxGFxMovie.SpawnMovie
struct UGbxGFxMovie_SpawnMovie_Params
{
public:
	class AGbxPlayerController*                  NewGPCOwner;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxGFxMovie.SpawnGbxGFxMovie
struct UGbxGFxMovie_SpawnGbxGFxMovie_Params
{
public:
	class AGbxPlayerController*                  GbxPlayerController;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxGFxMovie>              MovieClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxMovie*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxMovie.SetViewportToPlayerScreen
struct UGbxGFxMovie_SetViewportToPlayerScreen_Params
{
public:
	class AGbxPlayerController*                  Pc;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxMovie.SetOffsetDisplayTransform
struct UGbxGFxMovie_SetOffsetDisplayTransform_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxMovie.SetBaseDisplayTransform
struct UGbxGFxMovie_SetBaseDisplayTransform_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxGFxMovie.SetAudioEnabled
struct UGbxGFxMovie_SetAudioEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxGFxMovie.SetAnchor
struct UGbxGFxMovie_SetAnchor_Params
{
public:
	struct FGbxGFxAnchor                         Anchor;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxUI.GbxGFxMovie.RunUIEventAudio
struct UGbxGFxMovie_RunUIEventAudio_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderHistory;                                   // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_312[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxMovie.GetViewportOffset
struct UGbxGFxMovie_GetViewportOffset_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxMovie.GetViewportDimensions
struct UGbxGFxMovie_GetViewportDimensions_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxMovie.GetStageDimensions
struct UGbxGFxMovie_GetStageDimensions_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxMovie.GetOwningPlayerPawn
struct UGbxGFxMovie_GetOwningPlayerPawn_Params
{
public:
	class APawn*                                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxMovie.GetOwningPlayerController
struct UGbxGFxMovie_GetOwningPlayerController_Params
{
public:
	class AGbxPlayerController*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxMovie.GetOffsetDisplayTransform
struct UGbxGFxMovie_GetOffsetDisplayTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxMovie.GetMovieDimensions
struct UGbxGFxMovie_GetMovieDimensions_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxMovie.GetBaseDisplayTransform
struct UGbxGFxMovie_GetBaseDisplayTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxGFxMovie.extAnimationFinished
struct UGbxGFxMovie_ExtAnimationFinished_Params
{
public:
	class FString                                TargetName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxGFxMovie.ApplyNewAudioSettings
struct UGbxGFxMovie_ApplyNewAudioSettings_Params
{
public:
	class UDataTable*                            NewDataTable;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIAudioSettingOperation          MergeOperation;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_370[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxMenu.SetWidgetAdjacency
struct UGbxGFxMenu_SetWidgetAdjacency_Params
{
public:
	TScriptInterface<class IGbxFocusableWidget>  Widget;                                            // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGbxFocusableWidgetAdjacencyInfo      AdjacencyInfo;                                     // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxGFxMenu.SetFocusedWidget
struct UGbxGFxMenu_SetFocusedWidget_Params
{
public:
	TScriptInterface<class IGbxFocusableWidget>  WidgetToFocus;                                     // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bFromMouse;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxMenu.SetFocusableWidgetAdjancency
struct UGbxGFxMenu_SetFocusableWidgetAdjancency_Params
{
public:
	TScriptInterface<class IGbxFocusableWidget>  Widget;                                            // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentUp;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentDown;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentLeft;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentRight;                                     // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxMenu.RegisterFocusableWidgetWithAdjacency
struct UGbxGFxMenu_RegisterFocusableWidgetWithAdjacency_Params
{
public:
	TScriptInterface<class IGbxFocusableWidget>  Widget;                                            // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentUp;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentDown;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentLeft;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentRight;                                     // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxMenu.RegisterFocusableWidget
struct UGbxGFxMenu_RegisterFocusableWidget_Params
{
public:
	TScriptInterface<class IGbxFocusableWidget>  Widget;                                            // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGbxFocusableWidgetAdjacencyInfo      AdjacencyInfo;                                     // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxGFxMenu.IsWidgetFocused
struct UGbxGFxMenu_IsWidgetFocused_Params
{
public:
	class UObject*                               WidgetInQuestion;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxMenu.GetFocusedWidget
struct UGbxGFxMenu_GetFocusedWidget_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxUserWidget.SetLabelText
struct UGbxUserWidget_SetLabelText_Params
{
public:
	class FText                                  LabelText;                                         // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxUserWidget.IsRegisteredAsFocusableWidget
struct UGbxUserWidget_IsRegisteredAsFocusableWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxUI.GbxUserWidget.IsFocusableWidgetStateHovered
struct UGbxUserWidget_IsFocusableWidgetStateHovered_Params
{
public:
	enum class EGbxFocusableWidgetState          State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxUI.GbxUserWidget.IsFocusableWidgetStateFocused
struct UGbxUserWidget_IsFocusableWidgetStateFocused_Params
{
public:
	enum class EGbxFocusableWidgetState          State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function GbxUI.GbxUserWidget.HandleFocusableWidgetStateChanged
struct UGbxUserWidget_HandleFocusableWidgetStateChanged_Params
{
public:
	enum class EGbxFocusableWidgetState          NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBecameFocused;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLostFocus;                                        // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxUserWidget.GotoAndStop
struct UGbxUserWidget_GotoAndStop_Params
{
public:
	struct FFrameTime                            StopTime;                                          // 0x0(0x8)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      InAnimation;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxUserWidget.GetAllChildWidgetsOfClass
struct UGbxUserWidget_GetAllChildWidgetsOfClass_Params
{
public:
	TSubclassOf<class UWidget>                   TargetClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                       OutputArray;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxUmgMenu.SetWidgetAdjacency
struct UGbxUmgMenu_SetWidgetAdjacency_Params
{
public:
	class UObject*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFocusableWidgetAdjacencyInfo      AdjacencyInfo;                                     // 0x8(0x20)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxUmgMenu.SetSlateFocusedWidget
struct UGbxUmgMenu_SetSlateFocusedWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxUmgMenu.SetHintBarContainer
struct UGbxUmgMenu_SetHintBarContainer_Params
{
public:
	TScriptInterface<class IGbxHintBarWidgetContainer> InContainer;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxUmgMenu.SetFocusedWidget
struct UGbxUmgMenu_SetFocusedWidget_Params
{
public:
	class UObject*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromMouse;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_549[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxUmgMenu.SetFocusableWidgetAdjancency
struct UGbxUmgMenu_SetFocusableWidgetAdjancency_Params
{
public:
	class UObject*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentUp;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentDown;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentLeft;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentRight;                                     // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxUmgMenu.RegisterStagePlacedHint
struct UGbxUmgMenu_RegisterStagePlacedHint_Params
{
public:
	TScriptInterface<class IGbxHintWidget>       InHintWidget;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FName                                  InInputAction;                                     // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxUmgMenu.RegisterFocusableWidgetWithAdjacency
struct UGbxUmgMenu_RegisterFocusableWidgetWithAdjacency_Params
{
public:
	class UObject*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentUp;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentDown;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentLeft;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AdjacentRight;                                     // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxUmgMenu.RegisterFocusableWidget
struct UGbxUmgMenu_RegisterFocusableWidget_Params
{
public:
	class UObject*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFocusableWidgetAdjacencyInfo      AdjacencyInfo;                                     // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxUmgMenu.MenuStack_SwitchTo
struct UGbxUmgMenu_MenuStack_SwitchTo_Params
{
public:
	class UGbxMenuData*                          MenuDataIn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxUmgMenu.MenuStack_Push
struct UGbxUmgMenu_MenuStack_Push_Params
{
public:
	class UGbxMenuData*                          MenuDataIn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxUmgMenu.MenuStack_PopToSwitchTo
struct UGbxUmgMenu_MenuStack_PopToSwitchTo_Params
{
public:
	class UObject*                               Menu;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxMenuData*                          MenuDataIn;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxUmgMenu.MenuStack_PopTo
struct UGbxUmgMenu_MenuStack_PopTo_Params
{
public:
	class UObject*                               Menu;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxUmgMenu.IsWidgetFocused
struct UGbxUmgMenu_IsWidgetFocused_Params
{
public:
	class UObject*                               WidgetInQuestion;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxUmgMenu.IsActiveMenuOnStack
struct UGbxUmgMenu_IsActiveMenuOnStack_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxUmgMenu.HandleMenuInputDeviceChanged
struct UGbxUmgMenu_HandleMenuInputDeviceChanged_Params
{
public:
	enum class EGbxMenuInputDevice               NewInputDevice;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxUmgMenu.HandleMenuInputAction
struct UGbxUmgMenu_HandleMenuInputAction_Params
{
public:
	class FName                                  InputAction;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControllerId;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxUmgMenu.HandleMenuAspectRatioChanged
struct UGbxUmgMenu_HandleMenuAspectRatioChanged_Params
{
public:
	float                                        NewAspectRatio;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxUmgMenu.GetListItemFactory
struct UGbxUmgMenu_GetListItemFactory_Params
{
public:
	class UGbxListItemFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxUmgMenu.GetFocusedWidget
struct UGbxUmgMenu_GetFocusedWidget_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxUmgMenu.GetCurrentInputDevice
struct UGbxUmgMenu_GetCurrentInputDevice_Params
{
public:
	enum class EGbxMenuInputDevice               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxObject.SetOffsetDisplayTransform
struct UGbxGFxObject_SetOffsetDisplayTransform_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxObject.SetBaseDisplayTransform
struct UGbxGFxObject_SetBaseDisplayTransform_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxUI.GbxGFxObject.RotateAboutPoint
struct UGbxGFxObject_RotateAboutPoint_Params
{
public:
	float                                        Degrees;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Point;                                             // 0x4(0x8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxObject.GetOffsetDisplayTransform
struct UGbxGFxObject_GetOffsetDisplayTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxGFxObject.GetBaseDisplayTransform
struct UGbxGFxObject_GetBaseDisplayTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxUI.GbxGFxButton.SetLockedState
struct UGbxGFxButton_SetLockedState_Params
{
public:
	enum class EGbxGFxButtonLockedState          InLockedState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldRefresh;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxUI.GbxGFxButton.SetLabelText
struct UGbxGFxButton_SetLabelText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bForceUpdate;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function GbxUI.GbxGFxButton.SetCheckedState
struct UGbxGFxButton_SetCheckedState_Params
{
public:
	enum class EGbxGFxButtonCheckedState         InCheckedState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldRefresh;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxGFxButton.SetButtonType
struct UGbxGFxButton_SetButtonType_Params
{
public:
	enum class EGbxGFxButtonType                 InButtonType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxGFxButton.RefreshView
struct UGbxGFxButton_RefreshView_Params
{
public:
	enum class EGbxFocusableWidgetState          PrevState;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function GbxUI.GbxGFxButton.K2_HandleFocusableWidgetStateChanged
struct UGbxGFxButton_K2_HandleFocusableWidgetStateChanged_Params
{
public:
	enum class EGbxFocusableWidgetState          NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBecameFocused;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLostFocus;                                        // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxGFxButton.IsRegisteredAsFocusableWidget
struct UGbxGFxButton_IsRegisteredAsFocusableWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxGFxButton.IsLocked
struct UGbxGFxButton_IsLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateUp
struct UGbxGFxButton_IsFocusableWidgetStateUp_Params
{
public:
	enum class EGbxFocusableWidgetState          State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateHovered
struct UGbxGFxButton_IsFocusableWidgetStateHovered_Params
{
public:
	enum class EGbxFocusableWidgetState          State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateFocused
struct UGbxGFxButton_IsFocusableWidgetStateFocused_Params
{
public:
	enum class EGbxFocusableWidgetState          State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDown
struct UGbxGFxButton_IsFocusableWidgetStateDown_Params
{
public:
	enum class EGbxFocusableWidgetState          State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDisabled
struct UGbxGFxButton_IsFocusableWidgetStateDisabled_Params
{
public:
	enum class EGbxFocusableWidgetState          State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxGFxButton.IsChecked
struct UGbxGFxButton_IsChecked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxGFxButton.GetLockedState
struct UGbxGFxButton_GetLockedState_Params
{
public:
	enum class EGbxGFxButtonLockedState          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxGFxButton.GetCheckedState
struct UGbxGFxButton_GetCheckedState_Params
{
public:
	enum class EGbxGFxButtonCheckedState         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxGFxButton.GetButtonType
struct UGbxGFxButton_GetButtonType_Params
{
public:
	enum class EGbxGFxButtonType                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// DelegateFunction GbxUI.GbxGFxButton.GbxGFxButtonEvent__DelegateSignature
struct UGbxGFxButton_GbxGFxButtonEvent__DelegateSignature_Params
{
public:
	class UGbxGFxButton*                         BUTTON;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxGFxGridScrollingList.OnScrollBarPositionUpdated
struct UGbxGFxGridScrollingList_OnScrollBarPositionUpdated_Params
{
public:
	float                                        SliderPercentage;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxGFxListItemNumber.OnSliderUpdated
struct UGbxGFxListItemNumber_OnSliderUpdated_Params
{
public:
	float                                        SliderPct;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxGFxProgressBar.SetPercent
struct UGbxGFxProgressBar_SetPercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxGFxProgressBar.SetMaxValueText
struct UGbxGFxProgressBar_SetMaxValueText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxGFxProgressBar.SetFillColorAndOpacity
struct UGbxGFxProgressBar_SetFillColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxGFxProgressBar.SetCurrentValueText
struct UGbxGFxProgressBar_SetCurrentValueText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxGFxProgressBar.PassedPercentThreshold
struct UGbxGFxProgressBar_PassedPercentThreshold_Params
{
public:
	float                                        Threshold;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncreasing;                                       // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDecreasing;                                       // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_841[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// Function GbxUI.GbxGFxProgressBar.InterpolateToPercentWithInterpolator
struct UGbxGFxProgressBar_InterpolateToPercentWithInterpolator_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxProgressBarInterpolator           Interpolator;                                      // 0x4(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxGFxProgressBar.InterpolateToPercent
struct UGbxGFxProgressBar_InterpolateToPercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function GbxUI.GbxGFxProgressBar.HandlePercentChanged
struct UGbxGFxProgressBar_HandlePercentChanged_Params
{
public:
	float                                        OldValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInterpolating;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_856[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxProgressBarInterpolator           ActiveInterpolator;                                // 0xC(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxProgressBar.HandleEnterPercentRange
struct UGbxGFxProgressBar_HandleEnterPercentRange_Params
{
public:
	class FName                                  RangeName;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxGFxProgressBar.GetPercent
struct UGbxGFxProgressBar_GetPercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxUI.GbxGFxProgressBar.EnteredPercentRange
struct UGbxGFxProgressBar_EnteredPercentRange_Params
{
public:
	float                                        RangeMin;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldValue;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncreasing;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDecreasing;                                       // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x12(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_871[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxListItem.GetItemIndex
struct UGbxListItem_GetItemIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHUD.SwitchToHUDState
struct AGbxHUD_SwitchToHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDStateData*                      State;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHUD.SetHUDContainer
struct AGbxHUD_SetHUDContainer_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDData*                           ContainerDefinition;                               // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxHUD.PushHUDState
struct AGbxHUD_PushHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDStateData*                      State;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicatePush;                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxHUD.PopToSwitchToHUDState
struct AGbxHUD_PopToSwitchToHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDStateData*                      PopToState;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDStateData*                      SwitchToState;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHUD.PopToHUDState
struct AGbxHUD_PopToHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDStateData*                      State;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHUD.PopSpecifiedHUDState
struct AGbxHUD_PopSpecifiedHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDStateData*                      State;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxHUD.PopHUDState
struct AGbxHUD_PopHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxHUD.OnPrimaryCharacterChanged
struct AGbxHUD_OnPrimaryCharacterChanged_Params
{
public:
	class AGbxCharacter*                         Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHUD.OnPawnChanged
struct AGbxHUD_OnPawnChanged_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 OldPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxHUD.hidedamagenumbers
struct AGbxHUD_Hidedamagenumbers_Params
{
public:
	bool                                         bShouldHideDamage;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxHUD.GotoPreviousHUDState
struct AGbxHUD_GotoPreviousHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHUD.GotoHUDState
struct AGbxHUD_GotoHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDStateData*                      State;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHUD.GetCurrentHUDState
struct AGbxHUD_GetCurrentHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDStateData*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxHUD.ClearToDefaultHUDState
struct AGbxHUD_ClearToDefaultHUDState_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxHUD.ClearHUDStates
struct AGbxHUD_ClearHUDStates_Params
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxUILibrary.SendTextToDebugHUD
struct UGbxUILibrary_SendTextToDebugHUD_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x20(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextSize;                                          // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxUI.GbxUILibrary.PlayFullScreenMovie
struct UGbxUILibrary_PlayFullScreenMovie_Params
{
public:
	class AGbxPlayerController*                  GbxPC;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          MediaSource;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayOnceAndDestroy;                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxFullScreenMovie*                   ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxUI.GbxUILibrary.CreateTextListItemWithDelegates
struct UGbxUILibrary_CreateTextListItemWithDelegates_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ClickedDelegate;                                   // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x40(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItemText*                      ReturnValue;                                       // 0x50(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxUILibrary.CreateTextListItem
struct UGbxUILibrary_CreateTextListItem_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	class UGbxListItemText*                      ReturnValue;                                       // 0x30(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GbxUI.GbxUILibrary.CreateNumberListItemWithDelegates
struct UGbxUILibrary_CreateNumberListItemWithDelegates_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderMin;                                         // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderMax;                                         // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderStep;                                        // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ChangedDelegate;                                   // 0x40(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x50(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItemNumber*                    ReturnValue;                                       // 0x60(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxUI.GbxUILibrary.CreateNumberListItem
struct UGbxUILibrary_CreateNumberListItem_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderMin;                                         // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderMax;                                         // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderStep;                                        // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxListItemNumber*                    ReturnValue;                                       // 0x40(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxUI.GbxUILibrary.CreateListItemWithDelegates
struct UGbxUILibrary_CreateListItemWithDelegates_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItem>              ItemClass;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ClickedDelegate;                                   // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItem*                          ReturnValue;                                       // 0x40(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxUILibrary.CreateListItem
struct UGbxUILibrary_CreateListItem_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItem>              ItemClass;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxListItem*                          ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxUI.GbxUILibrary.CreateDefaultListItemWithDelegates
struct UGbxUILibrary_CreateDefaultListItemWithDelegates_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ClickedDelegate;                                   // 0x18(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x28(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItem*                          ReturnValue;                                       // 0x38(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxUI.GbxUILibrary.CreateDefaultListItem
struct UGbxUILibrary_CreateDefaultListItem_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxListItem*                          ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GbxUI.GbxUILibrary.CreateComboBoxListItemWithDelegates
struct UGbxUILibrary_CreateComboBoxListItemWithDelegates_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<class FText>                          Items;                                             // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InitialIndex;                                      // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           ChangedDelegate;                                   // 0x48(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x58(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItemComboBox*                  ReturnValue;                                       // 0x68(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxUI.GbxUILibrary.CreateComboBoxListItem
struct UGbxUILibrary_CreateComboBoxListItem_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<class FText>                          Items;                                             // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InitialIndex;                                      // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A10[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxListItemComboBox*                  ReturnValue;                                       // 0x48(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxUI.GbxUILibrary.CreateBooleanListItemWithDelegates
struct UGbxUILibrary_CreateBooleanListItemWithDelegates_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         InitialValue;                                      // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           ChangedDelegate;                                   // 0x38(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x48(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItemBoolean*                   ReturnValue;                                       // 0x58(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxUI.GbxUILibrary.CreateBooleanListItem
struct UGbxUILibrary_CreateBooleanListItem_Params
{
public:
	TScriptInterface<class IGbxList>             OwningList;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         InitialValue;                                      // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A28[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxListItemBoolean*                   ReturnValue;                                       // 0x38(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxUILibrary.AbbreviateNumberText
struct UGbxUILibrary_AbbreviateNumberText_Params
{
public:
	float                                        ValueToFormat;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxCascadingList.SetActiveList
struct UGbxCascadingList_SetActiveList_Params
{
public:
	class UGbxGridListWidget*                    List;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxCascadingList.PushItems
struct UGbxCascadingList_PushItems_Params
{
public:
	TArray<struct FGbxCascadingListItemData>     Items;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxCascadingList.OnItemSelected_Internal
struct UGbxCascadingList_OnItemSelected_Internal_Params
{
public:
	class UGbxListItem*                          Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxCascadingList.OnItemClicked_Internal
struct UGbxCascadingList_OnItemClicked_Internal_Params
{
public:
	class UGbxListItem*                          Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxCascadingList.HasItems
struct UGbxCascadingList_HasItems_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxCascadingList.GetStackDepth
struct UGbxCascadingList_GetStackDepth_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxComboBoxDropdownMenu.OnChoiceClicked
struct UGbxComboBoxDropdownMenu_OnChoiceClicked_Params
{
public:
	class UGbxListItem*                          ListItem;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxComboBox.OnComboBoxClicked
struct UGbxComboBox_OnComboBoxClicked_Params
{
public:
	class UGbxUserWidget*                        Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxComboBox.GetCurentChoiceReferenceIndex
struct UGbxComboBox_GetCurentChoiceReferenceIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxUI.GbxCoreDialogBoxHelpers.ShowYesNoDialog
struct UGbxCoreDialogBoxHelpers_ShowYesNoDialog_Params
{
public:
	class AGbxPlayerController*                  Pc;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  HeaderText;                                        // 0x8(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FText                                  MessageText;                                       // 0x20(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         bAnyUserCanInteract;                               // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B18[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDialogBox*                         ReturnValue;                                       // 0x40(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxUI.GbxCoreDialogBoxHelpers.ShowOkayDialog
struct UGbxCoreDialogBoxHelpers_ShowOkayDialog_Params
{
public:
	class AGbxPlayerController*                  Pc;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  HeaderText;                                        // 0x8(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FText                                  MessageText;                                       // 0x20(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         bAnyUserCanInteract;                               // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxDialogBoxHelpersDialogTemplate Template;                                          // 0x39(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B33[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDialogBox*                         ReturnValue;                                       // 0x40(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GbxUI.GbxCoreDialogBoxHelpers.ShowDialog
struct UGbxCoreDialogBoxHelpers_ShowDialog_Params
{
public:
	class AGbxPlayerController*                  Pc;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxDialogBoxInfo                     DialogBoxInfo;                                     // 0x8(0x60)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGbxDialogBox*                         ReturnValue;                                       // 0x68(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxUI.GbxCoreDialogBoxHelpers.ShowConfirmCancelDialog
struct UGbxCoreDialogBoxHelpers_ShowConfirmCancelDialog_Params
{
public:
	class AGbxPlayerController*                  Pc;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  HeaderText;                                        // 0x8(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FText                                  MessageText;                                       // 0x20(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         bAnyUserCanInteract;                               // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B61[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDialogBox*                         ReturnValue;                                       // 0x40(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxUI.GbxCoreDialogBoxHelpers.ShowBlockingDialog
struct UGbxCoreDialogBoxHelpers_ShowBlockingDialog_Params
{
public:
	class AGbxPlayerController*                  Pc;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  HeaderText;                                        // 0x8(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FText                                  MessageText;                                       // 0x20(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         bBlocksAllUsers;                                   // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDialogBox*                         ReturnValue;                                       // 0x40(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxMenuSwitcher.SwitchToPage
struct UGbxMenuSwitcher_SwitchToPage_Params
{
public:
	class FName                                  SubMenuId;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxMenuSwitcher.GetCurrentSubmenuId
struct UGbxMenuSwitcher_GetCurrentSubmenuId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxDebugMenu.OnCategorySelected
struct UGbxDebugMenu_OnCategorySelected_Params
{
public:
	class UGbxUserWidget*                        Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxDebugRumbleMenu.OnSliderValueChanged
struct UGbxDebugRumbleMenu_OnSliderValueChanged_Params
{
public:
	class UGbxListItem*                          Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxDialogBox.UpdateText
struct UGbxDialogBox_UpdateText_Params
{
public:
	class FText                                  NewHeaderText;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NewBodyText;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxUI.GbxDialogBox.SetupDialog
struct UGbxDialogBox_SetupDialog_Params
{
public:
	struct FGbxDialogBoxInfo                     DialogBoxInfo;                                     // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxDialogBox.SetHeaderTextFormatArg
struct UGbxDialogBox_SetHeaderTextFormatArg_Params
{
public:
	class FString                                ArgName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReplacementText;                                   // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxUI.GbxDialogBox.SetHeaderText
struct UGbxDialogBox_SetHeaderText_Params
{
public:
	class FText                                  NewText;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bClearFormatArgs;                                  // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C60[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxDialogBox.SetBodyTextFormatArg
struct UGbxDialogBox_SetBodyTextFormatArg_Params
{
public:
	class FString                                ArgName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReplacementText;                                   // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxUI.GbxDialogBox.SetBodyText
struct UGbxDialogBox_SetBodyText_Params
{
public:
	class FText                                  NewText;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bClearFormatArgs;                                  // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C89[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxDialogBox.OnChoiceClicked
struct UGbxDialogBox_OnChoiceClicked_Params
{
public:
	class UGbxListItem*                          ClickedItem;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxFocusableWidget.SetFocusableWidgetEnabled
struct IGbxFocusableWidget_SetFocusableWidgetEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxFocusableWidget.IsFocusableWidgetFocused
struct IGbxFocusableWidget_IsFocusableWidgetFocused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxFocusableWidget.IsFocusableWidgetEnabled
struct IGbxFocusableWidget_IsFocusableWidgetEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxFocusableWidget.GetFocusableWidgetState
struct IGbxFocusableWidget_GetFocusableWidgetState_Params
{
public:
	enum class EGbxFocusableWidgetState          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxContextualMenu.OnSelectionChanged
struct UGbxGFxContextualMenu_OnSelectionChanged_Params
{
public:
	class UGbxGFxListCell*                       Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxContextualMenu.OnContextualMenuItemClicked
struct UGbxGFxContextualMenu_OnContextualMenuItemClicked_Params
{
public:
	class UGbxGFxButton*                         PressedButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxDragDropManager.OnDropButtonUnhovered
struct UGbxGFxDragDropManager_OnDropButtonUnhovered_Params
{
public:
	class UGbxGFxButton*                         UnhoveredButton;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxDragDropManager.OnDropButtonHovered
struct UGbxGFxDragDropManager_OnDropButtonHovered_Params
{
public:
	class UGbxGFxButton*                         HoveredButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxDropDownList.OnEntryClicked
struct UGbxGFxDropDownList_OnEntryClicked_Params
{
public:
	class UGbxGFxButton*                         BUTTON;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxDropDownList.OnDropDownButtonClicked
struct UGbxGFxDropDownList_OnDropDownButtonClicked_Params
{
public:
	class UGbxGFxButton*                         BUTTON;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxHintWidget.OnThisHintClicked
struct UGbxGFxHintWidget_OnThisHintClicked_Params
{
public:
	class UGbxGFxButton*                         BUTTON;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxListItemComboBox.OnSelectionUpdated
struct UGbxGFxListItemComboBox_OnSelectionUpdated_Params
{
public:
	class UGbxGFxListCell*                       Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxGFxListItemComboBox.OnOwningListSelectionChanged
struct UGbxGFxListItemComboBox_OnOwningListSelectionChanged_Params
{
public:
	class UGbxGFxListCell*                       Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpenFailed
struct UGbxGFxMediaPlayer_OnMovieMediaOpenFailed_Params
{
public:
	class FString                                FailedUrl;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpened
struct UGbxGFxMediaPlayer_OnMovieMediaOpened_Params
{
public:
	class FString                                OpenedUrl;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxMenuSwitcherNavWidget.OnTabClicked
struct UGbxGFxMenuSwitcherNavWidget_OnTabClicked_Params
{
public:
	class UGbxGFxButton*                         BUTTON;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction GbxUI.GbxGFxSlider.GbxGFxSliderUpdateEvent__DelegateSignature
struct UGbxGFxSlider_GbxGFxSliderUpdateEvent__DelegateSignature_Params
{
public:
	float                                        SliderPercent;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxSlider.EndSlide
struct UGbxGFxSlider_EndSlide_Params
{
public:
	class UGbxGFxButton*                         BUTTON;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxSlider.BeginRightSlide
struct UGbxGFxSlider_BeginRightSlide_Params
{
public:
	class UGbxGFxButton*                         BUTTON;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxGFxSlider.BeginLeftSlide
struct UGbxGFxSlider_BeginLeftSlide_Params
{
public:
	class UGbxGFxButton*                         BUTTON;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxHintBarWidgetContainer.HintBarSetVisible
struct IGbxHintBarWidgetContainer_HintBarSetVisible_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHintBarWidgetContainer.HintBarInitOwnerInfo
struct IGbxHintBarWidgetContainer_HintBarInitOwnerInfo_Params
{
public:
	class UGbxHintBar*                           HintBarOwner;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  PlayerControllerContext;                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxUI.GbxHintBarWidgetContainer.HintBarAppendHint
struct IGbxHintBarWidgetContainer_HintBarAppendHint_Params
{
public:
	struct FGbxHintInfo                          HintInfo;                                          // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHintBar.OnHintClicked
struct UGbxHintBar_OnHintClicked_Params
{
public:
	class FName                                  InputAction;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeld;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1108[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxHintWidget.HintWidgetSetVisible
struct IGbxHintWidget_HintWidgetSetVisible_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxUI.GbxHintWidget.HintWidgetSetInfo
struct IGbxHintWidget_HintWidgetSetInfo_Params
{
public:
	struct FGbxHintInfo                          HintInfo;                                          // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxHintWidget.HintWidgetInitOwnerInfo
struct IGbxHintWidget_HintWidgetInitOwnerInfo_Params
{
public:
	class UGbxHintBar*                           HintBarOwner;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  PlayerControllerContext;                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxList.TryToAcquireMenuFocus
struct IGbxList_TryToAcquireMenuFocus_Params
{
public:
	bool                                         bFromMouse;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxList.SetSelectionChangedDelegate
struct IGbxList_SetSelectionChangedDelegate_Params
{
public:
	UDelegateProperty_                           InSelectionChangedDelegate;                        // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxList.SetSelectedItem
struct IGbxList_SetSelectedItem_Params
{
public:
	class UGbxListItem*                          Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScrollIntoView;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateScroll;                                    // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11DF[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxList.SetSelectedIndex
struct IGbxList_SetSelectedIndex_Params
{
public:
	int32                                        NewSelection;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScrollIntoView;                                   // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateScroll;                                    // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11FF[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxList.SetItemClickedDelegate
struct IGbxList_SetItemClickedDelegate_Params
{
public:
	UDelegateProperty_                           InItemClickedDelegate;                             // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxList.RemoveListItem
struct IGbxList_RemoveListItem_Params
{
public:
	class UGbxListItem*                          Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxList.OnItemClicked
struct IGbxList_OnItemClicked_Params
{
public:
	class UGbxListItem*                          Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxList.MoveSelectionUp
struct IGbxList_MoveSelectionUp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxList.MoveSelectionRight
struct IGbxList_MoveSelectionRight_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxList.MoveSelectionLeft
struct IGbxList_MoveSelectionLeft_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxList.MoveSelectionDown
struct IGbxList_MoveSelectionDown_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxList.IsListFocused
struct IGbxList_IsListFocused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxList.IsListEnabled
struct IGbxList_IsListEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxList.InsertListItem
struct IGbxList_InsertListItem_Params
{
public:
	class UGbxListItem*                          Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxList.GetSelectedItem
struct IGbxList_GetSelectedItem_Params
{
public:
	class UGbxListItem*                          ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxList.GetSelectedIndex
struct IGbxList_GetSelectedIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxList.GetNumItemsInList
struct IGbxList_GetNumItemsInList_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxList.GetListItemFactory
struct IGbxList_GetListItemFactory_Params
{
public:
	class UGbxListItemFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxList.GetItemAtIndex
struct IGbxList_GetItemAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1298[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxListItem*                          ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxList.GetDefaultItemClass
struct IGbxList_GetDefaultItemClass_Params
{
public:
	TSubclassOf<class UGbxListItem>              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxListItemBoolean.SetChecked
struct UGbxListItemBoolean_SetChecked_Params
{
public:
	bool                                         bChecked;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxListItemBoolean.IsChecked
struct UGbxListItemBoolean_IsChecked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxListItemBoolean.HandleFocusableWidgetPressed
struct UGbxListItemBoolean_HandleFocusableWidgetPressed_Params
{
public:
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxListItemComboBox.SetSelectedOptionIndex
struct UGbxListItemComboBox_SetSelectedOptionIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxListItemComboBox.OnValueComboBoxChanged
struct UGbxListItemComboBox_OnValueComboBoxChanged_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// DelegateFunction GbxUI.GbxListItemComboBox.ListItemComboBoxSelectionChangedDelegate__DelegateSignature
struct UGbxListItemComboBox_ListItemComboBoxSelectionChangedDelegate__DelegateSignature_Params
{
public:
	int32                                        NewSelectedIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxListItemComboBox.InitializeComboBox
struct UGbxListItemComboBox_InitializeComboBox_Params
{
public:
	TArray<class FText>                          Items;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InitialValue;                                      // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxListItemComboBox.GetSelectedOptionIndex
struct UGbxListItemComboBox_GetSelectedOptionIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxUI.GbxListItemFactory.CreateTextItem
struct UGbxListItemFactory_CreateTextItem_Params
{
public:
	class APlayerController*                     Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxList>             Parent;                                            // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ClickedDelegate;                                   // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x40(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItemText*                      ReturnValue;                                       // 0x50(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GbxUI.GbxListItemFactory.CreateNumberItem
struct UGbxListItemFactory_CreateNumberItem_Params
{
public:
	class APlayerController*                     Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxList>             Parent;                                            // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderMin;                                         // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderMax;                                         // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderStep;                                        // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ChangedDelegate;                                   // 0x40(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x50(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItemNumber*                    ReturnValue;                                       // 0x60(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxUI.GbxListItemFactory.CreateItemWithDelegates
struct UGbxListItemFactory_CreateItemWithDelegates_Params
{
public:
	class APlayerController*                     Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxList>             Parent;                                            // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItem>              ItemClass;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ClickedDelegate;                                   // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItem*                          ReturnValue;                                       // 0x40(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxListItemFactory.CreateItem
struct UGbxListItemFactory_CreateItem_Params
{
public:
	class APlayerController*                     Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxList>             Parent;                                            // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItem>              ItemClass;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxListItem*                          ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GbxUI.GbxListItemFactory.CreateComboBoxItem
struct UGbxListItemFactory_CreateComboBoxItem_Params
{
public:
	class APlayerController*                     Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxList>             Parent;                                            // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<class FText>                          Items;                                             // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InitialIndex;                                      // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1395[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           ChangedDelegate;                                   // 0x48(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x58(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItemComboBox*                  ReturnValue;                                       // 0x68(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxUI.GbxListItemFactory.CreateBooleanItem
struct UGbxListItemFactory_CreateBooleanItem_Params
{
public:
	class APlayerController*                     Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxList>             Parent;                                            // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  LabelText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         InitialValue;                                      // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           ChangedDelegate;                                   // 0x38(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectedDelegate;                                  // 0x48(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxListItemBoolean*                   ReturnValue;                                       // 0x58(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxListItemNumber.OnSliderValueChanged
struct UGbxListItemNumber_OnSliderValueChanged_Params
{
public:
	float                                        NewPosition;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxListItemNumber.GetCurrentValue
struct UGbxListItemNumber_GetCurrentValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxMenuStack.Tick
struct UGbxMenuStack_Tick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxMenuStack.SwitchTo
struct UGbxMenuStack_SwitchTo_Params
{
public:
	class UGbxMenuData*                          MenuData;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxMenuStack.SetBlockingMode
struct UGbxMenuStack_SetBlockingMode_Params
{
public:
	bool                                         bShouldBlock;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxMenuStack.SetBlockAllRawInput
struct UGbxMenuStack_SetBlockAllRawInput_Params
{
public:
	bool                                         bShouldBlock;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxMenuStack.Push
struct UGbxMenuStack_Push_Params
{
public:
	class UGbxMenuData*                          MenuData;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxMenuStack.PopToSwitchTo
struct UGbxMenuStack_PopToSwitchTo_Params
{
public:
	class UObject*                               Menu;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxMenuData*                          MenuData;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxMenuStack.PopTo
struct UGbxMenuStack_PopTo_Params
{
public:
	class UObject*                               Menu;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxMenuStack.Num
struct UGbxMenuStack_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxUI.GbxMenuStack.HandleRawInput
struct UGbxMenuStack_HandleRawInput_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       EVENTTYPE;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ControllerId;                                      // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxMenuStack.GetTopMenu
struct UGbxMenuStack_GetTopMenu_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxMenuStack.GetMenuAtIndex
struct UGbxMenuStack_GetMenuAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxMenuStack.GetIndexOfMenu
struct UGbxMenuStack_GetIndexOfMenu_Params
{
public:
	class UObject*                               Menu;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxMenuStack.GetCurrentInputDevice
struct UGbxMenuStack_GetCurrentInputDevice_Params
{
public:
	enum class EGbxMenuInputDevice               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxProgressBar.SetShear
struct UGbxProgressBar_SetShear_Params
{
public:
	float                                        InShear;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxProgressBar.SetPercent
struct UGbxProgressBar_SetPercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxProgressBar.SetMaxValueText
struct UGbxProgressBar_SetMaxValueText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxProgressBar.SetFillColorAndOpacity
struct UGbxProgressBar_SetFillColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxProgressBar.SetCurrentValueText
struct UGbxProgressBar_SetCurrentValueText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxProgressBar.PassedPercentThreshold
struct UGbxProgressBar_PassedPercentThreshold_Params
{
public:
	float                                        Threshold;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncreasing;                                       // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDecreasing;                                       // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1579[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxUI.GbxProgressBar.IsInterpolating
struct UGbxProgressBar_IsInterpolating_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function GbxUI.GbxProgressBar.InterpolateToPercentWithInterpolator
struct UGbxProgressBar_InterpolateToPercentWithInterpolator_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxProgressBarInterpolator           Interpolator;                                      // 0x4(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxProgressBar.InterpolateToPercent
struct UGbxProgressBar_InterpolateToPercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxUI.GbxProgressBar.HandleShowDeltaEffect
struct UGbxProgressBar_HandleShowDeltaEffect_Params
{
public:
	class UWidget*                               Effect;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldValue;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function GbxUI.GbxProgressBar.HandlePercentChanged
struct UGbxProgressBar_HandlePercentChanged_Params
{
public:
	float                                        OldValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInterpolating;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1658[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxProgressBarInterpolator           ActiveInterpolator;                                // 0xC(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxProgressBar.HandleEnterPercentRange
struct UGbxProgressBar_HandleEnterPercentRange_Params
{
public:
	class FName                                  RangeName;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxProgressBar.GetShear
struct UGbxProgressBar_GetShear_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxProgressBar.GetPercent
struct UGbxProgressBar_GetPercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarRangeEvent__DelegateSignature
struct UGbxProgressBar_GbxProgressBarRangeEvent__DelegateSignature_Params
{
public:
	class FName                                  RangeName;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxUI.GbxProgressBar.EnteredPercentRange
struct UGbxProgressBar_EnteredPercentRange_Params
{
public:
	float                                        RangeMin;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldValue;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncreasing;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDecreasing;                                       // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x12(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C0[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxSpinner.SpinRight
struct UGbxSpinner_SpinRight_Params
{
public:
	class UGbxGFxButton*                         PressedButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxSpinner.SpinLeft
struct UGbxSpinner_SpinLeft_Params
{
public:
	class UGbxGFxButton*                         PressedButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxMenuInputEvent                    InputInfo;                                         // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxUI.GbxTextField.OnScrollBarPositionUpdated
struct UGbxTextField_OnScrollBarPositionUpdated_Params
{
public:
	float                                        SliderPercentage;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxUI.GbxUILocalization.IsInputActionGlyphAvailable
struct UGbxUILocalization_IsInputActionGlyphAvailable_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  Pc;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxActionToTextType              GlyphType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1859[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxUI.GbxUILocalization.InputActionToText
struct UGbxUILocalization_InputActionToText_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  Pc;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxActionToTextType              GlyphType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1888[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxUILocalization.InputActionToRichText
struct UGbxUILocalization_InputActionToRichText_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  Pc;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxActionToTextType              GlyphType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             GlyphSize;                                         // 0x14(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GbxUI.GbxUILocalization.InputActionToGlyph
struct UGbxUILocalization_InputActionToGlyph_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  Pc;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxActionToTextType              GlyphType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ReturnValue;                                       // 0x18(0x88)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxUI.GbxUILocalization.InputActionToGFxHTMLText
struct UGbxUILocalization_InputActionToGFxHTMLText_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  Pc;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxActionToTextType              GlyphType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1919[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GlyphHeight;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VSpace;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxUI.GbxUILocalization.FKeyToGFxHTMLText
struct UGbxUILocalization_FKeyToGFxHTMLText_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  Pc;                                                // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxActionToTextType              GlyphType;                                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1966[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GlyphHeight;                                       // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxUISpinnerWidget.MoveToNumber
struct UGbxUISpinnerWidget_MoveToNumber_Params
{
public:
	uint8                                        NewNumber;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxSpinnerWidgetGoToMethod       GoToMethod;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A12[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxUI.GbxWidgetComponent.Setup
struct UGbxWidgetComponent_Setup_Params
{
public:
	TSubclassOf<class UUserWidget>               NewWidgetClass;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  NewTrackedPlayer;                                  // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       ParentComponent;                                   // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetSpace                      WidgetSpace;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewLayerZOrder;                                    // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CollisionProfile;                                  // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxWidgetComponent.SetDistanceScaleCurve
struct UGbxWidgetComponent_SetDistanceScaleCurve_Params
{
public:
	class UCurveFloat*                           NewDistanceScaleCurve;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxWidgetComponent.SetDistanceAlphaCurve
struct UGbxWidgetComponent_SetDistanceAlphaCurve_Params
{
public:
	class UCurveFloat*                           NewDistanceAlphaCurve;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.GbxWidgetComponent.SetDistanceAlphaBorder
struct UGbxWidgetComponent_SetDistanceAlphaBorder_Params
{
public:
	class Uborder*                               NewDistanceAlphaBorder;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxUI.GbxWorldSpaceProxyWidget.GetWorldLocation
struct UGbxWorldSpaceProxyWidget_GetWorldLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxUI.InWorldDamageNumber.ImpulseAnimationCompleted
struct UInWorldDamageNumber_ImpulseAnimationCompleted_Params
{
public:
	class UUserWidget*                           AssociatedWidget;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


