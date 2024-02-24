#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x1788 - 0x15D0)
// BlueprintGeneratedClass BP_Creature_NPC.BP_Creature_NPC_C
class ABP_Creature_NPC_C : public ABP_CreatureBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Combat_Analyser_C*                 BP_Combat_Analyser;                                // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AILoadoutComponentBase_C*          BP_AILoadoutComponentBase;                         // 0x15E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HarvestComponent_C*                BP_HarvestComponent;                               // 0x15E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                Loadout;                                           // 0x15F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInWorldItemContainerComponent*        Inventory;                                         // 0x15F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      UI_DialogWidget;                                   // 0x1600(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UI_NPCMenuComponent_C*             BP_NPC_MenuComponent;                              // 0x1608(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DialogueComponent_C*               BP_DialogueComponent;                              // 0x1610(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_NPCComponent_C*                    BP_NPCComponent;                                   // 0x1618(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       StartAmbientDialogueRadius;                        // 0x1620(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       EndAmbientDialogueRadius;                          // 0x1628(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  FactionName;                                       // 0x1630(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
	bool                                         PlayerEmployee;                                    // 0x1648(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   EmployeeManagement;                                // 0x1650(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOwnerSet;                                        // 0x1660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AEncounterBase*                        Associated_Encounter;                              // 0x1670(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OriginalPlayerView;                                // 0x1678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDialogue*                             Dialogue;                                          // 0x1680(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UDialogue*                             Ambient_Dialogue;                                  // 0x1688(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                          AmbientDialogueTimer;                              // 0x1690(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_AmbientDialogue_C*                 ActiveAmbientDialog;                               // 0x1698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       AmbientDialogCooldown;                             // 0x16A0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       LastAmbientDialogTime;                             // 0x16A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_NPC_Moods                       NewMood;                                           // 0x16B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_NPC_Moods                       OldMood;                                           // 0x16B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5800[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkStateValue*                         Music_State;                                       // 0x16B8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                   NPCData;                                           // 0x16C0(0x10)(Edit, BlueprintVisible, SaveGame, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               HomeLocation;                                      // 0x16D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 Associated_Encounter_ID;                           // 0x16E8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           Original_NPC_Menus;                                // 0x16F8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TMap<class AActor*, struct FActiveGameplayEffectHandle> DialogueProtectionEffects;                         // 0x1708(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FDataTableRowHandle                   CurrentEncounterMenu;                              // 0x1758(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FS_NPCIndicatorSignProperties         NPC_Indicator_Sign;                                // 0x1768(0x2)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_581B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStringTableEntryHandle               NPCNameHandle;                                     // 0x1770(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)

	static class UClass* StaticClass();
	static class ABP_Creature_NPC_C* GetDefaultObj();

	void SetAmbientDialogue(class UDialogue* AmbientDialogue, bool* Success);
	void SetDialogue(class UDialogue* Dialogue, bool* Success);
	void SetNPCCamera(class AController* Controller, bool* bSuccess);
	void RemoveMenus(bool* bSuccess, bool CallFunc_IsValid_ReturnValue);
	void CreateDialogueEvent(class ABP_PlayerController_C* PlayerController, bool* bSuccess);
	void RestorePlayer(bool* bSuccess, bool CallFunc_RemoveMenus_bSuccess);
	void ShowMerchant(bool* bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetAssociatedEncounter(class AEncounterBase** Associated_Encounter);
	void SetAssociatedEncounter(class AEncounterBase* Associated_Encounter, bool* Success, bool CallFunc_IsServer_ReturnValue);
	void GetNPCInfoForUIInterface(TScriptInterface<class IBPI_NPCInfoForUI_C>* Interface);
	void GetNPCFriendshipInterface(TScriptInterface<class IBPI_NPCFriendship_C>* Interface);
	void GetNPCContractInterface(TScriptInterface<class IBPI_NPCContract_C>* Interface);
	void GetNPCDialogueInterface(TScriptInterface<class IBPI_NPCDialogue_C>* Interface);
	void GetClothes_Back(class USkeletalMeshComponent** BackComponent);
	void GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent);
	void GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent);
	void GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent);
	void GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent);
	void GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent);
	void GetCLothes_Gear(class USkeletalMeshComponent** Gear);
	void GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent);
	void GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent);
	void GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent);
	void GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent);
	void GetClothes_Head(class USkeletalMeshComponent** HatComponent);
	void GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent);
	void GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent);
	void GetBody(class USkeletalMeshComponent** BodyComponent);
	void OnRep_CurrentEncounterMenu(int32 CallFunc_Array_Add_ReturnValue);
	void SetupHomeLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Get_POILocation_DenLocation, bool CallFunc_IsValid_ReturnValue);
	void SetupMusicState(bool CallFunc_IsDedicatedServer_ReturnValue, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetupNPCDialogue(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetupFactionText(const struct FGameplayTag& CurrentTag, TMap<struct FGameplayTag, class FText> FactionTagToFactionNameMap, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TMap<struct FGameplayTag, class FText> K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_ActorHasTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetOrResetNPCName(const struct FStringTableEntryHandle& NameHandle, enum class EGetResult CallFunc_IsValidStringTableHandle_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue, const struct FStringTableEntryHandle& CallFunc_GenerateNewNPCName_NewNPCName);
	void GetNPCNameHandle(struct FStringTableEntryHandle* OutNameHandle);
	void GenerateNewNPCName(struct FStringTableEntryHandle* NewNPCName, int32 Temp_int_Variable, enum class EBodyType Temp_byte_Variable, enum class EBodyType Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, enum class EBodyType K2Node_Select_Default, const struct FStringTableEntryHandle& CallFunc_Get_Rand_NPC_Name_NameHandle);
	void GetNPCNameText(class FText* NPCName, class FText CallFunc_TextFromStringTable_ReturnValue);
	void OnRep_NPC_Indicator_Sign();
	void Load_NPC_Data(const struct FDataTableRowHandle& NPC_Data, const struct FNWXNPCData& CallFunc_GetNPCDataFromDataTableRow_OutNPCData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCDataFromDataTableRow_Branches, bool CallFunc_GetNPCDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void GetCarriedResource(class AEquippableItem** ResourceItem, bool* IsCarryingResource, class AEquippableItem* CallFunc_GetItem_Weapon, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_IsItemResource_Return_Value);
	void SetupEmployeeScreen(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateAmbientDialogue(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnRep_Ambient_Dialogue();
	void OnRep_Dialogue();
	void OnRep_PlayerEmployee();
	void Start_Ambient_Dialogue(class ABP_Character_C* LCharacter, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UDialogue* CallFunc_GetAmbientDialogue_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ABP_AmbientDialogue_C* CallFunc_FinishSpawningActor_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void Has_NPCDialog_or_Menus(bool* HasDialog, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void ClientDeathLogic();
	void ServerDeathLogic();
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, bool Temp_bool_Variable, class FText Temp_text_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_GetNPCNameText_NPCName, bool CallFunc_CanInteractWithActor_InteractAvailable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1);
	void GetDamageEffect(class UClass** DamageEffect);
	void NPC_OnDamageReceived(double Damage, class AActor* Target, class AActor* Source, const struct FGameplayTagContainer& EffectTags, const struct FHitResult& HitResult, const struct FTagValueContainer& TagValueContainer, const struct FGameplayTag& CallFunc_PlayerControlledTag_ReturnValue, bool CallFunc_WillDamage_WillDamage, bool CallFunc_IsStateActive_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_NPCFriendship_C> CallFunc_FriendshipEvent_self_CastInput, bool CallFunc_FriendshipEvent_Success, int32 CallFunc_FriendshipEvent_ScoreAwarded);
	void AddUICreatureComponent(class UBP_CreatureComponent_UI_C** UICreatureComponent, bool CallFunc_IsValid_ReturnValue, const struct FTransform& Temp_struct_Variable, class UBP_CreatureComponent_UI_NPC_C* CallFunc_AddComponent_ReturnValue);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_1, bool CallFunc_CanInteractWithActor_InteractAvailable, TArray<class UStaticMeshComponent*>& CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>& CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight, bool CallFunc_ReturnMeshToHighlight_Hostile_, enum class EItemQuality CallFunc_ReturnMeshToHighlight_Quality);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, const struct FDataTableRowHandle& LEmployeeManagement, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1);
	void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CrossServerSetAssociatedEncounter(class AEncounterBase* Associated_Encounter);
	void CrossServerSetDialogue(class UDialogue* Dialogue);
	void CrossServerSetAmbientDialogue(class UDialogue* AmbientDialogue);
	void ClientUI_PlayerInitiateEncounter();
	void ReceiveBeginPlay();
	void OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer);
	void PerformClientSideInteraction(class AController* Controller);
	void CrossServerSetPlayerEmployee(bool PlayerEmployee);
	void DE_Change_mood(enum class E_NPC_Moods Mood);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ResetNPCMenus();
	void Add_NPCMenu(const struct FDataTableRowHandle& MenuRowHandle);
	void ClearNPCMenu();
	void Setup_NPC_Indicator_Sign(bool Display_Sign, enum class E_Contract_StateType Encounter_NPC_Status);
	void ExecuteUbergraph_BP_Creature_NPC(int32 EntryPoint, class UDialogue* K2Node_CustomEvent_AmbientDialogue, class UDialogue* K2Node_CustomEvent_Dialogue, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, bool CallFunc_Has_NPCDialog_or_Menus_HasDialog, class AEncounterBase* K2Node_CustomEvent_Associated_Encounter, class AController* K2Node_Event_Controller, bool K2Node_CustomEvent_PlayerEmployee, bool CallFunc_IsValid_ReturnValue, class UBP_UIMenusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanInteractWithActor_InteractAvailable, enum class E_NPC_Moods K2Node_CustomEvent_Mood, int32 Temp_int_Array_Index_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FDataTableRowHandle& K2Node_CustomEvent_MenuRowHandle, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_CustomEvent_Display_Sign, enum class E_Contract_StateType K2Node_CustomEvent_Encounter_NPC_Status, const struct FGuid& CallFunc_GetEncounterID_ReturnValue, class UBP_QuestGiverComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, double CallFunc_NPC_OnDamageReceived_Damage_ImplicitCast);
	void OnOwnerSet__DelegateSignature();
};

}


