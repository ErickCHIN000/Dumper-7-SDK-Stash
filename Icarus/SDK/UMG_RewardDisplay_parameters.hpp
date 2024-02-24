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

// 0x38 (0x38 - 0x0)
// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetRewardColor
struct UUMG_RewardDisplay_C_SetRewardColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x10(0x28)(None)
};

// 0x29 (0x29 - 0x0)
// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetRewardIcon
struct UUMG_RewardDisplay_C_SetRewardIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetCoinReward
struct UUMG_RewardDisplay_C_SetCoinReward_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8DB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x10A (0x10A - 0x0)
// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetExoticReward
struct UUMG_RewardDisplay_C_SetExoticReward_Params
{
public:
	struct FMetaResource                         Exotic;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMetaCurrencyRowHandle                CallFunc_MakeMetaCurrency_ReturnValue;             // 0x38(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FMetaCurrency                         CallFunc_GetMetaCurrencyStruct_MetaCurrency;       // 0x50(0xB8)(None)
	enum class EValid                            CallFunc_GetMetaCurrencyStruct_Paths;              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x530 (0x530 - 0x0)
// Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetItemReward
struct UUMG_RewardDisplay_C_SetItemReward_Params
{
public:
	struct FMetaItem                             MetaItem;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemData                             Item;                                              // 0x40(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FItemData                             CallFunc_ConvertToItem_ReturnValue;                // 0x230(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemPropertyValue_IntValue;            // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths;               // 0x424(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0x428(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x511(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x512(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_96C[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x518(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function UMG_RewardDisplay.UMG_RewardDisplay_C.ExecuteUbergraph_UMG_RewardDisplay
struct UUMG_RewardDisplay_C_ExecuteUbergraph_UMG_RewardDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


