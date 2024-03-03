#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x190 - 0xB0)
// BlueprintGeneratedClass bp_quest_component.bp_quest_component_C
class Ubp_quest_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class UDataTable*>                    Quest_data_list;                                   // 0xB8(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          Quest_history_list;                                // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDateTime>                     Quest_history_time;                                // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Quest_list;                                        // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class Abp_quest_actor_C*>             Quest_actors;                                      // 0xF8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class FName>                          Active_quest;                                      // 0x108(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Auto_remove_active;                                // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Max_active_quests;                                 // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Ed_qst_added;                                      // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ed_qst_active;                                     // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ed_qst_result;                                     // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ed_qst_obj_added;                                  // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ed_qst_obj_update;                                 // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ed_qst_sub_obj_update;                             // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ed_qst_event;                                      // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class Ubp_quest_component_C* GetDefaultObj();

	void Add_quest_loading(class FName Quest_unique_id, class FName Quest_data_id, bool* Is_valid, bool* Is_spawned, class Abp_quest_actor_C** Quest_actor, class FName Local_quest_data, class Abp_quest_actor_C* Local_actor, class FName Local_unique_id, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_quest_actor_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_NotEqual_NameName_ReturnValue);
	void Destroy_quests(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class Abp_quest_actor_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void Quest_load_info(class Abp_quest_actor_C* Local_actor, const TArray<struct FS_quest_savegame>& Local_quest_list, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FS_quest_savegame& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FS_quest_savegame& CallFunc_Array_Get_Item_1, bool CallFunc_msl_get_identifier_component_is_valid, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference, bool CallFunc_get_id_is_valid, class FName CallFunc_get_id_actor_unique_id, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, bool CallFunc_add_quest_loading_is_valid, bool CallFunc_add_quest_loading_is_spawned, class Abp_quest_actor_C* CallFunc_add_quest_loading_quest_actor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Quest_save_info(class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor_1, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_msl_get_identifier_component_is_valid, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference, bool CallFunc_get_id_is_valid, class FName CallFunc_get_id_actor_unique_id, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_msl_get_identifier_component_is_valid_1, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference_1, class Abp_quest_actor_C* CallFunc_Array_Get_Item, bool CallFunc_get_id_is_valid_1, class FName CallFunc_get_id_actor_unique_id_1, const struct FS_quest_savegame& CallFunc_get_save_data_quest_save, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Get_quest_history(class FName Quest_unique_id, bool* Is_valid, int32* Found_index, struct FDateTime* Latest_time, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FDateTime& CallFunc_Array_Get_Item);
	void Get_quest_active(class FName Quest_unique_id, bool* Is_valid, int32* Found_index, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Get_layout_widget(bool* Is_valid, class UW_01_quest_layout_C** Quest_widget, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, TArray<class UW_01_quest_layout_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_01_quest_layout_C* CallFunc_Array_Get_Item);
	void Set_quest_active(class FName Quest_unique_id, bool Remove_active, bool Local_remove, class FName Local_quest_id, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_get_quest_is_valid_1, int32 CallFunc_get_quest_found_index_1, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_get_quest_is_valid_2, int32 CallFunc_get_quest_found_index_2, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_2, class FName CallFunc_Array_Get_Item, bool CallFunc_get_quest_is_valid_3, int32 CallFunc_get_quest_found_index_3, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_3, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Remove_quest(class FName Quest_unique_id, class Abp_quest_actor_C* Local_actor, class FName Local_quest_id, int32 Local_index, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor);
	void Get_quest(class FName Quest_unique_id, bool* Is_valid, int32* Found_index, class Abp_quest_actor_C** Quest_actor, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class Abp_quest_actor_C* CallFunc_Array_Get_Item);
	void Add_quest(class FName Quest_unique_id, class FName Quest_data_id, bool* Is_valid, bool* Is_spawned, class Abp_quest_actor_C** Quest_actor, class FName Local_quest_data, class Abp_quest_actor_C* Local_actor, class FName Local_unique_id, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_quest_actor_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_NotEqual_NameName_ReturnValue);
	void ReceiveBeginPlay();
	void Quest_call_result(class Abp_quest_actor_C* Qst_actor, enum class Enum_quest_result Qst_result);
	void Quest_call_obj_added(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, bool Is_removed);
	void Quest_call_obj_update(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, enum class Enum_quest_result Objective_result);
	void Quest_call_sub_obj_update(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, class FName Sub_objective_id, int32 Objective_current, int32 Objective_target, enum class Enum_quest_result Objective_result);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void Init_player();
	void Quest_call_event(class Abp_quest_actor_C* Qst_actor, const struct FS_quest_event& Quest_event);
	void ExecuteUbergraph_bp_quest_component(int32 EntryPoint, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor_4, enum class Enum_quest_result K2Node_CustomEvent_qst_result, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor_3, class FName K2Node_CustomEvent_objective_id_2, bool K2Node_CustomEvent_is_removed, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor_2, class FName K2Node_CustomEvent_objective_id_1, enum class Enum_quest_result K2Node_CustomEvent_objective_result_1, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor_1, class FName K2Node_CustomEvent_objective_id, class FName K2Node_CustomEvent_sub_objective_id, int32 K2Node_CustomEvent_objective_current, int32 K2Node_CustomEvent_objective_target, enum class Enum_quest_result K2Node_CustomEvent_objective_result, enum class EEndPlayReason K2Node_Event_EndPlayReason, float K2Node_Event_DeltaSeconds, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor, const struct FS_quest_event& K2Node_CustomEvent_quest_event, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Ed_qst_event__DelegateSignature(class Abp_quest_actor_C* Qst_actor, const struct FS_quest_event& Qst_event);
	void Ed_qst_sub_obj_update__DelegateSignature(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, class FName Sub_objective_id, int32 Objective_current, int32 Objective_target, enum class Enum_quest_result Objective_result);
	void Ed_qst_obj_update__DelegateSignature(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, enum class Enum_quest_result Objective_result);
	void Ed_qst_obj_added__DelegateSignature(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, bool Is_removed);
	void Ed_qst_result__DelegateSignature(class Abp_quest_actor_C* Qst_actor, enum class Enum_quest_result Qst_result);
	void Ed_qst_active__DelegateSignature(class Abp_quest_actor_C* Qst_actor, bool Is_active);
	void Ed_qst_added__DelegateSignature(class Abp_quest_actor_C* Qst_actor, bool Is_removed, bool Is_destroyed);
};

}


