#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D (0x7C1 - 0x774)
// BlueprintGeneratedClass BP_Drill_Base.BP_Drill_Base_C
class ABP_Drill_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_5684[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   DrillActiveAudio;                                  // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x790(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_5698[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentTime;                                       // 0x794(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTime;                                           // 0x798(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMODEvent_Stop;                                    // 0x7A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent_GenerateItem;                            // 0x7A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         RandomStream;                                      // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	class UInventory*                            OreInventory;                                      // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanAutoRestart;                                    // 0x7C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Drill_Base_C* GetDefaultObj();

	struct FDrillSaveData SaveDrillData(const struct FDrillSaveData& K2Node_MakeStruct_DrillSaveData);
	void ConditionalEnergyDrillRestart(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining, bool CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ConditionalGeneratorDrillRestart(enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining, bool CallFunc_BooleanAND_ReturnValue_1);
	void HasAnyRemainingInventorySpaceForOre(bool* HasAnyRemainingSpace, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, const struct FItemData& CallFunc_CreateItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_CheckAutoPlacement_ReturnValue);
	void SetDrillActive(bool Active, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void UpdateMiningRateFromResourceType(int32 CallFunc_GetStat_ReturnValue, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
	void HasAnyResourcesRemaining(bool* HasResourcesRemaining, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue);
	void PlayGenerateItemSFX(const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	void GenerateItem(bool Success, const struct FItemTemplateRowHandle& Temp_struct_Variable, const struct FItemTemplateRowHandle& Temp_struct_Variable_1, const struct FItemTemplateRowHandle& Temp_struct_Variable_2, const struct FItemTemplateRowHandle& Temp_struct_Variable_3, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, const struct FItemTemplateRowHandle& Temp_struct_Variable_4, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UExtractionSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FItemTemplateRowHandle& Temp_struct_Variable_5, int32 Temp_int_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UExtractionSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, const struct FItemTemplateRowHandle& K2Node_Select_Default, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemData& CallFunc_CreateItem_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation, bool CallFunc_AutomaticallyPlaceItem_ReturnValue, int32 Temp_int_Variable_1, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate_1, enum class EValid CallFunc_GetItemTemplateStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FItemData& CallFunc_CreateItem_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation_1, bool CallFunc_AutomaticallyPlaceItem_ReturnValue_1);
	void OnRep_IsActive();
	void ActiveStateUpdated(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	void Deployable_Interact(class AActor* Interactor, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void OnEnergyStateUpdated(bool IsActive);
	void OnGeneratorActiveStateUpdated(bool IsActive);
	void MULTI_PlayGenerateItemFX();
	void ReceiveBeginPlay();
	void OnOutOfResources();
	void OnOutOfInventorySpace();
	void OnGainedInventorySpace();
	void RestartDrill();
	void ShutdownDrill();
	void OnInventoryModified(class UInventory* Inventory, int32 Location);
	void LoadDrillData(struct FDrillSaveData& DrillData);
	void OnRestoreFoundationFromDatabase(class AIcarusActor* FoundationFromDatabase);
	void DeployableTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Drill_Base(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_IsActive, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_IsActive_1, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining, enum class EValid CallFunc_GetTrait_Paths_2, class UEnergyComponent* CallFunc_GetTrait_ReturnValue_2, bool CallFunc_ActivateResourceComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_2, bool CallFunc_Not_PreBool_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_3, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_3, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_Greater_FloatFloat_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, bool CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_3, bool CallFunc_BooleanAND_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_4, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_4, const struct FDrillSaveData& K2Node_Event_DrillData, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5, class AIcarusActor* K2Node_Event_FoundationFromDatabase, bool CallFunc_IsServer_ReturnValue_2);
};

}


