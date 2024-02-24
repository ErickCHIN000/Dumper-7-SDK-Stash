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

// 0x18 (0x18 - 0x0)
// Function FishDataRow.FishDataRow_C.SetFish
struct UFishDataRow_C_SetFish_Params
{
public:
	struct FFishDataRowHandle                    NewFish;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8AA (0x8AA - 0x0)
// Function FishDataRow.FishDataRow_C.ExecuteUbergraph_FishDataRow
struct UFishDataRow_C_ExecuteUbergraph_FishDataRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFishDataRowHandle                    K2Node_CustomEvent_NewFish;                        // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFishData                             CallFunc_GetFishDataStruct_FishData;               // 0x20(0xC8)(None)
	enum class EValid                            CallFunc_GetFishDataStruct_Paths;                  // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_171[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0xF0(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_177[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemStaticData                       CallFunc_GetItemsStaticStruct_ItemsStatic;         // 0x2E8(0x4D0)(None)
	enum class EValid                            CallFunc_GetItemsStaticStruct_Paths;               // 0x7B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x7B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableStruct_Itemable;               // 0x7C0(0xE8)(None)
	enum class EValid                            CallFunc_GetItemableStruct_Paths;                  // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x8A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


