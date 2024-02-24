#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BalistazookaProjectile_Explosive_Blast.BalistazookaProjectile_Explosive_Blast_C
// (Actor)

class UClass* ABalistazookaProjectile_Explosive_Blast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BalistazookaProjectile_Explosive_Blast_C");

	return Clss;
}


// BalistazookaProjectile_Explosive_Blast_C BalistazookaProjectile_Explosive_Blast.Default__BalistazookaProjectile_Explosive_Blast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABalistazookaProjectile_Explosive_Blast_C* ABalistazookaProjectile_Explosive_Blast_C::GetDefaultObj()
{
	static class ABalistazookaProjectile_Explosive_Blast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABalistazookaProjectile_Explosive_Blast_C*>(ABalistazookaProjectile_Explosive_Blast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BalistazookaProjectile_Explosive_Blast.BalistazookaProjectile_Explosive_Blast_C.ShouldEnableEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEnemyAlive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABalistazookaProjectile_Explosive_Blast_C::ShouldEnableEffect(class AEnemyCharacter_C* Enemy, bool CallFunc_IsEnemyAlive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BalistazookaProjectile_Explosive_Blast_C", "ShouldEnableEffect");

	Params::ABalistazookaProjectile_Explosive_Blast_C_ShouldEnableEffect_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.CallFunc_IsEnemyAlive_ReturnValue = CallFunc_IsEnemyAlive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BalistazookaProjectile_Explosive_Blast.BalistazookaProjectile_Explosive_Blast_C.OnEnemyHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABalistazookaProjectile_Explosive_Blast_C::OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BalistazookaProjectile_Explosive_Blast_C", "OnEnemyHit");

	Params::ABalistazookaProjectile_Explosive_Blast_C_OnEnemyHit_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalistazookaProjectile_Explosive_Blast.BalistazookaProjectile_Explosive_Blast_C.ExecuteUbergraph_BalistazookaProjectile_Explosive_Blast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_Event_Enemy                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactNormal                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldEnableEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemyAlive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABalistazookaProjectile_Explosive_Blast_C::ExecuteUbergraph_BalistazookaProjectile_Explosive_Blast(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, bool CallFunc_ShouldEnableEffect_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, bool CallFunc_IsEnemyAlive_ReturnValue, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BalistazookaProjectile_Explosive_Blast_C", "ExecuteUbergraph_BalistazookaProjectile_Explosive_Blast");

	Params::ABalistazookaProjectile_Explosive_Blast_C_ExecuteUbergraph_BalistazookaProjectile_Explosive_Blast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_Event_Enemy = K2Node_Event_Enemy;
	Parms.K2Node_Event_ImpactNormal = K2Node_Event_ImpactNormal;
	Parms.CallFunc_ShouldEnableEffect_ReturnValue = CallFunc_ShouldEnableEffect_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_IsEnemyAlive_ReturnValue = CallFunc_IsEnemyAlive_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


