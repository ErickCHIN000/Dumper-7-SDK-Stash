#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MasteryUnlockNotification.WBP_MasteryUnlockNotification_C
// (None)

class UClass* UWBP_MasteryUnlockNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MasteryUnlockNotification_C");

	return Clss;
}


// WBP_MasteryUnlockNotification_C WBP_MasteryUnlockNotification.Default__WBP_MasteryUnlockNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MasteryUnlockNotification_C* UWBP_MasteryUnlockNotification_C::GetDefaultObj()
{
	static class UWBP_MasteryUnlockNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MasteryUnlockNotification_C*>(UWBP_MasteryUnlockNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MasteryUnlockNotification.WBP_MasteryUnlockNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MasteryUnlockNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryUnlockNotification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryUnlockNotification.WBP_MasteryUnlockNotification_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MasteryUnlockNotification_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryUnlockNotification_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryUnlockNotification.WBP_MasteryUnlockNotification_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MasteryUnlockNotification_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryUnlockNotification_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryUnlockNotification.WBP_MasteryUnlockNotification_C.ExecuteUbergraph_WBP_MasteryUnlockNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetBrushResourceAsTexture2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MasteryUnlockNotification_C::ExecuteUbergraph_WBP_MasteryUnlockNotification(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryUnlockNotification_C", "ExecuteUbergraph_WBP_MasteryUnlockNotification");

	Params::UWBP_MasteryUnlockNotification_C_ExecuteUbergraph_WBP_MasteryUnlockNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBrushResourceAsTexture2D_ReturnValue = CallFunc_GetBrushResourceAsTexture2D_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


