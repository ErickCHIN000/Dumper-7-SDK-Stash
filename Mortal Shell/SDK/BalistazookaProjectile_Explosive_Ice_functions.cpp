#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BalistazookaProjectile_Explosive_Ice.BalistazookaProjectile_Explosive_Ice_C
// (Actor)

class UClass* ABalistazookaProjectile_Explosive_Ice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BalistazookaProjectile_Explosive_Ice_C");

	return Clss;
}


// BalistazookaProjectile_Explosive_Ice_C BalistazookaProjectile_Explosive_Ice.Default__BalistazookaProjectile_Explosive_Ice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABalistazookaProjectile_Explosive_Ice_C* ABalistazookaProjectile_Explosive_Ice_C::GetDefaultObj()
{
	static class ABalistazookaProjectile_Explosive_Ice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABalistazookaProjectile_Explosive_Ice_C*>(ABalistazookaProjectile_Explosive_Ice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BalistazookaProjectile_Explosive_Ice.BalistazookaProjectile_Explosive_Ice_C.ShouldEnableEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEnemyAlive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABalistazookaProjectile_Explosive_Ice_C::ShouldEnableEffect(class AEnemyCharacter_C* Enemy, bool CallFunc_IsEnemyAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BalistazookaProjectile_Explosive_Ice_C", "ShouldEnableEffect");

	Params::ABalistazookaProjectile_Explosive_Ice_C_ShouldEnableEffect_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.CallFunc_IsEnemyAlive_ReturnValue = CallFunc_IsEnemyAlive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BalistazookaProjectile_Explosive_Ice.BalistazookaProjectile_Explosive_Ice_C.OnEnemyHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABalistazookaProjectile_Explosive_Ice_C::OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BalistazookaProjectile_Explosive_Ice_C", "OnEnemyHit");

	Params::ABalistazookaProjectile_Explosive_Ice_C_OnEnemyHit_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalistazookaProjectile_Explosive_Ice.BalistazookaProjectile_Explosive_Ice_C.ExecuteUbergraph_BalistazookaProjectile_Explosive_Ice
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_Event_Enemy                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactNormal                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldEnableEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABalistazookaProjectile_Explosive_Ice_C::ExecuteUbergraph_BalistazookaProjectile_Explosive_Ice(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, bool CallFunc_ShouldEnableEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BalistazookaProjectile_Explosive_Ice_C", "ExecuteUbergraph_BalistazookaProjectile_Explosive_Ice");

	Params::ABalistazookaProjectile_Explosive_Ice_C_ExecuteUbergraph_BalistazookaProjectile_Explosive_Ice_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_Enemy = K2Node_Event_Enemy;
	Parms.K2Node_Event_ImpactNormal = K2Node_Event_ImpactNormal;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_ShouldEnableEffect_ReturnValue = CallFunc_ShouldEnableEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


