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

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.SetupEventForApplyButton
struct UWid_MainMenu_VideoSettings_C_SetupEventForApplyButton_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.CacheSettingsArray
struct UWid_MainMenu_VideoSettings_C_CacheSettingsArray_Params
{
public:
	TArray<float>                                CallFunc_GetSettingsArray_Array;                   // 0x0(0x10)(ReferenceParm)
};

// 0x134 (0x134 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.GetSettingsArray
struct UWid_MainMenu_VideoSettings_C_GetSettingsArray_Params
{
public:
	TArray<float>                                Array;                                             // 0x0(0x10)(Parm, OutParm)
	TArray<float>                                SettingsArray;                                     // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        CurrentGraphicsQuality;                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_Get_Selected_Window_Mode_ReturnValue;     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BF3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             CallFunc_Get_Selected_Resolution_Output;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1; // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2; // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C3E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue;         // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue_1;       // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3; // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_5;            // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C73[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SupportsHDRDisplayOutput_ReturnValue;     // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C82[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0xAC(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C8D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue;           // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_6;            // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_7;            // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_1;         // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_2;         // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_8;            // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_9;            // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_3;         // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_4;         // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_10;           // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_11;           // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_5;         // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_12;           // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_6;         // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_7;         // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_13;           // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_14;           // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_18;                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4; // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Graphics Quality Settings Console
struct UWid_MainMenu_VideoSettings_C_Get_Graphics_Quality_Settings_Console_Params
{
public:
	int32                                        Graphics_Quality;                                  // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DCB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetGeometryQuality_ReturnValue;           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFoliageQuality_ReturnValue;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTextureQuality_ReturnValue;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x30(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_MaxOfIntArray_IndexOfMaxValue;            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MaxOfIntArray_MaxValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MinOfIntArray_IndexOfMinValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MinOfIntArray_MinValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E01[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ClampGraphicsValue
struct UWid_MainMenu_VideoSettings_C_ClampGraphicsValue_Params
{
public:
	enum class EScalabilityType                  Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E60[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScalabilityClamp_Global_Clamp;         // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScalabilityClamp_Advanced_Clamp;       // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ShowRestartPopup
struct UWid_MainMenu_VideoSettings_C_ShowRestartPopup_Params
{
public:
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E9D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.OnResolutionValueChanged
struct UWid_MainMenu_VideoSettings_C_OnResolutionValueChanged_Params
{
public:
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue;         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x54 (0x54 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ShowLoadingScreen
struct UWid_MainMenu_VideoSettings_C_ShowLoadingScreen_Params
{
public:
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_LoadingScreen_C*                  CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x18(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F3D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x40(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ApplyButtonPressed
struct UWid_MainMenu_VideoSettings_C_ApplyButtonPressed_Params
{
public:
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Show Benchmark Popup
struct UWid_MainMenu_VideoSettings_C_Show_Benchmark_Popup_Params
{
public:
	TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput;            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FCD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Set Background Visibility
struct UWid_MainMenu_VideoSettings_C_Set_Background_Visibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Capitalize Labels
struct UWid_MainMenu_VideoSettings_C_Capitalize_Labels_Params
{
public:
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x0(0x18)(None)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x18(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x30(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x48(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Is Any Popup Visible
struct UWid_MainMenu_VideoSettings_C_Is_Any_Popup_Visible_Params
{
public:
	bool                                         Is_Visible;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Show Ultra Quality Popup
struct UWid_MainMenu_VideoSettings_C_Show_Ultra_Quality_Popup_Params
{
public:
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Update Available Resolutions
struct UWid_MainMenu_VideoSettings_C_Update_Available_Resolutions_Params
{
public:
	enum class EWindowMode                       CallFunc_Get_Selected_Window_Mode_ReturnValue;     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWindowMode                       CallFunc_GetFullscreenMode_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWindowMode                       CallFunc_Get_Selected_Window_Mode_ReturnValue_1;   // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Custom_Resolution_Valid_IsValid;       // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1217[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1226[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_2;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntPoint>                     CallFunc_GetConvenientWindowedResolutions_Resolutions; // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_GetConvenientWindowedResolutions_ReturnValue; // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_123A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue_1;       // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1240[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIntPoint>                     K2Node_MakeArray_Array;                            // 0x60(0x10)(ReferenceParm)
	TArray<struct FIntPoint>                     CallFunc_GetSupportedFullscreenResolutions_Resolutions; // 0x70(0x10)(ReferenceParm)
	bool                                         CallFunc_GetSupportedFullscreenResolutions_ReturnValue; // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Add Custom Framerate Limit
struct UWid_MainMenu_VideoSettings_C_Add_Custom_Framerate_Limit_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OutputPin;                                         // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Available Resolution Index
struct UWid_MainMenu_VideoSettings_C_Get_Available_Resolution_Index_Params
{
public:
	struct FIntPoint                             Resolution;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AvailableResolutionsIndex;                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13E7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Is Custom Resolution Valid
struct UWid_MainMenu_VideoSettings_C_Is_Custom_Resolution_Valid_Params
{
public:
	bool                                         IsValid;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Resolution
struct UWid_MainMenu_VideoSettings_C_Save_Resolution_Params
{
public:
	struct FIntPoint                             CallFunc_Get_Selected_Resolution_Output;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Selected Resolution
struct UWid_MainMenu_VideoSettings_C_Get_Selected_Resolution_Params
{
public:
	struct FIntPoint                             Output;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_Array_Get_Item;                           // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Resolution Values
struct UWid_MainMenu_VideoSettings_C_Setup_Resolution_Values_Params
{
public:
	bool                                         UpdateAvailableResolutions;                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_156C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          Resolution_Values;                                 // 0x8(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1581[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.On Window Mode Value Changed
struct UWid_MainMenu_VideoSettings_C_On_Window_Mode_Value_Changed_Params
{
public:
	struct FIntPoint                             Cached_Resolution;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_Get_Selected_Resolution_Output;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Graphics Quality
struct UWid_MainMenu_VideoSettings_C_Save_Graphics_Quality_Params
{
public:
	int32                                        CurrentGraphicsQuality;                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1641[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_164C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue;           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_1;         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_2;         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_3;         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_4;         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_5;         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1661[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_6;         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ClampGraphicsValue_ReturnValue_7;         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1698[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Graphics Quality Settings PC
struct UWid_MainMenu_VideoSettings_C_Get_Graphics_Quality_Settings_PC_Params
{
public:
	int32                                        Graphics_Quality;                                  // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1781[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_178C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1792[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetContactShadowsEnabled_ReturnValue;     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCustomDrawDistanceEnabled_ReturnValue; // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1797[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetGeometryQuality_ReturnValue;           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFoliageQuality_ReturnValue;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTextureQuality_ReturnValue;            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x40(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_MaxOfIntArray_IndexOfMaxValue;            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MaxOfIntArray_MaxValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MinOfIntArray_IndexOfMinValue;            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MinOfIntArray_MinValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17D1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_1;                           // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17DB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Events
struct UWid_MainMenu_VideoSettings_C_Setup_Events_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x60(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.On Graphics Quality Value Changed PC
struct UWid_MainMenu_VideoSettings_C_On_Graphics_Quality_Value_Changed_PC_Params
{
public:
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue;         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_193B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item_1;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1941[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Load Settings
struct UWid_MainMenu_VideoSettings_C_Load_Settings_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SupportsHDRDisplayOutput_ReturnValue;     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHDREnabled_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A0B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScreenPercentage_ReturnValue;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFovValue_ReturnValue;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Available_Resolution_Index_Found;     // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFrameRateLimit_ReturnValue;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_2;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVSyncEnabled_ReturnValue;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue_1;             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_Custom_Framerate_Limit_OutputPin;     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_3;        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetFullscreenMode_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_4;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Graphics_Quality_Settings_PC_Graphics_Quality; // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Window Mode
struct UWid_MainMenu_VideoSettings_C_Save_Window_Mode_Params
{
public:
	enum class EWindowMode                       CallFunc_Get_Selected_Window_Mode_ReturnValue;     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ADA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Selected Window Mode
struct UWid_MainMenu_VideoSettings_C_Get_Selected_Window_Mode_Params
{
public:
	enum class EWindowMode                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Window Mode Values
struct UWid_MainMenu_VideoSettings_C_Setup_Window_Mode_Values_Params
{
public:
	TArray<class FText>                          WindowModeValues;                                  // 0x0(0x10)(Edit, BlueprintVisible)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(None)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BE5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       Temp_byte_Variable;                                // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x70(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Framerate Lock
struct UWid_MainMenu_VideoSettings_C_Save_Framerate_Lock_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item;                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x65 (0x65 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Framerate Lock Values
struct UWid_MainMenu_VideoSettings_C_Setup_Framerate_Lock_Values_Params
{
public:
	TArray<class FText>                          Framerate_Values;                                  // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CBE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item;                           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CCE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x48(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save VSync
struct UWid_MainMenu_VideoSettings_C_Save_VSync_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4E (0x4E - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Settings
struct UWid_MainMenu_VideoSettings_C_Save_Settings_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFoliageQuality_ReturnValue;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_2;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_3;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue;         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue_1;       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_4;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1; // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SupportsHDRDisplayOutput_ReturnValue;     // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Selectable Manger
struct UWid_MainMenu_VideoSettings_C_Setup_Selectable_Manger_Params
{
public:
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput;             // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetEntryIndex_EntryIndex;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SupportsHDRDisplayOutput_ReturnValue;     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1;           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetEntryIndex_EntryIndex_1;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class ISelectableEntryInterace_C>> K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
};

// 0x39 (0x39 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Reselect Resolution
struct UWid_MainMenu_VideoSettings_C_Reselect_Resolution_Params
{
public:
	struct FIntPoint                             CurrentResolution;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Available_Resolution_Index_Found;     // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ECE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIntPoint>                     K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x55 (0x55 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Reset To Defaults
struct UWid_MainMenu_VideoSettings_C_Reset_To_Defaults_Params
{
public:
	float                                        Temp_float_Variable;                               // 0x0(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SupportsHDRDisplayOutput_ReturnValue;     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_1;                             // 0x14(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue_1;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_2;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetDefaultWindowMode_ReturnValue;         // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.PreConstruct
struct UWid_MainMenu_VideoSettings_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Tick
struct UWid_MainMenu_VideoSettings_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x112 (0x112 - 0x0)
// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ExecuteUbergraph_wid_MainMenu_VideoSettings
struct UWid_MainMenu_VideoSettings_C_ExecuteUbergraph_wid_MainMenu_VideoSettings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x4(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                        Pad_2250[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x18(0x10)(ConstParm, ReferenceParm)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_227C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible;          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_227E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry;                   // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_menu_Benchmark_button_C*          K2Node_DynamicCast_AsWid_Menu_Benchmark_Button;    // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible_1;        // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible_2;        // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible_3;        // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible_4;        // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible_5;        // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2292[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x60(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Any_Popup_Visible_Is_Visible_6;        // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_1;                          // 0xA8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_1;                            // 0xC0(0x10)(ConstParm, ReferenceParm)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         K2Node_DynamicCast_AsCh_Hero_00;                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_PostEvent_ReturnValue_1;                  // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                CallFunc_GetSettingsArray_Array;                   // 0x100(0x10)(ReferenceParm)
	bool                                         CallFunc_CompareFloatArray_ReturnValue;            // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


