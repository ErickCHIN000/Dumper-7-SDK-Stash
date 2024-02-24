#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_AddMaxResolve.Rune_AddMaxResolve_C
// (None)

class UClass* URune_AddMaxResolve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_AddMaxResolve_C");

	return Clss;
}


// Rune_AddMaxResolve_C Rune_AddMaxResolve.Default__Rune_AddMaxResolve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_AddMaxResolve_C* URune_AddMaxResolve_C::GetDefaultObj()
{
	static class URune_AddMaxResolve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_AddMaxResolve_C*>(URune_AddMaxResolve_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_AddMaxResolve.Rune_AddMaxResolve_C.AddMaxResolve_OnEnemyHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_AddMaxResolve_C::AddMaxResolve_OnEnemyHit(class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddMaxResolve_C", "AddMaxResolve_OnEnemyHit");

	Params::URune_AddMaxResolve_C_AddMaxResolve_OnEnemyHit_Params Parms{};

	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_AddMaxResolve.Rune_AddMaxResolve_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_AddMaxResolve_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddMaxResolve_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_AddMaxResolve.Rune_AddMaxResolve_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_AddMaxResolve_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddMaxResolve_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_AddMaxResolve.Rune_AddMaxResolve_C.ExecuteUbergraph_Rune_AddMaxResolve
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_HitActor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABossBaseCharacter_C*        K2Node_DynamicCast_AsBoss_Base_Character                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasKilledThisFrame_bYes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_Character_C>CallFunc_AddMaxResolveBonus_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_AddMaxResolve_C::ExecuteUbergraph_Rune_AddMaxResolve(int32 EntryPoint, class AActor* K2Node_CustomEvent_HitActor, class ABossBaseCharacter_C* K2Node_DynamicCast_AsBoss_Base_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WasKilledThisFrame_bYes, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetChanceForTier_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> CallFunc_AddMaxResolveBonus_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddMaxResolve_C", "ExecuteUbergraph_Rune_AddMaxResolve");

	Params::URune_AddMaxResolve_C_ExecuteUbergraph_Rune_AddMaxResolve_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_HitActor = K2Node_CustomEvent_HitActor;
	Parms.K2Node_DynamicCast_AsBoss_Base_Character = K2Node_DynamicCast_AsBoss_Base_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_WasKilledThisFrame_bYes = CallFunc_WasKilledThisFrame_bYes;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetChanceForTier_ReturnValue = CallFunc_GetChanceForTier_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_AddMaxResolveBonus_self_CastInput = CallFunc_AddMaxResolveBonus_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


