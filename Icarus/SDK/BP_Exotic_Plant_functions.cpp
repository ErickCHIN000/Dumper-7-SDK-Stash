#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Exotic_Plant.BP_Exotic_Plant_C
// (Actor)

class UClass* ABP_Exotic_Plant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Exotic_Plant_C");

	return Clss;
}


// BP_Exotic_Plant_C BP_Exotic_Plant.Default__BP_Exotic_Plant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Exotic_Plant_C* ABP_Exotic_Plant_C::GetDefaultObj()
{
	static class ABP_Exotic_Plant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Exotic_Plant_C*>(ABP_Exotic_Plant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Exotic_Plant.BP_Exotic_Plant_C.PlayHarvestFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Exotic_Plant_C::PlayHarvestFX(const struct FVector& Location, class AIcarusPlayerCharacter* Instigator, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Plant_C", "PlayHarvestFX");

	Params::ABP_Exotic_Plant_C_PlayHarvestFX_Params Parms{};

	Parms.Location = Location;
	Parms.Instigator = Instigator;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Exotic_Plant.BP_Exotic_Plant_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Exotic_Plant_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Plant_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Exotic_Plant.BP_Exotic_Plant_C.ExecuteUbergraph_BP_Exotic_Plant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Exotic_Plant_C::ExecuteUbergraph_BP_Exotic_Plant(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Exotic_Plant_C", "ExecuteUbergraph_BP_Exotic_Plant");

	Params::ABP_Exotic_Plant_C_ExecuteUbergraph_BP_Exotic_Plant_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


