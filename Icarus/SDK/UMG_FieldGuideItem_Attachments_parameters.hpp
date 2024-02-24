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
// Function UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C.SubItemClicked
struct UUMG_FieldGuideItem_Attachments_C_SubItemClicked_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        Category;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 Item;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x75 (0x75 - 0x0)
// Function UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C.PopulateAttachmentView
struct UUMG_FieldGuideItem_Attachments_C_PopulateAttachmentView_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_455A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemsStaticRowHandle>         CallFunc_GetAttachments_ReturnValue;               // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item;                           // 0x3C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCategoryForItem_ReturnValue;           // 0x58(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C.InitFieldGuideView
struct UUMG_FieldGuideItem_Attachments_C_InitFieldGuideView_Params
{
public:
	struct FItemsStaticRowHandle                 ItemIn;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryIn;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C.ExecuteUbergraph_UMG_FieldGuideItem_Attachments
struct UUMG_FieldGuideItem_Attachments_C_ExecuteUbergraph_UMG_FieldGuideItem_Attachments_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_Event_ItemIn;                               // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        K2Node_Event_CategoryIn;                           // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


