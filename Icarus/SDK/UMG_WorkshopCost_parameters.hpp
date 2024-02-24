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

// 0x4 (0x4 - 0x0)
// Function UMG_WorkshopCost.UMG_WorkshopCost_C.UpdateValue
struct UUMG_WorkshopCost_C_UpdateValue_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_WorkshopCost.UMG_WorkshopCost_C.PreConstruct
struct UUMG_WorkshopCost_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x138 (0x138 - 0x0)
// Function UMG_WorkshopCost.UMG_WorkshopCost_C.ExecuteUbergraph_UMG_WorkshopCost
struct UUMG_WorkshopCost_C_ExecuteUbergraph_UMG_WorkshopCost_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaCurrency                         CallFunc_GetMetaCurrencyStruct_MetaCurrency;       // 0x8(0xB8)(None)
	enum class EValid                            CallFunc_GetMetaCurrencyStruct_Paths;              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A23[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0xC4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xD8(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xF0(0x28)(None)
	int32                                        K2Node_CustomEvent_Amount;                         // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x120(0x18)(None)
};

}
}


