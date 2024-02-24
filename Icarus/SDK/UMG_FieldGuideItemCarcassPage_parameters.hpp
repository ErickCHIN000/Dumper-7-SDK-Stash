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

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.SubItemClickedByRef
struct UUMG_FieldGuideItemCarcassPage_C_SubItemClickedByRef_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.SubItemClicked
struct UUMG_FieldGuideItemCarcassPage_C_SubItemClicked_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.PopulateResourceDetail
struct UUMG_FieldGuideItemCarcassPage_C_PopulateResourceDetail_Params
{
public:
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFieldGuideRecipeInfo>         RecipeRows;                                        // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FItemsStaticRowHandle>         OutputsForRecipe;                                  // 0x40(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BB7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue;                       // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x7C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1BE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemsStaticRowHandle>         CallFunc_GetCorpseVestige_ReturnValue;             // 0x90(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item;                           // 0xA8(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue;           // 0xC4(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xE8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemsStaticRowHandle>         CallFunc_GetCorpseSkinningBenchRewards_ReturnValue; // 0x100(0x10)(ReferenceParm)
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item_1;                         // 0x110(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue_1;         // 0x12C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue_1;                     // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x158(0x10)(ZeroConstructor, NoDestructor)
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue_2;                     // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemsStaticRowHandle>         CallFunc_GetCorpseSkinningKnifeRewards_ReturnValue; // 0x170(0x10)(ReferenceParm)
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item_2;                         // 0x180(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C4A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue_2;         // 0x1A0(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1C0(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FItemsStaticRowHandle>         CallFunc_GetKnivesCanHarvestWith_ReturnValue;      // 0x1D0(0x10)(ReferenceParm)
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item_3;                         // 0x1E0(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue_3;         // 0x200(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue_3;                     // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.InitFieldGuideView
struct UUMG_FieldGuideItemCarcassPage_C_InitFieldGuideView_Params
{
public:
	struct FItemsStaticRowHandle                 ItemIn;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryIn;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.ExecuteUbergraph_UMG_FieldGuideItemCarcassPage
struct UUMG_FieldGuideItemCarcassPage_C_ExecuteUbergraph_UMG_FieldGuideItemCarcassPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_Event_ItemIn;                               // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        K2Node_Event_CategoryIn;                           // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


