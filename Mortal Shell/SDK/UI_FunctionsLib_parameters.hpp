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

// 0xC8 (0xC8 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetPlaytimeFromTimeSpan
struct UUI_FunctionsLib_C_GetPlaytimeFromTimeSpan_Params
{
public:
	struct FTimespan                             Timespan;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm)
	int32                                        CallFunc_BreakTimespan_Days;                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Hours;                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Minutes;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Seconds;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Milliseconds;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CEE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_FixDateTime_TimeOut;                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_FixDateTime_TimeOut_1;                    // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_FixDateTime_TimeOut_2;                    // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB0(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetNoText
struct UUI_FunctionsLib_C_GetNoText_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  No;                                                // 0x8(0x18)(Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetYesText
struct UUI_FunctionsLib_C_GetYesText_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Yes;                                               // 0x8(0x18)(Parm, OutParm)
};

// 0x38 (0x38 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_DisableButton
struct UUI_FunctionsLib_C_UI_DisableButton_Params
{
public:
	class UWidget*                               Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Visibility;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D91[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetPlaytimeFromDate
struct UUI_FunctionsLib_C_GetPlaytimeFromDate_Params
{
public:
	struct FDateTime                             Date;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm)
	int32                                        CallFunc_BreakDateTime_Year;                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Month;                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Day;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Hour;                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Minute;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Second;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakDateTime_Millisecond;                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DFF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_FixDateTime_TimeOut;                      // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_FixDateTime_TimeOut_1;                    // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_FixDateTime_TimeOut_2;                    // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)(None)
};

// 0x60 (0x60 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.FixDateTime
struct UUI_FunctionsLib_C_FixDateTime_Params
{
public:
	int32                                        TimeIn;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E50[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Timeout;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E6D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E72[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.Spawn2DControllerSound
struct UUI_FunctionsLib_C_Spawn2DControllerSound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VolumeMultiplier;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchMultiplier;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EF8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlatform                         CallFunc_GetPlatform_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDebugDualSenseAudio_ReturnValue;       // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.Play2DControllerSound
struct UUI_FunctionsLib_C_Play2DControllerSound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VolumeMultiplier;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchMultiplier;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F65[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F6A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDebugDualSenseAudio_ReturnValue;       // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlatform                         CallFunc_GetPlatform_ReturnValue;                  // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x258 (0x258 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetShadeNames
struct UUI_FunctionsLib_C_GetShadeNames_Params
{
public:
	enum class EArmorTypes                       Shell;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_101F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Shade;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm)
	enum class EArmorTypes                       Local_Shell;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1038[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x90(0x18)(None)
	int32                                        Temp_int_Variable;                                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable;                                // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1042[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_5;                              // 0xB0(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xC8(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xE0(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0xF8(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0x110(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x128(0x18)(None)
	enum class EArmorTypes                       Temp_byte_Variable_1;                              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_104D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_11;                             // 0x148(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x160(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x178(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x190(0x18)(None)
	class FText                                  Temp_text_Variable_15;                             // 0x1A8(0x18)(None)
	class FText                                  Temp_text_Variable_16;                             // 0x1C0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x1D8(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x1F0(0x18)(None)
	class FText                                  Temp_text_Variable_17;                             // 0x208(0x18)(None)
	enum class EArmorTypes                       Temp_byte_Variable_2;                              // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1059[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0x228(0x18)(None)
	class FText                                  K2Node_Select_Default_3;                           // 0x240(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetForcePS4Icons
struct UUI_FunctionsLib_C_GetForcePS4Icons_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForcePS4Icons;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A4 (0x1A4 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetInputAxis
struct UUI_FunctionsLib_C_GetInputAxis_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputAxis>                    Array;                                             // 0x8(0x10)(Parm, OutParm, HasGetValueTypeHash)
	struct FInputAxis                            Local_MoveLeft;                                    // 0x18(0x40)(Edit, BlueprintVisible)
	struct FInputAxis                            Local_MoveRight;                                   // 0x58(0x40)(Edit, BlueprintVisible)
	struct FInputAxis                            Local_MoveBackward;                                // 0x98(0x40)(Edit, BlueprintVisible)
	struct FInputAxis                            Local_MoveForward;                                 // 0xD8(0x40)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1145[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputAxis>                    K2Node_MakeArray_Array;                            // 0x128(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FInputAxis>                    CallFunc_GetAllBindedInputAxis_InputAxis;          // 0x138(0x10)(ReferenceParm, HasGetValueTypeHash)
	struct FInputAxis                            CallFunc_Array_Get_Item;                           // 0x148(0x40)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1158[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess_1;                  // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess_2;                  // 0x1A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D9 (0x2D9 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetKeyAsIcon
struct UUI_FunctionsLib_C_GetKeyAsIcon_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Gamepad;                                           // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_121B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1224[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Local_Key;                                         // 0x38(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<struct FKey, class UTexture2D*>         Local_Icons_PC;                                    // 0x50(0x50)(Edit, BlueprintVisible)
	TMap<struct FKey, class UTexture2D*>         Local_Icons_PS4;                                   // 0xA0(0x50)(Edit, BlueprintVisible)
	TMap<struct FKey, class UTexture2D*>         Local_Icons_Xbox;                                  // 0xF0(0x50)(Edit, BlueprintVisible)
	class UDataTable*                            Temp_object_Variable;                              // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCompressedKeyString_ReturnValue;       // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_1;                            // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_2;                            // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_3;                            // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_4;                            // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_5;                            // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_6;                            // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_124B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_7;                            // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FKey, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput;            // 0x1B0(0x50)(None)
	TMap<struct FKey, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_1;          // 0x200(0x50)(None)
	TMap<struct FKey, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_2;          // 0x250(0x50)(None)
	enum class EPlatformGamepadType              Temp_byte_Variable;                                // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlatformGamepadType              CallFunc_GetPlatformGamepadType_ReturnValue;       // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1256[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            K2Node_Select_Default;                             // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_Select_Default_1;                           // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUI_Icon                              CallFunc_GetDataTableRowFromName_OutRow;           // 0x2C8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x108 (0x108 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetAllRebindableInputActions
struct UUI_FunctionsLib_C_GetAllRebindableInputActions_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputAction>                  Actions;                                           // 0x8(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FInputAction>                  Local_AllBindedInputActions;                       // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputAction                          Local_Action;                                      // 0x28(0x40)(Edit, BlueprintVisible)
	TArray<struct FInputAction>                  Local_InputActions_All;                            // 0x68(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FInputAction>                  Local_InputActions_Controller;                     // 0x78(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FInputAction>                  Local_InputActions_KBM;                            // 0x88(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAction                          CallFunc_Array_Get_Item;                           // 0xA0(0x40)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputAction>                  CallFunc_GetAllBindedInputActions_Actions;         // 0xF0(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetBrightnessRange
struct UUI_FunctionsLib_C_GetBrightnessRange_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetKeyAsTexture
struct UUI_FunctionsLib_C_GetKeyAsTexture_Params
{
public:
	class FString                                KeyAsString;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  Key;                                               // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeyFound;                                          // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1374[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Texture;                                           // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                KeyString;                                         // 0x40(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Local_KeyFound;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_137E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCompressedKeyString_ReturnValue;       // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable;                              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlatformGamepadType              Temp_byte_Variable;                                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1392[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_1;                            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_2;                            // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_3;                            // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_4;                            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_5;                            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_6;                            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_7;                            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlatformGamepadType              CallFunc_GetPlatformGamepadType_ReturnValue;       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            K2Node_Select_Default;                             // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_Select_Default_1;                           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUI_Icon                              CallFunc_GetDataTableRowFromName_OutRow;           // 0xD0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B3 (0x1B3 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetInputActions
struct UUI_FunctionsLib_C_GetInputActions_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FInputAction>     InputActionsKBM;                                   // 0x8(0x50)(Parm, OutParm)
	TMap<class FString, struct FInputAction>     InputActionController;                             // 0x58(0x50)(Parm, OutParm)
	TMap<class FString, struct FInputAction>     Local_InputActions_Controller;                     // 0xA8(0x50)(Edit, BlueprintVisible)
	TMap<class FString, struct FInputAction>     Local_InputActions_KBM;                            // 0xF8(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1467[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputAction>                  CallFunc_GetAllBindedInputActions_Actions;         // 0x158(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1471[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAction                          CallFunc_Array_Get_Item;                           // 0x170(0x40)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x890 (0x890 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.CheckItemName
struct UUI_FunctionsLib_C_CheckItemName_Params
{
public:
	class FText                                  ItemName;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm)
	struct FInventoryItem                        Local_Item;                                        // 0x38(0x132)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_157B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_EffigyName_Unknown;                          // 0x170(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_ItemName_Return;                             // 0x188(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_ItemName_Current;                            // 0x1A0(0x18)(Edit, BlueprintVisible)
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x1B8(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_1580[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1586[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x2F8(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_1589[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x432(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x433(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x434(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0x435(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1598[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x438(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_159D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x578(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_15A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x6B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_1;        // 0x6B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_2;        // 0x6B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_3;        // 0x6B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_4;        // 0x6B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15B0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x6B8(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_15B6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x7F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShellNameKnown_bUnlocked;               // 0x7F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15BA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x7F8(0x18)(None)
	bool                                         CallFunc_IsShellNameKnown_bUnlocked_1;             // 0x810(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x818(0x18)(None)
	bool                                         CallFunc_IsShellNameKnown_bUnlocked_2;             // 0x830(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0x838(0x18)(None)
	bool                                         CallFunc_IsShellNameKnown_bUnlocked_3;             // 0x850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_3;                           // 0x858(0x18)(None)
	bool                                         CallFunc_IsShellNameKnown_bUnlocked_4;             // 0x870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_4;                           // 0x878(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_SoundHover
struct UUI_FunctionsLib_C_UI_SoundHover_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_SoundCantDo
struct UUI_FunctionsLib_C_UI_SoundCantDo_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetCanUseItem
struct UUI_FunctionsLib_C_GetCanUseItem_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsableInDarkForm;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     GameplayPC;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_InventoryItem_CanUse         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface;        // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_InventoryItem_CanUse         CallFunc_InventoryUtil_GetCanUseItem_ReturnValue;  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.ItemDetailBuildString
struct UUI_FunctionsLib_C_ItemDetailBuildString_Params
{
public:
	class FString                                EffectDescription;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ExtendedDescription;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Description;                                       // 0x20(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         HasFamiliarity_;                                   // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NoSpace;                                           // 0x39(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_177C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ItemEffects;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ItemDescription;                                   // 0x58(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable;                              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_178E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_1;                            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1797[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_2;                            // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_3;                            // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default_1;                           // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_4;                            // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default_2;                           // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default_3;                           // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetCredits
struct UUI_FunctionsLib_C_GetCredits_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          Return_Value;                                      // 0x8(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FText>                          Local_Credits;                                     // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetCostColor
struct UUI_FunctionsLib_C_GetCostColor_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_188A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           SlateColor;                                        // 0x10(0x28)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_189C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x5C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x70(0x28)(None)
};

// 0x1D0 (0x1D0 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetUpgradesIcons
struct UUI_FunctionsLib_C_GetUpgradesIcons_Params
{
public:
	bool                                         Unlocked;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Armor;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Hadern_Icons_Inactive;                             // 0x20(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Hadern_Icons_Active;                               // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Light_Icons_Active;                                // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Heavy_Icons_Active;                                // 0x50(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Fluted_Icons_Active;                               // 0x60(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Balanced_Icons_Active;                             // 0x70(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Light_Icons_Inactive;                              // 0x80(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Heavy_Icons_Inactive;                              // 0x90(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Fluted_Icons_Inactive;                             // 0xA0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Balanced_Icons_Inactive;                           // 0xB0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    Temp_object_Variable;                              // 0xC0(0x10)(ReferenceParm, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable;                                // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    Temp_object_Variable_1;                            // 0xD8(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array;                            // 0xF0(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array_1;                          // 0x100(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array_2;                          // 0x110(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array_3;                          // 0x120(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array_4;                          // 0x130(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array_5;                          // 0x140(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array_6;                          // 0x150(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array_7;                          // 0x160(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array_8;                          // 0x170(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array_9;                          // 0x180(0x10)(ReferenceParm, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable_1;                              // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    K2Node_Select_Default;                             // 0x198(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    K2Node_Select_Default_1;                           // 0x1A8(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_Array_Get_Item;                           // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_Array_Get_Item_1;                         // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_Select_Default_2;                           // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.GetButtonIcon
struct UUI_FunctionsLib_C_GetButtonIcon_Params
{
public:
	enum class EControllerButton                 ButtonType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Texture;                                           // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_RowName;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_InKeyboardMode;                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EControllerButton                 Local_ButtonType;                                  // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B91[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_1;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_2;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_3;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_4;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_5;                            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_6;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlatformGamepadType              Temp_byte_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlatformGamepadType              CallFunc_GetPlatformGamepadType_ReturnValue;       // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BB7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_Select_Default;                             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface; // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUI_Icon                              CallFunc_GetDataTableRowFromName_OutRow;           // 0x90(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInKeyboardMode_InKeyboardMode;          // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BCE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_ClearTimer
struct UUI_FunctionsLib_C_UI_ClearTimer_Params
{
public:
	struct FTimerHandle                          Timer;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_HoldTimer
struct UUI_FunctionsLib_C_UI_HoldTimer_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	float                                        Time;                                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


