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
// Function UMG_TalentTooltip_Group.UMG_TalentTooltip_Group_C.PreConstruct
struct UUMG_TalentTooltip_Group_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4DB (0x4DB - 0x0)
// Function UMG_TalentTooltip_Group.UMG_TalentTooltip_Group_C.ExecuteUbergraph_UMG_TalentTooltip_Group
struct UUMG_TalentTooltip_Group_C_ExecuteUbergraph_UMG_TalentTooltip_Group_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x8(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FTalentsRowHandleFTalentsRowHandle_ReturnValue; // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FProcessorRecipesRowHandle            CallFunc_GetTalentRecipeSlow_ReturnValue;          // 0x13C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProcessorRecipe                      CallFunc_GetProcessorRecipesStruct_ProcessorRecipes; // 0x158(0x2E8)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetProcessorRecipesStruct_Paths;          // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x441(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C53[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRecipeSetsRowHandle                  CallFunc_Array_Get_Item;                           // 0x444(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x45C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRecipeSet                            CallFunc_GetRecipeSetsStruct_RecipeSets;           // 0x460(0x78)(None)
	enum class EValid                            CallFunc_GetRecipeSetsStruct_Paths;                // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x4D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x4DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


