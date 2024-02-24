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

// 0x8 (0x8 - 0x0)
// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.GetOverlay
struct UUMG_RecipeElementNonInteractive_C_GetOverlay_Params
{
public:
	class UOverlay*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA1C (0xA1C - 0x0)
// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.InitialiseIcons
struct UUMG_RecipeElementNonInteractive_C_InitialiseIcons_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMG_RecipeElementImage_C*             CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProcessorRecipe                      CallFunc_GetProcessorRecipesStruct_ProcessorRecipes; // 0x28(0x2E8)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetProcessorRecipesStruct_Paths;          // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ACA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FResourceItem>                 CallFunc_GetResourceInputs_ReturnValue;            // 0x318(0x10)(ReferenceParm)
	struct FResourceItem                         CallFunc_Array_Get_Item;                           // 0x328(0x8)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AD5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_RecipeElementImage_C*             CallFunc_CreateResourceWidget_ReturnValue;         // 0x338(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemData>                     CallFunc_GetProcessorInputs_ReturnValue;           // 0x340(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FItemData                             CallFunc_Array_Get_Item_1;                         // 0x350(0x1F0)(ContainsInstancedReference)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x540(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_CreateInputItem_Name;                     // 0x548(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_CreateInputItem_Icon;                     // 0x560(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             Temp_wildcard_Variable;                            // 0x590(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x780(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AF5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CreateOutputItem_Name;                    // 0x788(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_CreateOutputItem_Icon;                    // 0x7A0(0x28)(HasGetValueTypeHash)
	TArray<struct FItemData>                     CallFunc_GetProcessorOutputs_ReturnValue;          // 0x7C8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x7D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CallFunc_Array_Get_Item_2;                         // 0x7E0(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B04[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x9D4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B07[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetResourceIcon_Icon;                     // 0x9E8(0x28)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xA10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xA14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B15[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xA18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.GetProcessorRecipe
struct UUMG_RecipeElementNonInteractive_C_GetProcessorRecipe_Params
{
public:
	struct FProcessorRecipesRowHandle            ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.GetResourceIcon
struct UUMG_RecipeElementNonInteractive_C_GetResourceIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
	class UTexture2D*                            RecipeIcon;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EIcarusResourceType               Temp_wildcard_Variable;                            // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B73[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetResourceImage_ReturnValue;             // 0x38(0x28)(HasGetValueTypeHash)
	TArray<struct FResourceItem>                 CallFunc_GetResourceOutputs_ReturnValue;           // 0x60(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourceItem                         CallFunc_Array_Get_Item;                           // 0x74(0x8)(NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.BP_OnItemExpansionChanged
struct UUMG_RecipeElementNonInteractive_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.BP_OnItemSelectionChanged
struct UUMG_RecipeElementNonInteractive_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.PreConstruct
struct UUMG_RecipeElementNonInteractive_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.ExecuteUbergraph_UMG_RecipeElementNonInteractive
struct UUMG_RecipeElementNonInteractive_C_ExecuteUbergraph_UMG_RecipeElementNonInteractive_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C0C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C13[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FResourceItem>                 CallFunc_GetResourceOutputs_ReturnValue;           // 0x20(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C16[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


