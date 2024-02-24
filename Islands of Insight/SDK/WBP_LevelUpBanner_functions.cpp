#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LevelUpBanner.WBP_LevelUpBanner_C
// (None)

class UClass* UWBP_LevelUpBanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LevelUpBanner_C");

	return Clss;
}


// WBP_LevelUpBanner_C WBP_LevelUpBanner.Default__WBP_LevelUpBanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LevelUpBanner_C* UWBP_LevelUpBanner_C::GetDefaultObj()
{
	static class UWBP_LevelUpBanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LevelUpBanner_C*>(UWBP_LevelUpBanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LevelUpBanner.WBP_LevelUpBanner_C.Finished_576872504FF39A6E1D94E1A546FEBBA1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LevelUpBanner_C::Finished_576872504FF39A6E1D94E1A546FEBBA1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LevelUpBanner_C", "Finished_576872504FF39A6E1D94E1A546FEBBA1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LevelUpBanner.WBP_LevelUpBanner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LevelUpBanner_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LevelUpBanner_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LevelUpBanner.WBP_LevelUpBanner_C.ExecuteUbergraph_WBP_LevelUpBanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BPC_GetPlayerLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_LevelUpBanner_C::ExecuteUbergraph_WBP_LevelUpBanner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_BPC_GetPlayerLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LevelUpBanner_C", "ExecuteUbergraph_WBP_LevelUpBanner");

	Params::UWBP_LevelUpBanner_C_ExecuteUbergraph_WBP_LevelUpBanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_BPC_GetPlayerLevel_ReturnValue = CallFunc_BPC_GetPlayerLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


