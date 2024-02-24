#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MainMenuLoadingScreen.MainMenuLoadingScreen_C
// (None)

class UClass* UMainMenuLoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuLoadingScreen_C");

	return Clss;
}


// MainMenuLoadingScreen_C MainMenuLoadingScreen.Default__MainMenuLoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuLoadingScreen_C* UMainMenuLoadingScreen_C::GetDefaultObj()
{
	static class UMainMenuLoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuLoadingScreen_C*>(UMainMenuLoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuLoadingScreen.MainMenuLoadingScreen_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuLoadingScreen_C::FadeOut(float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuLoadingScreen_C", "FadeOut");

	Params::UMainMenuLoadingScreen_C_FadeOut_Params Parms{};

	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_1 = CallFunc_GetRenderOpacity_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_2 = CallFunc_GetRenderOpacity_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuLoadingScreen.MainMenuLoadingScreen_C.FadeOutVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuLoadingScreen_C::FadeOutVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuLoadingScreen_C", "FadeOutVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuLoadingScreen.MainMenuLoadingScreen_C.FadeInVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuLoadingScreen_C::FadeInVolume(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuLoadingScreen_C", "FadeInVolume");

	Params::UMainMenuLoadingScreen_C_FadeInVolume_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuLoadingScreen.MainMenuLoadingScreen_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UMainMenuLoadingScreen_C::FadeIn(float CallFunc_GetRenderOpacity_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuLoadingScreen_C", "FadeIn");

	Params::UMainMenuLoadingScreen_C_FadeIn_Params Parms{};

	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuLoadingScreen.MainMenuLoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuLoadingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuLoadingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuLoadingScreen.MainMenuLoadingScreen_C.ExecuteUbergraph_MainMenuLoadingScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuLoadingScreen_C::ExecuteUbergraph_MainMenuLoadingScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuLoadingScreen_C", "ExecuteUbergraph_MainMenuLoadingScreen");

	Params::UMainMenuLoadingScreen_C_ExecuteUbergraph_MainMenuLoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuLoadingScreen.MainMenuLoadingScreen_C.CallTeleportEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuLoadingScreen_C::CallTeleportEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuLoadingScreen_C", "CallTeleportEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuLoadingScreen.MainMenuLoadingScreen_C.CallTeleportPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuLoadingScreen_C::CallTeleportPlayer__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuLoadingScreen_C", "CallTeleportPlayer__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


