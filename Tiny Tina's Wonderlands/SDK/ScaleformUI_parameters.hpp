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

// 0x2 (0x2 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.start
struct UGFxMoviePlayer_Start_Params
{
public:
	bool                                         bRefresh;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetVisible
struct UGFxMoviePlayer_SetVisible_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetVisibility
struct UGFxMoviePlayer_SetVisibility_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A92[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
struct UGFxMoviePlayer_SetViewScaleMode_Params
{
public:
	enum class EGFxScaleMode                     ScaleMode;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetViewport
struct UGFxMoviePlayer_SetViewport_Params
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetView3D
struct UGFxMoviePlayer_SetView3D_Params
{
public:
	struct FTransform                            ViewTransform;                                     // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
struct UGFxMoviePlayer_SetVariableValueArray_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                      Value;                                             // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetVariableValue
struct UGFxMoviePlayer_SetVariableValue_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                              Value;                                             // 0x20(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetTimingMode
struct UGFxMoviePlayer_SetTimingMode_Params
{
public:
	enum class EGFxTimingMode                    TimingMode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetScale
struct UGFxMoviePlayer_SetScale_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        XScale;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YScale;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetPosition
struct UGFxMoviePlayer_SetPosition_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        X;                                                 // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
struct UGFxMoviePlayer_SetPerspective3D_Params
{
public:
	struct FASPerspectiveTransform               PerspectiveTransform;                              // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetPause
struct UGFxMoviePlayer_SetPause_Params
{
public:
	bool                                         bPausePlayback;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
struct UGFxMoviePlayer_SetMovieCanReceiveInput_Params
{
public:
	bool                                         bCanReceiveInput;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
struct UGFxMoviePlayer_SetMovieCanReceiveFocus_Params
{
public:
	bool                                         bCanReceiveFocus;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
struct UGFxMoviePlayer_SetFocusIgnoreKeys_Params
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
struct UGFxMoviePlayer_SetExternalTexture_Params
{
public:
	class FString                                Resource;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              Texture;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
struct UGFxMoviePlayer_SetDisplayTransform_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            DisplayTransform;                                  // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
struct UGFxMoviePlayer_SetDisplayInfo_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASDisplayInfo                        Info;                                              // 0x10(0x2C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetColorTransform
struct UGFxMoviePlayer_SetColorTransform_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASColorTransform                     UnrealColorTransform;                              // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
struct UGFxMoviePlayer_SetCaptureKeys_Params
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.SetAlignment
struct UGFxMoviePlayer_SetAlignment_Params
{
public:
	enum class EGFxAlign                         Align;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
struct UGFxMoviePlayer_ReceiveGFxCommand_Params
{
public:
	class FString                                Command;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Arguments;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.OpenMovie
struct UGFxMoviePlayer_OpenMovie_Params
{
public:
	class USwfMovie*                             SwfMovie;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ExternalScriptInterface;                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderToTexture;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxMoviePlayer*                       MoviePlayer;                                       // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayWithHudOff;                                 // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefresh;                                          // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGFxMoviePlayer*                       ReturnValue;                                       // 0x28(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.OnTick
struct UGFxMoviePlayer_OnTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.OnGameTick
struct UGFxMoviePlayer_OnGameTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.OnFocusLost
struct UGFxMoviePlayer_OnFocusLost_Params
{
public:
	int32                                        LocalPlayerIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.OnFocusGained
struct UGFxMoviePlayer_OnFocusGained_Params
{
public:
	int32                                        LocalPlayerIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.IsVisible
struct UGFxMoviePlayer_IsVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.IsPaused
struct UGFxMoviePlayer_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.Invoke
struct UGFxMoviePlayer_Invoke_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                      Params;                                            // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FASValue                              ReturnValue;                                       // 0x30(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
struct UGFxMoviePlayer_GotoAndStopI_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Frame;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C29[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GotoAndStop
struct UGFxMoviePlayer_GotoAndStop_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Frame;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
struct UGFxMoviePlayer_GotoAndPlayI_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Frame;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C47[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
struct UGFxMoviePlayer_GotoAndPlay_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Frame;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetVisibility
struct UGFxMoviePlayer_GetVisibility_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C63[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetView3D
struct UGFxMoviePlayer_GetView3D_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
struct UGFxMoviePlayer_GetVariableValueArray_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                      ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetVariableValue
struct UGFxMoviePlayer_GetVariableValue_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                              ReturnValue;                                       // 0x20(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetScale
struct UGFxMoviePlayer_GetScale_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        XScale;                                            // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YScale;                                            // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetPosition
struct UGFxMoviePlayer_GetPosition_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        X;                                                 // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
struct UGFxMoviePlayer_GetPerspective3D_Params
{
public:
	struct FASPerspectiveTransform               ReturnValue;                                       // 0x0(0x40)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetMovieClip
struct UGFxMoviePlayer_GetMovieClip_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
struct UGFxMoviePlayer_GetDisplayTransform_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
struct UGFxMoviePlayer_GetDisplayInfo_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASDisplayInfo                        ReturnValue;                                       // 0x10(0x2C)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D11[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.GFxMoviePlayer.GetColorTransform
struct UGFxMoviePlayer_GetColorTransform_Params
{
public:
	class FString                                MovieClipName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASColorTransform                     ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxObject.SetVisible
struct UGFxObject_SetVisible_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScaleformUI.GFxObject.SetScale
struct UGFxObject_SetScale_Params
{
public:
	float                                        XScale;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YScale;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScaleformUI.GFxObject.SetPosition
struct UGFxObject_SetPosition_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ScaleformUI.GFxObject.SetMemberValueArray
struct UGFxObject_SetMemberValueArray_Params
{
public:
	class UGFxMoviePlayer*                       MoviePlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberName;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                      Input;                                             // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ScaleformUI.GFxObject.SetMemberValue
struct UGFxObject_SetMemberValue_Params
{
public:
	class FString                                MemberName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                              Input;                                             // 0x10(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.GFxObject.SetDisplayTransform
struct UGFxObject_SetDisplayTransform_Params
{
public:
	struct FTransform                            DisplayTransform;                                  // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function ScaleformUI.GFxObject.SetDisplayInfo
struct UGFxObject_SetDisplayInfo_Params
{
public:
	struct FASDisplayInfo                        UnrealDisplayInfo;                                 // 0x0(0x2C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.GFxObject.SetColorTransform
struct UGFxObject_SetColorTransform_Params
{
public:
	struct FASColorTransform                     UnrealColorTransform;                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ScaleformUI.GFxObject.Invoke
struct UGFxObject_Invoke_Params
{
public:
	class FString                                FunctionName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                      Params;                                            // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FASValue                              ReturnValue;                                       // 0x20(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScaleformUI.GFxObject.GotoAndStopI
struct UGFxObject_GotoAndStopI_Params
{
public:
	int32                                        FrameNumber;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ScaleformUI.GFxObject.GotoAndStop
struct UGFxObject_GotoAndStop_Params
{
public:
	class FString                                FrameString;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScaleformUI.GFxObject.GotoAndPlayI
struct UGFxObject_GotoAndPlayI_Params
{
public:
	int32                                        FrameNumber;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ScaleformUI.GFxObject.GotoAndPlay
struct UGFxObject_GotoAndPlay_Params
{
public:
	class FString                                FrameString;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScaleformUI.GFxObject.GetVisible
struct UGFxObject_GetVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ScaleformUI.GFxObject.GetScale
struct UGFxObject_GetScale_Params
{
public:
	float                                        XScale;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YScale;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ScaleformUI.GFxObject.GetPosition
struct UGFxObject_GetPosition_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB1[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.GFxObject.GetMemberValueArray
struct UGFxObject_GetMemberValueArray_Params
{
public:
	class FString                                MemberName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                      ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ScaleformUI.GFxObject.GetMemberValue
struct UGFxObject_GetMemberValue_Params
{
public:
	class FString                                MemberName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                              ReturnValue;                                       // 0x10(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.GFxObject.GetDisplayTransform
struct UGFxObject_GetDisplayTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function ScaleformUI.GFxObject.GetDisplayInfo
struct UGFxObject_GetDisplayInfo_Params
{
public:
	struct FASDisplayInfo                        ReturnValue;                                       // 0x0(0x2C)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.GFxObject.GetColorTransform
struct UGFxObject_GetColorTransform_Params
{
public:
	struct FASColorTransform                     ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
struct UScaleformBlueprintLibrary_OpenMovie_Params
{
public:
	class USwfMovie*                             Movie;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ExternalInterface;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTexture;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxMoviePlayer*                       MoviePlayer;                                       // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayWithHudOff;                                 // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StartPaused;                                       // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGFxMoviePlayer*                       ReturnValue;                                       // 0x28(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
struct UScaleformBlueprintLibrary_InvokeNoParams_Params
{
public:
	class UGFxMoviePlayer*                       MoviePlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                              ReturnValue;                                       // 0x18(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ScaleformUI.ScaleformBlueprintLibrary.Invoke
struct UScaleformBlueprintLibrary_Invoke_Params
{
public:
	class UGFxMoviePlayer*                       MoviePlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                      Params;                                            // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FASValue                              ReturnValue;                                       // 0x28(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable
struct UScaleformBlueprintLibrary_GetVariable_Params
{
public:
	class UGFxMoviePlayer*                       MoviePlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariablePath;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
struct UScaleformBlueprintLibrary_GetMovieClip_Params
{
public:
	class UGFxMoviePlayer*                       MoviePlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MovieClipName;                                     // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ScaleformUI.ScaleformBlueprintLibrary.GetMember
struct UScaleformBlueprintLibrary_GetMember_Params
{
public:
	class UGFxMoviePlayer*                       MoviePlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberName;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ScaleformUI.ScaleformBlueprintLibrary.GetAllGFxMoviePlayerOfClass
struct UScaleformBlueprintLibrary_GetAllGFxMoviePlayerOfClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGFxMoviePlayer*>               FoundGFxMoviePlayer;                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UGFxMoviePlayer>           GFxMoviePlayerClass;                               // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VisibleOnly;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
struct UScaleformBlueprintLibrary_CloseMovie_Params
{
public:
	class UGFxMoviePlayer*                       MoviePlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


