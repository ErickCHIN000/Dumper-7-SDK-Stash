#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x238 (0xC08 - 0x9D0)
// BlueprintGeneratedClass BP_AlterationBench.BP_AlterationBench_C
class ABP_AlterationBench_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   AlterationProcessingAudio;                         // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x9E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CurrentItem;                                       // 0x9F0(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         InUse;                                             // 0xBE0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1C72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlterTime;                                         // 0xBE4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AlterProgress;                                     // 0xBE8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTime;                                           // 0xBEC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ItemAlteredSound;                                  // 0xBF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ItemUnalteredSound;                                // 0xBF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                UsingCharacter;                                    // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AlterationBench_C* GetDefaultObj();

	void ModifyAlterTime(float AlterTickTime, float* ModifiedAlterTickTime);
	void PlaySoundWithParams(class UFMODEvent* FMODEvent, const struct FVector& Location, enum class EItemCraftingTypeFMODParam Temp_byte_Variable, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue, bool Temp_bool_Variable, enum class EItemCraftingTypeFMODParam Temp_byte_Variable_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class EItemCraftingTypeFMODParam K2Node_Select_Default);
	void SetInUseAudioState(bool Active, bool CallFunc_IsValid_ReturnValue);
	void OnRep_InUse();
	void PlayItemUnalteredSound(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void PlayItemAlteredSound(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void RemoveItem(enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, class UInventory* CallFunc_GetAttachmentSlot_Inventory, int32 CallFunc_GetAttachmentSlot_Slot, enum class EDataValid CallFunc_GetAttachmentSlot_Paths, const struct FItemData& CallFunc_RemoveItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ManuallyForcePlaceItem_ReturnValue);
	void AlterItem(class UPlayerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_RemoveItem_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UInventory* CallFunc_GetAttachmentSlot_Inventory, int32 CallFunc_GetAttachmentSlot_Slot, enum class EDataValid CallFunc_GetAttachmentSlot_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_ManuallyForcePlaceItem_ReturnValue);
	void Deployable_Interact(class AActor* Interactor, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void GenericAction();
	void ReceiveBeginPlay();
	void AlterationSlotUpdated(class UInventory* Inventory, int32 Location);
	void ReceiveTick(float DeltaSeconds);
	void OnServer_PerformAction();
	void MULTI_OnAlteredItem();
	void MULTI_OnRemovedItemAlteration();
	void GenericActionWithCharacter(class AIcarusPlayerCharacter* Character);
	void ExecuteUbergraph_BP_AlterationBench(int32 EntryPoint, class AIcarusPlayerCharacter* K2Node_Event_Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_CreateLinkedInventoryFromInventoryItem_ReturnValue, float CallFunc_ModifyAlterTime_ModifiedAlterTickTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_2, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_2, class UInventory* CallFunc_GetInventory_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FItemData& CallFunc_GetItem_ReturnValue_1, enum class EDataValid CallFunc_ItemDataValid_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_5, bool CallFunc_IsServer_ReturnValue_1);
};

}


