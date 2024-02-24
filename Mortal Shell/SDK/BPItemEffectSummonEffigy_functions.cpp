#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPItemEffectSummonEffigy.BPItemEffectSummonEffigy_C
// (None)

class UClass* UBPItemEffectSummonEffigy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPItemEffectSummonEffigy_C");

	return Clss;
}


// BPItemEffectSummonEffigy_C BPItemEffectSummonEffigy.Default__BPItemEffectSummonEffigy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPItemEffectSummonEffigy_C* UBPItemEffectSummonEffigy_C::GetDefaultObj()
{
	static class UBPItemEffectSummonEffigy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPItemEffectSummonEffigy_C*>(UBPItemEffectSummonEffigy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPItemEffectSummonEffigy.BPItemEffectSummonEffigy_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectSummonEffigy_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectSummonEffigy_C", "OnAppliedBP");

	Params::UBPItemEffectSummonEffigy_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectSummonEffigy.BPItemEffectSummonEffigy_C.ExecuteUbergraph_BPItemEffectSummonEffigy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_Event_Barbarous                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_Event_GameplayPC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFamiliarityUnlocked                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectSummonEffigy_C::ExecuteUbergraph_BPItemEffectSummonEffigy(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectSummonEffigy_C", "ExecuteUbergraph_BPItemEffectSummonEffigy");

	Params::UBPItemEffectSummonEffigy_C_ExecuteUbergraph_BPItemEffectSummonEffigy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Barbarous = K2Node_Event_Barbarous;
	Parms.K2Node_Event_GameplayPC = K2Node_Event_GameplayPC;
	Parms.K2Node_Event_bFamiliarityUnlocked = K2Node_Event_bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}

}


