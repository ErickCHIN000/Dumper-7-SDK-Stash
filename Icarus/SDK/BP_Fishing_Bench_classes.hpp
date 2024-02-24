#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x9F9 - 0x9D0)
// BlueprintGeneratedClass BP_Fishing_Bench.BP_Fishing_Bench_C
class ABP_Fishing_Bench_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   AlterationProcessingAudio;                         // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ItemAlteredSound;                                  // 0x9E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ItemUnalteredSound;                                // 0x9F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasFillettingStation;                              // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Fishing_Bench_C* GetDefaultObj();

	void GenericAction();
	void GenericActionWithCharacter(class AIcarusPlayerCharacter* Character);
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Fishing_Bench(int32 EntryPoint, TArray<struct FItemDynamicData>& K2Node_MakeArray_Array, const struct FItemData& K2Node_MakeStruct_ItemData, const struct FItemData& CallFunc_CreateItem_ReturnValue, class AIcarusPlayerCharacter* K2Node_Event_Character, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FIcarusItemSpawnParametersAdvanced& K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess);
};

}


