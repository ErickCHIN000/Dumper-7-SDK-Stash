#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PolymorphCritter_Spawn.Action_PolymorphCritter_Spawn_C
// (None)

class UClass* UAction_PolymorphCritter_Spawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PolymorphCritter_Spawn_C");

	return Clss;
}


// Action_PolymorphCritter_Spawn_C Action_PolymorphCritter_Spawn.Default__Action_PolymorphCritter_Spawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PolymorphCritter_Spawn_C* UAction_PolymorphCritter_Spawn_C::GetDefaultObj()
{
	static class UAction_PolymorphCritter_Spawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PolymorphCritter_Spawn_C*>(UAction_PolymorphCritter_Spawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_PolymorphCritter_Spawn.Action_PolymorphCritter_Spawn_C.PlayFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_PolymorphCritter_Spawn_C::PlayFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_PolymorphCritter_Spawn_C", "PlayFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_PolymorphCritter_Spawn.Action_PolymorphCritter_Spawn_C.ExecuteUbergraph_Action_PolymorphCritter_Spawn
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_PolymorphCritter_Spawn_C::ExecuteUbergraph_Action_PolymorphCritter_Spawn(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_PolymorphCritter_Spawn_C", "ExecuteUbergraph_Action_PolymorphCritter_Spawn");

	Params::UAction_PolymorphCritter_Spawn_C_ExecuteUbergraph_Action_PolymorphCritter_Spawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


