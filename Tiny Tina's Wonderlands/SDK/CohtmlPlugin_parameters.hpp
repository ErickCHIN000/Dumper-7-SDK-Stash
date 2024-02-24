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

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct
struct UCohtmlBaseComponent_UpdateWholeDataModelFromStruct_Params
{
public:
	class UStructProperty*                       Struct;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject
struct UCohtmlBaseComponent_UpdateWholeDataModelFromObject_Params
{
public:
	class UObject*                               Model;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent
struct UCohtmlBaseComponent_TriggerJSEvent_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCohtmlJSEvent*                        EventData;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects
struct UCohtmlBaseComponent_ShowPaintRects_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2A8 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation
struct UCohtmlBaseComponent_SetSoundAttenuation_Params
{
public:
	struct FSoundAttenuationSettings             Settings;                                          // 0x0(0x2A8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.Resize
struct UCohtmlBaseComponent_Resize_Params
{
public:
	int32                                        Width;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTextureFromPath
struct UCohtmlBaseComponent_RemovePreloadedTextureFromPath_Params
{
public:
	class FString                                AssetPath;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTexture
struct UCohtmlBaseComponent_RemovePreloadedTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.RemoveDataModelFromStruct
struct UCohtmlBaseComponent_RemoveDataModelFromStruct_Params
{
public:
	class UStructProperty*                       Struct;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.RemoveDataModelFromObject
struct UCohtmlBaseComponent_RemoveDataModelFromObject_Params
{
public:
	class UObject*                               Model;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureSync
struct UCohtmlBaseComponent_PreloadTextureSync_Params
{
public:
	class FString                                AssetPath;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureAsync
struct UCohtmlBaseComponent_PreloadTextureAsync_Params
{
public:
	class FString                                AssetPath;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.Load
struct UCohtmlBaseComponent_Load_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView
struct UCohtmlBaseComponent_IsReadyToCreateView_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings
struct UCohtmlBaseComponent_IsReadyForBindings_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView
struct UCohtmlBaseComponent_HasRequestedView_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering
struct UCohtmlBaseComponent_EnableRendering_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate
struct UCohtmlBaseComponent_EnableDelayedUpdate_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent
struct UCohtmlBaseComponent_CreateJSEvent_Params
{
public:
	class UCohtmlJSEvent*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct
struct UCohtmlBaseComponent_CreateDataModelFromStruct_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                       Arg;                                               // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject
struct UCohtmlBaseComponent_CreateDataModelFromObject_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Model;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlBaseComponent.AddPreloadedTexture
struct UCohtmlBaseComponent_AddPreloadedTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent
struct UCohtmlBlueprintFunctionLibrary_TriggerJSEvent_Params
{
public:
	class UCohtmlBaseComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent
struct UCohtmlBlueprintFunctionLibrary_CreateJSEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCohtmlJSEvent*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg
struct UCohtmlBlueprintFunctionLibrary_AddStructArg_Params
{
public:
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                       Arg;                                               // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString
struct UCohtmlBlueprintFunctionLibrary_AddString_Params
{
public:
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Arg;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject
struct UCohtmlBlueprintFunctionLibrary_AddObject_Params
{
public:
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Arg;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32
struct UCohtmlBlueprintFunctionLibrary_AddInt32_Params
{
public:
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Arg;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat
struct UCohtmlBlueprintFunctionLibrary_AddFloat_Params
{
public:
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Arg;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte
struct UCohtmlBlueprintFunctionLibrary_AddByte_Params
{
public:
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Arg;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool
struct UCohtmlBlueprintFunctionLibrary_AddBool_Params
{
public:
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Arg;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs
struct UCohtmlBlueprintFunctionLibrary_AddArrayOfStructs_Params
{
public:
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Arg;                                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray
struct UCohtmlBlueprintFunctionLibrary_AddArray_Params
{
public:
	class UCohtmlJSEvent*                        JSEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Arg;                                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ArrayType;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlGameHUD.SetupView
struct ACohtmlGameHUD_SetupView_Params
{
public:
	class FString                                PageUrl;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableComplexCSSSupport;                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDelayedUpdate;                                    // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseWideColorTextures;                             // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode
struct ACohtmlInputActor_SetLineTraceMode_Params
{
public:
	enum class ECohtmlInputWidgetLineTraceMode   Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour
struct ACohtmlInputActor_SetInputPropagationBehaviour_Params
{
public:
	enum class ECohtmlInputPropagationBehaviour  Propagation;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus
struct ACohtmlInputActor_SetCohtmlViewFocus_Params
{
public:
	class UCohtmlBaseComponent*                  NewFocusedView;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus
struct ACohtmlInputActor_SetCohtmlInputFocus_Params
{
public:
	bool                                         FocusUI;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused
struct ACohtmlInputActor_IsCohtmlFocused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlInputActor.Initialize
struct ACohtmlInputActor_Initialize_Params
{
public:
	enum class ECollisionChannel                 CollisionChannel;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressMode;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECohtmlInputWidgetRaycastQuality  RaycastQuality;                                    // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UVChannel;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour
struct ACohtmlInputActor_GetInputPropagationBehaviour_Params
{
public:
	enum class ECohtmlInputPropagationBehaviour  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput
struct ACohtmlInputActor_AlwaysAcceptMouseInput_Params
{
public:
	bool                                         bAccept;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddText
struct UCohtmlJSEvent_AddText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddStructArg
struct UCohtmlJSEvent_AddStructArg_Params
{
public:
	class UStructProperty*                       Arg;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddString
struct UCohtmlJSEvent_AddString_Params
{
public:
	class FString                                Str;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddObject
struct UCohtmlJSEvent_AddObject_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddName
struct UCohtmlJSEvent_AddName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddInt32
struct UCohtmlJSEvent_AddInt32_Params
{
public:
	int32                                        Integer;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddFloat
struct UCohtmlJSEvent_AddFloat_Params
{
public:
	float                                        Fl;                                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddByte
struct UCohtmlJSEvent_AddByte_Params
{
public:
	uint8                                        byte;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddBool
struct UCohtmlJSEvent_AddBool_Params
{
public:
	bool                                         B;                                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlJSEvent.AddArray
struct UCohtmlJSEvent_AddArray_Params
{
public:
	TArray<int32>                                Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct
struct UCohtmlWidget_UpdateWholeDataModelFromStruct_Params
{
public:
	class UStructProperty*                       Struct;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject
struct UCohtmlWidget_UpdateWholeDataModelFromObject_Params
{
public:
	class UObject*                               Model;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent
struct UCohtmlWidget_TriggerJSEvent_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCohtmlJSEvent*                        EventData;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.ShowPaintRects
struct UCohtmlWidget_ShowPaintRects_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2A8 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation
struct UCohtmlWidget_SetSoundAttenuation_Params
{
public:
	struct FSoundAttenuationSettings             Settings;                                          // 0x0(0x2A8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour
struct UCohtmlWidget_SetInputPropagationBehaviour_Params
{
public:
	enum class ECohtmlInputPropagationBehaviour  Propagation;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTextureFromPath
struct UCohtmlWidget_RemovePreloadedTextureFromPath_Params
{
public:
	class FString                                AssetPath;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTexture
struct UCohtmlWidget_RemovePreloadedTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.RemoveDataModelFromStruct
struct UCohtmlWidget_RemoveDataModelFromStruct_Params
{
public:
	class UStructProperty*                       Struct;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.RemoveDataModelFromObject
struct UCohtmlWidget_RemoveDataModelFromObject_Params
{
public:
	class UObject*                               Model;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.PreloadTextureSync
struct UCohtmlWidget_PreloadTextureSync_Params
{
public:
	class FString                                AssetPath;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.PreloadTextureAsync
struct UCohtmlWidget_PreloadTextureAsync_Params
{
public:
	class FString                                AssetPath;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.Load
struct UCohtmlWidget_Load_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView
struct UCohtmlWidget_IsReadyToCreateView_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings
struct UCohtmlWidget_IsReadyForBindings_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.HasRequestedView
struct UCohtmlWidget_HasRequestedView_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.GetRenderTexture
struct UCohtmlWidget_GetRenderTexture_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour
struct UCohtmlWidget_GetInputPropagationBehaviour_Params
{
public:
	enum class ECohtmlInputPropagationBehaviour  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.CreateJSEvent
struct UCohtmlWidget_CreateJSEvent_Params
{
public:
	class UCohtmlJSEvent*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct
struct UCohtmlWidget_CreateDataModelFromStruct_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                       Struct;                                            // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject
struct UCohtmlWidget_CreateDataModelFromObject_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Model;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CohtmlPlugin.CohtmlWidget.AddPreloadedTexture
struct UCohtmlWidget_AddPreloadedTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


