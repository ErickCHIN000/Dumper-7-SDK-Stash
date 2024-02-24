#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Axatana_TransformDamage.BP_Axatana_TransformDamage_C
// (Actor)

class UClass* ABP_Axatana_TransformDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Axatana_TransformDamage_C");

	return Clss;
}


// BP_Axatana_TransformDamage_C BP_Axatana_TransformDamage.Default__BP_Axatana_TransformDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Axatana_TransformDamage_C* ABP_Axatana_TransformDamage_C::GetDefaultObj()
{
	static class ABP_Axatana_TransformDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Axatana_TransformDamage_C*>(ABP_Axatana_TransformDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Axatana_TransformDamage.BP_Axatana_TransformDamage_C.OnEnemyHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Axatana_TransformDamage_C::OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Axatana_TransformDamage_C", "OnEnemyHit");

	Params::ABP_Axatana_TransformDamage_C_OnEnemyHit_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Axatana_TransformDamage.BP_Axatana_TransformDamage_C.ExecuteUbergraph_BP_Axatana_TransformDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_Event_Enemy                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactNormal                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Axatana_TransformDamage_C::ExecuteUbergraph_BP_Axatana_TransformDamage(int32 EntryPoint, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Axatana_TransformDamage_C", "ExecuteUbergraph_BP_Axatana_TransformDamage");

	Params::ABP_Axatana_TransformDamage_C_ExecuteUbergraph_BP_Axatana_TransformDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Enemy = K2Node_Event_Enemy;
	Parms.K2Node_Event_ImpactNormal = K2Node_Event_ImpactNormal;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


