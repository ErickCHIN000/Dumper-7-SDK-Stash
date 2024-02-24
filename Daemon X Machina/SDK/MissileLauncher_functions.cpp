#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissileLauncher.MissileLauncher_C
// (Actor)

class UClass* AMissileLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissileLauncher_C");

	return Clss;
}


// MissileLauncher_C MissileLauncher.Default__MissileLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMissileLauncher_C* AMissileLauncher_C::GetDefaultObj()
{
	static class AMissileLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMissileLauncher_C*>(AMissileLauncher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissileLauncher.MissileLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMissileLauncher_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissileLauncher_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissileLauncher.MissileLauncher_C.StartLaunch
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMissileLauncher_C::StartLaunch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissileLauncher_C", "StartLaunch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissileLauncher.MissileLauncher_C.ExecuteUbergraph_MissileLauncher
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FTransform>          CallFunc_AttackWithTargetActor_spawnTransformList                (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_AttackWithTargetActor_ownerVelocity                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_AttackWithTargetActor_speedRandRateList                 (ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_AttackWithTargetActor_impactRandOffsetList              (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_GetLockOnTarget_Target                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          CallFunc_AttackWithTargetActor_spawnTransformList1               (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_AttackWithTargetActor_ownerVelocity1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_AttackWithTargetActor_speedRandRateList1                (ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_AttackWithTargetActor_impactRandOffsetList1             (ZeroConstructor, ReferenceParm)

void AMissileLauncher_C::ExecuteUbergraph_MissileLauncher(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerControlled_ReturnValue, TArray<struct FTransform>& CallFunc_AttackWithTargetActor_spawnTransformList, const struct FVector& CallFunc_AttackWithTargetActor_ownerVelocity, TArray<float>& CallFunc_AttackWithTargetActor_speedRandRateList, TArray<struct FVector>& CallFunc_AttackWithTargetActor_impactRandOffsetList, class AActor* CallFunc_GetLockOnTarget_Target, TArray<struct FTransform>& CallFunc_AttackWithTargetActor_spawnTransformList1, const struct FVector& CallFunc_AttackWithTargetActor_ownerVelocity1, TArray<float>& CallFunc_AttackWithTargetActor_speedRandRateList1, TArray<struct FVector>& CallFunc_AttackWithTargetActor_impactRandOffsetList1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissileLauncher_C", "ExecuteUbergraph_MissileLauncher");

	Params::AMissileLauncher_C_ExecuteUbergraph_MissileLauncher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_AttackWithTargetActor_spawnTransformList = CallFunc_AttackWithTargetActor_spawnTransformList;
	Parms.CallFunc_AttackWithTargetActor_ownerVelocity = CallFunc_AttackWithTargetActor_ownerVelocity;
	Parms.CallFunc_AttackWithTargetActor_speedRandRateList = CallFunc_AttackWithTargetActor_speedRandRateList;
	Parms.CallFunc_AttackWithTargetActor_impactRandOffsetList = CallFunc_AttackWithTargetActor_impactRandOffsetList;
	Parms.CallFunc_GetLockOnTarget_Target = CallFunc_GetLockOnTarget_Target;
	Parms.CallFunc_AttackWithTargetActor_spawnTransformList1 = CallFunc_AttackWithTargetActor_spawnTransformList1;
	Parms.CallFunc_AttackWithTargetActor_ownerVelocity1 = CallFunc_AttackWithTargetActor_ownerVelocity1;
	Parms.CallFunc_AttackWithTargetActor_speedRandRateList1 = CallFunc_AttackWithTargetActor_speedRandRateList1;
	Parms.CallFunc_AttackWithTargetActor_impactRandOffsetList1 = CallFunc_AttackWithTargetActor_impactRandOffsetList1;

	UObject::ProcessEvent(Func, &Parms);

}

}


