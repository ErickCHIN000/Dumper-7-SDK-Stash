#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SkipCutscene.SkipCutscene_C
// (None)

class UClass* USkipCutscene_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkipCutscene_C");

	return Clss;
}


// SkipCutscene_C SkipCutscene.Default__SkipCutscene_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkipCutscene_C* USkipCutscene_C::GetDefaultObj()
{
	static class USkipCutscene_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkipCutscene_C*>(USkipCutscene_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkipCutscene.SkipCutscene_C.HandleScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetUIScale_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkipCutscene_C::HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "HandleScale");

	Params::USkipCutscene_C_HandleScale_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIScale_ReturnValue = CallFunc_GetUIScale_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkipCutscene.SkipCutscene_C.PlayFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkipCutscene_C::PlayFadeOut(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "PlayFadeOut");

	Params::USkipCutscene_C_PlayFadeOut_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkipCutscene.SkipCutscene_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkipCutscene_C::PlayFadeIn(float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "PlayFadeIn");

	Params::USkipCutscene_C_PlayFadeIn_Params Parms{};

	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkipCutscene.SkipCutscene_C.Turninvisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USkipCutscene_C::Turninvisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "Turninvisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkipCutscene.SkipCutscene_C.BndEvt__UI_ConfirmButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USkipCutscene_C::BndEvt__UI_ConfirmButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "BndEvt__UI_ConfirmButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkipCutscene.SkipCutscene_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Cutscene_SkipType  SkipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkipCutscene_C::OnOpen(enum class Enum_Cutscene_SkipType SkipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "OnOpen");

	Params::USkipCutscene_C_OnOpen_Params Parms{};

	Parms.SkipType = SkipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkipCutscene.SkipCutscene_C.BndEvt__UI_ConfirmButtonPressAndHold_K2Node_ComponentBoundEvent_1_OnPressStart__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USkipCutscene_C::BndEvt__UI_ConfirmButtonPressAndHold_K2Node_ComponentBoundEvent_1_OnPressStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "BndEvt__UI_ConfirmButtonPressAndHold_K2Node_ComponentBoundEvent_1_OnPressStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkipCutscene.SkipCutscene_C.BndEvt__UI_ConfirmButtonPressAndHold_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USkipCutscene_C::BndEvt__UI_ConfirmButtonPressAndHold_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "BndEvt__UI_ConfirmButtonPressAndHold_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkipCutscene.SkipCutscene_C.OnClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USkipCutscene_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkipCutscene.SkipCutscene_C.BeginDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USkipCutscene_C::BeginDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "BeginDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkipCutscene.SkipCutscene_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USkipCutscene_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkipCutscene.SkipCutscene_C.ExecuteUbergraph_SkipCutscene
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class Enum_Cutscene_SkipType  K2Node_CustomEvent_SkipType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)

void USkipCutscene_C::ExecuteUbergraph_SkipCutscene(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class Enum_Cutscene_SkipType K2Node_CustomEvent_SkipType, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "ExecuteUbergraph_SkipCutscene");

	Params::USkipCutscene_C_ExecuteUbergraph_SkipCutscene_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_SkipType = K2Node_CustomEvent_SkipType;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkipCutscene.SkipCutscene_C.SkipButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USkipCutscene_C::SkipButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkipCutscene_C", "SkipButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


