#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BlackScreenFade.wid_BlackScreenFade_C
// (None)

class UClass* UWid_BlackScreenFade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BlackScreenFade_C");

	return Clss;
}


// wid_BlackScreenFade_C wid_BlackScreenFade.Default__wid_BlackScreenFade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BlackScreenFade_C* UWid_BlackScreenFade_C::GetDefaultObj()
{
	static class UWid_BlackScreenFade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BlackScreenFade_C*>(UWid_BlackScreenFade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BlackScreenFade.wid_BlackScreenFade_C.Unfade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BlackScreenFade_C::Unfade(bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BlackScreenFade_C", "Unfade");

	Params::UWid_BlackScreenFade_C_Unfade_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BlackScreenFade.wid_BlackScreenFade_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_BlackScreenFade_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BlackScreenFade_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BlackScreenFade.wid_BlackScreenFade_C.Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BlackScreenFade_C::Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BlackScreenFade_C", "Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BlackScreenFade.wid_BlackScreenFade_C.ExecuteUbergraph_wid_BlackScreenFade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UWid_BlackScreenFade_C::ExecuteUbergraph_wid_BlackScreenFade(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BlackScreenFade_C", "ExecuteUbergraph_wid_BlackScreenFade");

	Params::UWid_BlackScreenFade_C_ExecuteUbergraph_wid_BlackScreenFade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


