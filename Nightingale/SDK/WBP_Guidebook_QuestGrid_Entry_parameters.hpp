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
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.SetBuildBookSelectedWidgetEntry
struct UWBP_Guidebook_QuestGrid_Entry_C_SetBuildBookSelectedWidgetEntry_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_GuideBookComponent_C*              CallFunc_GetLocalPlayerGuideBookComponent_GuideBook; // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.OnRemovedFromFocusPath
struct UWBP_Guidebook_QuestGrid_Entry_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_6142[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0xD0)(None)
};

// 0xE1 (0xE1 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.OnAddedToFocusPath
struct UWBP_Guidebook_QuestGrid_Entry_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_61A0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0xD0)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.OnMouseLeave
struct UWBP_Guidebook_QuestGrid_Entry_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.OnMouseEnter
struct UWBP_Guidebook_QuestGrid_Entry_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.GetDefaultFocusWidget
struct UWBP_Guidebook_QuestGrid_Entry_C_GetDefaultFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.Initialize
struct UWBP_Guidebook_QuestGrid_Entry_C_Initialize_Params
{
public:
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData; // 0x0(0x48)(None)
	bool                                         CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Guidebook_QuestGrid_Entry_C_BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Guidebook_QuestGrid_Entry_C_BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.BndEvt__WBP_Guidebook_QuestGrid_Entry_CBU_Select_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Guidebook_QuestGrid_Entry_C_BndEvt__WBP_Guidebook_QuestGrid_Entry_CBU_Select_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1E1 (0x1E1 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.ExecuteUbergraph_WBP_Guidebook_QuestGrid_Entry
struct UWBP_Guidebook_QuestGrid_Entry_C_ExecuteUbergraph_WBP_Guidebook_QuestGrid_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x30(0xD0)(None)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6408[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x110(0xD0)(None)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.GuideBookQuestTrackingChanged__DelegateSignature
struct UWBP_Guidebook_QuestGrid_Entry_C_GuideBookQuestTrackingChanged__DelegateSignature_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.GuideBookQuestHovered__DelegateSignature
struct UWBP_Guidebook_QuestGrid_Entry_C_GuideBookQuestHovered__DelegateSignature_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64D3[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x10(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C.GuideBookQuestSelected__DelegateSignature
struct UWBP_Guidebook_QuestGrid_Entry_C_GuideBookQuestSelected__DelegateSignature_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


