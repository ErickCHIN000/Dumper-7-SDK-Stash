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
// Function AddResourceComboRow.AddResourceComboRow_C.LessThan
struct UAddResourceComboRow_C_LessThan_Params
{
public:
	class UObject*                               Other;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_172[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAddResourceComboRow_C*                K2Node_DynamicCast_AsAdd_Resource_Combo_Row;       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LexicalLess_Text_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x259 (0x259 - 0x0)
// Function AddResourceComboRow.AddResourceComboRow_C.ExecuteUbergraph_AddResourceComboRow
struct UAddResourceComboRow_C_ExecuteUbergraph_AddResourceComboRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_189[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x8(0x18)(None)
	struct FItemTemplateRowHandle                CallFunc_MakeItemTemplate_ReturnValue;             // 0x20(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x38(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetItemIcon_Icon;                         // 0x230(0x28)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


