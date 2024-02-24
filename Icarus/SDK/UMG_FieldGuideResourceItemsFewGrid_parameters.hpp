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
// Function UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C.SubItemClicked
struct UUMG_FieldGuideResourceItemsFewGrid_C_SubItemClicked_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18C (0x18C - 0x0)
// Function UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C.Populate Resource Detail
struct UUMG_FieldGuideResourceItemsFewGrid_C_Populate_Resource_Detail_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2895[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuideItemResourceIcon_C*     CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategories                 CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories; // 0x28(0x88)(None)
	enum class EValid                            CallFunc_GetFieldGuideCategoriesStruct_Paths;      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28A4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemsStaticRowHandle>         CallFunc_GetAllItemsForCategory_ReturnValue;       // 0xB8(0x10)(ReferenceParm)
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item;                           // 0xC8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategories                 CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories_1; // 0xE0(0x88)(None)
	enum class EValid                            CallFunc_GetFieldGuideCategoriesStruct_Paths_1;    // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28B3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x17C(0x10)(ZeroConstructor, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C.InitFieldGuideView
struct UUMG_FieldGuideResourceItemsFewGrid_C_InitFieldGuideView_Params
{
public:
	struct FItemsStaticRowHandle                 ItemIn;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryIn;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C.ExecuteUbergraph_UMG_FieldGuideResourceItemsFewGrid
struct UUMG_FieldGuideResourceItemsFewGrid_C_ExecuteUbergraph_UMG_FieldGuideResourceItemsFewGrid_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_Event_ItemIn;                               // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        K2Node_Event_CategoryIn;                           // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


