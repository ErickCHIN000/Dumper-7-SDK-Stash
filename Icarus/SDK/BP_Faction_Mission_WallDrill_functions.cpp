#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Faction_Mission_WallDrill.BP_Faction_Mission_WallDrill_C
// (Actor)

class UClass* ABP_Faction_Mission_WallDrill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Faction_Mission_WallDrill_C");

	return Clss;
}


// BP_Faction_Mission_WallDrill_C BP_Faction_Mission_WallDrill.Default__BP_Faction_Mission_WallDrill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Faction_Mission_WallDrill_C* ABP_Faction_Mission_WallDrill_C::GetDefaultObj()
{
	static class ABP_Faction_Mission_WallDrill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Faction_Mission_WallDrill_C*>(ABP_Faction_Mission_WallDrill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Faction_Mission_WallDrill.BP_Faction_Mission_WallDrill_C.TriggerCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Faction_Mission_WallDrill_C::TriggerCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_WallDrill_C", "TriggerCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Faction_Mission_WallDrill.BP_Faction_Mission_WallDrill_C.OnEnergyStateUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Faction_Mission_WallDrill_C::OnEnergyStateUpdated(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_WallDrill_C", "OnEnergyStateUpdated");

	Params::ABP_Faction_Mission_WallDrill_C_OnEnergyStateUpdated_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Faction_Mission_WallDrill.BP_Faction_Mission_WallDrill_C.ExecuteUbergraph_BP_Faction_Mission_WallDrill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FIcarusItemConstructionParametersK2Node_MakeStruct_IcarusItemConstructionParameters               (None)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsActive                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Faction_Mission_WallDrill_C::ExecuteUbergraph_BP_Faction_Mission_WallDrill(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, bool K2Node_Event_IsActive, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_WallDrill_C", "ExecuteUbergraph_BP_Faction_Mission_WallDrill");

	Params::ABP_Faction_Mission_WallDrill_C_ExecuteUbergraph_BP_Faction_Mission_WallDrill_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemConstructionParameters = K2Node_MakeStruct_IcarusItemConstructionParameters;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;
	Parms.K2Node_Event_IsActive = K2Node_Event_IsActive;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


