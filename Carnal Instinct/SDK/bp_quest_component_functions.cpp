#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_quest_component.bp_quest_component_C
// (None)

class UClass* Ubp_quest_component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_quest_component_C");

	return Clss;
}


// bp_quest_component_C bp_quest_component.Default__bp_quest_component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubp_quest_component_C* Ubp_quest_component_C::GetDefaultObj()
{
	static class Ubp_quest_component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubp_quest_component_C*>(Ubp_quest_component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_quest_component.bp_quest_component_C.add_quest_loading
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_unique_id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest_data_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_spawned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_quest_actor_C*           Quest_actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_quest_data                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_unique_id                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Add_quest_loading(class FName Quest_unique_id, class FName Quest_data_id, bool* Is_valid, bool* Is_spawned, class Abp_quest_actor_C** Quest_actor, class FName Local_quest_data, class Abp_quest_actor_C* Local_actor, class FName Local_unique_id, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_quest_actor_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "add_quest_loading");

	Params::Ubp_quest_component_C_Add_quest_loading_Params Parms{};

	Parms.Quest_unique_id = Quest_unique_id;
	Parms.Quest_data_id = Quest_data_id;
	Parms.Local_quest_data = Local_quest_data;
	Parms.Local_actor = Local_actor;
	Parms.Local_unique_id = Local_unique_id;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Is_spawned != nullptr)
		*Is_spawned = Parms.Is_spawned;

	if (Quest_actor != nullptr)
		*Quest_actor = Parms.Quest_actor;

}


