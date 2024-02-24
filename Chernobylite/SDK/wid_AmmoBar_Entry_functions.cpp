#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_AmmoBar_Entry.wid_AmmoBar_Entry_C
// (None)

class UClass* UWid_AmmoBar_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_AmmoBar_Entry_C");

	return Clss;
}


// wid_AmmoBar_Entry_C wid_AmmoBar_Entry.Default__wid_AmmoBar_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_AmmoBar_Entry_C* UWid_AmmoBar_Entry_C::GetDefaultObj()
{
	static class UWid_AmmoBar_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_AmmoBar_Entry_C*>(UWid_AmmoBar_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_AmmoBar_Entry.wid_AmmoBar_Entry_C.PlayShowAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Hide                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AmmoBar_Entry_C::PlayShowAnim(class UWidgetAnimation** Hide, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AmmoBar_Entry_C", "PlayShowAnim");

	Params::UWid_AmmoBar_Entry_C_PlayShowAnim_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Hide != nullptr)
		*Hide = Parms.Hide;

}


// Function wid_AmmoBar_Entry.wid_AmmoBar_Entry_C.IsPlayingHideAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_AmmoBar_Entry_C::IsPlayingHideAnim(bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AmmoBar_Entry_C", "IsPlayingHideAnim");

	Params::UWid_AmmoBar_Entry_C_IsPlayingHideAnim_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_AmmoBar_Entry.wid_AmmoBar_Entry_C.PlayHideAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AmmoBar_Entry_C::PlayHideAnim(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AmmoBar_Entry_C", "PlayHideAnim");

	Params::UWid_AmmoBar_Entry_C_PlayHideAnim_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


