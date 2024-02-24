#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneStomp_SpecialEffect_Poison.BP_StoneStomp_SpecialEffect_Poison_C
// (Actor)

class UClass* ABP_StoneStomp_SpecialEffect_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneStomp_SpecialEffect_Poison_C");

	return Clss;
}


// BP_StoneStomp_SpecialEffect_Poison_C BP_StoneStomp_SpecialEffect_Poison.Default__BP_StoneStomp_SpecialEffect_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneStomp_SpecialEffect_Poison_C* ABP_StoneStomp_SpecialEffect_Poison_C::GetDefaultObj()
{
	static class ABP_StoneStomp_SpecialEffect_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneStomp_SpecialEffect_Poison_C*>(ABP_StoneStomp_SpecialEffect_Poison_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StoneStomp_SpecialEffect_Poison.BP_StoneStomp_SpecialEffect_Poison_C.OnEnemyHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StoneStomp_SpecialEffect_Poison_C::OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneStomp_SpecialEffect_Poison_C", "OnEnemyHit");

	Params::ABP_StoneStomp_SpecialEffect_Poison_C_OnEnemyHit_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StoneStomp_SpecialEffect_Poison.BP_StoneStomp_SpecialEffect_Poison_C.ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Poison
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_Event_Enemy                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactNormal                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StoneStomp_SpecialEffect_Poison_C::ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Poison(int32 EntryPoint, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneStomp_SpecialEffect_Poison_C", "ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Poison");

	Params::ABP_StoneStomp_SpecialEffect_Poison_C_ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Poison_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Enemy = K2Node_Event_Enemy;
	Parms.K2Node_Event_ImpactNormal = K2Node_Event_ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}

}


