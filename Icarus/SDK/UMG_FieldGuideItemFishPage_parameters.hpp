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

// 0x19 (0x19 - 0x0)
// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.DoFishLinkClickedByRef
struct UUMG_FieldGuideItemFishPage_C_DoFishLinkClickedByRef_Params
{
public:
	struct FFishDataRowHandle                    Creature;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Discovered;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.SubItemClickedByRef
struct UUMG_FieldGuideItemFishPage_C_SubItemClickedByRef_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.SubItemClicked
struct UUMG_FieldGuideItemFishPage_C_SubItemClicked_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.PopulateFishDetail
struct UUMG_FieldGuideItemFishPage_C_PopulateFishDetail_Params
{
public:
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFieldGuideRecipeInfo>         RecipeRows;                                        // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FItemsStaticRowHandle>         OutputsForRecipe;                                  // 0x40(0x10)(Edit, BlueprintVisible)
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue_1;                     // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFishDataRowHandle                    CallFunc_GetFishData_ReturnValue;                  // 0x60(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3118[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x88(0x10)(ZeroConstructor, NoDestructor)
	struct FItemsStaticEnum                      CallFunc_MakeItemsStaticEnum_ReturnValue;          // 0x98(0x10)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsFreshWaterFish_ReturnValue;             // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuide_Fish_Entry_C*          CallFunc_Create_ReturnValue_2;                     // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticEnum                      CallFunc_MakeItemsStaticEnum_ReturnValue_1;        // 0xC8(0x10)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	struct FItemsStaticEnum                      CallFunc_MakeItemsStaticEnum_ReturnValue_2;        // 0xE8(0x10)(HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_StructToRowHandle_ReturnValue;            // 0xF8(0x18)(NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue_3;                     // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue;           // 0x120(0x18)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x138(0x10)(ZeroConstructor, NoDestructor)
	struct FItemsStaticEnum                      CallFunc_MakeItemsStaticEnum_ReturnValue_3;        // 0x148(0x10)(HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_StructToRowHandle_ReturnValue_1;          // 0x158(0x18)(NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_2;                   // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue_1;         // 0x178(0x18)(NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_3;                   // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3168[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemsStaticEnum                      K2Node_Select_Default;                             // 0x1A0(0x10)(HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_StructToRowHandle_ReturnValue_2;          // 0x1B0(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue_2;         // 0x1C8(0x18)(NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.InitFieldGuideView
struct UUMG_FieldGuideItemFishPage_C_InitFieldGuideView_Params
{
public:
	struct FItemsStaticRowHandle                 ItemIn;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryIn;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.ExecuteUbergraph_UMG_FieldGuideItemFishPage
struct UUMG_FieldGuideItemFishPage_C_ExecuteUbergraph_UMG_FieldGuideItemFishPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_Event_ItemIn;                               // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        K2Node_Event_CategoryIn;                           // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


