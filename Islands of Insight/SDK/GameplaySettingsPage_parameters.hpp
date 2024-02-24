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

// 0x98 (0x98 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.CheckOnlyNumbers
struct UGameplaySettingsPage_C_CheckOnlyNumbers_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UEditableTextBox*                      Target;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F74[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x38(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue_2;            // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsNumeric_ReturnValue;                    // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F7D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.GetText_0
struct UGameplaySettingsPage_C_GetText_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F98[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x20(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__LanguageSettingsPage_FPSRadioSelect_K2Node_ComponentBoundEvent_1_RadioSelectedSignature__DelegateSignature
struct UGameplaySettingsPage_C_BndEvt__LanguageSettingsPage_FPSRadioSelect_K2Node_ComponentBoundEvent_1_RadioSelectedSignature__DelegateSignature_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__LanguageSettingsPage_PingRadioSelect_K2Node_ComponentBoundEvent_3_RadioSelectedSignature__DelegateSignature
struct UGameplaySettingsPage_C_BndEvt__LanguageSettingsPage_PingRadioSelect_K2Node_ComponentBoundEvent_3_RadioSelectedSignature__DelegateSignature_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__GameplaySettingsPage_SprintModeRadioSelect_K2Node_ComponentBoundEvent_17_RadioSelectedSignature__DelegateSignature
struct UGameplaySettingsPage_C_BndEvt__GameplaySettingsPage_SprintModeRadioSelect_K2Node_ComponentBoundEvent_17_RadioSelectedSignature__DelegateSignature_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__GameplaySettingsPage_AmbassadorRadioSelect_K2Node_ComponentBoundEvent_5_RadioSelectedSignature__DelegateSignature
struct UGameplaySettingsPage_C_BndEvt__GameplaySettingsPage_AmbassadorRadioSelect_K2Node_ComponentBoundEvent_5_RadioSelectedSignature__DelegateSignature_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__GameplaySettingsPage_InsightsRadioSelect_K2Node_ComponentBoundEvent_15_RadioSelectedSignature__DelegateSignature
struct UGameplaySettingsPage_C_BndEvt__GameplaySettingsPage_InsightsRadioSelect_K2Node_ComponentBoundEvent_15_RadioSelectedSignature__DelegateSignature_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__GameplaySettingsPage_FPSRadioSelect_1_K2Node_ComponentBoundEvent_3_RadioSelectedSignature__DelegateSignature
struct UGameplaySettingsPage_C_BndEvt__GameplaySettingsPage_FPSRadioSelect_1_K2Node_ComponentBoundEvent_3_RadioSelectedSignature__DelegateSignature_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__GameplaySettingsPage_PartyGridRadioSelect_K2Node_ComponentBoundEvent_11_RadioSelectedSignature__DelegateSignature
struct UGameplaySettingsPage_C_BndEvt__GameplaySettingsPage_PartyGridRadioSelect_K2Node_ComponentBoundEvent_11_RadioSelectedSignature__DelegateSignature_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__GameplaySettingsPage_CrouchModeRadioSelect_K2Node_ComponentBoundEvent_16_RadioSelectedSignature__DelegateSignature
struct UGameplaySettingsPage_C_BndEvt__GameplaySettingsPage_CrouchModeRadioSelect_K2Node_ComponentBoundEvent_16_RadioSelectedSignature__DelegateSignature_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function GameplaySettingsPage.GameplaySettingsPage_C.ExecuteUbergraph_GameplaySettingsPage
struct UGameplaySettingsPage_C_ExecuteUbergraph_GameplaySettingsPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1070[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_Value_7;                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_6;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_5;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_4;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_3;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_2;                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_1;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value;                  // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_3;           // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_4;           // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_6;   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_7;   // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_5;           // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_6;           // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_8;   // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_9;   // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_7;           // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_10;  // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_11;  // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_12;  // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_13;  // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_14;  // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_15;  // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISSettings*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_16;  // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


