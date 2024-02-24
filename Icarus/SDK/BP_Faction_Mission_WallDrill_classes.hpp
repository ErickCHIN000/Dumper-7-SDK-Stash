#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26 (0x79A - 0x774)
// BlueprintGeneratedClass BP_Faction_Mission_WallDrill.BP_Faction_Mission_WallDrill_C
class ABP_Faction_Mission_WallDrill_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_6713[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMOD_Extractor_Audio;                              // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         TriggeredCleanup;                                  // 0x798(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DrillActive;                                       // 0x799(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Faction_Mission_WallDrill_C* GetDefaultObj();

	void TriggerCleanup();
	void OnEnergyStateUpdated(bool IsActive);
	void ExecuteUbergraph_BP_Faction_Mission_WallDrill(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, bool K2Node_Event_IsActive, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
};

}


