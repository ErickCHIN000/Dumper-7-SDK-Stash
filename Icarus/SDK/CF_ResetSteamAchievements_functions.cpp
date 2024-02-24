#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_ResetSteamAchievements.CF_ResetSteamAchievements_C
// (None)

class UClass* UCF_ResetSteamAchievements_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_ResetSteamAchievements_C");

	return Clss;
}


// CF_ResetSteamAchievements_C CF_ResetSteamAchievements.Default__CF_ResetSteamAchievements_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_ResetSteamAchievements_C* UCF_ResetSteamAchievements_C::GetDefaultObj()
{
	static class UCF_ResetSteamAchievements_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_ResetSteamAchievements_C*>(UCF_ResetSteamAchievements_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_ResetSteamAchievements.CF_ResetSteamAchievements_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_ResetSteamAchievements_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ResetSteamAchievements_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_ResetSteamAchievements.CF_ResetSteamAchievements_C.ExecuteUbergraph_CF_ResetSteamAchievements
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_ResetSteamAchievements_C::ExecuteUbergraph_CF_ResetSteamAchievements(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ResetSteamAchievements_C", "ExecuteUbergraph_CF_ResetSteamAchievements");

	Params::UCF_ResetSteamAchievements_C_ExecuteUbergraph_CF_ResetSteamAchievements_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


