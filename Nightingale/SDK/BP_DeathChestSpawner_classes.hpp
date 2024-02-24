#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x368 - 0x2A0)
// BlueprintGeneratedClass BP_DeathChestSpawner.BP_DeathChestSpawner_C
class ABP_DeathChestSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInWorldItemContainerComponent*        TempStorageContainer;                              // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       Container;                                         // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               InventoryEntriesToTransfer;                        // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	uint8                                        Pad_6225[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              DeathChest;                                        // 0x2E0(0x80)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               SpawnedStructure;                                  // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeathChestSpawner_C* GetDefaultObj();

	void TransferItemsToTempStorage(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, TScriptInterface<class IItemContainer> CallFunc_TransferItemToContainer_NewContainer_CastInput, int32 CallFunc_TransferItemToContainer_AmountTransferred, bool CallFunc_TransferItemToContainer_ReturnValue);
	void ReceiveBeginPlay();
	void EQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void FallBackEQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void ExecuteUbergraph_BP_DeathChestSpawner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance_1, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext_1, class AController* CallFunc_GetController_ReturnValue, class UObject* CallFunc_SpawnStructure_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, class ABP_Structure_Functional_Container_C* K2Node_DynamicCast_AsBP_Structure_Functional_Container, bool K2Node_DynamicCast_bSuccess, class ABP_Structure_DeathChest_C* K2Node_DynamicCast_AsBP_Structure_Death_Chest, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_TransferAllItemsToContainer_self_CastInput, bool CallFunc_TransferAllItemsToContainer_ReturnValue, class UObject* CallFunc_SpawnStructure_ReturnValue_1, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations_1, bool CallFunc_GetQueryResultsAsLocations_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext_2, bool CallFunc_IsValid_ReturnValue_2, class UObject* CallFunc_SpawnStructure_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


