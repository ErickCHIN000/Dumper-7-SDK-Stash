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
// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.SubItemClickedByRef
struct UUMG_FieldGuideItemPlantsPage_C_SubItemClickedByRef_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.SubItemClicked
struct UUMG_FieldGuideItemPlantsPage_C_SubItemClicked_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.PopulatePlantDetail
struct UUMG_FieldGuideItemPlantsPage_C_PopulatePlantDetail_Params
{
public:
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFieldGuideRecipeInfo>         RecipeRows;                                        // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FItemsStaticRowHandle>         OutputsForRecipe;                                  // 0x40(0x10)(Edit, BlueprintVisible)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor)
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_GetWorkshopSeedPackFromPlant_ReturnValue; // 0x68(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue;           // 0x80(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AB6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemableRowHandle                    CallFunc_GetSeedDescriptionForPlant_ReturnValue;   // 0xA0(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AC2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xBC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_AC9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue_1;                     // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemsStaticRowHandle>         CallFunc_GetAllCropPlots_ReturnValue;              // 0xD8(0x10)(ReferenceParm)
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item;                           // 0xE8(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue_1;         // 0x104(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x124(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AE9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuideItemResourceDescription_C* CallFunc_Create_ReturnValue_2;                     // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.InitFieldGuideView
struct UUMG_FieldGuideItemPlantsPage_C_InitFieldGuideView_Params
{
public:
	struct FItemsStaticRowHandle                 ItemIn;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryIn;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.ExecuteUbergraph_UMG_FieldGuideItemPlantsPage
struct UUMG_FieldGuideItemPlantsPage_C_ExecuteUbergraph_UMG_FieldGuideItemPlantsPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_Event_ItemIn;                               // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        K2Node_Event_CategoryIn;                           // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


