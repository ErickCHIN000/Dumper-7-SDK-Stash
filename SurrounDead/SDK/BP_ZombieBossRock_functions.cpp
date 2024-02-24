#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZombieBossRock.BP_ZombieBossRock_C
// (Actor)

class UClass* ABP_ZombieBossRock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZombieBossRock_C");

	return Clss;
}


// BP_ZombieBossRock_C BP_ZombieBossRock.Default__BP_ZombieBossRock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZombieBossRock_C* ABP_ZombieBossRock_C::GetDefaultObj()
{
	static class ABP_ZombieBossRock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZombieBossRock_C*>(ABP_ZombieBossRock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZombieBossRock.BP_ZombieBossRock_C.Launch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Origin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBossRock_C::Launch(const struct FVector& Origin, const struct FVector& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBossRock_C", "Launch");

	Params::ABP_ZombieBossRock_C_Launch_Params Parms{};

	Parms.Origin = Origin;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZombieBossRock.BP_ZombieBossRock_C.ExecuteUbergraph_BP_ZombieBossRock
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Origin                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BlueprintSuggestProjectileVelocity_TossVelocity         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BlueprintSuggestProjectileVelocity_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBossRock_C::ExecuteUbergraph_BP_ZombieBossRock(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Origin, const struct FVector& K2Node_CustomEvent_Target, const struct FVector& CallFunc_BlueprintSuggestProjectileVelocity_TossVelocity, bool CallFunc_BlueprintSuggestProjectileVelocity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBossRock_C", "ExecuteUbergraph_BP_ZombieBossRock");

	Params::ABP_ZombieBossRock_C_ExecuteUbergraph_BP_ZombieBossRock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Origin = K2Node_CustomEvent_Origin;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_BlueprintSuggestProjectileVelocity_TossVelocity = CallFunc_BlueprintSuggestProjectileVelocity_TossVelocity;
	Parms.CallFunc_BlueprintSuggestProjectileVelocity_ReturnValue = CallFunc_BlueprintSuggestProjectileVelocity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


