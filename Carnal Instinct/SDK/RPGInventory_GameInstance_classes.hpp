#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x2F8 - 0x1A8)
// BlueprintGeneratedClass RPGInventory_GameInstance.RPGInventory_GameInstance_C
class URPGInventory_GameInstance_C : public UGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class URPGInventory_SaveGame_C*              SaveGame;                                          // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SaveGameName;                                      // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_SaveSlotDetails>            SaveSlots;                                         // 0x1D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SlotSuffix;                                        // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AutosaveTimer                   AutosaveFrequency;                                 // 0x1E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3123[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeta_SaveGame_C*                      MetaSave;                                          // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Interaction_C*                     Interaction_Component;                             // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LoadingMessage;                                    // 0x1F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_LoadingScreen_C*                    W_LoadingScreenRef;                                // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LoadingMessageTip;                                 // 0x218(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_MySaveGame_C*                      MyGameSave;                                        // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Multiplayer_;                                      // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3126[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeLoadingBeforeContinue;                         // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlreadyIntro_;                                     // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_TargetIndicator>            Indicators;                                        // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FString                                SlotName;                                          // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Version;                                           // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_SaveSlotDetails                    Save_Slot;                                         // 0x278(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         STEAM;                                             // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_312C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Interactable_Actors;                               // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class FString>                        Destroyed_Interactables_String;                    // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class URPGInventory_GameInstance_C* GetDefaultObj();

	void Save_Player_Camp(class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, TArray<struct FS_CampUnlocks>& CallFunc_Map_Values_Values);
	void Load_Player_Camp(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, const struct FS_CampUnlocks& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Load_Level_Experience(class UAC_Leveling_C* CallFunc_Get_AC_Leveling_Return_Value);
	void Save_Level_Experience(class UAC_Leveling_C* CallFunc_Get_AC_Leveling_Return_Value);
	void Save_Destroyed_Interactables(class AActor* Destroyed_Interactable, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Load_All_Indicators(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UW_CompassMaster_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_CompassMaster_C* CallFunc_Array_Get_Item, const struct FS_TargetIndicator& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Save_All_Indicators(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FS_TargetIndicator& K2Node_MakeStruct_S_TargetIndicator, int32 CallFunc_Array_Add_ReturnValue);
	void Load_Dialog(const class FString& Slot_name, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void Load_Abilities(class UAC_DCSAbilityTree_C* DCSAbilityTree, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, const struct FS_AbilityData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_2);
	void Save_Abilities(bool Temp_bool_Variable, const struct FS_AbilityData& Temp_struct_Variable, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_IsValid_ReturnValue, const struct FS_AbilityData& K2Node_Select_Default);
	void Load_All_Enemies(class ABP_BaseAI_C* SpawnedEnemy, const struct FS_SaveEnemies& EnemyData, TScriptInterface<class II_CombatState_C> K2Node_DynamicCast_AsI_Combat_State, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetIsInCombat_Dummy, const struct FS_SaveEnemies& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Save_All_Enemies(const TArray<struct FS_SaveEnemies>& L_Enemies, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_BaseAI_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_BaseAI_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAlive_Result, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FS_SaveEnemies& K2Node_MakeStruct_S_SaveEnemies, int32 CallFunc_Array_Add_ReturnValue);
	void Load_Player_Variables(class ABP_DungeonLighting_C* CallFunc_GetActorOfClass_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, class UAC_Leveling_C* CallFunc_Get_AC_Leveling_Return_Value, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, TScriptInterface<class II_CombatState_C> K2Node_DynamicCast_AsI_Combat_State, bool K2Node_DynamicCast_bSuccess, class AALS_Base_CharacterBP_C* K2Node_DynamicCast_AsALS_Base_Character_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetIsInCombat_Dummy, bool K2Node_SwitchEnum_CmpSuccess);
	void Save_Player_Variables(const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_GetScalarParameterValue_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FVectorParameterValue& K2Node_MakeStruct_VectorParameterValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class AALS_Base_CharacterBP_C* K2Node_DynamicCast_AsALS_Base_Character_BP, bool K2Node_DynamicCast_bSuccess);
	void Destroy_Indicated_Actors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, TArray<class ABP_BaseAI_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable_2, class ABP_BaseAI_C* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_ActorHasTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class ABP_CheckpointSave_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, bool CallFunc_Less_IntInt_ReturnValue_1, class ABP_CheckpointSave_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void Get_All_Consumable_Data(TArray<struct FS_SaveBuffs>* Array, TArray<struct FS_SaveBuffs>& K2Node_MakeArray_Array);
	void Get_Timeline_base_on_Stat(enum class E_StatCategory Stat, class UTimelineComponent** Timeline, enum class E_StatCategory Temp_byte_Variable, class UTimelineComponent* K2Node_Select_Default);
	void Load_All_Consumable_Effects(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FS_SaveBuffs>& CallFunc_Get_All_Consumable_Data_Array, const struct FS_SaveBuffs& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTimelineComponent* CallFunc_Get_Timeline_base_on_Stat_Timeline, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_SaveBuffs& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UTimelineComponent* CallFunc_Get_Timeline_base_on_Stat_Timeline_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	void Save_All_Consumable_Effects(const TArray<struct FS_SaveBuffs>& Consumables, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FS_SaveBuffs>& CallFunc_Get_All_Consumable_Data_Array, const struct FS_SaveBuffs& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FS_SaveBuffs& K2Node_SetFieldsInStruct_StructOut, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTimelineComponent* CallFunc_Get_Timeline_base_on_Stat_Timeline, float CallFunc_GetPlaybackPosition_ReturnValue, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void Load_All_Checkpoints(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_SaveCheckpoints& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
	void Save_All_Checkpoints(const TArray<struct FS_SaveCheckpoints>& Checkpoints, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_CheckpointSave_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_CheckpointSave_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FS_SaveCheckpoints& K2Node_MakeStruct_S_SaveCheckpoints, int32 CallFunc_Array_Add_ReturnValue);
	void Assign_Slot_Name_and_Data(enum class E_SaveType SaveType, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, int32 Temp_int_Variable, class AALS_PlayerCameraManager_C* K2Node_DynamicCast_AsALS_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_GetProjectSavedDirectory_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const struct FS_SaveSlotDetails& K2Node_MakeStruct_S_SaveSlotDetails, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue);
	void Autosave(enum class E_AutosaveTimer Type, const struct FTimerHandle& AutosaveTimer, enum class E_AutosaveTimer Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void DeleteData(const class FString& SlotName, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Map_Remove_ReturnValue);
	void Save_All_Interactables(class UAC_Interactable_C* L_Interactable_Component, const TArray<struct FS_SaveInteractables>& Interactables, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* Temp_object_Variable, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, class AActor* K2Node_Select_Default, const struct FS_SaveInteractables& K2Node_MakeStruct_S_SaveInteractables, int32 CallFunc_Array_Add_ReturnValue);
	void Load_All_Interactables(class UAC_Interactable_C* L_Interactable_Component, class AActor* L_Spawned_Interactable, const struct FS_SaveInteractables& L_Saved_Interactable_Data, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_1, class AActor* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_SaveInteractables& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Load_All_Stats(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FF_Stat& CallFunc_Array_Get_Item, const struct FF_Stat& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Save_All_Stats(float CallFunc_GetCurrentValue_CurrentValue, float CallFunc_GetCurrentValue_CurrentValue_1);
	void Load_Inventory_and_Equipment(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_ItemData& CallFunc_Array_Get_Item, TScriptInterface<class IBPI_PlayerCapture_C> CallFunc_Detach_from_Player_Capture_self_CastInput, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_ItemData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IBPI_PlayerCapture_C> CallFunc_Attach_to_Player_Capture_self_CastInput, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Load_Player_Location(class ABP_PlayerCapture_C* L_PlayerCapture, class AWindDirectionalSource* L_Wind, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAlive_Result, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AALS_AnimMan_CharacterBP_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Save_Inventory_and_Equipment();
	void Save_Player_Location(const struct FTransform& CallFunc_GetTransform_ReturnValue);
	void LoadData(const class FString& Slot_Name, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class URPGInventory_SaveGame_C* K2Node_DynamicCast_AsRPGInventory_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue, class UAC_Interaction_C* CallFunc_Get_AC_Interaction_AC_Interaction, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory);
	void SaveData(enum class E_SaveType Save_Type, bool CallFunc_SaveGameToSlot_ReturnValue, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UMeta_SaveGame_C* K2Node_DynamicCast_AsMeta_Save_Game, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_save_slot_success, class UAC_Interaction_C* CallFunc_Get_AC_Interaction_AC_Interaction, bool CallFunc_DoesSaveGameExist_ReturnValue, class UMeta_SaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_SaveGameToSlot_ReturnValue_1);
	void Fire_Autosave();
	void ReceiveInit();
	void ShowLoadingScreen(class APlayerController* PlayerController, class FText Message);
	void LaunchSoloGame(class APlayerController* PlayerController, const struct FS_SaveSlotDetails& MyGameSave, class UWidget* ParentRef, bool IsContinue);
	void ExecuteUbergraph_RPGInventory_GameInstance(int32 EntryPoint, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController, const struct FS_SaveSlotDetails& K2Node_CustomEvent_MyGameSave, class UWidget* K2Node_CustomEvent_ParentRef, bool K2Node_CustomEvent_isContinue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController_1, class FText K2Node_CustomEvent_Message, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_CanSave__Condition, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_LastIndex_ReturnValue, const class FString& CallFunc_Array_Get_Item, class URPGInventory_SaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, int32 Temp_int_Array_Index_Variable, TArray<struct FS_SaveSlotDetails>& CallFunc_Map_Values_Values, const struct FS_SaveSlotDetails& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqualStringString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class FText CallFunc_GetMessageTips_Message, class UMeta_SaveGame_C* K2Node_DynamicCast_AsMeta_Save_Game, bool K2Node_DynamicCast_bSuccess);
};

}

