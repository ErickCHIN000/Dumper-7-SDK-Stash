#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StormModeNotifier_Component.StormModeNotifier_Component_C
// (None)

class UClass* UStormModeNotifier_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StormModeNotifier_Component_C");

	return Clss;
}


// StormModeNotifier_Component_C StormModeNotifier_Component.Default__StormModeNotifier_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStormModeNotifier_Component_C* UStormModeNotifier_Component_C::GetDefaultObj()
{
	static class UStormModeNotifier_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStormModeNotifier_Component_C*>(UStormModeNotifier_Component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.Get_VODialogueWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Dialogue_VoiceOver_C*    Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStormModeNotifier_Component_C::Get_VODialogueWidget(class UUI_Dialogue_VoiceOver_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "Get_VODialogueWidget");

	Params::UStormModeNotifier_Component_C_Get_VODialogueWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.Set_VODialogueWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Dialogue_VoiceOver_C*    Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStormModeNotifier_Component_C::Set_VODialogueWidget(class UUI_Dialogue_VoiceOver_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "Set_VODialogueWidget");

	Params::UStormModeNotifier_Component_C_Set_VODialogueWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.GetCurrentValue_IsVoiceOverDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStormModeNotifier_Component_C::GetCurrentValue_IsVoiceOverDialogue(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "GetCurrentValue_IsVoiceOverDialogue");

	Params::UStormModeNotifier_Component_C_GetCurrentValue_IsVoiceOverDialogue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.SetValue_IsVoiceOverDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStormModeNotifier_Component_C::SetValue_IsVoiceOverDialogue(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "SetValue_IsVoiceOverDialogue");

	Params::UStormModeNotifier_Component_C_SetValue_IsVoiceOverDialogue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.GetCurrentValue_SelectWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStormModeNotifier_Component_C::GetCurrentValue_SelectWindow(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "GetCurrentValue_SelectWindow");

	Params::UStormModeNotifier_Component_C_GetCurrentValue_SelectWindow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.SetValue_SelectWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStormModeNotifier_Component_C::SetValue_SelectWindow(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "SetValue_SelectWindow");

	Params::UStormModeNotifier_Component_C_SetValue_SelectWindow_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnSisterDialogue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Start_                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStormModeNotifier_Component_C::OnSisterDialogue__DelegateSignature(bool Start_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "OnSisterDialogue__DelegateSignature");

	Params::UStormModeNotifier_Component_C_OnSisterDialogue__DelegateSignature_Params Parms{};

	Parms.Start_ = Start_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnFinalBoss_FourthBossDefeated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStormModeNotifier_Component_C::OnFinalBoss_FourthBossDefeated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "OnFinalBoss_FourthBossDefeated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnFinalBoss_ThirdBossDefeated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStormModeNotifier_Component_C::OnFinalBoss_ThirdBossDefeated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "OnFinalBoss_ThirdBossDefeated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnFinalBoss_SecondBossDefeated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStormModeNotifier_Component_C::OnFinalBoss_SecondBossDefeated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "OnFinalBoss_SecondBossDefeated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnFinalBoss_FirstBossDefeated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStormModeNotifier_Component_C::OnFinalBoss_FirstBossDefeated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "OnFinalBoss_FirstBossDefeated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnMilestoneProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LastUnlockedTier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStormModeNotifier_Component_C::OnMilestoneProgress__DelegateSignature(class FName ID, int32 LastUnlockedTier, float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "OnMilestoneProgress__DelegateSignature");

	Params::UStormModeNotifier_Component_C_OnMilestoneProgress__DelegateSignature_Params Parms{};

	Parms.ID = ID;
	Parms.LastUnlockedTier = LastUnlockedTier;
	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnValueChanged_VoiceOverDialogue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStormModeNotifier_Component_C::OnValueChanged_VoiceOverDialogue__DelegateSignature(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "OnValueChanged_VoiceOverDialogue__DelegateSignature");

	Params::UStormModeNotifier_Component_C_OnValueChanged_VoiceOverDialogue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnValueChanged_SelectWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStormModeNotifier_Component_C::OnValueChanged_SelectWindow__DelegateSignature(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormModeNotifier_Component_C", "OnValueChanged_SelectWindow__DelegateSignature");

	Params::UStormModeNotifier_Component_C_OnValueChanged_SelectWindow__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


