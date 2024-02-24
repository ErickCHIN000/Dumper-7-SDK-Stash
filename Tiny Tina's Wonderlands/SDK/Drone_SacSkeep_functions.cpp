#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Drone_SacSkeep.Drone_SacSkeep_C
// (Actor)

class UClass* ADrone_SacSkeep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Drone_SacSkeep_C");

	return Clss;
}


// Drone_SacSkeep_C Drone_SacSkeep.Default__Drone_SacSkeep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADrone_SacSkeep_C* ADrone_SacSkeep_C::GetDefaultObj()
{
	static class ADrone_SacSkeep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADrone_SacSkeep_C*>(ADrone_SacSkeep_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Drone_SacSkeep.Drone_SacSkeep_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_SacSkeep_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_SacSkeep_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_SacSkeep.Drone_SacSkeep_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADrone_SacSkeep_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_SacSkeep_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_SacSkeep.Drone_SacSkeep_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Drone_SacSkeep
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_SacSkeep_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Drone_SacSkeep(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_SacSkeep_C", "BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Drone_SacSkeep");

	Params::ADrone_SacSkeep_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Drone_SacSkeep_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_SacSkeep.Drone_SacSkeep_C.HealingPulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_SacSkeep_C::HealingPulse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_SacSkeep_C", "HealingPulse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_SacSkeep.Drone_SacSkeep_C.OnExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADrone_SacSkeep_C::OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_SacSkeep_C", "OnExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_SacSkeep.Drone_SacSkeep_C.ExecuteUbergraph_Drone_SacSkeep
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageComponent*            K2Node_ComponentBoundEvent_DamageReceiver                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      K2Node_ComponentBoundEvent_DamageCauser                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ADrone_SacSkeep_C::ExecuteUbergraph_Drone_SacSkeep(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& Temp_struct_Variable, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, class UDamageComponent* K2Node_ComponentBoundEvent_DamageReceiver, class UDamageCauserComponent* K2Node_ComponentBoundEvent_DamageCauser, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_SacSkeep_C", "ExecuteUbergraph_Drone_SacSkeep");

	Params::ADrone_SacSkeep_C_ExecuteUbergraph_Drone_SacSkeep_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.K2Node_ComponentBoundEvent_DamageReceiver = K2Node_ComponentBoundEvent_DamageReceiver;
	Parms.K2Node_ComponentBoundEvent_DamageCauser = K2Node_ComponentBoundEvent_DamageCauser;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


