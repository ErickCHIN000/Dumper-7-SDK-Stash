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

// 0x1 (0x1 - 0x0)
// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.Set Rating Button Style
struct UUMG_PlayerListEntry_C_Set_Rating_Button_Style_Params
{
public:
	bool                                         Liked;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.IsSettled
struct UUMG_PlayerListEntry_C_IsSettled_Params
{
public:
	bool                                         Settled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.OnFailure_F261DD19407D95F6521E3A9C07B7A8CF
struct UUMG_PlayerListEntry_C_OnFailure_F261DD19407D95F6521E3A9C07B7A8CF_Params
{
public:
	struct FGetIcarusPlayerPersonaResult         Result;                                            // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.OnSuccess_F261DD19407D95F6521E3A9C07B7A8CF
struct UUMG_PlayerListEntry_C_OnSuccess_F261DD19407D95F6521E3A9C07B7A8CF_Params
{
public:
	struct FGetIcarusPlayerPersonaResult         Result;                                            // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.PreConstruct
struct UUMG_PlayerListEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.ShowPlayerDetails
struct UUMG_PlayerListEntry_C_ShowPlayerDetails_Params
{
public:
	struct FAssociatedMemberInfo                 MemberInfo;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x363 (0x363 - 0x0)
// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.ExecuteUbergraph_UMG_PlayerListEntry
struct UUMG_PlayerListEntry_C_ExecuteUbergraph_UMG_PlayerListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5704[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGetIcarusPlayerPersonaResult         K2Node_CustomEvent_Result_1;                       // 0x8(0x38)(None)
	struct FGetIcarusPlayerPersonaResult         K2Node_CustomEvent_Result;                         // 0x40(0x38)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x78(0x10)(ZeroConstructor, NoDestructor)
	struct FGetIcarusPlayerPersonaResult         Temp_struct_Variable;                              // 0x88(0x38)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5717[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xC8(0x40)(HasGetValueTypeHash)
	struct FAssociatedMemberInfo                 K2Node_CustomEvent_MemberInfo;                     // 0x108(0x40)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x148(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_CalculatePlayerLevel_ReturnValue;         // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_572D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URequestPlayerPersona*                 CallFunc_IcarusRequestPlayerPersona_ReturnValue;   // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x168(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5739[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x188(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1A0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1E0(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1F8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x210(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x250(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x268(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x278(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2B8(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x2D0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x2E0(0x18)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_DynamicCast_AsIcarus_Player_Controller;     // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5764[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineProfileUser                    CallFunc_GetActiveUserProfile_ReturnValue;         // 0x318(0x48)(ConstParm)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


