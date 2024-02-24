#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Chatbox.UMG_Chatbox_C
// (None)

class UClass* UUMG_Chatbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Chatbox_C");

	return Clss;
}


// UMG_Chatbox_C UMG_Chatbox.Default__UMG_Chatbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Chatbox_C* UUMG_Chatbox_C::GetDefaultObj()
{
	static class UUMG_Chatbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Chatbox_C*>(UUMG_Chatbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Chatbox.UMG_Chatbox_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UUMG_Chatbox_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "OnKeyDown");

	Params::UUMG_Chatbox_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Chatbox.UMG_Chatbox_C.AddServerMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ChatboxItem_C*           CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Chatbox_C::AddServerMessage(const class FString& Message, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UBP_ChatboxItem_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "AddServerMessage");

	Params::UUMG_Chatbox_C_AddServerMessage_Params Parms{};

	Parms.Message = Message;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Chatbox.UMG_Chatbox_C.ClampMessageLength
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InMessage                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        OutMessage                                                       (Parm, OutParm)
// bool                               WasClamped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Chatbox_C::ClampMessageLength(class FText InMessage, class FText* OutMessage, bool* WasClamped, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "ClampMessageLength");

	Params::UUMG_Chatbox_C_ClampMessageLength_Params Parms{};

	Parms.InMessage = InMessage;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMessage != nullptr)
		*OutMessage = Parms.OutMessage;

	if (WasClamped != nullptr)
		*WasClamped = Parms.WasClamped;

}


// Function UMG_Chatbox.UMG_Chatbox_C.FocusEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Chatbox_C::FocusEntry(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "FocusEntry");

	Params::UUMG_Chatbox_C_FocusEntry_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Chatbox.UMG_Chatbox_C.ScrollToBottom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::ScrollToBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "ScrollToBottom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.AddLocalMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ChatboxItem_C*           CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Chatbox_C::AddLocalMessage(const class FString& Message, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UBP_ChatboxItem_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "AddLocalMessage");

	Params::UUMG_Chatbox_C_AddLocalMessage_Params Parms{};

	Parms.Message = Message;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Chatbox.UMG_Chatbox_C.AddChatMessage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIcarusPlayerChatMessage    Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_ChatboxItem_C*           CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Chatbox_C::AddChatMessage(struct FIcarusPlayerChatMessage& Message, class UBP_ChatboxItem_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "AddChatMessage");

	Params::UUMG_Chatbox_C_AddChatMessage_Params Parms{};

	Parms.Message = Message;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Chatbox.UMG_Chatbox_C.Finished_13A3F937400836F18C3C2AA44C299F32
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::Finished_13A3F937400836F18C3C2AA44C299F32()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "Finished_13A3F937400836F18C3C2AA44C299F32");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.Finished_6346353C4787712A7E87BDAF80B3DCC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::Finished_6346353C4787712A7E87BDAF80B3DCC4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "Finished_6346353C4787712A7E87BDAF80B3DCC4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.ShowChatTyping
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::ShowChatTyping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "ShowChatTyping");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.EndTyping
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::EndTyping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "EndTyping");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.BeginFadeOutTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::BeginFadeOutTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "BeginFadeOutTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.PlayFadeOutAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::PlayFadeOutAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "PlayFadeOutAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.PlayFadeInAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::PlayFadeInAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "PlayFadeInAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.ShowChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::ShowChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "ShowChat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_Chatbox_C::BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	Params::UUMG_Chatbox_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Chatbox.UMG_Chatbox_C.CheckChatBoxVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::CheckChatBoxVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "CheckChatBoxVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.CommitText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::CommitText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "CommitText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.ClearAndUnfocusTextBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::ClearAndUnfocusTextBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "ClearAndUnfocusTextBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_Chatbox_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "OnFocusLost");

	Params::UUMG_Chatbox_C_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Chatbox.UMG_Chatbox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Chatbox_C::BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UUMG_Chatbox_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Chatbox.UMG_Chatbox_C.FocusInputBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Chatbox_C::FocusInputBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "FocusInputBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Chatbox.UMG_Chatbox_C.ExecuteUbergraph_UMG_Chatbox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FText                        CallFunc_ClampMessageLength_OutMessage                           (None)
// bool                               CallFunc_ClampMessageLength_WasClamped                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_ClampMessageLength_OutMessage_1                         (None)
// bool                               CallFunc_ClampMessageLength_WasClamped_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Chatbox_C::ExecuteUbergraph_UMG_Chatbox(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class FText K2Node_ComponentBoundEvent_Text_1, class FText CallFunc_ClampMessageLength_OutMessage, bool CallFunc_ClampMessageLength_WasClamped, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_ClampMessageLength_OutMessage_1, bool CallFunc_ClampMessageLength_WasClamped_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_SwitchEnum_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Chatbox_C", "ExecuteUbergraph_UMG_Chatbox");

	Params::UUMG_Chatbox_C_ExecuteUbergraph_UMG_Chatbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.CallFunc_ClampMessageLength_OutMessage = CallFunc_ClampMessageLength_OutMessage;
	Parms.CallFunc_ClampMessageLength_WasClamped = CallFunc_ClampMessageLength_WasClamped;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_ClampMessageLength_OutMessage_1 = CallFunc_ClampMessageLength_OutMessage_1;
	Parms.CallFunc_ClampMessageLength_WasClamped_1 = CallFunc_ClampMessageLength_WasClamped_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


