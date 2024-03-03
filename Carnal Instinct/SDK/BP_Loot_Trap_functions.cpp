#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Loot_Trap.BP_Loot_Trap_C
// (Actor)

class UClass* ABP_Loot_Trap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Loot_Trap_C");

	return Clss;
}


// BP_Loot_Trap_C BP_Loot_Trap.Default__BP_Loot_Trap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Loot_Trap_C* ABP_Loot_Trap_C::GetDefaultObj()
{
	static class ABP_Loot_Trap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Loot_Trap_C*>(ABP_Loot_Trap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Loot_Trap.BP_Loot_Trap_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Loot_Trap_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Trap_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot_Trap.BP_Loot_Trap_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Loot_Trap_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Trap_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot_Trap.BP_Loot_Trap_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Loot_Trap_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Trap_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot_Trap.BP_Loot_Trap_C.ShowJar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Loot_Trap_C::ShowJar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Trap_C", "ShowJar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot_Trap.BP_Loot_Trap_C.Hide Jar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Loot_Trap_C::Hide_Jar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Trap_C", "Hide Jar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot_Trap.BP_Loot_Trap_C.ExecuteUbergraph_BP_Loot_Trap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Loot_Trap_C::ExecuteUbergraph_BP_Loot_Trap(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float CallFunc_PlayAnimMontage_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Trap_C", "ExecuteUbergraph_BP_Loot_Trap");

	Params::ABP_Loot_Trap_C_ExecuteUbergraph_BP_Loot_Trap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


