#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandBase_Guitar_SpecialOne.LightBrigandBase_Guitar_SpecialOne_C
// (Actor, Pawn)

class UClass* ALightBrigandBase_Guitar_SpecialOne_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandBase_Guitar_SpecialOne_C");

	return Clss;
}


// LightBrigandBase_Guitar_SpecialOne_C LightBrigandBase_Guitar_SpecialOne.Default__LightBrigandBase_Guitar_SpecialOne_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandBase_Guitar_SpecialOne_C* ALightBrigandBase_Guitar_SpecialOne_C::GetDefaultObj()
{
	static class ALightBrigandBase_Guitar_SpecialOne_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandBase_Guitar_SpecialOne_C*>(ALightBrigandBase_Guitar_SpecialOne_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightBrigandBase_Guitar_SpecialOne.LightBrigandBase_Guitar_SpecialOne_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_SpecialOne_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_SpecialOne_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar_SpecialOne.LightBrigandBase_Guitar_SpecialOne_C.DropGuitar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_SpecialOne_C::DropGuitar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_SpecialOne_C", "DropGuitar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar_SpecialOne.LightBrigandBase_Guitar_SpecialOne_C.ExecuteUbergraph_LightBrigandBase_Guitar_SpecialOne
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_small_physics_prop_guitar_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_Guitar_SpecialOne_C::ExecuteUbergraph_LightBrigandBase_Guitar_SpecialOne(int32 EntryPoint, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_small_physics_prop_guitar_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_SpecialOne_C", "ExecuteUbergraph_LightBrigandBase_Guitar_SpecialOne");

	Params::ALightBrigandBase_Guitar_SpecialOne_C_ExecuteUbergraph_LightBrigandBase_Guitar_SpecialOne_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


