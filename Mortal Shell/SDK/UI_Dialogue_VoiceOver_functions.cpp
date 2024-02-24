#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C
// (None)

class UClass* UUI_Dialogue_VoiceOver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Dialogue_VoiceOver_C");

	return Clss;
}


// UI_Dialogue_VoiceOver_C UI_Dialogue_VoiceOver.Default__UI_Dialogue_VoiceOver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Dialogue_VoiceOver_C* UUI_Dialogue_VoiceOver_C::GetDefaultObj()
{
	static class UUI_Dialogue_VoiceOver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Dialogue_VoiceOver_C*>(UUI_Dialogue_VoiceOver_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.HandleSubtitlesScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::HandleSubtitlesScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "HandleSubtitlesScale");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.PopulateDialogueData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::PopulateDialogueData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "PopulateDialogueData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.IncrementDialogueIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_VoiceOver_C::IncrementDialogueIndex(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "IncrementDialogueIndex");

	Params::UUI_Dialogue_VoiceOver_C_IncrementDialogueIndex_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.PlayUserProceedSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::PlayUserProceedSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "PlayUserProceedSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.IsSequenceAtEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_Dialogue_VoiceOver_C::IsSequenceAtEnd(int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "IsSequenceAtEnd");

	Params::UUI_Dialogue_VoiceOver_C_IsSequenceAtEnd_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.DialogueSound_Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_VoiceOver_C::DialogueSound_Stop(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "DialogueSound_Stop");

	Params::UUI_Dialogue_VoiceOver_C_DialogueSound_Stop_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.GetProceedDelay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Delay                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_Dialogue_VoiceOver_C::GetProceedDelay(float Local_Delay, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "GetProceedDelay");

	Params::UUI_Dialogue_VoiceOver_C_GetProceedDelay_Params Parms{};

	Parms.Local_Delay = Local_Delay;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.HandleDialogueSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_StormMode_PlaySister3ChoiceWindowAudio_Audio            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_VoiceOver_C::HandleDialogueSound(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_StormMode_PlaySister3ChoiceWindowAudio_Audio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "HandleDialogueSound");

	Params::UUI_Dialogue_VoiceOver_C_HandleDialogueSound_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_PlaySister3ChoiceWindowAudio_Audio = CallFunc_StormMode_PlaySister3ChoiceWindowAudio_Audio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.StartDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::StartDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "StartDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.OnShowEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::OnShowEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "OnShowEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.DialogueProceed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::DialogueProceed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "DialogueProceed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.ContinueDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::ContinueDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "ContinueDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.CompleteDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::CompleteDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "CompleteDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.OnHideEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::OnHideEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "OnHideEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.OnInitialDelayEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::OnInitialDelayEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "OnInitialDelayEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.BndEvt__UI_ControllerButton_Skip_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_VoiceOver_C::BndEvt__UI_ControllerButton_Skip_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "BndEvt__UI_ControllerButton_Skip_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::UUI_Dialogue_VoiceOver_C_BndEvt__UI_ControllerButton_Skip_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.ExecuteUbergraph_UI_Dialogue_VoiceOver
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStormModeNotifier_Component_C*CallFunc_GetNotifierComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetProceedDelay_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsSequenceAtEnd_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_VoiceOver_C::ExecuteUbergraph_UI_Dialogue_VoiceOver(int32 EntryPoint, class UStormModeNotifier_Component_C* CallFunc_GetNotifierComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetProceedDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsSequenceAtEnd_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, float CallFunc_Multiply_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "ExecuteUbergraph_UI_Dialogue_VoiceOver");

	Params::UUI_Dialogue_VoiceOver_C_ExecuteUbergraph_UI_Dialogue_VoiceOver_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetNotifierComponent_ReturnValue = CallFunc_GetNotifierComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GetProceedDelay_ReturnValue = CallFunc_GetProceedDelay_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsSequenceAtEnd_ReturnValue = CallFunc_IsSequenceAtEnd_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.OnWantsToSkip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::OnWantsToSkip__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "OnWantsToSkip__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.OnDialogueCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_VoiceOver_C::OnDialogueCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "OnDialogueCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C.OnDialogueProceed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_VoiceOver_C::OnDialogueProceed__DelegateSignature(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_VoiceOver_C", "OnDialogueProceed__DelegateSignature");

	Params::UUI_Dialogue_VoiceOver_C_OnDialogueProceed__DelegateSignature_Params Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


