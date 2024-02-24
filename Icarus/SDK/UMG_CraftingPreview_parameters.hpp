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
// Function UMG_CraftingPreview.UMG_CraftingPreview_C.Recipe
struct UUMG_CraftingPreview_C_Recipe_Params
{
public:
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CraftingPreview.UMG_CraftingPreview_C.GetRecipe
struct UUMG_CraftingPreview_C_GetRecipe_Params
{
public:
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x678 (0x678 - 0x0)
// Function UMG_CraftingPreview.UMG_CraftingPreview_C.Set Recipe
struct UUMG_CraftingPreview_C_Set_Recipe_Params
{
public:
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FProcessorRecipe                      CallFunc_GetProcessorRecipesStruct_ProcessorRecipes; // 0x18(0x2E8)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetProcessorRecipesStruct_Paths;          // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x302(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F25[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingOutput                       CallFunc_Array_Get_Item;                           // 0x308(0x58)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusDataTable*                      CallFunc_GetDataTable_ReturnValue;                 // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x378(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x569(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F64[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0x570(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0x658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x659(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F7A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x660(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CraftingPreview.UMG_CraftingPreview_C.RecipeClicked
struct UUMG_CraftingPreview_C_RecipeClicked_Params
{
public:
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function UMG_CraftingPreview.UMG_CraftingPreview_C.ExecuteUbergraph_UMG_CraftingPreview
struct UUMG_CraftingPreview_C_ExecuteUbergraph_UMG_CraftingPreview_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	struct FProcessorRecipesRowHandle            K2Node_CustomEvent_Recipe;                         // 0x14(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