// Function bp_quest_component.bp_quest_component_C.destroy_quests
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Destroy_quests(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class Abp_quest_actor_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "destroy_quests");

	Params::Ubp_quest_component_C_Destroy_quests_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.quest_load_info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_quest_savegame>   Local_quest_list                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_savegame_actor_C*    CallFunc_msl_get_savegame_reference_save_actor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_savegame           CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_savegame           CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_msl_get_identifier_component_is_valid                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_msl_get_identifier_component_identifier_reference       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_id_is_valid                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_get_id_actor_unique_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_is_valid_root                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_key                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_saved_var_data_is_valid_var                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_saved_var_data_found_root_index                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_key_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_saved_var_data_found_var_index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_save_var_05_key          CallFunc_get_saved_var_data_found_var_list                       (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_save_var_data            CallFunc_get_saved_var_data_found_var_info                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_saved_var_data_found_var_instanced                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_quest_loading_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_quest_loading_is_spawned                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_quest_actor_C*           CallFunc_add_quest_loading_quest_actor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Quest_load_info(class Abp_quest_actor_C* Local_actor, const TArray<struct FS_quest_savegame>& Local_quest_list, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FS_quest_savegame& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FS_quest_savegame& CallFunc_Array_Get_Item_1, bool CallFunc_msl_get_identifier_component_is_valid, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference, bool CallFunc_get_id_is_valid, class FName CallFunc_get_id_actor_unique_id, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_get_saved_var_data_is_valid_root, bool CallFunc_get_saved_var_data_is_valid_key, bool CallFunc_get_saved_var_data_is_valid_var, int32 CallFunc_get_saved_var_data_found_root_index, int32 CallFunc_get_saved_var_data_found_key_index, int32 CallFunc_get_saved_var_data_found_var_index, const struct FS_save_var_05_key& CallFunc_get_saved_var_data_found_var_list, const struct FS_save_var_data& CallFunc_get_saved_var_data_found_var_info, bool CallFunc_get_saved_var_data_found_var_instanced, bool CallFunc_add_quest_loading_is_valid, bool CallFunc_add_quest_loading_is_spawned, class Abp_quest_actor_C* CallFunc_add_quest_loading_quest_actor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "quest_load_info");

	Params::Ubp_quest_component_C_Quest_load_info_Params Parms{};

	Parms.Local_actor = Local_actor;
	Parms.Local_quest_list = Local_quest_list;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_msl_get_savegame_reference_save_actor = CallFunc_msl_get_savegame_reference_save_actor;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_msl_get_identifier_component_is_valid = CallFunc_msl_get_identifier_component_is_valid;
	Parms.CallFunc_msl_get_identifier_component_identifier_reference = CallFunc_msl_get_identifier_component_identifier_reference;
	Parms.CallFunc_get_id_is_valid = CallFunc_get_id_is_valid;
	Parms.CallFunc_get_id_actor_unique_id = CallFunc_get_id_actor_unique_id;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_get_saved_var_data_is_valid_root = CallFunc_get_saved_var_data_is_valid_root;
	Parms.CallFunc_get_saved_var_data_is_valid_key = CallFunc_get_saved_var_data_is_valid_key;
	Parms.CallFunc_get_saved_var_data_is_valid_var = CallFunc_get_saved_var_data_is_valid_var;
	Parms.CallFunc_get_saved_var_data_found_root_index = CallFunc_get_saved_var_data_found_root_index;
	Parms.CallFunc_get_saved_var_data_found_key_index = CallFunc_get_saved_var_data_found_key_index;
	Parms.CallFunc_get_saved_var_data_found_var_index = CallFunc_get_saved_var_data_found_var_index;
	Parms.CallFunc_get_saved_var_data_found_var_list = CallFunc_get_saved_var_data_found_var_list;
	Parms.CallFunc_get_saved_var_data_found_var_info = CallFunc_get_saved_var_data_found_var_info;
	Parms.CallFunc_get_saved_var_data_found_var_instanced = CallFunc_get_saved_var_data_found_var_instanced;
	Parms.CallFunc_add_quest_loading_is_valid = CallFunc_add_quest_loading_is_valid;
	Parms.CallFunc_add_quest_loading_is_spawned = CallFunc_add_quest_loading_is_spawned;
	Parms.CallFunc_add_quest_loading_quest_actor = CallFunc_add_quest_loading_quest_actor;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.quest_save_info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_msl_savegame_actor_C*    CallFunc_msl_get_savegame_reference_save_actor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_savegame_actor_C*    CallFunc_msl_get_savegame_reference_save_actor_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_identifier_component_is_valid                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_msl_get_identifier_component_identifier_reference       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_id_is_valid                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_get_id_actor_unique_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_identifier_component_is_valid_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_msl_identifier_component_C*CallFunc_msl_get_identifier_component_identifier_reference_1     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_id_is_valid_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_get_id_actor_unique_id_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_savegame           CallFunc_get_save_data_quest_save                                (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Quest_save_info(class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor_1, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_msl_get_identifier_component_is_valid, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference, bool CallFunc_get_id_is_valid, class FName CallFunc_get_id_actor_unique_id, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_msl_get_identifier_component_is_valid_1, class Ubp_msl_identifier_component_C* CallFunc_msl_get_identifier_component_identifier_reference_1, class Abp_quest_actor_C* CallFunc_Array_Get_Item, bool CallFunc_get_id_is_valid_1, class FName CallFunc_get_id_actor_unique_id_1, const struct FS_quest_savegame& CallFunc_get_save_data_quest_save, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "quest_save_info");

	Params::Ubp_quest_component_C_Quest_save_info_Params Parms{};

	Parms.CallFunc_msl_get_savegame_reference_save_actor = CallFunc_msl_get_savegame_reference_save_actor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_msl_get_savegame_reference_save_actor_1 = CallFunc_msl_get_savegame_reference_save_actor_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_msl_get_identifier_component_is_valid = CallFunc_msl_get_identifier_component_is_valid;
	Parms.CallFunc_msl_get_identifier_component_identifier_reference = CallFunc_msl_get_identifier_component_identifier_reference;
	Parms.CallFunc_get_id_is_valid = CallFunc_get_id_is_valid;
	Parms.CallFunc_get_id_actor_unique_id = CallFunc_get_id_actor_unique_id;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_msl_get_identifier_component_is_valid_1 = CallFunc_msl_get_identifier_component_is_valid_1;
	Parms.CallFunc_msl_get_identifier_component_identifier_reference_1 = CallFunc_msl_get_identifier_component_identifier_reference_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_get_id_is_valid_1 = CallFunc_get_id_is_valid_1;
	Parms.CallFunc_get_id_actor_unique_id_1 = CallFunc_get_id_actor_unique_id_1;
	Parms.CallFunc_get_save_data_quest_save = CallFunc_get_save_data_quest_save;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.get_quest_history
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_unique_id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   Latest_time                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Get_quest_history(class FName Quest_unique_id, bool* Is_valid, int32* Found_index, struct FDateTime* Latest_time, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FDateTime& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "get_quest_history");

	Params::Ubp_quest_component_C_Get_quest_history_Params Parms{};

	Parms.Quest_unique_id = Quest_unique_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

	if (Latest_time != nullptr)
		*Latest_time = std::move(Parms.Latest_time);

}


// Function bp_quest_component.bp_quest_component_C.get_quest_active
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_unique_id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Get_quest_active(class FName Quest_unique_id, bool* Is_valid, int32* Found_index, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "get_quest_active");

	Params::Ubp_quest_component_C_Get_quest_active_Params Parms{};

	Parms.Quest_unique_id = Quest_unique_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

}


