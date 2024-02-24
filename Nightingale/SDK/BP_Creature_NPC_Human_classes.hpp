#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x1880 - 0x1788)
// BlueprintGeneratedClass BP_Creature_NPC_Human.BP_Creature_NPC_Human_C
class ABP_Creature_NPC_Human_C : public ABP_Creature_NPC_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Clothes__Back_;                                    // 0x1790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterAppearanceComponent_C*    BP_CharacterAppearanceComponent;                   // 0x1798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x17A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x17A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_R;                                         // 0x17B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_L;                                         // 0x17B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_L;                                         // 0x17C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_R;                                         // 0x17C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Eyebrows_;                                   // 0x17D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Teeth_;                                      // 0x17D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Glasses_;                                    // 0x17E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Jewelry_;                                    // 0x17E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Facial_Hair_;                                // 0x17F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Top_;                                     // 0x17F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__eyes_;                                       // 0x1800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Head_;                                    // 0x1808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Boots_;                                   // 0x1810(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head__Hair_;                                       // 0x1818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Bottom_;                                  // 0x1820(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Gloves_;                                  // 0x1828(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Clothes__Gear_;                                    // 0x1830(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AsyncAssetLoader_C*                BP_AsyncAssetLoader2;                              // 0x1838(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterCustomization_Component_C* BP_CharacterCustomization;                         // 0x1840(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnIsDownChange;                                    // 0x1848(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsDown_;                                          // 0x1858(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEquipmentChange;                                 // 0x1860(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bPersistentLoad;                                   // 0x1870(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            RandomAppearanceTable;                             // 0x1878(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_NPC_Human_C* GetDefaultObj();

	void GenerateNewNPCName(struct FStringTableEntryHandle* NewNPCName, const struct FDataTableRowHandle& SelectedAppearance, bool CallFunc_HasAuthority_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FStringTableEntryHandle& CallFunc_Get_Rand_NPC_Name_NameHandle, bool CallFunc_IsValid_ReturnValue_1, const struct FStringTableEntryHandle& CallFunc_GenerateNewNPCName_NewNPCName);
	void EquippedItemChangeOverride();
	void OnRep_bIsDown_();
	void HandleReviveInteraction(class AController* Controller, class UBP_UIMenusComponent_C* UIMenusComponent, bool CallFunc_IsValid_ReturnValue, class UBP_UIMenusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void GetClothes_Back(class USkeletalMeshComponent** BackComponent);
	void ResetAppearanceAndLoadout(const struct FDataTableRowHandle& NPCData, const struct FNWXNPCHumanData& CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCHumanDataFromDataTableRow_Branches, bool CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CreateAndEquipItemFromItemID_Success);
	void GrantInitialEquipment(const struct FDataTableRowHandle& NPCData, bool ClearInventory, int32 Temp_int_Array_Index_Variable, const struct FNWXNPCHumanData& CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCHumanDataFromDataTableRow_Branches, bool CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FNWXNPCHumanLoadoutData& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool GetPowerLevel(struct FPowerLevel* OutPowerLevel, const struct FPowerLevel& CallFunc_GetPowerLevel_OutPowerLevel, bool CallFunc_GetPowerLevel_ReturnValue, class AEquippableItem* CallFunc_GetItemConst_Weapon, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetItemLevel_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const struct FPowerLevel& K2Node_MakeStruct_PowerLevel, double CallFunc_FFloor_A_ImplicitCast);
	void TagCountChanged(struct FGameplayTag& Tag, int32 Count, int32 LCount, const struct FGameplayTag& LTag, const struct FGameplayTagContainer& Temp_struct_Variable, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent);
	void GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent);
	void GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent);
	void GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent);
	void GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent);
	void GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent);
	void GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent);
	void GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent);
	void GetCLothes_Gear(class USkeletalMeshComponent** Gear);
	void GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent);
	void GetClothes_Head(class USkeletalMeshComponent** HatComponent);
	void GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent);
	void GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent);
	void GetBody(class USkeletalMeshComponent** BodyComponent);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CanInteractWithActor_InteractAvailable, bool CallFunc_ActorHasTag_ReturnValue);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, const struct FGameplayTag& Temp_struct_Variable, const class FString& CallFunc_GetInteractText_InteractText, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, const TArray<class USkeletalMeshComponent*>& LAppendArray, TArray<class UStaticMeshComponent*>& CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>& CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight, bool CallFunc_ReturnMeshToHighlight_Hostile_, enum class EItemQuality CallFunc_ReturnMeshToHighlight_Quality, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array);
	void Load_NPC_Data(const struct FDataTableRowHandle& NPC_Data, const struct FDataTableRowHandle& SelectedAppearanceHandle, const struct FDataTableRowHandle& DefaultNPCAppearance, bool CallFunc_HasAuthority_ReturnValue, const struct FNWXNPCHumanData& CallFunc_GetNPCHumanDataFromDataTableRow_OutNPCHumanData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCHumanDataFromDataTableRow_Branches, bool CallFunc_GetNPCHumanDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_DoesDataTableRowExist_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void ReceiveBeginPlay();
	void CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void Revive();
	void OnHealthChanged(float Delta);
	void PerformClientSideInteraction(class AController* Controller);
	void ExecuteUbergraph_BP_Creature_NPC_Human(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IBPI_NPCAnimation_C> K2Node_DynamicCast_AsBPI_NPCAnimation, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, const struct FGameplayTag& Temp_struct_Variable_5, int32 CallFunc_SendGameplayEventToActor_ReturnValue, float K2Node_Event_Delta, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class AController* K2Node_Event_Controller, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_3, const struct FGameplayTag& Temp_struct_Variable_6, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_4, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void OnEquipmentChange__DelegateSignature();
	void OnIsDownChange__DelegateSignature(bool IsDown_);
};

}


