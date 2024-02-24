#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VehicleSpawner.BP_VehicleSpawner_C
// (Actor)

class UClass* ABP_VehicleSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VehicleSpawner_C");

	return Clss;
}


// BP_VehicleSpawner_C BP_VehicleSpawner.Default__BP_VehicleSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VehicleSpawner_C* ABP_VehicleSpawner_C::GetDefaultObj()
{
	static class ABP_VehicleSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VehicleSpawner_C*>(ABP_VehicleSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ComponentsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*>     Components                                                       (Parm, OutParm, ContainsInstancedReference)

void ABP_VehicleSpawner_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "ComponentsToSave");

	Params::ABP_VehicleSpawner_C_ComponentsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Components != nullptr)
		*Components = std::move(Parms.Components);

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.RandomChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Chance                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_VehicleSpawner_C::RandomChance(double Chance, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "RandomChance");

	Params::ABP_VehicleSpawner_C_RandomChance_Params Parms{};

	Parms.Chance = Chance;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.SpawnSelectVehicles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Vehicle                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleSpawner      CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleSpawner      CallFunc_GetDataTableRowFromName_OutRow_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleDT           CallFunc_Array_Random_OutItem                                    (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleDT           CallFunc_Array_Random_OutItem_1                                  (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleSpawner      CallFunc_GetDataTableRowFromName_OutRow_2                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleSpawner      CallFunc_GetDataTableRowFromName_OutRow_3                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleDT           CallFunc_Array_Random_OutItem_2                                  (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleDT           CallFunc_Array_Random_OutItem_3                                  (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleSpawner      CallFunc_GetDataTableRowFromName_OutRow_4                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_VehicleDT           CallFunc_Array_Random_OutItem_4                                  (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleSpawner_C::SpawnSelectVehicles(class UClass** Vehicle, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem_2, int32 CallFunc_Array_Random_OutIndex_2, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem_3, int32 CallFunc_Array_Random_OutIndex_3, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem_4, int32 CallFunc_Array_Random_OutIndex_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "SpawnSelectVehicles");

	Params::ABP_VehicleSpawner_C_SpawnSelectVehicles_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_Random_OutItem_1 = CallFunc_Array_Random_OutItem_1;
	Parms.CallFunc_Array_Random_OutIndex_1 = CallFunc_Array_Random_OutIndex_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Random_OutItem_2 = CallFunc_Array_Random_OutItem_2;
	Parms.CallFunc_Array_Random_OutIndex_2 = CallFunc_Array_Random_OutIndex_2;
	Parms.CallFunc_Array_Random_OutItem_3 = CallFunc_Array_Random_OutItem_3;
	Parms.CallFunc_Array_Random_OutIndex_3 = CallFunc_Array_Random_OutIndex_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Random_OutItem_4 = CallFunc_Array_Random_OutItem_4;
	Parms.CallFunc_Array_Random_OutIndex_4 = CallFunc_Array_Random_OutIndex_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Vehicle != nullptr)
		*Vehicle = Parms.Vehicle;

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.OnCompleted_943CBE6A4C95C1F090F71487FED92EDC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleSpawner_C::OnCompleted_943CBE6A4C95C1F090F71487FED92EDC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "OnCompleted_943CBE6A4C95C1F090F71487FED92EDC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ActorLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleSpawner_C::ActorLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "ActorLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ActorPreSave
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleSpawner_C::ActorPreSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "ActorPreSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ActorSaved
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleSpawner_C::ActorSaved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "ActorSaved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_VehicleSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.SkipSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleSpawner_C::SkipSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "SkipSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.Svr_Spawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleSpawner_C::Svr_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "Svr_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ExecuteUbergraph_BP_VehicleSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEMSAsyncWait*               CallFunc_AsyncWaitForOperation_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SpawnSelectVehicles_Vehicle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomChance_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleMaster_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_VehicleMaster_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleSpawner_C::ExecuteUbergraph_BP_VehicleSpawner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEMSAsyncWait* CallFunc_AsyncWaitForOperation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, class UClass* CallFunc_SpawnSelectVehicles_Vehicle, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_RandomChance_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_VehicleMaster_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class ABP_VehicleMaster_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSpawner_C", "ExecuteUbergraph_BP_VehicleSpawner");

	Params::ABP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AsyncWaitForOperation_ReturnValue = CallFunc_AsyncWaitForOperation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_SpawnSelectVehicles_Vehicle = CallFunc_SpawnSelectVehicles_Vehicle;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_RandomChance_ReturnValue = CallFunc_RandomChance_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


