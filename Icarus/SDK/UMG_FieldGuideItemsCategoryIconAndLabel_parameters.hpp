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

// 0xC0 (0xC0 - 0x0)
// Function UMG_FieldGuideItemsCategoryIconAndLabel.UMG_FieldGuideItemsCategoryIconAndLabel_C.ExecuteUbergraph_UMG_FieldGuideItemsCategoryIconAndLabel
struct UUMG_FieldGuideItemsCategoryIconAndLabel_C_ExecuteUbergraph_UMG_FieldGuideItemsCategoryIconAndLabel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideCategories                 CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories; // 0x8(0x88)(None)
	enum class EValid                            CallFunc_GetFieldGuideCategoriesStruct_Paths;      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C5A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_Get_Icon_or_Missing_Output;               // 0x98(0x28)(HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuideItemsCategoryIconAndLabel.UMG_FieldGuideItemsCategoryIconAndLabel_C.FilterItems__DelegateSignature
struct UUMG_FieldGuideItemsCategoryIconAndLabel_C_FilterItems__DelegateSignature_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


