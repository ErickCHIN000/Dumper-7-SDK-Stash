#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C
// (None)

class UClass* UBuffCauseDamageOnStoneFormHitTaken_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffCauseDamageOnStoneFormHitTaken_C");

	return Clss;
}


// BuffCauseDamageOnStoneFormHitTaken_C BuffCauseDamageOnStoneFormHitTaken.Default__BuffCauseDamageOnStoneFormHitTaken_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffCauseDamageOnStoneFormHitTaken_C* UBuffCauseDamageOnStoneFormHitTaken_C::GetDefaultObj()
{
	static class UBuffCauseDamageOnStoneFormHitTaken_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffCauseDamageOnStoneFormHitTaken_C*>(UBuffCauseDamageOnStoneFormHitTaken_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffCauseDamageOnStoneFormHitTaken_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffCauseDamageOnStoneFormHitTaken_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffCauseDamageOnStoneFormHitTaken_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffCauseDamageOnStoneFormHitTaken_C", "OnBuffEnd");

	Params::UBuffCauseDamageOnStoneFormHitTaken_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C.OnLeftStoneForm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffCauseDamageOnStoneFormHitTaken_C::OnLeftStoneForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffCauseDamageOnStoneFormHitTaken_C", "OnLeftStoneForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C.OnDmgBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffCauseDamageOnStoneFormHitTaken_C::OnDmgBlocked(class AActor* SourceActor, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffCauseDamageOnStoneFormHitTaken_C", "OnDmgBlocked");

	Params::UBuffCauseDamageOnStoneFormHitTaken_C_OnDmgBlocked_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C.ExecuteUbergraph_BuffCauseDamageOnStoneFormHitTaken
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_SourceActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetActorToBuffAs0Base_As0_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetActorToBuffAs0Base_As0_Base_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffCauseDamageOnStoneFormHitTaken_C::ExecuteUbergraph_BuffCauseDamageOnStoneFormHitTaken(int32 EntryPoint, class AActor* K2Node_CustomEvent_SourceActor, float K2Node_CustomEvent_Amount, float CallFunc_Multiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bInterrupted, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base_1, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffCauseDamageOnStoneFormHitTaken_C", "ExecuteUbergraph_BuffCauseDamageOnStoneFormHitTaken");

	Params::UBuffCauseDamageOnStoneFormHitTaken_C_ExecuteUbergraph_BuffCauseDamageOnStoneFormHitTaken_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SourceActor = K2Node_CustomEvent_SourceActor;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.CallFunc_GetActorToBuffAs0Base_As0_Base = CallFunc_GetActorToBuffAs0Base_As0_Base;
	Parms.CallFunc_GetActorToBuffAs0Base_As0_Base_1 = CallFunc_GetActorToBuffAs0Base_As0_Base_1;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


