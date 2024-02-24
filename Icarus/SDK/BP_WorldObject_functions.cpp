#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WorldObject.BP_WorldObject_C
// (Actor)

class UClass* ABP_WorldObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorldObject_C");

	return Clss;
}


// BP_WorldObject_C BP_WorldObject.Default__BP_WorldObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WorldObject_C* ABP_WorldObject_C::GetDefaultObj()
{
	static class ABP_WorldObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WorldObject_C*>(ABP_WorldObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WorldObject.BP_WorldObject_C.Play Interact Sound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

void ABP_WorldObject_C::Play_Interact_Sound(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldObject_C", "Play Interact Sound");

	Params::ABP_WorldObject_C_Play_Interact_Sound_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WorldObject.BP_WorldObject_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WorldObject_C::OnInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldObject_C", "OnInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WorldObject.BP_WorldObject_C.OnRep_WasInteracted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WorldObject_C::OnRep_WasInteracted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldObject_C", "OnRep_WasInteracted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WorldObject.BP_WorldObject_C.WorldObject_Held_Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorldObject_C::WorldObject_Held_Interact(class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldObject_C", "WorldObject_Held_Interact");

	Params::ABP_WorldObject_C_WorldObject_Held_Interact_Params Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WorldObject.BP_WorldObject_C.WorldObject_Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorldObject_C::WorldObject_Interact(class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldObject_C", "WorldObject_Interact");

	Params::ABP_WorldObject_C_WorldObject_Interact_Params Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WorldObject.BP_WorldObject_C.WorldInteract__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WorldObject_C::WorldInteract__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldObject_C", "WorldInteract__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


