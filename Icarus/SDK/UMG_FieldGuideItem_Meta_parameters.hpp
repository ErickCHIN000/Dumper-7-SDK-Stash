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
// Function UMG_FieldGuideItem_Meta.UMG_FieldGuideItem_Meta_C.SetHeaderText
struct UUMG_FieldGuideItem_Meta_C_SetHeaderText_Params
{
public:
	class FText                                  TextIn;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x13A (0x13A - 0x0)
// Function UMG_FieldGuideItem_Meta.UMG_FieldGuideItem_Meta_C.PopulateMetaDetail
struct UUMG_FieldGuideItem_Meta_C_PopulateMetaDetail_Params
{
public:
	bool                                         SecondItemVis;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FirstItemVis;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFieldGuideMetaDataRowHandle          CallFunc_GetItemMeta_ReturnValue;                  // 0xC(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9CA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideMetaData                   CallFunc_GetFieldGuideMetaDataStruct_FieldGuideMetaData; // 0x28(0xB0)(None)
	enum class EValid                            CallFunc_GetFieldGuideMetaDataStruct_Paths;        // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xDE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E3[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_Get_Icon_or_Missing_Output;               // 0xE0(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9EB[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_Get_Icon_or_Missing_Output_1;             // 0x110(0x28)(HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItem_Meta.UMG_FieldGuideItem_Meta_C.InitFieldGuideView
struct UUMG_FieldGuideItem_Meta_C_InitFieldGuideView_Params
{
public:
	struct FItemsStaticRowHandle                 ItemIn;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryIn;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UMG_FieldGuideItem_Meta.UMG_FieldGuideItem_Meta_C.ExecuteUbergraph_UMG_FieldGuideItem_Meta
struct UUMG_FieldGuideItem_Meta_C_ExecuteUbergraph_UMG_FieldGuideItem_Meta_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_Event_ItemIn;                               // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        K2Node_Event_CategoryIn;                           // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


