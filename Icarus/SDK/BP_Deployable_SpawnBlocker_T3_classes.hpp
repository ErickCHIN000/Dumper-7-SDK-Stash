#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B (0x7C8 - 0x78D)
// BlueprintGeneratedClass BP_Deployable_SpawnBlocker_T3.BP_Deployable_SpawnBlocker_T3_C
class ABP_Deployable_SpawnBlocker_T3_C : public ABP_Deployable_SpawnBlocker_C
{
public:
	uint8                                        Pad_45E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   PoweredAudioLoop;                                  // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Spray3;                                         // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Spray2;                                         // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Spray1;                                         // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Spray;                                          // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Deployable_SpawnBlocker_T3_C* GetDefaultObj();

	void UpdateSpawnBlockerEffects();
	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void GeneratorStateUpdate(bool Active, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void IcarusBeginPlay();
	void OnFuelInventoryUpdated(class UInventory* Inventory, int32 Location);
	void ExecuteUbergraph_BP_Deployable_SpawnBlocker_T3(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


