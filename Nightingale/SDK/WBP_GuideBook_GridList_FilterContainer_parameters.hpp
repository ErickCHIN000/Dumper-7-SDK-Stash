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

// 0x90 (0x90 - 0x0)
// Function WBP_GuideBook_GridList_FilterContainer.WBP_GuideBook_GridList_FilterContainer_C.UpdateFilters
struct UWBP_GuideBook_GridList_FilterContainer_C_UpdateFilters_Params
{
public:
	struct FGameplayTag                          CategoryTag;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6130[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_GuideBook_GridList_Filter_C*      CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6141[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_GuideBookComponent_C*              CallFunc_GetLocalPlayerGuideBookComponent_GuideBook; // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMenuDataRelevantFilter>       CallFunc_GetRelevantFiltersForCategory_ReturnValue; // 0x30(0x10)(ReferenceParm)
	struct FMenuDataRelevantFilter               CallFunc_Array_Get_Item;                           // 0x40(0x40)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6168[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_GuideBook_GridList_FilterContainer.WBP_GuideBook_GridList_FilterContainer_C.ExecuteUbergraph_WBP_GuideBook_GridList_FilterContainer
struct UWBP_GuideBook_GridList_FilterContainer_C_ExecuteUbergraph_WBP_GuideBook_GridList_FilterContainer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6216[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_GuideBookComponent_C*              CallFunc_GetLocalPlayerGuideBookComponent_GuideBook; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_GuideBookComponent_C*              CallFunc_GetLocalPlayerGuideBookComponent_GuideBook_1; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetActiveCategory_ReturnValue;            // 0x18(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


