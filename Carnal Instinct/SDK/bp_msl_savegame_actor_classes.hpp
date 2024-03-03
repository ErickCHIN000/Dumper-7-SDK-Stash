#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x2C1 - 0x220)
// BlueprintGeneratedClass bp_msl_savegame_actor.bp_msl_savegame_actor_C
class Abp_msl_savegame_actor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                       Root_arrow;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Max_auto_save_slots;                               // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max_save_slots;                                    // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Save_user_index;                                   // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_game_loading;                                   // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         beginplay_savefile;                                // 0x23D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30BE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Latest_savefile;                                   // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Latest_loadfile;                                   // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Save_name;                                         // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Autosave_name;                                     // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                          Saved_actor_list;                                  // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_save_actor_01_root>         Saved_actor_data;                                  // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Saved_var_list;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_save_var_01_root>           Saved_var_data;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Debug_skip_open_level;                             // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Abp_msl_savegame_actor_C* GetDefaultObj();

	void Save_qstn_var(class FName Root_level_id, class FName Key_id, class FName Var_id, struct FS_quest_savegame& Var_info, bool Is_instanced, bool Current_level, int32 Local_key_index, int32 Local_root_index, class FName Local_level, bool Local_instance, class FName Local_var, class FName Local_key, class FName CallFunc_get_current_level_id_level_id, const struct FS_save_var_05_key& Temp_struct_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, const struct FS_save_var_01_root& Temp_struct_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6);
	void Save_dlgn_var(class FName Root_level_id, class FName Key_id, class FName Var_id, struct FS_dlg_savegame& Var_info, bool Is_instanced, bool Current_level, int32 Local_key_index, int32 Local_root_index, class FName Local_level, bool Local_instance, class FName Local_var, class FName Local_key, class FName CallFunc_get_current_level_id_level_id, const struct FS_save_var_05_key& Temp_struct_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, const struct FS_save_var_01_root& Temp_struct_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6);
	void Remove_saved_actor(class FName Root_level_id, class FName Actor_id, class FName Remove_info, bool Current_level, bool Remove_all, class FName Local_level, const TArray<class FName>& Local_loop, class FName Local_remove_info, bool Local_remove_all, bool Local_current_level, class FName Local_actor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_get_saved_actor_data_is_valid_root, bool CallFunc_get_saved_actor_data_is_valid_actor, int32 CallFunc_get_saved_actor_data_found_root_index, int32 CallFunc_get_saved_actor_data_found_actor_index, const struct FS_save_actor_01_root& CallFunc_get_saved_actor_data_actor_list, const struct FS_save_actor_04_data& CallFunc_get_saved_actor_data_actor_info, class FName CallFunc_get_current_level_id_level_id, TArray<class FName>& K2Node_MakeArray_Array_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_get_saved_actor_data_is_valid_root_1, bool CallFunc_get_saved_actor_data_is_valid_actor_1, int32 CallFunc_get_saved_actor_data_found_root_index_1, int32 CallFunc_get_saved_actor_data_found_actor_index_1, const struct FS_save_actor_01_root& CallFunc_get_saved_actor_data_actor_list_1, const struct FS_save_actor_04_data& CallFunc_get_saved_actor_data_actor_info_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class FName CallFunc_Array_Get_Item_1, bool CallFunc_get_saved_actor_data_is_valid_root_2, bool CallFunc_get_saved_actor_data_is_valid_actor_2, int32 CallFunc_get_saved_actor_data_found_root_index_2, int32 CallFunc_get_saved_actor_data_found_actor_index_2, const struct FS_save_actor_01_root& CallFunc_get_saved_actor_data_actor_list_2, const struct FS_save_actor_04_data& CallFunc_get_saved_actor_data_actor_info_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Max_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1);
	void Save_string_var(class FName Root_level_id, class FName Key_id, class FName Var_id, const class FString& Var_info, bool Is_instanced, bool Current_level, int32 Local_key_index, int32 Local_root_index, class FName Local_level, bool Local_instance, class FName Local_var, class FName Local_key, class FName CallFunc_get_current_level_id_level_id, const struct FS_save_var_05_key& Temp_struct_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, const struct FS_save_var_01_root& Temp_struct_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6);
	void Get_save_list(bool Return_only_auto_saves, bool Return_with_auto_saves, bool Sorted_by_date, TArray<class FString>* Saved_slots, TArray<class FString>* Empty_slots, bool* Is_save_exist, bool* Is_max, const TArray<class FString>& Local_sorted_saves, int32 Local_max_index, const struct FDateTime& Local_max, const TArray<class FString>& Local_reversed_array, bool Local_is_max, int32 Local_index, const TArray<struct FDateTime>& Local_dates, const TArray<class FString>& Local_saves, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_sorted_saves, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_empty_slots, bool CallFunc_get_save_list_sorted_by_date_is_save_exist, bool CallFunc_get_save_list_sorted_by_date_is_max, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max);
	void Clear_instance_var(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FS_save_var_01_root& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FS_save_var_05_key& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, class FName CallFunc_Array_Get_Item_4, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_Max_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class FName CallFunc_Array_Get_Item_5, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Max_ReturnValue_2);
	void Remove_saved_var(class FName Root_level_id, class FName Key_id, class FName Var_id, class FName Remove_info, bool Remove_all, bool Current_level, class FName Local_level, class FName Local_remove_info, const TArray<class FName>& Local_loop, bool Local_remove_all, int32 Local_var_index, class FName Local_var, class FName Local_key, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_get_current_level_id_level_id, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_get_saved_var_data_is_valid_root_1, bool CallFunc_get_saved_var_data_is_valid_key_1, bool CallFunc_get_saved_var_data_is_valid_var_1, int32 CallFunc_get_saved_var_data_found_root_index_1, int32 CallFunc_get_saved_var_data_found_key_index_1, int32 CallFunc_get_saved_var_data_found_var_index_1, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list_1, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info_1, bool CallFunc_get_saved_var_data_found_var_instanced_1, TArray<class FName>& K2Node_MakeArray_Array_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array_2, class FName CallFunc_Array_Get_Item_1, bool CallFunc_get_saved_var_data_is_valid_root_2, bool CallFunc_get_saved_var_data_is_valid_key_2, bool CallFunc_get_saved_var_data_is_valid_var_2, int32 CallFunc_get_saved_var_data_found_root_index_2, int32 CallFunc_get_saved_var_data_found_key_index_2, int32 CallFunc_get_saved_var_data_found_var_index_2, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list_2, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info_2, bool CallFunc_get_saved_var_data_found_var_instanced_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue_1, class FName CallFunc_Array_Get_Item_2, bool CallFunc_get_saved_var_data_is_valid_root_3, bool CallFunc_get_saved_var_data_is_valid_key_3, bool CallFunc_get_saved_var_data_is_valid_var_3, int32 CallFunc_get_saved_var_data_found_root_index_3, int32 CallFunc_get_saved_var_data_found_key_index_3, int32 CallFunc_get_saved_var_data_found_var_index_3, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list_3, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info_3, bool CallFunc_get_saved_var_data_found_var_instanced_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Max_ReturnValue_2, bool CallFunc_get_saved_var_data_is_valid_root_4, bool CallFunc_get_saved_var_data_is_valid_key_4, bool CallFunc_get_saved_var_data_is_valid_var_4, int32 CallFunc_get_saved_var_data_found_root_index_4, int32 CallFunc_get_saved_var_data_found_key_index_4, int32 CallFunc_get_saved_var_data_found_var_index_4, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list_4, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info_4, bool CallFunc_get_saved_var_data_found_var_instanced_4, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2);
	void Get_current_level_id(class FName* Level_id, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const class FString& CallFunc_ToLower_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void Load_object(const class FString& SlotName, class UMsl_object_game_save_C** AsObject_Game_Save, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UMsl_object_game_save_C* K2Node_DynamicCast_AsMsl_Object_Game_Save, bool K2Node_DynamicCast_bSuccess);
	void Get_saved_actor_data(bool Current_level, class FName Root_level_id, class FName Actor_id, bool* Is_valid_root, bool* Is_valid_actor, int32* Found_root_index, int32* Found_actor_index, struct FS_save_actor_01_root* Actor_list, struct FS_save_actor_04_data* Actor_info, int32 Local_tree_index, int32 Local_root_index, class FName Local_level, class FName CallFunc_get_current_level_id_level_id, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_save_actor_01_root& CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, const struct FS_save_actor_04_data& CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1);
	void Call_begingame(bool Is_save_file, bool Local_save_file, class Ubp_msl_identifier_component_C* Local_identifier, class AActor* Local_actor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class Ubp_msl_identifier_component_C* CallFunc_GetComponentByClass_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void Get_saved_var_data(class FName Root_level_id, class FName Key_id, class FName Var_id, bool Current_level, bool* Is_valid_root, bool* Is_valid_key, bool* Is_valid_var, int32* Found_root_index, int32* Found_key_index, int32* Found_var_index, struct FS_save_var_05_key* Found_var_list, struct FS_save_var_data* Found_var_info, bool* Found_var_instanced, bool Local_instance, class FName Local_level, int32 Local_root_index, int32 Local_var_index, int32 Local_key_index, class FName CallFunc_get_current_level_id_level_id, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, const struct FS_save_var_01_root& CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, const struct FS_save_var_05_key& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Find_ReturnValue_2);
	void Save_actor(class FName Root_level_id, class FName Actor_id, class AActor* Actor_reference, bool Current_level, bool Enable_spawn, int32 Local_root_index, const struct FS_save_actor_04_data& Local_data, class FName Local_level, bool Local_current, bool Local_spawn, class Ubp_msl_identifier_component_C* Local_identifier, class FName Local_actor_id, class AActor* Local_actor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FS_save_actor_01_root& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_get_saved_actor_data_is_valid_root, bool CallFunc_get_saved_actor_data_is_valid_actor, int32 CallFunc_get_saved_actor_data_found_root_index, int32 CallFunc_get_saved_actor_data_found_actor_index, const struct FS_save_actor_01_root& CallFunc_get_saved_actor_data_actor_list, const struct FS_save_actor_04_data& CallFunc_get_saved_actor_data_actor_info, class FName CallFunc_get_current_level_id_level_id, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3);
	void Restore_save_data(class UMsl_object_game_save_C* Savegame_object, class FName Restore_level, class FName Local_tree, class FName Local_root, class FName Local_level, int32 Local_level_index, class UMsl_object_game_save_C* Local_save_object, class Ubp_msl_identifier_component_C* Local_identifier, class FName Local_id, class AActor* Local_actor);
	void Collect_save_data(class FName Local_actor_id, class FName Local_id, class Ubp_msl_identifier_component_C* Local_identifier, class AActor* Local_actor, bool CallFunc_get_id_is_valid, class FName CallFunc_get_id_actor_unique_id, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class Ubp_msl_identifier_component_C* CallFunc_GetComponentByClass_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void Init_loadgame(bool CallFunc_get_loading_success, const class FString& CallFunc_get_loading_loaded_save, bool CallFunc_load_data_is_success);
	void Autosave_slot(bool* Success, const TArray<class FString>& Local_empty_slots, const class FString& Local_slot_name, bool Local_new_slot, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_sorted_saves, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_empty_slots, bool CallFunc_get_save_list_sorted_by_date_is_save_exist, bool CallFunc_get_save_list_sorted_by_date_is_max, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_delete_slot_success, bool CallFunc_autosave_slot_success, const class FString& CallFunc_Array_Get_Item_1);
	void Get_loading(bool Remove_loading, bool* Success, class FString* Loaded_save, bool Local_remove, const class FString& Local_save, bool CallFunc_set_loading_success, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UMsl_object_game_save_loader_C* K2Node_DynamicCast_AsMsl_Object_Game_Save_Loader, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void Set_loading(bool Remove_loading, const class FString& Loaded_slot, bool* Success, bool CallFunc_DeleteGameInSlot_ReturnValue, class UMsl_object_game_save_loader_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue);
	void Load_slot(const class FString& Save_slot, const class FString& Local_save_slot, bool CallFunc_set_loading_success, bool CallFunc_get_loading_success, const class FString& CallFunc_get_loading_loaded_save, class UMsl_object_game_save_C* CallFunc_load_object_AsObject_Game_Save, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void Load_data(const class FString& SlotName, bool* Is_success, const class FString& Local_slot_name, bool Local_success, class UMsl_object_game_save_C* Local_savegame, class FName CallFunc_get_current_level_id_level_id, class UMsl_object_game_save_C* CallFunc_load_object_AsObject_Game_Save, class FName CallFunc_get_current_level_id_level_id_1, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void Get_save_list_sorted_by_date(bool Return_only_auto_saves, bool Return_with_auto_saves, TArray<class FString>* Sorted_saves, TArray<class FString>* Empty_slots, bool* Is_save_exist, bool* Is_max, const TArray<class FString>& Local_empty_slots, const TArray<class FString>& Local_sorted_saves, int32 Local_max_index, const struct FDateTime& Local_max, bool Local_is_max, const TArray<struct FDateTime>& Local_dates, const TArray<class FString>& Local_saves, int32 Temp_int_Loop_Counter_Variable, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FDateTime& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Greater_DateTimeDateTime_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Array_Get_Item_2, class UMsl_object_game_save_C* CallFunc_load_object_AsObject_Game_Save, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Delete_slot(bool Remove_all, const class FString& Save_slot, bool* Success, const TArray<class FString>& Local_saves, const class FString& Local_save_slot, bool Local_remove_all, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_DeleteGameInSlot_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void Save_slot(bool New_slot, const class FString& Slot_name, bool* Success, const TArray<class FString>& Local_empty_slots, const class FString& Local_slot_name, bool Local_new_slot, TArray<class FString>& CallFunc_get_save_list_unsorted_saved_slots, TArray<class FString>& CallFunc_get_save_list_unsorted_empty_slots, bool CallFunc_get_save_list_unsorted_is_save_exist, bool CallFunc_get_save_list_unsorted_is_max, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Array_Get_Item);
	void Save_data(const class FString& Save_slot, bool Is_autosave, bool Local_autosave, const class FString& Local_save_slot, class UMsl_object_game_save_C* Local_save_object, class FName CallFunc_get_current_level_id_level_id, const struct FDateTime& CallFunc_Now_ReturnValue, class UMsl_object_game_save_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue);
	void Get_save_list_unsorted(bool Auto_saves_only, bool Return_with_auto_saves, TArray<class FString>* Saved_slots, TArray<class FString>* Empty_slots, bool* Is_save_exist, bool* Is_max, bool Local_return_with_auto, const class FString& Local_name, bool Local_auto_saves, const TArray<class FString>& Local_saves, const TArray<class FString>& Local_empty, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_3);
	void ReceiveBeginPlay();
	void Call_game_loaded();
	void Custom_override_loading(class UMsl_object_game_save_C* Object_game_save);
	void Custom_override_saving(const class FString& Game_save_slot, bool Is_autosave);
	void ExecuteUbergraph_bp_msl_savegame_actor(int32 EntryPoint, const class FString& K2Node_CustomEvent_game_save_slot, bool K2Node_CustomEvent_is_autosave, TArray<class Abp_msl_savegame_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Abp_msl_savegame_actor_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_MultiGate_FirstRun, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, class UMsl_object_game_save_C* K2Node_CustomEvent_object_game_save, int32 Temp_int_Variable);
};

}


