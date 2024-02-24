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
// Function UMG_TalentFilter.UMG_TalentFilter_C.UpdateTextFilter
struct UUMG_TalentFilter_C_UpdateTextFilter_Params
{
public:
	class FText                                  TextIn;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x6D (0x6D - 0x0)
// Function UMG_TalentFilter.UMG_TalentFilter_C.HighlightTalents
struct UUMG_TalentFilter_C_HighlightTalents_Params
{
public:
	class FString                                FilterQuery;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x18(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTalentTreeWidget*>             CallFunc_GetTalentTreeWidgets_ReturnValue;         // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentTreeWidget*                     CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function UMG_TalentFilter.UMG_TalentFilter_C.Setup
struct UUMG_TalentFilter_C_Setup_Params
{
public:
	class UTalentViewInterface*                  View;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowClear;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG_TalentFilter.UMG_TalentFilter_C.BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_4_OnSearchBoxChangedEvent__DelegateSignature
struct UUMG_TalentFilter_C_BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_4_OnSearchBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x19 (0x19 - 0x0)
// Function UMG_TalentFilter.UMG_TalentFilter_C.BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_5_OnSearchBoxCommittedEvent__DelegateSignature
struct UUMG_TalentFilter_C_BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_5_OnSearchBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UMG_TalentFilter.UMG_TalentFilter_C.ExecuteUbergraph_UMG_TalentFilter
struct UUMG_TalentFilter_C_ExecuteUbergraph_UMG_TalentFilter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3822[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x8(0x18)(ConstParm)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x20(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


