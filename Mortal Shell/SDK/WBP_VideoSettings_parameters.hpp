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

// 0x1A (0x1A - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.IsDXRestartRequired
struct UWBP_VideoSettings_C_IsDXRestartRequired_Params
{
public:
	bool                                         Required_;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDX12Active_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDX12Desired_ReturnValue;                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDLSS_Right
struct UWBP_VideoSettings_C_SetDLSS_Right_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue_1;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue_1;      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDesiredDlssMode_ReturnValue;           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDLSS_Left
struct UWBP_VideoSettings_C_SetDLSS_Left_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_165E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1679[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue_1;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue_1;      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDesiredDlssMode_ReturnValue;           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDLSS_Text
struct UWBP_VideoSettings_C_SetDLSS_Text_Params
{
public:
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDesiredDlssMode_ReturnValue;           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x18(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDLSS_Button
struct UWBP_VideoSettings_C_SetDLSS_Button_Params
{
public:
	bool                                         Local_Available;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDLSSAvailable_ReturnValue;              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_170C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_1;                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.IsDLSSAvailable
struct UWBP_VideoSettings_C_IsDLSSAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1768[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetRayTracing_Toggle
struct UWBP_VideoSettings_C_SetRayTracing_Toggle_Params
{
public:
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRayTracingDesired_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetRayTracing_Text
struct UWBP_VideoSettings_C_SetRayTracing_Text_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRayTracingDesired_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x15 (0x15 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetRayTracing_Button
struct UWBP_VideoSettings_C_SetRayTracing_Button_Params
{
public:
	bool                                         Local_Available;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1861[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_1;                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRayTracingAvailable_ReturnValue;        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.IsRayTracingAvailable
struct UWBP_VideoSettings_C_IsRayTracingAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDX12Active_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDirectX_Toggle
struct UWBP_VideoSettings_C_SetDirectX_Toggle_Params
{
public:
	bool                                         CallFunc_IsDXRestartRequired_Required_;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_190F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDX12Desired_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14A (0x14A - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDirectX_Text
struct UWBP_VideoSettings_C_SetDirectX_Text_Params
{
public:
	bool                                         Local_DX12Desired;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_DX12Active;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19B4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x50(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x78(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC8(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xF0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x108(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x120(0x18)(None)
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDX12Active_ReturnValue;                 // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDX12Desired_ReturnValue;                // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDirectX_Button
struct UWBP_VideoSettings_C_SetDirectX_Button_Params
{
public:
	bool                                         Local_Available;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDirectXAvailable_ReturnValue;           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_1;                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.IsDirectXAvailable
struct UWBP_VideoSettings_C_IsDirectXAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHRayTracing*                         CallFunc_GetRayTracingSettings_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanSwitchRHI_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.AdvancedSettingsAvailable
struct UWBP_VideoSettings_C_AdvancedSettingsAvailable_Params
{
public:
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetXboxSerieSText
struct UWBP_VideoSettings_C_SetXboxSerieSText_Params
{
public:
	enum class Enum_XboxS_Type                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_XboxS_Type                   Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B78[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)(None)
};

// 0x5B (0x5B - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetXboxSerieSMode
struct UWBP_VideoSettings_C_SetXboxSerieSMode_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_XboxS_Type                   CallFunc_GetXboxSType_Type;                        // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetXboxSerieSMode
struct UWBP_VideoSettings_C_GetXboxSerieSMode_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_XboxS_Type                   CallFunc_GetXboxSType_Type;                        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.HandleXboxSerieSOption
struct UWBP_VideoSettings_C_HandleXboxSerieSOption_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDebugXboxSerieSOption_Debug;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D02[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsXboxOneSeriesS_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetCutsceneAspectRatio
struct UWBP_VideoSettings_C_ResetCutsceneAspectRatio_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetRadialBlur
struct UWBP_VideoSettings_C_ResetRadialBlur_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x33 (0x33 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.RadialBlur_Set
struct UWBP_VideoSettings_C_RadialBlur_Set_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRadialBlur_ReturnValue;                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x33 (0x33 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.CutsceneAspectRatio_Set
struct UWBP_VideoSettings_C_CutsceneAspectRatio_Set_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCutsceneAspectRatio_ReturnValue;       // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.RadialBlur_Get
struct UWBP_VideoSettings_C_RadialBlur_Get_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRadialBlur_ReturnValue;                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EB3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x58(0x18)(None)
};

// 0x70 (0x70 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.CutsceneAspectRatio_Get
struct UWBP_VideoSettings_C_CutsceneAspectRatio_Get_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCutsceneAspectRatio_ReturnValue;       // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F3D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x58(0x18)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.CutsceneAspectRatioAvailable
struct UWBP_VideoSettings_C_CutsceneAspectRatioAvailable_Params
{
public:
	float                                        Local_AspectRatio;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FB0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetIsConsole
struct UWBP_VideoSettings_C_GetIsConsole_Params
{
public:
	bool                                         IsConsole;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_ForceIsConsole;                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetFOV
struct UWBP_VideoSettings_C_ResetFOV_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetAspectRatio
struct UWBP_VideoSettings_C_ResetAspectRatio_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE1 (0xE1 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.UWSettingsEnabled
struct UWBP_VideoSettings_C_UWSettingsEnabled_Params
{
public:
	float                                        Local_AspectRatio;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetFOVRange
struct UWBP_VideoSettings_C_GetFOVRange_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Right
struct UWBP_VideoSettings_C_FOV_Right_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2290[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFOVRange_ReturnValue;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Set
struct UWBP_VideoSettings_C_FOV_Set_Params
{
public:
	float                                        FOV;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Left
struct UWBP_VideoSettings_C_FOV_Left_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_234C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFOVRange_ReturnValue;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_SetText
struct UWBP_VideoSettings_C_FOV_SetText_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2365[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x8(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Get
struct UWBP_VideoSettings_C_FOV_Get_Params
{
public:
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.AspectRatio_Get
struct UWBP_VideoSettings_C_AspectRatio_Get_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_238F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAspectRatioConstraint_index;           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.AspectRatio_SetText
struct UWBP_VideoSettings_C_AspectRatio_SetText_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x69 (0x69 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.AspectRatio_Right
struct UWBP_VideoSettings_C_AspectRatio_Right_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_247C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2483[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAspectRatioConstraint_index;           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2; // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2490[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3; // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.AspectRatio_Left
struct UWBP_VideoSettings_C_AspectRatio_Left_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAspectRatioConstraint_index;           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2; // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3; // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.IsFramerateDirty
struct UWBP_VideoSettings_C_IsFramerateDirty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.DiscardAnyChange
struct UWBP_VideoSettings_C_DiscardAnyChange_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ApplyNewSettings
struct UWBP_VideoSettings_C_ApplyNewSettings_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFullscreenModeDirty_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFullscreenModeDirty_ReturnValue_1;      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetScalability
struct UWBP_VideoSettings_C_ResetScalability_Params
{
public:
	class UGameUserSettings*                     Settings;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetResolutionScale
struct UWBP_VideoSettings_C_ResetResolutionScale_Params
{
public:
	int32                                        Local_ResolutionY;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2763[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2780[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_279F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0xB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetBrigthness
struct UWBP_VideoSettings_C_ResetBrigthness_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetPixelMode
struct UWBP_VideoSettings_C_ResetPixelMode_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetFilmGrain
struct UWBP_VideoSettings_C_ResetFilmGrain_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetMotionBlur
struct UWBP_VideoSettings_C_ResetMotionBlur_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetVSync
struct UWBP_VideoSettings_C_ResetVSync_Params
{
public:
	class UGameUserSettings*                     Settings;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetFramerate
struct UWBP_VideoSettings_C_ResetFramerate_Params
{
public:
	class UGameUserSettings*                     Settings;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetDisplayMode
struct UWBP_VideoSettings_C_ResetDisplayMode_Params
{
public:
	class UGameUserSettings*                     Settings;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetResolution
struct UWBP_VideoSettings_C_ResetResolution_Params
{
public:
	class UGameUserSettings*                     Settings;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution Is Available
struct UWBP_VideoSettings_C_Resolution_Is_Available_Params
{
public:
	enum class EWindowMode                       WindowMode;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.HDR_Update
struct UWBP_VideoSettings_C_HDR_Update_Params
{
public:
	bool                                         CallFunc_HDR_Set_Enabled;                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.IsHDRSupported
struct UWBP_VideoSettings_C_IsHDRSupported_Params
{
public:
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ACB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHDREnabled_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SupportsHDRDisplayOutput_ReturnValue;     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.HDR_SetText
struct UWBP_VideoSettings_C_HDR_SetText_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B1A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)(None)
};

// 0x12 (0x12 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.HDR_Set
struct UWBP_VideoSettings_C_HDR_Set_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHDREnabled_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SupportsHDRDisplayOutput_ReturnValue;     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetSettingsValues
struct UWBP_VideoSettings_C_GetSettingsValues_Params
{
public:
	TArray<class UTextBlock*>                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C1F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTextBlock*>                    K2Node_Select_Default;                             // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetSettingsTitles
struct UWBP_VideoSettings_C_GetSettingsTitles_Params
{
public:
	TArray<class UTextBlock*>                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C7C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTextBlock*>                    K2Node_Select_Default;                             // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetSettingsButtons
struct UWBP_VideoSettings_C_GetSettingsButtons_Params
{
public:
	TArray<class UButton*>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CDB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UButton*>                       K2Node_Select_Default;                             // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.HideSettingsOnConsoles
struct UWBP_VideoSettings_C_HideSettingsOnConsoles_Params
{
public:
	bool                                         Debug;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetSpinBoxes
struct UWBP_VideoSettings_C_ResetSpinBoxes_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USpinBox*>                      CallFunc_GetSpinBoxes_Array;                       // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpinBox*                              CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetSpinBoxes
struct UWBP_VideoSettings_C_GetSpinBoxes_Params
{
public:
	TArray<class USpinBox*>                      Array;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E28[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USpinBox*>                      K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class USpinBox*>                      K2Node_MakeArray_Array_1;                          // 0x28(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class USpinBox*>                      K2Node_Select_Default;                             // 0x38(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetMotionBlur
struct UWBP_VideoSettings_C_SetMotionBlur_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Text_SetMotionBlur
struct UWBP_VideoSettings_C_Text_SetMotionBlur_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ECD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)(None)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.DisableFilmGrain
struct UWBP_VideoSettings_C_DisableFilmGrain_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.DisablePixelMode
struct UWBP_VideoSettings_C_DisablePixelMode_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetIndieMode
struct UWBP_VideoSettings_C_SetIndieMode_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Text_SetPixelMode
struct UWBP_VideoSettings_C_Text_SetPixelMode_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)(None)
};

// 0x1A (0x1A - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetFilmGrain
struct UWBP_VideoSettings_C_SetFilmGrain_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Text_SetFilmGrain
struct UWBP_VideoSettings_C_Text_SetFilmGrain_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_305B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)(None)
};

// 0x19 (0x19 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetMainMenuPC
struct UWBP_VideoSettings_C_GetMainMenuPC_Params
{
public:
	class AMainMenuPC_C*                         AsMain_Menu_PC;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainMenuPC_C*                         K2Node_DynamicCast_AsMain_Menu_PC;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.VSync_Get
struct UWBP_VideoSettings_C_VSync_Get_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3119[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVSyncEnabled_ReturnValue;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3122[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)(None)
};

// 0xA (0xA - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.VSync_Set
struct UWBP_VideoSettings_C_VSync_Set_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVSyncEnabled_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution_SetIndex
struct UWBP_VideoSettings_C_Resolution_SetIndex_Params
{
public:
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_315F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_SpinBox
struct UWBP_VideoSettings_C_Brightness_SpinBox_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_317E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_Right
struct UWBP_VideoSettings_C_Brightness_Right_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31A8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetBrightnessRange_ReturnValue;           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_Set
struct UWBP_VideoSettings_C_Brightness_Set_Params
{
public:
	float                                        Brightness;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_Left
struct UWBP_VideoSettings_C_Brightness_Left_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_320B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetBrightnessRange_ReturnValue;           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_SetText
struct UWBP_VideoSettings_C_Brightness_SetText_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3220[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x8(0x18)(None)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.AntiAliasing_Get
struct UWBP_VideoSettings_C_AntiAliasing_Get_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3243[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x10(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.PP_Get
struct UWBP_VideoSettings_C_PP_Get_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPostProcessingQuality_ReturnValue;     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3264[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x10(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Foliage_Get
struct UWBP_VideoSettings_C_Foliage_Get_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFoliageQuality_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x10(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Effects_Get
struct UWBP_VideoSettings_C_Effects_Get_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x10(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ViewDistance_Get
struct UWBP_VideoSettings_C_ViewDistance_Get_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewDistanceQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3325[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x10(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Textures_Get
struct UWBP_VideoSettings_C_Textures_Get_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTextureQuality_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x10(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Shadows_Get
struct UWBP_VideoSettings_C_Shadows_Get_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x10(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Framerate_Get
struct UWBP_VideoSettings_C_Framerate_Get_Params
{
public:
	TArray<class FText>                          CallFunc_Map_Values_Values;                        // 0x0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item;                           // 0x10(0x18)(None)
};

// 0x78 (0x78 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.DisplayMode_Get
struct UWBP_VideoSettings_C_DisplayMode_Get_Params
{
public:
	class FText                                  Temp_text_Variable;                                // 0x0(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x18(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x30(0x18)(None)
	enum class EWindowMode                       Temp_byte_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_345C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetFullscreenMode_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3461[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x60(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution_Get
struct UWBP_VideoSettings_C_Resolution_Get_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Presets_Get
struct UWBP_VideoSettings_C_Presets_Get_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetOverallScalabilityLevel_ReturnValue;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x10(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetValueArray
struct UWBP_VideoSettings_C_SetValueArray_Params
{
public:
	TArray<class UTextBlock*>                    K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UTextBlock*>                    K2Node_MakeArray_Array_1;                          // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetTitleArray
struct UWBP_VideoSettings_C_SetTitleArray_Params
{
public:
	TArray<class UTextBlock*>                    K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UTextBlock*>                    K2Node_MakeArray_Array_1;                          // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.SetButtonArray
struct UWBP_VideoSettings_C_SetButtonArray_Params
{
public:
	TArray<class UButton*>                       K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UButton*>                       K2Node_MakeArray_Array_1;                          // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_SpinBox
struct UWBP_VideoSettings_C_ResScale_SpinBox_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Nav_Right
struct UWBP_VideoSettings_C_Nav_Right_Params
{
public:
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_359C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Nav_Left
struct UWBP_VideoSettings_C_Nav_Left_Params
{
public:
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35CC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_Set
struct UWBP_VideoSettings_C_ResScale_Set_Params
{
public:
	float                                        ResolutionScale;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_SetText
struct UWBP_VideoSettings_C_ResScale_SetText_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.AntiAliasing_Right
struct UWBP_VideoSettings_C_AntiAliasing_Right_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3637[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.AntiAliasing_Left
struct UWBP_VideoSettings_C_AntiAliasing_Left_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3668[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.PP_Right
struct UWBP_VideoSettings_C_PP_Right_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPostProcessingQuality_ReturnValue;     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_369C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.PP_Left
struct UWBP_VideoSettings_C_PP_Left_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPostProcessingQuality_ReturnValue;     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Foliage_Right
struct UWBP_VideoSettings_C_Foliage_Right_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFoliageQuality_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3710[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Foliage_Left
struct UWBP_VideoSettings_C_Foliage_Left_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFoliageQuality_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_373E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Effects_Right
struct UWBP_VideoSettings_C_Effects_Right_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3774[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Effects_Left
struct UWBP_VideoSettings_C_Effects_Left_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_379D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ViewDistance_Right
struct UWBP_VideoSettings_C_ViewDistance_Right_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewDistanceQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ViewDistance_Left
struct UWBP_VideoSettings_C_ViewDistance_Left_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewDistanceQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Textures_Right
struct UWBP_VideoSettings_C_Textures_Right_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTextureQuality_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3823[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Textures_Left
struct UWBP_VideoSettings_C_Textures_Left_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTextureQuality_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3860[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Shadows_Right
struct UWBP_VideoSettings_C_Shadows_Right_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_389D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Shadows_Left
struct UWBP_VideoSettings_C_Shadows_Left_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_Right
struct UWBP_VideoSettings_C_ResScale_Right_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3901[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_Left
struct UWBP_VideoSettings_C_ResScale_Left_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3940[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Presets_Right
struct UWBP_VideoSettings_C_Presets_Right_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetOverallScalabilityLevel_ReturnValue;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3973[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Presets_Left
struct UWBP_VideoSettings_C_Presets_Left_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetOverallScalabilityLevel_ReturnValue;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Framerate_Right
struct UWBP_VideoSettings_C_Framerate_Right_Params
{
public:
	int32                                        Local_Index;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                CallFunc_Map_Keys_Keys;                            // 0x10(0x10)(ReferenceParm, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Framerate_Left
struct UWBP_VideoSettings_C_Framerate_Left_Params
{
public:
	int32                                        Local_Index;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                CallFunc_Map_Keys_Keys;                            // 0x10(0x10)(ReferenceParm, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.DisplayMode_Right
struct UWBP_VideoSettings_C_DisplayMode_Right_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetFullscreenMode_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.DisplayMode_Left
struct UWBP_VideoSettings_C_DisplayMode_Left_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetFullscreenMode_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution_Right
struct UWBP_VideoSettings_C_Resolution_Right_Params
{
public:
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution_Left
struct UWBP_VideoSettings_C_Resolution_Left_Params
{
public:
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetButtons
struct UWBP_VideoSettings_C_ResetButtons_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x20(0x28)(None)
	class UTextBlock*                            CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            CallFunc_Array_Get_Item_1;                         // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AAF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                               CallFunc_Array_Get_Item_2;                         // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetTextColor
struct UWBP_VideoSettings_C_GetTextColor_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AD4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x38(0x28)(None)
};

// 0x30 (0x30 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.GetIndex
struct UWBP_VideoSettings_C_GetIndex_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedIndex;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UButton*>                       CallFunc_GetSettingsButtons_ReturnValue;           // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Nav_Set
struct UWBP_VideoSettings_C_Nav_Set_Params
{
public:
	bool                                         UseWidget;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               Button;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hovering;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CustomIndex;                                       // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B39[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Delta;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               Local_SelectedButton;                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_UseWidget;                                   // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Delta;                                       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_SelectedIndex;                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_CustomIndex;                                 // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_Hovering;                                    // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B41[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Index;                                       // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               Local_Button;                                      // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UButton*>                       CallFunc_GetSettingsButtons_ReturnValue;           // 0x48(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIndex_ReturnValue;                     // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTextBlock*>                    CallFunc_GetSettingsValues_ReturnValue;            // 0x68(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UTextBlock*>                    CallFunc_GetSettingsTitles_ReturnValue;            // 0x78(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B46[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UButton*>                       CallFunc_GetSettingsButtons_ReturnValue_1;         // 0x90(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UButton*>                       CallFunc_GetSettingsButtons_ReturnValue_2;         // 0xA0(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UButton*                               CallFunc_Array_Get_Item;                           // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USpinBox*>                      CallFunc_GetSpinBoxes_Array;                       // 0xC0(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class USpinBox*                              CallFunc_Array_Get_Item_1;                         // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B4D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USpinBox*>                      CallFunc_GetSpinBoxes_Array_1;                     // 0xE0(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UKeyboardModeNotifierComponent_C*      CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier; // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpinBox*                              CallFunc_Array_Get_Item_2;                         // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UButton*>                       CallFunc_GetSettingsButtons_ReturnValue_3;         // 0x108(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B59[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UButton*>                       CallFunc_GetSettingsButtons_ReturnValue_4;         // 0x120(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               CallFunc_Array_Get_Item_3;                         // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetTextColor_ReturnValue;                 // 0x148(0x28)(None)
	struct FSlateColor                           CallFunc_GetTextColor_ReturnValue_1;               // 0x170(0x28)(None)
	class UTextBlock*                            CallFunc_Array_Get_Item_4;                         // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            CallFunc_Array_Get_Item_5;                         // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               CallFunc_Array_Get_Item_6;                         // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Get_Button_Reso_ToolTipWidget
struct UWBP_VideoSettings_C_Get_Button_Reso_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Tooltip_C*                        CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Load Initial Values 
struct UWBP_VideoSettings_C_Load_Initial_Values__Params
{
public:
	bool                                         Local_SaveSettings;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.Navigate
struct UWBP_VideoSettings_C_Navigate_Params
{
public:
	bool                                         CustomIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Delta;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_39_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_VideoSettings_C_BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_39_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.EnableConfirmPopUp
struct UWBP_VideoSettings_C_EnableConfirmPopUp_Params
{
public:
	class UUI_VideoSettings_Confirm_C*           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.PreConstruct
struct UWBP_VideoSettings_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC4 (0xC4 - 0x0)
// Function WBP_VideoSettings.WBP_VideoSettings_C.ExecuteUbergraph_WBP_VideoSettings
struct UWBP_VideoSettings_C_ExecuteUbergraph_WBP_VideoSettings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUMGSequencePlayMode              Temp_byte_Variable;                                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_CustomIndex;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Index;                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Delta;                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_InValue;                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DA9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUMGSequencePlayMode              K2Node_Select_Default;                             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DAF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntPoint>                     CallFunc_GetSupportedFullscreenResolutions_Resolutions; // 0x48(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_GetSupportedFullscreenResolutions_ReturnValue; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x5C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_VideoSettings_Confirm_C*           K2Node_CustomEvent_Widget;                         // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x90(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsConsole_IsConsole;                   // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsConsole_IsConsole_1;                 // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_IndieModeTransition_C*             CallFunc_Create_ReturnValue;                       // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_9;                // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DC5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB4(0x10)(ZeroConstructor, NoDestructor)
};

}
}