// Function bp_quest_component.bp_quest_component_C.get_layout_widget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        Quest_widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_01_quest_layout_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Get_layout_widget(bool* Is_valid, class UW_01_quest_layout_C** Quest_widget, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, TArray<class UW_01_quest_layout_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_01_quest_layout_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "get_layout_widget");

	Params::Ubp_quest_component_C_Get_layout_widget_Params Parms{};

	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Quest_widget != nullptr)
		*Quest_widget = Parms.Quest_widget;

}


// Function bp_quest_component.bp_quest_component_C.set_quest_active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_unique_id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove_active                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_remove                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_quest_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_quest_is_valid_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Set_quest_active(class FName Quest_unique_id, bool Remove_active, bool Local_remove, class FName Local_quest_id, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_get_quest_is_valid_1, int32 CallFunc_get_quest_found_index_1, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_get_quest_is_valid_2, int32 CallFunc_get_quest_found_index_2, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_2, class FName CallFunc_Array_Get_Item, bool CallFunc_get_quest_is_valid_3, int32 CallFunc_get_quest_found_index_3, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_3, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "set_quest_active");

	Params::Ubp_quest_component_C_Set_quest_active_Params Parms{};

	Parms.Quest_unique_id = Quest_unique_id;
	Parms.Remove_active = Remove_active;
	Parms.Local_remove = Local_remove;
	Parms.Local_quest_id = Local_quest_id;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_get_quest_is_valid_1 = CallFunc_get_quest_is_valid_1;
	Parms.CallFunc_get_quest_found_index_1 = CallFunc_get_quest_found_index_1;
	Parms.CallFunc_get_quest_quest_actor_1 = CallFunc_get_quest_quest_actor_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_get_quest_is_valid_2 = CallFunc_get_quest_is_valid_2;
	Parms.CallFunc_get_quest_found_index_2 = CallFunc_get_quest_found_index_2;
	Parms.CallFunc_get_quest_quest_actor_2 = CallFunc_get_quest_quest_actor_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_get_quest_is_valid_3 = CallFunc_get_quest_is_valid_3;
	Parms.CallFunc_get_quest_found_index_3 = CallFunc_get_quest_found_index_3;
	Parms.CallFunc_get_quest_quest_actor_3 = CallFunc_get_quest_quest_actor_3;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.remove_quest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_unique_id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_quest_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Remove_quest(class FName Quest_unique_id, class Abp_quest_actor_C* Local_actor, class FName Local_quest_id, int32 Local_index, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "remove_quest");

	Params::Ubp_quest_component_C_Remove_quest_Params Parms{};

	Parms.Quest_unique_id = Quest_unique_id;
	Parms.Local_actor = Local_actor;
	Parms.Local_quest_id = Local_quest_id;
	Parms.Local_index = Local_index;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.get_quest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_unique_id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           Quest_actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_quest_actor_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Get_quest(class FName Quest_unique_id, bool* Is_valid, int32* Found_index, class Abp_quest_actor_C** Quest_actor, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class Abp_quest_actor_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "get_quest");

	Params::Ubp_quest_component_C_Get_quest_Params Parms{};

	Parms.Quest_unique_id = Quest_unique_id;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Found_index != nullptr)
		*Found_index = Parms.Found_index;

	if (Quest_actor != nullptr)
		*Quest_actor = Parms.Quest_actor;

}


// Function bp_quest_component.bp_quest_component_C.add_quest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Quest_unique_id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest_data_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_spawned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_quest_actor_C*           Quest_actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_quest_data                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           Local_actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_unique_id                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Add_quest(class FName Quest_unique_id, class FName Quest_data_id, bool* Is_valid, bool* Is_spawned, class Abp_quest_actor_C** Quest_actor, class FName Local_quest_data, class Abp_quest_actor_C* Local_actor, class FName Local_unique_id, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_quest_actor_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "add_quest");

	Params::Ubp_quest_component_C_Add_quest_Params Parms{};

	Parms.Quest_unique_id = Quest_unique_id;
	Parms.Quest_data_id = Quest_data_id;
	Parms.Local_quest_data = Local_quest_data;
	Parms.Local_actor = Local_actor;
	Parms.Local_unique_id = Local_unique_id;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Is_spawned != nullptr)
		*Is_spawned = Parms.Is_spawned;

	if (Quest_actor != nullptr)
		*Quest_actor = Parms.Quest_actor;

}


