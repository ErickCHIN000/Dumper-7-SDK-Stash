#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x2B2 - 0x298)
// BlueprintGeneratedClass BP_VehicleSpawner.BP_VehicleSpawner_C
class ABP_VehicleSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnerUsed_;                                      // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_VehicleSpawner               VehicleSelection;                                  // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_VehicleSpawner_C* GetDefaultObj();

	void ComponentsToSave(TArray<class UActorComponent*>* Components);
	bool RandomChance(double Chance, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue);
	void SpawnSelectVehicles(class UClass** Vehicle, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem_2, int32 CallFunc_Array_Random_OutIndex_2, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem_3, int32 CallFunc_Array_Random_OutIndex_3, const struct FStruct_VehicleSpawner& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, const struct FStruct_VehicleDT& CallFunc_Array_Random_OutItem_4, int32 CallFunc_Array_Random_OutIndex_4);
	void OnCompleted_943CBE6A4C95C1F090F71487FED92EDC();
	void ActorLoaded();
	void ActorPreSave();
	void ActorSaved();
	void ReceiveBeginPlay();
	void SkipSave();
	void Svr_Spawn();
	void ExecuteUbergraph_BP_VehicleSpawner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEMSAsyncWait* CallFunc_AsyncWaitForOperation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, class UClass* CallFunc_SpawnSelectVehicles_Vehicle, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_RandomChance_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_VehicleMaster_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class ABP_VehicleMaster_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


