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

// 0x168 (0x168 - 0x0)
// Function UMG_FieldGuideItemResourceDescription.UMG_FieldGuideItemResourceDescription_C.ExecuteUbergraph_UMG_FieldGuideItemResourceDescription
struct UUMG_FieldGuideItemResourceDescription_C_ExecuteUbergraph_UMG_FieldGuideItemResourceDescription_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C6E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_Get_Icon_or_Missing_Output;               // 0x8(0x28)(HasGetValueTypeHash)
	struct FItemableData                         CallFunc_GetItemableStruct_Itemable;               // 0x30(0xE8)(None)
	enum class EValid                            CallFunc_GetItemableStruct_Paths;                  // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C91[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x120(0x18)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_Get_Icon_or_Missing_Output_1;             // 0x140(0x28)(HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemResourceDescription.UMG_FieldGuideItemResourceDescription_C.FilterItems__DelegateSignature
struct UUMG_FieldGuideItemResourceDescription_C_FilterItems__DelegateSignature_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        Category;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 Item;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


