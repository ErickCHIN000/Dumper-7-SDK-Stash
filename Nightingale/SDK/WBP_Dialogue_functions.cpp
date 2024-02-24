#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Dialogue.WBP_Dialogue_C
// (None)

class UClass* UWBP_Dialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Dialogue_C");

	return Clss;
}


// WBP_Dialogue_C WBP_Dialogue.Default__WBP_Dialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Dialogue_C* UWBP_Dialogue_C::GetDefaultObj()
{
	static class UWBP_Dialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Dialogue_C*>(UWBP_Dialogue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Dialogue.WBP_Dialogue_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Dialogue_C::Cleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "Cleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Dialogue.WBP_Dialogue_C.OnShowDetailPaNe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::OnShowDetailPaNe(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "OnShowDetailPaNe");

	Params::UWBP_Dialogue_C_OnShowDetailPaNe_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetTxt_SpeakerName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  Txt_SpeakerName                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetTxt_SpeakerName(class UTextBlock** Txt_SpeakerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetTxt_SpeakerName");

	Params::UWBP_Dialogue_C_GetTxt_SpeakerName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Txt_SpeakerName != nullptr)
		*Txt_SpeakerName = Parms.Txt_SpeakerName;

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetReply_Box
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*                Reply_Box                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetReply_Box(class UVerticalBox** Reply_Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetReply_Box");

	Params::UWBP_Dialogue_C_GetReply_Box_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Reply_Box != nullptr)
		*Reply_Box = Parms.Reply_Box;

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetRepliesScroll
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UScrollBox*                  RepliesScroll                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetRepliesScroll(class UScrollBox** RepliesScroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetRepliesScroll");

	Params::UWBP_Dialogue_C_GetRepliesScroll_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RepliesScroll != nullptr)
		*RepliesScroll = Parms.RepliesScroll;

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetFade_JustReplies
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            Fade_JustReplies                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetFade_JustReplies(class UWidgetAnimation** Fade_JustReplies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetFade_JustReplies");

	Params::UWBP_Dialogue_C_GetFade_JustReplies_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fade_JustReplies != nullptr)
		*Fade_JustReplies = Parms.Fade_JustReplies;

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetFade_EntireReplyArea
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            Fade_EntireReplyArea                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetFade_EntireReplyArea(class UWidgetAnimation** Fade_EntireReplyArea)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetFade_EntireReplyArea");

	Params::UWBP_Dialogue_C_GetFade_EntireReplyArea_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fade_EntireReplyArea != nullptr)
		*Fade_EntireReplyArea = Parms.Fade_EntireReplyArea;

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetFade_Dialogue
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            Fade_Dialogue                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetFade_Dialogue(class UWidgetAnimation** Fade_Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetFade_Dialogue");

	Params::UWBP_Dialogue_C_GetFade_Dialogue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fade_Dialogue != nullptr)
		*Fade_Dialogue = Parms.Fade_Dialogue;

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetDialogue_AnimatedText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_Dialogue_AnimatedText_C*Dialogue_AnimatedText                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetDialogue_AnimatedText(class UWBP_Dialogue_AnimatedText_C** Dialogue_AnimatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetDialogue_AnimatedText");

	Params::UWBP_Dialogue_C_GetDialogue_AnimatedText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dialogue_AnimatedText != nullptr)
		*Dialogue_AnimatedText = Parms.Dialogue_AnimatedText;

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetBU_Return
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_Common_Button_Base_C*   BU_Return                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetBU_Return(class UWBP_Common_Button_Base_C** BU_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetBU_Return");

	Params::UWBP_Dialogue_C_GetBU_Return_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BU_Return != nullptr)
		*BU_Return = Parms.BU_Return;

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetBU_Next
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_Common_Button_Base_C*   BU_Next                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetBU_Next(class UWBP_Common_Button_Base_C** BU_Next)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetBU_Next");

	Params::UWBP_Dialogue_C_GetBU_Next_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BU_Next != nullptr)
		*BU_Next = Parms.BU_Next;

}


// Function WBP_Dialogue.WBP_Dialogue_C.GetBorder_Reply
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBorder*                     Border_Reply                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::GetBorder_Reply(class UBorder** Border_Reply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "GetBorder_Reply");

	Params::UWBP_Dialogue_C_GetBorder_Reply_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Border_Reply != nullptr)
		*Border_Reply = Parms.Border_Reply;

}


// Function WBP_Dialogue.WBP_Dialogue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Dialogue_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Dialogue.WBP_Dialogue_C.AdvanceDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Dialogue_C::AdvanceDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "AdvanceDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Dialogue.WBP_Dialogue_C.ReverseDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Dialogue_C::ReverseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "ReverseDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Dialogue.WBP_Dialogue_C.BndEvt__WBP_Dialogue_DetailPane_Contracts_K2Node_ComponentBoundEvent_2_QuestAccepted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    Contract_State                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::BndEvt__WBP_Dialogue_DetailPane_Contracts_K2Node_ComponentBoundEvent_2_QuestAccepted__DelegateSignature(const struct FOngoingTaskProgress& Accepted, enum class E_Contract_StateType Contract_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "BndEvt__WBP_Dialogue_DetailPane_Contracts_K2Node_ComponentBoundEvent_2_QuestAccepted__DelegateSignature");

	Params::UWBP_Dialogue_C_BndEvt__WBP_Dialogue_DetailPane_Contracts_K2Node_ComponentBoundEvent_2_QuestAccepted__DelegateSignature_Params Parms{};

	Parms.Accepted = Accepted;
	Parms.Contract_State = Contract_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Dialogue.WBP_Dialogue_C.BndEvt__WBP_Dialogue_CBU_Next_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::BndEvt__WBP_Dialogue_CBU_Next_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "BndEvt__WBP_Dialogue_CBU_Next_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Dialogue_C_BndEvt__WBP_Dialogue_CBU_Next_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Dialogue.WBP_Dialogue_C.BndEvt__WBP_Dialogue_CBU_Return_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::BndEvt__WBP_Dialogue_CBU_Return_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "BndEvt__WBP_Dialogue_CBU_Return_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Dialogue_C_BndEvt__WBP_Dialogue_CBU_Return_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Dialogue.WBP_Dialogue_C.BndEvt__WBP_Dialogue_CBU_Contract_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::BndEvt__WBP_Dialogue_CBU_Contract_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "BndEvt__WBP_Dialogue_CBU_Contract_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Dialogue_C_BndEvt__WBP_Dialogue_CBU_Contract_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Dialogue.WBP_Dialogue_C.ExecuteUbergraph_WBP_Dialogue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_DialogueJobBoard_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        K2Node_ComponentBoundEvent_Accepted                              (None)
// enum class E_Contract_StateType    K2Node_ComponentBoundEvent_Contract_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dialogue_C::ExecuteUbergraph_WBP_Dialogue(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UWBP_DialogueJobBoard_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FOngoingTaskProgress& K2Node_ComponentBoundEvent_Accepted, enum class E_Contract_StateType K2Node_ComponentBoundEvent_Contract_State, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Dialogue_C", "ExecuteUbergraph_WBP_Dialogue");

	Params::UWBP_Dialogue_C_ExecuteUbergraph_WBP_Dialogue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Accepted = K2Node_ComponentBoundEvent_Accepted;
	Parms.K2Node_ComponentBoundEvent_Contract_State = K2Node_ComponentBoundEvent_Contract_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


