#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPItemEffectSummonWeapon.BPItemEffectSummonWeapon_C
// (None)

class UClass* UBPItemEffectSummonWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPItemEffectSummonWeapon_C");

	return Clss;
}


// BPItemEffectSummonWeapon_C BPItemEffectSummonWeapon.Default__BPItemEffectSummonWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPItemEffectSummonWeapon_C* UBPItemEffectSummonWeapon_C::GetDefaultObj()
{
	static class UBPItemEffectSummonWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPItemEffectSummonWeapon_C*>(UBPItemEffectSummonWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPItemEffectSummonWeapon.BPItemEffectSummonWeapon_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectSummonWeapon_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectSummonWeapon_C", "OnAppliedBP");

	Params::UBPItemEffectSummonWeapon_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectSummonWeapon.BPItemEffectSummonWeapon_C.ExecuteUbergraph_BPItemEffectSummonWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_Event_Barbarous                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_Event_GameplayPC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFamiliarityUnlocked                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectSummonWeapon_C::ExecuteUbergraph_BPItemEffectSummonWeapon(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectSummonWeapon_C", "ExecuteUbergraph_BPItemEffectSummonWeapon");

	Params::UBPItemEffectSummonWeapon_C_ExecuteUbergraph_BPItemEffectSummonWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Barbarous = K2Node_Event_Barbarous;
	Parms.K2Node_Event_GameplayPC = K2Node_Event_GameplayPC;
	Parms.K2Node_Event_bFamiliarityUnlocked = K2Node_Event_bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}

}


