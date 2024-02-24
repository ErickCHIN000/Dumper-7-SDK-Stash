#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E8 (0xA50 - 0x668)
// BlueprintGeneratedClass GA_Interaction_Proxy.GA_Interaction_Proxy_C
class UGA_Interaction_Proxy_C : public UGA_Interaction_Base_C
{
public:
	TArray<struct FS_InstanceWithQuantity>       ItemInstances;                                     // 0x668(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_5BE7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ProxyItemID;                                       // 0x680(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGuid                                 ItemGuid;                                          // 0x700(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AnimCharacter_C*                   Character;                                         // 0x710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ItemProxy_C*                       ItemProxy;                                         // 0x718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       IsUnderwaterTestDistance;                          // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CharPersistenceID;                                 // 0x728(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_5BF9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x740(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInventoryEntry>               UnclaimedResources;                                // 0xA30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NumberUnclaimed;                                   // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C12[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           Controller;                                        // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_Proxy_C* GetDefaultObj();

	void SendEssenceTelemetry(const struct FInventoryEntry& InventoryEntry, class ANWXPlayerState* PlayerState, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, int32 CallFunc_GetEssenceCountsFromEntries_T0Count, int32 CallFunc_GetEssenceCountsFromEntries_T1Count, int32 CallFunc_GetEssenceCountsFromEntries_T2Count, int32 CallFunc_GetEssenceCountsFromEntries_T3Count, bool CallFunc_GetEssenceCountsFromEntries_ReturnValue, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess);
	void Spawn_Unclaimed_Entries(TArray<struct FInventoryEntry>& UnclaimedEntries, const struct FInventoryEntry& CurrentUnclaimedItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetLootSpawnLocation_SpawnPosition, const struct FTransform& CallFunc_GetLootSpawnTransform_Transform);
	void PopulateVariables(bool* bSuccess, class UObject* LocalInteractable, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_ItemProxy_C* K2Node_DynamicCast_AsBP_Item_Proxy, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPawn_Pawn, const struct FItemDataReference& CallFunc_GetItemID_ItemID, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_GetInteractable_Interactable, bool CallFunc_PopulateVariables_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTagContainer& ParentTags, const struct FInventoryEntry& CurrentUnclaimedItem, const TArray<struct FInventoryEntry>& UnclaimedEntries, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, bool CallFunc_TransferProxy_bSuccess, TArray<struct FInventoryEntry>& CallFunc_TransferProxy_UnclaimedEntries);
	void Pawn_HandleAnimation(bool TransferSuccess, bool CallFunc_K2_HasAuthority_ReturnValue, const struct FGameplayTag& CallFunc_ProxyPickupMontageTag_Tag, class APawn* CallFunc_GetPawn_Pawn, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, TScriptInterface<class IInteractionAnimationInterface> K2Node_DynamicCast_AsInteraction_Animation_Interface, bool K2Node_DynamicCast_bSuccess);
	void Pawn_Handle_Audio_Cue_And_VFX(bool TransferSuccess, const struct FGameplayTag& UnderwaterAVFXTag, class UBP_Character_Audio_Component_C* CharacterAudio, const struct FGameplayTag& UnderwaterProxyAbilityTag, const struct FGameplayTag& ProxyAbilityTag, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow_1, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn_1, bool CallFunc_SimpleUnderwaterTest_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_SimpleUnderwaterTest_TestDistance_ImplicitCast);
	void TransferProxy(bool* bSuccess, TArray<struct FInventoryEntry>* UnclaimedEntries, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, const struct FGameplayTagContainer& Tags, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess, class ABP_ItemProxy_C* K2Node_DynamicCast_AsBP_Item_Proxy, bool K2Node_DynamicCast_bSuccess_1);
};

}


