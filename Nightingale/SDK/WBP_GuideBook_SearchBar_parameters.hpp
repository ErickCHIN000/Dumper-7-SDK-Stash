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

// 0x8 (0x8 - 0x0)
// Function WBP_GuideBook_SearchBar.WBP_GuideBook_SearchBar_C.GetDefaultFocusWidget
struct UWBP_GuideBook_SearchBar_C_GetDefaultFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_GuideBook_SearchBar.WBP_GuideBook_SearchBar_C.SetSearchText
struct UWBP_GuideBook_SearchBar_C_SetSearchText_Params
{
public:
	class FText                                  NewSearchText;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_GuideBook_SearchBar.WBP_GuideBook_SearchBar_C.BndEvt__WBP_GuideBook_SearchBar_ETxt_SearchText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
struct UWBP_GuideBook_SearchBar_C_BndEvt__WBP_GuideBook_SearchBar_ETxt_SearchText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_GuideBook_SearchBar.WBP_GuideBook_SearchBar_C.BndEvt__WBP_GuideBook_SearchBar_ETxt_SearchText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
struct UWBP_GuideBook_SearchBar_C_BndEvt__WBP_GuideBook_SearchBar_ETxt_SearchText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_GuideBook_SearchBar.WBP_GuideBook_SearchBar_C.OnRemovedFromFocusPath
struct UWBP_GuideBook_SearchBar_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_GuideBook_SearchBar.WBP_GuideBook_SearchBar_C.OnAddedToFocusPath
struct UWBP_GuideBook_SearchBar_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function WBP_GuideBook_SearchBar.WBP_GuideBook_SearchBar_C.ExecuteUbergraph_WBP_GuideBook_SearchBar
struct UWBP_GuideBook_SearchBar_C_ExecuteUbergraph_WBP_GuideBook_SearchBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x8(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x28(0x18)(ConstParm)
	class UBP_GuideBookComponent_C*              CallFunc_GetLocalPlayerGuideBookComponent_GuideBook; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x58(0x8)(NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x60(0x8)(NoDestructor)
};

}
}


