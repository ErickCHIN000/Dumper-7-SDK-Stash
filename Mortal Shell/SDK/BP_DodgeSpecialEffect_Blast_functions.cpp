#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DodgeSpecialEffect_Blast.BP_DodgeSpecialEffect_Blast_C
// (Actor)

class UClass* ABP_DodgeSpecialEffect_Blast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DodgeSpecialEffect_Blast_C");

	return Clss;
}


// BP_DodgeSpecialEffect_Blast_C BP_DodgeSpecialEffect_Blast.Default__BP_DodgeSpecialEffect_Blast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DodgeSpecialEffect_Blast_C* ABP_DodgeSpecialEffect_Blast_C::GetDefaultObj()
{
	static class ABP_DodgeSpecialEffect_Blast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DodgeSpecialEffect_Blast_C*>(ABP_DodgeSpecialEffect_Blast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DodgeSpecialEffect_Blast.BP_DodgeSpecialEffect_Blast_C.OnEnemyHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DodgeSpecialEffect_Blast_C::OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DodgeSpecialEffect_Blast_C", "OnEnemyHit");

	Params::ABP_DodgeSpecialEffect_Blast_C_OnEnemyHit_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DodgeSpecialEffect_Blast.BP_DodgeSpecialEffect_Blast_C.ExecuteUbergraph_BP_DodgeSpecialEffect_Blast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_Event_Enemy                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactNormal                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DodgeSpecialEffect_Blast_C::ExecuteUbergraph_BP_DodgeSpecialEffect_Blast(int32 EntryPoint, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DodgeSpecialEffect_Blast_C", "ExecuteUbergraph_BP_DodgeSpecialEffect_Blast");

	Params::ABP_DodgeSpecialEffect_Blast_C_ExecuteUbergraph_BP_DodgeSpecialEffect_Blast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Enemy = K2Node_Event_Enemy;
	Parms.K2Node_Event_ImpactNormal = K2Node_Event_ImpactNormal;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

