#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ADeath_Mushroom_Squish.ADeath_Mushroom_Squish_C
// (None)

class UClass* UADeath_Mushroom_Squish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ADeath_Mushroom_Squish_C");

	return Clss;
}


// ADeath_Mushroom_Squish_C ADeath_Mushroom_Squish.Default__ADeath_Mushroom_Squish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UADeath_Mushroom_Squish_C* UADeath_Mushroom_Squish_C::GetDefaultObj()
{
	static class UADeath_Mushroom_Squish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UADeath_Mushroom_Squish_C*>(UADeath_Mushroom_Squish_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ADeath_Mushroom_Squish.ADeath_Mushroom_Squish_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UADeath_Mushroom_Squish_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ADeath_Mushroom_Squish_C", "OnBegin");

	Params::UADeath_Mushroom_Squish_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ADeath_Mushroom_Squish.ADeath_Mushroom_Squish_C.ExecuteUbergraph_ADeath_Mushroom_Squish
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UADeath_Mushroom_Squish_C::ExecuteUbergraph_ADeath_Mushroom_Squish(int32 EntryPoint, class AActor* K2Node_Event_Actor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ADeath_Mushroom_Squish_C", "ExecuteUbergraph_ADeath_Mushroom_Squish");

	Params::UADeath_Mushroom_Squish_C_ExecuteUbergraph_ADeath_Mushroom_Squish_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


