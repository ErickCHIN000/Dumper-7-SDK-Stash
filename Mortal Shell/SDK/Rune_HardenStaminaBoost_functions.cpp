#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_HardenStaminaBoost.Rune_HardenStaminaBoost_C
// (None)

class UClass* URune_HardenStaminaBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_HardenStaminaBoost_C");

	return Clss;
}


// Rune_HardenStaminaBoost_C Rune_HardenStaminaBoost.Default__Rune_HardenStaminaBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_HardenStaminaBoost_C* URune_HardenStaminaBoost_C::GetDefaultObj()
{
	static class URune_HardenStaminaBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_HardenStaminaBoost_C*>(URune_HardenStaminaBoost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_HardenStaminaBoost.Rune_HardenStaminaBoost_C.RemoveIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_HardenStaminaBoost_C::RemoveIcon(class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_HardenStaminaBoost_C", "RemoveIcon");

	Params::URune_HardenStaminaBoost_C_RemoveIcon_Params Parms{};

	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_HardenStaminaBoost.Rune_HardenStaminaBoost_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_HardenStaminaBoost_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_HardenStaminaBoost_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_HardenStaminaBoost.Rune_HardenStaminaBoost_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_HardenStaminaBoost_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_HardenStaminaBoost_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_HardenStaminaBoost.Rune_HardenStaminaBoost_C.OnStoneFormEnterCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_HardenStaminaBoost_C::OnStoneFormEnterCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_HardenStaminaBoost_C", "OnStoneFormEnterCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_HardenStaminaBoost.Rune_HardenStaminaBoost_C.OnStoneFormExitCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_HardenStaminaBoost_C::OnStoneFormExitCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_HardenStaminaBoost_C", "OnStoneFormExitCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_HardenStaminaBoost.Rune_HardenStaminaBoost_C.ExecuteUbergraph_Rune_HardenStaminaBoost
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_HardenStaminaBoost_C::ExecuteUbergraph_Rune_HardenStaminaBoost(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_AddStatusIcon_IconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_HardenStaminaBoost_C", "ExecuteUbergraph_Rune_HardenStaminaBoost");

	Params::URune_HardenStaminaBoost_C_ExecuteUbergraph_Rune_HardenStaminaBoost_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetChanceForTier_ReturnValue = CallFunc_GetChanceForTier_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;

	UObject::ProcessEvent(Func, &Parms);

}

}


