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

// 0xD8 (0xD8 - 0x0)
// Function WBP_DB_Tooltip_SchematicRecipe.WBP_DB_Tooltip_SchematicRecipe_C.PopulateRequirements
struct UWBP_DB_Tooltip_SchematicRecipe_C_PopulateRequirements_Params
{
public:
	TArray<struct FStructureResourceRequirements> InputPin;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureResourceRequirements        CallFunc_Array_Get_Item;                           // 0x20(0x48)(ContainsInstancedReference)
	class FText                                  CallFunc_ResourceRequirementToUIData_ResourceTraits; // 0x68(0x18)(None)
	class FText                                  CallFunc_ResourceRequirementToUIData_ResourceQuantity; // 0x80(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_DB_RecipeRequirementsListing_C*   CallFunc_Create_ReturnValue;                       // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_DB_Tooltip_SchematicRecipe.WBP_DB_Tooltip_SchematicRecipe_C.PreConstruct
struct UWBP_DB_Tooltip_SchematicRecipe_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3F2 (0x3F2 - 0x0)
// Function WBP_DB_Tooltip_SchematicRecipe.WBP_DB_Tooltip_SchematicRecipe_C.ExecuteUbergraph_WBP_DB_Tooltip_SchematicRecipe
struct UWBP_DB_Tooltip_SchematicRecipe_C_ExecuteUbergraph_WBP_DB_Tooltip_SchematicRecipe_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureDataFromStructureAssetReference_IsValid; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A32[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        CallFunc_GetStructureDataFromStructureAssetReference_OutData; // 0x10(0x3E0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x3F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