// Function bp_quest_component.bp_quest_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void Ubp_quest_component_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_quest_component.bp_quest_component_C.quest_call_result
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Qst_result                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Quest_call_result(class Abp_quest_actor_C* Qst_actor, enum class Enum_quest_result Qst_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "quest_call_result");

	Params::Ubp_quest_component_C_Quest_call_result_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Qst_result = Qst_result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.quest_call_obj_added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_removed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Quest_call_obj_added(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, bool Is_removed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "quest_call_obj_added");

	Params::Ubp_quest_component_C_Quest_call_obj_added_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Objective_id = Objective_id;
	Parms.Is_removed = Is_removed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.quest_call_obj_update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Objective_result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Quest_call_obj_update(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, enum class Enum_quest_result Objective_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "quest_call_obj_update");

	Params::Ubp_quest_component_C_Quest_call_obj_update_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Objective_id = Objective_id;
	Parms.Objective_result = Objective_result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.quest_call_sub_obj_update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Objective_current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Objective_target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Objective_result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Quest_call_sub_obj_update(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, class FName Sub_objective_id, int32 Objective_current, int32 Objective_target, enum class Enum_quest_result Objective_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "quest_call_sub_obj_update");

	Params::Ubp_quest_component_C_Quest_call_sub_obj_update_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Objective_id = Objective_id;
	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Objective_current = Objective_current;
	Parms.Objective_target = Objective_target;
	Parms.Objective_result = Objective_result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ReceiveEndPlay");

	Params::Ubp_quest_component_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ReceiveTick");

	Params::Ubp_quest_component_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.init_player
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubp_quest_component_C::Init_player()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "init_player");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_quest_component.bp_quest_component_C.quest_call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              Quest_event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Quest_call_event(class Abp_quest_actor_C* Qst_actor, const struct FS_quest_event& Quest_event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "quest_call_event");

	Params::Ubp_quest_component_C_Quest_call_event_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Quest_event = Quest_event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ExecuteUbergraph_bp_quest_component
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           K2Node_CustomEvent_qst_actor_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       K2Node_CustomEvent_qst_result                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           K2Node_CustomEvent_qst_actor_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_objective_id_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_is_removed                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_quest_actor_C*           K2Node_CustomEvent_qst_actor_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_objective_id_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       K2Node_CustomEvent_objective_result_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           K2Node_CustomEvent_qst_actor_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_objective_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_sub_objective_id                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_objective_current                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_objective_target                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       K2Node_CustomEvent_objective_result                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           K2Node_CustomEvent_qst_actor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              K2Node_CustomEvent_quest_event                                   (ZeroConstructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::ExecuteUbergraph_bp_quest_component(int32 EntryPoint, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor_4, enum class Enum_quest_result K2Node_CustomEvent_qst_result, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor_3, class FName K2Node_CustomEvent_objective_id_2, bool K2Node_CustomEvent_is_removed, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor_2, class FName K2Node_CustomEvent_objective_id_1, enum class Enum_quest_result K2Node_CustomEvent_objective_result_1, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor_1, class FName K2Node_CustomEvent_objective_id, class FName K2Node_CustomEvent_sub_objective_id, int32 K2Node_CustomEvent_objective_current, int32 K2Node_CustomEvent_objective_target, enum class Enum_quest_result K2Node_CustomEvent_objective_result, enum class EEndPlayReason K2Node_Event_EndPlayReason, float K2Node_Event_DeltaSeconds, class Abp_quest_actor_C* K2Node_CustomEvent_qst_actor, const struct FS_quest_event& K2Node_CustomEvent_quest_event, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ExecuteUbergraph_bp_quest_component");

	Params::Ubp_quest_component_C_ExecuteUbergraph_bp_quest_component_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_qst_actor_4 = K2Node_CustomEvent_qst_actor_4;
	Parms.K2Node_CustomEvent_qst_result = K2Node_CustomEvent_qst_result;
	Parms.K2Node_CustomEvent_qst_actor_3 = K2Node_CustomEvent_qst_actor_3;
	Parms.K2Node_CustomEvent_objective_id_2 = K2Node_CustomEvent_objective_id_2;
	Parms.K2Node_CustomEvent_is_removed = K2Node_CustomEvent_is_removed;
	Parms.K2Node_CustomEvent_qst_actor_2 = K2Node_CustomEvent_qst_actor_2;
	Parms.K2Node_CustomEvent_objective_id_1 = K2Node_CustomEvent_objective_id_1;
	Parms.K2Node_CustomEvent_objective_result_1 = K2Node_CustomEvent_objective_result_1;
	Parms.K2Node_CustomEvent_qst_actor_1 = K2Node_CustomEvent_qst_actor_1;
	Parms.K2Node_CustomEvent_objective_id = K2Node_CustomEvent_objective_id;
	Parms.K2Node_CustomEvent_sub_objective_id = K2Node_CustomEvent_sub_objective_id;
	Parms.K2Node_CustomEvent_objective_current = K2Node_CustomEvent_objective_current;
	Parms.K2Node_CustomEvent_objective_target = K2Node_CustomEvent_objective_target;
	Parms.K2Node_CustomEvent_objective_result = K2Node_CustomEvent_objective_result;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_qst_actor = K2Node_CustomEvent_qst_actor;
	Parms.K2Node_CustomEvent_quest_event = K2Node_CustomEvent_quest_event;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ed_qst_event__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              Qst_event                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Ed_qst_event__DelegateSignature(class Abp_quest_actor_C* Qst_actor, const struct FS_quest_event& Qst_event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ed_qst_event__DelegateSignature");

	Params::Ubp_quest_component_C_Ed_qst_event__DelegateSignature_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Qst_event = Qst_event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ed_qst_sub_obj_update__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Objective_current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Objective_target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Objective_result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Ed_qst_sub_obj_update__DelegateSignature(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, class FName Sub_objective_id, int32 Objective_current, int32 Objective_target, enum class Enum_quest_result Objective_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ed_qst_sub_obj_update__DelegateSignature");

	Params::Ubp_quest_component_C_Ed_qst_sub_obj_update__DelegateSignature_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Objective_id = Objective_id;
	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Objective_current = Objective_current;
	Parms.Objective_target = Objective_target;
	Parms.Objective_result = Objective_result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ed_qst_obj_update__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Objective_result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Ed_qst_obj_update__DelegateSignature(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, enum class Enum_quest_result Objective_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ed_qst_obj_update__DelegateSignature");

	Params::Ubp_quest_component_C_Ed_qst_obj_update__DelegateSignature_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Objective_id = Objective_id;
	Parms.Objective_result = Objective_result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ed_qst_obj_added__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_removed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Ed_qst_obj_added__DelegateSignature(class Abp_quest_actor_C* Qst_actor, class FName Objective_id, bool Is_removed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ed_qst_obj_added__DelegateSignature");

	Params::Ubp_quest_component_C_Ed_qst_obj_added__DelegateSignature_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Objective_id = Objective_id;
	Parms.Is_removed = Is_removed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ed_qst_result__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Qst_result                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_quest_component_C::Ed_qst_result__DelegateSignature(class Abp_quest_actor_C* Qst_actor, enum class Enum_quest_result Qst_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ed_qst_result__DelegateSignature");

	Params::Ubp_quest_component_C_Ed_qst_result__DelegateSignature_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Qst_result = Qst_result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ed_qst_active__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_active                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Ed_qst_active__DelegateSignature(class Abp_quest_actor_C* Qst_actor, bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ed_qst_active__DelegateSignature");

	Params::Ubp_quest_component_C_Ed_qst_active__DelegateSignature_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_component.bp_quest_component_C.ed_qst_added__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Qst_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_removed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_destroyed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_quest_component_C::Ed_qst_added__DelegateSignature(class Abp_quest_actor_C* Qst_actor, bool Is_removed, bool Is_destroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_component_C", "ed_qst_added__DelegateSignature");

	Params::Ubp_quest_component_C_Ed_qst_added__DelegateSignature_Params Parms{};

	Parms.Qst_actor = Qst_actor;
	Parms.Is_removed = Is_removed;
	Parms.Is_destroyed = Is_destroyed;

	UObject::ProcessEvent(Func, &Parms);

}

}


