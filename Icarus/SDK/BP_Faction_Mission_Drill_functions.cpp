#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C
// (Actor)

class UClass* ABP_Faction_Mission_Drill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Faction_Mission_Drill_C");

	return Clss;
}


// BP_Faction_Mission_Drill_C BP_Faction_Mission_Drill.Default__BP_Faction_Mission_Drill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Faction_Mission_Drill_C* ABP_Faction_Mission_Drill_C::GetDefaultObj()
{
	static class ABP_Faction_Mission_Drill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Faction_Mission_Drill_C*>(ABP_Faction_Mission_Drill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C.GeneratorStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Faction_Mission_Drill_C::GeneratorStateUpdate(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Drill_C", "GeneratorStateUpdate");

	Params::ABP_Faction_Mission_Drill_C_GeneratorStateUpdate_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C.SetCosmeticsState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Faction_Mission_Drill_C::SetCosmeticsState(bool Active, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Drill_C", "SetCosmeticsState");

	Params::ABP_Faction_Mission_Drill_C_SetCosmeticsState_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C.TriggerCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Faction_Mission_Drill_C::TriggerCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Drill_C", "TriggerCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C.OnEnergyStateUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Faction_Mission_Drill_C::OnEnergyStateUpdated(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Drill_C", "OnEnergyStateUpdated");

	Params::ABP_Faction_Mission_Drill_C_OnEnergyStateUpdated_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C.ExecuteUbergraph_BP_Faction_Mission_Drill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FIcarusItemConstructionParametersK2Node_MakeStruct_IcarusItemConstructionParameters               (None)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters_1                    (None)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemDynamicData>    K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FItemData                   K2Node_MakeStruct_ItemData                                       (ContainsInstancedReference)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsActive                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Faction_Mission_Drill_C::ExecuteUbergraph_BP_Faction_Mission_Drill(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters_1, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, TArray<struct FItemDynamicData>& K2Node_MakeArray_Array, const struct FItemData& K2Node_MakeStruct_ItemData, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue_1, bool K2Node_Event_IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Faction_Mission_Drill_C", "ExecuteUbergraph_BP_Faction_Mission_Drill");

	Params::ABP_Faction_Mission_Drill_C_ExecuteUbergraph_BP_Faction_Mission_Drill_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemConstructionParameters = K2Node_MakeStruct_IcarusItemConstructionParameters;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters_1 = K2Node_MakeStruct_IcarusItemSpawnParameters_1;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_ItemData = K2Node_MakeStruct_ItemData;
	Parms.CallFunc_SpawnItemActor_ReturnValue_1 = CallFunc_SpawnItemActor_ReturnValue_1;
	Parms.K2Node_Event_IsActive = K2Node_Event_IsActive;

	UObject::ProcessEvent(Func, &Parms);

}

}


