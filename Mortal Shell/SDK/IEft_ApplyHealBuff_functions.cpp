#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEft_ApplyHealBuff.IEft_ApplyHealBuff_C
// (None)

class UClass* UIEft_ApplyHealBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEft_ApplyHealBuff_C");

	return Clss;
}


// IEft_ApplyHealBuff_C IEft_ApplyHealBuff.Default__IEft_ApplyHealBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEft_ApplyHealBuff_C* UIEft_ApplyHealBuff_C::GetDefaultObj()
{
	static class UIEft_ApplyHealBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEft_ApplyHealBuff_C*>(UIEft_ApplyHealBuff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEft_ApplyHealBuff.IEft_ApplyHealBuff_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEft_ApplyHealBuff_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ApplyHealBuff_C", "OnAppliedBP");

	Params::UIEft_ApplyHealBuff_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_ApplyHealBuff.IEft_ApplyHealBuff_C.ExecuteUbergraph_IEft_ApplyHealBuff
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_Event_Barbarous                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_Event_GameplayPC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFamiliarityUnlocked                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObjectHeal_C*           CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_ApplyHealBuff_C::ExecuteUbergraph_IEft_ApplyHealBuff(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, class UBuffObjectHeal_C* CallFunc_SpawnObject_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ApplyHealBuff_C", "ExecuteUbergraph_IEft_ApplyHealBuff");

	Params::UIEft_ApplyHealBuff_C_ExecuteUbergraph_IEft_ApplyHealBuff_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Barbarous = K2Node_Event_Barbarous;
	Parms.K2Node_Event_GameplayPC = K2Node_Event_GameplayPC;
	Parms.K2Node_Event_bFamiliarityUnlocked = K2Node_Event_bFamiliarityUnlocked;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


