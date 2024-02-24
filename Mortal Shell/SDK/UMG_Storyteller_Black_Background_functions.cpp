#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C
// (None)

class UClass* UUMG_Storyteller_Black_Background_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Storyteller_Black_Background_C");

	return Clss;
}


// UMG_Storyteller_Black_Background_C UMG_Storyteller_Black_Background.Default__UMG_Storyteller_Black_Background_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Storyteller_Black_Background_C* UUMG_Storyteller_Black_Background_C::GetDefaultObj()
{
	static class UUMG_Storyteller_Black_Background_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Storyteller_Black_Background_C*>(UUMG_Storyteller_Black_Background_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.PlayFadeToBlack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Storyteller_Black_Background_C::PlayFadeToBlack(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "PlayFadeToBlack");

	Params::UUMG_Storyteller_Black_Background_C_PlayFadeToBlack_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.ShouldFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Storyteller_Black_Background_C::ShouldFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "ShouldFadeIn");

	Params::UUMG_Storyteller_Black_Background_C_ShouldFadeIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.SetImmediateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::SetImmediateVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "SetImmediateVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.PlayFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Storyteller_Black_Background_C::PlayFadeOut(FDelegateProperty_ Delegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "PlayFadeOut");

	Params::UUMG_Storyteller_Black_Background_C_PlayFadeOut_Params Parms{};

	Parms.Delegate = Delegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Storyteller_Black_Background_C::PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "PlayFadeIn");

	Params::UUMG_Storyteller_Black_Background_C_PlayFadeIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayFadeIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Credits_Music      MusicToPlay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Storyteller_Black_Background_C::OnOpen(bool PlayFadeIn, enum class Enum_Credits_Music MusicToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "OnOpen");

	Params::UUMG_Storyteller_Black_Background_C_OnOpen_Params Parms{};

	Parms.PlayFadeIn = PlayFadeIn;
	Parms.MusicToPlay = MusicToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.BndEvt__UI_Button_Confirm_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::BndEvt__UI_Button_Confirm_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "BndEvt__UI_Button_Confirm_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.PlayMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::PlayMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "PlayMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.StopMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::StopMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "StopMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.ActivateButton_
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::ActivateButton_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "ActivateButton_");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.Activate_Dismiss
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::Activate_Dismiss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "Activate_Dismiss");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.ShowUnlockMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::ShowUnlockMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "ShowUnlockMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.UnlockShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::UnlockShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "UnlockShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.OnFadeToBlack_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::OnFadeToBlack_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "OnFadeToBlack_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.ExecuteUbergraph_UMG_Storyteller_Black_Background
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_PlayFadeIn                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Credits_Music      K2Node_CustomEvent_MusicToPlay                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Storyteller_Black_Background_C::ExecuteUbergraph_UMG_Storyteller_Black_Background(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_PlayFadeIn, enum class Enum_Credits_Music K2Node_CustomEvent_MusicToPlay, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "ExecuteUbergraph_UMG_Storyteller_Black_Background");

	Params::UUMG_Storyteller_Black_Background_C_ExecuteUbergraph_UMG_Storyteller_Black_Background_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_PlayFadeIn = K2Node_CustomEvent_PlayFadeIn;
	Parms.K2Node_CustomEvent_MusicToPlay = K2Node_CustomEvent_MusicToPlay;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CreateSound2D_ReturnValue_1 = CallFunc_CreateSound2D_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_CreateSound2D_ReturnValue_2 = CallFunc_CreateSound2D_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C.OnUnlockMessageShown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Black_Background_C::OnUnlockMessageShown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Black_Background_C", "OnUnlockMessageShown__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


