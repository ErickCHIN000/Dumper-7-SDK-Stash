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

// 0x2F4 (0x2F4 - 0x0)
// Function UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C.CalculateMaturityPercentage
struct UUMG_CropPlot_CultivationRow_C_CalculateMaturityPercentage_Params
{
public:
	float                                        PercentMature;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElapsedGrowthTime;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlantGrowthStates                Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_399F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthStatesRowHandle         Temp_struct_Variable;                              // 0xC(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFarmingGrowthStatesRowHandle         Temp_struct_Variable_1;                            // 0x24(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFarmingGrowthStatesRowHandle         Temp_struct_Variable_2;                            // 0x3C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFarmingGrowthStatesRowHandle         Temp_struct_Variable_3;                            // 0x54(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39B0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x70(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthState                   CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates; // 0x218(0x58)(None)
	enum class EValid                            CallFunc_GetFarmingGrowthStatesStruct_Paths;       // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthStatesRowHandle         K2Node_Select_Default;                             // 0x274(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthState                   CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates_1; // 0x290(0x58)(None)
	enum class EValid                            CallFunc_GetFarmingGrowthStatesStruct_Paths_1;     // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39DE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45A (0x45A - 0x0)
// Function UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C.SetupIcon
struct UUMG_CropPlot_CultivationRow_C_SetupIcon_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x8(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A96[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemRewards                          CallFunc_GetItemRewardsStruct_ItemRewards;         // 0x1B0(0x28)(None)
	enum class EValid                            CallFunc_GetItemRewardsStruct_Paths;               // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemRewardEntry                      CallFunc_Array_Get_Item;                           // 0x1DC(0x88)(NoDestructor)
	uint8                                        Pad_3AAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x268(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C.Tick
struct UUMG_CropPlot_CultivationRow_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C.ExecuteUbergraph_UMG_CropPlot_CultivationRow
struct UUMG_CropPlot_CultivationRow_C_ExecuteUbergraph_UMG_CropPlot_CultivationRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateMaturityPercentage_PercentMature; // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


