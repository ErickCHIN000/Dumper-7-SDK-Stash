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

// 0xC5 (0xC5 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.OnShowDetailPaNe
struct UWBP_Dialogue_C_OnShowDetailPaNe_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22C9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x10(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetTxt_SpeakerName
struct UWBP_Dialogue_C_GetTxt_SpeakerName_Params
{
public:
	class UTextBlock*                            Txt_SpeakerName;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetReply_Box
struct UWBP_Dialogue_C_GetReply_Box_Params
{
public:
	class UVerticalBox*                          Reply_Box;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetRepliesScroll
struct UWBP_Dialogue_C_GetRepliesScroll_Params
{
public:
	class UScrollBox*                            RepliesScroll;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetFade_JustReplies
struct UWBP_Dialogue_C_GetFade_JustReplies_Params
{
public:
	class UWidgetAnimation*                      Fade_JustReplies;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetFade_EntireReplyArea
struct UWBP_Dialogue_C_GetFade_EntireReplyArea_Params
{
public:
	class UWidgetAnimation*                      Fade_EntireReplyArea;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetFade_Dialogue
struct UWBP_Dialogue_C_GetFade_Dialogue_Params
{
public:
	class UWidgetAnimation*                      Fade_Dialogue;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetDialogue_AnimatedText
struct UWBP_Dialogue_C_GetDialogue_AnimatedText_Params
{
public:
	class UWBP_Dialogue_AnimatedText_C*          Dialogue_AnimatedText;                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetBU_Return
struct UWBP_Dialogue_C_GetBU_Return_Params
{
public:
	class UWBP_Common_Button_Base_C*             BU_Return;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetBU_Next
struct UWBP_Dialogue_C_GetBU_Next_Params
{
public:
	class UWBP_Common_Button_Base_C*             BU_Next;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.GetBorder_Reply
struct UWBP_Dialogue_C_GetBorder_Reply_Params
{
public:
	class UBorder*                               Border_Reply;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.BndEvt__WBP_Dialogue_DetailPane_Contracts_K2Node_ComponentBoundEvent_2_QuestAccepted__DelegateSignature
struct UWBP_Dialogue_C_BndEvt__WBP_Dialogue_DetailPane_Contracts_K2Node_ComponentBoundEvent_2_QuestAccepted__DelegateSignature_Params
{
public:
	struct FOngoingTaskProgress                  Accepted;                                          // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              Contract_State;                                    // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.BndEvt__WBP_Dialogue_CBU_Next_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Dialogue_C_BndEvt__WBP_Dialogue_CBU_Next_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.BndEvt__WBP_Dialogue_CBU_Return_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Dialogue_C_BndEvt__WBP_Dialogue_CBU_Return_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.BndEvt__WBP_Dialogue_CBU_Contract_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Dialogue_C_BndEvt__WBP_Dialogue_CBU_Contract_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function WBP_Dialogue.WBP_Dialogue_C.ExecuteUbergraph_WBP_Dialogue
struct UWBP_Dialogue_C_ExecuteUbergraph_WBP_Dialogue_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2524[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_DialogueJobBoard_C*               CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2533[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  K2Node_ComponentBoundEvent_Accepted;               // 0x30(0xB0)(None)
	enum class E_Contract_StateType              K2Node_ComponentBoundEvent_Contract_State;         // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_255F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


