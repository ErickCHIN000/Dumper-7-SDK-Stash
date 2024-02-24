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

// 0x1F4 (0x1F4 - 0x0)
// Function UMG_ChallengeProgressPopup.UMG_ChallengeProgressPopup_C.Update
struct UUMG_ChallengeProgressPopup_C_Update_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                        ProgressedAmount;                                  // 0x1F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4E4 (0x4E4 - 0x0)
// Function UMG_ChallengeProgressPopup.UMG_ChallengeProgressPopup_C.ExecuteUbergraph_UMG_ChallengeProgressPopup
struct UUMG_ChallengeProgressPopup_C_ExecuteUbergraph_UMG_ChallengeProgressPopup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             K2Node_CustomEvent_Item;                           // 0x10(0x1F0)(ContainsInstancedReference)
	int32                                        K2Node_CustomEvent_ProgressedAmount;               // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_391B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0x208(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLivingItemSlotState>          CallFunc_GetLivingItemSlotStates_Slots;            // 0x2F8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetLivingItemSlotStates_ReturnValue;      // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3937[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemSlotState                  CallFunc_Array_Get_Item;                           // 0x310(0x98)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3947[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChallenge                            CallFunc_GetChallengesStruct_Challenges;           // 0x3B0(0x70)(None)
	enum class EValid                            CallFunc_GetChallengesStruct_Paths;                // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3955[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x428(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x468(0x40)(HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3970[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x4B0(0x10)(ReferenceParm)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3983[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x4C8(0x18)(None)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


